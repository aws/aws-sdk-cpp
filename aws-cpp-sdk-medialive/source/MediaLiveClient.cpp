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
#include <aws/medialive/MediaLiveClient.h>
#include <aws/medialive/MediaLiveEndpoint.h>
#include <aws/medialive/MediaLiveErrorMarshaller.h>
#include <aws/medialive/model/CreateChannelRequest.h>
#include <aws/medialive/model/CreateInputRequest.h>
#include <aws/medialive/model/CreateInputSecurityGroupRequest.h>
#include <aws/medialive/model/DeleteChannelRequest.h>
#include <aws/medialive/model/DeleteInputRequest.h>
#include <aws/medialive/model/DeleteInputSecurityGroupRequest.h>
#include <aws/medialive/model/DescribeChannelRequest.h>
#include <aws/medialive/model/DescribeInputRequest.h>
#include <aws/medialive/model/DescribeInputSecurityGroupRequest.h>
#include <aws/medialive/model/ListChannelsRequest.h>
#include <aws/medialive/model/ListInputSecurityGroupsRequest.h>
#include <aws/medialive/model/ListInputsRequest.h>
#include <aws/medialive/model/StartChannelRequest.h>
#include <aws/medialive/model/StopChannelRequest.h>
#include <aws/medialive/model/UpdateChannelRequest.h>
#include <aws/medialive/model/UpdateInputRequest.h>
#include <aws/medialive/model/UpdateInputSecurityGroupRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::MediaLive;
using namespace Aws::MediaLive::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;

static const char* SERVICE_NAME = "medialive";
static const char* ALLOCATION_TAG = "MediaLiveClient";


MediaLiveClient::MediaLiveClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
        SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<MediaLiveErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

MediaLiveClient::MediaLiveClient(const AWSCredentials& credentials, const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
         SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<MediaLiveErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

MediaLiveClient::MediaLiveClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
  const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider,
         SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<MediaLiveErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

MediaLiveClient::~MediaLiveClient()
{
}

void MediaLiveClient::init(const ClientConfiguration& config)
{
  Aws::StringStream ss;
  ss << SchemeMapper::ToString(config.scheme) << "://";

  if(config.endpointOverride.empty())
  {
    ss << MediaLiveEndpoint::ForRegion(config.region, config.useDualStack);
  }
  else
  {
    ss << config.endpointOverride;
  }

  m_uri = ss.str();
}

CreateChannelOutcome MediaLiveClient::CreateChannel(const CreateChannelRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/prod/channels";
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

CreateChannelOutcomeCallable MediaLiveClient::CreateChannelCallable(const CreateChannelRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateChannelOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateChannel(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MediaLiveClient::CreateChannelAsync(const CreateChannelRequest& request, const CreateChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateChannelAsyncHelper( request, handler, context ); } );
}

void MediaLiveClient::CreateChannelAsyncHelper(const CreateChannelRequest& request, const CreateChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateChannel(request), context);
}

CreateInputOutcome MediaLiveClient::CreateInput(const CreateInputRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/prod/inputs";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return CreateInputOutcome(CreateInputResult(outcome.GetResult()));
  }
  else
  {
    return CreateInputOutcome(outcome.GetError());
  }
}

CreateInputOutcomeCallable MediaLiveClient::CreateInputCallable(const CreateInputRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateInputOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateInput(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MediaLiveClient::CreateInputAsync(const CreateInputRequest& request, const CreateInputResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateInputAsyncHelper( request, handler, context ); } );
}

void MediaLiveClient::CreateInputAsyncHelper(const CreateInputRequest& request, const CreateInputResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateInput(request), context);
}

CreateInputSecurityGroupOutcome MediaLiveClient::CreateInputSecurityGroup(const CreateInputSecurityGroupRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/prod/inputSecurityGroups";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return CreateInputSecurityGroupOutcome(CreateInputSecurityGroupResult(outcome.GetResult()));
  }
  else
  {
    return CreateInputSecurityGroupOutcome(outcome.GetError());
  }
}

