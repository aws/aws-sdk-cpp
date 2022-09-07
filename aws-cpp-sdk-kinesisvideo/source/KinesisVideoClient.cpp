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
#include <aws/kinesisvideo/model/DescribeImageGenerationConfigurationRequest.h>
#include <aws/kinesisvideo/model/DescribeNotificationConfigurationRequest.h>
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
#include <aws/kinesisvideo/model/UpdateImageGenerationConfigurationRequest.h>
#include <aws/kinesisvideo/model/UpdateNotificationConfigurationRequest.h>
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
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<KinesisVideoErrorMarshaller>(ALLOCATION_TAG)),
  m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

KinesisVideoClient::KinesisVideoClient(const AWSCredentials& credentials,
                                       const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<KinesisVideoErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

KinesisVideoClient::KinesisVideoClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                       const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<KinesisVideoErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

KinesisVideoClient::~KinesisVideoClient()
{
}

void KinesisVideoClient::init(const Client::ClientConfiguration& config)
{
  AWSClient::SetServiceClientName("Kinesis Video");
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
  uri.AddPathSegments("/createSignalingChannel");
  return CreateSignalingChannelOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateSignalingChannelOutcomeCallable KinesisVideoClient::CreateSignalingChannelCallable(const CreateSignalingChannelRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateSignalingChannelOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateSignalingChannel(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void KinesisVideoClientCreateSignalingChannelAsyncHelper(KinesisVideoClient const * const clientThis, const CreateSignalingChannelRequest& request, const CreateSignalingChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateSignalingChannel(request), context);
}

void KinesisVideoClient::CreateSignalingChannelAsync(const CreateSignalingChannelRequest& request, const CreateSignalingChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ KinesisVideoClientCreateSignalingChannelAsyncHelper( this, request, handler, context ); } );
}

CreateStreamOutcome KinesisVideoClient::CreateStream(const CreateStreamRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/createStream");
  return CreateStreamOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateStreamOutcomeCallable KinesisVideoClient::CreateStreamCallable(const CreateStreamRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateStreamOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateStream(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void KinesisVideoClientCreateStreamAsyncHelper(KinesisVideoClient const * const clientThis, const CreateStreamRequest& request, const CreateStreamResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateStream(request), context);
}

void KinesisVideoClient::CreateStreamAsync(const CreateStreamRequest& request, const CreateStreamResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ KinesisVideoClientCreateStreamAsyncHelper( this, request, handler, context ); } );
}

DeleteSignalingChannelOutcome KinesisVideoClient::DeleteSignalingChannel(const DeleteSignalingChannelRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/deleteSignalingChannel");
  return DeleteSignalingChannelOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteSignalingChannelOutcomeCallable KinesisVideoClient::DeleteSignalingChannelCallable(const DeleteSignalingChannelRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteSignalingChannelOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteSignalingChannel(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void KinesisVideoClientDeleteSignalingChannelAsyncHelper(KinesisVideoClient const * const clientThis, const DeleteSignalingChannelRequest& request, const DeleteSignalingChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteSignalingChannel(request), context);
}

void KinesisVideoClient::DeleteSignalingChannelAsync(const DeleteSignalingChannelRequest& request, const DeleteSignalingChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ KinesisVideoClientDeleteSignalingChannelAsyncHelper( this, request, handler, context ); } );
}

DeleteStreamOutcome KinesisVideoClient::DeleteStream(const DeleteStreamRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/deleteStream");
  return DeleteStreamOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteStreamOutcomeCallable KinesisVideoClient::DeleteStreamCallable(const DeleteStreamRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteStreamOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteStream(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void KinesisVideoClientDeleteStreamAsyncHelper(KinesisVideoClient const * const clientThis, const DeleteStreamRequest& request, const DeleteStreamResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteStream(request), context);
}

void KinesisVideoClient::DeleteStreamAsync(const DeleteStreamRequest& request, const DeleteStreamResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ KinesisVideoClientDeleteStreamAsyncHelper( this, request, handler, context ); } );
}

DescribeImageGenerationConfigurationOutcome KinesisVideoClient::DescribeImageGenerationConfiguration(const DescribeImageGenerationConfigurationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/describeImageGenerationConfiguration");
  return DescribeImageGenerationConfigurationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeImageGenerationConfigurationOutcomeCallable KinesisVideoClient::DescribeImageGenerationConfigurationCallable(const DescribeImageGenerationConfigurationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeImageGenerationConfigurationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeImageGenerationConfiguration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void KinesisVideoClientDescribeImageGenerationConfigurationAsyncHelper(KinesisVideoClient const * const clientThis, const DescribeImageGenerationConfigurationRequest& request, const DescribeImageGenerationConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeImageGenerationConfiguration(request), context);
}

void KinesisVideoClient::DescribeImageGenerationConfigurationAsync(const DescribeImageGenerationConfigurationRequest& request, const DescribeImageGenerationConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ KinesisVideoClientDescribeImageGenerationConfigurationAsyncHelper( this, request, handler, context ); } );
}

