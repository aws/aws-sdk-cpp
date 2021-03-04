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

#include <aws/eventbridge/EventBridgeClient.h>
#include <aws/eventbridge/EventBridgeEndpoint.h>
#include <aws/eventbridge/EventBridgeErrorMarshaller.h>
#include <aws/eventbridge/model/ActivateEventSourceRequest.h>
#include <aws/eventbridge/model/CancelReplayRequest.h>
#include <aws/eventbridge/model/CreateApiDestinationRequest.h>
#include <aws/eventbridge/model/CreateArchiveRequest.h>
#include <aws/eventbridge/model/CreateConnectionRequest.h>
#include <aws/eventbridge/model/CreateEventBusRequest.h>
#include <aws/eventbridge/model/CreatePartnerEventSourceRequest.h>
#include <aws/eventbridge/model/DeactivateEventSourceRequest.h>
#include <aws/eventbridge/model/DeauthorizeConnectionRequest.h>
#include <aws/eventbridge/model/DeleteApiDestinationRequest.h>
#include <aws/eventbridge/model/DeleteArchiveRequest.h>
#include <aws/eventbridge/model/DeleteConnectionRequest.h>
#include <aws/eventbridge/model/DeleteEventBusRequest.h>
#include <aws/eventbridge/model/DeletePartnerEventSourceRequest.h>
#include <aws/eventbridge/model/DeleteRuleRequest.h>
#include <aws/eventbridge/model/DescribeApiDestinationRequest.h>
#include <aws/eventbridge/model/DescribeArchiveRequest.h>
#include <aws/eventbridge/model/DescribeConnectionRequest.h>
#include <aws/eventbridge/model/DescribeEventBusRequest.h>
#include <aws/eventbridge/model/DescribeEventSourceRequest.h>
#include <aws/eventbridge/model/DescribePartnerEventSourceRequest.h>
#include <aws/eventbridge/model/DescribeReplayRequest.h>
#include <aws/eventbridge/model/DescribeRuleRequest.h>
#include <aws/eventbridge/model/DisableRuleRequest.h>
#include <aws/eventbridge/model/EnableRuleRequest.h>
#include <aws/eventbridge/model/ListApiDestinationsRequest.h>
#include <aws/eventbridge/model/ListArchivesRequest.h>
#include <aws/eventbridge/model/ListConnectionsRequest.h>
#include <aws/eventbridge/model/ListEventBusesRequest.h>
#include <aws/eventbridge/model/ListEventSourcesRequest.h>
#include <aws/eventbridge/model/ListPartnerEventSourceAccountsRequest.h>
#include <aws/eventbridge/model/ListPartnerEventSourcesRequest.h>
#include <aws/eventbridge/model/ListReplaysRequest.h>
#include <aws/eventbridge/model/ListRuleNamesByTargetRequest.h>
#include <aws/eventbridge/model/ListRulesRequest.h>
#include <aws/eventbridge/model/ListTagsForResourceRequest.h>
#include <aws/eventbridge/model/ListTargetsByRuleRequest.h>
#include <aws/eventbridge/model/PutEventsRequest.h>
#include <aws/eventbridge/model/PutPartnerEventsRequest.h>
#include <aws/eventbridge/model/PutPermissionRequest.h>
#include <aws/eventbridge/model/PutRuleRequest.h>
#include <aws/eventbridge/model/PutTargetsRequest.h>
#include <aws/eventbridge/model/RemovePermissionRequest.h>
#include <aws/eventbridge/model/RemoveTargetsRequest.h>
#include <aws/eventbridge/model/StartReplayRequest.h>
#include <aws/eventbridge/model/TagResourceRequest.h>
#include <aws/eventbridge/model/TestEventPatternRequest.h>
#include <aws/eventbridge/model/UntagResourceRequest.h>
#include <aws/eventbridge/model/UpdateApiDestinationRequest.h>
#include <aws/eventbridge/model/UpdateArchiveRequest.h>
#include <aws/eventbridge/model/UpdateConnectionRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::EventBridge;
using namespace Aws::EventBridge::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;

static const char* SERVICE_NAME = "events";
static const char* ALLOCATION_TAG = "EventBridgeClient";


EventBridgeClient::EventBridgeClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
        SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
    Aws::MakeShared<EventBridgeErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

