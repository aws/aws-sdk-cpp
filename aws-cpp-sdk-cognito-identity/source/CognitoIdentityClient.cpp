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
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/threading/Executor.h>
#include <aws/core/utils/DNS.h>
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/core/utils/logging/ErrorMacros.h>

#include <aws/cognito-identity/CognitoIdentityClient.h>
#include <aws/cognito-identity/CognitoIdentityErrorMarshaller.h>
#include <aws/cognito-identity/CognitoIdentityEndpointProvider.h>
#include <aws/cognito-identity/model/CreateIdentityPoolRequest.h>
#include <aws/cognito-identity/model/DeleteIdentitiesRequest.h>
#include <aws/cognito-identity/model/DeleteIdentityPoolRequest.h>
#include <aws/cognito-identity/model/DescribeIdentityRequest.h>
#include <aws/cognito-identity/model/DescribeIdentityPoolRequest.h>
#include <aws/cognito-identity/model/GetCredentialsForIdentityRequest.h>
#include <aws/cognito-identity/model/GetIdRequest.h>
#include <aws/cognito-identity/model/GetIdentityPoolRolesRequest.h>
#include <aws/cognito-identity/model/GetOpenIdTokenRequest.h>
#include <aws/cognito-identity/model/GetOpenIdTokenForDeveloperIdentityRequest.h>
#include <aws/cognito-identity/model/GetPrincipalTagAttributeMapRequest.h>
#include <aws/cognito-identity/model/ListIdentitiesRequest.h>
#include <aws/cognito-identity/model/ListIdentityPoolsRequest.h>
#include <aws/cognito-identity/model/ListTagsForResourceRequest.h>
#include <aws/cognito-identity/model/LookupDeveloperIdentityRequest.h>
#include <aws/cognito-identity/model/MergeDeveloperIdentitiesRequest.h>
#include <aws/cognito-identity/model/SetIdentityPoolRolesRequest.h>
#include <aws/cognito-identity/model/SetPrincipalTagAttributeMapRequest.h>
#include <aws/cognito-identity/model/TagResourceRequest.h>
#include <aws/cognito-identity/model/UnlinkDeveloperIdentityRequest.h>
#include <aws/cognito-identity/model/UnlinkIdentityRequest.h>
#include <aws/cognito-identity/model/UntagResourceRequest.h>
#include <aws/cognito-identity/model/UpdateIdentityPoolRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::CognitoIdentity;
using namespace Aws::CognitoIdentity::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

const char* CognitoIdentityClient::SERVICE_NAME = "cognito-identity";
const char* CognitoIdentityClient::ALLOCATION_TAG = "CognitoIdentityClient";

CognitoIdentityClient::CognitoIdentityClient(const CognitoIdentity::CognitoIdentityClientConfiguration& clientConfiguration,
                                             std::shared_ptr<CognitoIdentityEndpointProviderBase> endpointProvider) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<CognitoIdentityErrorMarshaller>(ALLOCATION_TAG)),
  m_clientConfiguration(clientConfiguration),
  m_executor(clientConfiguration.executor),
  m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