DescribeNotificationConfigurationOutcome KinesisVideoClient::DescribeNotificationConfiguration(const DescribeNotificationConfigurationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/describeNotificationConfiguration");
  return DescribeNotificationConfigurationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeNotificationConfigurationOutcomeCallable KinesisVideoClient::DescribeNotificationConfigurationCallable(const DescribeNotificationConfigurationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeNotificationConfigurationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeNotificationConfiguration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void KinesisVideoClientDescribeNotificationConfigurationAsyncHelper(KinesisVideoClient const * const clientThis, const DescribeNotificationConfigurationRequest& request, const DescribeNotificationConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeNotificationConfiguration(request), context);
}

void KinesisVideoClient::DescribeNotificationConfigurationAsync(const DescribeNotificationConfigurationRequest& request, const DescribeNotificationConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ KinesisVideoClientDescribeNotificationConfigurationAsyncHelper( this, request, handler, context ); } );
}

DescribeSignalingChannelOutcome KinesisVideoClient::DescribeSignalingChannel(const DescribeSignalingChannelRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/describeSignalingChannel");
  return DescribeSignalingChannelOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeSignalingChannelOutcomeCallable KinesisVideoClient::DescribeSignalingChannelCallable(const DescribeSignalingChannelRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeSignalingChannelOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeSignalingChannel(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void KinesisVideoClientDescribeSignalingChannelAsyncHelper(KinesisVideoClient const * const clientThis, const DescribeSignalingChannelRequest& request, const DescribeSignalingChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeSignalingChannel(request), context);
}

void KinesisVideoClient::DescribeSignalingChannelAsync(const DescribeSignalingChannelRequest& request, const DescribeSignalingChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ KinesisVideoClientDescribeSignalingChannelAsyncHelper( this, request, handler, context ); } );
}

DescribeStreamOutcome KinesisVideoClient::DescribeStream(const DescribeStreamRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/describeStream");
  return DescribeStreamOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeStreamOutcomeCallable KinesisVideoClient::DescribeStreamCallable(const DescribeStreamRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeStreamOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeStream(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void KinesisVideoClientDescribeStreamAsyncHelper(KinesisVideoClient const * const clientThis, const DescribeStreamRequest& request, const DescribeStreamResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeStream(request), context);
}

void KinesisVideoClient::DescribeStreamAsync(const DescribeStreamRequest& request, const DescribeStreamResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ KinesisVideoClientDescribeStreamAsyncHelper( this, request, handler, context ); } );
}

GetDataEndpointOutcome KinesisVideoClient::GetDataEndpoint(const GetDataEndpointRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/getDataEndpoint");
  return GetDataEndpointOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetDataEndpointOutcomeCallable KinesisVideoClient::GetDataEndpointCallable(const GetDataEndpointRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetDataEndpointOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetDataEndpoint(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void KinesisVideoClientGetDataEndpointAsyncHelper(KinesisVideoClient const * const clientThis, const GetDataEndpointRequest& request, const GetDataEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetDataEndpoint(request), context);
}

void KinesisVideoClient::GetDataEndpointAsync(const GetDataEndpointRequest& request, const GetDataEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ KinesisVideoClientGetDataEndpointAsyncHelper( this, request, handler, context ); } );
}

GetSignalingChannelEndpointOutcome KinesisVideoClient::GetSignalingChannelEndpoint(const GetSignalingChannelEndpointRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/getSignalingChannelEndpoint");
  return GetSignalingChannelEndpointOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetSignalingChannelEndpointOutcomeCallable KinesisVideoClient::GetSignalingChannelEndpointCallable(const GetSignalingChannelEndpointRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetSignalingChannelEndpointOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetSignalingChannelEndpoint(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void KinesisVideoClientGetSignalingChannelEndpointAsyncHelper(KinesisVideoClient const * const clientThis, const GetSignalingChannelEndpointRequest& request, const GetSignalingChannelEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetSignalingChannelEndpoint(request), context);
}

void KinesisVideoClient::GetSignalingChannelEndpointAsync(const GetSignalingChannelEndpointRequest& request, const GetSignalingChannelEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ KinesisVideoClientGetSignalingChannelEndpointAsyncHelper( this, request, handler, context ); } );
}