EventBridgeClient::EventBridgeClient(const AWSCredentials& credentials, const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
         SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
    Aws::MakeShared<EventBridgeErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

EventBridgeClient::EventBridgeClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
  const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider,
         SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
    Aws::MakeShared<EventBridgeErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

EventBridgeClient::~EventBridgeClient()
{
}

void EventBridgeClient::init(const ClientConfiguration& config)
{
  SetServiceClientName("EventBridge");
  m_configScheme = SchemeMapper::ToString(config.scheme);
  if (config.endpointOverride.empty())
  {
      m_uri = m_configScheme + "://" + EventBridgeEndpoint::ForRegion(config.region, config.useDualStack);
  }
  else
  {
      OverrideEndpoint(config.endpointOverride);
  }
}

void EventBridgeClient::OverrideEndpoint(const Aws::String& endpoint)
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

ActivateEventSourceOutcome EventBridgeClient::ActivateEventSource(const ActivateEventSourceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return ActivateEventSourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ActivateEventSourceOutcomeCallable EventBridgeClient::ActivateEventSourceCallable(const ActivateEventSourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ActivateEventSourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ActivateEventSource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EventBridgeClient::ActivateEventSourceAsync(const ActivateEventSourceRequest& request, const ActivateEventSourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ActivateEventSourceAsyncHelper( request, handler, context ); } );
}

void EventBridgeClient::ActivateEventSourceAsyncHelper(const ActivateEventSourceRequest& request, const ActivateEventSourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ActivateEventSource(request), context);
}

CancelReplayOutcome EventBridgeClient::CancelReplay(const CancelReplayRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return CancelReplayOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CancelReplayOutcomeCallable EventBridgeClient::CancelReplayCallable(const CancelReplayRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CancelReplayOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CancelReplay(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EventBridgeClient::CancelReplayAsync(const CancelReplayRequest& request, const CancelReplayResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CancelReplayAsyncHelper( request, handler, context ); } );
}

void EventBridgeClient::CancelReplayAsyncHelper(const CancelReplayRequest& request, const CancelReplayResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CancelReplay(request), context);
}

CreateApiDestinationOutcome EventBridgeClient::CreateApiDestination(const CreateApiDestinationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return CreateApiDestinationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateApiDestinationOutcomeCallable EventBridgeClient::CreateApiDestinationCallable(const CreateApiDestinationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateApiDestinationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateApiDestination(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EventBridgeClient::CreateApiDestinationAsync(const CreateApiDestinationRequest& request, const CreateApiDestinationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateApiDestinationAsyncHelper( request, handler, context ); } );
}

void EventBridgeClient::CreateApiDestinationAsyncHelper(const CreateApiDestinationRequest& request, const CreateApiDestinationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateApiDestination(request), context);
}

CreateArchiveOutcome EventBridgeClient::CreateArchive(const CreateArchiveRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return CreateArchiveOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateArchiveOutcomeCallable EventBridgeClient::CreateArchiveCallable(const CreateArchiveRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateArchiveOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateArchive(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EventBridgeClient::CreateArchiveAsync(const CreateArchiveRequest& request, const CreateArchiveResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateArchiveAsyncHelper( request, handler, context ); } );
}

void EventBridgeClient::CreateArchiveAsyncHelper(const CreateArchiveRequest& request, const CreateArchiveResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateArchive(request), context);
}

CreateConnectionOutcome EventBridgeClient::CreateConnection(const CreateConnectionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return CreateConnectionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateConnectionOutcomeCallable EventBridgeClient::CreateConnectionCallable(const CreateConnectionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateConnectionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateConnection(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EventBridgeClient::CreateConnectionAsync(const CreateConnectionRequest& request, const CreateConnectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateConnectionAsyncHelper( request, handler, context ); } );
}

void EventBridgeClient::CreateConnectionAsyncHelper(const CreateConnectionRequest& request, const CreateConnectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateConnection(request), context);
}

CreateEventBusOutcome EventBridgeClient::CreateEventBus(const CreateEventBusRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return CreateEventBusOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateEventBusOutcomeCallable EventBridgeClient::CreateEventBusCallable(const CreateEventBusRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateEventBusOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateEventBus(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EventBridgeClient::CreateEventBusAsync(const CreateEventBusRequest& request, const CreateEventBusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateEventBusAsyncHelper( request, handler, context ); } );
}

void EventBridgeClient::CreateEventBusAsyncHelper(const CreateEventBusRequest& request, const CreateEventBusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateEventBus(request), context);
}

CreatePartnerEventSourceOutcome EventBridgeClient::CreatePartnerEventSource(const CreatePartnerEventSourceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return CreatePartnerEventSourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreatePartnerEventSourceOutcomeCallable EventBridgeClient::CreatePartnerEventSourceCallable(const CreatePartnerEventSourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreatePartnerEventSourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreatePartnerEventSource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EventBridgeClient::CreatePartnerEventSourceAsync(const CreatePartnerEventSourceRequest& request, const CreatePartnerEventSourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreatePartnerEventSourceAsyncHelper( request, handler, context ); } );
}

