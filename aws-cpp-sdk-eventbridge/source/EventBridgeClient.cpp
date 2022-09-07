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
#include <aws/eventbridge/model/CreateEndpointRequest.h>
#include <aws/eventbridge/model/CreateEventBusRequest.h>
#include <aws/eventbridge/model/CreatePartnerEventSourceRequest.h>
#include <aws/eventbridge/model/DeactivateEventSourceRequest.h>
#include <aws/eventbridge/model/DeauthorizeConnectionRequest.h>
#include <aws/eventbridge/model/DeleteApiDestinationRequest.h>
#include <aws/eventbridge/model/DeleteArchiveRequest.h>
#include <aws/eventbridge/model/DeleteConnectionRequest.h>
#include <aws/eventbridge/model/DeleteEndpointRequest.h>
#include <aws/eventbridge/model/DeleteEventBusRequest.h>
#include <aws/eventbridge/model/DeletePartnerEventSourceRequest.h>
#include <aws/eventbridge/model/DeleteRuleRequest.h>
#include <aws/eventbridge/model/DescribeApiDestinationRequest.h>
#include <aws/eventbridge/model/DescribeArchiveRequest.h>
#include <aws/eventbridge/model/DescribeConnectionRequest.h>
#include <aws/eventbridge/model/DescribeEndpointRequest.h>
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
#include <aws/eventbridge/model/ListEndpointsRequest.h>
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
#include <aws/eventbridge/model/UpdateEndpointRequest.h>

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
            Aws::MakeShared<Aws::Auth::DefaultAuthSignerProvider>(ALLOCATION_TAG,
                                                                  Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                                                  SERVICE_NAME,
                                                                  Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<EventBridgeErrorMarshaller>(ALLOCATION_TAG)),
  m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

