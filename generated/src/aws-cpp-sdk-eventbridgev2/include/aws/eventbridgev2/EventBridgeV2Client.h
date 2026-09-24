/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/crt/cbor/Cbor.h>
#include <aws/eventbridgev2/EventBridgeV2PaginationBase.h>
#include <aws/eventbridgev2/EventBridgeV2ServiceClientModel.h>
#include <aws/eventbridgev2/EventBridgeV2Waiter.h>
#include <aws/eventbridgev2/EventBridgeV2_EXPORTS.h>

namespace Aws {
namespace EventBridgeV2 {
/**
 * <p>Amazon EventBridge event bus API. An event bus receives events published by
 * your applications and AWS services, stores them for a configurable retention
 * period, and delivers them to subscribers. A subscriber filters events,
 * optionally transforms them, and invokes a target such as Lambda, SQS, SNS,
 * Kinesis, Step Functions, or an HTTP endpoint. The API manages event buses,
 * subscribers, event sources, resource policies, and tags, and publishes events
 * through PutEvents and PutRawEvents.</p>
 */
class AWS_EVENTBRIDGEV2_API EventBridgeV2Client : public Aws::Client::AWSRpcV2CborClient,
                                                  public Aws::Client::ClientWithAsyncTemplateMethods<EventBridgeV2Client>,
                                                  public EventBridgeV2PaginationBase<EventBridgeV2Client>,
                                                  public EventBridgeV2Waiter<EventBridgeV2Client> {
 public:
  typedef Aws::Client::AWSRpcV2CborClient BASECLASS;
  static const char* GetServiceName();
  static const char* GetAllocationTag();

  typedef EventBridgeV2ClientConfiguration ClientConfigurationType;
  typedef EventBridgeV2EndpointProvider EndpointProviderType;

  /**
   * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client
   * config is not specified, it will be initialized to default values.
   */
  EventBridgeV2Client(const Aws::EventBridgeV2::EventBridgeV2ClientConfiguration& clientConfiguration =
                          Aws::EventBridgeV2::EventBridgeV2ClientConfiguration(),
                      std::shared_ptr<EventBridgeV2EndpointProviderBase> endpointProvider = nullptr);

  /**
   * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
   * is not specified, it will be initialized to default values.
   */
  EventBridgeV2Client(const Aws::Auth::AWSCredentials& credentials,
                      std::shared_ptr<EventBridgeV2EndpointProviderBase> endpointProvider = nullptr,
                      const Aws::EventBridgeV2::EventBridgeV2ClientConfiguration& clientConfiguration =
                          Aws::EventBridgeV2::EventBridgeV2ClientConfiguration());

  /**
   * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
   * the default http client factory will be used
   */
  EventBridgeV2Client(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                      std::shared_ptr<EventBridgeV2EndpointProviderBase> endpointProvider = nullptr,
                      const Aws::EventBridgeV2::EventBridgeV2ClientConfiguration& clientConfiguration =
                          Aws::EventBridgeV2::EventBridgeV2ClientConfiguration());

  /* Legacy constructors due deprecation */
  /**
   * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client
   * config is not specified, it will be initialized to default values.
   */
  EventBridgeV2Client(const Aws::Client::ClientConfiguration& clientConfiguration);

  /**
   * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
   * is not specified, it will be initialized to default values.
   */
  EventBridgeV2Client(const Aws::Auth::AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration);

  /**
   * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
   * the default http client factory will be used
   */
  EventBridgeV2Client(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                      const Aws::Client::ClientConfiguration& clientConfiguration);

  /* End of legacy constructors due deprecation */
  virtual ~EventBridgeV2Client();

  /**
   * <p>Creates an event bus. Provisioning is asynchronous: the bus is returned in
   * the CREATING state and transitions to ACTIVE when ready (see the EventBusActive
   * waiter). Retries carrying the same ClientToken are idempotent.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/eventbridgev2-2025-05-15/CreateEventBus">AWS
   * API Reference</a></p>
   */
  virtual Model::CreateEventBusOutcome CreateEventBus(const Model::CreateEventBusRequest& request) const;

  /**
   * A Callable wrapper for CreateEventBus that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename CreateEventBusRequestT = Model::CreateEventBusRequest>
  Model::CreateEventBusOutcomeCallable CreateEventBusCallable(const CreateEventBusRequestT& request) const {
    return SubmitCallable(&EventBridgeV2Client::CreateEventBus, request);
  }

  /**
   * An Async wrapper for CreateEventBus that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename CreateEventBusRequestT = Model::CreateEventBusRequest>
  void CreateEventBusAsync(const CreateEventBusRequestT& request, const CreateEventBusResponseReceivedHandler& handler,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&EventBridgeV2Client::CreateEventBus, request, handler, context);
  }

  /**
   * <p>Creates an EventSource, which forwards events from an origin (an AWS service
   * or another account) onto an event bus. The bus must be ACTIVE. Retries carrying
   * the same ClientToken are idempotent.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/eventbridgev2-2025-05-15/CreateEventSource">AWS
   * API Reference</a></p>
   */
  virtual Model::CreateEventSourceOutcome CreateEventSource(const Model::CreateEventSourceRequest& request) const;

  /**
   * A Callable wrapper for CreateEventSource that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename CreateEventSourceRequestT = Model::CreateEventSourceRequest>
  Model::CreateEventSourceOutcomeCallable CreateEventSourceCallable(const CreateEventSourceRequestT& request) const {
    return SubmitCallable(&EventBridgeV2Client::CreateEventSource, request);
  }

  /**
   * An Async wrapper for CreateEventSource that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename CreateEventSourceRequestT = Model::CreateEventSourceRequest>
  void CreateEventSourceAsync(const CreateEventSourceRequestT& request, const CreateEventSourceResponseReceivedHandler& handler,
                              const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&EventBridgeV2Client::CreateEventSource, request, handler, context);
  }

  /**
   * <p>Creates a subscriber on an event bus, which delivers matching events to the
   * configured target. The bus must be ACTIVE. Retries carrying the same ClientToken
   * are idempotent.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/eventbridgev2-2025-05-15/CreateSubscriber">AWS
   * API Reference</a></p>
   */
  virtual Model::CreateSubscriberOutcome CreateSubscriber(const Model::CreateSubscriberRequest& request) const;

  /**
   * A Callable wrapper for CreateSubscriber that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename CreateSubscriberRequestT = Model::CreateSubscriberRequest>
  Model::CreateSubscriberOutcomeCallable CreateSubscriberCallable(const CreateSubscriberRequestT& request) const {
    return SubmitCallable(&EventBridgeV2Client::CreateSubscriber, request);
  }

  /**
   * An Async wrapper for CreateSubscriber that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename CreateSubscriberRequestT = Model::CreateSubscriberRequest>
  void CreateSubscriberAsync(const CreateSubscriberRequestT& request, const CreateSubscriberResponseReceivedHandler& handler,
                             const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&EventBridgeV2Client::CreateSubscriber, request, handler, context);
  }

  /**
   * <p>Deletes an event bus. Deletion is asynchronous: the bus moves to DELETING and
   * disappears when complete (see the EventBusDeleted waiter). A bus with
   * subscribers or event sources cannot be deleted.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/eventbridgev2-2025-05-15/DeleteEventBus">AWS
   * API Reference</a></p>
   */
  virtual Model::DeleteEventBusOutcome DeleteEventBus(const Model::DeleteEventBusRequest& request) const;

  /**
   * A Callable wrapper for DeleteEventBus that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename DeleteEventBusRequestT = Model::DeleteEventBusRequest>
  Model::DeleteEventBusOutcomeCallable DeleteEventBusCallable(const DeleteEventBusRequestT& request) const {
    return SubmitCallable(&EventBridgeV2Client::DeleteEventBus, request);
  }

  /**
   * An Async wrapper for DeleteEventBus that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename DeleteEventBusRequestT = Model::DeleteEventBusRequest>
  void DeleteEventBusAsync(const DeleteEventBusRequestT& request, const DeleteEventBusResponseReceivedHandler& handler,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&EventBridgeV2Client::DeleteEventBus, request, handler, context);
  }

  /**
   * <p>Deletes an EventSource. Forwarding from its origin stops.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/eventbridgev2-2025-05-15/DeleteEventSource">AWS
   * API Reference</a></p>
   */
  virtual Model::DeleteEventSourceOutcome DeleteEventSource(const Model::DeleteEventSourceRequest& request) const;

  /**
   * A Callable wrapper for DeleteEventSource that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename DeleteEventSourceRequestT = Model::DeleteEventSourceRequest>
  Model::DeleteEventSourceOutcomeCallable DeleteEventSourceCallable(const DeleteEventSourceRequestT& request) const {
    return SubmitCallable(&EventBridgeV2Client::DeleteEventSource, request);
  }

  /**
   * An Async wrapper for DeleteEventSource that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename DeleteEventSourceRequestT = Model::DeleteEventSourceRequest>
  void DeleteEventSourceAsync(const DeleteEventSourceRequestT& request, const DeleteEventSourceResponseReceivedHandler& handler,
                              const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&EventBridgeV2Client::DeleteEventSource, request, handler, context);
  }

  /**
   * <p>Deletes the named resource policy attached to an event bus.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/eventbridgev2-2025-05-15/DeleteResourcePolicy">AWS
   * API Reference</a></p>
   */
  virtual Model::DeleteResourcePolicyOutcome DeleteResourcePolicy(const Model::DeleteResourcePolicyRequest& request) const;

  /**
   * A Callable wrapper for DeleteResourcePolicy that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename DeleteResourcePolicyRequestT = Model::DeleteResourcePolicyRequest>
  Model::DeleteResourcePolicyOutcomeCallable DeleteResourcePolicyCallable(const DeleteResourcePolicyRequestT& request) const {
    return SubmitCallable(&EventBridgeV2Client::DeleteResourcePolicy, request);
  }

  /**
   * An Async wrapper for DeleteResourcePolicy that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename DeleteResourcePolicyRequestT = Model::DeleteResourcePolicyRequest>
  void DeleteResourcePolicyAsync(const DeleteResourcePolicyRequestT& request, const DeleteResourcePolicyResponseReceivedHandler& handler,
                                 const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&EventBridgeV2Client::DeleteResourcePolicy, request, handler, context);
  }

  /**
   * <p>Deletes a subscriber. Events are no longer delivered to its
   * target.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/eventbridgev2-2025-05-15/DeleteSubscriber">AWS
   * API Reference</a></p>
   */
  virtual Model::DeleteSubscriberOutcome DeleteSubscriber(const Model::DeleteSubscriberRequest& request) const;

  /**
   * A Callable wrapper for DeleteSubscriber that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename DeleteSubscriberRequestT = Model::DeleteSubscriberRequest>
  Model::DeleteSubscriberOutcomeCallable DeleteSubscriberCallable(const DeleteSubscriberRequestT& request) const {
    return SubmitCallable(&EventBridgeV2Client::DeleteSubscriber, request);
  }

  /**
   * An Async wrapper for DeleteSubscriber that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename DeleteSubscriberRequestT = Model::DeleteSubscriberRequest>
  void DeleteSubscriberAsync(const DeleteSubscriberRequestT& request, const DeleteSubscriberResponseReceivedHandler& handler,
                             const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&EventBridgeV2Client::DeleteSubscriber, request, handler, context);
  }

  /**
   * <p>Returns the full configuration and lifecycle state of an event
   * bus.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/eventbridgev2-2025-05-15/DescribeEventBus">AWS
   * API Reference</a></p>
   */
  virtual Model::DescribeEventBusOutcome DescribeEventBus(const Model::DescribeEventBusRequest& request) const;

  /**
   * A Callable wrapper for DescribeEventBus that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename DescribeEventBusRequestT = Model::DescribeEventBusRequest>
  Model::DescribeEventBusOutcomeCallable DescribeEventBusCallable(const DescribeEventBusRequestT& request) const {
    return SubmitCallable(&EventBridgeV2Client::DescribeEventBus, request);
  }

  /**
   * An Async wrapper for DescribeEventBus that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename DescribeEventBusRequestT = Model::DescribeEventBusRequest>
  void DescribeEventBusAsync(const DescribeEventBusRequestT& request, const DescribeEventBusResponseReceivedHandler& handler,
                             const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&EventBridgeV2Client::DescribeEventBus, request, handler, context);
  }

  /**
   * <p>Returns the full configuration and lifecycle state of an
   * EventSource.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/eventbridgev2-2025-05-15/DescribeEventSource">AWS
   * API Reference</a></p>
   */
  virtual Model::DescribeEventSourceOutcome DescribeEventSource(const Model::DescribeEventSourceRequest& request) const;

  /**
   * A Callable wrapper for DescribeEventSource that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename DescribeEventSourceRequestT = Model::DescribeEventSourceRequest>
  Model::DescribeEventSourceOutcomeCallable DescribeEventSourceCallable(const DescribeEventSourceRequestT& request) const {
    return SubmitCallable(&EventBridgeV2Client::DescribeEventSource, request);
  }

  /**
   * An Async wrapper for DescribeEventSource that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename DescribeEventSourceRequestT = Model::DescribeEventSourceRequest>
  void DescribeEventSourceAsync(const DescribeEventSourceRequestT& request, const DescribeEventSourceResponseReceivedHandler& handler,
                                const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&EventBridgeV2Client::DescribeEventSource, request, handler, context);
  }

  /**
   * <p>Returns the full configuration and state of a subscriber.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/eventbridgev2-2025-05-15/DescribeSubscriber">AWS
   * API Reference</a></p>
   */
  virtual Model::DescribeSubscriberOutcome DescribeSubscriber(const Model::DescribeSubscriberRequest& request) const;

  /**
   * A Callable wrapper for DescribeSubscriber that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename DescribeSubscriberRequestT = Model::DescribeSubscriberRequest>
  Model::DescribeSubscriberOutcomeCallable DescribeSubscriberCallable(const DescribeSubscriberRequestT& request) const {
    return SubmitCallable(&EventBridgeV2Client::DescribeSubscriber, request);
  }

  /**
   * An Async wrapper for DescribeSubscriber that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename DescribeSubscriberRequestT = Model::DescribeSubscriberRequest>
  void DescribeSubscriberAsync(const DescribeSubscriberRequestT& request, const DescribeSubscriberResponseReceivedHandler& handler,
                               const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&EventBridgeV2Client::DescribeSubscriber, request, handler, context);
  }

  /**
   * <p>Returns the named resource policy attached to an event bus. Fails with
   * ResourceNotFoundException when the event bus or the named policy does not
   * exist.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/eventbridgev2-2025-05-15/GetResourcePolicy">AWS
   * API Reference</a></p>
   */
  virtual Model::GetResourcePolicyOutcome GetResourcePolicy(const Model::GetResourcePolicyRequest& request) const;

  /**
   * A Callable wrapper for GetResourcePolicy that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename GetResourcePolicyRequestT = Model::GetResourcePolicyRequest>
  Model::GetResourcePolicyOutcomeCallable GetResourcePolicyCallable(const GetResourcePolicyRequestT& request) const {
    return SubmitCallable(&EventBridgeV2Client::GetResourcePolicy, request);
  }

  /**
   * An Async wrapper for GetResourcePolicy that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename GetResourcePolicyRequestT = Model::GetResourcePolicyRequest>
  void GetResourcePolicyAsync(const GetResourcePolicyRequestT& request, const GetResourcePolicyResponseReceivedHandler& handler,
                              const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&EventBridgeV2Client::GetResourcePolicy, request, handler, context);
  }

  /**
   * <p>Lists the event buses visible to the caller: buses the account owns and buses
   * shared with it through AWS RAM. Shared entries carry identity fields only (Name,
   * EventBusArn, EventBusAccountId); owned entries carry every summary field. Set
   * EventBusAccountId to scope the list to one owner account.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/eventbridgev2-2025-05-15/ListEventBuses">AWS
   * API Reference</a></p>
   */
  virtual Model::ListEventBusesOutcome ListEventBuses(const Model::ListEventBusesRequest& request = {}) const;

  /**
   * A Callable wrapper for ListEventBuses that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename ListEventBusesRequestT = Model::ListEventBusesRequest>
  Model::ListEventBusesOutcomeCallable ListEventBusesCallable(const ListEventBusesRequestT& request = {}) const {
    return SubmitCallable(&EventBridgeV2Client::ListEventBuses, request);
  }

  /**
   * An Async wrapper for ListEventBuses that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename ListEventBusesRequestT = Model::ListEventBusesRequest>
  void ListEventBusesAsync(const ListEventBusesResponseReceivedHandler& handler,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr,
                           const ListEventBusesRequestT& request = {}) const {
    return SubmitAsync(&EventBridgeV2Client::ListEventBuses, request, handler, context);
  }

  /**
   * <p>Lists EventSources as summaries. By default the list spans the EventSources
   * the caller account owns; set EventBusArn to scope it to one bus. Use
   * DescribeEventSource to retrieve full configuration.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/eventbridgev2-2025-05-15/ListEventSources">AWS
   * API Reference</a></p>
   */
  virtual Model::ListEventSourcesOutcome ListEventSources(const Model::ListEventSourcesRequest& request = {}) const;

  /**
   * A Callable wrapper for ListEventSources that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename ListEventSourcesRequestT = Model::ListEventSourcesRequest>
  Model::ListEventSourcesOutcomeCallable ListEventSourcesCallable(const ListEventSourcesRequestT& request = {}) const {
    return SubmitCallable(&EventBridgeV2Client::ListEventSources, request);
  }

  /**
   * An Async wrapper for ListEventSources that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename ListEventSourcesRequestT = Model::ListEventSourcesRequest>
  void ListEventSourcesAsync(const ListEventSourcesResponseReceivedHandler& handler,
                             const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr,
                             const ListEventSourcesRequestT& request = {}) const {
    return SubmitAsync(&EventBridgeV2Client::ListEventSources, request, handler, context);
  }

  /**
   * <p>Lists the resource policies attached to an event bus as summaries (policy
   * name and revision ID). Use GetResourcePolicy to retrieve a policy
   * document.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/eventbridgev2-2025-05-15/ListResourcePolicies">AWS
   * API Reference</a></p>
   */
  virtual Model::ListResourcePoliciesOutcome ListResourcePolicies(const Model::ListResourcePoliciesRequest& request) const;

  /**
   * A Callable wrapper for ListResourcePolicies that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename ListResourcePoliciesRequestT = Model::ListResourcePoliciesRequest>
  Model::ListResourcePoliciesOutcomeCallable ListResourcePoliciesCallable(const ListResourcePoliciesRequestT& request) const {
    return SubmitCallable(&EventBridgeV2Client::ListResourcePolicies, request);
  }

  /**
   * An Async wrapper for ListResourcePolicies that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename ListResourcePoliciesRequestT = Model::ListResourcePoliciesRequest>
  void ListResourcePoliciesAsync(const ListResourcePoliciesRequestT& request, const ListResourcePoliciesResponseReceivedHandler& handler,
                                 const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&EventBridgeV2Client::ListResourcePolicies, request, handler, context);
  }

  /**
   * <p>Lists subscribers as summaries. By default the list spans the subscribers the
   * caller account owns across all buses; set EventBusArn to scope it to one bus.
   * Use DescribeSubscriber to retrieve full configuration.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/eventbridgev2-2025-05-15/ListSubscribers">AWS
   * API Reference</a></p>
   */
  virtual Model::ListSubscribersOutcome ListSubscribers(const Model::ListSubscribersRequest& request = {}) const;

  /**
   * A Callable wrapper for ListSubscribers that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename ListSubscribersRequestT = Model::ListSubscribersRequest>
  Model::ListSubscribersOutcomeCallable ListSubscribersCallable(const ListSubscribersRequestT& request = {}) const {
    return SubmitCallable(&EventBridgeV2Client::ListSubscribers, request);
  }

  /**
   * An Async wrapper for ListSubscribers that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename ListSubscribersRequestT = Model::ListSubscribersRequest>
  void ListSubscribersAsync(const ListSubscribersResponseReceivedHandler& handler,
                            const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr,
                            const ListSubscribersRequestT& request = {}) const {
    return SubmitAsync(&EventBridgeV2Client::ListSubscribers, request, handler, context);
  }

  /**
   * <p>Lists the tags on an event bus, subscriber, or event source.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/eventbridgev2-2025-05-15/ListTagsForResource">AWS
   * API Reference</a></p>
   */
  virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;

  /**
   * A Callable wrapper for ListTagsForResource that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
  Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const ListTagsForResourceRequestT& request) const {
    return SubmitCallable(&EventBridgeV2Client::ListTagsForResource, request);
  }

  /**
   * An Async wrapper for ListTagsForResource that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
  void ListTagsForResourceAsync(const ListTagsForResourceRequestT& request, const ListTagsForResourceResponseReceivedHandler& handler,
                                const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&EventBridgeV2Client::ListTagsForResource, request, handler, context);
  }

  /**
   * <p>Publishes events to an event bus.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/eventbridgev2-2025-05-15/PutEvents">AWS
   * API Reference</a></p>
   */
  virtual Model::PutEventsOutcome PutEvents(const Model::PutEventsRequest& request) const;

  /**
   * A Callable wrapper for PutEvents that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename PutEventsRequestT = Model::PutEventsRequest>
  Model::PutEventsOutcomeCallable PutEventsCallable(const PutEventsRequestT& request) const {
    return SubmitCallable(&EventBridgeV2Client::PutEvents, request);
  }

  /**
   * An Async wrapper for PutEvents that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename PutEventsRequestT = Model::PutEventsRequest>
  void PutEventsAsync(const PutEventsRequestT& request, const PutEventsResponseReceivedHandler& handler,
                      const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&EventBridgeV2Client::PutEvents, request, handler, context);
  }

  /**
   * <p>Publishes pre-shaped events to an event bus.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/eventbridgev2-2025-05-15/PutRawEvents">AWS
   * API Reference</a></p>
   */
  virtual Model::PutRawEventsOutcome PutRawEvents(const Model::PutRawEventsRequest& request) const;

  /**
   * A Callable wrapper for PutRawEvents that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename PutRawEventsRequestT = Model::PutRawEventsRequest>
  Model::PutRawEventsOutcomeCallable PutRawEventsCallable(const PutRawEventsRequestT& request) const {
    return SubmitCallable(&EventBridgeV2Client::PutRawEvents, request);
  }

  /**
   * An Async wrapper for PutRawEvents that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename PutRawEventsRequestT = Model::PutRawEventsRequest>
  void PutRawEventsAsync(const PutRawEventsRequestT& request, const PutRawEventsResponseReceivedHandler& handler,
                         const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&EventBridgeV2Client::PutRawEvents, request, handler, context);
  }

  /**
   * <p>Attaches a named resource policy to an event bus — the only resource type
   * that supports policies; other resource ARNs are rejected. Each bus holds two
   * named policies: &quot;default&quot; (customer-managed, full IAM policy language
   * including Deny) and &quot;AWS_RAM&quot; (written exclusively by AWS Resource
   * Access Manager to reflect resource shares). Both policies are evaluated on
   * cross-account authorization; an explicit Deny in either overrides an Allow in
   * the other. Operations that omit PolicyName target &quot;default&quot;. A
   * &quot;default&quot; policy that would grant public access is rejected with
   * PublicPolicyException and is not attached; this check is always on and cannot be
   * disabled.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/eventbridgev2-2025-05-15/PutResourcePolicy">AWS
   * API Reference</a></p>
   */
  virtual Model::PutResourcePolicyOutcome PutResourcePolicy(const Model::PutResourcePolicyRequest& request) const;

  /**
   * A Callable wrapper for PutResourcePolicy that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename PutResourcePolicyRequestT = Model::PutResourcePolicyRequest>
  Model::PutResourcePolicyOutcomeCallable PutResourcePolicyCallable(const PutResourcePolicyRequestT& request) const {
    return SubmitCallable(&EventBridgeV2Client::PutResourcePolicy, request);
  }

  /**
   * An Async wrapper for PutResourcePolicy that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename PutResourcePolicyRequestT = Model::PutResourcePolicyRequest>
  void PutResourcePolicyAsync(const PutResourcePolicyRequestT& request, const PutResourcePolicyResponseReceivedHandler& handler,
                              const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&EventBridgeV2Client::PutResourcePolicy, request, handler, context);
  }

  /**
   * <p>Revokes a subscriber or an EventSource. The bus owner calls this to withdraw
   * a misbehaving resource attached to their bus. Revocation is terminal: there is
   * no operation that clears it. A revoked resource refuses mutating operations with
   * InvalidStateException; delete stays available for cleanup.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/eventbridgev2-2025-05-15/RevokeResource">AWS
   * API Reference</a></p>
   */
  virtual Model::RevokeResourceOutcome RevokeResource(const Model::RevokeResourceRequest& request) const;

  /**
   * A Callable wrapper for RevokeResource that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename RevokeResourceRequestT = Model::RevokeResourceRequest>
  Model::RevokeResourceOutcomeCallable RevokeResourceCallable(const RevokeResourceRequestT& request) const {
    return SubmitCallable(&EventBridgeV2Client::RevokeResource, request);
  }

  /**
   * An Async wrapper for RevokeResource that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename RevokeResourceRequestT = Model::RevokeResourceRequest>
  void RevokeResourceAsync(const RevokeResourceRequestT& request, const RevokeResourceResponseReceivedHandler& handler,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&EventBridgeV2Client::RevokeResource, request, handler, context);
  }

  /**
   * <p>Adds or replaces tags on an event bus, subscriber, or event
   * source.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/eventbridgev2-2025-05-15/TagResource">AWS
   * API Reference</a></p>
   */
  virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;

  /**
   * A Callable wrapper for TagResource that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename TagResourceRequestT = Model::TagResourceRequest>
  Model::TagResourceOutcomeCallable TagResourceCallable(const TagResourceRequestT& request) const {
    return SubmitCallable(&EventBridgeV2Client::TagResource, request);
  }

  /**
   * An Async wrapper for TagResource that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename TagResourceRequestT = Model::TagResourceRequest>
  void TagResourceAsync(const TagResourceRequestT& request, const TagResourceResponseReceivedHandler& handler,
                        const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&EventBridgeV2Client::TagResource, request, handler, context);
  }

  /**
   * <p>Removes tags from an event bus, subscriber, or event source.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/eventbridgev2-2025-05-15/UntagResource">AWS
   * API Reference</a></p>
   */
  virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;

  /**
   * A Callable wrapper for UntagResource that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename UntagResourceRequestT = Model::UntagResourceRequest>
  Model::UntagResourceOutcomeCallable UntagResourceCallable(const UntagResourceRequestT& request) const {
    return SubmitCallable(&EventBridgeV2Client::UntagResource, request);
  }

  /**
   * An Async wrapper for UntagResource that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename UntagResourceRequestT = Model::UntagResourceRequest>
  void UntagResourceAsync(const UntagResourceRequestT& request, const UntagResourceResponseReceivedHandler& handler,
                          const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&EventBridgeV2Client::UntagResource, request, handler, context);
  }

  /**
   * <p>Updates an event bus. The update is asynchronous: the bus moves to UPDATING
   * and returns to ACTIVE when the change is applied. Fields omitted from the
   * request are left unchanged.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/eventbridgev2-2025-05-15/UpdateEventBus">AWS
   * API Reference</a></p>
   */
  virtual Model::UpdateEventBusOutcome UpdateEventBus(const Model::UpdateEventBusRequest& request) const;

  /**
   * A Callable wrapper for UpdateEventBus that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename UpdateEventBusRequestT = Model::UpdateEventBusRequest>
  Model::UpdateEventBusOutcomeCallable UpdateEventBusCallable(const UpdateEventBusRequestT& request) const {
    return SubmitCallable(&EventBridgeV2Client::UpdateEventBus, request);
  }

  /**
   * An Async wrapper for UpdateEventBus that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename UpdateEventBusRequestT = Model::UpdateEventBusRequest>
  void UpdateEventBusAsync(const UpdateEventBusRequestT& request, const UpdateEventBusResponseReceivedHandler& handler,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&EventBridgeV2Client::UpdateEventBus, request, handler, context);
  }

  /**
   * <p>Updates an EventSource. Fields omitted from the request are left
   * unchanged.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/eventbridgev2-2025-05-15/UpdateEventSource">AWS
   * API Reference</a></p>
   */
  virtual Model::UpdateEventSourceOutcome UpdateEventSource(const Model::UpdateEventSourceRequest& request) const;

  /**
   * A Callable wrapper for UpdateEventSource that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename UpdateEventSourceRequestT = Model::UpdateEventSourceRequest>
  Model::UpdateEventSourceOutcomeCallable UpdateEventSourceCallable(const UpdateEventSourceRequestT& request) const {
    return SubmitCallable(&EventBridgeV2Client::UpdateEventSource, request);
  }

  /**
   * An Async wrapper for UpdateEventSource that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename UpdateEventSourceRequestT = Model::UpdateEventSourceRequest>
  void UpdateEventSourceAsync(const UpdateEventSourceRequestT& request, const UpdateEventSourceResponseReceivedHandler& handler,
                              const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&EventBridgeV2Client::UpdateEventSource, request, handler, context);
  }

  /**
   * <p>Updates a subscriber. Fields omitted from the request are left
   * unchanged.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/eventbridgev2-2025-05-15/UpdateSubscriber">AWS
   * API Reference</a></p>
   */
  virtual Model::UpdateSubscriberOutcome UpdateSubscriber(const Model::UpdateSubscriberRequest& request) const;

  /**
   * A Callable wrapper for UpdateSubscriber that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename UpdateSubscriberRequestT = Model::UpdateSubscriberRequest>
  Model::UpdateSubscriberOutcomeCallable UpdateSubscriberCallable(const UpdateSubscriberRequestT& request) const {
    return SubmitCallable(&EventBridgeV2Client::UpdateSubscriber, request);
  }

  /**
   * An Async wrapper for UpdateSubscriber that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename UpdateSubscriberRequestT = Model::UpdateSubscriberRequest>
  void UpdateSubscriberAsync(const UpdateSubscriberRequestT& request, const UpdateSubscriberResponseReceivedHandler& handler,
                             const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&EventBridgeV2Client::UpdateSubscriber, request, handler, context);
  }

  virtual void OverrideEndpoint(const Aws::String& endpoint);
  virtual std::shared_ptr<EventBridgeV2EndpointProviderBase>& accessEndpointProvider();

 private:
  friend class Aws::Client::ClientWithAsyncTemplateMethods<EventBridgeV2Client>;
  void init(const EventBridgeV2ClientConfiguration& clientConfiguration);

  typedef Aws::Utils::Outcome<Aws::AmazonWebServiceResult<RESPONSE>, EventBridgeV2Error> InvokeOperationOutcome;

  InvokeOperationOutcome InvokeServiceOperation(const AmazonWebServiceRequest& request, Aws::Http::HttpMethod httpMethod) const;

  EventBridgeV2ClientConfiguration m_clientConfiguration;
  std::shared_ptr<EventBridgeV2EndpointProviderBase> m_endpointProvider;
};

}  // namespace EventBridgeV2
}  // namespace Aws
