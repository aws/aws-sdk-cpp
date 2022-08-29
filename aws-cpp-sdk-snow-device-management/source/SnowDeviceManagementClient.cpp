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

#include <aws/snow-device-management/SnowDeviceManagementClient.h>
#include <aws/snow-device-management/SnowDeviceManagementEndpoint.h>
#include <aws/snow-device-management/SnowDeviceManagementErrorMarshaller.h>
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

static const char* SERVICE_NAME = "snow-device-management";
static const char* ALLOCATION_TAG = "SnowDeviceManagementClient";

SnowDeviceManagementClient::SnowDeviceManagementClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<SnowDeviceManagementErrorMarshaller>(ALLOCATION_TAG)),
  m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

SnowDeviceManagementClient::SnowDeviceManagementClient(const AWSCredentials& credentials,
                                                       const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<SnowDeviceManagementErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

SnowDeviceManagementClient::SnowDeviceManagementClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                                       const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<SnowDeviceManagementErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

SnowDeviceManagementClient::~SnowDeviceManagementClient()
{
}

void SnowDeviceManagementClient::init(const Client::ClientConfiguration& config)
{
  SetServiceClientName("Snow Device Management");
  m_configScheme = SchemeMapper::ToString(config.scheme);
  if (config.endpointOverride.empty())
  {
      m_uri = m_configScheme + "://" + SnowDeviceManagementEndpoint::ForRegion(config.region, config.useDualStack);
  }
  else
  {
      OverrideEndpoint(config.endpointOverride);
  }
}

void SnowDeviceManagementClient::OverrideEndpoint(const Aws::String& endpoint)
{
  if (endpoint.compare(0, 7, "http://") == 0 || endpoint.compare(0, 8, "https://") == 0)
  {
      m_uri = endpoint;
  }
  else
  {
      m_uri = m_configScheme + "://" + endpoint;
  }
}

CancelTaskOutcome SnowDeviceManagementClient::CancelTask(const CancelTaskRequest& request) const
{
  if (!request.TaskIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CancelTask", "Required field: TaskId, is not set");
    return CancelTaskOutcome(Aws::Client::AWSError<SnowDeviceManagementErrors>(SnowDeviceManagementErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TaskId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/task/");
  uri.AddPathSegment(request.GetTaskId());
  uri.AddPathSegments("/cancel");
  return CancelTaskOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context](){ this->CancelTaskAsyncHelper( request, handler, context ); } );
}

void SnowDeviceManagementClient::CancelTaskAsyncHelper(const CancelTaskRequest& request, const CancelTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CancelTask(request), context);
}

CreateTaskOutcome SnowDeviceManagementClient::CreateTask(const CreateTaskRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/task");
  return CreateTaskOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context](){ this->CreateTaskAsyncHelper( request, handler, context ); } );
}

void SnowDeviceManagementClient::CreateTaskAsyncHelper(const CreateTaskRequest& request, const CreateTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateTask(request), context);
}

DescribeDeviceOutcome SnowDeviceManagementClient::DescribeDevice(const DescribeDeviceRequest& request) const
{
  if (!request.ManagedDeviceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeDevice", "Required field: ManagedDeviceId, is not set");
    return DescribeDeviceOutcome(Aws::Client::AWSError<SnowDeviceManagementErrors>(SnowDeviceManagementErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ManagedDeviceId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/managed-device/");
  uri.AddPathSegment(request.GetManagedDeviceId());
  uri.AddPathSegments("/describe");
  return DescribeDeviceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context](){ this->DescribeDeviceAsyncHelper( request, handler, context ); } );
}

void SnowDeviceManagementClient::DescribeDeviceAsyncHelper(const DescribeDeviceRequest& request, const DescribeDeviceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeDevice(request), context);
}

DescribeDeviceEc2InstancesOutcome SnowDeviceManagementClient::DescribeDeviceEc2Instances(const DescribeDeviceEc2InstancesRequest& request) const
{
  if (!request.ManagedDeviceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeDeviceEc2Instances", "Required field: ManagedDeviceId, is not set");
    return DescribeDeviceEc2InstancesOutcome(Aws::Client::AWSError<SnowDeviceManagementErrors>(SnowDeviceManagementErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ManagedDeviceId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/managed-device/");
  uri.AddPathSegment(request.GetManagedDeviceId());
  uri.AddPathSegments("/resources/ec2/describe");
  return DescribeDeviceEc2InstancesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context](){ this->DescribeDeviceEc2InstancesAsyncHelper( request, handler, context ); } );
}

void SnowDeviceManagementClient::DescribeDeviceEc2InstancesAsyncHelper(const DescribeDeviceEc2InstancesRequest& request, const DescribeDeviceEc2InstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeDeviceEc2Instances(request), context);
}

