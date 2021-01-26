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

#include <aws/kinesisvideo/KinesisVideoClient.h>
#include <aws/kinesisvideo/KinesisVideoEndpoint.h>
#include <aws/kinesisvideo/KinesisVideoErrorMarshaller.h>
#include <aws/kinesisvideo/model/CreateSignalingChannelRequest.h>
#include <aws/kinesisvideo/model/CreateStreamRequest.h>
#include <aws/kinesisvideo/model/DeleteSignalingChannelRequest.h>
#include <aws/kinesisvideo/model/DeleteStreamRequest.h>
#include <aws/kinesisvideo/model/DescribeSignalingChannelRequest.h>
#include <aws/kinesisvideo/model/DescribeStreamRequest.h>
#include <aws/kinesisvideo/model/GetDataEndpointRequest.h>
#include <aws/kinesisvideo/model/GetSignalingChannelEndpointRequest.h>
#include <aws/kinesisvideo/model/ListSignalingChannelsRequest.h>
#include <aws/kinesisvideo/model/ListStreamsRequest.h>
#include <aws/kinesisvideo/model/ListTagsForResourceRequest.h>
#include <aws/kinesisvideo/model/ListTagsForStreamRequest.h>
#include <aws/kinesisvideo/model/TagResourceRequest.h>
#include <aws/kinesisvideo/model/TagStreamRequest.h>
#include <aws/kinesisvideo/model/UntagResourceRequest.h>
#include <aws/kinesisvideo/model/UntagStreamRequest.h>
#include <aws/kinesisvideo/model/UpdateDataRetentionRequest.h>
#include <aws/kinesisvideo/model/UpdateSignalingChannelRequest.h>
#include <aws/kinesisvideo/model/UpdateStreamRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::KinesisVideo;
using namespace Aws::KinesisVideo::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;

static const char* SERVICE_NAME = "kinesisvideo";
static const char* ALLOCATION_TAG = "KinesisVideoClient";


KinesisVideoClient::KinesisVideoClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
        SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
    Aws::MakeShared<KinesisVideoErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

