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

#include <aws/mediapackage/MediaPackageClient.h>
#include <aws/mediapackage/MediaPackageEndpoint.h>
#include <aws/mediapackage/MediaPackageErrorMarshaller.h>
#include <aws/mediapackage/model/ConfigureLogsRequest.h>
#include <aws/mediapackage/model/CreateChannelRequest.h>
#include <aws/mediapackage/model/CreateHarvestJobRequest.h>
#include <aws/mediapackage/model/CreateOriginEndpointRequest.h>
#include <aws/mediapackage/model/DeleteChannelRequest.h>
#include <aws/mediapackage/model/DeleteOriginEndpointRequest.h>
#include <aws/mediapackage/model/DescribeChannelRequest.h>
#include <aws/mediapackage/model/DescribeHarvestJobRequest.h>
#include <aws/mediapackage/model/DescribeOriginEndpointRequest.h>
#include <aws/mediapackage/model/ListChannelsRequest.h>
#include <aws/mediapackage/model/ListHarvestJobsRequest.h>
#include <aws/mediapackage/model/ListOriginEndpointsRequest.h>
#include <aws/mediapackage/model/ListTagsForResourceRequest.h>
#include <aws/mediapackage/model/RotateIngestEndpointCredentialsRequest.h>
#include <aws/mediapackage/model/TagResourceRequest.h>
#include <aws/mediapackage/model/UntagResourceRequest.h>
#include <aws/mediapackage/model/UpdateChannelRequest.h>
#include <aws/mediapackage/model/UpdateOriginEndpointRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::MediaPackage;
using namespace Aws::MediaPackage::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;

static const char* SERVICE_NAME = "mediapackage";
static const char* ALLOCATION_TAG = "MediaPackageClient";


MediaPackageClient::MediaPackageClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
        SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
    Aws::MakeShared<MediaPackageErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

