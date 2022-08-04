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

#include <aws/chime-sdk-meetings/ChimeSDKMeetingsClient.h>
#include <aws/chime-sdk-meetings/ChimeSDKMeetingsEndpoint.h>
#include <aws/chime-sdk-meetings/ChimeSDKMeetingsErrorMarshaller.h>
#include <aws/chime-sdk-meetings/model/BatchCreateAttendeeRequest.h>
#include <aws/chime-sdk-meetings/model/BatchUpdateAttendeeCapabilitiesExceptRequest.h>
#include <aws/chime-sdk-meetings/model/CreateAttendeeRequest.h>
#include <aws/chime-sdk-meetings/model/CreateMeetingRequest.h>
#include <aws/chime-sdk-meetings/model/CreateMeetingWithAttendeesRequest.h>
#include <aws/chime-sdk-meetings/model/DeleteAttendeeRequest.h>
#include <aws/chime-sdk-meetings/model/DeleteMeetingRequest.h>
#include <aws/chime-sdk-meetings/model/GetAttendeeRequest.h>
#include <aws/chime-sdk-meetings/model/GetMeetingRequest.h>
#include <aws/chime-sdk-meetings/model/ListAttendeesRequest.h>
#include <aws/chime-sdk-meetings/model/ListTagsForResourceRequest.h>
#include <aws/chime-sdk-meetings/model/StartMeetingTranscriptionRequest.h>
#include <aws/chime-sdk-meetings/model/StopMeetingTranscriptionRequest.h>
#include <aws/chime-sdk-meetings/model/TagResourceRequest.h>
#include <aws/chime-sdk-meetings/model/UntagResourceRequest.h>
#include <aws/chime-sdk-meetings/model/UpdateAttendeeCapabilitiesRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::ChimeSDKMeetings;
using namespace Aws::ChimeSDKMeetings::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;

static const char* SERVICE_NAME = "chime";
static const char* ALLOCATION_TAG = "ChimeSDKMeetingsClient";


ChimeSDKMeetingsClient::ChimeSDKMeetingsClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
        SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
    Aws::MakeShared<ChimeSDKMeetingsErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

