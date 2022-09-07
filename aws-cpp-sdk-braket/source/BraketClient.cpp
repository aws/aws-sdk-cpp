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

#include <aws/braket/BraketClient.h>
#include <aws/braket/BraketEndpoint.h>
#include <aws/braket/BraketErrorMarshaller.h>
#include <aws/braket/model/CancelJobRequest.h>
#include <aws/braket/model/CancelQuantumTaskRequest.h>
#include <aws/braket/model/CreateJobRequest.h>
#include <aws/braket/model/CreateQuantumTaskRequest.h>
#include <aws/braket/model/GetDeviceRequest.h>
#include <aws/braket/model/GetJobRequest.h>
#include <aws/braket/model/GetQuantumTaskRequest.h>
#include <aws/braket/model/ListTagsForResourceRequest.h>
#include <aws/braket/model/SearchDevicesRequest.h>
#include <aws/braket/model/SearchJobsRequest.h>
#include <aws/braket/model/SearchQuantumTasksRequest.h>
#include <aws/braket/model/TagResourceRequest.h>
#include <aws/braket/model/UntagResourceRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::Braket;
using namespace Aws::Braket::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;

static const char* SERVICE_NAME = "braket";
static const char* ALLOCATION_TAG = "BraketClient";

BraketClient::BraketClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<BraketErrorMarshaller>(ALLOCATION_TAG)),
  m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