KinesisVideoClient::KinesisVideoClient(const AWSCredentials& credentials, const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
         SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
    Aws::MakeShared<KinesisVideoErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

KinesisVideoClient::KinesisVideoClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
  const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider,
         SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
    Aws::MakeShared<KinesisVideoErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

KinesisVideoClient::~KinesisVideoClient()
{
}

void KinesisVideoClient::init(const ClientConfiguration& config)
{
  SetServiceClientName("Kinesis Video");
  m_configScheme = SchemeMapper::ToString(config.scheme);
  if (config.endpointOverride.empty())
  {
      m_uri = m_configScheme + "://" + KinesisVideoEndpoint::ForRegion(config.region, config.useDualStack);
  }
  else
  {
      OverrideEndpoint(config.endpointOverride);
  }
}

void KinesisVideoClient::OverrideEndpoint(const Aws::String& endpoint)
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

CreateSignalingChannelOutcome KinesisVideoClient::CreateSignalingChannel(const CreateSignalingChannelRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/createSignalingChannel";
  uri.SetPath(uri.GetPath() + ss.str());
  return CreateSignalingChannelOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateSignalingChannelOutcomeCallable KinesisVideoClient::CreateSignalingChannelCallable(const CreateSignalingChannelRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateSignalingChannelOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateSignalingChannel(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void KinesisVideoClient::CreateSignalingChannelAsync(const CreateSignalingChannelRequest& request, const CreateSignalingChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateSignalingChannelAsyncHelper( request, handler, context ); } );
}

void KinesisVideoClient::CreateSignalingChannelAsyncHelper(const CreateSignalingChannelRequest& request, const CreateSignalingChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateSignalingChannel(request), context);
}

CreateStreamOutcome KinesisVideoClient::CreateStream(const CreateStreamRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/createStream";
  uri.SetPath(uri.GetPath() + ss.str());
  return CreateStreamOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateStreamOutcomeCallable KinesisVideoClient::CreateStreamCallable(const CreateStreamRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateStreamOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateStream(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void KinesisVideoClient::CreateStreamAsync(const CreateStreamRequest& request, const CreateStreamResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateStreamAsyncHelper( request, handler, context ); } );
}

void KinesisVideoClient::CreateStreamAsyncHelper(const CreateStreamRequest& request, const CreateStreamResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateStream(request), context);
}

DeleteSignalingChannelOutcome KinesisVideoClient::DeleteSignalingChannel(const DeleteSignalingChannelRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/deleteSignalingChannel";
  uri.SetPath(uri.GetPath() + ss.str());
  return DeleteSignalingChannelOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteSignalingChannelOutcomeCallable KinesisVideoClient::DeleteSignalingChannelCallable(const DeleteSignalingChannelRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteSignalingChannelOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteSignalingChannel(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void KinesisVideoClient::DeleteSignalingChannelAsync(const DeleteSignalingChannelRequest& request, const DeleteSignalingChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteSignalingChannelAsyncHelper( request, handler, context ); } );
}

void KinesisVideoClient::DeleteSignalingChannelAsyncHelper(const DeleteSignalingChannelRequest& request, const DeleteSignalingChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteSignalingChannel(request), context);
}

DeleteStreamOutcome KinesisVideoClient::DeleteStream(const DeleteStreamRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/deleteStream";
  uri.SetPath(uri.GetPath() + ss.str());
  return DeleteStreamOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteStreamOutcomeCallable KinesisVideoClient::DeleteStreamCallable(const DeleteStreamRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteStreamOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteStream(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void KinesisVideoClient::DeleteStreamAsync(const DeleteStreamRequest& request, const DeleteStreamResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteStreamAsyncHelper( request, handler, context ); } );
}

void KinesisVideoClient::DeleteStreamAsyncHelper(const DeleteStreamRequest& request, const DeleteStreamResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteStream(request), context);
}

DescribeSignalingChannelOutcome KinesisVideoClient::DescribeSignalingChannel(const DescribeSignalingChannelRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/describeSignalingChannel";
  uri.SetPath(uri.GetPath() + ss.str());
  return DescribeSignalingChannelOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeSignalingChannelOutcomeCallable KinesisVideoClient::DescribeSignalingChannelCallable(const DescribeSignalingChannelRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeSignalingChannelOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeSignalingChannel(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void KinesisVideoClient::DescribeSignalingChannelAsync(const DescribeSignalingChannelRequest& request, const DescribeSignalingChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeSignalingChannelAsyncHelper( request, handler, context ); } );
}

void KinesisVideoClient::DescribeSignalingChannelAsyncHelper(const DescribeSignalingChannelRequest& request, const DescribeSignalingChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeSignalingChannel(request), context);
}

DescribeStreamOutcome KinesisVideoClient::DescribeStream(const DescribeStreamRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/describeStream";
  uri.SetPath(uri.GetPath() + ss.str());
  return DescribeStreamOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeStreamOutcomeCallable KinesisVideoClient::DescribeStreamCallable(const DescribeStreamRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeStreamOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeStream(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void KinesisVideoClient::DescribeStreamAsync(const DescribeStreamRequest& request, const DescribeStreamResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeStreamAsyncHelper( request, handler, context ); } );
}

void KinesisVideoClient::DescribeStreamAsyncHelper(const DescribeStreamRequest& request, const DescribeStreamResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeStream(request), context);
}

GetDataEndpointOutcome KinesisVideoClient::GetDataEndpoint(const GetDataEndpointRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/getDataEndpoint";
  uri.SetPath(uri.GetPath() + ss.str());
  return GetDataEndpointOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetDataEndpointOutcomeCallable KinesisVideoClient::GetDataEndpointCallable(const GetDataEndpointRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetDataEndpointOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetDataEndpoint(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void KinesisVideoClient::GetDataEndpointAsync(const GetDataEndpointRequest& request, const GetDataEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetDataEndpointAsyncHelper( request, handler, context ); } );
}

void KinesisVideoClient::GetDataEndpointAsyncHelper(const GetDataEndpointRequest& request, const GetDataEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetDataEndpoint(request), context);
}

GetSignalingChannelEndpointOutcome KinesisVideoClient::GetSignalingChannelEndpoint(const GetSignalingChannelEndpointRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/getSignalingChannelEndpoint";
  uri.SetPath(uri.GetPath() + ss.str());
  return GetSignalingChannelEndpointOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetSignalingChannelEndpointOutcomeCallable KinesisVideoClient::GetSignalingChannelEndpointCallable(const GetSignalingChannelEndpointRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetSignalingChannelEndpointOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetSignalingChannelEndpoint(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void KinesisVideoClient::GetSignalingChannelEndpointAsync(const GetSignalingChannelEndpointRequest& request, const GetSignalingChannelEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetSignalingChannelEndpointAsyncHelper( request, handler, context ); } );
}

void KinesisVideoClient::GetSignalingChannelEndpointAsyncHelper(const GetSignalingChannelEndpointRequest& request, const GetSignalingChannelEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetSignalingChannelEndpoint(request), context);
}

ListSignalingChannelsOutcome KinesisVideoClient::ListSignalingChannels(const ListSignalingChannelsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/listSignalingChannels";
  uri.SetPath(uri.GetPath() + ss.str());
  return ListSignalingChannelsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListSignalingChannelsOutcomeCallable KinesisVideoClient::ListSignalingChannelsCallable(const ListSignalingChannelsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListSignalingChannelsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListSignalingChannels(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void KinesisVideoClient::ListSignalingChannelsAsync(const ListSignalingChannelsRequest& request, const ListSignalingChannelsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListSignalingChannelsAsyncHelper( request, handler, context ); } );
}

void KinesisVideoClient::ListSignalingChannelsAsyncHelper(const ListSignalingChannelsRequest& request, const ListSignalingChannelsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListSignalingChannels(request), context);
}

ListStreamsOutcome KinesisVideoClient::ListStreams(const ListStreamsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/listStreams";
  uri.SetPath(uri.GetPath() + ss.str());
  return ListStreamsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListStreamsOutcomeCallable KinesisVideoClient::ListStreamsCallable(const ListStreamsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListStreamsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListStreams(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void KinesisVideoClient::ListStreamsAsync(const ListStreamsRequest& request, const ListStreamsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListStreamsAsyncHelper( request, handler, context ); } );
}

void KinesisVideoClient::ListStreamsAsyncHelper(const ListStreamsRequest& request, const ListStreamsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListStreams(request), context);
}

ListTagsForResourceOutcome KinesisVideoClient::ListTagsForResource(const ListTagsForResourceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/ListTagsForResource";
  uri.SetPath(uri.GetPath() + ss.str());
  return ListTagsForResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListTagsForResourceOutcomeCallable KinesisVideoClient::ListTagsForResourceCallable(const ListTagsForResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListTagsForResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListTagsForResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void KinesisVideoClient::ListTagsForResourceAsync(const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListTagsForResourceAsyncHelper( request, handler, context ); } );
}

void KinesisVideoClient::ListTagsForResourceAsyncHelper(const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListTagsForResource(request), context);
}

