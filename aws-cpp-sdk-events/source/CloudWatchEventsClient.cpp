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

#include <aws/events/CloudWatchEventsClient.h>
#include <aws/events/CloudWatchEventsEndpoint.h>
#include <aws/events/CloudWatchEventsErrorMarshaller.h>
#include <aws/events/model/ActivateEventSourceRequest.h>
#include <aws/events/model/CancelReplayRequest.h>
#include <aws/events/model/CreateApiDestinationRequest.h>
#include <aws/events/model/CreateArchiveRequest.h>
#include <aws/events/model/CreateConnectionRequest.h>
#include <aws/events/model/CreateEventBusRequest.h>
#include <aws/events/model/CreatePartnerEventSourceRequest.h>
#include <aws/events/model/DeactivateEventSourceRequest.h>
#include <aws/events/model/DeauthorizeConnectionRequest.h>
#include <aws/events/model/DeleteApiDestinationRequest.h>
#include <aws/events/model/DeleteArchiveRequest.h>
#include <aws/events/model/DeleteConnectionRequest.h>
#include <aws/events/model/DeleteEventBusRequest.h>
#include <aws/events/model/DeletePartnerEventSourceRequest.h>
#include <aws/events/model/DeleteRuleRequest.h>
#include <aws/events/model/DescribeApiDestinationRequest.h>
#include <aws/events/model/DescribeArchiveRequest.h>
#include <aws/events/model/DescribeConnectionRequest.h>
#include <aws/events/model/DescribeEventBusRequest.h>
#include <aws/events/model/DescribeEventSourceRequest.h>
#include <aws/events/model/DescribePartnerEventSourceRequest.h>
#include <aws/events/model/DescribeReplayRequest.h>
#include <aws/events/model/DescribeRuleRequest.h>
#include <aws/events/model/DisableRuleRequest.h>
#include <aws/events/model/EnableRuleRequest.h>
#include <aws/events/model/ListApiDestinationsRequest.h>
#include <aws/events/model/ListArchivesRequest.h>
#include <aws/events/model/ListConnectionsRequest.h>
#include <aws/events/model/ListEventBusesRequest.h>
#include <aws/events/model/ListEventSourcesRequest.h>
#include <aws/events/model/ListPartnerEventSourceAccountsRequest.h>
#include <aws/events/model/ListPartnerEventSourcesRequest.h>
#include <aws/events/model/ListReplaysRequest.h>
#include <aws/events/model/ListRuleNamesByTargetRequest.h>
#include <aws/events/model/ListRulesRequest.h>
#include <aws/events/model/ListTagsForResourceRequest.h>
#include <aws/events/model/ListTargetsByRuleRequest.h>
#include <aws/events/model/PutEventsRequest.h>
#include <aws/events/model/PutPartnerEventsRequest.h>
#include <aws/events/model/PutPermissionRequest.h>
#include <aws/events/model/PutRuleRequest.h>
#include <aws/events/model/PutTargetsRequest.h>
#include <aws/events/model/RemovePermissionRequest.h>
#include <aws/events/model/RemoveTargetsRequest.h>
#include <aws/events/model/StartReplayRequest.h>
#include <aws/events/model/TagResourceRequest.h>
#include <aws/events/model/TestEventPatternRequest.h>
#include <aws/events/model/UntagResourceRequest.h>
#include <aws/events/model/UpdateApiDestinationRequest.h>
#include <aws/events/model/UpdateArchiveRequest.h>
#include <aws/events/model/UpdateConnectionRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::CloudWatchEvents;
using namespace Aws::CloudWatchEvents::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;

static const char* SERVICE_NAME = "events";
static const char* ALLOCATION_TAG = "CloudWatchEventsClient";

CloudWatchEventsClient::CloudWatchEventsClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<CloudWatchEventsErrorMarshaller>(ALLOCATION_TAG)),
  m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

CloudWatchEventsClient::CloudWatchEventsClient(const AWSCredentials& credentials,
                                               const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<CloudWatchEventsErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

CloudWatchEventsClient::CloudWatchEventsClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                               const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<CloudWatchEventsErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

CloudWatchEventsClient::~CloudWatchEventsClient()
{
}

void CloudWatchEventsClient::init(const Client::ClientConfiguration& config)
{
  AWSClient::SetServiceClientName("CloudWatch Events");
  m_configScheme = SchemeMapper::ToString(config.scheme);
  if (config.endpointOverride.empty())
  {
      m_uri = m_configScheme + "://" + CloudWatchEventsEndpoint::ForRegion(config.region, config.useDualStack);
  }
  else
  {
      OverrideEndpoint(config.endpointOverride);
  }
}

void CloudWatchEventsClient::OverrideEndpoint(const Aws::String& endpoint)
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

ActivateEventSourceOutcome CloudWatchEventsClient::ActivateEventSource(const ActivateEventSourceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ActivateEventSourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ActivateEventSourceOutcomeCallable CloudWatchEventsClient::ActivateEventSourceCallable(const ActivateEventSourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ActivateEventSourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ActivateEventSource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudWatchEventsClientActivateEventSourceAsyncHelper(CloudWatchEventsClient const * const clientThis, const ActivateEventSourceRequest& request, const ActivateEventSourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ActivateEventSource(request), context);
}

void CloudWatchEventsClient::ActivateEventSourceAsync(const ActivateEventSourceRequest& request, const ActivateEventSourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CloudWatchEventsClientActivateEventSourceAsyncHelper( this, request, handler, context ); } );
}