EventBridgeClient::EventBridgeClient(const AWSCredentials& credentials,
                                     const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<Aws::Auth::DefaultAuthSignerProvider>(ALLOCATION_TAG,
                                                                  Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                                  SERVICE_NAME,
                                                                  Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<EventBridgeErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

EventBridgeClient::EventBridgeClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                     const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<Aws::Auth::DefaultAuthSignerProvider>(ALLOCATION_TAG,
                                                                  credentialsProvider,
                                                                  SERVICE_NAME,
                                                                  Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<EventBridgeErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

EventBridgeClient::~EventBridgeClient()
{
}

void EventBridgeClient::init(const Client::ClientConfiguration& config)
{
  AWSClient::SetServiceClientName("EventBridge");
  m_configScheme = SchemeMapper::ToString(config.scheme);
  if (config.endpointOverride.empty())
  {
      m_uri = m_configScheme + "://" + EventBridgeEndpoint::ForRegion(config.region, config.useDualStack);
      m_useCustomEndpoint = false;
  }
  else
  {
      OverrideEndpoint(config.endpointOverride);
      m_useCustomEndpoint = true;
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
  return ActivateEventSourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ActivateEventSourceOutcomeCallable EventBridgeClient::ActivateEventSourceCallable(const ActivateEventSourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ActivateEventSourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ActivateEventSource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EventBridgeClientActivateEventSourceAsyncHelper(EventBridgeClient const * const clientThis, const ActivateEventSourceRequest& request, const ActivateEventSourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ActivateEventSource(request), context);
}

void EventBridgeClient::ActivateEventSourceAsync(const ActivateEventSourceRequest& request, const ActivateEventSourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ EventBridgeClientActivateEventSourceAsyncHelper( this, request, handler, context ); } );
}

CancelReplayOutcome EventBridgeClient::CancelReplay(const CancelReplayRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CancelReplayOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CancelReplayOutcomeCallable EventBridgeClient::CancelReplayCallable(const CancelReplayRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CancelReplayOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CancelReplay(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EventBridgeClientCancelReplayAsyncHelper(EventBridgeClient const * const clientThis, const CancelReplayRequest& request, const CancelReplayResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CancelReplay(request), context);
}

void EventBridgeClient::CancelReplayAsync(const CancelReplayRequest& request, const CancelReplayResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ EventBridgeClientCancelReplayAsyncHelper( this, request, handler, context ); } );
}

CreateApiDestinationOutcome EventBridgeClient::CreateApiDestination(const CreateApiDestinationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateApiDestinationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateApiDestinationOutcomeCallable EventBridgeClient::CreateApiDestinationCallable(const CreateApiDestinationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateApiDestinationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateApiDestination(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EventBridgeClientCreateApiDestinationAsyncHelper(EventBridgeClient const * const clientThis, const CreateApiDestinationRequest& request, const CreateApiDestinationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateApiDestination(request), context);
}

void EventBridgeClient::CreateApiDestinationAsync(const CreateApiDestinationRequest& request, const CreateApiDestinationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ EventBridgeClientCreateApiDestinationAsyncHelper( this, request, handler, context ); } );
}

CreateArchiveOutcome EventBridgeClient::CreateArchive(const CreateArchiveRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateArchiveOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateArchiveOutcomeCallable EventBridgeClient::CreateArchiveCallable(const CreateArchiveRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateArchiveOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateArchive(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EventBridgeClientCreateArchiveAsyncHelper(EventBridgeClient const * const clientThis, const CreateArchiveRequest& request, const CreateArchiveResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateArchive(request), context);
}

void EventBridgeClient::CreateArchiveAsync(const CreateArchiveRequest& request, const CreateArchiveResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ EventBridgeClientCreateArchiveAsyncHelper( this, request, handler, context ); } );
}

CreateConnectionOutcome EventBridgeClient::CreateConnection(const CreateConnectionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateConnectionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateConnectionOutcomeCallable EventBridgeClient::CreateConnectionCallable(const CreateConnectionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateConnectionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateConnection(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EventBridgeClientCreateConnectionAsyncHelper(EventBridgeClient const * const clientThis, const CreateConnectionRequest& request, const CreateConnectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateConnection(request), context);
}

void EventBridgeClient::CreateConnectionAsync(const CreateConnectionRequest& request, const CreateConnectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ EventBridgeClientCreateConnectionAsyncHelper( this, request, handler, context ); } );
}

CreateEndpointOutcome EventBridgeClient::CreateEndpoint(const CreateEndpointRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateEndpointOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateEndpointOutcomeCallable EventBridgeClient::CreateEndpointCallable(const CreateEndpointRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateEndpointOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateEndpoint(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EventBridgeClientCreateEndpointAsyncHelper(EventBridgeClient const * const clientThis, const CreateEndpointRequest& request, const CreateEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateEndpoint(request), context);
}

void EventBridgeClient::CreateEndpointAsync(const CreateEndpointRequest& request, const CreateEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ EventBridgeClientCreateEndpointAsyncHelper( this, request, handler, context ); } );
}

CreateEventBusOutcome EventBridgeClient::CreateEventBus(const CreateEventBusRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateEventBusOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateEventBusOutcomeCallable EventBridgeClient::CreateEventBusCallable(const CreateEventBusRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateEventBusOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateEventBus(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EventBridgeClientCreateEventBusAsyncHelper(EventBridgeClient const * const clientThis, const CreateEventBusRequest& request, const CreateEventBusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateEventBus(request), context);
}

void EventBridgeClient::CreateEventBusAsync(const CreateEventBusRequest& request, const CreateEventBusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ EventBridgeClientCreateEventBusAsyncHelper( this, request, handler, context ); } );
}

CreatePartnerEventSourceOutcome EventBridgeClient::CreatePartnerEventSource(const CreatePartnerEventSourceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreatePartnerEventSourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreatePartnerEventSourceOutcomeCallable EventBridgeClient::CreatePartnerEventSourceCallable(const CreatePartnerEventSourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreatePartnerEventSourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreatePartnerEventSource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EventBridgeClientCreatePartnerEventSourceAsyncHelper(EventBridgeClient const * const clientThis, const CreatePartnerEventSourceRequest& request, const CreatePartnerEventSourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreatePartnerEventSource(request), context);
}

void EventBridgeClient::CreatePartnerEventSourceAsync(const CreatePartnerEventSourceRequest& request, const CreatePartnerEventSourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ EventBridgeClientCreatePartnerEventSourceAsyncHelper( this, request, handler, context ); } );
}

DeactivateEventSourceOutcome EventBridgeClient::DeactivateEventSource(const DeactivateEventSourceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeactivateEventSourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeactivateEventSourceOutcomeCallable EventBridgeClient::DeactivateEventSourceCallable(const DeactivateEventSourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeactivateEventSourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeactivateEventSource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EventBridgeClientDeactivateEventSourceAsyncHelper(EventBridgeClient const * const clientThis, const DeactivateEventSourceRequest& request, const DeactivateEventSourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeactivateEventSource(request), context);
}

void EventBridgeClient::DeactivateEventSourceAsync(const DeactivateEventSourceRequest& request, const DeactivateEventSourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ EventBridgeClientDeactivateEventSourceAsyncHelper( this, request, handler, context ); } );
}

DeauthorizeConnectionOutcome EventBridgeClient::DeauthorizeConnection(const DeauthorizeConnectionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeauthorizeConnectionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeauthorizeConnectionOutcomeCallable EventBridgeClient::DeauthorizeConnectionCallable(const DeauthorizeConnectionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeauthorizeConnectionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeauthorizeConnection(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EventBridgeClientDeauthorizeConnectionAsyncHelper(EventBridgeClient const * const clientThis, const DeauthorizeConnectionRequest& request, const DeauthorizeConnectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeauthorizeConnection(request), context);
}

void EventBridgeClient::DeauthorizeConnectionAsync(const DeauthorizeConnectionRequest& request, const DeauthorizeConnectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ EventBridgeClientDeauthorizeConnectionAsyncHelper( this, request, handler, context ); } );
}

DeleteApiDestinationOutcome EventBridgeClient::DeleteApiDestination(const DeleteApiDestinationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteApiDestinationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteApiDestinationOutcomeCallable EventBridgeClient::DeleteApiDestinationCallable(const DeleteApiDestinationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteApiDestinationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteApiDestination(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EventBridgeClientDeleteApiDestinationAsyncHelper(EventBridgeClient const * const clientThis, const DeleteApiDestinationRequest& request, const DeleteApiDestinationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteApiDestination(request), context);
}

void EventBridgeClient::DeleteApiDestinationAsync(const DeleteApiDestinationRequest& request, const DeleteApiDestinationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ EventBridgeClientDeleteApiDestinationAsyncHelper( this, request, handler, context ); } );
}

DeleteArchiveOutcome EventBridgeClient::DeleteArchive(const DeleteArchiveRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteArchiveOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteArchiveOutcomeCallable EventBridgeClient::DeleteArchiveCallable(const DeleteArchiveRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteArchiveOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteArchive(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EventBridgeClientDeleteArchiveAsyncHelper(EventBridgeClient const * const clientThis, const DeleteArchiveRequest& request, const DeleteArchiveResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteArchive(request), context);
}

void EventBridgeClient::DeleteArchiveAsync(const DeleteArchiveRequest& request, const DeleteArchiveResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ EventBridgeClientDeleteArchiveAsyncHelper( this, request, handler, context ); } );
}

DeleteConnectionOutcome EventBridgeClient::DeleteConnection(const DeleteConnectionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteConnectionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteConnectionOutcomeCallable EventBridgeClient::DeleteConnectionCallable(const DeleteConnectionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteConnectionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteConnection(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EventBridgeClientDeleteConnectionAsyncHelper(EventBridgeClient const * const clientThis, const DeleteConnectionRequest& request, const DeleteConnectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteConnection(request), context);
}

void EventBridgeClient::DeleteConnectionAsync(const DeleteConnectionRequest& request, const DeleteConnectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ EventBridgeClientDeleteConnectionAsyncHelper( this, request, handler, context ); } );
}

DeleteEndpointOutcome EventBridgeClient::DeleteEndpoint(const DeleteEndpointRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteEndpointOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteEndpointOutcomeCallable EventBridgeClient::DeleteEndpointCallable(const DeleteEndpointRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteEndpointOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteEndpoint(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EventBridgeClientDeleteEndpointAsyncHelper(EventBridgeClient const * const clientThis, const DeleteEndpointRequest& request, const DeleteEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteEndpoint(request), context);
}

void EventBridgeClient::DeleteEndpointAsync(const DeleteEndpointRequest& request, const DeleteEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ EventBridgeClientDeleteEndpointAsyncHelper( this, request, handler, context ); } );
}

DeleteEventBusOutcome EventBridgeClient::DeleteEventBus(const DeleteEventBusRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteEventBusOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteEventBusOutcomeCallable EventBridgeClient::DeleteEventBusCallable(const DeleteEventBusRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteEventBusOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteEventBus(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EventBridgeClientDeleteEventBusAsyncHelper(EventBridgeClient const * const clientThis, const DeleteEventBusRequest& request, const DeleteEventBusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteEventBus(request), context);
}

void EventBridgeClient::DeleteEventBusAsync(const DeleteEventBusRequest& request, const DeleteEventBusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ EventBridgeClientDeleteEventBusAsyncHelper( this, request, handler, context ); } );
}

DeletePartnerEventSourceOutcome EventBridgeClient::DeletePartnerEventSource(const DeletePartnerEventSourceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeletePartnerEventSourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeletePartnerEventSourceOutcomeCallable EventBridgeClient::DeletePartnerEventSourceCallable(const DeletePartnerEventSourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeletePartnerEventSourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeletePartnerEventSource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EventBridgeClientDeletePartnerEventSourceAsyncHelper(EventBridgeClient const * const clientThis, const DeletePartnerEventSourceRequest& request, const DeletePartnerEventSourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeletePartnerEventSource(request), context);
}

void EventBridgeClient::DeletePartnerEventSourceAsync(const DeletePartnerEventSourceRequest& request, const DeletePartnerEventSourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ EventBridgeClientDeletePartnerEventSourceAsyncHelper( this, request, handler, context ); } );
}