ListTagsForStreamOutcome KinesisVideoClient::ListTagsForStream(const ListTagsForStreamRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/listTagsForStream";
  uri.SetPath(uri.GetPath() + ss.str());
  return ListTagsForStreamOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListTagsForStreamOutcomeCallable KinesisVideoClient::ListTagsForStreamCallable(const ListTagsForStreamRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListTagsForStreamOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListTagsForStream(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void KinesisVideoClient::ListTagsForStreamAsync(const ListTagsForStreamRequest& request, const ListTagsForStreamResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListTagsForStreamAsyncHelper( request, handler, context ); } );
}

void KinesisVideoClient::ListTagsForStreamAsyncHelper(const ListTagsForStreamRequest& request, const ListTagsForStreamResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListTagsForStream(request), context);
}

TagResourceOutcome KinesisVideoClient::TagResource(const TagResourceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/TagResource";
  uri.SetPath(uri.GetPath() + ss.str());
  return TagResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

TagResourceOutcomeCallable KinesisVideoClient::TagResourceCallable(const TagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< TagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->TagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void KinesisVideoClient::TagResourceAsync(const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->TagResourceAsyncHelper( request, handler, context ); } );
}

void KinesisVideoClient::TagResourceAsyncHelper(const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, TagResource(request), context);
}