CancelReplayOutcome CloudWatchEventsClient::CancelReplay(const CancelReplayRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CancelReplayOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CancelReplayOutcomeCallable CloudWatchEventsClient::CancelReplayCallable(const CancelReplayRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CancelReplayOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CancelReplay(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudWatchEventsClientCancelReplayAsyncHelper(CloudWatchEventsClient const * const clientThis, const CancelReplayRequest& request, const CancelReplayResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CancelReplay(request), context);
}

void CloudWatchEventsClient::CancelReplayAsync(const CancelReplayRequest& request, const CancelReplayResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CloudWatchEventsClientCancelReplayAsyncHelper( this, request, handler, context ); } );
}

CreateApiDestinationOutcome CloudWatchEventsClient::CreateApiDestination(const CreateApiDestinationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateApiDestinationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateApiDestinationOutcomeCallable CloudWatchEventsClient::CreateApiDestinationCallable(const CreateApiDestinationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateApiDestinationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateApiDestination(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudWatchEventsClientCreateApiDestinationAsyncHelper(CloudWatchEventsClient const * const clientThis, const CreateApiDestinationRequest& request, const CreateApiDestinationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateApiDestination(request), context);
}

void CloudWatchEventsClient::CreateApiDestinationAsync(const CreateApiDestinationRequest& request, const CreateApiDestinationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CloudWatchEventsClientCreateApiDestinationAsyncHelper( this, request, handler, context ); } );
}

CreateArchiveOutcome CloudWatchEventsClient::CreateArchive(const CreateArchiveRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateArchiveOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateArchiveOutcomeCallable CloudWatchEventsClient::CreateArchiveCallable(const CreateArchiveRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateArchiveOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateArchive(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudWatchEventsClientCreateArchiveAsyncHelper(CloudWatchEventsClient const * const clientThis, const CreateArchiveRequest& request, const CreateArchiveResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateArchive(request), context);
}

void CloudWatchEventsClient::CreateArchiveAsync(const CreateArchiveRequest& request, const CreateArchiveResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CloudWatchEventsClientCreateArchiveAsyncHelper( this, request, handler, context ); } );
}

CreateConnectionOutcome CloudWatchEventsClient::CreateConnection(const CreateConnectionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateConnectionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateConnectionOutcomeCallable CloudWatchEventsClient::CreateConnectionCallable(const CreateConnectionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateConnectionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateConnection(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudWatchEventsClientCreateConnectionAsyncHelper(CloudWatchEventsClient const * const clientThis, const CreateConnectionRequest& request, const CreateConnectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateConnection(request), context);
}

void CloudWatchEventsClient::CreateConnectionAsync(const CreateConnectionRequest& request, const CreateConnectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CloudWatchEventsClientCreateConnectionAsyncHelper( this, request, handler, context ); } );
}

CreateEventBusOutcome CloudWatchEventsClient::CreateEventBus(const CreateEventBusRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateEventBusOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateEventBusOutcomeCallable CloudWatchEventsClient::CreateEventBusCallable(const CreateEventBusRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateEventBusOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateEventBus(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudWatchEventsClientCreateEventBusAsyncHelper(CloudWatchEventsClient const * const clientThis, const CreateEventBusRequest& request, const CreateEventBusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateEventBus(request), context);
}

void CloudWatchEventsClient::CreateEventBusAsync(const CreateEventBusRequest& request, const CreateEventBusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CloudWatchEventsClientCreateEventBusAsyncHelper( this, request, handler, context ); } );
}

CreatePartnerEventSourceOutcome CloudWatchEventsClient::CreatePartnerEventSource(const CreatePartnerEventSourceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreatePartnerEventSourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreatePartnerEventSourceOutcomeCallable CloudWatchEventsClient::CreatePartnerEventSourceCallable(const CreatePartnerEventSourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreatePartnerEventSourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreatePartnerEventSource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudWatchEventsClientCreatePartnerEventSourceAsyncHelper(CloudWatchEventsClient const * const clientThis, const CreatePartnerEventSourceRequest& request, const CreatePartnerEventSourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreatePartnerEventSource(request), context);
}

void CloudWatchEventsClient::CreatePartnerEventSourceAsync(const CreatePartnerEventSourceRequest& request, const CreatePartnerEventSourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CloudWatchEventsClientCreatePartnerEventSourceAsyncHelper( this, request, handler, context ); } );
}

DeactivateEventSourceOutcome CloudWatchEventsClient::DeactivateEventSource(const DeactivateEventSourceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeactivateEventSourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeactivateEventSourceOutcomeCallable CloudWatchEventsClient::DeactivateEventSourceCallable(const DeactivateEventSourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeactivateEventSourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeactivateEventSource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudWatchEventsClientDeactivateEventSourceAsyncHelper(CloudWatchEventsClient const * const clientThis, const DeactivateEventSourceRequest& request, const DeactivateEventSourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeactivateEventSource(request), context);
}

void CloudWatchEventsClient::DeactivateEventSourceAsync(const DeactivateEventSourceRequest& request, const DeactivateEventSourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CloudWatchEventsClientDeactivateEventSourceAsyncHelper( this, request, handler, context ); } );
}