DeleteRuleOutcome EventBridgeClient::DeleteRule(const DeleteRuleRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteRuleOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteRuleOutcomeCallable EventBridgeClient::DeleteRuleCallable(const DeleteRuleRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteRuleOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteRule(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EventBridgeClientDeleteRuleAsyncHelper(EventBridgeClient const * const clientThis, const DeleteRuleRequest& request, const DeleteRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteRule(request), context);
}

void EventBridgeClient::DeleteRuleAsync(const DeleteRuleRequest& request, const DeleteRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ EventBridgeClientDeleteRuleAsyncHelper( this, request, handler, context ); } );
}

DescribeApiDestinationOutcome EventBridgeClient::DescribeApiDestination(const DescribeApiDestinationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeApiDestinationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeApiDestinationOutcomeCallable EventBridgeClient::DescribeApiDestinationCallable(const DescribeApiDestinationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeApiDestinationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeApiDestination(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EventBridgeClientDescribeApiDestinationAsyncHelper(EventBridgeClient const * const clientThis, const DescribeApiDestinationRequest& request, const DescribeApiDestinationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeApiDestination(request), context);
}

void EventBridgeClient::DescribeApiDestinationAsync(const DescribeApiDestinationRequest& request, const DescribeApiDestinationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ EventBridgeClientDescribeApiDestinationAsyncHelper( this, request, handler, context ); } );
}

DescribeArchiveOutcome EventBridgeClient::DescribeArchive(const DescribeArchiveRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeArchiveOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeArchiveOutcomeCallable EventBridgeClient::DescribeArchiveCallable(const DescribeArchiveRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeArchiveOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeArchive(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EventBridgeClientDescribeArchiveAsyncHelper(EventBridgeClient const * const clientThis, const DescribeArchiveRequest& request, const DescribeArchiveResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeArchive(request), context);
}

void EventBridgeClient::DescribeArchiveAsync(const DescribeArchiveRequest& request, const DescribeArchiveResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ EventBridgeClientDescribeArchiveAsyncHelper( this, request, handler, context ); } );
}