TagStreamOutcome KinesisVideoClient::TagStream(const TagStreamRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/tagStream";
  uri.SetPath(uri.GetPath() + ss.str());
  return TagStreamOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

TagStreamOutcomeCallable KinesisVideoClient::TagStreamCallable(const TagStreamRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< TagStreamOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->TagStream(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void KinesisVideoClient::TagStreamAsync(const TagStreamRequest& request, const TagStreamResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->TagStreamAsyncHelper( request, handler, context ); } );
}

void KinesisVideoClient::TagStreamAsyncHelper(const TagStreamRequest& request, const TagStreamResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, TagStream(request), context);
}

UntagResourceOutcome KinesisVideoClient::UntagResource(const UntagResourceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/UntagResource";
  uri.SetPath(uri.GetPath() + ss.str());
  return UntagResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UntagResourceOutcomeCallable KinesisVideoClient::UntagResourceCallable(const UntagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UntagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UntagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void KinesisVideoClient::UntagResourceAsync(const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UntagResourceAsyncHelper( request, handler, context ); } );
}

void KinesisVideoClient::UntagResourceAsyncHelper(const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UntagResource(request), context);
}

UntagStreamOutcome KinesisVideoClient::UntagStream(const UntagStreamRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/untagStream";
  uri.SetPath(uri.GetPath() + ss.str());
  return UntagStreamOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UntagStreamOutcomeCallable KinesisVideoClient::UntagStreamCallable(const UntagStreamRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UntagStreamOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UntagStream(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void KinesisVideoClient::UntagStreamAsync(const UntagStreamRequest& request, const UntagStreamResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UntagStreamAsyncHelper( request, handler, context ); } );
}

void KinesisVideoClient::UntagStreamAsyncHelper(const UntagStreamRequest& request, const UntagStreamResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UntagStream(request), context);
}

UpdateDataRetentionOutcome KinesisVideoClient::UpdateDataRetention(const UpdateDataRetentionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/updateDataRetention";
  uri.SetPath(uri.GetPath() + ss.str());
  return UpdateDataRetentionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateDataRetentionOutcomeCallable KinesisVideoClient::UpdateDataRetentionCallable(const UpdateDataRetentionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateDataRetentionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateDataRetention(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void KinesisVideoClient::UpdateDataRetentionAsync(const UpdateDataRetentionRequest& request, const UpdateDataRetentionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateDataRetentionAsyncHelper( request, handler, context ); } );
}

void KinesisVideoClient::UpdateDataRetentionAsyncHelper(const UpdateDataRetentionRequest& request, const UpdateDataRetentionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateDataRetention(request), context);
}

UpdateSignalingChannelOutcome KinesisVideoClient::UpdateSignalingChannel(const UpdateSignalingChannelRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/updateSignalingChannel";
  uri.SetPath(uri.GetPath() + ss.str());
  return UpdateSignalingChannelOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateSignalingChannelOutcomeCallable KinesisVideoClient::UpdateSignalingChannelCallable(const UpdateSignalingChannelRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateSignalingChannelOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateSignalingChannel(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void KinesisVideoClient::UpdateSignalingChannelAsync(const UpdateSignalingChannelRequest& request, const UpdateSignalingChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateSignalingChannelAsyncHelper( request, handler, context ); } );
}

void KinesisVideoClient::UpdateSignalingChannelAsyncHelper(const UpdateSignalingChannelRequest& request, const UpdateSignalingChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateSignalingChannel(request), context);
}

UpdateStreamOutcome KinesisVideoClient::UpdateStream(const UpdateStreamRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/updateStream";
  uri.SetPath(uri.GetPath() + ss.str());
  return UpdateStreamOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateStreamOutcomeCallable KinesisVideoClient::UpdateStreamCallable(const UpdateStreamRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateStreamOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateStream(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void KinesisVideoClient::UpdateStreamAsync(const UpdateStreamRequest& request, const UpdateStreamResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateStreamAsyncHelper( request, handler, context ); } );
}

void KinesisVideoClient::UpdateStreamAsyncHelper(const UpdateStreamRequest& request, const UpdateStreamResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateStream(request), context);
}