DeauthorizeConnectionOutcome CloudWatchEventsClient::DeauthorizeConnection(const DeauthorizeConnectionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeauthorizeConnectionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeauthorizeConnectionOutcomeCallable CloudWatchEventsClient::DeauthorizeConnectionCallable(const DeauthorizeConnectionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeauthorizeConnectionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeauthorizeConnection(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudWatchEventsClientDeauthorizeConnectionAsyncHelper(CloudWatchEventsClient const * const clientThis, const DeauthorizeConnectionRequest& request, const DeauthorizeConnectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeauthorizeConnection(request), context);
}

void CloudWatchEventsClient::DeauthorizeConnectionAsync(const DeauthorizeConnectionRequest& request, const DeauthorizeConnectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CloudWatchEventsClientDeauthorizeConnectionAsyncHelper( this, request, handler, context ); } );
}

DeleteApiDestinationOutcome CloudWatchEventsClient::DeleteApiDestination(const DeleteApiDestinationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteApiDestinationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteApiDestinationOutcomeCallable CloudWatchEventsClient::DeleteApiDestinationCallable(const DeleteApiDestinationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteApiDestinationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteApiDestination(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudWatchEventsClientDeleteApiDestinationAsyncHelper(CloudWatchEventsClient const * const clientThis, const DeleteApiDestinationRequest& request, const DeleteApiDestinationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteApiDestination(request), context);
}

void CloudWatchEventsClient::DeleteApiDestinationAsync(const DeleteApiDestinationRequest& request, const DeleteApiDestinationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CloudWatchEventsClientDeleteApiDestinationAsyncHelper( this, request, handler, context ); } );
}

DeleteArchiveOutcome CloudWatchEventsClient::DeleteArchive(const DeleteArchiveRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteArchiveOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteArchiveOutcomeCallable CloudWatchEventsClient::DeleteArchiveCallable(const DeleteArchiveRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteArchiveOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteArchive(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudWatchEventsClientDeleteArchiveAsyncHelper(CloudWatchEventsClient const * const clientThis, const DeleteArchiveRequest& request, const DeleteArchiveResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteArchive(request), context);
}

void CloudWatchEventsClient::DeleteArchiveAsync(const DeleteArchiveRequest& request, const DeleteArchiveResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CloudWatchEventsClientDeleteArchiveAsyncHelper( this, request, handler, context ); } );
}

DeleteConnectionOutcome CloudWatchEventsClient::DeleteConnection(const DeleteConnectionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteConnectionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteConnectionOutcomeCallable CloudWatchEventsClient::DeleteConnectionCallable(const DeleteConnectionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteConnectionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteConnection(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudWatchEventsClientDeleteConnectionAsyncHelper(CloudWatchEventsClient const * const clientThis, const DeleteConnectionRequest& request, const DeleteConnectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteConnection(request), context);
}

void CloudWatchEventsClient::DeleteConnectionAsync(const DeleteConnectionRequest& request, const DeleteConnectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CloudWatchEventsClientDeleteConnectionAsyncHelper( this, request, handler, context ); } );
}

DeleteEventBusOutcome CloudWatchEventsClient::DeleteEventBus(const DeleteEventBusRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteEventBusOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteEventBusOutcomeCallable CloudWatchEventsClient::DeleteEventBusCallable(const DeleteEventBusRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteEventBusOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteEventBus(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudWatchEventsClientDeleteEventBusAsyncHelper(CloudWatchEventsClient const * const clientThis, const DeleteEventBusRequest& request, const DeleteEventBusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteEventBus(request), context);
}

void CloudWatchEventsClient::DeleteEventBusAsync(const DeleteEventBusRequest& request, const DeleteEventBusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CloudWatchEventsClientDeleteEventBusAsyncHelper( this, request, handler, context ); } );
}

DeletePartnerEventSourceOutcome CloudWatchEventsClient::DeletePartnerEventSource(const DeletePartnerEventSourceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeletePartnerEventSourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeletePartnerEventSourceOutcomeCallable CloudWatchEventsClient::DeletePartnerEventSourceCallable(const DeletePartnerEventSourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeletePartnerEventSourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeletePartnerEventSource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudWatchEventsClientDeletePartnerEventSourceAsyncHelper(CloudWatchEventsClient const * const clientThis, const DeletePartnerEventSourceRequest& request, const DeletePartnerEventSourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeletePartnerEventSource(request), context);
}

void CloudWatchEventsClient::DeletePartnerEventSourceAsync(const DeletePartnerEventSourceRequest& request, const DeletePartnerEventSourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CloudWatchEventsClientDeletePartnerEventSourceAsyncHelper( this, request, handler, context ); } );
}

