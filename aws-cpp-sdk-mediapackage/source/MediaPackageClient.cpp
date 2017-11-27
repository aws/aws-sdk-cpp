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
#include <aws/mediapackage/MediaPackageClient.h>
#include <aws/mediapackage/MediaPackageEndpoint.h>
#include <aws/mediapackage/MediaPackageErrorMarshaller.h>
#include <aws/mediapackage/model/CreateChannelRequest.h>
#include <aws/mediapackage/model/CreateOriginEndpointRequest.h>
#include <aws/mediapackage/model/DeleteChannelRequest.h>
#include <aws/mediapackage/model/DeleteOriginEndpointRequest.h>
#include <aws/mediapackage/model/DescribeChannelRequest.h>
#include <aws/mediapackage/model/DescribeOriginEndpointRequest.h>
#include <aws/mediapackage/model/ListChannelsRequest.h>
#include <aws/mediapackage/model/ListOriginEndpointsRequest.h>
#include <aws/mediapackage/model/RotateChannelCredentialsRequest.h>
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
        SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<MediaPackageErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

MediaPackageClient::MediaPackageClient(const AWSCredentials& credentials, const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
         SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<MediaPackageErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

MediaPackageClient::MediaPackageClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
  const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider,
         SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<MediaPackageErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

MediaPackageClient::~MediaPackageClient()
{
}

void MediaPackageClient::init(const ClientConfiguration& config)
{
  Aws::StringStream ss;
  ss << SchemeMapper::ToString(config.scheme) << "://";

  if(config.endpointOverride.empty())
  {
    ss << MediaPackageEndpoint::ForRegion(config.region, config.useDualStack);
  }
  else
  {
    ss << config.endpointOverride;
  }

  m_uri = ss.str();
}

CreateChannelOutcome MediaPackageClient::CreateChannel(const CreateChannelRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/channels";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return CreateChannelOutcome(CreateChannelResult(outcome.GetResult()));
  }
  else
  {
    return CreateChannelOutcome(outcome.GetError());
  }
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

CreateOriginEndpointOutcome MediaPackageClient::CreateOriginEndpoint(const CreateOriginEndpointRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/origin_endpoints";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return CreateOriginEndpointOutcome(CreateOriginEndpointResult(outcome.GetResult()));
  }
  else
  {
    return CreateOriginEndpointOutcome(outcome.GetError());
  }
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
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/channels/";
  ss << request.GetId();
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DeleteChannelOutcome(DeleteChannelResult(outcome.GetResult()));
  }
  else
  {
    return DeleteChannelOutcome(outcome.GetError());
  }
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
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/origin_endpoints/";
  ss << request.GetId();
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DeleteOriginEndpointOutcome(DeleteOriginEndpointResult(outcome.GetResult()));
  }
  else
  {
    return DeleteOriginEndpointOutcome(outcome.GetError());
  }
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
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/channels/";
  ss << request.GetId();
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DescribeChannelOutcome(DescribeChannelResult(outcome.GetResult()));
  }
  else
  {
    return DescribeChannelOutcome(outcome.GetError());
  }
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

DescribeOriginEndpointOutcome MediaPackageClient::DescribeOriginEndpoint(const DescribeOriginEndpointRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/origin_endpoints/";
  ss << request.GetId();
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DescribeOriginEndpointOutcome(DescribeOriginEndpointResult(outcome.GetResult()));
  }
  else
  {
    return DescribeOriginEndpointOutcome(outcome.GetError());
  }
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
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/channels";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListChannelsOutcome(ListChannelsResult(outcome.GetResult()));
  }
  else
  {
    return ListChannelsOutcome(outcome.GetError());
  }
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

ListOriginEndpointsOutcome MediaPackageClient::ListOriginEndpoints(const ListOriginEndpointsRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/origin_endpoints";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListOriginEndpointsOutcome(ListOriginEndpointsResult(outcome.GetResult()));
  }
  else
  {
    return ListOriginEndpointsOutcome(outcome.GetError());
  }
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

RotateChannelCredentialsOutcome MediaPackageClient::RotateChannelCredentials(const RotateChannelCredentialsRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/channels/";
  ss << request.GetId();
  ss << "/credentials";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return RotateChannelCredentialsOutcome(RotateChannelCredentialsResult(outcome.GetResult()));
  }
  else
  {
    return RotateChannelCredentialsOutcome(outcome.GetError());
  }
}

RotateChannelCredentialsOutcomeCallable MediaPackageClient::RotateChannelCredentialsCallable(const RotateChannelCredentialsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< RotateChannelCredentialsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->RotateChannelCredentials(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MediaPackageClient::RotateChannelCredentialsAsync(const RotateChannelCredentialsRequest& request, const RotateChannelCredentialsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->RotateChannelCredentialsAsyncHelper( request, handler, context ); } );
}

void MediaPackageClient::RotateChannelCredentialsAsyncHelper(const RotateChannelCredentialsRequest& request, const RotateChannelCredentialsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, RotateChannelCredentials(request), context);
}

UpdateChannelOutcome MediaPackageClient::UpdateChannel(const UpdateChannelRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/channels/";
  ss << request.GetId();
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return UpdateChannelOutcome(UpdateChannelResult(outcome.GetResult()));
  }
  else
  {
    return UpdateChannelOutcome(outcome.GetError());
  }
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
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/origin_endpoints/";
  ss << request.GetId();
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return UpdateOriginEndpointOutcome(UpdateOriginEndpointResult(outcome.GetResult()));
  }
  else
  {
    return UpdateOriginEndpointOutcome(outcome.GetError());
  }
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