ListSignalingChannelsOutcome KinesisVideoClient::ListSignalingChannels(const ListSignalingChannelsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/listSignalingChannels");
  return ListSignalingChannelsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListSignalingChannelsOutcomeCallable KinesisVideoClient::ListSignalingChannelsCallable(const ListSignalingChannelsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListSignalingChannelsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListSignalingChannels(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void KinesisVideoClientListSignalingChannelsAsyncHelper(KinesisVideoClient const * const clientThis, const ListSignalingChannelsRequest& request, const ListSignalingChannelsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListSignalingChannels(request), context);
}

void KinesisVideoClient::ListSignalingChannelsAsync(const ListSignalingChannelsRequest& request, const ListSignalingChannelsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ KinesisVideoClientListSignalingChannelsAsyncHelper( this, request, handler, context ); } );
}

ListStreamsOutcome KinesisVideoClient::ListStreams(const ListStreamsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/listStreams");
  return ListStreamsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListStreamsOutcomeCallable KinesisVideoClient::ListStreamsCallable(const ListStreamsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListStreamsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListStreams(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void KinesisVideoClientListStreamsAsyncHelper(KinesisVideoClient const * const clientThis, const ListStreamsRequest& request, const ListStreamsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListStreams(request), context);
}

void KinesisVideoClient::ListStreamsAsync(const ListStreamsRequest& request, const ListStreamsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ KinesisVideoClientListStreamsAsyncHelper( this, request, handler, context ); } );
}

ListTagsForResourceOutcome KinesisVideoClient::ListTagsForResource(const ListTagsForResourceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/ListTagsForResource");
  return ListTagsForResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListTagsForResourceOutcomeCallable KinesisVideoClient::ListTagsForResourceCallable(const ListTagsForResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListTagsForResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListTagsForResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void KinesisVideoClientListTagsForResourceAsyncHelper(KinesisVideoClient const * const clientThis, const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListTagsForResource(request), context);
}

void KinesisVideoClient::ListTagsForResourceAsync(const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ KinesisVideoClientListTagsForResourceAsyncHelper( this, request, handler, context ); } );
}

ListTagsForStreamOutcome KinesisVideoClient::ListTagsForStream(const ListTagsForStreamRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/listTagsForStream");
  return ListTagsForStreamOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListTagsForStreamOutcomeCallable KinesisVideoClient::ListTagsForStreamCallable(const ListTagsForStreamRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListTagsForStreamOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListTagsForStream(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void KinesisVideoClientListTagsForStreamAsyncHelper(KinesisVideoClient const * const clientThis, const ListTagsForStreamRequest& request, const ListTagsForStreamResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListTagsForStream(request), context);
}

void KinesisVideoClient::ListTagsForStreamAsync(const ListTagsForStreamRequest& request, const ListTagsForStreamResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ KinesisVideoClientListTagsForStreamAsyncHelper( this, request, handler, context ); } );
}

TagResourceOutcome KinesisVideoClient::TagResource(const TagResourceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/TagResource");
  return TagResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

TagResourceOutcomeCallable KinesisVideoClient::TagResourceCallable(const TagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< TagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->TagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void KinesisVideoClientTagResourceAsyncHelper(KinesisVideoClient const * const clientThis, const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->TagResource(request), context);
}

void KinesisVideoClient::TagResourceAsync(const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ KinesisVideoClientTagResourceAsyncHelper( this, request, handler, context ); } );
}

TagStreamOutcome KinesisVideoClient::TagStream(const TagStreamRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/tagStream");
  return TagStreamOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

TagStreamOutcomeCallable KinesisVideoClient::TagStreamCallable(const TagStreamRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< TagStreamOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->TagStream(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void KinesisVideoClientTagStreamAsyncHelper(KinesisVideoClient const * const clientThis, const TagStreamRequest& request, const TagStreamResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->TagStream(request), context);
}

void KinesisVideoClient::TagStreamAsync(const TagStreamRequest& request, const TagStreamResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ KinesisVideoClientTagStreamAsyncHelper( this, request, handler, context ); } );
}

UntagResourceOutcome KinesisVideoClient::UntagResource(const UntagResourceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/UntagResource");
  return UntagResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UntagResourceOutcomeCallable KinesisVideoClient::UntagResourceCallable(const UntagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UntagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UntagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void KinesisVideoClientUntagResourceAsyncHelper(KinesisVideoClient const * const clientThis, const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UntagResource(request), context);
}

void KinesisVideoClient::UntagResourceAsync(const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ KinesisVideoClientUntagResourceAsyncHelper( this, request, handler, context ); } );
}