DeleteRuleOutcome CloudWatchEventsClient::DeleteRule(const DeleteRuleRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteRuleOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteRuleOutcomeCallable CloudWatchEventsClient::DeleteRuleCallable(const DeleteRuleRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteRuleOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteRule(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudWatchEventsClientDeleteRuleAsyncHelper(CloudWatchEventsClient const * const clientThis, const DeleteRuleRequest& request, const DeleteRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteRule(request), context);
}

void CloudWatchEventsClient::DeleteRuleAsync(const DeleteRuleRequest& request, const DeleteRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CloudWatchEventsClientDeleteRuleAsyncHelper( this, request, handler, context ); } );
}

DescribeApiDestinationOutcome CloudWatchEventsClient::DescribeApiDestination(const DescribeApiDestinationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeApiDestinationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeApiDestinationOutcomeCallable CloudWatchEventsClient::DescribeApiDestinationCallable(const DescribeApiDestinationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeApiDestinationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeApiDestination(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudWatchEventsClientDescribeApiDestinationAsyncHelper(CloudWatchEventsClient const * const clientThis, const DescribeApiDestinationRequest& request, const DescribeApiDestinationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeApiDestination(request), context);
}

void CloudWatchEventsClient::DescribeApiDestinationAsync(const DescribeApiDestinationRequest& request, const DescribeApiDestinationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CloudWatchEventsClientDescribeApiDestinationAsyncHelper( this, request, handler, context ); } );
}

DescribeArchiveOutcome CloudWatchEventsClient::DescribeArchive(const DescribeArchiveRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeArchiveOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeArchiveOutcomeCallable CloudWatchEventsClient::DescribeArchiveCallable(const DescribeArchiveRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeArchiveOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeArchive(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudWatchEventsClientDescribeArchiveAsyncHelper(CloudWatchEventsClient const * const clientThis, const DescribeArchiveRequest& request, const DescribeArchiveResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeArchive(request), context);
}

void CloudWatchEventsClient::DescribeArchiveAsync(const DescribeArchiveRequest& request, const DescribeArchiveResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CloudWatchEventsClientDescribeArchiveAsyncHelper( this, request, handler, context ); } );
}

DescribeConnectionOutcome CloudWatchEventsClient::DescribeConnection(const DescribeConnectionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeConnectionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeConnectionOutcomeCallable CloudWatchEventsClient::DescribeConnectionCallable(const DescribeConnectionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeConnectionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeConnection(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudWatchEventsClientDescribeConnectionAsyncHelper(CloudWatchEventsClient const * const clientThis, const DescribeConnectionRequest& request, const DescribeConnectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeConnection(request), context);
}

void CloudWatchEventsClient::DescribeConnectionAsync(const DescribeConnectionRequest& request, const DescribeConnectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CloudWatchEventsClientDescribeConnectionAsyncHelper( this, request, handler, context ); } );
}

DescribeEventBusOutcome CloudWatchEventsClient::DescribeEventBus(const DescribeEventBusRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeEventBusOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeEventBusOutcomeCallable CloudWatchEventsClient::DescribeEventBusCallable(const DescribeEventBusRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeEventBusOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeEventBus(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudWatchEventsClientDescribeEventBusAsyncHelper(CloudWatchEventsClient const * const clientThis, const DescribeEventBusRequest& request, const DescribeEventBusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeEventBus(request), context);
}

void CloudWatchEventsClient::DescribeEventBusAsync(const DescribeEventBusRequest& request, const DescribeEventBusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CloudWatchEventsClientDescribeEventBusAsyncHelper( this, request, handler, context ); } );
}

DescribeEventSourceOutcome CloudWatchEventsClient::DescribeEventSource(const DescribeEventSourceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeEventSourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeEventSourceOutcomeCallable CloudWatchEventsClient::DescribeEventSourceCallable(const DescribeEventSourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeEventSourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeEventSource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudWatchEventsClientDescribeEventSourceAsyncHelper(CloudWatchEventsClient const * const clientThis, const DescribeEventSourceRequest& request, const DescribeEventSourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeEventSource(request), context);
}

void CloudWatchEventsClient::DescribeEventSourceAsync(const DescribeEventSourceRequest& request, const DescribeEventSourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CloudWatchEventsClientDescribeEventSourceAsyncHelper( this, request, handler, context ); } );
}

DescribePartnerEventSourceOutcome CloudWatchEventsClient::DescribePartnerEventSource(const DescribePartnerEventSourceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribePartnerEventSourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribePartnerEventSourceOutcomeCallable CloudWatchEventsClient::DescribePartnerEventSourceCallable(const DescribePartnerEventSourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribePartnerEventSourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribePartnerEventSource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudWatchEventsClientDescribePartnerEventSourceAsyncHelper(CloudWatchEventsClient const * const clientThis, const DescribePartnerEventSourceRequest& request, const DescribePartnerEventSourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribePartnerEventSource(request), context);
}

void CloudWatchEventsClient::DescribePartnerEventSourceAsync(const DescribePartnerEventSourceRequest& request, const DescribePartnerEventSourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CloudWatchEventsClientDescribePartnerEventSourceAsyncHelper( this, request, handler, context ); } );
}

