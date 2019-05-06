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

#include <aws/medialive/MediaLiveClient.h>
#include <aws/medialive/MediaLiveEndpoint.h>
#include <aws/medialive/MediaLiveErrorMarshaller.h>
#include <aws/medialive/model/BatchUpdateScheduleRequest.h>
#include <aws/medialive/model/CreateChannelRequest.h>
#include <aws/medialive/model/CreateInputRequest.h>
#include <aws/medialive/model/CreateInputSecurityGroupRequest.h>
#include <aws/medialive/model/CreateTagsRequest.h>
#include <aws/medialive/model/DeleteChannelRequest.h>
#include <aws/medialive/model/DeleteInputRequest.h>
#include <aws/medialive/model/DeleteInputSecurityGroupRequest.h>
#include <aws/medialive/model/DeleteReservationRequest.h>
#include <aws/medialive/model/DeleteScheduleRequest.h>
#include <aws/medialive/model/DeleteTagsRequest.h>
#include <aws/medialive/model/DescribeChannelRequest.h>
#include <aws/medialive/model/DescribeInputRequest.h>
#include <aws/medialive/model/DescribeInputSecurityGroupRequest.h>
#include <aws/medialive/model/DescribeOfferingRequest.h>
#include <aws/medialive/model/DescribeReservationRequest.h>
#include <aws/medialive/model/DescribeScheduleRequest.h>
#include <aws/medialive/model/ListChannelsRequest.h>
#include <aws/medialive/model/ListInputSecurityGroupsRequest.h>
#include <aws/medialive/model/ListInputsRequest.h>
#include <aws/medialive/model/ListOfferingsRequest.h>
#include <aws/medialive/model/ListReservationsRequest.h>
#include <aws/medialive/model/ListTagsForResourceRequest.h>
#include <aws/medialive/model/PurchaseOfferingRequest.h>
#include <aws/medialive/model/StartChannelRequest.h>
#include <aws/medialive/model/StopChannelRequest.h>
#include <aws/medialive/model/UpdateChannelRequest.h>
#include <aws/medialive/model/UpdateChannelClassRequest.h>
#include <aws/medialive/model/UpdateInputRequest.h>
#include <aws/medialive/model/UpdateInputSecurityGroupRequest.h>
#include <aws/medialive/model/UpdateReservationRequest.h>

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
  m_configScheme = SchemeMapper::ToString(config.scheme);
  if (config.endpointOverride.empty())
  {
      m_uri = m_configScheme + "://" + MediaLiveEndpoint::ForRegion(config.region, config.useDualStack);
  }
  else
  {
      OverrideEndpoint(config.endpointOverride);
  }
}

void MediaLiveClient::OverrideEndpoint(const Aws::String& endpoint)
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