DescribeConnectionOutcome EventBridgeClient::DescribeConnection(const DescribeConnectionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeConnectionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeConnectionOutcomeCallable EventBridgeClient::DescribeConnectionCallable(const DescribeConnectionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeConnectionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeConnection(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EventBridgeClientDescribeConnectionAsyncHelper(EventBridgeClient const * const clientThis, const DescribeConnectionRequest& request, const DescribeConnectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeConnection(request), context);
}

void EventBridgeClient::DescribeConnectionAsync(const DescribeConnectionRequest& request, const DescribeConnectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ EventBridgeClientDescribeConnectionAsyncHelper( this, request, handler, context ); } );
}

DescribeEndpointOutcome EventBridgeClient::DescribeEndpoint(const DescribeEndpointRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeEndpointOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeEndpointOutcomeCallable EventBridgeClient::DescribeEndpointCallable(const DescribeEndpointRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeEndpointOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeEndpoint(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EventBridgeClientDescribeEndpointAsyncHelper(EventBridgeClient const * const clientThis, const DescribeEndpointRequest& request, const DescribeEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeEndpoint(request), context);
}

void EventBridgeClient::DescribeEndpointAsync(const DescribeEndpointRequest& request, const DescribeEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ EventBridgeClientDescribeEndpointAsyncHelper( this, request, handler, context ); } );
}

DescribeEventBusOutcome EventBridgeClient::DescribeEventBus(const DescribeEventBusRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeEventBusOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeEventBusOutcomeCallable EventBridgeClient::DescribeEventBusCallable(const DescribeEventBusRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeEventBusOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeEventBus(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EventBridgeClientDescribeEventBusAsyncHelper(EventBridgeClient const * const clientThis, const DescribeEventBusRequest& request, const DescribeEventBusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeEventBus(request), context);
}

void EventBridgeClient::DescribeEventBusAsync(const DescribeEventBusRequest& request, const DescribeEventBusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ EventBridgeClientDescribeEventBusAsyncHelper( this, request, handler, context ); } );
}

DescribeEventSourceOutcome EventBridgeClient::DescribeEventSource(const DescribeEventSourceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeEventSourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeEventSourceOutcomeCallable EventBridgeClient::DescribeEventSourceCallable(const DescribeEventSourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeEventSourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeEventSource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EventBridgeClientDescribeEventSourceAsyncHelper(EventBridgeClient const * const clientThis, const DescribeEventSourceRequest& request, const DescribeEventSourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeEventSource(request), context);
}

void EventBridgeClient::DescribeEventSourceAsync(const DescribeEventSourceRequest& request, const DescribeEventSourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ EventBridgeClientDescribeEventSourceAsyncHelper( this, request, handler, context ); } );
}

DescribePartnerEventSourceOutcome EventBridgeClient::DescribePartnerEventSource(const DescribePartnerEventSourceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribePartnerEventSourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribePartnerEventSourceOutcomeCallable EventBridgeClient::DescribePartnerEventSourceCallable(const DescribePartnerEventSourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribePartnerEventSourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribePartnerEventSource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EventBridgeClientDescribePartnerEventSourceAsyncHelper(EventBridgeClient const * const clientThis, const DescribePartnerEventSourceRequest& request, const DescribePartnerEventSourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribePartnerEventSource(request), context);
}

void EventBridgeClient::DescribePartnerEventSourceAsync(const DescribePartnerEventSourceRequest& request, const DescribePartnerEventSourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ EventBridgeClientDescribePartnerEventSourceAsyncHelper( this, request, handler, context ); } );
}

DescribeReplayOutcome EventBridgeClient::DescribeReplay(const DescribeReplayRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeReplayOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeReplayOutcomeCallable EventBridgeClient::DescribeReplayCallable(const DescribeReplayRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeReplayOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeReplay(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EventBridgeClientDescribeReplayAsyncHelper(EventBridgeClient const * const clientThis, const DescribeReplayRequest& request, const DescribeReplayResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeReplay(request), context);
}

void EventBridgeClient::DescribeReplayAsync(const DescribeReplayRequest& request, const DescribeReplayResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ EventBridgeClientDescribeReplayAsyncHelper( this, request, handler, context ); } );
}

DescribeRuleOutcome EventBridgeClient::DescribeRule(const DescribeRuleRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeRuleOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeRuleOutcomeCallable EventBridgeClient::DescribeRuleCallable(const DescribeRuleRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeRuleOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeRule(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EventBridgeClientDescribeRuleAsyncHelper(EventBridgeClient const * const clientThis, const DescribeRuleRequest& request, const DescribeRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeRule(request), context);
}

void EventBridgeClient::DescribeRuleAsync(const DescribeRuleRequest& request, const DescribeRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ EventBridgeClientDescribeRuleAsyncHelper( this, request, handler, context ); } );
}

DisableRuleOutcome EventBridgeClient::DisableRule(const DisableRuleRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DisableRuleOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DisableRuleOutcomeCallable EventBridgeClient::DisableRuleCallable(const DisableRuleRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DisableRuleOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DisableRule(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EventBridgeClientDisableRuleAsyncHelper(EventBridgeClient const * const clientThis, const DisableRuleRequest& request, const DisableRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DisableRule(request), context);
}

void EventBridgeClient::DisableRuleAsync(const DisableRuleRequest& request, const DisableRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ EventBridgeClientDisableRuleAsyncHelper( this, request, handler, context ); } );
}

