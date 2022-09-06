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

#include <aws/chime-sdk-media-pipelines/ChimeSDKMediaPipelinesClient.h>
#include <aws/chime-sdk-media-pipelines/ChimeSDKMediaPipelinesEndpoint.h>
#include <aws/chime-sdk-media-pipelines/ChimeSDKMediaPipelinesErrorMarshaller.h>
#include <aws/chime-sdk-media-pipelines/model/CreateMediaCapturePipelineRequest.h>
#include <aws/chime-sdk-media-pipelines/model/CreateMediaConcatenationPipelineRequest.h>
#include <aws/chime-sdk-media-pipelines/model/CreateMediaLiveConnectorPipelineRequest.h>
#include <aws/chime-sdk-media-pipelines/model/DeleteMediaCapturePipelineRequest.h>
#include <aws/chime-sdk-media-pipelines/model/DeleteMediaPipelineRequest.h>
#include <aws/chime-sdk-media-pipelines/model/GetMediaCapturePipelineRequest.h>
#include <aws/chime-sdk-media-pipelines/model/GetMediaPipelineRequest.h>
#include <aws/chime-sdk-media-pipelines/model/ListMediaCapturePipelinesRequest.h>
#include <aws/chime-sdk-media-pipelines/model/ListMediaPipelinesRequest.h>
#include <aws/chime-sdk-media-pipelines/model/ListTagsForResourceRequest.h>
#include <aws/chime-sdk-media-pipelines/model/TagResourceRequest.h>
#include <aws/chime-sdk-media-pipelines/model/UntagResourceRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::ChimeSDKMediaPipelines;
using namespace Aws::ChimeSDKMediaPipelines::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;

static const char* SERVICE_NAME = "chime";
static const char* ALLOCATION_TAG = "ChimeSDKMediaPipelinesClient";

ChimeSDKMediaPipelinesClient::ChimeSDKMediaPipelinesClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<ChimeSDKMediaPipelinesErrorMarshaller>(ALLOCATION_TAG)),
  m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

