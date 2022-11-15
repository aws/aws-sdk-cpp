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

#include <aws/snow-device-management/SnowDeviceManagementClient.h>
#include <aws/snow-device-management/SnowDeviceManagementErrorMarshaller.h>
#include <aws/snow-device-management/SnowDeviceManagementEndpointProvider.h>
#include <aws/snow-device-management/model/CancelTaskRequest.h>
#include <aws/snow-device-management/model/CreateTaskRequest.h>
#include <aws/snow-device-management/model/DescribeDeviceRequest.h>
#include <aws/snow-device-management/model/DescribeDeviceEc2InstancesRequest.h>
#include <aws/snow-device-management/model/DescribeExecutionRequest.h>
#include <aws/snow-device-management/model/DescribeTaskRequest.h>
#include <aws/snow-device-management/model/ListDeviceResourcesRequest.h>
#include <aws/snow-device-management/model/ListDevicesRequest.h>
#include <aws/snow-device-management/model/ListExecutionsRequest.h>
#include <aws/snow-device-management/model/ListTagsForResourceRequest.h>
#include <aws/snow-device-management/model/ListTasksRequest.h>
#include <aws/snow-device-management/model/TagResourceRequest.h>
#include <aws/snow-device-management/model/UntagResourceRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::SnowDeviceManagement;
using namespace Aws::SnowDeviceManagement::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

const char* SnowDeviceManagementClient::SERVICE_NAME = "snow-device-management";
const char* SnowDeviceManagementClient::ALLOCATION_TAG = "SnowDeviceManagementClient";

SnowDeviceManagementClient::SnowDeviceManagementClient(const SnowDeviceManagement::SnowDeviceManagementClientConfiguration& clientConfiguration,
                                                       std::shared_ptr<SnowDeviceManagementEndpointProviderBase> endpointProvider) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<SnowDeviceManagementErrorMarshaller>(ALLOCATION_TAG)),
  m_clientConfiguration(clientConfiguration),
  m_executor(clientConfiguration.executor),
  m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