EnableRuleOutcome EventBridgeClient::EnableRule(const EnableRuleRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return EnableRuleOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

EnableRuleOutcomeCallable EventBridgeClient::EnableRuleCallable(const EnableRuleRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< EnableRuleOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->EnableRule(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EventBridgeClientEnableRuleAsyncHelper(EventBridgeClient const * const clientThis, const EnableRuleRequest& request, const EnableRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->EnableRule(request), context);
}

void EventBridgeClient::EnableRuleAsync(const EnableRuleRequest& request, const EnableRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ EventBridgeClientEnableRuleAsyncHelper( this, request, handler, context ); } );
}

ListApiDestinationsOutcome EventBridgeClient::ListApiDestinations(const ListApiDestinationsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListApiDestinationsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListApiDestinationsOutcomeCallable EventBridgeClient::ListApiDestinationsCallable(const ListApiDestinationsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListApiDestinationsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListApiDestinations(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EventBridgeClientListApiDestinationsAsyncHelper(EventBridgeClient const * const clientThis, const ListApiDestinationsRequest& request, const ListApiDestinationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListApiDestinations(request), context);
}

void EventBridgeClient::ListApiDestinationsAsync(const ListApiDestinationsRequest& request, const ListApiDestinationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ EventBridgeClientListApiDestinationsAsyncHelper( this, request, handler, context ); } );
}

ListArchivesOutcome EventBridgeClient::ListArchives(const ListArchivesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListArchivesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListArchivesOutcomeCallable EventBridgeClient::ListArchivesCallable(const ListArchivesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListArchivesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListArchives(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EventBridgeClientListArchivesAsyncHelper(EventBridgeClient const * const clientThis, const ListArchivesRequest& request, const ListArchivesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListArchives(request), context);
}

void EventBridgeClient::ListArchivesAsync(const ListArchivesRequest& request, const ListArchivesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ EventBridgeClientListArchivesAsyncHelper( this, request, handler, context ); } );
}

ListConnectionsOutcome EventBridgeClient::ListConnections(const ListConnectionsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListConnectionsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListConnectionsOutcomeCallable EventBridgeClient::ListConnectionsCallable(const ListConnectionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListConnectionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListConnections(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EventBridgeClientListConnectionsAsyncHelper(EventBridgeClient const * const clientThis, const ListConnectionsRequest& request, const ListConnectionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListConnections(request), context);
}

void EventBridgeClient::ListConnectionsAsync(const ListConnectionsRequest& request, const ListConnectionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ EventBridgeClientListConnectionsAsyncHelper( this, request, handler, context ); } );
}

ListEndpointsOutcome EventBridgeClient::ListEndpoints(const ListEndpointsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListEndpointsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListEndpointsOutcomeCallable EventBridgeClient::ListEndpointsCallable(const ListEndpointsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListEndpointsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListEndpoints(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EventBridgeClientListEndpointsAsyncHelper(EventBridgeClient const * const clientThis, const ListEndpointsRequest& request, const ListEndpointsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListEndpoints(request), context);
}

void EventBridgeClient::ListEndpointsAsync(const ListEndpointsRequest& request, const ListEndpointsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ EventBridgeClientListEndpointsAsyncHelper( this, request, handler, context ); } );
}

ListEventBusesOutcome EventBridgeClient::ListEventBuses(const ListEventBusesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListEventBusesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListEventBusesOutcomeCallable EventBridgeClient::ListEventBusesCallable(const ListEventBusesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListEventBusesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListEventBuses(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EventBridgeClientListEventBusesAsyncHelper(EventBridgeClient const * const clientThis, const ListEventBusesRequest& request, const ListEventBusesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListEventBuses(request), context);
}

void EventBridgeClient::ListEventBusesAsync(const ListEventBusesRequest& request, const ListEventBusesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ EventBridgeClientListEventBusesAsyncHelper( this, request, handler, context ); } );
}

ListEventSourcesOutcome EventBridgeClient::ListEventSources(const ListEventSourcesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListEventSourcesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListEventSourcesOutcomeCallable EventBridgeClient::ListEventSourcesCallable(const ListEventSourcesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListEventSourcesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListEventSources(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EventBridgeClientListEventSourcesAsyncHelper(EventBridgeClient const * const clientThis, const ListEventSourcesRequest& request, const ListEventSourcesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListEventSources(request), context);
}

void EventBridgeClient::ListEventSourcesAsync(const ListEventSourcesRequest& request, const ListEventSourcesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ EventBridgeClientListEventSourcesAsyncHelper( this, request, handler, context ); } );
}

ListPartnerEventSourceAccountsOutcome EventBridgeClient::ListPartnerEventSourceAccounts(const ListPartnerEventSourceAccountsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListPartnerEventSourceAccountsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListPartnerEventSourceAccountsOutcomeCallable EventBridgeClient::ListPartnerEventSourceAccountsCallable(const ListPartnerEventSourceAccountsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListPartnerEventSourceAccountsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListPartnerEventSourceAccounts(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EventBridgeClientListPartnerEventSourceAccountsAsyncHelper(EventBridgeClient const * const clientThis, const ListPartnerEventSourceAccountsRequest& request, const ListPartnerEventSourceAccountsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListPartnerEventSourceAccounts(request), context);
}

void EventBridgeClient::ListPartnerEventSourceAccountsAsync(const ListPartnerEventSourceAccountsRequest& request, const ListPartnerEventSourceAccountsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ EventBridgeClientListPartnerEventSourceAccountsAsyncHelper( this, request, handler, context ); } );
}