CreateInputSecurityGroupOutcomeCallable MediaLiveClient::CreateInputSecurityGroupCallable(const CreateInputSecurityGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateInputSecurityGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateInputSecurityGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MediaLiveClient::CreateInputSecurityGroupAsync(const CreateInputSecurityGroupRequest& request, const CreateInputSecurityGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateInputSecurityGroupAsyncHelper( request, handler, context ); } );
}

void MediaLiveClient::CreateInputSecurityGroupAsyncHelper(const CreateInputSecurityGroupRequest& request, const CreateInputSecurityGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateInputSecurityGroup(request), context);
}

DeleteChannelOutcome MediaLiveClient::DeleteChannel(const DeleteChannelRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/prod/channels/";
  ss << request.GetChannelId();
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

DeleteChannelOutcomeCallable MediaLiveClient::DeleteChannelCallable(const DeleteChannelRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteChannelOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteChannel(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MediaLiveClient::DeleteChannelAsync(const DeleteChannelRequest& request, const DeleteChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteChannelAsyncHelper( request, handler, context ); } );
}

void MediaLiveClient::DeleteChannelAsyncHelper(const DeleteChannelRequest& request, const DeleteChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteChannel(request), context);
}

DeleteInputOutcome MediaLiveClient::DeleteInput(const DeleteInputRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/prod/inputs/";
  ss << request.GetInputId();
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DeleteInputOutcome(DeleteInputResult(outcome.GetResult()));
  }
  else
  {
    return DeleteInputOutcome(outcome.GetError());
  }
}

DeleteInputOutcomeCallable MediaLiveClient::DeleteInputCallable(const DeleteInputRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteInputOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteInput(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MediaLiveClient::DeleteInputAsync(const DeleteInputRequest& request, const DeleteInputResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteInputAsyncHelper( request, handler, context ); } );
}

void MediaLiveClient::DeleteInputAsyncHelper(const DeleteInputRequest& request, const DeleteInputResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteInput(request), context);
}

DeleteInputSecurityGroupOutcome MediaLiveClient::DeleteInputSecurityGroup(const DeleteInputSecurityGroupRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/prod/inputSecurityGroups/";
  ss << request.GetInputSecurityGroupId();
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DeleteInputSecurityGroupOutcome(DeleteInputSecurityGroupResult(outcome.GetResult()));
  }
  else
  {
    return DeleteInputSecurityGroupOutcome(outcome.GetError());
  }
}

DeleteInputSecurityGroupOutcomeCallable MediaLiveClient::DeleteInputSecurityGroupCallable(const DeleteInputSecurityGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteInputSecurityGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteInputSecurityGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MediaLiveClient::DeleteInputSecurityGroupAsync(const DeleteInputSecurityGroupRequest& request, const DeleteInputSecurityGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteInputSecurityGroupAsyncHelper( request, handler, context ); } );
}

void MediaLiveClient::DeleteInputSecurityGroupAsyncHelper(const DeleteInputSecurityGroupRequest& request, const DeleteInputSecurityGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteInputSecurityGroup(request), context);
}

DescribeChannelOutcome MediaLiveClient::DescribeChannel(const DescribeChannelRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/prod/channels/";
  ss << request.GetChannelId();
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

DescribeChannelOutcomeCallable MediaLiveClient::DescribeChannelCallable(const DescribeChannelRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeChannelOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeChannel(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MediaLiveClient::DescribeChannelAsync(const DescribeChannelRequest& request, const DescribeChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeChannelAsyncHelper( request, handler, context ); } );
}

void MediaLiveClient::DescribeChannelAsyncHelper(const DescribeChannelRequest& request, const DescribeChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeChannel(request), context);
}

DescribeInputOutcome MediaLiveClient::DescribeInput(const DescribeInputRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/prod/inputs/";
  ss << request.GetInputId();
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DescribeInputOutcome(DescribeInputResult(outcome.GetResult()));
  }
  else
  {
    return DescribeInputOutcome(outcome.GetError());
  }
}