void EventBridgeClient::CreatePartnerEventSourceAsyncHelper(const CreatePartnerEventSourceRequest& request, const CreatePartnerEventSourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreatePartnerEventSource(request), context);
}

DeactivateEventSourceOutcome EventBridgeClient::DeactivateEventSource(const DeactivateEventSourceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return DeactivateEventSourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeactivateEventSourceOutcomeCallable EventBridgeClient::DeactivateEventSourceCallable(const DeactivateEventSourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeactivateEventSourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeactivateEventSource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EventBridgeClient::DeactivateEventSourceAsync(const DeactivateEventSourceRequest& request, const DeactivateEventSourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeactivateEventSourceAsyncHelper( request, handler, context ); } );
}

void EventBridgeClient::DeactivateEventSourceAsyncHelper(const DeactivateEventSourceRequest& request, const DeactivateEventSourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeactivateEventSource(request), context);
}

DeauthorizeConnectionOutcome EventBridgeClient::DeauthorizeConnection(const DeauthorizeConnectionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return DeauthorizeConnectionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeauthorizeConnectionOutcomeCallable EventBridgeClient::DeauthorizeConnectionCallable(const DeauthorizeConnectionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeauthorizeConnectionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeauthorizeConnection(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EventBridgeClient::DeauthorizeConnectionAsync(const DeauthorizeConnectionRequest& request, const DeauthorizeConnectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeauthorizeConnectionAsyncHelper( request, handler, context ); } );
}

void EventBridgeClient::DeauthorizeConnectionAsyncHelper(const DeauthorizeConnectionRequest& request, const DeauthorizeConnectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeauthorizeConnection(request), context);
}

DeleteApiDestinationOutcome EventBridgeClient::DeleteApiDestination(const DeleteApiDestinationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return DeleteApiDestinationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteApiDestinationOutcomeCallable EventBridgeClient::DeleteApiDestinationCallable(const DeleteApiDestinationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteApiDestinationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteApiDestination(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EventBridgeClient::DeleteApiDestinationAsync(const DeleteApiDestinationRequest& request, const DeleteApiDestinationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteApiDestinationAsyncHelper( request, handler, context ); } );
}

void EventBridgeClient::DeleteApiDestinationAsyncHelper(const DeleteApiDestinationRequest& request, const DeleteApiDestinationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteApiDestination(request), context);
}

DeleteArchiveOutcome EventBridgeClient::DeleteArchive(const DeleteArchiveRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return DeleteArchiveOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteArchiveOutcomeCallable EventBridgeClient::DeleteArchiveCallable(const DeleteArchiveRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteArchiveOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteArchive(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EventBridgeClient::DeleteArchiveAsync(const DeleteArchiveRequest& request, const DeleteArchiveResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteArchiveAsyncHelper( request, handler, context ); } );
}

void EventBridgeClient::DeleteArchiveAsyncHelper(const DeleteArchiveRequest& request, const DeleteArchiveResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteArchive(request), context);
}

DeleteConnectionOutcome EventBridgeClient::DeleteConnection(const DeleteConnectionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return DeleteConnectionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteConnectionOutcomeCallable EventBridgeClient::DeleteConnectionCallable(const DeleteConnectionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteConnectionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteConnection(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EventBridgeClient::DeleteConnectionAsync(const DeleteConnectionRequest& request, const DeleteConnectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteConnectionAsyncHelper( request, handler, context ); } );
}

void EventBridgeClient::DeleteConnectionAsyncHelper(const DeleteConnectionRequest& request, const DeleteConnectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteConnection(request), context);
}

DeleteEventBusOutcome EventBridgeClient::DeleteEventBus(const DeleteEventBusRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return DeleteEventBusOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteEventBusOutcomeCallable EventBridgeClient::DeleteEventBusCallable(const DeleteEventBusRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteEventBusOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteEventBus(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EventBridgeClient::DeleteEventBusAsync(const DeleteEventBusRequest& request, const DeleteEventBusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteEventBusAsyncHelper( request, handler, context ); } );
}

void EventBridgeClient::DeleteEventBusAsyncHelper(const DeleteEventBusRequest& request, const DeleteEventBusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteEventBus(request), context);
}

DeletePartnerEventSourceOutcome EventBridgeClient::DeletePartnerEventSource(const DeletePartnerEventSourceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return DeletePartnerEventSourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeletePartnerEventSourceOutcomeCallable EventBridgeClient::DeletePartnerEventSourceCallable(const DeletePartnerEventSourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeletePartnerEventSourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeletePartnerEventSource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EventBridgeClient::DeletePartnerEventSourceAsync(const DeletePartnerEventSourceRequest& request, const DeletePartnerEventSourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeletePartnerEventSourceAsyncHelper( request, handler, context ); } );
}