ListPartnerEventSourcesOutcome EventBridgeClient::ListPartnerEventSources(const ListPartnerEventSourcesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListPartnerEventSourcesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListPartnerEventSourcesOutcomeCallable EventBridgeClient::ListPartnerEventSourcesCallable(const ListPartnerEventSourcesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListPartnerEventSourcesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListPartnerEventSources(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EventBridgeClientListPartnerEventSourcesAsyncHelper(EventBridgeClient const * const clientThis, const ListPartnerEventSourcesRequest& request, const ListPartnerEventSourcesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListPartnerEventSources(request), context);
}

void EventBridgeClient::ListPartnerEventSourcesAsync(const ListPartnerEventSourcesRequest& request, const ListPartnerEventSourcesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ EventBridgeClientListPartnerEventSourcesAsyncHelper( this, request, handler, context ); } );
}

ListReplaysOutcome EventBridgeClient::ListReplays(const ListReplaysRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListReplaysOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListReplaysOutcomeCallable EventBridgeClient::ListReplaysCallable(const ListReplaysRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListReplaysOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListReplays(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EventBridgeClientListReplaysAsyncHelper(EventBridgeClient const * const clientThis, const ListReplaysRequest& request, const ListReplaysResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListReplays(request), context);
}

void EventBridgeClient::ListReplaysAsync(const ListReplaysRequest& request, const ListReplaysResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ EventBridgeClientListReplaysAsyncHelper( this, request, handler, context ); } );
}

ListRuleNamesByTargetOutcome EventBridgeClient::ListRuleNamesByTarget(const ListRuleNamesByTargetRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListRuleNamesByTargetOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListRuleNamesByTargetOutcomeCallable EventBridgeClient::ListRuleNamesByTargetCallable(const ListRuleNamesByTargetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListRuleNamesByTargetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListRuleNamesByTarget(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EventBridgeClientListRuleNamesByTargetAsyncHelper(EventBridgeClient const * const clientThis, const ListRuleNamesByTargetRequest& request, const ListRuleNamesByTargetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListRuleNamesByTarget(request), context);
}

void EventBridgeClient::ListRuleNamesByTargetAsync(const ListRuleNamesByTargetRequest& request, const ListRuleNamesByTargetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ EventBridgeClientListRuleNamesByTargetAsyncHelper( this, request, handler, context ); } );
}

ListRulesOutcome EventBridgeClient::ListRules(const ListRulesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListRulesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListRulesOutcomeCallable EventBridgeClient::ListRulesCallable(const ListRulesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListRulesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListRules(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EventBridgeClientListRulesAsyncHelper(EventBridgeClient const * const clientThis, const ListRulesRequest& request, const ListRulesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListRules(request), context);
}

void EventBridgeClient::ListRulesAsync(const ListRulesRequest& request, const ListRulesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ EventBridgeClientListRulesAsyncHelper( this, request, handler, context ); } );
}

ListTagsForResourceOutcome EventBridgeClient::ListTagsForResource(const ListTagsForResourceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListTagsForResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListTagsForResourceOutcomeCallable EventBridgeClient::ListTagsForResourceCallable(const ListTagsForResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListTagsForResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListTagsForResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EventBridgeClientListTagsForResourceAsyncHelper(EventBridgeClient const * const clientThis, const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListTagsForResource(request), context);
}

void EventBridgeClient::ListTagsForResourceAsync(const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ EventBridgeClientListTagsForResourceAsyncHelper( this, request, handler, context ); } );
}

ListTargetsByRuleOutcome EventBridgeClient::ListTargetsByRule(const ListTargetsByRuleRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListTargetsByRuleOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListTargetsByRuleOutcomeCallable EventBridgeClient::ListTargetsByRuleCallable(const ListTargetsByRuleRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListTargetsByRuleOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListTargetsByRule(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EventBridgeClientListTargetsByRuleAsyncHelper(EventBridgeClient const * const clientThis, const ListTargetsByRuleRequest& request, const ListTargetsByRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListTargetsByRule(request), context);
}

void EventBridgeClient::ListTargetsByRuleAsync(const ListTargetsByRuleRequest& request, const ListTargetsByRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ EventBridgeClientListTargetsByRuleAsyncHelper( this, request, handler, context ); } );
}

/**
 * The following API function EventBridgeClient::PutEvents has been generated using a customized template
 * in order to accommodate the support of multi-regional endpoints.
 */