CognitoIdentityClient::CognitoIdentityClient(const AWSCredentials& credentials,
                                             std::shared_ptr<CognitoIdentityEndpointProviderBase> endpointProvider,
                                             const CognitoIdentity::CognitoIdentityClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<CognitoIdentityErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

CognitoIdentityClient::CognitoIdentityClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                             std::shared_ptr<CognitoIdentityEndpointProviderBase> endpointProvider,
                                             const CognitoIdentity::CognitoIdentityClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<CognitoIdentityErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

    /* Legacy constructors due deprecation */
  CognitoIdentityClient::CognitoIdentityClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<CognitoIdentityErrorMarshaller>(ALLOCATION_TAG)),
  m_clientConfiguration(clientConfiguration),
  m_executor(clientConfiguration.executor),
  m_endpointProvider(Aws::MakeShared<CognitoIdentityEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

CognitoIdentityClient::CognitoIdentityClient(const AWSCredentials& credentials,
                                             const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<CognitoIdentityErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(Aws::MakeShared<CognitoIdentityEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

CognitoIdentityClient::CognitoIdentityClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                             const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<CognitoIdentityErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(Aws::MakeShared<CognitoIdentityEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

    /* End of legacy constructors due deprecation */
CognitoIdentityClient::~CognitoIdentityClient()
{
}

std::shared_ptr<CognitoIdentityEndpointProviderBase>& CognitoIdentityClient::accessEndpointProvider()
{
  return m_endpointProvider;
}

void CognitoIdentityClient::init(const CognitoIdentity::CognitoIdentityClientConfiguration& config)
{
  AWSClient::SetServiceClientName("Cognito Identity");
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config);
}

void CognitoIdentityClient::OverrideEndpoint(const Aws::String& endpoint)
{
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->OverrideEndpoint(endpoint);
}

CreateIdentityPoolOutcome CognitoIdentityClient::CreateIdentityPool(const CreateIdentityPoolRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateIdentityPool, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateIdentityPool, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateIdentityPoolOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateIdentityPoolOutcomeCallable CognitoIdentityClient::CreateIdentityPoolCallable(const CreateIdentityPoolRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateIdentityPoolOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateIdentityPool(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CognitoIdentityClient::CreateIdentityPoolAsync(const CreateIdentityPoolRequest& request, const CreateIdentityPoolResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateIdentityPool(request), context);
    } );
}

DeleteIdentitiesOutcome CognitoIdentityClient::DeleteIdentities(const DeleteIdentitiesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteIdentities, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteIdentities, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteIdentitiesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteIdentitiesOutcomeCallable CognitoIdentityClient::DeleteIdentitiesCallable(const DeleteIdentitiesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteIdentitiesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteIdentities(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CognitoIdentityClient::DeleteIdentitiesAsync(const DeleteIdentitiesRequest& request, const DeleteIdentitiesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteIdentities(request), context);
    } );
}

DeleteIdentityPoolOutcome CognitoIdentityClient::DeleteIdentityPool(const DeleteIdentityPoolRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteIdentityPool, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteIdentityPool, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteIdentityPoolOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteIdentityPoolOutcomeCallable CognitoIdentityClient::DeleteIdentityPoolCallable(const DeleteIdentityPoolRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteIdentityPoolOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteIdentityPool(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CognitoIdentityClient::DeleteIdentityPoolAsync(const DeleteIdentityPoolRequest& request, const DeleteIdentityPoolResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteIdentityPool(request), context);
    } );
}

DescribeIdentityOutcome CognitoIdentityClient::DescribeIdentity(const DescribeIdentityRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeIdentity, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeIdentity, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeIdentityOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeIdentityOutcomeCallable CognitoIdentityClient::DescribeIdentityCallable(const DescribeIdentityRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeIdentityOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeIdentity(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CognitoIdentityClient::DescribeIdentityAsync(const DescribeIdentityRequest& request, const DescribeIdentityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeIdentity(request), context);
    } );
}

DescribeIdentityPoolOutcome CognitoIdentityClient::DescribeIdentityPool(const DescribeIdentityPoolRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeIdentityPool, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeIdentityPool, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeIdentityPoolOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeIdentityPoolOutcomeCallable CognitoIdentityClient::DescribeIdentityPoolCallable(const DescribeIdentityPoolRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeIdentityPoolOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeIdentityPool(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CognitoIdentityClient::DescribeIdentityPoolAsync(const DescribeIdentityPoolRequest& request, const DescribeIdentityPoolResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeIdentityPool(request), context);
    } );
}

GetCredentialsForIdentityOutcome CognitoIdentityClient::GetCredentialsForIdentity(const GetCredentialsForIdentityRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetCredentialsForIdentity, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetCredentialsForIdentity, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetCredentialsForIdentityOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::NULL_SIGNER));
}

GetCredentialsForIdentityOutcomeCallable CognitoIdentityClient::GetCredentialsForIdentityCallable(const GetCredentialsForIdentityRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetCredentialsForIdentityOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetCredentialsForIdentity(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CognitoIdentityClient::GetCredentialsForIdentityAsync(const GetCredentialsForIdentityRequest& request, const GetCredentialsForIdentityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetCredentialsForIdentity(request), context);
    } );
}

GetIdOutcome CognitoIdentityClient::GetId(const GetIdRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetId, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetId, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetIdOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::NULL_SIGNER));
}

GetIdOutcomeCallable CognitoIdentityClient::GetIdCallable(const GetIdRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetIdOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetId(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CognitoIdentityClient::GetIdAsync(const GetIdRequest& request, const GetIdResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetId(request), context);
    } );
}

GetIdentityPoolRolesOutcome CognitoIdentityClient::GetIdentityPoolRoles(const GetIdentityPoolRolesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetIdentityPoolRoles, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetIdentityPoolRoles, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetIdentityPoolRolesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetIdentityPoolRolesOutcomeCallable CognitoIdentityClient::GetIdentityPoolRolesCallable(const GetIdentityPoolRolesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetIdentityPoolRolesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetIdentityPoolRoles(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CognitoIdentityClient::GetIdentityPoolRolesAsync(const GetIdentityPoolRolesRequest& request, const GetIdentityPoolRolesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetIdentityPoolRoles(request), context);
    } );
}