DescribeReplayOutcome CloudWatchEventsClient::DescribeReplay(const DescribeReplayRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeReplayOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeReplayOutcomeCallable CloudWatchEventsClient::DescribeReplayCallable(const DescribeReplayRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeReplayOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeReplay(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudWatchEventsClientDescribeReplayAsyncHelper(CloudWatchEventsClient const * const clientThis, const DescribeReplayRequest& request, const DescribeReplayResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeReplay(request), context);
}

void CloudWatchEventsClient::DescribeReplayAsync(const DescribeReplayRequest& request, const DescribeReplayResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CloudWatchEventsClientDescribeReplayAsyncHelper( this, request, handler, context ); } );
}

DescribeRuleOutcome CloudWatchEventsClient::DescribeRule(const DescribeRuleRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeRuleOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeRuleOutcomeCallable CloudWatchEventsClient::DescribeRuleCallable(const DescribeRuleRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeRuleOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeRule(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudWatchEventsClientDescribeRuleAsyncHelper(CloudWatchEventsClient const * const clientThis, const DescribeRuleRequest& request, const DescribeRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeRule(request), context);
}

void CloudWatchEventsClient::DescribeRuleAsync(const DescribeRuleRequest& request, const DescribeRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CloudWatchEventsClientDescribeRuleAsyncHelper( this, request, handler, context ); } );
}

DisableRuleOutcome CloudWatchEventsClient::DisableRule(const DisableRuleRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DisableRuleOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DisableRuleOutcomeCallable CloudWatchEventsClient::DisableRuleCallable(const DisableRuleRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DisableRuleOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DisableRule(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudWatchEventsClientDisableRuleAsyncHelper(CloudWatchEventsClient const * const clientThis, const DisableRuleRequest& request, const DisableRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DisableRule(request), context);
}

void CloudWatchEventsClient::DisableRuleAsync(const DisableRuleRequest& request, const DisableRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CloudWatchEventsClientDisableRuleAsyncHelper( this, request, handler, context ); } );
}

EnableRuleOutcome CloudWatchEventsClient::EnableRule(const EnableRuleRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return EnableRuleOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

EnableRuleOutcomeCallable CloudWatchEventsClient::EnableRuleCallable(const EnableRuleRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< EnableRuleOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->EnableRule(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudWatchEventsClientEnableRuleAsyncHelper(CloudWatchEventsClient const * const clientThis, const EnableRuleRequest& request, const EnableRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->EnableRule(request), context);
}

void CloudWatchEventsClient::EnableRuleAsync(const EnableRuleRequest& request, const EnableRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CloudWatchEventsClientEnableRuleAsyncHelper( this, request, handler, context ); } );
}

ListApiDestinationsOutcome CloudWatchEventsClient::ListApiDestinations(const ListApiDestinationsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListApiDestinationsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListApiDestinationsOutcomeCallable CloudWatchEventsClient::ListApiDestinationsCallable(const ListApiDestinationsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListApiDestinationsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListApiDestinations(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudWatchEventsClientListApiDestinationsAsyncHelper(CloudWatchEventsClient const * const clientThis, const ListApiDestinationsRequest& request, const ListApiDestinationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListApiDestinations(request), context);
}

void CloudWatchEventsClient::ListApiDestinationsAsync(const ListApiDestinationsRequest& request, const ListApiDestinationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CloudWatchEventsClientListApiDestinationsAsyncHelper( this, request, handler, context ); } );
}

ListArchivesOutcome CloudWatchEventsClient::ListArchives(const ListArchivesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListArchivesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListArchivesOutcomeCallable CloudWatchEventsClient::ListArchivesCallable(const ListArchivesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListArchivesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListArchives(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudWatchEventsClientListArchivesAsyncHelper(CloudWatchEventsClient const * const clientThis, const ListArchivesRequest& request, const ListArchivesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListArchives(request), context);
}

void CloudWatchEventsClient::ListArchivesAsync(const ListArchivesRequest& request, const ListArchivesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CloudWatchEventsClientListArchivesAsyncHelper( this, request, handler, context ); } );
}

ListConnectionsOutcome CloudWatchEventsClient::ListConnections(const ListConnectionsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListConnectionsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListConnectionsOutcomeCallable CloudWatchEventsClient::ListConnectionsCallable(const ListConnectionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListConnectionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListConnections(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudWatchEventsClientListConnectionsAsyncHelper(CloudWatchEventsClient const * const clientThis, const ListConnectionsRequest& request, const ListConnectionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListConnections(request), context);
}

void CloudWatchEventsClient::ListConnectionsAsync(const ListConnectionsRequest& request, const ListConnectionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CloudWatchEventsClientListConnectionsAsyncHelper( this, request, handler, context ); } );
}

ListEventBusesOutcome CloudWatchEventsClient::ListEventBuses(const ListEventBusesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListEventBusesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListEventBusesOutcomeCallable CloudWatchEventsClient::ListEventBusesCallable(const ListEventBusesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListEventBusesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListEventBuses(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudWatchEventsClientListEventBusesAsyncHelper(CloudWatchEventsClient const * const clientThis, const ListEventBusesRequest& request, const ListEventBusesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListEventBuses(request), context);
}

void CloudWatchEventsClient::ListEventBusesAsync(const ListEventBusesRequest& request, const ListEventBusesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CloudWatchEventsClientListEventBusesAsyncHelper( this, request, handler, context ); } );
}

