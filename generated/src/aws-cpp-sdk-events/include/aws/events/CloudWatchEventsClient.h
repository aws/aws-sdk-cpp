/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/events/CloudWatchEvents_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/events/CloudWatchEventsServiceClientModel.h>

namespace Aws
{
namespace CloudWatchEvents
{
  /**
   * <p>Amazon EventBridge helps you to respond to state changes in your Amazon Web
   * Services resources. When your resources change state, they automatically send
   * events to an event stream. You can create rules that match selected events in
   * the stream and route them to targets to take action. You can also use rules to
   * take action on a predetermined schedule. For example, you can configure rules
   * to:</p> <ul> <li> <p>Automatically invoke an Lambda function to update DNS
   * entries when an event notifies you that Amazon EC2 instance enters the running
   * state.</p> </li> <li> <p>Direct specific API records from CloudTrail to an
   * Amazon Kinesis data stream for detailed analysis of potential security or
   * availability risks.</p> </li> <li> <p>Periodically invoke a built-in target to
   * create a snapshot of an Amazon EBS volume.</p> </li> </ul> <p>For more
   * information about the features of Amazon EventBridge, see the <a
   * href="https://docs.aws.amazon.com/eventbridge/latest/userguide">Amazon
   * EventBridge User Guide</a>.</p>
   */
  class AWS_CLOUDWATCHEVENTS_API CloudWatchEventsClient : public Aws::Client::AWSJsonClient, public Aws::Client::ClientWithAsyncTemplateMethods<CloudWatchEventsClient>
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* GetServiceName();
      static const char* GetAllocationTag();