void EventBridgeClient::DeletePartnerEventSourceAsyncHelper(const DeletePartnerEventSourceRequest& request, const DeletePartnerEventSourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeletePartnerEventSource(request), context);
}

DeleteRuleOutcome EventBridgeClient::DeleteRule(const DeleteRuleRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return DeleteRuleOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteRuleOutcomeCallable EventBridgeClient::DeleteRuleCallable(const DeleteRuleRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteRuleOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteRule(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EventBridgeClient::DeleteRuleAsync(const DeleteRuleRequest& request, const DeleteRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteRuleAsyncHelper( request, handler, context ); } );
}

void EventBridgeClient::DeleteRuleAsyncHelper(const DeleteRuleRequest& request, const DeleteRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteRule(request), context);
}

DescribeApiDestinationOutcome EventBridgeClient::DescribeApiDestination(const DescribeApiDestinationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return DescribeApiDestinationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeApiDestinationOutcomeCallable EventBridgeClient::DescribeApiDestinationCallable(const DescribeApiDestinationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeApiDestinationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeApiDestination(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EventBridgeClient::DescribeApiDestinationAsync(const DescribeApiDestinationRequest& request, const DescribeApiDestinationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeApiDestinationAsyncHelper( request, handler, context ); } );
}

void EventBridgeClient::DescribeApiDestinationAsyncHelper(const DescribeApiDestinationRequest& request, const DescribeApiDestinationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeApiDestination(request), context);
}

DescribeArchiveOutcome EventBridgeClient::DescribeArchive(const DescribeArchiveRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return DescribeArchiveOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeArchiveOutcomeCallable EventBridgeClient::DescribeArchiveCallable(const DescribeArchiveRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeArchiveOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeArchive(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EventBridgeClient::DescribeArchiveAsync(const DescribeArchiveRequest& request, const DescribeArchiveResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeArchiveAsyncHelper( request, handler, context ); } );
}

void EventBridgeClient::DescribeArchiveAsyncHelper(const DescribeArchiveRequest& request, const DescribeArchiveResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeArchive(request), context);
}

DescribeConnectionOutcome EventBridgeClient::DescribeConnection(const DescribeConnectionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return DescribeConnectionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeConnectionOutcomeCallable EventBridgeClient::DescribeConnectionCallable(const DescribeConnectionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeConnectionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeConnection(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EventBridgeClient::DescribeConnectionAsync(const DescribeConnectionRequest& request, const DescribeConnectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeConnectionAsyncHelper( request, handler, context ); } );
}

void EventBridgeClient::DescribeConnectionAsyncHelper(const DescribeConnectionRequest& request, const DescribeConnectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeConnection(request), context);
}

DescribeEventBusOutcome EventBridgeClient::DescribeEventBus(const DescribeEventBusRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return DescribeEventBusOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeEventBusOutcomeCallable EventBridgeClient::DescribeEventBusCallable(const DescribeEventBusRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeEventBusOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeEventBus(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EventBridgeClient::DescribeEventBusAsync(const DescribeEventBusRequest& request, const DescribeEventBusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeEventBusAsyncHelper( request, handler, context ); } );
}

void EventBridgeClient::DescribeEventBusAsyncHelper(const DescribeEventBusRequest& request, const DescribeEventBusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeEventBus(request), context);
}

DescribeEventSourceOutcome EventBridgeClient::DescribeEventSource(const DescribeEventSourceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return DescribeEventSourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeEventSourceOutcomeCallable EventBridgeClient::DescribeEventSourceCallable(const DescribeEventSourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeEventSourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeEventSource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EventBridgeClient::DescribeEventSourceAsync(const DescribeEventSourceRequest& request, const DescribeEventSourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeEventSourceAsyncHelper( request, handler, context ); } );
}

void EventBridgeClient::DescribeEventSourceAsyncHelper(const DescribeEventSourceRequest& request, const DescribeEventSourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeEventSource(request), context);
}

DescribePartnerEventSourceOutcome EventBridgeClient::DescribePartnerEventSource(const DescribePartnerEventSourceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return DescribePartnerEventSourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribePartnerEventSourceOutcomeCallable EventBridgeClient::DescribePartnerEventSourceCallable(const DescribePartnerEventSourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribePartnerEventSourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribePartnerEventSource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EventBridgeClient::DescribePartnerEventSourceAsync(const DescribePartnerEventSourceRequest& request, const DescribePartnerEventSourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribePartnerEventSourceAsyncHelper( request, handler, context ); } );
}

