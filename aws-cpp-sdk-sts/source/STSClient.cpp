/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/Outcome.h>
#include <aws/core/auth/AWSAuthSigner.h>
#include <aws/core/client/CoreErrors.h>
#include <aws/core/client/RetryStrategy.h>
#include <aws/core/http/HttpClient.h>
#include <aws/core/http/HttpResponse.h>
#include <aws/core/http/HttpClientFactory.h>
#include <aws/core/auth/AWSCredentialsProviderChain.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/threading/Executor.h>
#include <aws/core/utils/DNS.h>
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/core/utils/logging/ErrorMacros.h>

#include <aws/sts/STSClient.h>
#include <aws/sts/STSErrorMarshaller.h>
#include <aws/sts/STSEndpointProvider.h>
#include <aws/sts/model/AssumeRoleRequest.h>
#include <aws/sts/model/AssumeRoleWithSAMLRequest.h>
#include <aws/sts/model/AssumeRoleWithWebIdentityRequest.h>
#include <aws/sts/model/DecodeAuthorizationMessageRequest.h>
#include <aws/sts/model/GetAccessKeyInfoRequest.h>
#include <aws/sts/model/GetCallerIdentityRequest.h>
#include <aws/sts/model/GetFederationTokenRequest.h>
#include <aws/sts/model/GetSessionTokenRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::STS;
using namespace Aws::STS::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Xml;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;


const char* STSClient::SERVICE_NAME = "sts";
const char* STSClient::ALLOCATION_TAG = "STSClient";

STSClient::STSClient(const STS::STSClientConfiguration& clientConfiguration,
                     std::shared_ptr<STSEndpointProviderBase> endpointProvider) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<STSErrorMarshaller>(ALLOCATION_TAG)),
  m_clientConfiguration(clientConfiguration),
  m_executor(clientConfiguration.executor),
  m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