ChimeSDKMeetingsClient::ChimeSDKMeetingsClient(const AWSCredentials& credentials, const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
         SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
    Aws::MakeShared<ChimeSDKMeetingsErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

ChimeSDKMeetingsClient::ChimeSDKMeetingsClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
  const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider,
         SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
    Aws::MakeShared<ChimeSDKMeetingsErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

ChimeSDKMeetingsClient::~ChimeSDKMeetingsClient()
{
}

void ChimeSDKMeetingsClient::init(const Client::ClientConfiguration& config)
{
  SetServiceClientName("Chime SDK Meetings");
  m_configScheme = SchemeMapper::ToString(config.scheme);
  if (config.endpointOverride.empty())
  {
      m_uri = m_configScheme + "://" + ChimeSDKMeetingsEndpoint::ForRegion(config.region, config.useDualStack);
  }
  else
  {
      OverrideEndpoint(config.endpointOverride);
  }
}

void ChimeSDKMeetingsClient::OverrideEndpoint(const Aws::String& endpoint)
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

BatchCreateAttendeeOutcome ChimeSDKMeetingsClient::BatchCreateAttendee(const BatchCreateAttendeeRequest& request) const
{
  if (!request.MeetingIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("BatchCreateAttendee", "Required field: MeetingId, is not set");
    return BatchCreateAttendeeOutcome(Aws::Client::AWSError<ChimeSDKMeetingsErrors>(ChimeSDKMeetingsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MeetingId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  uri.AddPathSegments("/meetings/");
  uri.AddPathSegment(request.GetMeetingId());
  uri.AddPathSegments("/attendees");
  ss.str("?operation=batch-create");
  uri.SetQueryString(ss.str());
  return BatchCreateAttendeeOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

BatchCreateAttendeeOutcomeCallable ChimeSDKMeetingsClient::BatchCreateAttendeeCallable(const BatchCreateAttendeeRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< BatchCreateAttendeeOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->BatchCreateAttendee(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ChimeSDKMeetingsClient::BatchCreateAttendeeAsync(const BatchCreateAttendeeRequest& request, const BatchCreateAttendeeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->BatchCreateAttendeeAsyncHelper( request, handler, context ); } );
}

void ChimeSDKMeetingsClient::BatchCreateAttendeeAsyncHelper(const BatchCreateAttendeeRequest& request, const BatchCreateAttendeeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, BatchCreateAttendee(request), context);
}

BatchUpdateAttendeeCapabilitiesExceptOutcome ChimeSDKMeetingsClient::BatchUpdateAttendeeCapabilitiesExcept(const BatchUpdateAttendeeCapabilitiesExceptRequest& request) const
{
  if (!request.MeetingIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("BatchUpdateAttendeeCapabilitiesExcept", "Required field: MeetingId, is not set");
    return BatchUpdateAttendeeCapabilitiesExceptOutcome(Aws::Client::AWSError<ChimeSDKMeetingsErrors>(ChimeSDKMeetingsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MeetingId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  uri.AddPathSegments("/meetings/");
  uri.AddPathSegment(request.GetMeetingId());
  uri.AddPathSegments("/attendees/capabilities");
  ss.str("?operation=batch-update-except");
  uri.SetQueryString(ss.str());
  return BatchUpdateAttendeeCapabilitiesExceptOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

BatchUpdateAttendeeCapabilitiesExceptOutcomeCallable ChimeSDKMeetingsClient::BatchUpdateAttendeeCapabilitiesExceptCallable(const BatchUpdateAttendeeCapabilitiesExceptRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< BatchUpdateAttendeeCapabilitiesExceptOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->BatchUpdateAttendeeCapabilitiesExcept(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ChimeSDKMeetingsClient::BatchUpdateAttendeeCapabilitiesExceptAsync(const BatchUpdateAttendeeCapabilitiesExceptRequest& request, const BatchUpdateAttendeeCapabilitiesExceptResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->BatchUpdateAttendeeCapabilitiesExceptAsyncHelper( request, handler, context ); } );
}

void ChimeSDKMeetingsClient::BatchUpdateAttendeeCapabilitiesExceptAsyncHelper(const BatchUpdateAttendeeCapabilitiesExceptRequest& request, const BatchUpdateAttendeeCapabilitiesExceptResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, BatchUpdateAttendeeCapabilitiesExcept(request), context);
}

CreateAttendeeOutcome ChimeSDKMeetingsClient::CreateAttendee(const CreateAttendeeRequest& request) const
{
  if (!request.MeetingIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateAttendee", "Required field: MeetingId, is not set");
    return CreateAttendeeOutcome(Aws::Client::AWSError<ChimeSDKMeetingsErrors>(ChimeSDKMeetingsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MeetingId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/meetings/");
  uri.AddPathSegment(request.GetMeetingId());
  uri.AddPathSegments("/attendees");
  return CreateAttendeeOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateAttendeeOutcomeCallable ChimeSDKMeetingsClient::CreateAttendeeCallable(const CreateAttendeeRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateAttendeeOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateAttendee(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ChimeSDKMeetingsClient::CreateAttendeeAsync(const CreateAttendeeRequest& request, const CreateAttendeeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateAttendeeAsyncHelper( request, handler, context ); } );
}

void ChimeSDKMeetingsClient::CreateAttendeeAsyncHelper(const CreateAttendeeRequest& request, const CreateAttendeeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateAttendee(request), context);
}

CreateMeetingOutcome ChimeSDKMeetingsClient::CreateMeeting(const CreateMeetingRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/meetings");
  return CreateMeetingOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateMeetingOutcomeCallable ChimeSDKMeetingsClient::CreateMeetingCallable(const CreateMeetingRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateMeetingOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateMeeting(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ChimeSDKMeetingsClient::CreateMeetingAsync(const CreateMeetingRequest& request, const CreateMeetingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateMeetingAsyncHelper( request, handler, context ); } );
}

void ChimeSDKMeetingsClient::CreateMeetingAsyncHelper(const CreateMeetingRequest& request, const CreateMeetingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateMeeting(request), context);
}

CreateMeetingWithAttendeesOutcome ChimeSDKMeetingsClient::CreateMeetingWithAttendees(const CreateMeetingWithAttendeesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  uri.AddPathSegments("/meetings");
  ss.str("?operation=create-attendees");
  uri.SetQueryString(ss.str());
  return CreateMeetingWithAttendeesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateMeetingWithAttendeesOutcomeCallable ChimeSDKMeetingsClient::CreateMeetingWithAttendeesCallable(const CreateMeetingWithAttendeesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateMeetingWithAttendeesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateMeetingWithAttendees(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ChimeSDKMeetingsClient::CreateMeetingWithAttendeesAsync(const CreateMeetingWithAttendeesRequest& request, const CreateMeetingWithAttendeesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateMeetingWithAttendeesAsyncHelper( request, handler, context ); } );
}

void ChimeSDKMeetingsClient::CreateMeetingWithAttendeesAsyncHelper(const CreateMeetingWithAttendeesRequest& request, const CreateMeetingWithAttendeesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateMeetingWithAttendees(request), context);
}

DeleteAttendeeOutcome ChimeSDKMeetingsClient::DeleteAttendee(const DeleteAttendeeRequest& request) const
{
  if (!request.MeetingIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteAttendee", "Required field: MeetingId, is not set");
    return DeleteAttendeeOutcome(Aws::Client::AWSError<ChimeSDKMeetingsErrors>(ChimeSDKMeetingsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MeetingId]", false));
  }
  if (!request.AttendeeIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteAttendee", "Required field: AttendeeId, is not set");
    return DeleteAttendeeOutcome(Aws::Client::AWSError<ChimeSDKMeetingsErrors>(ChimeSDKMeetingsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AttendeeId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/meetings/");
  uri.AddPathSegment(request.GetMeetingId());
  uri.AddPathSegments("/attendees/");
  uri.AddPathSegment(request.GetAttendeeId());
  return DeleteAttendeeOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteAttendeeOutcomeCallable ChimeSDKMeetingsClient::DeleteAttendeeCallable(const DeleteAttendeeRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteAttendeeOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteAttendee(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ChimeSDKMeetingsClient::DeleteAttendeeAsync(const DeleteAttendeeRequest& request, const DeleteAttendeeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteAttendeeAsyncHelper( request, handler, context ); } );
}

void ChimeSDKMeetingsClient::DeleteAttendeeAsyncHelper(const DeleteAttendeeRequest& request, const DeleteAttendeeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteAttendee(request), context);
}

DeleteMeetingOutcome ChimeSDKMeetingsClient::DeleteMeeting(const DeleteMeetingRequest& request) const
{
  if (!request.MeetingIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteMeeting", "Required field: MeetingId, is not set");
    return DeleteMeetingOutcome(Aws::Client::AWSError<ChimeSDKMeetingsErrors>(ChimeSDKMeetingsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MeetingId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/meetings/");
  uri.AddPathSegment(request.GetMeetingId());
  return DeleteMeetingOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteMeetingOutcomeCallable ChimeSDKMeetingsClient::DeleteMeetingCallable(const DeleteMeetingRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteMeetingOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteMeeting(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ChimeSDKMeetingsClient::DeleteMeetingAsync(const DeleteMeetingRequest& request, const DeleteMeetingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteMeetingAsyncHelper( request, handler, context ); } );
}

void ChimeSDKMeetingsClient::DeleteMeetingAsyncHelper(const DeleteMeetingRequest& request, const DeleteMeetingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteMeeting(request), context);
}

GetAttendeeOutcome ChimeSDKMeetingsClient::GetAttendee(const GetAttendeeRequest& request) const
{
  if (!request.MeetingIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetAttendee", "Required field: MeetingId, is not set");
    return GetAttendeeOutcome(Aws::Client::AWSError<ChimeSDKMeetingsErrors>(ChimeSDKMeetingsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MeetingId]", false));
  }
  if (!request.AttendeeIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetAttendee", "Required field: AttendeeId, is not set");
    return GetAttendeeOutcome(Aws::Client::AWSError<ChimeSDKMeetingsErrors>(ChimeSDKMeetingsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AttendeeId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/meetings/");
  uri.AddPathSegment(request.GetMeetingId());
  uri.AddPathSegments("/attendees/");
  uri.AddPathSegment(request.GetAttendeeId());
  return GetAttendeeOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetAttendeeOutcomeCallable ChimeSDKMeetingsClient::GetAttendeeCallable(const GetAttendeeRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetAttendeeOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetAttendee(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ChimeSDKMeetingsClient::GetAttendeeAsync(const GetAttendeeRequest& request, const GetAttendeeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetAttendeeAsyncHelper( request, handler, context ); } );
}

void ChimeSDKMeetingsClient::GetAttendeeAsyncHelper(const GetAttendeeRequest& request, const GetAttendeeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetAttendee(request), context);
}

GetMeetingOutcome ChimeSDKMeetingsClient::GetMeeting(const GetMeetingRequest& request) const
{
  if (!request.MeetingIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetMeeting", "Required field: MeetingId, is not set");
    return GetMeetingOutcome(Aws::Client::AWSError<ChimeSDKMeetingsErrors>(ChimeSDKMeetingsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MeetingId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/meetings/");
  uri.AddPathSegment(request.GetMeetingId());
  return GetMeetingOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetMeetingOutcomeCallable ChimeSDKMeetingsClient::GetMeetingCallable(const GetMeetingRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetMeetingOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetMeeting(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ChimeSDKMeetingsClient::GetMeetingAsync(const GetMeetingRequest& request, const GetMeetingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetMeetingAsyncHelper( request, handler, context ); } );
}

void ChimeSDKMeetingsClient::GetMeetingAsyncHelper(const GetMeetingRequest& request, const GetMeetingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetMeeting(request), context);
}

ListAttendeesOutcome ChimeSDKMeetingsClient::ListAttendees(const ListAttendeesRequest& request) const
{
  if (!request.MeetingIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListAttendees", "Required field: MeetingId, is not set");
    return ListAttendeesOutcome(Aws::Client::AWSError<ChimeSDKMeetingsErrors>(ChimeSDKMeetingsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MeetingId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/meetings/");
  uri.AddPathSegment(request.GetMeetingId());
  uri.AddPathSegments("/attendees");
  return ListAttendeesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListAttendeesOutcomeCallable ChimeSDKMeetingsClient::ListAttendeesCallable(const ListAttendeesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListAttendeesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListAttendees(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ChimeSDKMeetingsClient::ListAttendeesAsync(const ListAttendeesRequest& request, const ListAttendeesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListAttendeesAsyncHelper( request, handler, context ); } );
}

void ChimeSDKMeetingsClient::ListAttendeesAsyncHelper(const ListAttendeesRequest& request, const ListAttendeesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListAttendees(request), context);
}

ListTagsForResourceOutcome ChimeSDKMeetingsClient::ListTagsForResource(const ListTagsForResourceRequest& request) const
{
  if (!request.ResourceARNHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListTagsForResource", "Required field: ResourceARN, is not set");
    return ListTagsForResourceOutcome(Aws::Client::AWSError<ChimeSDKMeetingsErrors>(ChimeSDKMeetingsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceARN]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/tags");
  return ListTagsForResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListTagsForResourceOutcomeCallable ChimeSDKMeetingsClient::ListTagsForResourceCallable(const ListTagsForResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListTagsForResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListTagsForResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ChimeSDKMeetingsClient::ListTagsForResourceAsync(const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListTagsForResourceAsyncHelper( request, handler, context ); } );
}

void ChimeSDKMeetingsClient::ListTagsForResourceAsyncHelper(const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListTagsForResource(request), context);
}

StartMeetingTranscriptionOutcome ChimeSDKMeetingsClient::StartMeetingTranscription(const StartMeetingTranscriptionRequest& request) const
{
  if (!request.MeetingIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("StartMeetingTranscription", "Required field: MeetingId, is not set");
    return StartMeetingTranscriptionOutcome(Aws::Client::AWSError<ChimeSDKMeetingsErrors>(ChimeSDKMeetingsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MeetingId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  uri.AddPathSegments("/meetings/");
  uri.AddPathSegment(request.GetMeetingId());
  uri.AddPathSegments("/transcription");
  ss.str("?operation=start");
  uri.SetQueryString(ss.str());
  return StartMeetingTranscriptionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

StartMeetingTranscriptionOutcomeCallable ChimeSDKMeetingsClient::StartMeetingTranscriptionCallable(const StartMeetingTranscriptionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StartMeetingTranscriptionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StartMeetingTranscription(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ChimeSDKMeetingsClient::StartMeetingTranscriptionAsync(const StartMeetingTranscriptionRequest& request, const StartMeetingTranscriptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->StartMeetingTranscriptionAsyncHelper( request, handler, context ); } );
}

void ChimeSDKMeetingsClient::StartMeetingTranscriptionAsyncHelper(const StartMeetingTranscriptionRequest& request, const StartMeetingTranscriptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, StartMeetingTranscription(request), context);
}

StopMeetingTranscriptionOutcome ChimeSDKMeetingsClient::StopMeetingTranscription(const StopMeetingTranscriptionRequest& request) const
{
  if (!request.MeetingIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("StopMeetingTranscription", "Required field: MeetingId, is not set");
    return StopMeetingTranscriptionOutcome(Aws::Client::AWSError<ChimeSDKMeetingsErrors>(ChimeSDKMeetingsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MeetingId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  uri.AddPathSegments("/meetings/");
  uri.AddPathSegment(request.GetMeetingId());
  uri.AddPathSegments("/transcription");
  ss.str("?operation=stop");
  uri.SetQueryString(ss.str());
  return StopMeetingTranscriptionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

StopMeetingTranscriptionOutcomeCallable ChimeSDKMeetingsClient::StopMeetingTranscriptionCallable(const StopMeetingTranscriptionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StopMeetingTranscriptionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StopMeetingTranscription(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ChimeSDKMeetingsClient::StopMeetingTranscriptionAsync(const StopMeetingTranscriptionRequest& request, const StopMeetingTranscriptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->StopMeetingTranscriptionAsyncHelper( request, handler, context ); } );
}

void ChimeSDKMeetingsClient::StopMeetingTranscriptionAsyncHelper(const StopMeetingTranscriptionRequest& request, const StopMeetingTranscriptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, StopMeetingTranscription(request), context);
}

TagResourceOutcome ChimeSDKMeetingsClient::TagResource(const TagResourceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  uri.AddPathSegments("/tags");
  ss.str("?operation=tag-resource");
  uri.SetQueryString(ss.str());
  return TagResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

TagResourceOutcomeCallable ChimeSDKMeetingsClient::TagResourceCallable(const TagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< TagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->TagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ChimeSDKMeetingsClient::TagResourceAsync(const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->TagResourceAsyncHelper( request, handler, context ); } );
}

void ChimeSDKMeetingsClient::TagResourceAsyncHelper(const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, TagResource(request), context);
}

UntagResourceOutcome ChimeSDKMeetingsClient::UntagResource(const UntagResourceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  uri.AddPathSegments("/tags");
  ss.str("?operation=untag-resource");
  uri.SetQueryString(ss.str());
  return UntagResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UntagResourceOutcomeCallable ChimeSDKMeetingsClient::UntagResourceCallable(const UntagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UntagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UntagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ChimeSDKMeetingsClient::UntagResourceAsync(const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UntagResourceAsyncHelper( request, handler, context ); } );
}

void ChimeSDKMeetingsClient::UntagResourceAsyncHelper(const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UntagResource(request), context);
}

UpdateAttendeeCapabilitiesOutcome ChimeSDKMeetingsClient::UpdateAttendeeCapabilities(const UpdateAttendeeCapabilitiesRequest& request) const
{
  if (!request.MeetingIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateAttendeeCapabilities", "Required field: MeetingId, is not set");
    return UpdateAttendeeCapabilitiesOutcome(Aws::Client::AWSError<ChimeSDKMeetingsErrors>(ChimeSDKMeetingsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MeetingId]", false));
  }
  if (!request.AttendeeIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateAttendeeCapabilities", "Required field: AttendeeId, is not set");
    return UpdateAttendeeCapabilitiesOutcome(Aws::Client::AWSError<ChimeSDKMeetingsErrors>(ChimeSDKMeetingsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AttendeeId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/meetings/");
  uri.AddPathSegment(request.GetMeetingId());
  uri.AddPathSegments("/attendees/");
  uri.AddPathSegment(request.GetAttendeeId());
  uri.AddPathSegments("/capabilities");
  return UpdateAttendeeCapabilitiesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

UpdateAttendeeCapabilitiesOutcomeCallable ChimeSDKMeetingsClient::UpdateAttendeeCapabilitiesCallable(const UpdateAttendeeCapabilitiesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateAttendeeCapabilitiesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateAttendeeCapabilities(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ChimeSDKMeetingsClient::UpdateAttendeeCapabilitiesAsync(const UpdateAttendeeCapabilitiesRequest& request, const UpdateAttendeeCapabilitiesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateAttendeeCapabilitiesAsyncHelper( request, handler, context ); } );
}

void ChimeSDKMeetingsClient::UpdateAttendeeCapabilitiesAsyncHelper(const UpdateAttendeeCapabilitiesRequest& request, const UpdateAttendeeCapabilitiesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateAttendeeCapabilities(request), context);
}