ListEventSourcesOutcome CloudWatchEventsClient::ListEventSources(const ListEventSourcesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListEventSourcesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListEventSourcesOutcomeCallable CloudWatchEventsClient::ListEventSourcesCallable(const ListEventSourcesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListEventSourcesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListEventSources(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudWatchEventsClientListEventSourcesAsyncHelper(CloudWatchEventsClient const * const clientThis, const ListEventSourcesRequest& request, const ListEventSourcesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListEventSources(request), context);
}

void CloudWatchEventsClient::ListEventSourcesAsync(const ListEventSourcesRequest& request, const ListEventSourcesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CloudWatchEventsClientListEventSourcesAsyncHelper( this, request, handler, context ); } );
}

ListPartnerEventSourceAccountsOutcome CloudWatchEventsClient::ListPartnerEventSourceAccounts(const ListPartnerEventSourceAccountsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListPartnerEventSourceAccountsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListPartnerEventSourceAccountsOutcomeCallable CloudWatchEventsClient::ListPartnerEventSourceAccountsCallable(const ListPartnerEventSourceAccountsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListPartnerEventSourceAccountsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListPartnerEventSourceAccounts(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudWatchEventsClientListPartnerEventSourceAccountsAsyncHelper(CloudWatchEventsClient const * const clientThis, const ListPartnerEventSourceAccountsRequest& request, const ListPartnerEventSourceAccountsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListPartnerEventSourceAccounts(request), context);
}

void CloudWatchEventsClient::ListPartnerEventSourceAccountsAsync(const ListPartnerEventSourceAccountsRequest& request, const ListPartnerEventSourceAccountsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CloudWatchEventsClientListPartnerEventSourceAccountsAsyncHelper( this, request, handler, context ); } );
}

ListPartnerEventSourcesOutcome CloudWatchEventsClient::ListPartnerEventSources(const ListPartnerEventSourcesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListPartnerEventSourcesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListPartnerEventSourcesOutcomeCallable CloudWatchEventsClient::ListPartnerEventSourcesCallable(const ListPartnerEventSourcesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListPartnerEventSourcesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListPartnerEventSources(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudWatchEventsClientListPartnerEventSourcesAsyncHelper(CloudWatchEventsClient const * const clientThis, const ListPartnerEventSourcesRequest& request, const ListPartnerEventSourcesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListPartnerEventSources(request), context);
}

void CloudWatchEventsClient::ListPartnerEventSourcesAsync(const ListPartnerEventSourcesRequest& request, const ListPartnerEventSourcesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CloudWatchEventsClientListPartnerEventSourcesAsyncHelper( this, request, handler, context ); } );
}

ListReplaysOutcome CloudWatchEventsClient::ListReplays(const ListReplaysRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListReplaysOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListReplaysOutcomeCallable CloudWatchEventsClient::ListReplaysCallable(const ListReplaysRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListReplaysOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListReplays(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudWatchEventsClientListReplaysAsyncHelper(CloudWatchEventsClient const * const clientThis, const ListReplaysRequest& request, const ListReplaysResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListReplays(request), context);
}

void CloudWatchEventsClient::ListReplaysAsync(const ListReplaysRequest& request, const ListReplaysResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CloudWatchEventsClientListReplaysAsyncHelper( this, request, handler, context ); } );
}

ListRuleNamesByTargetOutcome CloudWatchEventsClient::ListRuleNamesByTarget(const ListRuleNamesByTargetRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListRuleNamesByTargetOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListRuleNamesByTargetOutcomeCallable CloudWatchEventsClient::ListRuleNamesByTargetCallable(const ListRuleNamesByTargetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListRuleNamesByTargetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListRuleNamesByTarget(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudWatchEventsClientListRuleNamesByTargetAsyncHelper(CloudWatchEventsClient const * const clientThis, const ListRuleNamesByTargetRequest& request, const ListRuleNamesByTargetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListRuleNamesByTarget(request), context);
}

void CloudWatchEventsClient::ListRuleNamesByTargetAsync(const ListRuleNamesByTargetRequest& request, const ListRuleNamesByTargetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CloudWatchEventsClientListRuleNamesByTargetAsyncHelper( this, request, handler, context ); } );
}

ListRulesOutcome CloudWatchEventsClient::ListRules(const ListRulesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListRulesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListRulesOutcomeCallable CloudWatchEventsClient::ListRulesCallable(const ListRulesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListRulesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListRules(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudWatchEventsClientListRulesAsyncHelper(CloudWatchEventsClient const * const clientThis, const ListRulesRequest& request, const ListRulesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListRules(request), context);
}

void CloudWatchEventsClient::ListRulesAsync(const ListRulesRequest& request, const ListRulesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CloudWatchEventsClientListRulesAsyncHelper( this, request, handler, context ); } );
}

ListTagsForResourceOutcome CloudWatchEventsClient::ListTagsForResource(const ListTagsForResourceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListTagsForResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListTagsForResourceOutcomeCallable CloudWatchEventsClient::ListTagsForResourceCallable(const ListTagsForResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListTagsForResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListTagsForResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudWatchEventsClientListTagsForResourceAsyncHelper(CloudWatchEventsClient const * const clientThis, const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListTagsForResource(request), context);
}

void CloudWatchEventsClient::ListTagsForResourceAsync(const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CloudWatchEventsClientListTagsForResourceAsyncHelper( this, request, handler, context ); } );
}