DescribeInputOutcomeCallable MediaLiveClient::DescribeInputCallable(const DescribeInputRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeInputOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeInput(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MediaLiveClient::DescribeInputAsync(const DescribeInputRequest& request, const DescribeInputResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeInputAsyncHelper( request, handler, context ); } );
}

void MediaLiveClient::DescribeInputAsyncHelper(const DescribeInputRequest& request, const DescribeInputResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeInput(request), context);
}

DescribeInputSecurityGroupOutcome MediaLiveClient::DescribeInputSecurityGroup(const DescribeInputSecurityGroupRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/prod/inputSecurityGroups/";
  ss << request.GetInputSecurityGroupId();
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DescribeInputSecurityGroupOutcome(DescribeInputSecurityGroupResult(outcome.GetResult()));
  }
  else
  {
    return DescribeInputSecurityGroupOutcome(outcome.GetError());
  }
}

DescribeInputSecurityGroupOutcomeCallable MediaLiveClient::DescribeInputSecurityGroupCallable(const DescribeInputSecurityGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeInputSecurityGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeInputSecurityGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MediaLiveClient::DescribeInputSecurityGroupAsync(const DescribeInputSecurityGroupRequest& request, const DescribeInputSecurityGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeInputSecurityGroupAsyncHelper( request, handler, context ); } );
}

void MediaLiveClient::DescribeInputSecurityGroupAsyncHelper(const DescribeInputSecurityGroupRequest& request, const DescribeInputSecurityGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeInputSecurityGroup(request), context);
}

ListChannelsOutcome MediaLiveClient::ListChannels(const ListChannelsRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/prod/channels";
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

ListChannelsOutcomeCallable MediaLiveClient::ListChannelsCallable(const ListChannelsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListChannelsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListChannels(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MediaLiveClient::ListChannelsAsync(const ListChannelsRequest& request, const ListChannelsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListChannelsAsyncHelper( request, handler, context ); } );
}

void MediaLiveClient::ListChannelsAsyncHelper(const ListChannelsRequest& request, const ListChannelsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListChannels(request), context);
}

ListInputSecurityGroupsOutcome MediaLiveClient::ListInputSecurityGroups(const ListInputSecurityGroupsRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/prod/inputSecurityGroups";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListInputSecurityGroupsOutcome(ListInputSecurityGroupsResult(outcome.GetResult()));
  }
  else
  {
    return ListInputSecurityGroupsOutcome(outcome.GetError());
  }
}

ListInputSecurityGroupsOutcomeCallable MediaLiveClient::ListInputSecurityGroupsCallable(const ListInputSecurityGroupsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListInputSecurityGroupsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListInputSecurityGroups(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MediaLiveClient::ListInputSecurityGroupsAsync(const ListInputSecurityGroupsRequest& request, const ListInputSecurityGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListInputSecurityGroupsAsyncHelper( request, handler, context ); } );
}

void MediaLiveClient::ListInputSecurityGroupsAsyncHelper(const ListInputSecurityGroupsRequest& request, const ListInputSecurityGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListInputSecurityGroups(request), context);
}

ListInputsOutcome MediaLiveClient::ListInputs(const ListInputsRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/prod/inputs";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListInputsOutcome(ListInputsResult(outcome.GetResult()));
  }
  else
  {
    return ListInputsOutcome(outcome.GetError());
  }
}

ListInputsOutcomeCallable MediaLiveClient::ListInputsCallable(const ListInputsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListInputsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListInputs(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MediaLiveClient::ListInputsAsync(const ListInputsRequest& request, const ListInputsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListInputsAsyncHelper( request, handler, context ); } );
}

void MediaLiveClient::ListInputsAsyncHelper(const ListInputsRequest& request, const ListInputsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListInputs(request), context);
}