void EventBridgeClient::DescribePartnerEventSourceAsyncHelper(const DescribePartnerEventSourceRequest& request, const DescribePartnerEventSourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribePartnerEventSource(request), context);
}

DescribeReplayOutcome EventBridgeClient::DescribeReplay(const DescribeReplayRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return DescribeReplayOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeReplayOutcomeCallable EventBridgeClient::DescribeReplayCallable(const DescribeReplayRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeReplayOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeReplay(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EventBridgeClient::DescribeReplayAsync(const DescribeReplayRequest& request, const DescribeReplayResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeReplayAsyncHelper( request, handler, context ); } );
}

void EventBridgeClient::DescribeReplayAsyncHelper(const DescribeReplayRequest& request, const DescribeReplayResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeReplay(request), context);
}

DescribeRuleOutcome EventBridgeClient::DescribeRule(const DescribeRuleRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return DescribeRuleOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeRuleOutcomeCallable EventBridgeClient::DescribeRuleCallable(const DescribeRuleRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeRuleOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeRule(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EventBridgeClient::DescribeRuleAsync(const DescribeRuleRequest& request, const DescribeRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeRuleAsyncHelper( request, handler, context ); } );
}

void EventBridgeClient::DescribeRuleAsyncHelper(const DescribeRuleRequest& request, const DescribeRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeRule(request), context);
}

DisableRuleOutcome EventBridgeClient::DisableRule(const DisableRuleRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return DisableRuleOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DisableRuleOutcomeCallable EventBridgeClient::DisableRuleCallable(const DisableRuleRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DisableRuleOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DisableRule(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EventBridgeClient::DisableRuleAsync(const DisableRuleRequest& request, const DisableRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DisableRuleAsyncHelper( request, handler, context ); } );
}

void EventBridgeClient::DisableRuleAsyncHelper(const DisableRuleRequest& request, const DisableRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DisableRule(request), context);
}

EnableRuleOutcome EventBridgeClient::EnableRule(const EnableRuleRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return EnableRuleOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

EnableRuleOutcomeCallable EventBridgeClient::EnableRuleCallable(const EnableRuleRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< EnableRuleOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->EnableRule(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EventBridgeClient::EnableRuleAsync(const EnableRuleRequest& request, const EnableRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->EnableRuleAsyncHelper( request, handler, context ); } );
}

void EventBridgeClient::EnableRuleAsyncHelper(const EnableRuleRequest& request, const EnableRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, EnableRule(request), context);
}

ListApiDestinationsOutcome EventBridgeClient::ListApiDestinations(const ListApiDestinationsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return ListApiDestinationsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListApiDestinationsOutcomeCallable EventBridgeClient::ListApiDestinationsCallable(const ListApiDestinationsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListApiDestinationsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListApiDestinations(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EventBridgeClient::ListApiDestinationsAsync(const ListApiDestinationsRequest& request, const ListApiDestinationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListApiDestinationsAsyncHelper( request, handler, context ); } );
}

void EventBridgeClient::ListApiDestinationsAsyncHelper(const ListApiDestinationsRequest& request, const ListApiDestinationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListApiDestinations(request), context);
}

ListArchivesOutcome EventBridgeClient::ListArchives(const ListArchivesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return ListArchivesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListArchivesOutcomeCallable EventBridgeClient::ListArchivesCallable(const ListArchivesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListArchivesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListArchives(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EventBridgeClient::ListArchivesAsync(const ListArchivesRequest& request, const ListArchivesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListArchivesAsyncHelper( request, handler, context ); } );
}

void EventBridgeClient::ListArchivesAsyncHelper(const ListArchivesRequest& request, const ListArchivesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListArchives(request), context);
}

ListConnectionsOutcome EventBridgeClient::ListConnections(const ListConnectionsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return ListConnectionsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListConnectionsOutcomeCallable EventBridgeClient::ListConnectionsCallable(const ListConnectionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListConnectionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListConnections(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EventBridgeClient::ListConnectionsAsync(const ListConnectionsRequest& request, const ListConnectionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListConnectionsAsyncHelper( request, handler, context ); } );
}

void EventBridgeClient::ListConnectionsAsyncHelper(const ListConnectionsRequest& request, const ListConnectionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListConnections(request), context);
}

