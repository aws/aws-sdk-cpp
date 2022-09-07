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

#include <aws/connectparticipant/ConnectParticipantClient.h>
#include <aws/connectparticipant/ConnectParticipantEndpoint.h>
#include <aws/connectparticipant/ConnectParticipantErrorMarshaller.h>
#include <aws/connectparticipant/model/CompleteAttachmentUploadRequest.h>
#include <aws/connectparticipant/model/CreateParticipantConnectionRequest.h>
#include <aws/connectparticipant/model/DisconnectParticipantRequest.h>
#include <aws/connectparticipant/model/GetAttachmentRequest.h>
#include <aws/connectparticipant/model/GetTranscriptRequest.h>
#include <aws/connectparticipant/model/SendEventRequest.h>
#include <aws/connectparticipant/model/SendMessageRequest.h>
#include <aws/connectparticipant/model/StartAttachmentUploadRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::ConnectParticipant;
using namespace Aws::ConnectParticipant::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;

static const char* SERVICE_NAME = "execute-api";
static const char* ALLOCATION_TAG = "ConnectParticipantClient";

ConnectParticipantClient::ConnectParticipantClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<ConnectParticipantErrorMarshaller>(ALLOCATION_TAG)),
  m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

ConnectParticipantClient::ConnectParticipantClient(const AWSCredentials& credentials,
                                                   const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<ConnectParticipantErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

ConnectParticipantClient::ConnectParticipantClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                                   const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<ConnectParticipantErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

ConnectParticipantClient::~ConnectParticipantClient()
{
}

void ConnectParticipantClient::init(const Client::ClientConfiguration& config)
{
  AWSClient::SetServiceClientName("ConnectParticipant");
  m_configScheme = SchemeMapper::ToString(config.scheme);
  if (config.endpointOverride.empty())
  {
      m_uri = m_configScheme + "://" + ConnectParticipantEndpoint::ForRegion(config.region, config.useDualStack);
  }
  else
  {
      OverrideEndpoint(config.endpointOverride);
  }
}

void ConnectParticipantClient::OverrideEndpoint(const Aws::String& endpoint)
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

CompleteAttachmentUploadOutcome ConnectParticipantClient::CompleteAttachmentUpload(const CompleteAttachmentUploadRequest& request) const
{
  if (!request.ConnectionTokenHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CompleteAttachmentUpload", "Required field: ConnectionToken, is not set");
    return CompleteAttachmentUploadOutcome(Aws::Client::AWSError<ConnectParticipantErrors>(ConnectParticipantErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ConnectionToken]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/participant/complete-attachment-upload");
  return CompleteAttachmentUploadOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CompleteAttachmentUploadOutcomeCallable ConnectParticipantClient::CompleteAttachmentUploadCallable(const CompleteAttachmentUploadRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CompleteAttachmentUploadOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CompleteAttachmentUpload(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ConnectParticipantClientCompleteAttachmentUploadAsyncHelper(ConnectParticipantClient const * const clientThis, const CompleteAttachmentUploadRequest& request, const CompleteAttachmentUploadResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CompleteAttachmentUpload(request), context);
}

void ConnectParticipantClient::CompleteAttachmentUploadAsync(const CompleteAttachmentUploadRequest& request, const CompleteAttachmentUploadResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ConnectParticipantClientCompleteAttachmentUploadAsyncHelper( this, request, handler, context ); } );
}

CreateParticipantConnectionOutcome ConnectParticipantClient::CreateParticipantConnection(const CreateParticipantConnectionRequest& request) const
{
  if (!request.ParticipantTokenHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateParticipantConnection", "Required field: ParticipantToken, is not set");
    return CreateParticipantConnectionOutcome(Aws::Client::AWSError<ConnectParticipantErrors>(ConnectParticipantErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ParticipantToken]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/participant/connection");
  return CreateParticipantConnectionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateParticipantConnectionOutcomeCallable ConnectParticipantClient::CreateParticipantConnectionCallable(const CreateParticipantConnectionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateParticipantConnectionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateParticipantConnection(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ConnectParticipantClientCreateParticipantConnectionAsyncHelper(ConnectParticipantClient const * const clientThis, const CreateParticipantConnectionRequest& request, const CreateParticipantConnectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateParticipantConnection(request), context);
}

void ConnectParticipantClient::CreateParticipantConnectionAsync(const CreateParticipantConnectionRequest& request, const CreateParticipantConnectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ConnectParticipantClientCreateParticipantConnectionAsyncHelper( this, request, handler, context ); } );
}

DisconnectParticipantOutcome ConnectParticipantClient::DisconnectParticipant(const DisconnectParticipantRequest& request) const
{
  if (!request.ConnectionTokenHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DisconnectParticipant", "Required field: ConnectionToken, is not set");
    return DisconnectParticipantOutcome(Aws::Client::AWSError<ConnectParticipantErrors>(ConnectParticipantErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ConnectionToken]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/participant/disconnect");
  return DisconnectParticipantOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DisconnectParticipantOutcomeCallable ConnectParticipantClient::DisconnectParticipantCallable(const DisconnectParticipantRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DisconnectParticipantOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DisconnectParticipant(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ConnectParticipantClientDisconnectParticipantAsyncHelper(ConnectParticipantClient const * const clientThis, const DisconnectParticipantRequest& request, const DisconnectParticipantResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DisconnectParticipant(request), context);
}

void ConnectParticipantClient::DisconnectParticipantAsync(const DisconnectParticipantRequest& request, const DisconnectParticipantResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ConnectParticipantClientDisconnectParticipantAsyncHelper( this, request, handler, context ); } );
}

GetAttachmentOutcome ConnectParticipantClient::GetAttachment(const GetAttachmentRequest& request) const
{
  if (!request.ConnectionTokenHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetAttachment", "Required field: ConnectionToken, is not set");
    return GetAttachmentOutcome(Aws::Client::AWSError<ConnectParticipantErrors>(ConnectParticipantErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ConnectionToken]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/participant/attachment");
  return GetAttachmentOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetAttachmentOutcomeCallable ConnectParticipantClient::GetAttachmentCallable(const GetAttachmentRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetAttachmentOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetAttachment(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ConnectParticipantClientGetAttachmentAsyncHelper(ConnectParticipantClient const * const clientThis, const GetAttachmentRequest& request, const GetAttachmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetAttachment(request), context);
}

void ConnectParticipantClient::GetAttachmentAsync(const GetAttachmentRequest& request, const GetAttachmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ConnectParticipantClientGetAttachmentAsyncHelper( this, request, handler, context ); } );
}

GetTranscriptOutcome ConnectParticipantClient::GetTranscript(const GetTranscriptRequest& request) const
{
  if (!request.ConnectionTokenHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetTranscript", "Required field: ConnectionToken, is not set");
    return GetTranscriptOutcome(Aws::Client::AWSError<ConnectParticipantErrors>(ConnectParticipantErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ConnectionToken]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/participant/transcript");
  return GetTranscriptOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetTranscriptOutcomeCallable ConnectParticipantClient::GetTranscriptCallable(const GetTranscriptRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetTranscriptOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetTranscript(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ConnectParticipantClientGetTranscriptAsyncHelper(ConnectParticipantClient const * const clientThis, const GetTranscriptRequest& request, const GetTranscriptResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetTranscript(request), context);
}

void ConnectParticipantClient::GetTranscriptAsync(const GetTranscriptRequest& request, const GetTranscriptResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ConnectParticipantClientGetTranscriptAsyncHelper( this, request, handler, context ); } );
}

SendEventOutcome ConnectParticipantClient::SendEvent(const SendEventRequest& request) const
{
  if (!request.ConnectionTokenHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("SendEvent", "Required field: ConnectionToken, is not set");
    return SendEventOutcome(Aws::Client::AWSError<ConnectParticipantErrors>(ConnectParticipantErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ConnectionToken]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/participant/event");
  return SendEventOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

SendEventOutcomeCallable ConnectParticipantClient::SendEventCallable(const SendEventRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< SendEventOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->SendEvent(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ConnectParticipantClientSendEventAsyncHelper(ConnectParticipantClient const * const clientThis, const SendEventRequest& request, const SendEventResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->SendEvent(request), context);
}

void ConnectParticipantClient::SendEventAsync(const SendEventRequest& request, const SendEventResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ConnectParticipantClientSendEventAsyncHelper( this, request, handler, context ); } );
}

SendMessageOutcome ConnectParticipantClient::SendMessage(const SendMessageRequest& request) const
{
  if (!request.ConnectionTokenHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("SendMessage", "Required field: ConnectionToken, is not set");
    return SendMessageOutcome(Aws::Client::AWSError<ConnectParticipantErrors>(ConnectParticipantErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ConnectionToken]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/participant/message");
  return SendMessageOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

SendMessageOutcomeCallable ConnectParticipantClient::SendMessageCallable(const SendMessageRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< SendMessageOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->SendMessage(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ConnectParticipantClientSendMessageAsyncHelper(ConnectParticipantClient const * const clientThis, const SendMessageRequest& request, const SendMessageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->SendMessage(request), context);
}

void ConnectParticipantClient::SendMessageAsync(const SendMessageRequest& request, const SendMessageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ConnectParticipantClientSendMessageAsyncHelper( this, request, handler, context ); } );
}

StartAttachmentUploadOutcome ConnectParticipantClient::StartAttachmentUpload(const StartAttachmentUploadRequest& request) const
{
  if (!request.ConnectionTokenHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("StartAttachmentUpload", "Required field: ConnectionToken, is not set");
    return StartAttachmentUploadOutcome(Aws::Client::AWSError<ConnectParticipantErrors>(ConnectParticipantErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ConnectionToken]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/participant/start-attachment-upload");
  return StartAttachmentUploadOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

StartAttachmentUploadOutcomeCallable ConnectParticipantClient::StartAttachmentUploadCallable(const StartAttachmentUploadRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StartAttachmentUploadOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StartAttachmentUpload(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ConnectParticipantClientStartAttachmentUploadAsyncHelper(ConnectParticipantClient const * const clientThis, const StartAttachmentUploadRequest& request, const StartAttachmentUploadResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->StartAttachmentUpload(request), context);
}

void ConnectParticipantClient::StartAttachmentUploadAsync(const StartAttachmentUploadRequest& request, const StartAttachmentUploadResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ConnectParticipantClientStartAttachmentUploadAsyncHelper( this, request, handler, context ); } );
}

