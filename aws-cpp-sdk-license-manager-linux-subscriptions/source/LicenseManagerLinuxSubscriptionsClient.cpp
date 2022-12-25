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

#include <aws/license-manager-linux-subscriptions/LicenseManagerLinuxSubscriptionsClient.h>
#include <aws/license-manager-linux-subscriptions/LicenseManagerLinuxSubscriptionsErrorMarshaller.h>
#include <aws/license-manager-linux-subscriptions/LicenseManagerLinuxSubscriptionsEndpointProvider.h>
#include <aws/license-manager-linux-subscriptions/model/GetServiceSettingsRequest.h>
#include <aws/license-manager-linux-subscriptions/model/ListLinuxSubscriptionInstancesRequest.h>
#include <aws/license-manager-linux-subscriptions/model/ListLinuxSubscriptionsRequest.h>
#include <aws/license-manager-linux-subscriptions/model/UpdateServiceSettingsRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::LicenseManagerLinuxSubscriptions;
using namespace Aws::LicenseManagerLinuxSubscriptions::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

const char* LicenseManagerLinuxSubscriptionsClient::SERVICE_NAME = "license-manager-linux-subscriptions";
const char* LicenseManagerLinuxSubscriptionsClient::ALLOCATION_TAG = "LicenseManagerLinuxSubscriptionsClient";

LicenseManagerLinuxSubscriptionsClient::LicenseManagerLinuxSubscriptionsClient(const LicenseManagerLinuxSubscriptions::LicenseManagerLinuxSubscriptionsClientConfiguration& clientConfiguration,
                                                                               std::shared_ptr<LicenseManagerLinuxSubscriptionsEndpointProviderBase> endpointProvider) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<LicenseManagerLinuxSubscriptionsErrorMarshaller>(ALLOCATION_TAG)),
  m_clientConfiguration(clientConfiguration),
  m_executor(clientConfiguration.executor),
  m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

LicenseManagerLinuxSubscriptionsClient::LicenseManagerLinuxSubscriptionsClient(const AWSCredentials& credentials,
                                                                               std::shared_ptr<LicenseManagerLinuxSubscriptionsEndpointProviderBase> endpointProvider,
                                                                               const LicenseManagerLinuxSubscriptions::LicenseManagerLinuxSubscriptionsClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<LicenseManagerLinuxSubscriptionsErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

LicenseManagerLinuxSubscriptionsClient::LicenseManagerLinuxSubscriptionsClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                                                               std::shared_ptr<LicenseManagerLinuxSubscriptionsEndpointProviderBase> endpointProvider,
                                                                               const LicenseManagerLinuxSubscriptions::LicenseManagerLinuxSubscriptionsClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<LicenseManagerLinuxSubscriptionsErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

    /* Legacy constructors due deprecation */
  LicenseManagerLinuxSubscriptionsClient::LicenseManagerLinuxSubscriptionsClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<LicenseManagerLinuxSubscriptionsErrorMarshaller>(ALLOCATION_TAG)),
  m_clientConfiguration(clientConfiguration),
  m_executor(clientConfiguration.executor),
  m_endpointProvider(Aws::MakeShared<LicenseManagerLinuxSubscriptionsEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

LicenseManagerLinuxSubscriptionsClient::LicenseManagerLinuxSubscriptionsClient(const AWSCredentials& credentials,
                                                                               const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<LicenseManagerLinuxSubscriptionsErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(Aws::MakeShared<LicenseManagerLinuxSubscriptionsEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

LicenseManagerLinuxSubscriptionsClient::LicenseManagerLinuxSubscriptionsClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                                                               const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<LicenseManagerLinuxSubscriptionsErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(Aws::MakeShared<LicenseManagerLinuxSubscriptionsEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

    /* End of legacy constructors due deprecation */
LicenseManagerLinuxSubscriptionsClient::~LicenseManagerLinuxSubscriptionsClient()
{
}

std::shared_ptr<LicenseManagerLinuxSubscriptionsEndpointProviderBase>& LicenseManagerLinuxSubscriptionsClient::accessEndpointProvider()
{
  return m_endpointProvider;
}

void LicenseManagerLinuxSubscriptionsClient::init(const LicenseManagerLinuxSubscriptions::LicenseManagerLinuxSubscriptionsClientConfiguration& config)
{
  AWSClient::SetServiceClientName("License Manager Linux Subscriptions");
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config);
}

void LicenseManagerLinuxSubscriptionsClient::OverrideEndpoint(const Aws::String& endpoint)
{
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->OverrideEndpoint(endpoint);
}

GetServiceSettingsOutcome LicenseManagerLinuxSubscriptionsClient::GetServiceSettings(const GetServiceSettingsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetServiceSettings, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetServiceSettings, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/subscription/GetServiceSettings");
  return GetServiceSettingsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetServiceSettingsOutcomeCallable LicenseManagerLinuxSubscriptionsClient::GetServiceSettingsCallable(const GetServiceSettingsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetServiceSettingsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetServiceSettings(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LicenseManagerLinuxSubscriptionsClient::GetServiceSettingsAsync(const GetServiceSettingsRequest& request, const GetServiceSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetServiceSettings(request), context);
    } );
}

ListLinuxSubscriptionInstancesOutcome LicenseManagerLinuxSubscriptionsClient::ListLinuxSubscriptionInstances(const ListLinuxSubscriptionInstancesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListLinuxSubscriptionInstances, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListLinuxSubscriptionInstances, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/subscription/ListLinuxSubscriptionInstances");
  return ListLinuxSubscriptionInstancesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListLinuxSubscriptionInstancesOutcomeCallable LicenseManagerLinuxSubscriptionsClient::ListLinuxSubscriptionInstancesCallable(const ListLinuxSubscriptionInstancesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListLinuxSubscriptionInstancesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListLinuxSubscriptionInstances(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LicenseManagerLinuxSubscriptionsClient::ListLinuxSubscriptionInstancesAsync(const ListLinuxSubscriptionInstancesRequest& request, const ListLinuxSubscriptionInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListLinuxSubscriptionInstances(request), context);
    } );
}

ListLinuxSubscriptionsOutcome LicenseManagerLinuxSubscriptionsClient::ListLinuxSubscriptions(const ListLinuxSubscriptionsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListLinuxSubscriptions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListLinuxSubscriptions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/subscription/ListLinuxSubscriptions");
  return ListLinuxSubscriptionsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListLinuxSubscriptionsOutcomeCallable LicenseManagerLinuxSubscriptionsClient::ListLinuxSubscriptionsCallable(const ListLinuxSubscriptionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListLinuxSubscriptionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListLinuxSubscriptions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LicenseManagerLinuxSubscriptionsClient::ListLinuxSubscriptionsAsync(const ListLinuxSubscriptionsRequest& request, const ListLinuxSubscriptionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListLinuxSubscriptions(request), context);
    } );
}

UpdateServiceSettingsOutcome LicenseManagerLinuxSubscriptionsClient::UpdateServiceSettings(const UpdateServiceSettingsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateServiceSettings, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateServiceSettings, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/subscription/UpdateServiceSettings");
  return UpdateServiceSettingsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateServiceSettingsOutcomeCallable LicenseManagerLinuxSubscriptionsClient::UpdateServiceSettingsCallable(const UpdateServiceSettingsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateServiceSettingsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateServiceSettings(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LicenseManagerLinuxSubscriptionsClient::UpdateServiceSettingsAsync(const UpdateServiceSettingsRequest& request, const UpdateServiceSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateServiceSettings(request), context);
    } );
}