PutEventsOutcome EventBridgeClient::PutEvents(const PutEventsRequest& request) const
{
  if (request.EndpointIdHasBeenSet())
  {
    Aws::Http::URI uri;
    if (m_useCustomEndpoint) {
      // SDK must send the PutEvents API operation to the custom endpoint if one has been configured
      uri = m_uri;
    } else {
      if(request.GetEndpointId().empty()) {
        return HttpResponseOutcome(AWSError<CoreErrors>(CoreErrors::VALIDATION, "", "EndpointId must not be a zero length string", false/*retryable*/));
      }
      Aws::String uriStr = request.GetEndpointId() + ".endpoint" + EventBridgeEndpoint::GetEventBridgeSuffix(m_region, false);
      if(!Utils::IsValidHost(uriStr)) {
        // The SDK must validate and throw an exception if EndpointId is not a valid DNS hostname component
        return HttpResponseOutcome(AWSError<CoreErrors>(CoreErrors::VALIDATION, "", "Invalid EventBridge EndpointId DNS hostname", false/*retryable*/));
      }
      uri = m_configScheme + "://" + uriStr;
    }
    // EventBridge multi-region endpoints must be signed using SigV4a authentication
    const char* signerName = Aws::Auth::ASYMMETRIC_SIGV4_SIGNER;
    // SDK must sign the requests with a region value of "*" since the primary and secondary failover regions is not known to the SDK at request time
    const char* signerRegionOverride = "*";
    return PutEventsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, signerName, signerRegionOverride));
  }
  else
  {
    Aws::Http::URI uri = m_uri;
    return PutEventsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
  }
}

PutEventsOutcomeCallable EventBridgeClient::PutEventsCallable(const PutEventsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutEventsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutEvents(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EventBridgeClientPutEventsAsyncHelper(EventBridgeClient const * const clientThis, const PutEventsRequest& request, const PutEventsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->PutEvents(request), context);
}

void EventBridgeClient::PutEventsAsync(const PutEventsRequest& request, const PutEventsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ EventBridgeClientPutEventsAsyncHelper( this, request, handler, context ); } );
}

PutPartnerEventsOutcome EventBridgeClient::PutPartnerEvents(const PutPartnerEventsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return PutPartnerEventsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

PutPartnerEventsOutcomeCallable EventBridgeClient::PutPartnerEventsCallable(const PutPartnerEventsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutPartnerEventsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutPartnerEvents(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EventBridgeClientPutPartnerEventsAsyncHelper(EventBridgeClient const * const clientThis, const PutPartnerEventsRequest& request, const PutPartnerEventsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->PutPartnerEvents(request), context);
}

void EventBridgeClient::PutPartnerEventsAsync(const PutPartnerEventsRequest& request, const PutPartnerEventsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ EventBridgeClientPutPartnerEventsAsyncHelper( this, request, handler, context ); } );
}

PutPermissionOutcome EventBridgeClient::PutPermission(const PutPermissionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return PutPermissionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

PutPermissionOutcomeCallable EventBridgeClient::PutPermissionCallable(const PutPermissionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutPermissionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutPermission(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EventBridgeClientPutPermissionAsyncHelper(EventBridgeClient const * const clientThis, const PutPermissionRequest& request, const PutPermissionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->PutPermission(request), context);
}

void EventBridgeClient::PutPermissionAsync(const PutPermissionRequest& request, const PutPermissionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ EventBridgeClientPutPermissionAsyncHelper( this, request, handler, context ); } );
}

PutRuleOutcome EventBridgeClient::PutRule(const PutRuleRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return PutRuleOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

PutRuleOutcomeCallable EventBridgeClient::PutRuleCallable(const PutRuleRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutRuleOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutRule(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EventBridgeClientPutRuleAsyncHelper(EventBridgeClient const * const clientThis, const PutRuleRequest& request, const PutRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->PutRule(request), context);
}

void EventBridgeClient::PutRuleAsync(const PutRuleRequest& request, const PutRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ EventBridgeClientPutRuleAsyncHelper( this, request, handler, context ); } );
}

PutTargetsOutcome EventBridgeClient::PutTargets(const PutTargetsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return PutTargetsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

PutTargetsOutcomeCallable EventBridgeClient::PutTargetsCallable(const PutTargetsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutTargetsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutTargets(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EventBridgeClientPutTargetsAsyncHelper(EventBridgeClient const * const clientThis, const PutTargetsRequest& request, const PutTargetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->PutTargets(request), context);
}

void EventBridgeClient::PutTargetsAsync(const PutTargetsRequest& request, const PutTargetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ EventBridgeClientPutTargetsAsyncHelper( this, request, handler, context ); } );
}

RemovePermissionOutcome EventBridgeClient::RemovePermission(const RemovePermissionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return RemovePermissionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

RemovePermissionOutcomeCallable EventBridgeClient::RemovePermissionCallable(const RemovePermissionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< RemovePermissionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->RemovePermission(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EventBridgeClientRemovePermissionAsyncHelper(EventBridgeClient const * const clientThis, const RemovePermissionRequest& request, const RemovePermissionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->RemovePermission(request), context);
}

void EventBridgeClient::RemovePermissionAsync(const RemovePermissionRequest& request, const RemovePermissionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ EventBridgeClientRemovePermissionAsyncHelper( this, request, handler, context ); } );
}

RemoveTargetsOutcome EventBridgeClient::RemoveTargets(const RemoveTargetsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return RemoveTargetsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

RemoveTargetsOutcomeCallable EventBridgeClient::RemoveTargetsCallable(const RemoveTargetsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< RemoveTargetsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->RemoveTargets(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EventBridgeClientRemoveTargetsAsyncHelper(EventBridgeClient const * const clientThis, const RemoveTargetsRequest& request, const RemoveTargetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->RemoveTargets(request), context);
}

void EventBridgeClient::RemoveTargetsAsync(const RemoveTargetsRequest& request, const RemoveTargetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ EventBridgeClientRemoveTargetsAsyncHelper( this, request, handler, context ); } );
}