DescribeExecutionOutcome SnowDeviceManagementClient::DescribeExecution(const DescribeExecutionRequest& request) const
{
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
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/task/");
  uri.AddPathSegment(request.GetTaskId());
  uri.AddPathSegments("/execution/");
  uri.AddPathSegment(request.GetManagedDeviceId());
  return DescribeExecutionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context](){ this->DescribeExecutionAsyncHelper( request, handler, context ); } );
}

void SnowDeviceManagementClient::DescribeExecutionAsyncHelper(const DescribeExecutionRequest& request, const DescribeExecutionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeExecution(request), context);
}

DescribeTaskOutcome SnowDeviceManagementClient::DescribeTask(const DescribeTaskRequest& request) const
{
  if (!request.TaskIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeTask", "Required field: TaskId, is not set");
    return DescribeTaskOutcome(Aws::Client::AWSError<SnowDeviceManagementErrors>(SnowDeviceManagementErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TaskId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/task/");
  uri.AddPathSegment(request.GetTaskId());
  return DescribeTaskOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context](){ this->DescribeTaskAsyncHelper( request, handler, context ); } );
}

void SnowDeviceManagementClient::DescribeTaskAsyncHelper(const DescribeTaskRequest& request, const DescribeTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeTask(request), context);
}

ListDeviceResourcesOutcome SnowDeviceManagementClient::ListDeviceResources(const ListDeviceResourcesRequest& request) const
{
  if (!request.ManagedDeviceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListDeviceResources", "Required field: ManagedDeviceId, is not set");
    return ListDeviceResourcesOutcome(Aws::Client::AWSError<SnowDeviceManagementErrors>(SnowDeviceManagementErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ManagedDeviceId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/managed-device/");
  uri.AddPathSegment(request.GetManagedDeviceId());
  uri.AddPathSegments("/resources");
  return ListDeviceResourcesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context](){ this->ListDeviceResourcesAsyncHelper( request, handler, context ); } );
}

void SnowDeviceManagementClient::ListDeviceResourcesAsyncHelper(const ListDeviceResourcesRequest& request, const ListDeviceResourcesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListDeviceResources(request), context);
}

ListDevicesOutcome SnowDeviceManagementClient::ListDevices(const ListDevicesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/managed-devices");
  return ListDevicesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context](){ this->ListDevicesAsyncHelper( request, handler, context ); } );
}

void SnowDeviceManagementClient::ListDevicesAsyncHelper(const ListDevicesRequest& request, const ListDevicesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListDevices(request), context);
}

ListExecutionsOutcome SnowDeviceManagementClient::ListExecutions(const ListExecutionsRequest& request) const
{
  if (!request.TaskIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListExecutions", "Required field: TaskId, is not set");
    return ListExecutionsOutcome(Aws::Client::AWSError<SnowDeviceManagementErrors>(SnowDeviceManagementErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TaskId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/executions");
  return ListExecutionsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context](){ this->ListExecutionsAsyncHelper( request, handler, context ); } );
}

void SnowDeviceManagementClient::ListExecutionsAsyncHelper(const ListExecutionsRequest& request, const ListExecutionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListExecutions(request), context);
}

ListTagsForResourceOutcome SnowDeviceManagementClient::ListTagsForResource(const ListTagsForResourceRequest& request) const
{
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListTagsForResource", "Required field: ResourceArn, is not set");
    return ListTagsForResourceOutcome(Aws::Client::AWSError<SnowDeviceManagementErrors>(SnowDeviceManagementErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/tags/");
  uri.AddPathSegment(request.GetResourceArn());
  return ListTagsForResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context](){ this->ListTagsForResourceAsyncHelper( request, handler, context ); } );
}

void SnowDeviceManagementClient::ListTagsForResourceAsyncHelper(const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListTagsForResource(request), context);
}

ListTasksOutcome SnowDeviceManagementClient::ListTasks(const ListTasksRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/tasks");
  return ListTasksOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context](){ this->ListTasksAsyncHelper( request, handler, context ); } );
}

void SnowDeviceManagementClient::ListTasksAsyncHelper(const ListTasksRequest& request, const ListTasksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListTasks(request), context);
}

TagResourceOutcome SnowDeviceManagementClient::TagResource(const TagResourceRequest& request) const
{
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("TagResource", "Required field: ResourceArn, is not set");
    return TagResourceOutcome(Aws::Client::AWSError<SnowDeviceManagementErrors>(SnowDeviceManagementErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/tags/");
  uri.AddPathSegment(request.GetResourceArn());
  return TagResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context](){ this->TagResourceAsyncHelper( request, handler, context ); } );
}

void SnowDeviceManagementClient::TagResourceAsyncHelper(const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, TagResource(request), context);
}

UntagResourceOutcome SnowDeviceManagementClient::UntagResource(const UntagResourceRequest& request) const
{
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
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/tags/");
  uri.AddPathSegment(request.GetResourceArn());
  return UntagResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context](){ this->UntagResourceAsyncHelper( request, handler, context ); } );
}

void SnowDeviceManagementClient::UntagResourceAsyncHelper(const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UntagResource(request), context);
}