SnowDeviceManagementClient::SnowDeviceManagementClient(const AWSCredentials& credentials,
                                                       std::shared_ptr<SnowDeviceManagementEndpointProviderBase> endpointProvider,
                                                       const SnowDeviceManagement::SnowDeviceManagementClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<SnowDeviceManagementErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

SnowDeviceManagementClient::SnowDeviceManagementClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                                       std::shared_ptr<SnowDeviceManagementEndpointProviderBase> endpointProvider,
                                                       const SnowDeviceManagement::SnowDeviceManagementClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<SnowDeviceManagementErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

    /* Legacy constructors due deprecation */
  SnowDeviceManagementClient::SnowDeviceManagementClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<SnowDeviceManagementErrorMarshaller>(ALLOCATION_TAG)),
  m_clientConfiguration(clientConfiguration),
  m_executor(clientConfiguration.executor),
  m_endpointProvider(Aws::MakeShared<SnowDeviceManagementEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

SnowDeviceManagementClient::SnowDeviceManagementClient(const AWSCredentials& credentials,
                                                       const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<SnowDeviceManagementErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(Aws::MakeShared<SnowDeviceManagementEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

SnowDeviceManagementClient::SnowDeviceManagementClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                                       const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<SnowDeviceManagementErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(Aws::MakeShared<SnowDeviceManagementEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

    /* End of legacy constructors due deprecation */
SnowDeviceManagementClient::~SnowDeviceManagementClient()
{
}

std::shared_ptr<SnowDeviceManagementEndpointProviderBase>& SnowDeviceManagementClient::accessEndpointProvider()
{
  return m_endpointProvider;
}

void SnowDeviceManagementClient::init(const SnowDeviceManagement::SnowDeviceManagementClientConfiguration& config)
{
  AWSClient::SetServiceClientName("Snow Device Management");
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config);
}

void SnowDeviceManagementClient::OverrideEndpoint(const Aws::String& endpoint)
{
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->OverrideEndpoint(endpoint);
}

CancelTaskOutcome SnowDeviceManagementClient::CancelTask(const CancelTaskRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CancelTask, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.TaskIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CancelTask", "Required field: TaskId, is not set");
    return CancelTaskOutcome(Aws::Client::AWSError<SnowDeviceManagementErrors>(SnowDeviceManagementErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TaskId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CancelTask, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/task/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetTaskId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/cancel");
  return CancelTaskOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CancelTaskOutcomeCallable SnowDeviceManagementClient::CancelTaskCallable(const CancelTaskRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CancelTaskOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CancelTask(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SnowDeviceManagementClient::CancelTaskAsync(const CancelTaskRequest& request, const CancelTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CancelTask(request), context);
    } );
}

CreateTaskOutcome SnowDeviceManagementClient::CreateTask(const CreateTaskRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateTask, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateTask, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/task");
  return CreateTaskOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateTaskOutcomeCallable SnowDeviceManagementClient::CreateTaskCallable(const CreateTaskRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateTaskOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateTask(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SnowDeviceManagementClient::CreateTaskAsync(const CreateTaskRequest& request, const CreateTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateTask(request), context);
    } );
}

DescribeDeviceOutcome SnowDeviceManagementClient::DescribeDevice(const DescribeDeviceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeDevice, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ManagedDeviceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeDevice", "Required field: ManagedDeviceId, is not set");
    return DescribeDeviceOutcome(Aws::Client::AWSError<SnowDeviceManagementErrors>(SnowDeviceManagementErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ManagedDeviceId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeDevice, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/managed-device/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetManagedDeviceId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/describe");
  return DescribeDeviceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeDeviceOutcomeCallable SnowDeviceManagementClient::DescribeDeviceCallable(const DescribeDeviceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeDeviceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeDevice(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SnowDeviceManagementClient::DescribeDeviceAsync(const DescribeDeviceRequest& request, const DescribeDeviceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeDevice(request), context);
    } );
}

DescribeDeviceEc2InstancesOutcome SnowDeviceManagementClient::DescribeDeviceEc2Instances(const DescribeDeviceEc2InstancesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeDeviceEc2Instances, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ManagedDeviceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeDeviceEc2Instances", "Required field: ManagedDeviceId, is not set");
    return DescribeDeviceEc2InstancesOutcome(Aws::Client::AWSError<SnowDeviceManagementErrors>(SnowDeviceManagementErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ManagedDeviceId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeDeviceEc2Instances, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/managed-device/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetManagedDeviceId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/resources/ec2/describe");
  return DescribeDeviceEc2InstancesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeDeviceEc2InstancesOutcomeCallable SnowDeviceManagementClient::DescribeDeviceEc2InstancesCallable(const DescribeDeviceEc2InstancesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeDeviceEc2InstancesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeDeviceEc2Instances(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SnowDeviceManagementClient::DescribeDeviceEc2InstancesAsync(const DescribeDeviceEc2InstancesRequest& request, const DescribeDeviceEc2InstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeDeviceEc2Instances(request), context);
    } );
}

DescribeExecutionOutcome SnowDeviceManagementClient::DescribeExecution(const DescribeExecutionRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeExecution, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ManagedDeviceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeExecution", "Required field: ManagedDeviceId, is not set");
    return DescribeExecutionOutcome(Aws::Client::AWSError<SnowDeviceManagementErrors>(SnowDeviceManagementErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ManagedDeviceId]", false));
  }
  if (!request.TaskIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeExecution", "Required field: TaskId, is not set");
    return DescribeExecutionOutcome(Aws::Client::AWSError<SnowDeviceManagementErrors>(SnowDeviceManagementErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TaskId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeExecution, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/task/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetTaskId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/execution/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetManagedDeviceId());
  return DescribeExecutionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeExecutionOutcomeCallable SnowDeviceManagementClient::DescribeExecutionCallable(const DescribeExecutionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeExecutionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeExecution(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SnowDeviceManagementClient::DescribeExecutionAsync(const DescribeExecutionRequest& request, const DescribeExecutionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeExecution(request), context);
    } );
}

DescribeTaskOutcome SnowDeviceManagementClient::DescribeTask(const DescribeTaskRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeTask, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.TaskIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeTask", "Required field: TaskId, is not set");
    return DescribeTaskOutcome(Aws::Client::AWSError<SnowDeviceManagementErrors>(SnowDeviceManagementErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TaskId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeTask, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/task/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetTaskId());
  return DescribeTaskOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeTaskOutcomeCallable SnowDeviceManagementClient::DescribeTaskCallable(const DescribeTaskRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeTaskOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeTask(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SnowDeviceManagementClient::DescribeTaskAsync(const DescribeTaskRequest& request, const DescribeTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeTask(request), context);
    } );
}

ListDeviceResourcesOutcome SnowDeviceManagementClient::ListDeviceResources(const ListDeviceResourcesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListDeviceResources, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ManagedDeviceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListDeviceResources", "Required field: ManagedDeviceId, is not set");
    return ListDeviceResourcesOutcome(Aws::Client::AWSError<SnowDeviceManagementErrors>(SnowDeviceManagementErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ManagedDeviceId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListDeviceResources, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/managed-device/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetManagedDeviceId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/resources");
  return ListDeviceResourcesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListDeviceResourcesOutcomeCallable SnowDeviceManagementClient::ListDeviceResourcesCallable(const ListDeviceResourcesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListDeviceResourcesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListDeviceResources(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SnowDeviceManagementClient::ListDeviceResourcesAsync(const ListDeviceResourcesRequest& request, const ListDeviceResourcesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListDeviceResources(request), context);
    } );
}

ListDevicesOutcome SnowDeviceManagementClient::ListDevices(const ListDevicesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListDevices, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListDevices, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/managed-devices");
  return ListDevicesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListDevicesOutcomeCallable SnowDeviceManagementClient::ListDevicesCallable(const ListDevicesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListDevicesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListDevices(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SnowDeviceManagementClient::ListDevicesAsync(const ListDevicesRequest& request, const ListDevicesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListDevices(request), context);
    } );
}

ListExecutionsOutcome SnowDeviceManagementClient::ListExecutions(const ListExecutionsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListExecutions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.TaskIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListExecutions", "Required field: TaskId, is not set");
    return ListExecutionsOutcome(Aws::Client::AWSError<SnowDeviceManagementErrors>(SnowDeviceManagementErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TaskId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListExecutions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/executions");
  return ListExecutionsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListExecutionsOutcomeCallable SnowDeviceManagementClient::ListExecutionsCallable(const ListExecutionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListExecutionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListExecutions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SnowDeviceManagementClient::ListExecutionsAsync(const ListExecutionsRequest& request, const ListExecutionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListExecutions(request), context);
    } );
}

ListTagsForResourceOutcome SnowDeviceManagementClient::ListTagsForResource(const ListTagsForResourceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListTagsForResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListTagsForResource", "Required field: ResourceArn, is not set");
    return ListTagsForResourceOutcome(Aws::Client::AWSError<SnowDeviceManagementErrors>(SnowDeviceManagementErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListTagsForResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  return ListTagsForResourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListTagsForResourceOutcomeCallable SnowDeviceManagementClient::ListTagsForResourceCallable(const ListTagsForResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListTagsForResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListTagsForResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SnowDeviceManagementClient::ListTagsForResourceAsync(const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListTagsForResource(request), context);
    } );
}

ListTasksOutcome SnowDeviceManagementClient::ListTasks(const ListTasksRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListTasks, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListTasks, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/tasks");
  return ListTasksOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListTasksOutcomeCallable SnowDeviceManagementClient::ListTasksCallable(const ListTasksRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListTasksOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListTasks(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SnowDeviceManagementClient::ListTasksAsync(const ListTasksRequest& request, const ListTasksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListTasks(request), context);
    } );
}

TagResourceOutcome SnowDeviceManagementClient::TagResource(const TagResourceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, TagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("TagResource", "Required field: ResourceArn, is not set");
    return TagResourceOutcome(Aws::Client::AWSError<SnowDeviceManagementErrors>(SnowDeviceManagementErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, TagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  return TagResourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

TagResourceOutcomeCallable SnowDeviceManagementClient::TagResourceCallable(const TagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< TagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->TagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SnowDeviceManagementClient::TagResourceAsync(const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, TagResource(request), context);
    } );
}

UntagResourceOutcome SnowDeviceManagementClient::UntagResource(const UntagResourceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UntagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: ResourceArn, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<SnowDeviceManagementErrors>(SnowDeviceManagementErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  if (!request.TagKeysHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: TagKeys, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<SnowDeviceManagementErrors>(SnowDeviceManagementErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TagKeys]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UntagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  return UntagResourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

UntagResourceOutcomeCallable SnowDeviceManagementClient::UntagResourceCallable(const UntagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UntagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UntagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SnowDeviceManagementClient::UntagResourceAsync(const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UntagResource(request), context);
    } );
}