StartReplayOutcome EventBridgeClient::StartReplay(const StartReplayRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return StartReplayOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

StartReplayOutcomeCallable EventBridgeClient::StartReplayCallable(const StartReplayRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StartReplayOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StartReplay(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EventBridgeClientStartReplayAsyncHelper(EventBridgeClient const * const clientThis, const StartReplayRequest& request, const StartReplayResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->StartReplay(request), context);
}

void EventBridgeClient::StartReplayAsync(const StartReplayRequest& request, const StartReplayResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ EventBridgeClientStartReplayAsyncHelper( this, request, handler, context ); } );
}

TagResourceOutcome EventBridgeClient::TagResource(const TagResourceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return TagResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

TagResourceOutcomeCallable EventBridgeClient::TagResourceCallable(const TagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< TagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->TagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EventBridgeClientTagResourceAsyncHelper(EventBridgeClient const * const clientThis, const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->TagResource(request), context);
}

void EventBridgeClient::TagResourceAsync(const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ EventBridgeClientTagResourceAsyncHelper( this, request, handler, context ); } );
}

TestEventPatternOutcome EventBridgeClient::TestEventPattern(const TestEventPatternRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return TestEventPatternOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

TestEventPatternOutcomeCallable EventBridgeClient::TestEventPatternCallable(const TestEventPatternRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< TestEventPatternOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->TestEventPattern(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EventBridgeClientTestEventPatternAsyncHelper(EventBridgeClient const * const clientThis, const TestEventPatternRequest& request, const TestEventPatternResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->TestEventPattern(request), context);
}

void EventBridgeClient::TestEventPatternAsync(const TestEventPatternRequest& request, const TestEventPatternResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ EventBridgeClientTestEventPatternAsyncHelper( this, request, handler, context ); } );
}

UntagResourceOutcome EventBridgeClient::UntagResource(const UntagResourceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UntagResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UntagResourceOutcomeCallable EventBridgeClient::UntagResourceCallable(const UntagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UntagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UntagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EventBridgeClientUntagResourceAsyncHelper(EventBridgeClient const * const clientThis, const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UntagResource(request), context);
}

void EventBridgeClient::UntagResourceAsync(const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ EventBridgeClientUntagResourceAsyncHelper( this, request, handler, context ); } );
}

UpdateApiDestinationOutcome EventBridgeClient::UpdateApiDestination(const UpdateApiDestinationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UpdateApiDestinationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateApiDestinationOutcomeCallable EventBridgeClient::UpdateApiDestinationCallable(const UpdateApiDestinationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateApiDestinationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateApiDestination(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EventBridgeClientUpdateApiDestinationAsyncHelper(EventBridgeClient const * const clientThis, const UpdateApiDestinationRequest& request, const UpdateApiDestinationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateApiDestination(request), context);
}

void EventBridgeClient::UpdateApiDestinationAsync(const UpdateApiDestinationRequest& request, const UpdateApiDestinationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ EventBridgeClientUpdateApiDestinationAsyncHelper( this, request, handler, context ); } );
}

UpdateArchiveOutcome EventBridgeClient::UpdateArchive(const UpdateArchiveRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UpdateArchiveOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateArchiveOutcomeCallable EventBridgeClient::UpdateArchiveCallable(const UpdateArchiveRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateArchiveOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateArchive(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EventBridgeClientUpdateArchiveAsyncHelper(EventBridgeClient const * const clientThis, const UpdateArchiveRequest& request, const UpdateArchiveResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateArchive(request), context);
}

void EventBridgeClient::UpdateArchiveAsync(const UpdateArchiveRequest& request, const UpdateArchiveResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ EventBridgeClientUpdateArchiveAsyncHelper( this, request, handler, context ); } );
}

UpdateConnectionOutcome EventBridgeClient::UpdateConnection(const UpdateConnectionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UpdateConnectionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateConnectionOutcomeCallable EventBridgeClient::UpdateConnectionCallable(const UpdateConnectionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateConnectionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateConnection(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EventBridgeClientUpdateConnectionAsyncHelper(EventBridgeClient const * const clientThis, const UpdateConnectionRequest& request, const UpdateConnectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateConnection(request), context);
}

void EventBridgeClient::UpdateConnectionAsync(const UpdateConnectionRequest& request, const UpdateConnectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ EventBridgeClientUpdateConnectionAsyncHelper( this, request, handler, context ); } );
}

UpdateEndpointOutcome EventBridgeClient::UpdateEndpoint(const UpdateEndpointRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UpdateEndpointOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateEndpointOutcomeCallable EventBridgeClient::UpdateEndpointCallable(const UpdateEndpointRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateEndpointOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateEndpoint(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EventBridgeClientUpdateEndpointAsyncHelper(EventBridgeClient const * const clientThis, const UpdateEndpointRequest& request, const UpdateEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateEndpoint(request), context);
}

void EventBridgeClient::UpdateEndpointAsync(const UpdateEndpointRequest& request, const UpdateEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ EventBridgeClientUpdateEndpointAsyncHelper( this, request, handler, context ); } );
}

