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

#include <aws/simspaceweaver/SimSpaceWeaverClient.h>
#include <aws/simspaceweaver/SimSpaceWeaverErrorMarshaller.h>
#include <aws/simspaceweaver/SimSpaceWeaverEndpointProvider.h>
#include <aws/simspaceweaver/model/DeleteAppRequest.h>
#include <aws/simspaceweaver/model/DeleteSimulationRequest.h>
#include <aws/simspaceweaver/model/DescribeAppRequest.h>
#include <aws/simspaceweaver/model/DescribeSimulationRequest.h>
#include <aws/simspaceweaver/model/ListAppsRequest.h>
#include <aws/simspaceweaver/model/ListSimulationsRequest.h>
#include <aws/simspaceweaver/model/ListTagsForResourceRequest.h>
#include <aws/simspaceweaver/model/StartAppRequest.h>
#include <aws/simspaceweaver/model/StartClockRequest.h>
#include <aws/simspaceweaver/model/StartSimulationRequest.h>
#include <aws/simspaceweaver/model/StopAppRequest.h>
#include <aws/simspaceweaver/model/StopClockRequest.h>
#include <aws/simspaceweaver/model/StopSimulationRequest.h>
#include <aws/simspaceweaver/model/TagResourceRequest.h>
#include <aws/simspaceweaver/model/UntagResourceRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::SimSpaceWeaver;
using namespace Aws::SimSpaceWeaver::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

const char* SimSpaceWeaverClient::SERVICE_NAME = "simspaceweaver";
const char* SimSpaceWeaverClient::ALLOCATION_TAG = "SimSpaceWeaverClient";

SimSpaceWeaverClient::SimSpaceWeaverClient(const SimSpaceWeaver::SimSpaceWeaverClientConfiguration& clientConfiguration,
                                           std::shared_ptr<SimSpaceWeaverEndpointProviderBase> endpointProvider) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<SimSpaceWeaverErrorMarshaller>(ALLOCATION_TAG)),
  m_clientConfiguration(clientConfiguration),
  m_executor(clientConfiguration.executor),
  m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