ChimeSDKMediaPipelinesClient::ChimeSDKMediaPipelinesClient(const AWSCredentials& credentials,
                                                           const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<ChimeSDKMediaPipelinesErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

ChimeSDKMediaPipelinesClient::ChimeSDKMediaPipelinesClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                                           const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<ChimeSDKMediaPipelinesErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

ChimeSDKMediaPipelinesClient::~ChimeSDKMediaPipelinesClient()
{
}

void ChimeSDKMediaPipelinesClient::init(const Client::ClientConfiguration& config)
{
  AWSClient::SetServiceClientName("Chime SDK Media Pipelines");
  m_configScheme = SchemeMapper::ToString(config.scheme);
  if (config.endpointOverride.empty())
  {
      m_uri = m_configScheme + "://" + ChimeSDKMediaPipelinesEndpoint::ForRegion(config.region, config.useDualStack);
  }
  else
  {
      OverrideEndpoint(config.endpointOverride);
  }
}

void ChimeSDKMediaPipelinesClient::OverrideEndpoint(const Aws::String& endpoint)
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

CreateMediaCapturePipelineOutcome ChimeSDKMediaPipelinesClient::CreateMediaCapturePipeline(const CreateMediaCapturePipelineRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/sdk-media-capture-pipelines");
  return CreateMediaCapturePipelineOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateMediaCapturePipelineOutcomeCallable ChimeSDKMediaPipelinesClient::CreateMediaCapturePipelineCallable(const CreateMediaCapturePipelineRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateMediaCapturePipelineOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateMediaCapturePipeline(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ChimeSDKMediaPipelinesClient::CreateMediaCapturePipelineAsync(const CreateMediaCapturePipelineRequest& request, const CreateMediaCapturePipelineResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateMediaCapturePipelineAsyncHelper( request, handler, context ); } );
}

void ChimeSDKMediaPipelinesClient::CreateMediaCapturePipelineAsyncHelper(const CreateMediaCapturePipelineRequest& request, const CreateMediaCapturePipelineResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateMediaCapturePipeline(request), context);
}

CreateMediaConcatenationPipelineOutcome ChimeSDKMediaPipelinesClient::CreateMediaConcatenationPipeline(const CreateMediaConcatenationPipelineRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/sdk-media-concatenation-pipelines");
  return CreateMediaConcatenationPipelineOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateMediaConcatenationPipelineOutcomeCallable ChimeSDKMediaPipelinesClient::CreateMediaConcatenationPipelineCallable(const CreateMediaConcatenationPipelineRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateMediaConcatenationPipelineOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateMediaConcatenationPipeline(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ChimeSDKMediaPipelinesClient::CreateMediaConcatenationPipelineAsync(const CreateMediaConcatenationPipelineRequest& request, const CreateMediaConcatenationPipelineResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateMediaConcatenationPipelineAsyncHelper( request, handler, context ); } );
}

void ChimeSDKMediaPipelinesClient::CreateMediaConcatenationPipelineAsyncHelper(const CreateMediaConcatenationPipelineRequest& request, const CreateMediaConcatenationPipelineResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateMediaConcatenationPipeline(request), context);
}

CreateMediaLiveConnectorPipelineOutcome ChimeSDKMediaPipelinesClient::CreateMediaLiveConnectorPipeline(const CreateMediaLiveConnectorPipelineRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/sdk-media-live-connector-pipelines");
  return CreateMediaLiveConnectorPipelineOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateMediaLiveConnectorPipelineOutcomeCallable ChimeSDKMediaPipelinesClient::CreateMediaLiveConnectorPipelineCallable(const CreateMediaLiveConnectorPipelineRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateMediaLiveConnectorPipelineOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateMediaLiveConnectorPipeline(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ChimeSDKMediaPipelinesClient::CreateMediaLiveConnectorPipelineAsync(const CreateMediaLiveConnectorPipelineRequest& request, const CreateMediaLiveConnectorPipelineResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateMediaLiveConnectorPipelineAsyncHelper( request, handler, context ); } );
}

void ChimeSDKMediaPipelinesClient::CreateMediaLiveConnectorPipelineAsyncHelper(const CreateMediaLiveConnectorPipelineRequest& request, const CreateMediaLiveConnectorPipelineResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateMediaLiveConnectorPipeline(request), context);
}

DeleteMediaCapturePipelineOutcome ChimeSDKMediaPipelinesClient::DeleteMediaCapturePipeline(const DeleteMediaCapturePipelineRequest& request) const
{
  if (!request.MediaPipelineIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteMediaCapturePipeline", "Required field: MediaPipelineId, is not set");
    return DeleteMediaCapturePipelineOutcome(Aws::Client::AWSError<ChimeSDKMediaPipelinesErrors>(ChimeSDKMediaPipelinesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MediaPipelineId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/sdk-media-capture-pipelines/");
  uri.AddPathSegment(request.GetMediaPipelineId());
  return DeleteMediaCapturePipelineOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteMediaCapturePipelineOutcomeCallable ChimeSDKMediaPipelinesClient::DeleteMediaCapturePipelineCallable(const DeleteMediaCapturePipelineRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteMediaCapturePipelineOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteMediaCapturePipeline(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ChimeSDKMediaPipelinesClient::DeleteMediaCapturePipelineAsync(const DeleteMediaCapturePipelineRequest& request, const DeleteMediaCapturePipelineResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteMediaCapturePipelineAsyncHelper( request, handler, context ); } );
}

void ChimeSDKMediaPipelinesClient::DeleteMediaCapturePipelineAsyncHelper(const DeleteMediaCapturePipelineRequest& request, const DeleteMediaCapturePipelineResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteMediaCapturePipeline(request), context);
}

DeleteMediaPipelineOutcome ChimeSDKMediaPipelinesClient::DeleteMediaPipeline(const DeleteMediaPipelineRequest& request) const
{
  if (!request.MediaPipelineIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteMediaPipeline", "Required field: MediaPipelineId, is not set");
    return DeleteMediaPipelineOutcome(Aws::Client::AWSError<ChimeSDKMediaPipelinesErrors>(ChimeSDKMediaPipelinesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MediaPipelineId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/sdk-media-pipelines/");
  uri.AddPathSegment(request.GetMediaPipelineId());
  return DeleteMediaPipelineOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteMediaPipelineOutcomeCallable ChimeSDKMediaPipelinesClient::DeleteMediaPipelineCallable(const DeleteMediaPipelineRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteMediaPipelineOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteMediaPipeline(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ChimeSDKMediaPipelinesClient::DeleteMediaPipelineAsync(const DeleteMediaPipelineRequest& request, const DeleteMediaPipelineResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteMediaPipelineAsyncHelper( request, handler, context ); } );
}

void ChimeSDKMediaPipelinesClient::DeleteMediaPipelineAsyncHelper(const DeleteMediaPipelineRequest& request, const DeleteMediaPipelineResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteMediaPipeline(request), context);
}

GetMediaCapturePipelineOutcome ChimeSDKMediaPipelinesClient::GetMediaCapturePipeline(const GetMediaCapturePipelineRequest& request) const
{
  if (!request.MediaPipelineIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetMediaCapturePipeline", "Required field: MediaPipelineId, is not set");
    return GetMediaCapturePipelineOutcome(Aws::Client::AWSError<ChimeSDKMediaPipelinesErrors>(ChimeSDKMediaPipelinesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MediaPipelineId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/sdk-media-capture-pipelines/");
  uri.AddPathSegment(request.GetMediaPipelineId());
  return GetMediaCapturePipelineOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetMediaCapturePipelineOutcomeCallable ChimeSDKMediaPipelinesClient::GetMediaCapturePipelineCallable(const GetMediaCapturePipelineRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetMediaCapturePipelineOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetMediaCapturePipeline(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ChimeSDKMediaPipelinesClient::GetMediaCapturePipelineAsync(const GetMediaCapturePipelineRequest& request, const GetMediaCapturePipelineResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetMediaCapturePipelineAsyncHelper( request, handler, context ); } );
}

void ChimeSDKMediaPipelinesClient::GetMediaCapturePipelineAsyncHelper(const GetMediaCapturePipelineRequest& request, const GetMediaCapturePipelineResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetMediaCapturePipeline(request), context);
}

GetMediaPipelineOutcome ChimeSDKMediaPipelinesClient::GetMediaPipeline(const GetMediaPipelineRequest& request) const
{
  if (!request.MediaPipelineIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetMediaPipeline", "Required field: MediaPipelineId, is not set");
    return GetMediaPipelineOutcome(Aws::Client::AWSError<ChimeSDKMediaPipelinesErrors>(ChimeSDKMediaPipelinesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MediaPipelineId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/sdk-media-pipelines/");
  uri.AddPathSegment(request.GetMediaPipelineId());
  return GetMediaPipelineOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetMediaPipelineOutcomeCallable ChimeSDKMediaPipelinesClient::GetMediaPipelineCallable(const GetMediaPipelineRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetMediaPipelineOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetMediaPipeline(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ChimeSDKMediaPipelinesClient::GetMediaPipelineAsync(const GetMediaPipelineRequest& request, const GetMediaPipelineResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetMediaPipelineAsyncHelper( request, handler, context ); } );
}

void ChimeSDKMediaPipelinesClient::GetMediaPipelineAsyncHelper(const GetMediaPipelineRequest& request, const GetMediaPipelineResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetMediaPipeline(request), context);
}

ListMediaCapturePipelinesOutcome ChimeSDKMediaPipelinesClient::ListMediaCapturePipelines(const ListMediaCapturePipelinesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/sdk-media-capture-pipelines");
  return ListMediaCapturePipelinesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListMediaCapturePipelinesOutcomeCallable ChimeSDKMediaPipelinesClient::ListMediaCapturePipelinesCallable(const ListMediaCapturePipelinesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListMediaCapturePipelinesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListMediaCapturePipelines(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ChimeSDKMediaPipelinesClient::ListMediaCapturePipelinesAsync(const ListMediaCapturePipelinesRequest& request, const ListMediaCapturePipelinesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListMediaCapturePipelinesAsyncHelper( request, handler, context ); } );
}

void ChimeSDKMediaPipelinesClient::ListMediaCapturePipelinesAsyncHelper(const ListMediaCapturePipelinesRequest& request, const ListMediaCapturePipelinesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListMediaCapturePipelines(request), context);
}

ListMediaPipelinesOutcome ChimeSDKMediaPipelinesClient::ListMediaPipelines(const ListMediaPipelinesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/sdk-media-pipelines");
  return ListMediaPipelinesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListMediaPipelinesOutcomeCallable ChimeSDKMediaPipelinesClient::ListMediaPipelinesCallable(const ListMediaPipelinesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListMediaPipelinesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListMediaPipelines(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ChimeSDKMediaPipelinesClient::ListMediaPipelinesAsync(const ListMediaPipelinesRequest& request, const ListMediaPipelinesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListMediaPipelinesAsyncHelper( request, handler, context ); } );
}

void ChimeSDKMediaPipelinesClient::ListMediaPipelinesAsyncHelper(const ListMediaPipelinesRequest& request, const ListMediaPipelinesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListMediaPipelines(request), context);
}

ListTagsForResourceOutcome ChimeSDKMediaPipelinesClient::ListTagsForResource(const ListTagsForResourceRequest& request) const
{
  if (!request.ResourceARNHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListTagsForResource", "Required field: ResourceARN, is not set");
    return ListTagsForResourceOutcome(Aws::Client::AWSError<ChimeSDKMediaPipelinesErrors>(ChimeSDKMediaPipelinesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceARN]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/tags");
  return ListTagsForResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListTagsForResourceOutcomeCallable ChimeSDKMediaPipelinesClient::ListTagsForResourceCallable(const ListTagsForResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListTagsForResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListTagsForResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ChimeSDKMediaPipelinesClient::ListTagsForResourceAsync(const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListTagsForResourceAsyncHelper( request, handler, context ); } );
}

void ChimeSDKMediaPipelinesClient::ListTagsForResourceAsyncHelper(const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListTagsForResource(request), context);
}

TagResourceOutcome ChimeSDKMediaPipelinesClient::TagResource(const TagResourceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  uri.AddPathSegments("/tags");
  ss.str("?operation=tag-resource");
  uri.SetQueryString(ss.str());
  return TagResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

TagResourceOutcomeCallable ChimeSDKMediaPipelinesClient::TagResourceCallable(const TagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< TagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->TagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ChimeSDKMediaPipelinesClient::TagResourceAsync(const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->TagResourceAsyncHelper( request, handler, context ); } );
}

void ChimeSDKMediaPipelinesClient::TagResourceAsyncHelper(const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, TagResource(request), context);
}

UntagResourceOutcome ChimeSDKMediaPipelinesClient::UntagResource(const UntagResourceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  uri.AddPathSegments("/tags");
  ss.str("?operation=untag-resource");
  uri.SetQueryString(ss.str());
  return UntagResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UntagResourceOutcomeCallable ChimeSDKMediaPipelinesClient::UntagResourceCallable(const UntagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UntagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UntagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ChimeSDKMediaPipelinesClient::UntagResourceAsync(const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UntagResourceAsyncHelper( request, handler, context ); } );
}

void ChimeSDKMediaPipelinesClient::UntagResourceAsyncHelper(const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UntagResource(request), context);
}

