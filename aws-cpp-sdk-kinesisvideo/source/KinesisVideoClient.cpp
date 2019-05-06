/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
#include <aws/kinesisvideo/model/CreateStreamRequest.h>
#include <aws/kinesisvideo/model/DeleteStreamRequest.h>
#include <aws/kinesisvideo/model/DescribeStreamRequest.h>
#include <aws/kinesisvideo/model/GetDataEndpointRequest.h>
#include <aws/kinesisvideo/model/ListStreamsRequest.h>
#include <aws/kinesisvideo/model/ListTagsForStreamRequest.h>
#include <aws/kinesisvideo/model/TagStreamRequest.h>
#include <aws/kinesisvideo/model/UntagStreamRequest.h>
#include <aws/kinesisvideo/model/UpdateDataRetentionRequest.h>
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
        SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<KinesisVideoErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

KinesisVideoClient::KinesisVideoClient(const AWSCredentials& credentials, const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
         SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<KinesisVideoErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

KinesisVideoClient::KinesisVideoClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
  const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider,
         SERVICE_NAME, clientConfiguration.region),
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

CreateStreamOutcome KinesisVideoClient::CreateStream(const CreateStreamRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/createStream";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return CreateStreamOutcome(CreateStreamResult(outcome.GetResult()));
  }
  else
  {
    return CreateStreamOutcome(outcome.GetError());
  }
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

DeleteStreamOutcome KinesisVideoClient::DeleteStream(const DeleteStreamRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/deleteStream";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DeleteStreamOutcome(DeleteStreamResult(outcome.GetResult()));
  }
  else
  {
    return DeleteStreamOutcome(outcome.GetError());
  }
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

DescribeStreamOutcome KinesisVideoClient::DescribeStream(const DescribeStreamRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/describeStream";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DescribeStreamOutcome(DescribeStreamResult(outcome.GetResult()));
  }
  else
  {
    return DescribeStreamOutcome(outcome.GetError());
  }
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
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetDataEndpointOutcome(GetDataEndpointResult(outcome.GetResult()));
  }
  else
  {
    return GetDataEndpointOutcome(outcome.GetError());
  }
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

ListStreamsOutcome KinesisVideoClient::ListStreams(const ListStreamsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/listStreams";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListStreamsOutcome(ListStreamsResult(outcome.GetResult()));
  }
  else
  {
    return ListStreamsOutcome(outcome.GetError());
  }
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

ListTagsForStreamOutcome KinesisVideoClient::ListTagsForStream(const ListTagsForStreamRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/listTagsForStream";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListTagsForStreamOutcome(ListTagsForStreamResult(outcome.GetResult()));
  }
  else
  {
    return ListTagsForStreamOutcome(outcome.GetError());
  }
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

TagStreamOutcome KinesisVideoClient::TagStream(const TagStreamRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/tagStream";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return TagStreamOutcome(TagStreamResult(outcome.GetResult()));
  }
  else
  {
    return TagStreamOutcome(outcome.GetError());
  }
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

UntagStreamOutcome KinesisVideoClient::UntagStream(const UntagStreamRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/untagStream";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return UntagStreamOutcome(UntagStreamResult(outcome.GetResult()));
  }
  else
  {
    return UntagStreamOutcome(outcome.GetError());
  }
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
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return UpdateDataRetentionOutcome(UpdateDataRetentionResult(outcome.GetResult()));
  }
  else
  {
    return UpdateDataRetentionOutcome(outcome.GetError());
  }
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

UpdateStreamOutcome KinesisVideoClient::UpdateStream(const UpdateStreamRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/updateStream";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return UpdateStreamOutcome(UpdateStreamResult(outcome.GetResult()));
  }
  else
  {
    return UpdateStreamOutcome(outcome.GetError());
  }
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