ListEventBusesOutcome EventBridgeClient::ListEventBuses(const ListEventBusesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return ListEventBusesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListEventBusesOutcomeCallable EventBridgeClient::ListEventBusesCallable(const ListEventBusesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListEventBusesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListEventBuses(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EventBridgeClient::ListEventBusesAsync(const ListEventBusesRequest& request, const ListEventBusesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListEventBusesAsyncHelper( request, handler, context ); } );
}

void EventBridgeClient::ListEventBusesAsyncHelper(const ListEventBusesRequest& request, const ListEventBusesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListEventBuses(request), context);
}

ListEventSourcesOutcome EventBridgeClient::ListEventSources(const ListEventSourcesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return ListEventSourcesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListEventSourcesOutcomeCallable EventBridgeClient::ListEventSourcesCallable(const ListEventSourcesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListEventSourcesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListEventSources(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EventBridgeClient::ListEventSourcesAsync(const ListEventSourcesRequest& request, const ListEventSourcesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListEventSourcesAsyncHelper( request, handler, context ); } );
}

void EventBridgeClient::ListEventSourcesAsyncHelper(const ListEventSourcesRequest& request, const ListEventSourcesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListEventSources(request), context);
}

ListPartnerEventSourceAccountsOutcome EventBridgeClient::ListPartnerEventSourceAccounts(const ListPartnerEventSourceAccountsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return ListPartnerEventSourceAccountsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListPartnerEventSourceAccountsOutcomeCallable EventBridgeClient::ListPartnerEventSourceAccountsCallable(const ListPartnerEventSourceAccountsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListPartnerEventSourceAccountsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListPartnerEventSourceAccounts(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EventBridgeClient::ListPartnerEventSourceAccountsAsync(const ListPartnerEventSourceAccountsRequest& request, const ListPartnerEventSourceAccountsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListPartnerEventSourceAccountsAsyncHelper( request, handler, context ); } );
}

void EventBridgeClient::ListPartnerEventSourceAccountsAsyncHelper(const ListPartnerEventSourceAccountsRequest& request, const ListPartnerEventSourceAccountsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListPartnerEventSourceAccounts(request), context);
}

ListPartnerEventSourcesOutcome EventBridgeClient::ListPartnerEventSources(const ListPartnerEventSourcesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return ListPartnerEventSourcesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListPartnerEventSourcesOutcomeCallable EventBridgeClient::ListPartnerEventSourcesCallable(const ListPartnerEventSourcesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListPartnerEventSourcesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListPartnerEventSources(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EventBridgeClient::ListPartnerEventSourcesAsync(const ListPartnerEventSourcesRequest& request, const ListPartnerEventSourcesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListPartnerEventSourcesAsyncHelper( request, handler, context ); } );
}

void EventBridgeClient::ListPartnerEventSourcesAsyncHelper(const ListPartnerEventSourcesRequest& request, const ListPartnerEventSourcesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListPartnerEventSources(request), context);
}

ListReplaysOutcome EventBridgeClient::ListReplays(const ListReplaysRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return ListReplaysOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListReplaysOutcomeCallable EventBridgeClient::ListReplaysCallable(const ListReplaysRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListReplaysOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListReplays(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EventBridgeClient::ListReplaysAsync(const ListReplaysRequest& request, const ListReplaysResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListReplaysAsyncHelper( request, handler, context ); } );
}

void EventBridgeClient::ListReplaysAsyncHelper(const ListReplaysRequest& request, const ListReplaysResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListReplays(request), context);
}

ListRuleNamesByTargetOutcome EventBridgeClient::ListRuleNamesByTarget(const ListRuleNamesByTargetRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return ListRuleNamesByTargetOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListRuleNamesByTargetOutcomeCallable EventBridgeClient::ListRuleNamesByTargetCallable(const ListRuleNamesByTargetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListRuleNamesByTargetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListRuleNamesByTarget(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EventBridgeClient::ListRuleNamesByTargetAsync(const ListRuleNamesByTargetRequest& request, const ListRuleNamesByTargetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListRuleNamesByTargetAsyncHelper( request, handler, context ); } );
}

void EventBridgeClient::ListRuleNamesByTargetAsyncHelper(const ListRuleNamesByTargetRequest& request, const ListRuleNamesByTargetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListRuleNamesByTarget(request), context);
}

ListRulesOutcome EventBridgeClient::ListRules(const ListRulesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return ListRulesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListRulesOutcomeCallable EventBridgeClient::ListRulesCallable(const ListRulesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListRulesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListRules(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EventBridgeClient::ListRulesAsync(const ListRulesRequest& request, const ListRulesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListRulesAsyncHelper( request, handler, context ); } );
}

void EventBridgeClient::ListRulesAsyncHelper(const ListRulesRequest& request, const ListRulesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListRules(request), context);
}