BraketClient::BraketClient(const AWSCredentials& credentials,
                           const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<BraketErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

BraketClient::BraketClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                           const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<BraketErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

BraketClient::~BraketClient()
{
}

void BraketClient::init(const Client::ClientConfiguration& config)
{
  AWSClient::SetServiceClientName("Braket");
  m_configScheme = SchemeMapper::ToString(config.scheme);
  if (config.endpointOverride.empty())
  {
      m_uri = m_configScheme + "://" + BraketEndpoint::ForRegion(config.region, config.useDualStack);
  }
  else
  {
      OverrideEndpoint(config.endpointOverride);
  }
}

void BraketClient::OverrideEndpoint(const Aws::String& endpoint)
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

CancelJobOutcome BraketClient::CancelJob(const CancelJobRequest& request) const
{
  if (!request.JobArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CancelJob", "Required field: JobArn, is not set");
    return CancelJobOutcome(Aws::Client::AWSError<BraketErrors>(BraketErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [JobArn]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/job/");
  uri.AddPathSegment(request.GetJobArn());
  uri.AddPathSegments("/cancel");
  return CancelJobOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

CancelJobOutcomeCallable BraketClient::CancelJobCallable(const CancelJobRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CancelJobOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CancelJob(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void BraketClientCancelJobAsyncHelper(BraketClient const * const clientThis, const CancelJobRequest& request, const CancelJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CancelJob(request), context);
}

void BraketClient::CancelJobAsync(const CancelJobRequest& request, const CancelJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ BraketClientCancelJobAsyncHelper( this, request, handler, context ); } );
}

CancelQuantumTaskOutcome BraketClient::CancelQuantumTask(const CancelQuantumTaskRequest& request) const
{
  if (!request.QuantumTaskArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CancelQuantumTask", "Required field: QuantumTaskArn, is not set");
    return CancelQuantumTaskOutcome(Aws::Client::AWSError<BraketErrors>(BraketErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [QuantumTaskArn]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/quantum-task/");
  uri.AddPathSegment(request.GetQuantumTaskArn());
  uri.AddPathSegments("/cancel");
  return CancelQuantumTaskOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

CancelQuantumTaskOutcomeCallable BraketClient::CancelQuantumTaskCallable(const CancelQuantumTaskRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CancelQuantumTaskOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CancelQuantumTask(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void BraketClientCancelQuantumTaskAsyncHelper(BraketClient const * const clientThis, const CancelQuantumTaskRequest& request, const CancelQuantumTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CancelQuantumTask(request), context);
}

void BraketClient::CancelQuantumTaskAsync(const CancelQuantumTaskRequest& request, const CancelQuantumTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ BraketClientCancelQuantumTaskAsyncHelper( this, request, handler, context ); } );
}

CreateJobOutcome BraketClient::CreateJob(const CreateJobRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/job");
  return CreateJobOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateJobOutcomeCallable BraketClient::CreateJobCallable(const CreateJobRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateJobOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateJob(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void BraketClientCreateJobAsyncHelper(BraketClient const * const clientThis, const CreateJobRequest& request, const CreateJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateJob(request), context);
}

void BraketClient::CreateJobAsync(const CreateJobRequest& request, const CreateJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ BraketClientCreateJobAsyncHelper( this, request, handler, context ); } );
}

CreateQuantumTaskOutcome BraketClient::CreateQuantumTask(const CreateQuantumTaskRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/quantum-task");
  return CreateQuantumTaskOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateQuantumTaskOutcomeCallable BraketClient::CreateQuantumTaskCallable(const CreateQuantumTaskRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateQuantumTaskOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateQuantumTask(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void BraketClientCreateQuantumTaskAsyncHelper(BraketClient const * const clientThis, const CreateQuantumTaskRequest& request, const CreateQuantumTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateQuantumTask(request), context);
}

void BraketClient::CreateQuantumTaskAsync(const CreateQuantumTaskRequest& request, const CreateQuantumTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ BraketClientCreateQuantumTaskAsyncHelper( this, request, handler, context ); } );
}

GetDeviceOutcome BraketClient::GetDevice(const GetDeviceRequest& request) const
{
  if (!request.DeviceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetDevice", "Required field: DeviceArn, is not set");
    return GetDeviceOutcome(Aws::Client::AWSError<BraketErrors>(BraketErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DeviceArn]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/device/");
  uri.AddPathSegment(request.GetDeviceArn());
  return GetDeviceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetDeviceOutcomeCallable BraketClient::GetDeviceCallable(const GetDeviceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetDeviceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetDevice(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void BraketClientGetDeviceAsyncHelper(BraketClient const * const clientThis, const GetDeviceRequest& request, const GetDeviceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetDevice(request), context);
}

void BraketClient::GetDeviceAsync(const GetDeviceRequest& request, const GetDeviceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ BraketClientGetDeviceAsyncHelper( this, request, handler, context ); } );
}

GetJobOutcome BraketClient::GetJob(const GetJobRequest& request) const
{
  if (!request.JobArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetJob", "Required field: JobArn, is not set");
    return GetJobOutcome(Aws::Client::AWSError<BraketErrors>(BraketErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [JobArn]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/job/");
  uri.AddPathSegment(request.GetJobArn());
  return GetJobOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetJobOutcomeCallable BraketClient::GetJobCallable(const GetJobRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetJobOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetJob(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void BraketClientGetJobAsyncHelper(BraketClient const * const clientThis, const GetJobRequest& request, const GetJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetJob(request), context);
}

void BraketClient::GetJobAsync(const GetJobRequest& request, const GetJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ BraketClientGetJobAsyncHelper( this, request, handler, context ); } );
}

GetQuantumTaskOutcome BraketClient::GetQuantumTask(const GetQuantumTaskRequest& request) const
{
  if (!request.QuantumTaskArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetQuantumTask", "Required field: QuantumTaskArn, is not set");
    return GetQuantumTaskOutcome(Aws::Client::AWSError<BraketErrors>(BraketErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [QuantumTaskArn]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/quantum-task/");
  uri.AddPathSegment(request.GetQuantumTaskArn());
  return GetQuantumTaskOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetQuantumTaskOutcomeCallable BraketClient::GetQuantumTaskCallable(const GetQuantumTaskRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetQuantumTaskOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetQuantumTask(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void BraketClientGetQuantumTaskAsyncHelper(BraketClient const * const clientThis, const GetQuantumTaskRequest& request, const GetQuantumTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetQuantumTask(request), context);
}

void BraketClient::GetQuantumTaskAsync(const GetQuantumTaskRequest& request, const GetQuantumTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ BraketClientGetQuantumTaskAsyncHelper( this, request, handler, context ); } );
}

ListTagsForResourceOutcome BraketClient::ListTagsForResource(const ListTagsForResourceRequest& request) const
{
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListTagsForResource", "Required field: ResourceArn, is not set");
    return ListTagsForResourceOutcome(Aws::Client::AWSError<BraketErrors>(BraketErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/tags/");
  uri.AddPathSegment(request.GetResourceArn());
  return ListTagsForResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListTagsForResourceOutcomeCallable BraketClient::ListTagsForResourceCallable(const ListTagsForResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListTagsForResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListTagsForResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void BraketClientListTagsForResourceAsyncHelper(BraketClient const * const clientThis, const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListTagsForResource(request), context);
}

void BraketClient::ListTagsForResourceAsync(const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ BraketClientListTagsForResourceAsyncHelper( this, request, handler, context ); } );
}

SearchDevicesOutcome BraketClient::SearchDevices(const SearchDevicesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/devices");
  return SearchDevicesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

SearchDevicesOutcomeCallable BraketClient::SearchDevicesCallable(const SearchDevicesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< SearchDevicesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->SearchDevices(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void BraketClientSearchDevicesAsyncHelper(BraketClient const * const clientThis, const SearchDevicesRequest& request, const SearchDevicesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->SearchDevices(request), context);
}

void BraketClient::SearchDevicesAsync(const SearchDevicesRequest& request, const SearchDevicesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ BraketClientSearchDevicesAsyncHelper( this, request, handler, context ); } );
}

SearchJobsOutcome BraketClient::SearchJobs(const SearchJobsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/jobs");
  return SearchJobsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

SearchJobsOutcomeCallable BraketClient::SearchJobsCallable(const SearchJobsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< SearchJobsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->SearchJobs(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void BraketClientSearchJobsAsyncHelper(BraketClient const * const clientThis, const SearchJobsRequest& request, const SearchJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->SearchJobs(request), context);
}

void BraketClient::SearchJobsAsync(const SearchJobsRequest& request, const SearchJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ BraketClientSearchJobsAsyncHelper( this, request, handler, context ); } );
}

SearchQuantumTasksOutcome BraketClient::SearchQuantumTasks(const SearchQuantumTasksRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/quantum-tasks");
  return SearchQuantumTasksOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

SearchQuantumTasksOutcomeCallable BraketClient::SearchQuantumTasksCallable(const SearchQuantumTasksRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< SearchQuantumTasksOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->SearchQuantumTasks(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void BraketClientSearchQuantumTasksAsyncHelper(BraketClient const * const clientThis, const SearchQuantumTasksRequest& request, const SearchQuantumTasksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->SearchQuantumTasks(request), context);
}

void BraketClient::SearchQuantumTasksAsync(const SearchQuantumTasksRequest& request, const SearchQuantumTasksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ BraketClientSearchQuantumTasksAsyncHelper( this, request, handler, context ); } );
}

TagResourceOutcome BraketClient::TagResource(const TagResourceRequest& request) const
{
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("TagResource", "Required field: ResourceArn, is not set");
    return TagResourceOutcome(Aws::Client::AWSError<BraketErrors>(BraketErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/tags/");
  uri.AddPathSegment(request.GetResourceArn());
  return TagResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

TagResourceOutcomeCallable BraketClient::TagResourceCallable(const TagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< TagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->TagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void BraketClientTagResourceAsyncHelper(BraketClient const * const clientThis, const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->TagResource(request), context);
}

void BraketClient::TagResourceAsync(const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ BraketClientTagResourceAsyncHelper( this, request, handler, context ); } );
}

UntagResourceOutcome BraketClient::UntagResource(const UntagResourceRequest& request) const
{
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: ResourceArn, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<BraketErrors>(BraketErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  if (!request.TagKeysHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: TagKeys, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<BraketErrors>(BraketErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TagKeys]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/tags/");
  uri.AddPathSegment(request.GetResourceArn());
  return UntagResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

UntagResourceOutcomeCallable BraketClient::UntagResourceCallable(const UntagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UntagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UntagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void BraketClientUntagResourceAsyncHelper(BraketClient const * const clientThis, const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UntagResource(request), context);
}

void BraketClient::UntagResourceAsync(const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ BraketClientUntagResourceAsyncHelper( this, request, handler, context ); } );
}