BatchUpdateScheduleOutcome MediaLiveClient::BatchUpdateSchedule(const BatchUpdateScheduleRequest& request) const
{
  if (!request.ChannelIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("BatchUpdateSchedule", "Required field: ChannelId, is not set");
    return BatchUpdateScheduleOutcome(Aws::Client::AWSError<MediaLiveErrors>(MediaLiveErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ChannelId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/prod/channels/";
  ss << request.GetChannelId();
  ss << "/schedule";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return BatchUpdateScheduleOutcome(BatchUpdateScheduleResult(outcome.GetResult()));
  }
  else
  {
    return BatchUpdateScheduleOutcome(outcome.GetError());
  }
}

BatchUpdateScheduleOutcomeCallable MediaLiveClient::BatchUpdateScheduleCallable(const BatchUpdateScheduleRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< BatchUpdateScheduleOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->BatchUpdateSchedule(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MediaLiveClient::BatchUpdateScheduleAsync(const BatchUpdateScheduleRequest& request, const BatchUpdateScheduleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->BatchUpdateScheduleAsyncHelper( request, handler, context ); } );
}

void MediaLiveClient::BatchUpdateScheduleAsyncHelper(const BatchUpdateScheduleRequest& request, const BatchUpdateScheduleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, BatchUpdateSchedule(request), context);
}

CreateChannelOutcome MediaLiveClient::CreateChannel(const CreateChannelRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
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
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
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
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
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

CreateTagsOutcome MediaLiveClient::CreateTags(const CreateTagsRequest& request) const
{
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateTags", "Required field: ResourceArn, is not set");
    return CreateTagsOutcome(Aws::Client::AWSError<MediaLiveErrors>(MediaLiveErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/prod/tags/";
  ss << request.GetResourceArn();
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return CreateTagsOutcome(NoResult());
  }
  else
  {
    return CreateTagsOutcome(outcome.GetError());
  }
}

CreateTagsOutcomeCallable MediaLiveClient::CreateTagsCallable(const CreateTagsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateTagsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateTags(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MediaLiveClient::CreateTagsAsync(const CreateTagsRequest& request, const CreateTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateTagsAsyncHelper( request, handler, context ); } );
}

void MediaLiveClient::CreateTagsAsyncHelper(const CreateTagsRequest& request, const CreateTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateTags(request), context);
}

DeleteChannelOutcome MediaLiveClient::DeleteChannel(const DeleteChannelRequest& request) const
{
  if (!request.ChannelIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteChannel", "Required field: ChannelId, is not set");
    return DeleteChannelOutcome(Aws::Client::AWSError<MediaLiveErrors>(MediaLiveErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ChannelId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
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
  if (!request.InputIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteInput", "Required field: InputId, is not set");
    return DeleteInputOutcome(Aws::Client::AWSError<MediaLiveErrors>(MediaLiveErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [InputId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
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
  if (!request.InputSecurityGroupIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteInputSecurityGroup", "Required field: InputSecurityGroupId, is not set");
    return DeleteInputSecurityGroupOutcome(Aws::Client::AWSError<MediaLiveErrors>(MediaLiveErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [InputSecurityGroupId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
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

DeleteReservationOutcome MediaLiveClient::DeleteReservation(const DeleteReservationRequest& request) const
{
  if (!request.ReservationIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteReservation", "Required field: ReservationId, is not set");
    return DeleteReservationOutcome(Aws::Client::AWSError<MediaLiveErrors>(MediaLiveErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ReservationId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/prod/reservations/";
  ss << request.GetReservationId();
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DeleteReservationOutcome(DeleteReservationResult(outcome.GetResult()));
  }
  else
  {
    return DeleteReservationOutcome(outcome.GetError());
  }
}

DeleteReservationOutcomeCallable MediaLiveClient::DeleteReservationCallable(const DeleteReservationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteReservationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteReservation(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MediaLiveClient::DeleteReservationAsync(const DeleteReservationRequest& request, const DeleteReservationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteReservationAsyncHelper( request, handler, context ); } );
}

void MediaLiveClient::DeleteReservationAsyncHelper(const DeleteReservationRequest& request, const DeleteReservationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteReservation(request), context);
}

DeleteScheduleOutcome MediaLiveClient::DeleteSchedule(const DeleteScheduleRequest& request) const
{
  if (!request.ChannelIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteSchedule", "Required field: ChannelId, is not set");
    return DeleteScheduleOutcome(Aws::Client::AWSError<MediaLiveErrors>(MediaLiveErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ChannelId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/prod/channels/";
  ss << request.GetChannelId();
  ss << "/schedule";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DeleteScheduleOutcome(DeleteScheduleResult(outcome.GetResult()));
  }
  else
  {
    return DeleteScheduleOutcome(outcome.GetError());
  }
}

DeleteScheduleOutcomeCallable MediaLiveClient::DeleteScheduleCallable(const DeleteScheduleRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteScheduleOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteSchedule(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MediaLiveClient::DeleteScheduleAsync(const DeleteScheduleRequest& request, const DeleteScheduleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteScheduleAsyncHelper( request, handler, context ); } );
}

void MediaLiveClient::DeleteScheduleAsyncHelper(const DeleteScheduleRequest& request, const DeleteScheduleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteSchedule(request), context);
}

DeleteTagsOutcome MediaLiveClient::DeleteTags(const DeleteTagsRequest& request) const
{
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteTags", "Required field: ResourceArn, is not set");
    return DeleteTagsOutcome(Aws::Client::AWSError<MediaLiveErrors>(MediaLiveErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  if (!request.TagKeysHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteTags", "Required field: TagKeys, is not set");
    return DeleteTagsOutcome(Aws::Client::AWSError<MediaLiveErrors>(MediaLiveErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TagKeys]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/prod/tags/";
  ss << request.GetResourceArn();
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DeleteTagsOutcome(NoResult());
  }
  else
  {
    return DeleteTagsOutcome(outcome.GetError());
  }
}

DeleteTagsOutcomeCallable MediaLiveClient::DeleteTagsCallable(const DeleteTagsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteTagsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteTags(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MediaLiveClient::DeleteTagsAsync(const DeleteTagsRequest& request, const DeleteTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteTagsAsyncHelper( request, handler, context ); } );
}

void MediaLiveClient::DeleteTagsAsyncHelper(const DeleteTagsRequest& request, const DeleteTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteTags(request), context);
}

DescribeChannelOutcome MediaLiveClient::DescribeChannel(const DescribeChannelRequest& request) const
{
  if (!request.ChannelIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeChannel", "Required field: ChannelId, is not set");
    return DescribeChannelOutcome(Aws::Client::AWSError<MediaLiveErrors>(MediaLiveErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ChannelId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
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
  if (!request.InputIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeInput", "Required field: InputId, is not set");
    return DescribeInputOutcome(Aws::Client::AWSError<MediaLiveErrors>(MediaLiveErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [InputId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
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
  if (!request.InputSecurityGroupIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeInputSecurityGroup", "Required field: InputSecurityGroupId, is not set");
    return DescribeInputSecurityGroupOutcome(Aws::Client::AWSError<MediaLiveErrors>(MediaLiveErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [InputSecurityGroupId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
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

DescribeOfferingOutcome MediaLiveClient::DescribeOffering(const DescribeOfferingRequest& request) const
{
  if (!request.OfferingIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeOffering", "Required field: OfferingId, is not set");
    return DescribeOfferingOutcome(Aws::Client::AWSError<MediaLiveErrors>(MediaLiveErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [OfferingId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/prod/offerings/";
  ss << request.GetOfferingId();
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DescribeOfferingOutcome(DescribeOfferingResult(outcome.GetResult()));
  }
  else
  {
    return DescribeOfferingOutcome(outcome.GetError());
  }
}

DescribeOfferingOutcomeCallable MediaLiveClient::DescribeOfferingCallable(const DescribeOfferingRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeOfferingOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeOffering(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MediaLiveClient::DescribeOfferingAsync(const DescribeOfferingRequest& request, const DescribeOfferingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeOfferingAsyncHelper( request, handler, context ); } );
}

void MediaLiveClient::DescribeOfferingAsyncHelper(const DescribeOfferingRequest& request, const DescribeOfferingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeOffering(request), context);
}

DescribeReservationOutcome MediaLiveClient::DescribeReservation(const DescribeReservationRequest& request) const
{
  if (!request.ReservationIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeReservation", "Required field: ReservationId, is not set");
    return DescribeReservationOutcome(Aws::Client::AWSError<MediaLiveErrors>(MediaLiveErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ReservationId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/prod/reservations/";
  ss << request.GetReservationId();
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DescribeReservationOutcome(DescribeReservationResult(outcome.GetResult()));
  }
  else
  {
    return DescribeReservationOutcome(outcome.GetError());
  }
}

DescribeReservationOutcomeCallable MediaLiveClient::DescribeReservationCallable(const DescribeReservationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeReservationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeReservation(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MediaLiveClient::DescribeReservationAsync(const DescribeReservationRequest& request, const DescribeReservationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeReservationAsyncHelper( request, handler, context ); } );
}

void MediaLiveClient::DescribeReservationAsyncHelper(const DescribeReservationRequest& request, const DescribeReservationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeReservation(request), context);
}

DescribeScheduleOutcome MediaLiveClient::DescribeSchedule(const DescribeScheduleRequest& request) const
{
  if (!request.ChannelIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeSchedule", "Required field: ChannelId, is not set");
    return DescribeScheduleOutcome(Aws::Client::AWSError<MediaLiveErrors>(MediaLiveErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ChannelId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/prod/channels/";
  ss << request.GetChannelId();
  ss << "/schedule";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DescribeScheduleOutcome(DescribeScheduleResult(outcome.GetResult()));
  }
  else
  {
    return DescribeScheduleOutcome(outcome.GetError());
  }
}

DescribeScheduleOutcomeCallable MediaLiveClient::DescribeScheduleCallable(const DescribeScheduleRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeScheduleOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeSchedule(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MediaLiveClient::DescribeScheduleAsync(const DescribeScheduleRequest& request, const DescribeScheduleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeScheduleAsyncHelper( request, handler, context ); } );
}

void MediaLiveClient::DescribeScheduleAsyncHelper(const DescribeScheduleRequest& request, const DescribeScheduleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeSchedule(request), context);
}

ListChannelsOutcome MediaLiveClient::ListChannels(const ListChannelsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
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
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
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
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
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

ListOfferingsOutcome MediaLiveClient::ListOfferings(const ListOfferingsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/prod/offerings";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListOfferingsOutcome(ListOfferingsResult(outcome.GetResult()));
  }
  else
  {
    return ListOfferingsOutcome(outcome.GetError());
  }
}

ListOfferingsOutcomeCallable MediaLiveClient::ListOfferingsCallable(const ListOfferingsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListOfferingsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListOfferings(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MediaLiveClient::ListOfferingsAsync(const ListOfferingsRequest& request, const ListOfferingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListOfferingsAsyncHelper( request, handler, context ); } );
}

void MediaLiveClient::ListOfferingsAsyncHelper(const ListOfferingsRequest& request, const ListOfferingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListOfferings(request), context);
}

ListReservationsOutcome MediaLiveClient::ListReservations(const ListReservationsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/prod/reservations";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListReservationsOutcome(ListReservationsResult(outcome.GetResult()));
  }
  else
  {
    return ListReservationsOutcome(outcome.GetError());
  }
}

ListReservationsOutcomeCallable MediaLiveClient::ListReservationsCallable(const ListReservationsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListReservationsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListReservations(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MediaLiveClient::ListReservationsAsync(const ListReservationsRequest& request, const ListReservationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListReservationsAsyncHelper( request, handler, context ); } );
}

void MediaLiveClient::ListReservationsAsyncHelper(const ListReservationsRequest& request, const ListReservationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListReservations(request), context);
}

ListTagsForResourceOutcome MediaLiveClient::ListTagsForResource(const ListTagsForResourceRequest& request) const
{
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListTagsForResource", "Required field: ResourceArn, is not set");
    return ListTagsForResourceOutcome(Aws::Client::AWSError<MediaLiveErrors>(MediaLiveErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/prod/tags/";
  ss << request.GetResourceArn();
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListTagsForResourceOutcome(ListTagsForResourceResult(outcome.GetResult()));
  }
  else
  {
    return ListTagsForResourceOutcome(outcome.GetError());
  }
}

ListTagsForResourceOutcomeCallable MediaLiveClient::ListTagsForResourceCallable(const ListTagsForResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListTagsForResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListTagsForResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MediaLiveClient::ListTagsForResourceAsync(const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListTagsForResourceAsyncHelper( request, handler, context ); } );
}

void MediaLiveClient::ListTagsForResourceAsyncHelper(const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListTagsForResource(request), context);
}

PurchaseOfferingOutcome MediaLiveClient::PurchaseOffering(const PurchaseOfferingRequest& request) const
{
  if (!request.OfferingIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PurchaseOffering", "Required field: OfferingId, is not set");
    return PurchaseOfferingOutcome(Aws::Client::AWSError<MediaLiveErrors>(MediaLiveErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [OfferingId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/prod/offerings/";
  ss << request.GetOfferingId();
  ss << "/purchase";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return PurchaseOfferingOutcome(PurchaseOfferingResult(outcome.GetResult()));
  }
  else
  {
    return PurchaseOfferingOutcome(outcome.GetError());
  }
}

PurchaseOfferingOutcomeCallable MediaLiveClient::PurchaseOfferingCallable(const PurchaseOfferingRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PurchaseOfferingOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PurchaseOffering(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MediaLiveClient::PurchaseOfferingAsync(const PurchaseOfferingRequest& request, const PurchaseOfferingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->PurchaseOfferingAsyncHelper( request, handler, context ); } );
}

void MediaLiveClient::PurchaseOfferingAsyncHelper(const PurchaseOfferingRequest& request, const PurchaseOfferingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, PurchaseOffering(request), context);
}

StartChannelOutcome MediaLiveClient::StartChannel(const StartChannelRequest& request) const
{
  if (!request.ChannelIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("StartChannel", "Required field: ChannelId, is not set");
    return StartChannelOutcome(Aws::Client::AWSError<MediaLiveErrors>(MediaLiveErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ChannelId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
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
  if (!request.ChannelIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("StopChannel", "Required field: ChannelId, is not set");
    return StopChannelOutcome(Aws::Client::AWSError<MediaLiveErrors>(MediaLiveErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ChannelId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
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
  if (!request.ChannelIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateChannel", "Required field: ChannelId, is not set");
    return UpdateChannelOutcome(Aws::Client::AWSError<MediaLiveErrors>(MediaLiveErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ChannelId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
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

UpdateChannelClassOutcome MediaLiveClient::UpdateChannelClass(const UpdateChannelClassRequest& request) const
{
  if (!request.ChannelIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateChannelClass", "Required field: ChannelId, is not set");
    return UpdateChannelClassOutcome(Aws::Client::AWSError<MediaLiveErrors>(MediaLiveErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ChannelId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/prod/channels/";
  ss << request.GetChannelId();
  ss << "/channelClass";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return UpdateChannelClassOutcome(UpdateChannelClassResult(outcome.GetResult()));
  }
  else
  {
    return UpdateChannelClassOutcome(outcome.GetError());
  }
}

UpdateChannelClassOutcomeCallable MediaLiveClient::UpdateChannelClassCallable(const UpdateChannelClassRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateChannelClassOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateChannelClass(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MediaLiveClient::UpdateChannelClassAsync(const UpdateChannelClassRequest& request, const UpdateChannelClassResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateChannelClassAsyncHelper( request, handler, context ); } );
}

void MediaLiveClient::UpdateChannelClassAsyncHelper(const UpdateChannelClassRequest& request, const UpdateChannelClassResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateChannelClass(request), context);
}

UpdateInputOutcome MediaLiveClient::UpdateInput(const UpdateInputRequest& request) const
{
  if (!request.InputIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateInput", "Required field: InputId, is not set");
    return UpdateInputOutcome(Aws::Client::AWSError<MediaLiveErrors>(MediaLiveErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [InputId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
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
  if (!request.InputSecurityGroupIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateInputSecurityGroup", "Required field: InputSecurityGroupId, is not set");
    return UpdateInputSecurityGroupOutcome(Aws::Client::AWSError<MediaLiveErrors>(MediaLiveErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [InputSecurityGroupId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
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

UpdateReservationOutcome MediaLiveClient::UpdateReservation(const UpdateReservationRequest& request) const
{
  if (!request.ReservationIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateReservation", "Required field: ReservationId, is not set");
    return UpdateReservationOutcome(Aws::Client::AWSError<MediaLiveErrors>(MediaLiveErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ReservationId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/prod/reservations/";
  ss << request.GetReservationId();
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return UpdateReservationOutcome(UpdateReservationResult(outcome.GetResult()));
  }
  else
  {
    return UpdateReservationOutcome(outcome.GetError());
  }
}

UpdateReservationOutcomeCallable MediaLiveClient::UpdateReservationCallable(const UpdateReservationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateReservationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateReservation(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MediaLiveClient::UpdateReservationAsync(const UpdateReservationRequest& request, const UpdateReservationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateReservationAsyncHelper( request, handler, context ); } );
}

void MediaLiveClient::UpdateReservationAsyncHelper(const UpdateReservationRequest& request, const UpdateReservationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateReservation(request), context);
}