UntagStreamOutcome KinesisVideoClient::UntagStream(const UntagStreamRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/untagStream");
  return UntagStreamOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UntagStreamOutcomeCallable KinesisVideoClient::UntagStreamCallable(const UntagStreamRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UntagStreamOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UntagStream(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void KinesisVideoClientUntagStreamAsyncHelper(KinesisVideoClient const * const clientThis, const UntagStreamRequest& request, const UntagStreamResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UntagStream(request), context);
}

void KinesisVideoClient::UntagStreamAsync(const UntagStreamRequest& request, const UntagStreamResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ KinesisVideoClientUntagStreamAsyncHelper( this, request, handler, context ); } );
}

UpdateDataRetentionOutcome KinesisVideoClient::UpdateDataRetention(const UpdateDataRetentionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/updateDataRetention");
  return UpdateDataRetentionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateDataRetentionOutcomeCallable KinesisVideoClient::UpdateDataRetentionCallable(const UpdateDataRetentionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateDataRetentionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateDataRetention(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void KinesisVideoClientUpdateDataRetentionAsyncHelper(KinesisVideoClient const * const clientThis, const UpdateDataRetentionRequest& request, const UpdateDataRetentionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateDataRetention(request), context);
}

void KinesisVideoClient::UpdateDataRetentionAsync(const UpdateDataRetentionRequest& request, const UpdateDataRetentionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ KinesisVideoClientUpdateDataRetentionAsyncHelper( this, request, handler, context ); } );
}

UpdateImageGenerationConfigurationOutcome KinesisVideoClient::UpdateImageGenerationConfiguration(const UpdateImageGenerationConfigurationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/updateImageGenerationConfiguration");
  return UpdateImageGenerationConfigurationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateImageGenerationConfigurationOutcomeCallable KinesisVideoClient::UpdateImageGenerationConfigurationCallable(const UpdateImageGenerationConfigurationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateImageGenerationConfigurationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateImageGenerationConfiguration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void KinesisVideoClientUpdateImageGenerationConfigurationAsyncHelper(KinesisVideoClient const * const clientThis, const UpdateImageGenerationConfigurationRequest& request, const UpdateImageGenerationConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateImageGenerationConfiguration(request), context);
}

void KinesisVideoClient::UpdateImageGenerationConfigurationAsync(const UpdateImageGenerationConfigurationRequest& request, const UpdateImageGenerationConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ KinesisVideoClientUpdateImageGenerationConfigurationAsyncHelper( this, request, handler, context ); } );
}

UpdateNotificationConfigurationOutcome KinesisVideoClient::UpdateNotificationConfiguration(const UpdateNotificationConfigurationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/updateNotificationConfiguration");
  return UpdateNotificationConfigurationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateNotificationConfigurationOutcomeCallable KinesisVideoClient::UpdateNotificationConfigurationCallable(const UpdateNotificationConfigurationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateNotificationConfigurationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateNotificationConfiguration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void KinesisVideoClientUpdateNotificationConfigurationAsyncHelper(KinesisVideoClient const * const clientThis, const UpdateNotificationConfigurationRequest& request, const UpdateNotificationConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateNotificationConfiguration(request), context);
}

void KinesisVideoClient::UpdateNotificationConfigurationAsync(const UpdateNotificationConfigurationRequest& request, const UpdateNotificationConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ KinesisVideoClientUpdateNotificationConfigurationAsyncHelper( this, request, handler, context ); } );
}

UpdateSignalingChannelOutcome KinesisVideoClient::UpdateSignalingChannel(const UpdateSignalingChannelRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/updateSignalingChannel");
  return UpdateSignalingChannelOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateSignalingChannelOutcomeCallable KinesisVideoClient::UpdateSignalingChannelCallable(const UpdateSignalingChannelRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateSignalingChannelOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateSignalingChannel(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void KinesisVideoClientUpdateSignalingChannelAsyncHelper(KinesisVideoClient const * const clientThis, const UpdateSignalingChannelRequest& request, const UpdateSignalingChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateSignalingChannel(request), context);
}

void KinesisVideoClient::UpdateSignalingChannelAsync(const UpdateSignalingChannelRequest& request, const UpdateSignalingChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ KinesisVideoClientUpdateSignalingChannelAsyncHelper( this, request, handler, context ); } );
}

UpdateStreamOutcome KinesisVideoClient::UpdateStream(const UpdateStreamRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/updateStream");
  return UpdateStreamOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateStreamOutcomeCallable KinesisVideoClient::UpdateStreamCallable(const UpdateStreamRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateStreamOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateStream(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void KinesisVideoClientUpdateStreamAsyncHelper(KinesisVideoClient const * const clientThis, const UpdateStreamRequest& request, const UpdateStreamResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateStream(request), context);
}

void KinesisVideoClient::UpdateStreamAsync(const UpdateStreamRequest& request, const UpdateStreamResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ KinesisVideoClientUpdateStreamAsyncHelper( this, request, handler, context ); } );
}