GetOpenIdTokenOutcome CognitoIdentityClient::GetOpenIdToken(const GetOpenIdTokenRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetOpenIdToken, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetOpenIdToken, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetOpenIdTokenOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::NULL_SIGNER));
}

GetOpenIdTokenOutcomeCallable CognitoIdentityClient::GetOpenIdTokenCallable(const GetOpenIdTokenRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetOpenIdTokenOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetOpenIdToken(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CognitoIdentityClient::GetOpenIdTokenAsync(const GetOpenIdTokenRequest& request, const GetOpenIdTokenResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetOpenIdToken(request), context);
    } );
}

GetOpenIdTokenForDeveloperIdentityOutcome CognitoIdentityClient::GetOpenIdTokenForDeveloperIdentity(const GetOpenIdTokenForDeveloperIdentityRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetOpenIdTokenForDeveloperIdentity, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetOpenIdTokenForDeveloperIdentity, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetOpenIdTokenForDeveloperIdentityOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetOpenIdTokenForDeveloperIdentityOutcomeCallable CognitoIdentityClient::GetOpenIdTokenForDeveloperIdentityCallable(const GetOpenIdTokenForDeveloperIdentityRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetOpenIdTokenForDeveloperIdentityOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetOpenIdTokenForDeveloperIdentity(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CognitoIdentityClient::GetOpenIdTokenForDeveloperIdentityAsync(const GetOpenIdTokenForDeveloperIdentityRequest& request, const GetOpenIdTokenForDeveloperIdentityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetOpenIdTokenForDeveloperIdentity(request), context);
    } );
}

GetPrincipalTagAttributeMapOutcome CognitoIdentityClient::GetPrincipalTagAttributeMap(const GetPrincipalTagAttributeMapRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetPrincipalTagAttributeMap, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetPrincipalTagAttributeMap, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetPrincipalTagAttributeMapOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetPrincipalTagAttributeMapOutcomeCallable CognitoIdentityClient::GetPrincipalTagAttributeMapCallable(const GetPrincipalTagAttributeMapRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetPrincipalTagAttributeMapOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetPrincipalTagAttributeMap(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CognitoIdentityClient::GetPrincipalTagAttributeMapAsync(const GetPrincipalTagAttributeMapRequest& request, const GetPrincipalTagAttributeMapResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetPrincipalTagAttributeMap(request), context);
    } );
}

ListIdentitiesOutcome CognitoIdentityClient::ListIdentities(const ListIdentitiesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListIdentities, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListIdentities, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListIdentitiesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListIdentitiesOutcomeCallable CognitoIdentityClient::ListIdentitiesCallable(const ListIdentitiesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListIdentitiesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListIdentities(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CognitoIdentityClient::ListIdentitiesAsync(const ListIdentitiesRequest& request, const ListIdentitiesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListIdentities(request), context);
    } );
}

ListIdentityPoolsOutcome CognitoIdentityClient::ListIdentityPools(const ListIdentityPoolsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListIdentityPools, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListIdentityPools, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListIdentityPoolsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListIdentityPoolsOutcomeCallable CognitoIdentityClient::ListIdentityPoolsCallable(const ListIdentityPoolsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListIdentityPoolsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListIdentityPools(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CognitoIdentityClient::ListIdentityPoolsAsync(const ListIdentityPoolsRequest& request, const ListIdentityPoolsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListIdentityPools(request), context);
    } );
}

ListTagsForResourceOutcome CognitoIdentityClient::ListTagsForResource(const ListTagsForResourceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListTagsForResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListTagsForResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListTagsForResourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListTagsForResourceOutcomeCallable CognitoIdentityClient::ListTagsForResourceCallable(const ListTagsForResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListTagsForResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListTagsForResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CognitoIdentityClient::ListTagsForResourceAsync(const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListTagsForResource(request), context);
    } );
}

LookupDeveloperIdentityOutcome CognitoIdentityClient::LookupDeveloperIdentity(const LookupDeveloperIdentityRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, LookupDeveloperIdentity, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, LookupDeveloperIdentity, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return LookupDeveloperIdentityOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

LookupDeveloperIdentityOutcomeCallable CognitoIdentityClient::LookupDeveloperIdentityCallable(const LookupDeveloperIdentityRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< LookupDeveloperIdentityOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->LookupDeveloperIdentity(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CognitoIdentityClient::LookupDeveloperIdentityAsync(const LookupDeveloperIdentityRequest& request, const LookupDeveloperIdentityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, LookupDeveloperIdentity(request), context);
    } );
}