ListTagsForResourceOutcome EventBridgeClient::ListTagsForResource(const ListTagsForResourceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return ListTagsForResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListTagsForResourceOutcomeCallable EventBridgeClient::ListTagsForResourceCallable(const ListTagsForResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListTagsForResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListTagsForResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EventBridgeClient::ListTagsForResourceAsync(const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListTagsForResourceAsyncHelper( request, handler, context ); } );
}

void EventBridgeClient::ListTagsForResourceAsyncHelper(const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListTagsForResource(request), context);
}

ListTargetsByRuleOutcome EventBridgeClient::ListTargetsByRule(const ListTargetsByRuleRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return ListTargetsByRuleOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListTargetsByRuleOutcomeCallable EventBridgeClient::ListTargetsByRuleCallable(const ListTargetsByRuleRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListTargetsByRuleOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListTargetsByRule(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EventBridgeClient::ListTargetsByRuleAsync(const ListTargetsByRuleRequest& request, const ListTargetsByRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListTargetsByRuleAsyncHelper( request, handler, context ); } );
}

void EventBridgeClient::ListTargetsByRuleAsyncHelper(const ListTargetsByRuleRequest& request, const ListTargetsByRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListTargetsByRule(request), context);
}

PutEventsOutcome EventBridgeClient::PutEvents(const PutEventsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return PutEventsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

PutEventsOutcomeCallable EventBridgeClient::PutEventsCallable(const PutEventsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutEventsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutEvents(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EventBridgeClient::PutEventsAsync(const PutEventsRequest& request, const PutEventsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->PutEventsAsyncHelper( request, handler, context ); } );
}

void EventBridgeClient::PutEventsAsyncHelper(const PutEventsRequest& request, const PutEventsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, PutEvents(request), context);
}

PutPartnerEventsOutcome EventBridgeClient::PutPartnerEvents(const PutPartnerEventsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return PutPartnerEventsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

PutPartnerEventsOutcomeCallable EventBridgeClient::PutPartnerEventsCallable(const PutPartnerEventsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutPartnerEventsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutPartnerEvents(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EventBridgeClient::PutPartnerEventsAsync(const PutPartnerEventsRequest& request, const PutPartnerEventsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->PutPartnerEventsAsyncHelper( request, handler, context ); } );
}

void EventBridgeClient::PutPartnerEventsAsyncHelper(const PutPartnerEventsRequest& request, const PutPartnerEventsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, PutPartnerEvents(request), context);
}

PutPermissionOutcome EventBridgeClient::PutPermission(const PutPermissionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return PutPermissionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

PutPermissionOutcomeCallable EventBridgeClient::PutPermissionCallable(const PutPermissionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutPermissionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutPermission(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EventBridgeClient::PutPermissionAsync(const PutPermissionRequest& request, const PutPermissionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->PutPermissionAsyncHelper( request, handler, context ); } );
}

void EventBridgeClient::PutPermissionAsyncHelper(const PutPermissionRequest& request, const PutPermissionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, PutPermission(request), context);
}

PutRuleOutcome EventBridgeClient::PutRule(const PutRuleRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return PutRuleOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

PutRuleOutcomeCallable EventBridgeClient::PutRuleCallable(const PutRuleRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutRuleOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutRule(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EventBridgeClient::PutRuleAsync(const PutRuleRequest& request, const PutRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->PutRuleAsyncHelper( request, handler, context ); } );
}

void EventBridgeClient::PutRuleAsyncHelper(const PutRuleRequest& request, const PutRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, PutRule(request), context);
}

PutTargetsOutcome EventBridgeClient::PutTargets(const PutTargetsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return PutTargetsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

PutTargetsOutcomeCallable EventBridgeClient::PutTargetsCallable(const PutTargetsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutTargetsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutTargets(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EventBridgeClient::PutTargetsAsync(const PutTargetsRequest& request, const PutTargetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->PutTargetsAsyncHelper( request, handler, context ); } );
}

void EventBridgeClient::PutTargetsAsyncHelper(const PutTargetsRequest& request, const PutTargetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, PutTargets(request), context);
}

RemovePermissionOutcome EventBridgeClient::RemovePermission(const RemovePermissionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return RemovePermissionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

RemovePermissionOutcomeCallable EventBridgeClient::RemovePermissionCallable(const RemovePermissionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< RemovePermissionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->RemovePermission(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EventBridgeClient::RemovePermissionAsync(const RemovePermissionRequest& request, const RemovePermissionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->RemovePermissionAsyncHelper( request, handler, context ); } );
}

void EventBridgeClient::RemovePermissionAsyncHelper(const RemovePermissionRequest& request, const RemovePermissionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, RemovePermission(request), context);
}