STSClient::STSClient(const AWSCredentials& credentials,
                     std::shared_ptr<STSEndpointProviderBase> endpointProvider,
                     const STS::STSClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<STSErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

STSClient::STSClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                     std::shared_ptr<STSEndpointProviderBase> endpointProvider,
                     const STS::STSClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<STSErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

    /* Legacy constructors due deprecation */
  STSClient::STSClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<STSErrorMarshaller>(ALLOCATION_TAG)),
  m_clientConfiguration(clientConfiguration),
  m_executor(clientConfiguration.executor),
  m_endpointProvider(Aws::MakeShared<STSEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

STSClient::STSClient(const AWSCredentials& credentials,
                     const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<STSErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(Aws::MakeShared<STSEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

STSClient::STSClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                     const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<STSErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(Aws::MakeShared<STSEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

    /* End of legacy constructors due deprecation */
STSClient::~STSClient()
{
}

std::shared_ptr<STSEndpointProviderBase>& STSClient::accessEndpointProvider()
{
  return m_endpointProvider;
}

void STSClient::init(const STS::STSClientConfiguration& config)
{
  AWSClient::SetServiceClientName("STS");
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config);
}

void STSClient::OverrideEndpoint(const Aws::String& endpoint)
{
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->OverrideEndpoint(endpoint);
}

Aws::String STSClient::ConvertRequestToPresignedUrl(const AmazonSerializableWebServiceRequest& requestToConvert, const char* region) const
{
  if (!m_endpointProvider)
  {
    AWS_LOGSTREAM_ERROR(ALLOCATION_TAG, "Presigned URL generating failed. Endpoint provider is not initialized.");
    return "";
  }
  Aws::Endpoint::EndpointParameters endpointParameters;
  endpointParameters.emplace_back(Aws::Endpoint::EndpointParameter("Region", Aws::String(region)));
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(endpointParameters);
  if (!endpointResolutionOutcome.IsSuccess())
  {
    AWS_LOGSTREAM_ERROR(ALLOCATION_TAG, "Endpoint resolution failed: " << endpointResolutionOutcome.GetError().GetMessage());
    return "";
  }
  Aws::StringStream ss;
  ss << "?" << requestToConvert.SerializePayload();
  endpointResolutionOutcome.GetResult().SetQueryString(ss.str());

  return GeneratePresignedUrl(endpointResolutionOutcome.GetResult().GetURI(), Aws::Http::HttpMethod::HTTP_GET, region, 3600);
}

AssumeRoleOutcome STSClient::AssumeRole(const AssumeRoleRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, AssumeRole, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, AssumeRole, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return AssumeRoleOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

AssumeRoleOutcomeCallable STSClient::AssumeRoleCallable(const AssumeRoleRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AssumeRoleOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AssumeRole(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void STSClient::AssumeRoleAsync(const AssumeRoleRequest& request, const AssumeRoleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, AssumeRole(request), context);
    } );
}

AssumeRoleWithSAMLOutcome STSClient::AssumeRoleWithSAML(const AssumeRoleWithSAMLRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, AssumeRoleWithSAML, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, AssumeRoleWithSAML, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return AssumeRoleWithSAMLOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

AssumeRoleWithSAMLOutcomeCallable STSClient::AssumeRoleWithSAMLCallable(const AssumeRoleWithSAMLRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AssumeRoleWithSAMLOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AssumeRoleWithSAML(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void STSClient::AssumeRoleWithSAMLAsync(const AssumeRoleWithSAMLRequest& request, const AssumeRoleWithSAMLResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, AssumeRoleWithSAML(request), context);
    } );
}

AssumeRoleWithWebIdentityOutcome STSClient::AssumeRoleWithWebIdentity(const AssumeRoleWithWebIdentityRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, AssumeRoleWithWebIdentity, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, AssumeRoleWithWebIdentity, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return AssumeRoleWithWebIdentityOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

AssumeRoleWithWebIdentityOutcomeCallable STSClient::AssumeRoleWithWebIdentityCallable(const AssumeRoleWithWebIdentityRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AssumeRoleWithWebIdentityOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AssumeRoleWithWebIdentity(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void STSClient::AssumeRoleWithWebIdentityAsync(const AssumeRoleWithWebIdentityRequest& request, const AssumeRoleWithWebIdentityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, AssumeRoleWithWebIdentity(request), context);
    } );
}

DecodeAuthorizationMessageOutcome STSClient::DecodeAuthorizationMessage(const DecodeAuthorizationMessageRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DecodeAuthorizationMessage, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DecodeAuthorizationMessage, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DecodeAuthorizationMessageOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DecodeAuthorizationMessageOutcomeCallable STSClient::DecodeAuthorizationMessageCallable(const DecodeAuthorizationMessageRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DecodeAuthorizationMessageOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DecodeAuthorizationMessage(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void STSClient::DecodeAuthorizationMessageAsync(const DecodeAuthorizationMessageRequest& request, const DecodeAuthorizationMessageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DecodeAuthorizationMessage(request), context);
    } );
}

GetAccessKeyInfoOutcome STSClient::GetAccessKeyInfo(const GetAccessKeyInfoRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetAccessKeyInfo, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetAccessKeyInfo, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetAccessKeyInfoOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

GetAccessKeyInfoOutcomeCallable STSClient::GetAccessKeyInfoCallable(const GetAccessKeyInfoRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetAccessKeyInfoOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetAccessKeyInfo(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void STSClient::GetAccessKeyInfoAsync(const GetAccessKeyInfoRequest& request, const GetAccessKeyInfoResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetAccessKeyInfo(request), context);
    } );
}

GetCallerIdentityOutcome STSClient::GetCallerIdentity(const GetCallerIdentityRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetCallerIdentity, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetCallerIdentity, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetCallerIdentityOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

GetCallerIdentityOutcomeCallable STSClient::GetCallerIdentityCallable(const GetCallerIdentityRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetCallerIdentityOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetCallerIdentity(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void STSClient::GetCallerIdentityAsync(const GetCallerIdentityRequest& request, const GetCallerIdentityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetCallerIdentity(request), context);
    } );
}

GetFederationTokenOutcome STSClient::GetFederationToken(const GetFederationTokenRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetFederationToken, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetFederationToken, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetFederationTokenOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

GetFederationTokenOutcomeCallable STSClient::GetFederationTokenCallable(const GetFederationTokenRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetFederationTokenOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetFederationToken(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void STSClient::GetFederationTokenAsync(const GetFederationTokenRequest& request, const GetFederationTokenResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetFederationToken(request), context);
    } );
}

GetSessionTokenOutcome STSClient::GetSessionToken(const GetSessionTokenRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetSessionToken, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetSessionToken, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetSessionTokenOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

GetSessionTokenOutcomeCallable STSClient::GetSessionTokenCallable(const GetSessionTokenRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetSessionTokenOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetSessionToken(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void STSClient::GetSessionTokenAsync(const GetSessionTokenRequest& request, const GetSessionTokenResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetSessionToken(request), context);
    } );
}