MediaPackageClient::MediaPackageClient(const AWSCredentials& credentials, const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
         SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
    Aws::MakeShared<MediaPackageErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

MediaPackageClient::MediaPackageClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
  const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider,
         SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
    Aws::MakeShared<MediaPackageErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

MediaPackageClient::~MediaPackageClient()
{
}

void MediaPackageClient::init(const Client::ClientConfiguration& config)
{
  SetServiceClientName("MediaPackage");
  m_configScheme = SchemeMapper::ToString(config.scheme);
  if (config.endpointOverride.empty())
  {
      m_uri = m_configScheme + "://" + MediaPackageEndpoint::ForRegion(config.region, config.useDualStack);
  }
  else
  {
      OverrideEndpoint(config.endpointOverride);
  }
}

void MediaPackageClient::OverrideEndpoint(const Aws::String& endpoint)
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

ConfigureLogsOutcome MediaPackageClient::ConfigureLogs(const ConfigureLogsRequest& request) const
{
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ConfigureLogs", "Required field: Id, is not set");
    return ConfigureLogsOutcome(Aws::Client::AWSError<MediaPackageErrors>(MediaPackageErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/channels/");
  uri.AddPathSegment(request.GetId());
  uri.AddPathSegments("/configure_logs");
  return ConfigureLogsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

ConfigureLogsOutcomeCallable MediaPackageClient::ConfigureLogsCallable(const ConfigureLogsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ConfigureLogsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ConfigureLogs(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MediaPackageClient::ConfigureLogsAsync(const ConfigureLogsRequest& request, const ConfigureLogsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ConfigureLogsAsyncHelper( request, handler, context ); } );
}

void MediaPackageClient::ConfigureLogsAsyncHelper(const ConfigureLogsRequest& request, const ConfigureLogsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ConfigureLogs(request), context);
}

CreateChannelOutcome MediaPackageClient::CreateChannel(const CreateChannelRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/channels");
  return CreateChannelOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateChannelOutcomeCallable MediaPackageClient::CreateChannelCallable(const CreateChannelRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateChannelOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateChannel(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MediaPackageClient::CreateChannelAsync(const CreateChannelRequest& request, const CreateChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateChannelAsyncHelper( request, handler, context ); } );
}

void MediaPackageClient::CreateChannelAsyncHelper(const CreateChannelRequest& request, const CreateChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateChannel(request), context);
}

CreateHarvestJobOutcome MediaPackageClient::CreateHarvestJob(const CreateHarvestJobRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/harvest_jobs");
  return CreateHarvestJobOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateHarvestJobOutcomeCallable MediaPackageClient::CreateHarvestJobCallable(const CreateHarvestJobRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateHarvestJobOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateHarvestJob(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MediaPackageClient::CreateHarvestJobAsync(const CreateHarvestJobRequest& request, const CreateHarvestJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateHarvestJobAsyncHelper( request, handler, context ); } );
}

void MediaPackageClient::CreateHarvestJobAsyncHelper(const CreateHarvestJobRequest& request, const CreateHarvestJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateHarvestJob(request), context);
}

CreateOriginEndpointOutcome MediaPackageClient::CreateOriginEndpoint(const CreateOriginEndpointRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/origin_endpoints");
  return CreateOriginEndpointOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateOriginEndpointOutcomeCallable MediaPackageClient::CreateOriginEndpointCallable(const CreateOriginEndpointRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateOriginEndpointOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateOriginEndpoint(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MediaPackageClient::CreateOriginEndpointAsync(const CreateOriginEndpointRequest& request, const CreateOriginEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateOriginEndpointAsyncHelper( request, handler, context ); } );
}

void MediaPackageClient::CreateOriginEndpointAsyncHelper(const CreateOriginEndpointRequest& request, const CreateOriginEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateOriginEndpoint(request), context);
}

DeleteChannelOutcome MediaPackageClient::DeleteChannel(const DeleteChannelRequest& request) const
{
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteChannel", "Required field: Id, is not set");
    return DeleteChannelOutcome(Aws::Client::AWSError<MediaPackageErrors>(MediaPackageErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/channels/");
  uri.AddPathSegment(request.GetId());
  return DeleteChannelOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteChannelOutcomeCallable MediaPackageClient::DeleteChannelCallable(const DeleteChannelRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteChannelOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteChannel(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MediaPackageClient::DeleteChannelAsync(const DeleteChannelRequest& request, const DeleteChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteChannelAsyncHelper( request, handler, context ); } );
}

void MediaPackageClient::DeleteChannelAsyncHelper(const DeleteChannelRequest& request, const DeleteChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteChannel(request), context);
}

DeleteOriginEndpointOutcome MediaPackageClient::DeleteOriginEndpoint(const DeleteOriginEndpointRequest& request) const
{
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteOriginEndpoint", "Required field: Id, is not set");
    return DeleteOriginEndpointOutcome(Aws::Client::AWSError<MediaPackageErrors>(MediaPackageErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/origin_endpoints/");
  uri.AddPathSegment(request.GetId());
  return DeleteOriginEndpointOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteOriginEndpointOutcomeCallable MediaPackageClient::DeleteOriginEndpointCallable(const DeleteOriginEndpointRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteOriginEndpointOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteOriginEndpoint(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MediaPackageClient::DeleteOriginEndpointAsync(const DeleteOriginEndpointRequest& request, const DeleteOriginEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteOriginEndpointAsyncHelper( request, handler, context ); } );
}

void MediaPackageClient::DeleteOriginEndpointAsyncHelper(const DeleteOriginEndpointRequest& request, const DeleteOriginEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteOriginEndpoint(request), context);
}

DescribeChannelOutcome MediaPackageClient::DescribeChannel(const DescribeChannelRequest& request) const
{
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeChannel", "Required field: Id, is not set");
    return DescribeChannelOutcome(Aws::Client::AWSError<MediaPackageErrors>(MediaPackageErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/channels/");
  uri.AddPathSegment(request.GetId());
  return DescribeChannelOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

DescribeChannelOutcomeCallable MediaPackageClient::DescribeChannelCallable(const DescribeChannelRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeChannelOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeChannel(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MediaPackageClient::DescribeChannelAsync(const DescribeChannelRequest& request, const DescribeChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeChannelAsyncHelper( request, handler, context ); } );
}

void MediaPackageClient::DescribeChannelAsyncHelper(const DescribeChannelRequest& request, const DescribeChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeChannel(request), context);
}

DescribeHarvestJobOutcome MediaPackageClient::DescribeHarvestJob(const DescribeHarvestJobRequest& request) const
{
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeHarvestJob", "Required field: Id, is not set");
    return DescribeHarvestJobOutcome(Aws::Client::AWSError<MediaPackageErrors>(MediaPackageErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/harvest_jobs/");
  uri.AddPathSegment(request.GetId());
  return DescribeHarvestJobOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

DescribeHarvestJobOutcomeCallable MediaPackageClient::DescribeHarvestJobCallable(const DescribeHarvestJobRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeHarvestJobOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeHarvestJob(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MediaPackageClient::DescribeHarvestJobAsync(const DescribeHarvestJobRequest& request, const DescribeHarvestJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeHarvestJobAsyncHelper( request, handler, context ); } );
}

void MediaPackageClient::DescribeHarvestJobAsyncHelper(const DescribeHarvestJobRequest& request, const DescribeHarvestJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeHarvestJob(request), context);
}

DescribeOriginEndpointOutcome MediaPackageClient::DescribeOriginEndpoint(const DescribeOriginEndpointRequest& request) const
{
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeOriginEndpoint", "Required field: Id, is not set");
    return DescribeOriginEndpointOutcome(Aws::Client::AWSError<MediaPackageErrors>(MediaPackageErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/origin_endpoints/");
  uri.AddPathSegment(request.GetId());
  return DescribeOriginEndpointOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

DescribeOriginEndpointOutcomeCallable MediaPackageClient::DescribeOriginEndpointCallable(const DescribeOriginEndpointRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeOriginEndpointOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeOriginEndpoint(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MediaPackageClient::DescribeOriginEndpointAsync(const DescribeOriginEndpointRequest& request, const DescribeOriginEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeOriginEndpointAsyncHelper( request, handler, context ); } );
}

void MediaPackageClient::DescribeOriginEndpointAsyncHelper(const DescribeOriginEndpointRequest& request, const DescribeOriginEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeOriginEndpoint(request), context);
}

ListChannelsOutcome MediaPackageClient::ListChannels(const ListChannelsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/channels");
  return ListChannelsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListChannelsOutcomeCallable MediaPackageClient::ListChannelsCallable(const ListChannelsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListChannelsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListChannels(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MediaPackageClient::ListChannelsAsync(const ListChannelsRequest& request, const ListChannelsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListChannelsAsyncHelper( request, handler, context ); } );
}

void MediaPackageClient::ListChannelsAsyncHelper(const ListChannelsRequest& request, const ListChannelsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListChannels(request), context);
}

ListHarvestJobsOutcome MediaPackageClient::ListHarvestJobs(const ListHarvestJobsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/harvest_jobs");
  return ListHarvestJobsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListHarvestJobsOutcomeCallable MediaPackageClient::ListHarvestJobsCallable(const ListHarvestJobsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListHarvestJobsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListHarvestJobs(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MediaPackageClient::ListHarvestJobsAsync(const ListHarvestJobsRequest& request, const ListHarvestJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListHarvestJobsAsyncHelper( request, handler, context ); } );
}

void MediaPackageClient::ListHarvestJobsAsyncHelper(const ListHarvestJobsRequest& request, const ListHarvestJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListHarvestJobs(request), context);
}

ListOriginEndpointsOutcome MediaPackageClient::ListOriginEndpoints(const ListOriginEndpointsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/origin_endpoints");
  return ListOriginEndpointsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListOriginEndpointsOutcomeCallable MediaPackageClient::ListOriginEndpointsCallable(const ListOriginEndpointsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListOriginEndpointsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListOriginEndpoints(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MediaPackageClient::ListOriginEndpointsAsync(const ListOriginEndpointsRequest& request, const ListOriginEndpointsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListOriginEndpointsAsyncHelper( request, handler, context ); } );
}

void MediaPackageClient::ListOriginEndpointsAsyncHelper(const ListOriginEndpointsRequest& request, const ListOriginEndpointsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListOriginEndpoints(request), context);
}

ListTagsForResourceOutcome MediaPackageClient::ListTagsForResource(const ListTagsForResourceRequest& request) const
{
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListTagsForResource", "Required field: ResourceArn, is not set");
    return ListTagsForResourceOutcome(Aws::Client::AWSError<MediaPackageErrors>(MediaPackageErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/tags/");
  uri.AddPathSegment(request.GetResourceArn());
  return ListTagsForResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListTagsForResourceOutcomeCallable MediaPackageClient::ListTagsForResourceCallable(const ListTagsForResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListTagsForResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListTagsForResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MediaPackageClient::ListTagsForResourceAsync(const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListTagsForResourceAsyncHelper( request, handler, context ); } );
}

void MediaPackageClient::ListTagsForResourceAsyncHelper(const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListTagsForResource(request), context);
}

RotateIngestEndpointCredentialsOutcome MediaPackageClient::RotateIngestEndpointCredentials(const RotateIngestEndpointCredentialsRequest& request) const
{
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("RotateIngestEndpointCredentials", "Required field: Id, is not set");
    return RotateIngestEndpointCredentialsOutcome(Aws::Client::AWSError<MediaPackageErrors>(MediaPackageErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  if (!request.IngestEndpointIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("RotateIngestEndpointCredentials", "Required field: IngestEndpointId, is not set");
    return RotateIngestEndpointCredentialsOutcome(Aws::Client::AWSError<MediaPackageErrors>(MediaPackageErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [IngestEndpointId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/channels/");
  uri.AddPathSegment(request.GetId());
  uri.AddPathSegments("/ingest_endpoints/");
  uri.AddPathSegment(request.GetIngestEndpointId());
  uri.AddPathSegments("/credentials");
  return RotateIngestEndpointCredentialsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

RotateIngestEndpointCredentialsOutcomeCallable MediaPackageClient::RotateIngestEndpointCredentialsCallable(const RotateIngestEndpointCredentialsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< RotateIngestEndpointCredentialsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->RotateIngestEndpointCredentials(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MediaPackageClient::RotateIngestEndpointCredentialsAsync(const RotateIngestEndpointCredentialsRequest& request, const RotateIngestEndpointCredentialsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->RotateIngestEndpointCredentialsAsyncHelper( request, handler, context ); } );
}

void MediaPackageClient::RotateIngestEndpointCredentialsAsyncHelper(const RotateIngestEndpointCredentialsRequest& request, const RotateIngestEndpointCredentialsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, RotateIngestEndpointCredentials(request), context);
}

TagResourceOutcome MediaPackageClient::TagResource(const TagResourceRequest& request) const
{
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("TagResource", "Required field: ResourceArn, is not set");
    return TagResourceOutcome(Aws::Client::AWSError<MediaPackageErrors>(MediaPackageErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/tags/");
  uri.AddPathSegment(request.GetResourceArn());
  return TagResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

TagResourceOutcomeCallable MediaPackageClient::TagResourceCallable(const TagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< TagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->TagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MediaPackageClient::TagResourceAsync(const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->TagResourceAsyncHelper( request, handler, context ); } );
}

void MediaPackageClient::TagResourceAsyncHelper(const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, TagResource(request), context);
}

UntagResourceOutcome MediaPackageClient::UntagResource(const UntagResourceRequest& request) const
{
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: ResourceArn, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<MediaPackageErrors>(MediaPackageErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  if (!request.TagKeysHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: TagKeys, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<MediaPackageErrors>(MediaPackageErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TagKeys]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/tags/");
  uri.AddPathSegment(request.GetResourceArn());
  return UntagResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

UntagResourceOutcomeCallable MediaPackageClient::UntagResourceCallable(const UntagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UntagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UntagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MediaPackageClient::UntagResourceAsync(const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UntagResourceAsyncHelper( request, handler, context ); } );
}

void MediaPackageClient::UntagResourceAsyncHelper(const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UntagResource(request), context);
}

UpdateChannelOutcome MediaPackageClient::UpdateChannel(const UpdateChannelRequest& request) const
{
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateChannel", "Required field: Id, is not set");
    return UpdateChannelOutcome(Aws::Client::AWSError<MediaPackageErrors>(MediaPackageErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/channels/");
  uri.AddPathSegment(request.GetId());
  return UpdateChannelOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

UpdateChannelOutcomeCallable MediaPackageClient::UpdateChannelCallable(const UpdateChannelRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateChannelOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateChannel(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MediaPackageClient::UpdateChannelAsync(const UpdateChannelRequest& request, const UpdateChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateChannelAsyncHelper( request, handler, context ); } );
}

void MediaPackageClient::UpdateChannelAsyncHelper(const UpdateChannelRequest& request, const UpdateChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateChannel(request), context);
}

UpdateOriginEndpointOutcome MediaPackageClient::UpdateOriginEndpoint(const UpdateOriginEndpointRequest& request) const
{
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateOriginEndpoint", "Required field: Id, is not set");
    return UpdateOriginEndpointOutcome(Aws::Client::AWSError<MediaPackageErrors>(MediaPackageErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/origin_endpoints/");
  uri.AddPathSegment(request.GetId());
  return UpdateOriginEndpointOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

UpdateOriginEndpointOutcomeCallable MediaPackageClient::UpdateOriginEndpointCallable(const UpdateOriginEndpointRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateOriginEndpointOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateOriginEndpoint(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MediaPackageClient::UpdateOriginEndpointAsync(const UpdateOriginEndpointRequest& request, const UpdateOriginEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateOriginEndpointAsyncHelper( request, handler, context ); } );
}

void MediaPackageClient::UpdateOriginEndpointAsyncHelper(const UpdateOriginEndpointRequest& request, const UpdateOriginEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateOriginEndpoint(request), context);
}

