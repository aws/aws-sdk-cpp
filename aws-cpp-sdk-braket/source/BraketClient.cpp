﻿/**
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
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
        SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
    Aws::MakeShared<BraketErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

BraketClient::BraketClient(const AWSCredentials& credentials, const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
         SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
    Aws::MakeShared<BraketErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

BraketClient::BraketClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
  const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider,
         SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
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
  SetServiceClientName("Braket");
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

void BraketClient::CancelJobAsync(const CancelJobRequest& request, const CancelJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CancelJobAsyncHelper( request, handler, context ); } );
}

void BraketClient::CancelJobAsyncHelper(const CancelJobRequest& request, const CancelJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CancelJob(request), context);
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

void BraketClient::CancelQuantumTaskAsync(const CancelQuantumTaskRequest& request, const CancelQuantumTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CancelQuantumTaskAsyncHelper( request, handler, context ); } );
}

void BraketClient::CancelQuantumTaskAsyncHelper(const CancelQuantumTaskRequest& request, const CancelQuantumTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CancelQuantumTask(request), context);
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

void BraketClient::CreateJobAsync(const CreateJobRequest& request, const CreateJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateJobAsyncHelper( request, handler, context ); } );
}

void BraketClient::CreateJobAsyncHelper(const CreateJobRequest& request, const CreateJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateJob(request), context);
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

void BraketClient::CreateQuantumTaskAsync(const CreateQuantumTaskRequest& request, const CreateQuantumTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateQuantumTaskAsyncHelper( request, handler, context ); } );
}

void BraketClient::CreateQuantumTaskAsyncHelper(const CreateQuantumTaskRequest& request, const CreateQuantumTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateQuantumTask(request), context);
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

void BraketClient::GetDeviceAsync(const GetDeviceRequest& request, const GetDeviceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetDeviceAsyncHelper( request, handler, context ); } );
}

void BraketClient::GetDeviceAsyncHelper(const GetDeviceRequest& request, const GetDeviceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetDevice(request), context);
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

void BraketClient::GetJobAsync(const GetJobRequest& request, const GetJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetJobAsyncHelper( request, handler, context ); } );
}

void BraketClient::GetJobAsyncHelper(const GetJobRequest& request, const GetJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetJob(request), context);
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

void BraketClient::GetQuantumTaskAsync(const GetQuantumTaskRequest& request, const GetQuantumTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetQuantumTaskAsyncHelper( request, handler, context ); } );
}

void BraketClient::GetQuantumTaskAsyncHelper(const GetQuantumTaskRequest& request, const GetQuantumTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetQuantumTask(request), context);
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

void BraketClient::ListTagsForResourceAsync(const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListTagsForResourceAsyncHelper( request, handler, context ); } );
}

void BraketClient::ListTagsForResourceAsyncHelper(const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListTagsForResource(request), context);
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

void BraketClient::SearchDevicesAsync(const SearchDevicesRequest& request, const SearchDevicesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->SearchDevicesAsyncHelper( request, handler, context ); } );
}

void BraketClient::SearchDevicesAsyncHelper(const SearchDevicesRequest& request, const SearchDevicesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, SearchDevices(request), context);
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

void BraketClient::SearchJobsAsync(const SearchJobsRequest& request, const SearchJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->SearchJobsAsyncHelper( request, handler, context ); } );
}

void BraketClient::SearchJobsAsyncHelper(const SearchJobsRequest& request, const SearchJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, SearchJobs(request), context);
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

void BraketClient::SearchQuantumTasksAsync(const SearchQuantumTasksRequest& request, const SearchQuantumTasksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->SearchQuantumTasksAsyncHelper( request, handler, context ); } );
}

void BraketClient::SearchQuantumTasksAsyncHelper(const SearchQuantumTasksRequest& request, const SearchQuantumTasksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, SearchQuantumTasks(request), context);
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

void BraketClient::TagResourceAsync(const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->TagResourceAsyncHelper( request, handler, context ); } );
}

void BraketClient::TagResourceAsyncHelper(const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, TagResource(request), context);
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

void BraketClient::UntagResourceAsync(const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UntagResourceAsyncHelper( request, handler, context ); } );
}

void BraketClient::UntagResourceAsyncHelper(const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UntagResource(request), context);
}