StartChannelOutcome MediaLiveClient::StartChannel(const StartChannelRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/prod/channels/";
  ss << request.GetChannelId();
  ss << "/start";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return StartChannelOutcome(StartChannelResult(outcome.GetResult()));
  }
  else
  {
    return StartChannelOutcome(outcome.GetError());
  }
}

StartChannelOutcomeCallable MediaLiveClient::StartChannelCallable(const StartChannelRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StartChannelOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StartChannel(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MediaLiveClient::StartChannelAsync(const StartChannelRequest& request, const StartChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->StartChannelAsyncHelper( request, handler, context ); } );
}

void MediaLiveClient::StartChannelAsyncHelper(const StartChannelRequest& request, const StartChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, StartChannel(request), context);
}

StopChannelOutcome MediaLiveClient::StopChannel(const StopChannelRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/prod/channels/";
  ss << request.GetChannelId();
  ss << "/stop";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return StopChannelOutcome(StopChannelResult(outcome.GetResult()));
  }
  else
  {
    return StopChannelOutcome(outcome.GetError());
  }
}

StopChannelOutcomeCallable MediaLiveClient::StopChannelCallable(const StopChannelRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StopChannelOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StopChannel(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MediaLiveClient::StopChannelAsync(const StopChannelRequest& request, const StopChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->StopChannelAsyncHelper( request, handler, context ); } );
}

void MediaLiveClient::StopChannelAsyncHelper(const StopChannelRequest& request, const StopChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, StopChannel(request), context);
}

UpdateChannelOutcome MediaLiveClient::UpdateChannel(const UpdateChannelRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/prod/channels/";
  ss << request.GetChannelId();
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

UpdateChannelOutcomeCallable MediaLiveClient::UpdateChannelCallable(const UpdateChannelRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateChannelOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateChannel(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MediaLiveClient::UpdateChannelAsync(const UpdateChannelRequest& request, const UpdateChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateChannelAsyncHelper( request, handler, context ); } );
}

void MediaLiveClient::UpdateChannelAsyncHelper(const UpdateChannelRequest& request, const UpdateChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateChannel(request), context);
}

UpdateInputOutcome MediaLiveClient::UpdateInput(const UpdateInputRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/prod/inputs/";
  ss << request.GetInputId();
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return UpdateInputOutcome(UpdateInputResult(outcome.GetResult()));
  }
  else
  {
    return UpdateInputOutcome(outcome.GetError());
  }
}

UpdateInputOutcomeCallable MediaLiveClient::UpdateInputCallable(const UpdateInputRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateInputOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateInput(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MediaLiveClient::UpdateInputAsync(const UpdateInputRequest& request, const UpdateInputResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateInputAsyncHelper( request, handler, context ); } );
}

void MediaLiveClient::UpdateInputAsyncHelper(const UpdateInputRequest& request, const UpdateInputResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateInput(request), context);
}

UpdateInputSecurityGroupOutcome MediaLiveClient::UpdateInputSecurityGroup(const UpdateInputSecurityGroupRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/prod/inputSecurityGroups/";
  ss << request.GetInputSecurityGroupId();
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return UpdateInputSecurityGroupOutcome(UpdateInputSecurityGroupResult(outcome.GetResult()));
  }
  else
  {
    return UpdateInputSecurityGroupOutcome(outcome.GetError());
  }
}

UpdateInputSecurityGroupOutcomeCallable MediaLiveClient::UpdateInputSecurityGroupCallable(const UpdateInputSecurityGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateInputSecurityGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateInputSecurityGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MediaLiveClient::UpdateInputSecurityGroupAsync(const UpdateInputSecurityGroupRequest& request, const UpdateInputSecurityGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateInputSecurityGroupAsyncHelper( request, handler, context ); } );
}

void MediaLiveClient::UpdateInputSecurityGroupAsyncHelper(const UpdateInputSecurityGroupRequest& request, const UpdateInputSecurityGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateInputSecurityGroup(request), context);
}

