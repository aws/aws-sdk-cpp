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

#include <aws/route53-recovery-cluster/Route53RecoveryClusterClient.h>
#include <aws/route53-recovery-cluster/Route53RecoveryClusterErrorMarshaller.h>
#include <aws/route53-recovery-cluster/Route53RecoveryClusterEndpointProvider.h>
#include <aws/route53-recovery-cluster/model/GetRoutingControlStateRequest.h>
#include <aws/route53-recovery-cluster/model/ListRoutingControlsRequest.h>
#include <aws/route53-recovery-cluster/model/UpdateRoutingControlStateRequest.h>
#include <aws/route53-recovery-cluster/model/UpdateRoutingControlStatesRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::Route53RecoveryCluster;
using namespace Aws::Route53RecoveryCluster::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

const char* Route53RecoveryClusterClient::SERVICE_NAME = "route53-recovery-cluster";
const char* Route53RecoveryClusterClient::ALLOCATION_TAG = "Route53RecoveryClusterClient";

Route53RecoveryClusterClient::Route53RecoveryClusterClient(const Route53RecoveryCluster::Route53RecoveryClusterClientConfiguration& clientConfiguration,
                                                           std::shared_ptr<Route53RecoveryClusterEndpointProviderBase> endpointProvider) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<Route53RecoveryClusterErrorMarshaller>(ALLOCATION_TAG)),
  m_clientConfiguration(clientConfiguration),
  m_executor(clientConfiguration.executor),
  m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

Route53RecoveryClusterClient::Route53RecoveryClusterClient(const AWSCredentials& credentials,
                                                           std::shared_ptr<Route53RecoveryClusterEndpointProviderBase> endpointProvider,
                                                           const Route53RecoveryCluster::Route53RecoveryClusterClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<Route53RecoveryClusterErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

Route53RecoveryClusterClient::Route53RecoveryClusterClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                                           std::shared_ptr<Route53RecoveryClusterEndpointProviderBase> endpointProvider,
                                                           const Route53RecoveryCluster::Route53RecoveryClusterClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<Route53RecoveryClusterErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

    /* Legacy constructors due deprecation */
  Route53RecoveryClusterClient::Route53RecoveryClusterClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<Route53RecoveryClusterErrorMarshaller>(ALLOCATION_TAG)),
  m_clientConfiguration(clientConfiguration),
  m_executor(clientConfiguration.executor),
  m_endpointProvider(Aws::MakeShared<Route53RecoveryClusterEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

Route53RecoveryClusterClient::Route53RecoveryClusterClient(const AWSCredentials& credentials,
                                                           const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<Route53RecoveryClusterErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(Aws::MakeShared<Route53RecoveryClusterEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

Route53RecoveryClusterClient::Route53RecoveryClusterClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                                           const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<Route53RecoveryClusterErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(Aws::MakeShared<Route53RecoveryClusterEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

    /* End of legacy constructors due deprecation */
Route53RecoveryClusterClient::~Route53RecoveryClusterClient()
{
}

std::shared_ptr<Route53RecoveryClusterEndpointProviderBase>& Route53RecoveryClusterClient::accessEndpointProvider()
{
  return m_endpointProvider;
}

void Route53RecoveryClusterClient::init(const Route53RecoveryCluster::Route53RecoveryClusterClientConfiguration& config)
{
  AWSClient::SetServiceClientName("Route53 Recovery Cluster");
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config);
}

void Route53RecoveryClusterClient::OverrideEndpoint(const Aws::String& endpoint)
{
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->OverrideEndpoint(endpoint);
}

GetRoutingControlStateOutcome Route53RecoveryClusterClient::GetRoutingControlState(const GetRoutingControlStateRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetRoutingControlState, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetRoutingControlState, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetRoutingControlStateOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetRoutingControlStateOutcomeCallable Route53RecoveryClusterClient::GetRoutingControlStateCallable(const GetRoutingControlStateRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetRoutingControlStateOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetRoutingControlState(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void Route53RecoveryClusterClient::GetRoutingControlStateAsync(const GetRoutingControlStateRequest& request, const GetRoutingControlStateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetRoutingControlState(request), context);
    } );
}

ListRoutingControlsOutcome Route53RecoveryClusterClient::ListRoutingControls(const ListRoutingControlsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListRoutingControls, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListRoutingControls, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListRoutingControlsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListRoutingControlsOutcomeCallable Route53RecoveryClusterClient::ListRoutingControlsCallable(const ListRoutingControlsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListRoutingControlsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListRoutingControls(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void Route53RecoveryClusterClient::ListRoutingControlsAsync(const ListRoutingControlsRequest& request, const ListRoutingControlsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListRoutingControls(request), context);
    } );
}

UpdateRoutingControlStateOutcome Route53RecoveryClusterClient::UpdateRoutingControlState(const UpdateRoutingControlStateRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateRoutingControlState, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateRoutingControlState, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return UpdateRoutingControlStateOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateRoutingControlStateOutcomeCallable Route53RecoveryClusterClient::UpdateRoutingControlStateCallable(const UpdateRoutingControlStateRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateRoutingControlStateOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateRoutingControlState(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void Route53RecoveryClusterClient::UpdateRoutingControlStateAsync(const UpdateRoutingControlStateRequest& request, const UpdateRoutingControlStateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateRoutingControlState(request), context);
    } );
}

UpdateRoutingControlStatesOutcome Route53RecoveryClusterClient::UpdateRoutingControlStates(const UpdateRoutingControlStatesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateRoutingControlStates, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateRoutingControlStates, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return UpdateRoutingControlStatesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateRoutingControlStatesOutcomeCallable Route53RecoveryClusterClient::UpdateRoutingControlStatesCallable(const UpdateRoutingControlStatesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateRoutingControlStatesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateRoutingControlStates(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void Route53RecoveryClusterClient::UpdateRoutingControlStatesAsync(const UpdateRoutingControlStatesRequest& request, const UpdateRoutingControlStatesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateRoutingControlStates(request), context);
    } );
}

