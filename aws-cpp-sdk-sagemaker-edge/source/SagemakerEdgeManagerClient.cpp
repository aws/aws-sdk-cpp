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

#include <aws/sagemaker-edge/SagemakerEdgeManagerClient.h>
#include <aws/sagemaker-edge/SagemakerEdgeManagerErrorMarshaller.h>
#include <aws/sagemaker-edge/SagemakerEdgeManagerEndpointProvider.h>
#include <aws/sagemaker-edge/model/GetDeploymentsRequest.h>
#include <aws/sagemaker-edge/model/GetDeviceRegistrationRequest.h>
#include <aws/sagemaker-edge/model/SendHeartbeatRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::SagemakerEdgeManager;
using namespace Aws::SagemakerEdgeManager::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

const char* SagemakerEdgeManagerClient::SERVICE_NAME = "sagemaker";
const char* SagemakerEdgeManagerClient::ALLOCATION_TAG = "SagemakerEdgeManagerClient";

SagemakerEdgeManagerClient::SagemakerEdgeManagerClient(const SagemakerEdgeManager::SagemakerEdgeManagerClientConfiguration& clientConfiguration,
                                                       std::shared_ptr<SagemakerEdgeManagerEndpointProviderBase> endpointProvider) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<SagemakerEdgeManagerErrorMarshaller>(ALLOCATION_TAG)),
  m_clientConfiguration(clientConfiguration),
  m_executor(clientConfiguration.executor),
  m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

SagemakerEdgeManagerClient::SagemakerEdgeManagerClient(const AWSCredentials& credentials,
                                                       std::shared_ptr<SagemakerEdgeManagerEndpointProviderBase> endpointProvider,
                                                       const SagemakerEdgeManager::SagemakerEdgeManagerClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<SagemakerEdgeManagerErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

SagemakerEdgeManagerClient::SagemakerEdgeManagerClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                                       std::shared_ptr<SagemakerEdgeManagerEndpointProviderBase> endpointProvider,
                                                       const SagemakerEdgeManager::SagemakerEdgeManagerClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<SagemakerEdgeManagerErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

    /* Legacy constructors due deprecation */
  SagemakerEdgeManagerClient::SagemakerEdgeManagerClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<SagemakerEdgeManagerErrorMarshaller>(ALLOCATION_TAG)),
  m_clientConfiguration(clientConfiguration),
  m_executor(clientConfiguration.executor),
  m_endpointProvider(Aws::MakeShared<SagemakerEdgeManagerEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

SagemakerEdgeManagerClient::SagemakerEdgeManagerClient(const AWSCredentials& credentials,
                                                       const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<SagemakerEdgeManagerErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(Aws::MakeShared<SagemakerEdgeManagerEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

SagemakerEdgeManagerClient::SagemakerEdgeManagerClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                                       const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<SagemakerEdgeManagerErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(Aws::MakeShared<SagemakerEdgeManagerEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

    /* End of legacy constructors due deprecation */
SagemakerEdgeManagerClient::~SagemakerEdgeManagerClient()
{
}

std::shared_ptr<SagemakerEdgeManagerEndpointProviderBase>& SagemakerEdgeManagerClient::accessEndpointProvider()
{
  return m_endpointProvider;
}

void SagemakerEdgeManagerClient::init(const SagemakerEdgeManager::SagemakerEdgeManagerClientConfiguration& config)
{
  AWSClient::SetServiceClientName("Sagemaker Edge");
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config);
}

void SagemakerEdgeManagerClient::OverrideEndpoint(const Aws::String& endpoint)
{
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->OverrideEndpoint(endpoint);
}

GetDeploymentsOutcome SagemakerEdgeManagerClient::GetDeployments(const GetDeploymentsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetDeployments, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetDeployments, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/GetDeployments");
  return GetDeploymentsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetDeploymentsOutcomeCallable SagemakerEdgeManagerClient::GetDeploymentsCallable(const GetDeploymentsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetDeploymentsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetDeployments(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SagemakerEdgeManagerClient::GetDeploymentsAsync(const GetDeploymentsRequest& request, const GetDeploymentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetDeployments(request), context);
    } );
}

GetDeviceRegistrationOutcome SagemakerEdgeManagerClient::GetDeviceRegistration(const GetDeviceRegistrationRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetDeviceRegistration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetDeviceRegistration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/GetDeviceRegistration");
  return GetDeviceRegistrationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetDeviceRegistrationOutcomeCallable SagemakerEdgeManagerClient::GetDeviceRegistrationCallable(const GetDeviceRegistrationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetDeviceRegistrationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetDeviceRegistration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SagemakerEdgeManagerClient::GetDeviceRegistrationAsync(const GetDeviceRegistrationRequest& request, const GetDeviceRegistrationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetDeviceRegistration(request), context);
    } );
}

SendHeartbeatOutcome SagemakerEdgeManagerClient::SendHeartbeat(const SendHeartbeatRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, SendHeartbeat, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, SendHeartbeat, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/SendHeartbeat");
  return SendHeartbeatOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

SendHeartbeatOutcomeCallable SagemakerEdgeManagerClient::SendHeartbeatCallable(const SendHeartbeatRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< SendHeartbeatOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->SendHeartbeat(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SagemakerEdgeManagerClient::SendHeartbeatAsync(const SendHeartbeatRequest& request, const SendHeartbeatResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, SendHeartbeat(request), context);
    } );
}