MergeDeveloperIdentitiesOutcome CognitoIdentityClient::MergeDeveloperIdentities(const MergeDeveloperIdentitiesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, MergeDeveloperIdentities, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, MergeDeveloperIdentities, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return MergeDeveloperIdentitiesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

MergeDeveloperIdentitiesOutcomeCallable CognitoIdentityClient::MergeDeveloperIdentitiesCallable(const MergeDeveloperIdentitiesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< MergeDeveloperIdentitiesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->MergeDeveloperIdentities(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CognitoIdentityClient::MergeDeveloperIdentitiesAsync(const MergeDeveloperIdentitiesRequest& request, const MergeDeveloperIdentitiesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, MergeDeveloperIdentities(request), context);
    } );
}

SetIdentityPoolRolesOutcome CognitoIdentityClient::SetIdentityPoolRoles(const SetIdentityPoolRolesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, SetIdentityPoolRoles, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, SetIdentityPoolRoles, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return SetIdentityPoolRolesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

SetIdentityPoolRolesOutcomeCallable CognitoIdentityClient::SetIdentityPoolRolesCallable(const SetIdentityPoolRolesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< SetIdentityPoolRolesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->SetIdentityPoolRoles(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CognitoIdentityClient::SetIdentityPoolRolesAsync(const SetIdentityPoolRolesRequest& request, const SetIdentityPoolRolesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, SetIdentityPoolRoles(request), context);
    } );
}

SetPrincipalTagAttributeMapOutcome CognitoIdentityClient::SetPrincipalTagAttributeMap(const SetPrincipalTagAttributeMapRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, SetPrincipalTagAttributeMap, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, SetPrincipalTagAttributeMap, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return SetPrincipalTagAttributeMapOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

SetPrincipalTagAttributeMapOutcomeCallable CognitoIdentityClient::SetPrincipalTagAttributeMapCallable(const SetPrincipalTagAttributeMapRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< SetPrincipalTagAttributeMapOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->SetPrincipalTagAttributeMap(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CognitoIdentityClient::SetPrincipalTagAttributeMapAsync(const SetPrincipalTagAttributeMapRequest& request, const SetPrincipalTagAttributeMapResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, SetPrincipalTagAttributeMap(request), context);
    } );
}

TagResourceOutcome CognitoIdentityClient::TagResource(const TagResourceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, TagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, TagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return TagResourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

TagResourceOutcomeCallable CognitoIdentityClient::TagResourceCallable(const TagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< TagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->TagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CognitoIdentityClient::TagResourceAsync(const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, TagResource(request), context);
    } );
}

UnlinkDeveloperIdentityOutcome CognitoIdentityClient::UnlinkDeveloperIdentity(const UnlinkDeveloperIdentityRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UnlinkDeveloperIdentity, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UnlinkDeveloperIdentity, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return UnlinkDeveloperIdentityOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UnlinkDeveloperIdentityOutcomeCallable CognitoIdentityClient::UnlinkDeveloperIdentityCallable(const UnlinkDeveloperIdentityRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UnlinkDeveloperIdentityOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UnlinkDeveloperIdentity(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CognitoIdentityClient::UnlinkDeveloperIdentityAsync(const UnlinkDeveloperIdentityRequest& request, const UnlinkDeveloperIdentityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UnlinkDeveloperIdentity(request), context);
    } );
}

UnlinkIdentityOutcome CognitoIdentityClient::UnlinkIdentity(const UnlinkIdentityRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UnlinkIdentity, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UnlinkIdentity, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return UnlinkIdentityOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::NULL_SIGNER));
}

UnlinkIdentityOutcomeCallable CognitoIdentityClient::UnlinkIdentityCallable(const UnlinkIdentityRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UnlinkIdentityOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UnlinkIdentity(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CognitoIdentityClient::UnlinkIdentityAsync(const UnlinkIdentityRequest& request, const UnlinkIdentityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UnlinkIdentity(request), context);
    } );
}

UntagResourceOutcome CognitoIdentityClient::UntagResource(const UntagResourceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UntagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UntagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return UntagResourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UntagResourceOutcomeCallable CognitoIdentityClient::UntagResourceCallable(const UntagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UntagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UntagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CognitoIdentityClient::UntagResourceAsync(const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UntagResource(request), context);
    } );
}

UpdateIdentityPoolOutcome CognitoIdentityClient::UpdateIdentityPool(const UpdateIdentityPoolRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateIdentityPool, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateIdentityPool, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return UpdateIdentityPoolOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateIdentityPoolOutcomeCallable CognitoIdentityClient::UpdateIdentityPoolCallable(const UpdateIdentityPoolRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateIdentityPoolOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateIdentityPool(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CognitoIdentityClient::UpdateIdentityPoolAsync(const UpdateIdentityPoolRequest& request, const UpdateIdentityPoolResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateIdentityPool(request), context);
    } );
}