ListTargetsByRuleOutcome CloudWatchEventsClient::ListTargetsByRule(const ListTargetsByRuleRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListTargetsByRuleOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListTargetsByRuleOutcomeCallable CloudWatchEventsClient::ListTargetsByRuleCallable(const ListTargetsByRuleRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListTargetsByRuleOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListTargetsByRule(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudWatchEventsClientListTargetsByRuleAsyncHelper(CloudWatchEventsClient const * const clientThis, const ListTargetsByRuleRequest& request, const ListTargetsByRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListTargetsByRule(request), context);
}

void CloudWatchEventsClient::ListTargetsByRuleAsync(const ListTargetsByRuleRequest& request, const ListTargetsByRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CloudWatchEventsClientListTargetsByRuleAsyncHelper( this, request, handler, context ); } );
}

PutEventsOutcome CloudWatchEventsClient::PutEvents(const PutEventsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return PutEventsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

PutEventsOutcomeCallable CloudWatchEventsClient::PutEventsCallable(const PutEventsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutEventsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutEvents(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudWatchEventsClientPutEventsAsyncHelper(CloudWatchEventsClient const * const clientThis, const PutEventsRequest& request, const PutEventsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->PutEvents(request), context);
}

void CloudWatchEventsClient::PutEventsAsync(const PutEventsRequest& request, const PutEventsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CloudWatchEventsClientPutEventsAsyncHelper( this, request, handler, context ); } );
}

PutPartnerEventsOutcome CloudWatchEventsClient::PutPartnerEvents(const PutPartnerEventsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return PutPartnerEventsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

PutPartnerEventsOutcomeCallable CloudWatchEventsClient::PutPartnerEventsCallable(const PutPartnerEventsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutPartnerEventsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutPartnerEvents(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudWatchEventsClientPutPartnerEventsAsyncHelper(CloudWatchEventsClient const * const clientThis, const PutPartnerEventsRequest& request, const PutPartnerEventsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->PutPartnerEvents(request), context);
}

void CloudWatchEventsClient::PutPartnerEventsAsync(const PutPartnerEventsRequest& request, const PutPartnerEventsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CloudWatchEventsClientPutPartnerEventsAsyncHelper( this, request, handler, context ); } );
}

PutPermissionOutcome CloudWatchEventsClient::PutPermission(const PutPermissionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return PutPermissionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

PutPermissionOutcomeCallable CloudWatchEventsClient::PutPermissionCallable(const PutPermissionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutPermissionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutPermission(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudWatchEventsClientPutPermissionAsyncHelper(CloudWatchEventsClient const * const clientThis, const PutPermissionRequest& request, const PutPermissionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->PutPermission(request), context);
}

void CloudWatchEventsClient::PutPermissionAsync(const PutPermissionRequest& request, const PutPermissionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CloudWatchEventsClientPutPermissionAsyncHelper( this, request, handler, context ); } );
}

PutRuleOutcome CloudWatchEventsClient::PutRule(const PutRuleRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return PutRuleOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

PutRuleOutcomeCallable CloudWatchEventsClient::PutRuleCallable(const PutRuleRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutRuleOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutRule(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudWatchEventsClientPutRuleAsyncHelper(CloudWatchEventsClient const * const clientThis, const PutRuleRequest& request, const PutRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->PutRule(request), context);
}

void CloudWatchEventsClient::PutRuleAsync(const PutRuleRequest& request, const PutRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CloudWatchEventsClientPutRuleAsyncHelper( this, request, handler, context ); } );
}

PutTargetsOutcome CloudWatchEventsClient::PutTargets(const PutTargetsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return PutTargetsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

PutTargetsOutcomeCallable CloudWatchEventsClient::PutTargetsCallable(const PutTargetsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutTargetsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutTargets(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudWatchEventsClientPutTargetsAsyncHelper(CloudWatchEventsClient const * const clientThis, const PutTargetsRequest& request, const PutTargetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->PutTargets(request), context);
}

void CloudWatchEventsClient::PutTargetsAsync(const PutTargetsRequest& request, const PutTargetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CloudWatchEventsClientPutTargetsAsyncHelper( this, request, handler, context ); } );
}

RemovePermissionOutcome CloudWatchEventsClient::RemovePermission(const RemovePermissionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return RemovePermissionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

RemovePermissionOutcomeCallable CloudWatchEventsClient::RemovePermissionCallable(const RemovePermissionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< RemovePermissionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->RemovePermission(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudWatchEventsClientRemovePermissionAsyncHelper(CloudWatchEventsClient const * const clientThis, const RemovePermissionRequest& request, const RemovePermissionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->RemovePermission(request), context);
}

void CloudWatchEventsClient::RemovePermissionAsync(const RemovePermissionRequest& request, const RemovePermissionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CloudWatchEventsClientRemovePermissionAsyncHelper( this, request, handler, context ); } );
}