RemoveTargetsOutcome EventBridgeClient::RemoveTargets(const RemoveTargetsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return RemoveTargetsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

RemoveTargetsOutcomeCallable EventBridgeClient::RemoveTargetsCallable(const RemoveTargetsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< RemoveTargetsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->RemoveTargets(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EventBridgeClient::RemoveTargetsAsync(const RemoveTargetsRequest& request, const RemoveTargetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->RemoveTargetsAsyncHelper( request, handler, context ); } );
}

void EventBridgeClient::RemoveTargetsAsyncHelper(const RemoveTargetsRequest& request, const RemoveTargetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, RemoveTargets(request), context);
}

StartReplayOutcome EventBridgeClient::StartReplay(const StartReplayRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return StartReplayOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

StartReplayOutcomeCallable EventBridgeClient::StartReplayCallable(const StartReplayRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StartReplayOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StartReplay(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EventBridgeClient::StartReplayAsync(const StartReplayRequest& request, const StartReplayResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->StartReplayAsyncHelper( request, handler, context ); } );
}

void EventBridgeClient::StartReplayAsyncHelper(const StartReplayRequest& request, const StartReplayResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, StartReplay(request), context);
}

TagResourceOutcome EventBridgeClient::TagResource(const TagResourceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return TagResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

TagResourceOutcomeCallable EventBridgeClient::TagResourceCallable(const TagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< TagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->TagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EventBridgeClient::TagResourceAsync(const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->TagResourceAsyncHelper( request, handler, context ); } );
}

void EventBridgeClient::TagResourceAsyncHelper(const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, TagResource(request), context);
}

TestEventPatternOutcome EventBridgeClient::TestEventPattern(const TestEventPatternRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return TestEventPatternOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

TestEventPatternOutcomeCallable EventBridgeClient::TestEventPatternCallable(const TestEventPatternRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< TestEventPatternOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->TestEventPattern(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EventBridgeClient::TestEventPatternAsync(const TestEventPatternRequest& request, const TestEventPatternResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->TestEventPatternAsyncHelper( request, handler, context ); } );
}

void EventBridgeClient::TestEventPatternAsyncHelper(const TestEventPatternRequest& request, const TestEventPatternResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, TestEventPattern(request), context);
}

UntagResourceOutcome EventBridgeClient::UntagResource(const UntagResourceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return UntagResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UntagResourceOutcomeCallable EventBridgeClient::UntagResourceCallable(const UntagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UntagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UntagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EventBridgeClient::UntagResourceAsync(const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UntagResourceAsyncHelper( request, handler, context ); } );
}

void EventBridgeClient::UntagResourceAsyncHelper(const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UntagResource(request), context);
}

UpdateApiDestinationOutcome EventBridgeClient::UpdateApiDestination(const UpdateApiDestinationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return UpdateApiDestinationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateApiDestinationOutcomeCallable EventBridgeClient::UpdateApiDestinationCallable(const UpdateApiDestinationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateApiDestinationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateApiDestination(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EventBridgeClient::UpdateApiDestinationAsync(const UpdateApiDestinationRequest& request, const UpdateApiDestinationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateApiDestinationAsyncHelper( request, handler, context ); } );
}

void EventBridgeClient::UpdateApiDestinationAsyncHelper(const UpdateApiDestinationRequest& request, const UpdateApiDestinationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateApiDestination(request), context);
}

UpdateArchiveOutcome EventBridgeClient::UpdateArchive(const UpdateArchiveRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return UpdateArchiveOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateArchiveOutcomeCallable EventBridgeClient::UpdateArchiveCallable(const UpdateArchiveRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateArchiveOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateArchive(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EventBridgeClient::UpdateArchiveAsync(const UpdateArchiveRequest& request, const UpdateArchiveResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateArchiveAsyncHelper( request, handler, context ); } );
}

void EventBridgeClient::UpdateArchiveAsyncHelper(const UpdateArchiveRequest& request, const UpdateArchiveResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateArchive(request), context);
}

UpdateConnectionOutcome EventBridgeClient::UpdateConnection(const UpdateConnectionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return UpdateConnectionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateConnectionOutcomeCallable EventBridgeClient::UpdateConnectionCallable(const UpdateConnectionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateConnectionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateConnection(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EventBridgeClient::UpdateConnectionAsync(const UpdateConnectionRequest& request, const UpdateConnectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateConnectionAsyncHelper( request, handler, context ); } );
}

void EventBridgeClient::UpdateConnectionAsyncHelper(const UpdateConnectionRequest& request, const UpdateConnectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateConnection(request), context);
}