      typedef CloudWatchEventsClientConfiguration ClientConfigurationType;
      typedef CloudWatchEventsEndpointProvider EndpointProviderType;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        CloudWatchEventsClient(const Aws::CloudWatchEvents::CloudWatchEventsClientConfiguration& clientConfiguration = Aws::CloudWatchEvents::CloudWatchEventsClientConfiguration(),
                               std::shared_ptr<CloudWatchEventsEndpointProviderBase> endpointProvider = nullptr);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        CloudWatchEventsClient(const Aws::Auth::AWSCredentials& credentials,
                               std::shared_ptr<CloudWatchEventsEndpointProviderBase> endpointProvider = nullptr,
                               const Aws::CloudWatchEvents::CloudWatchEventsClientConfiguration& clientConfiguration = Aws::CloudWatchEvents::CloudWatchEventsClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        CloudWatchEventsClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                               std::shared_ptr<CloudWatchEventsEndpointProviderBase> endpointProvider = nullptr,
                               const Aws::CloudWatchEvents::CloudWatchEventsClientConfiguration& clientConfiguration = Aws::CloudWatchEvents::CloudWatchEventsClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        CloudWatchEventsClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        CloudWatchEventsClient(const Aws::Auth::AWSCredentials& credentials,
                               const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        CloudWatchEventsClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                               const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~CloudWatchEventsClient();

        /**
         * <p>Activates a partner event source that has been deactivated. Once activated,
         * your matching event bus will start receiving events from the event
         * source.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/events-2015-10-07/ActivateEventSource">AWS
         * API Reference</a></p>
         */
        virtual Model::ActivateEventSourceOutcome ActivateEventSource(const Model::ActivateEventSourceRequest& request) const;

        /**
         * A Callable wrapper for ActivateEventSource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ActivateEventSourceRequestT = Model::ActivateEventSourceRequest>
        Model::ActivateEventSourceOutcomeCallable ActivateEventSourceCallable(const ActivateEventSourceRequestT& request) const
        {
            return SubmitCallable(&CloudWatchEventsClient::ActivateEventSource, request);
        }

        /**
         * An Async wrapper for ActivateEventSource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ActivateEventSourceRequestT = Model::ActivateEventSourceRequest>
        void ActivateEventSourceAsync(const ActivateEventSourceRequestT& request, const ActivateEventSourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudWatchEventsClient::ActivateEventSource, request, handler, context);
        }

        /**
         * <p>Cancels the specified replay.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/events-2015-10-07/CancelReplay">AWS
         * API Reference</a></p>
         */
        virtual Model::CancelReplayOutcome CancelReplay(const Model::CancelReplayRequest& request) const;

        /**
         * A Callable wrapper for CancelReplay that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CancelReplayRequestT = Model::CancelReplayRequest>
        Model::CancelReplayOutcomeCallable CancelReplayCallable(const CancelReplayRequestT& request) const
        {
            return SubmitCallable(&CloudWatchEventsClient::CancelReplay, request);
        }

        /**
         * An Async wrapper for CancelReplay that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CancelReplayRequestT = Model::CancelReplayRequest>
        void CancelReplayAsync(const CancelReplayRequestT& request, const CancelReplayResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudWatchEventsClient::CancelReplay, request, handler, context);
        }

        /**
         * <p>Creates an API destination, which is an HTTP invocation endpoint configured
         * as a target for events.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/events-2015-10-07/CreateApiDestination">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateApiDestinationOutcome CreateApiDestination(const Model::CreateApiDestinationRequest& request) const;

        /**
         * A Callable wrapper for CreateApiDestination that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateApiDestinationRequestT = Model::CreateApiDestinationRequest>
        Model::CreateApiDestinationOutcomeCallable CreateApiDestinationCallable(const CreateApiDestinationRequestT& request) const
        {
            return SubmitCallable(&CloudWatchEventsClient::CreateApiDestination, request);
        }

        /**
         * An Async wrapper for CreateApiDestination that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateApiDestinationRequestT = Model::CreateApiDestinationRequest>
        void CreateApiDestinationAsync(const CreateApiDestinationRequestT& request, const CreateApiDestinationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudWatchEventsClient::CreateApiDestination, request, handler, context);
        }

        /**
         * <p>Creates an archive of events with the specified settings. When you create an
         * archive, incoming events might not immediately start being sent to the archive.
         * Allow a short period of time for changes to take effect. If you do not specify a
         * pattern to filter events sent to the archive, all events are sent to the archive
         * except replayed events. Replayed events are not sent to an
         * archive.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/events-2015-10-07/CreateArchive">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateArchiveOutcome CreateArchive(const Model::CreateArchiveRequest& request) const;

        /**
         * A Callable wrapper for CreateArchive that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateArchiveRequestT = Model::CreateArchiveRequest>
        Model::CreateArchiveOutcomeCallable CreateArchiveCallable(const CreateArchiveRequestT& request) const
        {
            return SubmitCallable(&CloudWatchEventsClient::CreateArchive, request);
        }

        /**
         * An Async wrapper for CreateArchive that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateArchiveRequestT = Model::CreateArchiveRequest>
        void CreateArchiveAsync(const CreateArchiveRequestT& request, const CreateArchiveResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudWatchEventsClient::CreateArchive, request, handler, context);
        }

        /**
         * <p>Creates a connection. A connection defines the authorization type and
         * credentials to use for authorization with an API destination HTTP
         * endpoint.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/events-2015-10-07/CreateConnection">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateConnectionOutcome CreateConnection(const Model::CreateConnectionRequest& request) const;

        /**
         * A Callable wrapper for CreateConnection that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateConnectionRequestT = Model::CreateConnectionRequest>
        Model::CreateConnectionOutcomeCallable CreateConnectionCallable(const CreateConnectionRequestT& request) const
        {
            return SubmitCallable(&CloudWatchEventsClient::CreateConnection, request);
        }

        /**
         * An Async wrapper for CreateConnection that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateConnectionRequestT = Model::CreateConnectionRequest>
        void CreateConnectionAsync(const CreateConnectionRequestT& request, const CreateConnectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudWatchEventsClient::CreateConnection, request, handler, context);
        }

        /**
         * <p>Creates a new event bus within your account. This can be a custom event bus
         * which you can use to receive events from your custom applications and services,
         * or it can be a partner event bus which can be matched to a partner event
         * source.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/events-2015-10-07/CreateEventBus">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateEventBusOutcome CreateEventBus(const Model::CreateEventBusRequest& request) const;

        /**
         * A Callable wrapper for CreateEventBus that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateEventBusRequestT = Model::CreateEventBusRequest>
        Model::CreateEventBusOutcomeCallable CreateEventBusCallable(const CreateEventBusRequestT& request) const
        {
            return SubmitCallable(&CloudWatchEventsClient::CreateEventBus, request);
        }

        /**
         * An Async wrapper for CreateEventBus that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateEventBusRequestT = Model::CreateEventBusRequest>
        void CreateEventBusAsync(const CreateEventBusRequestT& request, const CreateEventBusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudWatchEventsClient::CreateEventBus, request, handler, context);
        }

        /**
         * <p>Called by an SaaS partner to create a partner event source. This operation is
         * not used by Amazon Web Services customers.</p> <p>Each partner event source can
         * be used by one Amazon Web Services account to create a matching partner event
         * bus in that Amazon Web Services account. A SaaS partner must create one partner
         * event source for each Amazon Web Services account that wants to receive those
         * event types. </p> <p>A partner event source creates events based on resources
         * within the SaaS partner's service or application.</p> <p>An Amazon Web Services
         * account that creates a partner event bus that matches the partner event source
         * can use that event bus to receive events from the partner, and then process them
         * using Amazon Web Services Events rules and targets.</p> <p>Partner event source
         * names follow this format:</p> <p> <code>
         * <i>partner_name</i>/<i>event_namespace</i>/<i>event_name</i> </code> </p> <p>
         * <i>partner_name</i> is determined during partner registration and identifies the
         * partner to Amazon Web Services customers. <i>event_namespace</i> is determined
         * by the partner and is a way for the partner to categorize their events.
         * <i>event_name</i> is determined by the partner, and should uniquely identify an
         * event-generating resource within the partner system. The combination of
         * <i>event_namespace</i> and <i>event_name</i> should help Amazon Web Services
         * customers decide whether to create an event bus to receive these
         * events.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/events-2015-10-07/CreatePartnerEventSource">AWS
         * API Reference</a></p>
         */
        virtual Model::CreatePartnerEventSourceOutcome CreatePartnerEventSource(const Model::CreatePartnerEventSourceRequest& request) const;

        /**
         * A Callable wrapper for CreatePartnerEventSource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreatePartnerEventSourceRequestT = Model::CreatePartnerEventSourceRequest>
        Model::CreatePartnerEventSourceOutcomeCallable CreatePartnerEventSourceCallable(const CreatePartnerEventSourceRequestT& request) const
        {
            return SubmitCallable(&CloudWatchEventsClient::CreatePartnerEventSource, request);
        }

        /**
         * An Async wrapper for CreatePartnerEventSource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreatePartnerEventSourceRequestT = Model::CreatePartnerEventSourceRequest>
        void CreatePartnerEventSourceAsync(const CreatePartnerEventSourceRequestT& request, const CreatePartnerEventSourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudWatchEventsClient::CreatePartnerEventSource, request, handler, context);
        }

        /**
         * <p>You can use this operation to temporarily stop receiving events from the
         * specified partner event source. The matching event bus is not deleted. </p>
         * <p>When you deactivate a partner event source, the source goes into PENDING
         * state. If it remains in PENDING state for more than two weeks, it is
         * deleted.</p> <p>To activate a deactivated partner event source, use <a
         * href="https://docs.aws.amazon.com/eventbridge/latest/APIReference/API_ActivateEventSource.html">ActivateEventSource</a>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/events-2015-10-07/DeactivateEventSource">AWS
         * API Reference</a></p>
         */
        virtual Model::DeactivateEventSourceOutcome DeactivateEventSource(const Model::DeactivateEventSourceRequest& request) const;

        /**
         * A Callable wrapper for DeactivateEventSource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeactivateEventSourceRequestT = Model::DeactivateEventSourceRequest>
        Model::DeactivateEventSourceOutcomeCallable DeactivateEventSourceCallable(const DeactivateEventSourceRequestT& request) const
        {
            return SubmitCallable(&CloudWatchEventsClient::DeactivateEventSource, request);
        }

        /**
         * An Async wrapper for DeactivateEventSource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeactivateEventSourceRequestT = Model::DeactivateEventSourceRequest>
        void DeactivateEventSourceAsync(const DeactivateEventSourceRequestT& request, const DeactivateEventSourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudWatchEventsClient::DeactivateEventSource, request, handler, context);
        }

        /**
         * <p>Removes all authorization parameters from the connection. This lets you
         * remove the secret from the connection so you can reuse it without having to
         * create a new connection.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/events-2015-10-07/DeauthorizeConnection">AWS
         * API Reference</a></p>
         */
        virtual Model::DeauthorizeConnectionOutcome DeauthorizeConnection(const Model::DeauthorizeConnectionRequest& request) const;

        /**
         * A Callable wrapper for DeauthorizeConnection that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeauthorizeConnectionRequestT = Model::DeauthorizeConnectionRequest>
        Model::DeauthorizeConnectionOutcomeCallable DeauthorizeConnectionCallable(const DeauthorizeConnectionRequestT& request) const
        {
            return SubmitCallable(&CloudWatchEventsClient::DeauthorizeConnection, request);
        }

        /**
         * An Async wrapper for DeauthorizeConnection that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeauthorizeConnectionRequestT = Model::DeauthorizeConnectionRequest>
        void DeauthorizeConnectionAsync(const DeauthorizeConnectionRequestT& request, const DeauthorizeConnectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudWatchEventsClient::DeauthorizeConnection, request, handler, context);
        }

        /**
         * <p>Deletes the specified API destination.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/events-2015-10-07/DeleteApiDestination">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteApiDestinationOutcome DeleteApiDestination(const Model::DeleteApiDestinationRequest& request) const;

        /**
         * A Callable wrapper for DeleteApiDestination that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteApiDestinationRequestT = Model::DeleteApiDestinationRequest>
        Model::DeleteApiDestinationOutcomeCallable DeleteApiDestinationCallable(const DeleteApiDestinationRequestT& request) const
        {
            return SubmitCallable(&CloudWatchEventsClient::DeleteApiDestination, request);
        }

        /**
         * An Async wrapper for DeleteApiDestination that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteApiDestinationRequestT = Model::DeleteApiDestinationRequest>
        void DeleteApiDestinationAsync(const DeleteApiDestinationRequestT& request, const DeleteApiDestinationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudWatchEventsClient::DeleteApiDestination, request, handler, context);
        }

        /**
         * <p>Deletes the specified archive.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/events-2015-10-07/DeleteArchive">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteArchiveOutcome DeleteArchive(const Model::DeleteArchiveRequest& request) const;

        /**
         * A Callable wrapper for DeleteArchive that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteArchiveRequestT = Model::DeleteArchiveRequest>
        Model::DeleteArchiveOutcomeCallable DeleteArchiveCallable(const DeleteArchiveRequestT& request) const
        {
            return SubmitCallable(&CloudWatchEventsClient::DeleteArchive, request);
        }

        /**
         * An Async wrapper for DeleteArchive that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteArchiveRequestT = Model::DeleteArchiveRequest>
        void DeleteArchiveAsync(const DeleteArchiveRequestT& request, const DeleteArchiveResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudWatchEventsClient::DeleteArchive, request, handler, context);
        }

        /**
         * <p>Deletes a connection.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/events-2015-10-07/DeleteConnection">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteConnectionOutcome DeleteConnection(const Model::DeleteConnectionRequest& request) const;

        /**
         * A Callable wrapper for DeleteConnection that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteConnectionRequestT = Model::DeleteConnectionRequest>
        Model::DeleteConnectionOutcomeCallable DeleteConnectionCallable(const DeleteConnectionRequestT& request) const
        {
            return SubmitCallable(&CloudWatchEventsClient::DeleteConnection, request);
        }

        /**
         * An Async wrapper for DeleteConnection that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteConnectionRequestT = Model::DeleteConnectionRequest>
        void DeleteConnectionAsync(const DeleteConnectionRequestT& request, const DeleteConnectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudWatchEventsClient::DeleteConnection, request, handler, context);
        }

        /**
         * <p>Deletes the specified custom event bus or partner event bus. All rules
         * associated with this event bus need to be deleted. You can't delete your
         * account's default event bus.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/events-2015-10-07/DeleteEventBus">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteEventBusOutcome DeleteEventBus(const Model::DeleteEventBusRequest& request) const;

        /**
         * A Callable wrapper for DeleteEventBus that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteEventBusRequestT = Model::DeleteEventBusRequest>
        Model::DeleteEventBusOutcomeCallable DeleteEventBusCallable(const DeleteEventBusRequestT& request) const
        {
            return SubmitCallable(&CloudWatchEventsClient::DeleteEventBus, request);
        }

        /**
         * An Async wrapper for DeleteEventBus that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteEventBusRequestT = Model::DeleteEventBusRequest>
        void DeleteEventBusAsync(const DeleteEventBusRequestT& request, const DeleteEventBusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudWatchEventsClient::DeleteEventBus, request, handler, context);
        }

        /**
         * <p>This operation is used by SaaS partners to delete a partner event source.
         * This operation is not used by Amazon Web Services customers.</p> <p>When you
         * delete an event source, the status of the corresponding partner event bus in the
         * Amazon Web Services customer account becomes DELETED.</p> <p/><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/events-2015-10-07/DeletePartnerEventSource">AWS
         * API Reference</a></p>
         */
        virtual Model::DeletePartnerEventSourceOutcome DeletePartnerEventSource(const Model::DeletePartnerEventSourceRequest& request) const;

        /**
         * A Callable wrapper for DeletePartnerEventSource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeletePartnerEventSourceRequestT = Model::DeletePartnerEventSourceRequest>
        Model::DeletePartnerEventSourceOutcomeCallable DeletePartnerEventSourceCallable(const DeletePartnerEventSourceRequestT& request) const
        {
            return SubmitCallable(&CloudWatchEventsClient::DeletePartnerEventSource, request);
        }

        /**
         * An Async wrapper for DeletePartnerEventSource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeletePartnerEventSourceRequestT = Model::DeletePartnerEventSourceRequest>
        void DeletePartnerEventSourceAsync(const DeletePartnerEventSourceRequestT& request, const DeletePartnerEventSourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudWatchEventsClient::DeletePartnerEventSource, request, handler, context);
        }

        /**
         * <p>Deletes the specified rule.</p> <p>Before you can delete the rule, you must
         * remove all targets, using <a
         * href="https://docs.aws.amazon.com/eventbridge/latest/APIReference/API_RemoveTargets.html">RemoveTargets</a>.</p>
         * <p>When you delete a rule, incoming events might continue to match to the
         * deleted rule. Allow a short period of time for changes to take effect.</p> <p>If
         * you call delete rule multiple times for the same rule, all calls will succeed.
         * When you call delete rule for a non-existent custom eventbus,
         * <code>ResourceNotFoundException</code> is returned.</p> <p>Managed rules are
         * rules created and managed by another Amazon Web Services service on your behalf.
         * These rules are created by those other Amazon Web Services services to support
         * functionality in those services. You can delete these rules using the
         * <code>Force</code> option, but you should do so only if you are sure the other
         * service is not still using that rule.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/events-2015-10-07/DeleteRule">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteRuleOutcome DeleteRule(const Model::DeleteRuleRequest& request) const;

        /**
         * A Callable wrapper for DeleteRule that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteRuleRequestT = Model::DeleteRuleRequest>
        Model::DeleteRuleOutcomeCallable DeleteRuleCallable(const DeleteRuleRequestT& request) const
        {
            return SubmitCallable(&CloudWatchEventsClient::DeleteRule, request);
        }

        /**
         * An Async wrapper for DeleteRule that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteRuleRequestT = Model::DeleteRuleRequest>
        void DeleteRuleAsync(const DeleteRuleRequestT& request, const DeleteRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudWatchEventsClient::DeleteRule, request, handler, context);
        }

        /**
         * <p>Retrieves details about an API destination.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/events-2015-10-07/DescribeApiDestination">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeApiDestinationOutcome DescribeApiDestination(const Model::DescribeApiDestinationRequest& request) const;

        /**
         * A Callable wrapper for DescribeApiDestination that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeApiDestinationRequestT = Model::DescribeApiDestinationRequest>
        Model::DescribeApiDestinationOutcomeCallable DescribeApiDestinationCallable(const DescribeApiDestinationRequestT& request) const
        {
            return SubmitCallable(&CloudWatchEventsClient::DescribeApiDestination, request);
        }

        /**
         * An Async wrapper for DescribeApiDestination that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeApiDestinationRequestT = Model::DescribeApiDestinationRequest>
        void DescribeApiDestinationAsync(const DescribeApiDestinationRequestT& request, const DescribeApiDestinationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudWatchEventsClient::DescribeApiDestination, request, handler, context);
        }

        /**
         * <p>Retrieves details about an archive.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/events-2015-10-07/DescribeArchive">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeArchiveOutcome DescribeArchive(const Model::DescribeArchiveRequest& request) const;

        /**
         * A Callable wrapper for DescribeArchive that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeArchiveRequestT = Model::DescribeArchiveRequest>
        Model::DescribeArchiveOutcomeCallable DescribeArchiveCallable(const DescribeArchiveRequestT& request) const
        {
            return SubmitCallable(&CloudWatchEventsClient::DescribeArchive, request);
        }

        /**
         * An Async wrapper for DescribeArchive that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeArchiveRequestT = Model::DescribeArchiveRequest>
        void DescribeArchiveAsync(const DescribeArchiveRequestT& request, const DescribeArchiveResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudWatchEventsClient::DescribeArchive, request, handler, context);
        }

        /**
         * <p>Retrieves details about a connection.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/events-2015-10-07/DescribeConnection">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeConnectionOutcome DescribeConnection(const Model::DescribeConnectionRequest& request) const;

        /**
         * A Callable wrapper for DescribeConnection that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeConnectionRequestT = Model::DescribeConnectionRequest>
        Model::DescribeConnectionOutcomeCallable DescribeConnectionCallable(const DescribeConnectionRequestT& request) const
        {
            return SubmitCallable(&CloudWatchEventsClient::DescribeConnection, request);
        }

        /**
         * An Async wrapper for DescribeConnection that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeConnectionRequestT = Model::DescribeConnectionRequest>
        void DescribeConnectionAsync(const DescribeConnectionRequestT& request, const DescribeConnectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudWatchEventsClient::DescribeConnection, request, handler, context);
        }

        /**
         * <p>Displays details about an event bus in your account. This can include the
         * external Amazon Web Services accounts that are permitted to write events to your
         * default event bus, and the associated policy. For custom event buses and partner
         * event buses, it displays the name, ARN, policy, state, and creation time.</p>
         * <p> To enable your account to receive events from other accounts on its default
         * event bus, use <a
         * href="https://docs.aws.amazon.com/eventbridge/latest/APIReference/API_PutPermission.html">PutPermission</a>.</p>
         * <p>For more information about partner event buses, see <a
         * href="https://docs.aws.amazon.com/eventbridge/latest/APIReference/API_CreateEventBus.html">CreateEventBus</a>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/events-2015-10-07/DescribeEventBus">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeEventBusOutcome DescribeEventBus(const Model::DescribeEventBusRequest& request) const;

        /**
         * A Callable wrapper for DescribeEventBus that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeEventBusRequestT = Model::DescribeEventBusRequest>
        Model::DescribeEventBusOutcomeCallable DescribeEventBusCallable(const DescribeEventBusRequestT& request) const
        {
            return SubmitCallable(&CloudWatchEventsClient::DescribeEventBus, request);
        }

        /**
         * An Async wrapper for DescribeEventBus that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeEventBusRequestT = Model::DescribeEventBusRequest>
        void DescribeEventBusAsync(const DescribeEventBusRequestT& request, const DescribeEventBusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudWatchEventsClient::DescribeEventBus, request, handler, context);
        }

        /**
         * <p>This operation lists details about a partner event source that is shared with
         * your account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/events-2015-10-07/DescribeEventSource">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeEventSourceOutcome DescribeEventSource(const Model::DescribeEventSourceRequest& request) const;

        /**
         * A Callable wrapper for DescribeEventSource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeEventSourceRequestT = Model::DescribeEventSourceRequest>
        Model::DescribeEventSourceOutcomeCallable DescribeEventSourceCallable(const DescribeEventSourceRequestT& request) const
        {
            return SubmitCallable(&CloudWatchEventsClient::DescribeEventSource, request);
        }

        /**
         * An Async wrapper for DescribeEventSource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeEventSourceRequestT = Model::DescribeEventSourceRequest>
        void DescribeEventSourceAsync(const DescribeEventSourceRequestT& request, const DescribeEventSourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudWatchEventsClient::DescribeEventSource, request, handler, context);
        }

        /**
         * <p>An SaaS partner can use this operation to list details about a partner event
         * source that they have created. Amazon Web Services customers do not use this
         * operation. Instead, Amazon Web Services customers can use <a
         * href="https://docs.aws.amazon.com/eventbridge/latest/APIReference/API_DescribeEventSource.html">DescribeEventSource</a>
         * to see details about a partner event source that is shared with
         * them.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/events-2015-10-07/DescribePartnerEventSource">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribePartnerEventSourceOutcome DescribePartnerEventSource(const Model::DescribePartnerEventSourceRequest& request) const;

        /**
         * A Callable wrapper for DescribePartnerEventSource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribePartnerEventSourceRequestT = Model::DescribePartnerEventSourceRequest>
        Model::DescribePartnerEventSourceOutcomeCallable DescribePartnerEventSourceCallable(const DescribePartnerEventSourceRequestT& request) const
        {
            return SubmitCallable(&CloudWatchEventsClient::DescribePartnerEventSource, request);
        }

        /**
         * An Async wrapper for DescribePartnerEventSource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribePartnerEventSourceRequestT = Model::DescribePartnerEventSourceRequest>
        void DescribePartnerEventSourceAsync(const DescribePartnerEventSourceRequestT& request, const DescribePartnerEventSourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudWatchEventsClient::DescribePartnerEventSource, request, handler, context);
        }

        /**
         * <p>Retrieves details about a replay. Use <code>DescribeReplay</code> to
         * determine the progress of a running replay. A replay processes events to replay
         * based on the time in the event, and replays them using 1 minute intervals. If
         * you use <code>StartReplay</code> and specify an <code>EventStartTime</code> and
         * an <code>EventEndTime</code> that covers a 20 minute time range, the events are
         * replayed from the first minute of that 20 minute range first. Then the events
         * from the second minute are replayed. You can use <code>DescribeReplay</code> to
         * determine the progress of a replay. The value returned for
         * <code>EventLastReplayedTime</code> indicates the time within the specified time
         * range associated with the last event replayed.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/events-2015-10-07/DescribeReplay">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeReplayOutcome DescribeReplay(const Model::DescribeReplayRequest& request) const;

        /**
         * A Callable wrapper for DescribeReplay that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeReplayRequestT = Model::DescribeReplayRequest>
        Model::DescribeReplayOutcomeCallable DescribeReplayCallable(const DescribeReplayRequestT& request) const
        {
            return SubmitCallable(&CloudWatchEventsClient::DescribeReplay, request);
        }

        /**
         * An Async wrapper for DescribeReplay that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeReplayRequestT = Model::DescribeReplayRequest>
        void DescribeReplayAsync(const DescribeReplayRequestT& request, const DescribeReplayResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudWatchEventsClient::DescribeReplay, request, handler, context);
        }

        /**
         * <p>Describes the specified rule.</p> <p>DescribeRule does not list the targets
         * of a rule. To see the targets associated with a rule, use <a
         * href="https://docs.aws.amazon.com/eventbridge/latest/APIReference/API_ListTargetsByRule.html">ListTargetsByRule</a>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/events-2015-10-07/DescribeRule">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeRuleOutcome DescribeRule(const Model::DescribeRuleRequest& request) const;

        /**
         * A Callable wrapper for DescribeRule that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeRuleRequestT = Model::DescribeRuleRequest>
        Model::DescribeRuleOutcomeCallable DescribeRuleCallable(const DescribeRuleRequestT& request) const
        {
            return SubmitCallable(&CloudWatchEventsClient::DescribeRule, request);
        }

        /**
         * An Async wrapper for DescribeRule that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeRuleRequestT = Model::DescribeRuleRequest>
        void DescribeRuleAsync(const DescribeRuleRequestT& request, const DescribeRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudWatchEventsClient::DescribeRule, request, handler, context);
        }

        /**
         * <p>Disables the specified rule. A disabled rule won't match any events, and
         * won't self-trigger if it has a schedule expression.</p> <p>When you disable a
         * rule, incoming events might continue to match to the disabled rule. Allow a
         * short period of time for changes to take effect.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/events-2015-10-07/DisableRule">AWS
         * API Reference</a></p>
         */
        virtual Model::DisableRuleOutcome DisableRule(const Model::DisableRuleRequest& request) const;

        /**
         * A Callable wrapper for DisableRule that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DisableRuleRequestT = Model::DisableRuleRequest>
        Model::DisableRuleOutcomeCallable DisableRuleCallable(const DisableRuleRequestT& request) const
        {
            return SubmitCallable(&CloudWatchEventsClient::DisableRule, request);
        }

        /**
         * An Async wrapper for DisableRule that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DisableRuleRequestT = Model::DisableRuleRequest>
        void DisableRuleAsync(const DisableRuleRequestT& request, const DisableRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudWatchEventsClient::DisableRule, request, handler, context);
        }

        /**
         * <p>Enables the specified rule. If the rule does not exist, the operation
         * fails.</p> <p>When you enable a rule, incoming events might not immediately
         * start matching to a newly enabled rule. Allow a short period of time for changes
         * to take effect.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/events-2015-10-07/EnableRule">AWS
         * API Reference</a></p>
         */
        virtual Model::EnableRuleOutcome EnableRule(const Model::EnableRuleRequest& request) const;

        /**
         * A Callable wrapper for EnableRule that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename EnableRuleRequestT = Model::EnableRuleRequest>
        Model::EnableRuleOutcomeCallable EnableRuleCallable(const EnableRuleRequestT& request) const
        {
            return SubmitCallable(&CloudWatchEventsClient::EnableRule, request);
        }

        /**
         * An Async wrapper for EnableRule that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename EnableRuleRequestT = Model::EnableRuleRequest>
        void EnableRuleAsync(const EnableRuleRequestT& request, const EnableRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudWatchEventsClient::EnableRule, request, handler, context);
        }

        /**
         * <p>Retrieves a list of API destination in the account in the current
         * Region.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/events-2015-10-07/ListApiDestinations">AWS
         * API Reference</a></p>
         */
        virtual Model::ListApiDestinationsOutcome ListApiDestinations(const Model::ListApiDestinationsRequest& request) const;

        /**
         * A Callable wrapper for ListApiDestinations that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListApiDestinationsRequestT = Model::ListApiDestinationsRequest>
        Model::ListApiDestinationsOutcomeCallable ListApiDestinationsCallable(const ListApiDestinationsRequestT& request) const
        {
            return SubmitCallable(&CloudWatchEventsClient::ListApiDestinations, request);
        }

        /**
         * An Async wrapper for ListApiDestinations that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListApiDestinationsRequestT = Model::ListApiDestinationsRequest>
        void ListApiDestinationsAsync(const ListApiDestinationsRequestT& request, const ListApiDestinationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudWatchEventsClient::ListApiDestinations, request, handler, context);
        }

        /**
         * <p>Lists your archives. You can either list all the archives or you can provide
         * a prefix to match to the archive names. Filter parameters are
         * exclusive.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/events-2015-10-07/ListArchives">AWS
         * API Reference</a></p>
         */
        virtual Model::ListArchivesOutcome ListArchives(const Model::ListArchivesRequest& request) const;

        /**
         * A Callable wrapper for ListArchives that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListArchivesRequestT = Model::ListArchivesRequest>
        Model::ListArchivesOutcomeCallable ListArchivesCallable(const ListArchivesRequestT& request) const
        {
            return SubmitCallable(&CloudWatchEventsClient::ListArchives, request);
        }

        /**
         * An Async wrapper for ListArchives that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListArchivesRequestT = Model::ListArchivesRequest>
        void ListArchivesAsync(const ListArchivesRequestT& request, const ListArchivesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudWatchEventsClient::ListArchives, request, handler, context);
        }

        /**
         * <p>Retrieves a list of connections from the account.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/events-2015-10-07/ListConnections">AWS
         * API Reference</a></p>
         */
        virtual Model::ListConnectionsOutcome ListConnections(const Model::ListConnectionsRequest& request) const;

        /**
         * A Callable wrapper for ListConnections that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListConnectionsRequestT = Model::ListConnectionsRequest>
        Model::ListConnectionsOutcomeCallable ListConnectionsCallable(const ListConnectionsRequestT& request) const
        {
            return SubmitCallable(&CloudWatchEventsClient::ListConnections, request);
        }

        /**
         * An Async wrapper for ListConnections that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListConnectionsRequestT = Model::ListConnectionsRequest>
        void ListConnectionsAsync(const ListConnectionsRequestT& request, const ListConnectionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudWatchEventsClient::ListConnections, request, handler, context);
        }

        /**
         * <p>Lists all the event buses in your account, including the default event bus,
         * custom event buses, and partner event buses.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/events-2015-10-07/ListEventBuses">AWS
         * API Reference</a></p>
         */
        virtual Model::ListEventBusesOutcome ListEventBuses(const Model::ListEventBusesRequest& request) const;

        /**
         * A Callable wrapper for ListEventBuses that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListEventBusesRequestT = Model::ListEventBusesRequest>
        Model::ListEventBusesOutcomeCallable ListEventBusesCallable(const ListEventBusesRequestT& request) const
        {
            return SubmitCallable(&CloudWatchEventsClient::ListEventBuses, request);
        }

        /**
         * An Async wrapper for ListEventBuses that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListEventBusesRequestT = Model::ListEventBusesRequest>
        void ListEventBusesAsync(const ListEventBusesRequestT& request, const ListEventBusesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudWatchEventsClient::ListEventBuses, request, handler, context);
        }

        /**
         * <p>You can use this to see all the partner event sources that have been shared
         * with your Amazon Web Services account. For more information about partner event
         * sources, see <a
         * href="https://docs.aws.amazon.com/eventbridge/latest/APIReference/API_CreateEventBus.html">CreateEventBus</a>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/events-2015-10-07/ListEventSources">AWS
         * API Reference</a></p>
         */
        virtual Model::ListEventSourcesOutcome ListEventSources(const Model::ListEventSourcesRequest& request) const;

        /**
         * A Callable wrapper for ListEventSources that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListEventSourcesRequestT = Model::ListEventSourcesRequest>
        Model::ListEventSourcesOutcomeCallable ListEventSourcesCallable(const ListEventSourcesRequestT& request) const
        {
            return SubmitCallable(&CloudWatchEventsClient::ListEventSources, request);
        }

        /**
         * An Async wrapper for ListEventSources that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListEventSourcesRequestT = Model::ListEventSourcesRequest>
        void ListEventSourcesAsync(const ListEventSourcesRequestT& request, const ListEventSourcesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudWatchEventsClient::ListEventSources, request, handler, context);
        }

        /**
         * <p>An SaaS partner can use this operation to display the Amazon Web Services
         * account ID that a particular partner event source name is associated with. This
         * operation is not used by Amazon Web Services customers.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/events-2015-10-07/ListPartnerEventSourceAccounts">AWS
         * API Reference</a></p>
         */
        virtual Model::ListPartnerEventSourceAccountsOutcome ListPartnerEventSourceAccounts(const Model::ListPartnerEventSourceAccountsRequest& request) const;

        /**
         * A Callable wrapper for ListPartnerEventSourceAccounts that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListPartnerEventSourceAccountsRequestT = Model::ListPartnerEventSourceAccountsRequest>
        Model::ListPartnerEventSourceAccountsOutcomeCallable ListPartnerEventSourceAccountsCallable(const ListPartnerEventSourceAccountsRequestT& request) const
        {
            return SubmitCallable(&CloudWatchEventsClient::ListPartnerEventSourceAccounts, request);
        }

        /**
         * An Async wrapper for ListPartnerEventSourceAccounts that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListPartnerEventSourceAccountsRequestT = Model::ListPartnerEventSourceAccountsRequest>
        void ListPartnerEventSourceAccountsAsync(const ListPartnerEventSourceAccountsRequestT& request, const ListPartnerEventSourceAccountsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudWatchEventsClient::ListPartnerEventSourceAccounts, request, handler, context);
        }

        /**
         * <p>An SaaS partner can use this operation to list all the partner event source
         * names that they have created. This operation is not used by Amazon Web Services
         * customers.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/events-2015-10-07/ListPartnerEventSources">AWS
         * API Reference</a></p>
         */
        virtual Model::ListPartnerEventSourcesOutcome ListPartnerEventSources(const Model::ListPartnerEventSourcesRequest& request) const;

        /**
         * A Callable wrapper for ListPartnerEventSources that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListPartnerEventSourcesRequestT = Model::ListPartnerEventSourcesRequest>
        Model::ListPartnerEventSourcesOutcomeCallable ListPartnerEventSourcesCallable(const ListPartnerEventSourcesRequestT& request) const
        {
            return SubmitCallable(&CloudWatchEventsClient::ListPartnerEventSources, request);
        }

        /**
         * An Async wrapper for ListPartnerEventSources that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListPartnerEventSourcesRequestT = Model::ListPartnerEventSourcesRequest>
        void ListPartnerEventSourcesAsync(const ListPartnerEventSourcesRequestT& request, const ListPartnerEventSourcesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudWatchEventsClient::ListPartnerEventSources, request, handler, context);
        }

        /**
         * <p>Lists your replays. You can either list all the replays or you can provide a
         * prefix to match to the replay names. Filter parameters are
         * exclusive.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/events-2015-10-07/ListReplays">AWS
         * API Reference</a></p>
         */
        virtual Model::ListReplaysOutcome ListReplays(const Model::ListReplaysRequest& request) const;

        /**
         * A Callable wrapper for ListReplays that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListReplaysRequestT = Model::ListReplaysRequest>
        Model::ListReplaysOutcomeCallable ListReplaysCallable(const ListReplaysRequestT& request) const
        {
            return SubmitCallable(&CloudWatchEventsClient::ListReplays, request);
        }

        /**
         * An Async wrapper for ListReplays that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListReplaysRequestT = Model::ListReplaysRequest>
        void ListReplaysAsync(const ListReplaysRequestT& request, const ListReplaysResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudWatchEventsClient::ListReplays, request, handler, context);
        }

        /**
         * <p>Lists the rules for the specified target. You can see which of the rules in
         * Amazon EventBridge can invoke a specific target in your account.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/events-2015-10-07/ListRuleNamesByTarget">AWS
         * API Reference</a></p>
         */
        virtual Model::ListRuleNamesByTargetOutcome ListRuleNamesByTarget(const Model::ListRuleNamesByTargetRequest& request) const;

        /**
         * A Callable wrapper for ListRuleNamesByTarget that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListRuleNamesByTargetRequestT = Model::ListRuleNamesByTargetRequest>
        Model::ListRuleNamesByTargetOutcomeCallable ListRuleNamesByTargetCallable(const ListRuleNamesByTargetRequestT& request) const
        {
            return SubmitCallable(&CloudWatchEventsClient::ListRuleNamesByTarget, request);
        }

        /**
         * An Async wrapper for ListRuleNamesByTarget that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListRuleNamesByTargetRequestT = Model::ListRuleNamesByTargetRequest>
        void ListRuleNamesByTargetAsync(const ListRuleNamesByTargetRequestT& request, const ListRuleNamesByTargetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudWatchEventsClient::ListRuleNamesByTarget, request, handler, context);
        }

        /**
         * <p>Lists your Amazon EventBridge rules. You can either list all the rules or you
         * can provide a prefix to match to the rule names.</p> <p>ListRules does not list
         * the targets of a rule. To see the targets associated with a rule, use <a
         * href="https://docs.aws.amazon.com/eventbridge/latest/APIReference/API_ListTargetsByRule.html">ListTargetsByRule</a>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/events-2015-10-07/ListRules">AWS
         * API Reference</a></p>
         */
        virtual Model::ListRulesOutcome ListRules(const Model::ListRulesRequest& request) const;

        /**
         * A Callable wrapper for ListRules that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListRulesRequestT = Model::ListRulesRequest>
        Model::ListRulesOutcomeCallable ListRulesCallable(const ListRulesRequestT& request) const
        {
            return SubmitCallable(&CloudWatchEventsClient::ListRules, request);
        }

        /**
         * An Async wrapper for ListRules that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListRulesRequestT = Model::ListRulesRequest>
        void ListRulesAsync(const ListRulesRequestT& request, const ListRulesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudWatchEventsClient::ListRules, request, handler, context);
        }

        /**
         * <p>Displays the tags associated with an EventBridge resource. In EventBridge,
         * rules and event buses can be tagged.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/events-2015-10-07/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;

        /**
         * A Callable wrapper for ListTagsForResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const ListTagsForResourceRequestT& request) const
        {
            return SubmitCallable(&CloudWatchEventsClient::ListTagsForResource, request);
        }

        /**
         * An Async wrapper for ListTagsForResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        void ListTagsForResourceAsync(const ListTagsForResourceRequestT& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudWatchEventsClient::ListTagsForResource, request, handler, context);
        }

        /**
         * <p>Lists the targets assigned to the specified rule.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/events-2015-10-07/ListTargetsByRule">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTargetsByRuleOutcome ListTargetsByRule(const Model::ListTargetsByRuleRequest& request) const;

        /**
         * A Callable wrapper for ListTargetsByRule that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListTargetsByRuleRequestT = Model::ListTargetsByRuleRequest>
        Model::ListTargetsByRuleOutcomeCallable ListTargetsByRuleCallable(const ListTargetsByRuleRequestT& request) const
        {
            return SubmitCallable(&CloudWatchEventsClient::ListTargetsByRule, request);
        }

        /**
         * An Async wrapper for ListTargetsByRule that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListTargetsByRuleRequestT = Model::ListTargetsByRuleRequest>
        void ListTargetsByRuleAsync(const ListTargetsByRuleRequestT& request, const ListTargetsByRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudWatchEventsClient::ListTargetsByRule, request, handler, context);
        }

        /**
         * <p>Sends custom events to Amazon EventBridge so that they can be matched to
         * rules.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/events-2015-10-07/PutEvents">AWS
         * API Reference</a></p>
         */
        virtual Model::PutEventsOutcome PutEvents(const Model::PutEventsRequest& request) const;

        /**
         * A Callable wrapper for PutEvents that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename PutEventsRequestT = Model::PutEventsRequest>
        Model::PutEventsOutcomeCallable PutEventsCallable(const PutEventsRequestT& request) const
        {
            return SubmitCallable(&CloudWatchEventsClient::PutEvents, request);
        }

        /**
         * An Async wrapper for PutEvents that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename PutEventsRequestT = Model::PutEventsRequest>
        void PutEventsAsync(const PutEventsRequestT& request, const PutEventsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudWatchEventsClient::PutEvents, request, handler, context);
        }

        /**
         * <p>This is used by SaaS partners to write events to a customer's partner event
         * bus. Amazon Web Services customers do not use this operation.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/events-2015-10-07/PutPartnerEvents">AWS
         * API Reference</a></p>
         */
        virtual Model::PutPartnerEventsOutcome PutPartnerEvents(const Model::PutPartnerEventsRequest& request) const;

        /**
         * A Callable wrapper for PutPartnerEvents that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename PutPartnerEventsRequestT = Model::PutPartnerEventsRequest>
        Model::PutPartnerEventsOutcomeCallable PutPartnerEventsCallable(const PutPartnerEventsRequestT& request) const
        {
            return SubmitCallable(&CloudWatchEventsClient::PutPartnerEvents, request);
        }

        /**
         * An Async wrapper for PutPartnerEvents that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename PutPartnerEventsRequestT = Model::PutPartnerEventsRequest>
        void PutPartnerEventsAsync(const PutPartnerEventsRequestT& request, const PutPartnerEventsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudWatchEventsClient::PutPartnerEvents, request, handler, context);
        }

        /**
         * <p>Running <code>PutPermission</code> permits the specified Amazon Web Services
         * account or Amazon Web Services organization to put events to the specified
         * <i>event bus</i>. Amazon EventBridge (CloudWatch Events) rules in your account
         * are triggered by these events arriving to an event bus in your account. </p>
         * <p>For another account to send events to your account, that external account
         * must have an EventBridge rule with your account's event bus as a target.</p>
         * <p>To enable multiple Amazon Web Services accounts to put events to your event
         * bus, run <code>PutPermission</code> once for each of these accounts. Or, if all
         * the accounts are members of the same Amazon Web Services organization, you can
         * run <code>PutPermission</code> once specifying <code>Principal</code> as "*" and
         * specifying the Amazon Web Services organization ID in <code>Condition</code>, to
         * grant permissions to all accounts in that organization.</p> <p>If you grant
         * permissions using an organization, then accounts in that organization must
         * specify a <code>RoleArn</code> with proper permissions when they use
         * <code>PutTarget</code> to add your account's event bus as a target. For more
         * information, see <a
         * href="https://docs.aws.amazon.com/eventbridge/latest/userguide/eventbridge-cross-account-event-delivery.html">Sending
         * and Receiving Events Between Amazon Web Services Accounts</a> in the <i>Amazon
         * EventBridge User Guide</i>.</p> <p>The permission policy on the event bus cannot
         * exceed 10 KB in size.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/events-2015-10-07/PutPermission">AWS
         * API Reference</a></p>
         */
        virtual Model::PutPermissionOutcome PutPermission(const Model::PutPermissionRequest& request) const;

        /**
         * A Callable wrapper for PutPermission that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename PutPermissionRequestT = Model::PutPermissionRequest>
        Model::PutPermissionOutcomeCallable PutPermissionCallable(const PutPermissionRequestT& request) const
        {
            return SubmitCallable(&CloudWatchEventsClient::PutPermission, request);
        }

        /**
         * An Async wrapper for PutPermission that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename PutPermissionRequestT = Model::PutPermissionRequest>
        void PutPermissionAsync(const PutPermissionRequestT& request, const PutPermissionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudWatchEventsClient::PutPermission, request, handler, context);
        }

        /**
         * <p>Creates or updates the specified rule. Rules are enabled by default, or based
         * on value of the state. You can disable a rule using <a
         * href="https://docs.aws.amazon.com/eventbridge/latest/APIReference/API_DisableRule.html">DisableRule</a>.</p>
         * <p>A single rule watches for events from a single event bus. Events generated by
         * Amazon Web Services services go to your account's default event bus. Events
         * generated by SaaS partner services or applications go to the matching partner
         * event bus. If you have custom applications or services, you can specify whether
         * their events go to your default event bus or a custom event bus that you have
         * created. For more information, see <a
         * href="https://docs.aws.amazon.com/eventbridge/latest/APIReference/API_CreateEventBus.html">CreateEventBus</a>.</p>
         * <p>If you are updating an existing rule, the rule is replaced with what you
         * specify in this <code>PutRule</code> command. If you omit arguments in
         * <code>PutRule</code>, the old values for those arguments are not kept. Instead,
         * they are replaced with null values.</p> <p>When you create or update a rule,
         * incoming events might not immediately start matching to new or updated rules.
         * Allow a short period of time for changes to take effect.</p> <p>A rule must
         * contain at least an EventPattern or ScheduleExpression. Rules with EventPatterns
         * are triggered when a matching event is observed. Rules with ScheduleExpressions
         * self-trigger based on the given schedule. A rule can have both an EventPattern
         * and a ScheduleExpression, in which case the rule triggers on matching events as
         * well as on a schedule.</p> <p>When you initially create a rule, you can
         * optionally assign one or more tags to the rule. Tags can help you organize and
         * categorize your resources. You can also use them to scope user permissions, by
         * granting a user permission to access or change only rules with certain tag
         * values. To use the <code>PutRule</code> operation and assign tags, you must have
         * both the <code>events:PutRule</code> and <code>events:TagResource</code>
         * permissions.</p> <p>If you are updating an existing rule, any tags you specify
         * in the <code>PutRule</code> operation are ignored. To update the tags of an
         * existing rule, use <a
         * href="https://docs.aws.amazon.com/eventbridge/latest/APIReference/API_TagResource.html">TagResource</a>
         * and <a
         * href="https://docs.aws.amazon.com/eventbridge/latest/APIReference/API_UntagResource.html">UntagResource</a>.</p>
         * <p>Most services in Amazon Web Services treat : or / as the same character in
         * Amazon Resource Names (ARNs). However, EventBridge uses an exact match in event
         * patterns and rules. Be sure to use the correct ARN characters when creating
         * event patterns so that they match the ARN syntax in the event you want to
         * match.</p> <p>In EventBridge, it is possible to create rules that lead to
         * infinite loops, where a rule is fired repeatedly. For example, a rule might
         * detect that ACLs have changed on an S3 bucket, and trigger software to change
         * them to the desired state. If the rule is not written carefully, the subsequent
         * change to the ACLs fires the rule again, creating an infinite loop.</p> <p>To
         * prevent this, write the rules so that the triggered actions do not re-fire the
         * same rule. For example, your rule could fire only if ACLs are found to be in a
         * bad state, instead of after any change. </p> <p>An infinite loop can quickly
         * cause higher than expected charges. We recommend that you use budgeting, which
         * alerts you when charges exceed your specified limit. For more information, see
         * <a
         * href="https://docs.aws.amazon.com/awsaccountbilling/latest/aboutv2/budgets-managing-costs.html">Managing
         * Your Costs with Budgets</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/events-2015-10-07/PutRule">AWS API
         * Reference</a></p>
         */
        virtual Model::PutRuleOutcome PutRule(const Model::PutRuleRequest& request) const;

        /**
         * A Callable wrapper for PutRule that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename PutRuleRequestT = Model::PutRuleRequest>
        Model::PutRuleOutcomeCallable PutRuleCallable(const PutRuleRequestT& request) const
        {
            return SubmitCallable(&CloudWatchEventsClient::PutRule, request);
        }

        /**
         * An Async wrapper for PutRule that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename PutRuleRequestT = Model::PutRuleRequest>
        void PutRuleAsync(const PutRuleRequestT& request, const PutRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudWatchEventsClient::PutRule, request, handler, context);
        }

        /**
         * <p>Adds the specified targets to the specified rule, or updates the targets if
         * they are already associated with the rule.</p> <p>Targets are the resources that
         * are invoked when a rule is triggered.</p> <p>You can configure the following as
         * targets for Events:</p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/eventbridge/latest/userguide/eb-api-destinations.html">API
         * destination</a> </p> </li> <li> <p>Amazon API Gateway REST API endpoints</p>
         * </li> <li> <p>API Gateway</p> </li> <li> <p>Batch job queue</p> </li> <li>
         * <p>CloudWatch Logs group</p> </li> <li> <p>CodeBuild project</p> </li> <li>
         * <p>CodePipeline</p> </li> <li> <p>Amazon EC2 <code>CreateSnapshot</code> API
         * call</p> </li> <li> <p>Amazon EC2 <code>RebootInstances</code> API call</p>
         * </li> <li> <p>Amazon EC2 <code>StopInstances</code> API call</p> </li> <li>
         * <p>Amazon EC2 <code>TerminateInstances</code> API call</p> </li> <li> <p>Amazon
         * ECS tasks</p> </li> <li> <p>Event bus in a different Amazon Web Services account
         * or Region.</p> <p>You can use an event bus in the US East (N. Virginia)
         * us-east-1, US West (Oregon) us-west-2, or Europe (Ireland) eu-west-1 Regions as
         * a target for a rule.</p> </li> <li> <p>Firehose delivery stream (Kinesis Data
         * Firehose)</p> </li> <li> <p>Inspector assessment template (Amazon Inspector)</p>
         * </li> <li> <p>Kinesis stream (Kinesis Data Stream)</p> </li> <li> <p>Lambda
         * function</p> </li> <li> <p>Redshift clusters (Data API statement execution)</p>
         * </li> <li> <p>Amazon SNS topic</p> </li> <li> <p>Amazon SQS queues (includes
         * FIFO queues</p> </li> <li> <p>SSM Automation</p> </li> <li> <p>SSM OpsItem</p>
         * </li> <li> <p>SSM Run Command</p> </li> <li> <p>Step Functions state
         * machines</p> </li> </ul> <p>Creating rules with built-in targets is supported
         * only in the Amazon Web Services Management Console. The built-in targets are
         * <code>EC2 CreateSnapshot API call</code>, <code>EC2 RebootInstances API
         * call</code>, <code>EC2 StopInstances API call</code>, and <code>EC2
         * TerminateInstances API call</code>. </p> <p>For some target types,
         * <code>PutTargets</code> provides target-specific parameters. If the target is a
         * Kinesis data stream, you can optionally specify which shard the event goes to by
         * using the <code>KinesisParameters</code> argument. To invoke a command on
         * multiple EC2 instances with one rule, you can use the
         * <code>RunCommandParameters</code> field.</p> <p>To be able to make API calls
         * against the resources that you own, Amazon EventBridge needs the appropriate
         * permissions. For Lambda and Amazon SNS resources, EventBridge relies on
         * resource-based policies. For EC2 instances, Kinesis Data Streams, Step Functions
         * state machines and API Gateway REST APIs, EventBridge relies on IAM roles that
         * you specify in the <code>RoleARN</code> argument in <code>PutTargets</code>. For
         * more information, see <a
         * href="https://docs.aws.amazon.com/eventbridge/latest/userguide/auth-and-access-control-eventbridge.html">Authentication
         * and Access Control</a> in the <i>Amazon EventBridge User Guide</i>.</p> <p>If
         * another Amazon Web Services account is in the same region and has granted you
         * permission (using <code>PutPermission</code>), you can send events to that
         * account. Set that account's event bus as a target of the rules in your account.
         * To send the matched events to the other account, specify that account's event
         * bus as the <code>Arn</code> value when you run <code>PutTargets</code>. If your
         * account sends events to another account, your account is charged for each sent
         * event. Each event sent to another account is charged as a custom event. The
         * account receiving the event is not charged. For more information, see <a
         * href="http://aws.amazon.com/eventbridge/pricing/">Amazon EventBridge
         * Pricing</a>.</p>  <p> <code>Input</code>, <code>InputPath</code>, and
         * <code>InputTransformer</code> are not available with <code>PutTarget</code> if
         * the target is an event bus of a different Amazon Web Services account.</p>
         *  <p>If you are setting the event bus of another account as the target,
         * and that account granted permission to your account through an organization
         * instead of directly by the account ID, then you must specify a
         * <code>RoleArn</code> with proper permissions in the <code>Target</code>
         * structure. For more information, see <a
         * href="https://docs.aws.amazon.com/eventbridge/latest/userguide/eventbridge-cross-account-event-delivery.html">Sending
         * and Receiving Events Between Amazon Web Services Accounts</a> in the <i>Amazon
         * EventBridge User Guide</i>.</p> <p>For more information about enabling
         * cross-account events, see <a
         * href="https://docs.aws.amazon.com/eventbridge/latest/APIReference/API_PutPermission.html">PutPermission</a>.</p>
         * <p> <b>Input</b>, <b>InputPath</b>, and <b>InputTransformer</b> are mutually
         * exclusive and optional parameters of a target. When a rule is triggered due to a
         * matched event:</p> <ul> <li> <p>If none of the following arguments are specified
         * for a target, then the entire event is passed to the target in JSON format
         * (unless the target is Amazon EC2 Run Command or Amazon ECS task, in which case
         * nothing from the event is passed to the target).</p> </li> <li> <p>If
         * <b>Input</b> is specified in the form of valid JSON, then the matched event is
         * overridden with this constant.</p> </li> <li> <p>If <b>InputPath</b> is
         * specified in the form of JSONPath (for example, <code>$.detail</code>), then
         * only the part of the event specified in the path is passed to the target (for
         * example, only the detail part of the event is passed).</p> </li> <li> <p>If
         * <b>InputTransformer</b> is specified, then one or more specified JSONPaths are
         * extracted from the event and used as values in a template that you specify as
         * the input to the target.</p> </li> </ul> <p>When you specify
         * <code>InputPath</code> or <code>InputTransformer</code>, you must use JSON dot
         * notation, not bracket notation.</p> <p>When you add targets to a rule and the
         * associated rule triggers soon after, new or updated targets might not be
         * immediately invoked. Allow a short period of time for changes to take
         * effect.</p> <p>This action can partially fail if too many requests are made at
         * the same time. If that happens, <code>FailedEntryCount</code> is non-zero in the
         * response and each entry in <code>FailedEntries</code> provides the ID of the
         * failed target and the error code.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/events-2015-10-07/PutTargets">AWS
         * API Reference</a></p>
         */
        virtual Model::PutTargetsOutcome PutTargets(const Model::PutTargetsRequest& request) const;

        /**
         * A Callable wrapper for PutTargets that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename PutTargetsRequestT = Model::PutTargetsRequest>
        Model::PutTargetsOutcomeCallable PutTargetsCallable(const PutTargetsRequestT& request) const
        {
            return SubmitCallable(&CloudWatchEventsClient::PutTargets, request);
        }

        /**
         * An Async wrapper for PutTargets that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename PutTargetsRequestT = Model::PutTargetsRequest>
        void PutTargetsAsync(const PutTargetsRequestT& request, const PutTargetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudWatchEventsClient::PutTargets, request, handler, context);
        }

        /**
         * <p>Revokes the permission of another Amazon Web Services account to be able to
         * put events to the specified event bus. Specify the account to revoke by the
         * <code>StatementId</code> value that you associated with the account when you
         * granted it permission with <code>PutPermission</code>. You can find the
         * <code>StatementId</code> by using <a
         * href="https://docs.aws.amazon.com/eventbridge/latest/APIReference/API_DescribeEventBus.html">DescribeEventBus</a>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/events-2015-10-07/RemovePermission">AWS
         * API Reference</a></p>
         */
        virtual Model::RemovePermissionOutcome RemovePermission(const Model::RemovePermissionRequest& request) const;

        /**
         * A Callable wrapper for RemovePermission that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename RemovePermissionRequestT = Model::RemovePermissionRequest>
        Model::RemovePermissionOutcomeCallable RemovePermissionCallable(const RemovePermissionRequestT& request) const
        {
            return SubmitCallable(&CloudWatchEventsClient::RemovePermission, request);
        }

        /**
         * An Async wrapper for RemovePermission that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename RemovePermissionRequestT = Model::RemovePermissionRequest>
        void RemovePermissionAsync(const RemovePermissionRequestT& request, const RemovePermissionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudWatchEventsClient::RemovePermission, request, handler, context);
        }

        /**
         * <p>Removes the specified targets from the specified rule. When the rule is
         * triggered, those targets are no longer be invoked.</p> <p>When you remove a
         * target, when the associated rule triggers, removed targets might continue to be
         * invoked. Allow a short period of time for changes to take effect.</p> <p>This
         * action can partially fail if too many requests are made at the same time. If
         * that happens, <code>FailedEntryCount</code> is non-zero in the response and each
         * entry in <code>FailedEntries</code> provides the ID of the failed target and the
         * error code.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/events-2015-10-07/RemoveTargets">AWS
         * API Reference</a></p>
         */
        virtual Model::RemoveTargetsOutcome RemoveTargets(const Model::RemoveTargetsRequest& request) const;

        /**
         * A Callable wrapper for RemoveTargets that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename RemoveTargetsRequestT = Model::RemoveTargetsRequest>
        Model::RemoveTargetsOutcomeCallable RemoveTargetsCallable(const RemoveTargetsRequestT& request) const
        {
            return SubmitCallable(&CloudWatchEventsClient::RemoveTargets, request);
        }

        /**
         * An Async wrapper for RemoveTargets that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename RemoveTargetsRequestT = Model::RemoveTargetsRequest>
        void RemoveTargetsAsync(const RemoveTargetsRequestT& request, const RemoveTargetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudWatchEventsClient::RemoveTargets, request, handler, context);
        }

        /**
         * <p>Starts the specified replay. Events are not necessarily replayed in the exact
         * same order that they were added to the archive. A replay processes events to
         * replay based on the time in the event, and replays them using 1 minute
         * intervals. If you specify an <code>EventStartTime</code> and an
         * <code>EventEndTime</code> that covers a 20 minute time range, the events are
         * replayed from the first minute of that 20 minute range first. Then the events
         * from the second minute are replayed. You can use <code>DescribeReplay</code> to
         * determine the progress of a replay. The value returned for
         * <code>EventLastReplayedTime</code> indicates the time within the specified time
         * range associated with the last event replayed.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/events-2015-10-07/StartReplay">AWS
         * API Reference</a></p>
         */
        virtual Model::StartReplayOutcome StartReplay(const Model::StartReplayRequest& request) const;

        /**
         * A Callable wrapper for StartReplay that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename StartReplayRequestT = Model::StartReplayRequest>
        Model::StartReplayOutcomeCallable StartReplayCallable(const StartReplayRequestT& request) const
        {
            return SubmitCallable(&CloudWatchEventsClient::StartReplay, request);
        }

        /**
         * An Async wrapper for StartReplay that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StartReplayRequestT = Model::StartReplayRequest>
        void StartReplayAsync(const StartReplayRequestT& request, const StartReplayResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudWatchEventsClient::StartReplay, request, handler, context);
        }

        /**
         * <p>Assigns one or more tags (key-value pairs) to the specified EventBridge
         * resource. Tags can help you organize and categorize your resources. You can also
         * use them to scope user permissions by granting a user permission to access or
         * change only resources with certain tag values. In EventBridge, rules and event
         * buses can be tagged.</p> <p>Tags don't have any semantic meaning to Amazon Web
         * Services and are interpreted strictly as strings of characters.</p> <p>You can
         * use the <code>TagResource</code> action with a resource that already has tags.
         * If you specify a new tag key, this tag is appended to the list of tags
         * associated with the resource. If you specify a tag key that is already
         * associated with the resource, the new tag value that you specify replaces the
         * previous value for that tag.</p> <p>You can associate as many as 50 tags with a
         * resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/events-2015-10-07/TagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;

        /**
         * A Callable wrapper for TagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        Model::TagResourceOutcomeCallable TagResourceCallable(const TagResourceRequestT& request) const
        {
            return SubmitCallable(&CloudWatchEventsClient::TagResource, request);
        }

        /**
         * An Async wrapper for TagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        void TagResourceAsync(const TagResourceRequestT& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudWatchEventsClient::TagResource, request, handler, context);
        }

        /**
         * <p>Tests whether the specified event pattern matches the provided event.</p>
         * <p>Most services in Amazon Web Services treat : or / as the same character in
         * Amazon Resource Names (ARNs). However, EventBridge uses an exact match in event
         * patterns and rules. Be sure to use the correct ARN characters when creating
         * event patterns so that they match the ARN syntax in the event you want to
         * match.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/events-2015-10-07/TestEventPattern">AWS
         * API Reference</a></p>
         */
        virtual Model::TestEventPatternOutcome TestEventPattern(const Model::TestEventPatternRequest& request) const;

        /**
         * A Callable wrapper for TestEventPattern that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename TestEventPatternRequestT = Model::TestEventPatternRequest>
        Model::TestEventPatternOutcomeCallable TestEventPatternCallable(const TestEventPatternRequestT& request) const
        {
            return SubmitCallable(&CloudWatchEventsClient::TestEventPattern, request);
        }

        /**
         * An Async wrapper for TestEventPattern that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename TestEventPatternRequestT = Model::TestEventPatternRequest>
        void TestEventPatternAsync(const TestEventPatternRequestT& request, const TestEventPatternResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudWatchEventsClient::TestEventPattern, request, handler, context);
        }

        /**
         * <p>Removes one or more tags from the specified EventBridge resource. In Amazon
         * EventBridge (CloudWatch Events), rules and event buses can be
         * tagged.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/events-2015-10-07/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;

        /**
         * A Callable wrapper for UntagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        Model::UntagResourceOutcomeCallable UntagResourceCallable(const UntagResourceRequestT& request) const
        {
            return SubmitCallable(&CloudWatchEventsClient::UntagResource, request);
        }

        /**
         * An Async wrapper for UntagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        void UntagResourceAsync(const UntagResourceRequestT& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudWatchEventsClient::UntagResource, request, handler, context);
        }

        /**
         * <p>Updates an API destination.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/events-2015-10-07/UpdateApiDestination">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateApiDestinationOutcome UpdateApiDestination(const Model::UpdateApiDestinationRequest& request) const;

        /**
         * A Callable wrapper for UpdateApiDestination that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateApiDestinationRequestT = Model::UpdateApiDestinationRequest>
        Model::UpdateApiDestinationOutcomeCallable UpdateApiDestinationCallable(const UpdateApiDestinationRequestT& request) const
        {
            return SubmitCallable(&CloudWatchEventsClient::UpdateApiDestination, request);
        }

        /**
         * An Async wrapper for UpdateApiDestination that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateApiDestinationRequestT = Model::UpdateApiDestinationRequest>
        void UpdateApiDestinationAsync(const UpdateApiDestinationRequestT& request, const UpdateApiDestinationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudWatchEventsClient::UpdateApiDestination, request, handler, context);
        }

        /**
         * <p>Updates the specified archive.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/events-2015-10-07/UpdateArchive">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateArchiveOutcome UpdateArchive(const Model::UpdateArchiveRequest& request) const;

        /**
         * A Callable wrapper for UpdateArchive that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateArchiveRequestT = Model::UpdateArchiveRequest>
        Model::UpdateArchiveOutcomeCallable UpdateArchiveCallable(const UpdateArchiveRequestT& request) const
        {
            return SubmitCallable(&CloudWatchEventsClient::UpdateArchive, request);
        }

        /**
         * An Async wrapper for UpdateArchive that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateArchiveRequestT = Model::UpdateArchiveRequest>
        void UpdateArchiveAsync(const UpdateArchiveRequestT& request, const UpdateArchiveResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudWatchEventsClient::UpdateArchive, request, handler, context);
        }

        /**
         * <p>Updates settings for a connection.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/events-2015-10-07/UpdateConnection">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateConnectionOutcome UpdateConnection(const Model::UpdateConnectionRequest& request) const;

        /**
         * A Callable wrapper for UpdateConnection that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateConnectionRequestT = Model::UpdateConnectionRequest>
        Model::UpdateConnectionOutcomeCallable UpdateConnectionCallable(const UpdateConnectionRequestT& request) const
        {
            return SubmitCallable(&CloudWatchEventsClient::UpdateConnection, request);
        }

        /**
         * An Async wrapper for UpdateConnection that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateConnectionRequestT = Model::UpdateConnectionRequest>
        void UpdateConnectionAsync(const UpdateConnectionRequestT& request, const UpdateConnectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudWatchEventsClient::UpdateConnection, request, handler, context);
        }


      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<CloudWatchEventsEndpointProviderBase>& accessEndpointProvider();
    private:
      friend class Aws::Client::ClientWithAsyncTemplateMethods<CloudWatchEventsClient>;
      void init(const CloudWatchEventsClientConfiguration& clientConfiguration);

      CloudWatchEventsClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<CloudWatchEventsEndpointProviderBase> m_endpointProvider;
  };

} // namespace CloudWatchEvents
} // namespace Aws