RemoveTargetsOutcome CloudWatchEventsClient::RemoveTargets(const RemoveTargetsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return RemoveTargetsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

RemoveTargetsOutcomeCallable CloudWatchEventsClient::RemoveTargetsCallable(const RemoveTargetsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< RemoveTargetsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->RemoveTargets(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudWatchEventsClientRemoveTargetsAsyncHelper(CloudWatchEventsClient const * const clientThis, const RemoveTargetsRequest& request, const RemoveTargetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->RemoveTargets(request), context);
}

void CloudWatchEventsClient::RemoveTargetsAsync(const RemoveTargetsRequest& request, const RemoveTargetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CloudWatchEventsClientRemoveTargetsAsyncHelper( this, request, handler, context ); } );
}

StartReplayOutcome CloudWatchEventsClient::StartReplay(const StartReplayRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return StartReplayOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

StartReplayOutcomeCallable CloudWatchEventsClient::StartReplayCallable(const StartReplayRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StartReplayOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StartReplay(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudWatchEventsClientStartReplayAsyncHelper(CloudWatchEventsClient const * const clientThis, const StartReplayRequest& request, const StartReplayResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->StartReplay(request), context);
}

void CloudWatchEventsClient::StartReplayAsync(const StartReplayRequest& request, const StartReplayResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CloudWatchEventsClientStartReplayAsyncHelper( this, request, handler, context ); } );
}

TagResourceOutcome CloudWatchEventsClient::TagResource(const TagResourceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return TagResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

TagResourceOutcomeCallable CloudWatchEventsClient::TagResourceCallable(const TagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< TagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->TagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudWatchEventsClientTagResourceAsyncHelper(CloudWatchEventsClient const * const clientThis, const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->TagResource(request), context);
}

void CloudWatchEventsClient::TagResourceAsync(const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CloudWatchEventsClientTagResourceAsyncHelper( this, request, handler, context ); } );
}

TestEventPatternOutcome CloudWatchEventsClient::TestEventPattern(const TestEventPatternRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return TestEventPatternOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

TestEventPatternOutcomeCallable CloudWatchEventsClient::TestEventPatternCallable(const TestEventPatternRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< TestEventPatternOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->TestEventPattern(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudWatchEventsClientTestEventPatternAsyncHelper(CloudWatchEventsClient const * const clientThis, const TestEventPatternRequest& request, const TestEventPatternResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->TestEventPattern(request), context);
}

void CloudWatchEventsClient::TestEventPatternAsync(const TestEventPatternRequest& request, const TestEventPatternResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CloudWatchEventsClientTestEventPatternAsyncHelper( this, request, handler, context ); } );
}

UntagResourceOutcome CloudWatchEventsClient::UntagResource(const UntagResourceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UntagResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UntagResourceOutcomeCallable CloudWatchEventsClient::UntagResourceCallable(const UntagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UntagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UntagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudWatchEventsClientUntagResourceAsyncHelper(CloudWatchEventsClient const * const clientThis, const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UntagResource(request), context);
}

void CloudWatchEventsClient::UntagResourceAsync(const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CloudWatchEventsClientUntagResourceAsyncHelper( this, request, handler, context ); } );
}

UpdateApiDestinationOutcome CloudWatchEventsClient::UpdateApiDestination(const UpdateApiDestinationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UpdateApiDestinationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateApiDestinationOutcomeCallable CloudWatchEventsClient::UpdateApiDestinationCallable(const UpdateApiDestinationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateApiDestinationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateApiDestination(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudWatchEventsClientUpdateApiDestinationAsyncHelper(CloudWatchEventsClient const * const clientThis, const UpdateApiDestinationRequest& request, const UpdateApiDestinationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateApiDestination(request), context);
}

void CloudWatchEventsClient::UpdateApiDestinationAsync(const UpdateApiDestinationRequest& request, const UpdateApiDestinationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CloudWatchEventsClientUpdateApiDestinationAsyncHelper( this, request, handler, context ); } );
}

UpdateArchiveOutcome CloudWatchEventsClient::UpdateArchive(const UpdateArchiveRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UpdateArchiveOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateArchiveOutcomeCallable CloudWatchEventsClient::UpdateArchiveCallable(const UpdateArchiveRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateArchiveOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateArchive(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudWatchEventsClientUpdateArchiveAsyncHelper(CloudWatchEventsClient const * const clientThis, const UpdateArchiveRequest& request, const UpdateArchiveResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateArchive(request), context);
}

void CloudWatchEventsClient::UpdateArchiveAsync(const UpdateArchiveRequest& request, const UpdateArchiveResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CloudWatchEventsClientUpdateArchiveAsyncHelper( this, request, handler, context ); } );
}

UpdateConnectionOutcome CloudWatchEventsClient::UpdateConnection(const UpdateConnectionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UpdateConnectionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateConnectionOutcomeCallable CloudWatchEventsClient::UpdateConnectionCallable(const UpdateConnectionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateConnectionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateConnection(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudWatchEventsClientUpdateConnectionAsyncHelper(CloudWatchEventsClient const * const clientThis, const UpdateConnectionRequest& request, const UpdateConnectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateConnection(request), context);
}

void CloudWatchEventsClient::UpdateConnectionAsync(const UpdateConnectionRequest& request, const UpdateConnectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CloudWatchEventsClientUpdateConnectionAsyncHelper( this, request, handler, context ); } );
}