SimSpaceWeaverClient::SimSpaceWeaverClient(const AWSCredentials& credentials,
                                           std::shared_ptr<SimSpaceWeaverEndpointProviderBase> endpointProvider,
                                           const SimSpaceWeaver::SimSpaceWeaverClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<SimSpaceWeaverErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

SimSpaceWeaverClient::SimSpaceWeaverClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                           std::shared_ptr<SimSpaceWeaverEndpointProviderBase> endpointProvider,
                                           const SimSpaceWeaver::SimSpaceWeaverClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<SimSpaceWeaverErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

    /* Legacy constructors due deprecation */
  SimSpaceWeaverClient::SimSpaceWeaverClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<SimSpaceWeaverErrorMarshaller>(ALLOCATION_TAG)),
  m_clientConfiguration(clientConfiguration),
  m_executor(clientConfiguration.executor),
  m_endpointProvider(Aws::MakeShared<SimSpaceWeaverEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

SimSpaceWeaverClient::SimSpaceWeaverClient(const AWSCredentials& credentials,
                                           const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<SimSpaceWeaverErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(Aws::MakeShared<SimSpaceWeaverEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

SimSpaceWeaverClient::SimSpaceWeaverClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                           const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<SimSpaceWeaverErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(Aws::MakeShared<SimSpaceWeaverEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

    /* End of legacy constructors due deprecation */
SimSpaceWeaverClient::~SimSpaceWeaverClient()
{
}

std::shared_ptr<SimSpaceWeaverEndpointProviderBase>& SimSpaceWeaverClient::accessEndpointProvider()
{
  return m_endpointProvider;
}

void SimSpaceWeaverClient::init(const SimSpaceWeaver::SimSpaceWeaverClientConfiguration& config)
{
  AWSClient::SetServiceClientName("SimSpaceWeaver");
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config);
}

void SimSpaceWeaverClient::OverrideEndpoint(const Aws::String& endpoint)
{
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->OverrideEndpoint(endpoint);
}

DeleteAppOutcome SimSpaceWeaverClient::DeleteApp(const DeleteAppRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteApp, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AppHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteApp", "Required field: App, is not set");
    return DeleteAppOutcome(Aws::Client::AWSError<SimSpaceWeaverErrors>(SimSpaceWeaverErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [App]", false));
  }
  if (!request.DomainHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteApp", "Required field: Domain, is not set");
    return DeleteAppOutcome(Aws::Client::AWSError<SimSpaceWeaverErrors>(SimSpaceWeaverErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Domain]", false));
  }
  if (!request.SimulationHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteApp", "Required field: Simulation, is not set");
    return DeleteAppOutcome(Aws::Client::AWSError<SimSpaceWeaverErrors>(SimSpaceWeaverErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Simulation]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteApp, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/deleteapp");
  return DeleteAppOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteAppOutcomeCallable SimSpaceWeaverClient::DeleteAppCallable(const DeleteAppRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteAppOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteApp(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SimSpaceWeaverClient::DeleteAppAsync(const DeleteAppRequest& request, const DeleteAppResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteApp(request), context);
    } );
}

DeleteSimulationOutcome SimSpaceWeaverClient::DeleteSimulation(const DeleteSimulationRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteSimulation, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.SimulationHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteSimulation", "Required field: Simulation, is not set");
    return DeleteSimulationOutcome(Aws::Client::AWSError<SimSpaceWeaverErrors>(SimSpaceWeaverErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Simulation]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteSimulation, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/deletesimulation");
  return DeleteSimulationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteSimulationOutcomeCallable SimSpaceWeaverClient::DeleteSimulationCallable(const DeleteSimulationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteSimulationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteSimulation(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SimSpaceWeaverClient::DeleteSimulationAsync(const DeleteSimulationRequest& request, const DeleteSimulationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteSimulation(request), context);
    } );
}

DescribeAppOutcome SimSpaceWeaverClient::DescribeApp(const DescribeAppRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeApp, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AppHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeApp", "Required field: App, is not set");
    return DescribeAppOutcome(Aws::Client::AWSError<SimSpaceWeaverErrors>(SimSpaceWeaverErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [App]", false));
  }
  if (!request.DomainHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeApp", "Required field: Domain, is not set");
    return DescribeAppOutcome(Aws::Client::AWSError<SimSpaceWeaverErrors>(SimSpaceWeaverErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Domain]", false));
  }
  if (!request.SimulationHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeApp", "Required field: Simulation, is not set");
    return DescribeAppOutcome(Aws::Client::AWSError<SimSpaceWeaverErrors>(SimSpaceWeaverErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Simulation]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeApp, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/describeapp");
  return DescribeAppOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

DescribeAppOutcomeCallable SimSpaceWeaverClient::DescribeAppCallable(const DescribeAppRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeAppOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeApp(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SimSpaceWeaverClient::DescribeAppAsync(const DescribeAppRequest& request, const DescribeAppResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeApp(request), context);
    } );
}

DescribeSimulationOutcome SimSpaceWeaverClient::DescribeSimulation(const DescribeSimulationRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeSimulation, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.SimulationHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeSimulation", "Required field: Simulation, is not set");
    return DescribeSimulationOutcome(Aws::Client::AWSError<SimSpaceWeaverErrors>(SimSpaceWeaverErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Simulation]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeSimulation, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/describesimulation");
  return DescribeSimulationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

DescribeSimulationOutcomeCallable SimSpaceWeaverClient::DescribeSimulationCallable(const DescribeSimulationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeSimulationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeSimulation(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SimSpaceWeaverClient::DescribeSimulationAsync(const DescribeSimulationRequest& request, const DescribeSimulationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeSimulation(request), context);
    } );
}

ListAppsOutcome SimSpaceWeaverClient::ListApps(const ListAppsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListApps, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.SimulationHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListApps", "Required field: Simulation, is not set");
    return ListAppsOutcome(Aws::Client::AWSError<SimSpaceWeaverErrors>(SimSpaceWeaverErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Simulation]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListApps, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/listapps");
  return ListAppsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListAppsOutcomeCallable SimSpaceWeaverClient::ListAppsCallable(const ListAppsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListAppsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListApps(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SimSpaceWeaverClient::ListAppsAsync(const ListAppsRequest& request, const ListAppsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListApps(request), context);
    } );
}

ListSimulationsOutcome SimSpaceWeaverClient::ListSimulations(const ListSimulationsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListSimulations, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListSimulations, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/listsimulations");
  return ListSimulationsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListSimulationsOutcomeCallable SimSpaceWeaverClient::ListSimulationsCallable(const ListSimulationsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListSimulationsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListSimulations(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SimSpaceWeaverClient::ListSimulationsAsync(const ListSimulationsRequest& request, const ListSimulationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListSimulations(request), context);
    } );
}

ListTagsForResourceOutcome SimSpaceWeaverClient::ListTagsForResource(const ListTagsForResourceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListTagsForResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListTagsForResource", "Required field: ResourceArn, is not set");
    return ListTagsForResourceOutcome(Aws::Client::AWSError<SimSpaceWeaverErrors>(SimSpaceWeaverErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListTagsForResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  return ListTagsForResourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListTagsForResourceOutcomeCallable SimSpaceWeaverClient::ListTagsForResourceCallable(const ListTagsForResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListTagsForResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListTagsForResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SimSpaceWeaverClient::ListTagsForResourceAsync(const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListTagsForResource(request), context);
    } );
}

StartAppOutcome SimSpaceWeaverClient::StartApp(const StartAppRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, StartApp, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, StartApp, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/startapp");
  return StartAppOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

StartAppOutcomeCallable SimSpaceWeaverClient::StartAppCallable(const StartAppRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StartAppOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StartApp(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SimSpaceWeaverClient::StartAppAsync(const StartAppRequest& request, const StartAppResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, StartApp(request), context);
    } );
}

StartClockOutcome SimSpaceWeaverClient::StartClock(const StartClockRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, StartClock, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, StartClock, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/startclock");
  return StartClockOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

StartClockOutcomeCallable SimSpaceWeaverClient::StartClockCallable(const StartClockRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StartClockOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StartClock(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SimSpaceWeaverClient::StartClockAsync(const StartClockRequest& request, const StartClockResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, StartClock(request), context);
    } );
}

StartSimulationOutcome SimSpaceWeaverClient::StartSimulation(const StartSimulationRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, StartSimulation, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, StartSimulation, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/startsimulation");
  return StartSimulationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

StartSimulationOutcomeCallable SimSpaceWeaverClient::StartSimulationCallable(const StartSimulationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StartSimulationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StartSimulation(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SimSpaceWeaverClient::StartSimulationAsync(const StartSimulationRequest& request, const StartSimulationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, StartSimulation(request), context);
    } );
}

StopAppOutcome SimSpaceWeaverClient::StopApp(const StopAppRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, StopApp, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, StopApp, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/stopapp");
  return StopAppOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

StopAppOutcomeCallable SimSpaceWeaverClient::StopAppCallable(const StopAppRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StopAppOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StopApp(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SimSpaceWeaverClient::StopAppAsync(const StopAppRequest& request, const StopAppResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, StopApp(request), context);
    } );
}

StopClockOutcome SimSpaceWeaverClient::StopClock(const StopClockRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, StopClock, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, StopClock, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/stopclock");
  return StopClockOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

StopClockOutcomeCallable SimSpaceWeaverClient::StopClockCallable(const StopClockRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StopClockOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StopClock(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SimSpaceWeaverClient::StopClockAsync(const StopClockRequest& request, const StopClockResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, StopClock(request), context);
    } );
}

StopSimulationOutcome SimSpaceWeaverClient::StopSimulation(const StopSimulationRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, StopSimulation, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, StopSimulation, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/stopsimulation");
  return StopSimulationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

StopSimulationOutcomeCallable SimSpaceWeaverClient::StopSimulationCallable(const StopSimulationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StopSimulationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StopSimulation(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SimSpaceWeaverClient::StopSimulationAsync(const StopSimulationRequest& request, const StopSimulationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, StopSimulation(request), context);
    } );
}

TagResourceOutcome SimSpaceWeaverClient::TagResource(const TagResourceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, TagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("TagResource", "Required field: ResourceArn, is not set");
    return TagResourceOutcome(Aws::Client::AWSError<SimSpaceWeaverErrors>(SimSpaceWeaverErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, TagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  return TagResourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

TagResourceOutcomeCallable SimSpaceWeaverClient::TagResourceCallable(const TagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< TagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->TagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SimSpaceWeaverClient::TagResourceAsync(const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, TagResource(request), context);
    } );
}

UntagResourceOutcome SimSpaceWeaverClient::UntagResource(const UntagResourceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UntagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: ResourceArn, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<SimSpaceWeaverErrors>(SimSpaceWeaverErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  if (!request.TagKeysHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: TagKeys, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<SimSpaceWeaverErrors>(SimSpaceWeaverErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TagKeys]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UntagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  return UntagResourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

UntagResourceOutcomeCallable SimSpaceWeaverClient::UntagResourceCallable(const UntagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UntagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UntagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SimSpaceWeaverClient::UntagResourceAsync(const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UntagResource(request), context);
    } );
}

