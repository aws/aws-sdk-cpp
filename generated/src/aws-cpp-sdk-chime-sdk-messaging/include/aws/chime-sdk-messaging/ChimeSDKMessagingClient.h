/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-messaging/ChimeSDKMessaging_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/chime-sdk-messaging/ChimeSDKMessagingServiceClientModel.h>

namespace Aws
{
namespace ChimeSDKMessaging
{
  /**
   * <p>The Amazon Chime SDK messaging APIs in this section allow software developers
   * to send and receive messages in custom messaging applications. These APIs depend
   * on the frameworks provided by the Amazon Chime SDK identity APIs. For more
   * information about the messaging APIs, see <a
   * href="https://docs.aws.amazon.com/chime/latest/APIReference/API_Operations_Amazon_Chime_SDK_Messaging.html">Amazon
   * Chime SDK messaging</a>.</p>
   */
  class AWS_CHIMESDKMESSAGING_API ChimeSDKMessagingClient : public Aws::Client::AWSJsonClient, public Aws::Client::ClientWithAsyncTemplateMethods<ChimeSDKMessagingClient>
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* GetServiceName();
      static const char* GetAllocationTag();

      typedef ChimeSDKMessagingClientConfiguration ClientConfigurationType;
      typedef ChimeSDKMessagingEndpointProvider EndpointProviderType;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        ChimeSDKMessagingClient(const Aws::ChimeSDKMessaging::ChimeSDKMessagingClientConfiguration& clientConfiguration = Aws::ChimeSDKMessaging::ChimeSDKMessagingClientConfiguration(),
                                std::shared_ptr<ChimeSDKMessagingEndpointProviderBase> endpointProvider = nullptr);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        ChimeSDKMessagingClient(const Aws::Auth::AWSCredentials& credentials,
                                std::shared_ptr<ChimeSDKMessagingEndpointProviderBase> endpointProvider = nullptr,
                                const Aws::ChimeSDKMessaging::ChimeSDKMessagingClientConfiguration& clientConfiguration = Aws::ChimeSDKMessaging::ChimeSDKMessagingClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        ChimeSDKMessagingClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                                std::shared_ptr<ChimeSDKMessagingEndpointProviderBase> endpointProvider = nullptr,
                                const Aws::ChimeSDKMessaging::ChimeSDKMessagingClientConfiguration& clientConfiguration = Aws::ChimeSDKMessaging::ChimeSDKMessagingClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        ChimeSDKMessagingClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        ChimeSDKMessagingClient(const Aws::Auth::AWSCredentials& credentials,
                                const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        ChimeSDKMessagingClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                                const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~ChimeSDKMessagingClient();

        /**
         * <p>Associates a channel flow with a channel. Once associated, all messages to
         * that channel go through channel flow processors. To stop processing, use the
         * <code>DisassociateChannelFlow</code> API.</p>  <p>Only administrators or
         * channel moderators can associate a channel flow. The
         * <code>x-amz-chime-bearer</code> request header is mandatory. Use the ARN of the
         * <code>AppInstanceUser</code> or <code>AppInstanceBot</code> that makes the API
         * call as the value in the header.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-messaging-2021-05-15/AssociateChannelFlow">AWS
         * API Reference</a></p>
         */
        virtual Model::AssociateChannelFlowOutcome AssociateChannelFlow(const Model::AssociateChannelFlowRequest& request) const;

        /**
         * A Callable wrapper for AssociateChannelFlow that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename AssociateChannelFlowRequestT = Model::AssociateChannelFlowRequest>
        Model::AssociateChannelFlowOutcomeCallable AssociateChannelFlowCallable(const AssociateChannelFlowRequestT& request) const
        {
            return SubmitCallable(&ChimeSDKMessagingClient::AssociateChannelFlow, request);
        }

        /**
         * An Async wrapper for AssociateChannelFlow that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename AssociateChannelFlowRequestT = Model::AssociateChannelFlowRequest>
        void AssociateChannelFlowAsync(const AssociateChannelFlowRequestT& request, const AssociateChannelFlowResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ChimeSDKMessagingClient::AssociateChannelFlow, request, handler, context);
        }

        /**
         * <p>Adds a specified number of users and bots to a channel. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-messaging-2021-05-15/BatchCreateChannelMembership">AWS
         * API Reference</a></p>
         */
        virtual Model::BatchCreateChannelMembershipOutcome BatchCreateChannelMembership(const Model::BatchCreateChannelMembershipRequest& request) const;

        /**
         * A Callable wrapper for BatchCreateChannelMembership that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename BatchCreateChannelMembershipRequestT = Model::BatchCreateChannelMembershipRequest>
        Model::BatchCreateChannelMembershipOutcomeCallable BatchCreateChannelMembershipCallable(const BatchCreateChannelMembershipRequestT& request) const
        {
            return SubmitCallable(&ChimeSDKMessagingClient::BatchCreateChannelMembership, request);
        }

        /**
         * An Async wrapper for BatchCreateChannelMembership that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename BatchCreateChannelMembershipRequestT = Model::BatchCreateChannelMembershipRequest>
        void BatchCreateChannelMembershipAsync(const BatchCreateChannelMembershipRequestT& request, const BatchCreateChannelMembershipResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ChimeSDKMessagingClient::BatchCreateChannelMembership, request, handler, context);
        }

        /**
         * <p>Calls back Amazon Chime SDK messaging with a processing response message.
         * This should be invoked from the processor Lambda. This is a developer API.</p>
         * <p>You can return one of the following processing responses:</p> <ul> <li>
         * <p>Update message content or metadata</p> </li> <li> <p>Deny a message</p> </li>
         * <li> <p>Make no changes to the message</p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-messaging-2021-05-15/ChannelFlowCallback">AWS
         * API Reference</a></p>
         */
        virtual Model::ChannelFlowCallbackOutcome ChannelFlowCallback(const Model::ChannelFlowCallbackRequest& request) const;

        /**
         * A Callable wrapper for ChannelFlowCallback that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ChannelFlowCallbackRequestT = Model::ChannelFlowCallbackRequest>
        Model::ChannelFlowCallbackOutcomeCallable ChannelFlowCallbackCallable(const ChannelFlowCallbackRequestT& request) const
        {
            return SubmitCallable(&ChimeSDKMessagingClient::ChannelFlowCallback, request);
        }

        /**
         * An Async wrapper for ChannelFlowCallback that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ChannelFlowCallbackRequestT = Model::ChannelFlowCallbackRequest>
        void ChannelFlowCallbackAsync(const ChannelFlowCallbackRequestT& request, const ChannelFlowCallbackResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ChimeSDKMessagingClient::ChannelFlowCallback, request, handler, context);
        }

        /**
         * <p>Creates a channel to which you can add users and send messages.</p> <p>
         * <b>Restriction</b>: You can't change a channel's privacy.</p>  <p>The
         * <code>x-amz-chime-bearer</code> request header is mandatory. Use the ARN of the
         * <code>AppInstanceUser</code> or <code>AppInstanceBot</code> that makes the API
         * call as the value in the header.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-messaging-2021-05-15/CreateChannel">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateChannelOutcome CreateChannel(const Model::CreateChannelRequest& request) const;

        /**
         * A Callable wrapper for CreateChannel that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateChannelRequestT = Model::CreateChannelRequest>
        Model::CreateChannelOutcomeCallable CreateChannelCallable(const CreateChannelRequestT& request) const
        {
            return SubmitCallable(&ChimeSDKMessagingClient::CreateChannel, request);
        }

        /**
         * An Async wrapper for CreateChannel that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateChannelRequestT = Model::CreateChannelRequest>
        void CreateChannelAsync(const CreateChannelRequestT& request, const CreateChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ChimeSDKMessagingClient::CreateChannel, request, handler, context);
        }

        /**
         * <p>Permanently bans a member from a channel. Moderators can't add banned members
         * to a channel. To undo a ban, you first have to <code>DeleteChannelBan</code>,
         * and then <code>CreateChannelMembership</code>. Bans are cleaned up when you
         * delete users or channels.</p> <p>If you ban a user who is already part of a
         * channel, that user is automatically kicked from the channel.</p>  <p>The
         * <code>x-amz-chime-bearer</code> request header is mandatory. Use the ARN of the
         * <code>AppInstanceUser</code> or <code>AppInstanceBot</code> that makes the API
         * call as the value in the header.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-messaging-2021-05-15/CreateChannelBan">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateChannelBanOutcome CreateChannelBan(const Model::CreateChannelBanRequest& request) const;

        /**
         * A Callable wrapper for CreateChannelBan that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateChannelBanRequestT = Model::CreateChannelBanRequest>
        Model::CreateChannelBanOutcomeCallable CreateChannelBanCallable(const CreateChannelBanRequestT& request) const
        {
            return SubmitCallable(&ChimeSDKMessagingClient::CreateChannelBan, request);
        }

        /**
         * An Async wrapper for CreateChannelBan that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateChannelBanRequestT = Model::CreateChannelBanRequest>
        void CreateChannelBanAsync(const CreateChannelBanRequestT& request, const CreateChannelBanResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ChimeSDKMessagingClient::CreateChannelBan, request, handler, context);
        }

        /**
         * <p>Creates a channel flow, a container for processors. Processors are AWS Lambda
         * functions that perform actions on chat messages, such as stripping out
         * profanity. You can associate channel flows with channels, and the processors in
         * the channel flow then take action on all messages sent to that channel. This is
         * a developer API.</p> <p>Channel flows process the following items:</p> <ol> <li>
         * <p>New and updated messages</p> </li> <li> <p>Persistent and non-persistent
         * messages</p> </li> <li> <p>The Standard message type</p> </li> </ol> 
         * <p>Channel flows don't process Control or System messages. For more information
         * about the message types provided by Chime SDK messaging, refer to <a
         * href="https://docs.aws.amazon.com/chime/latest/dg/using-the-messaging-sdk.html#msg-types">Message
         * types</a> in the <i>Amazon Chime developer guide</i>.</p> <p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-messaging-2021-05-15/CreateChannelFlow">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateChannelFlowOutcome CreateChannelFlow(const Model::CreateChannelFlowRequest& request) const;

        /**
         * A Callable wrapper for CreateChannelFlow that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateChannelFlowRequestT = Model::CreateChannelFlowRequest>
        Model::CreateChannelFlowOutcomeCallable CreateChannelFlowCallable(const CreateChannelFlowRequestT& request) const
        {
            return SubmitCallable(&ChimeSDKMessagingClient::CreateChannelFlow, request);
        }

        /**
         * An Async wrapper for CreateChannelFlow that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateChannelFlowRequestT = Model::CreateChannelFlowRequest>
        void CreateChannelFlowAsync(const CreateChannelFlowRequestT& request, const CreateChannelFlowResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ChimeSDKMessagingClient::CreateChannelFlow, request, handler, context);
        }

        /**
         * <p>Adds a member to a channel. The <code>InvitedBy</code> field in
         * <code>ChannelMembership</code> is derived from the request header. A channel
         * member can:</p> <ul> <li> <p>List messages</p> </li> <li> <p>Send messages</p>
         * </li> <li> <p>Receive messages</p> </li> <li> <p>Edit their own messages</p>
         * </li> <li> <p>Leave the channel</p> </li> </ul> <p>Privacy settings impact this
         * action as follows:</p> <ul> <li> <p>Public Channels: You do not need to be a
         * member to list messages, but you must be a member to send messages.</p> </li>
         * <li> <p>Private Channels: You must be a member to list or send messages.</p>
         * </li> </ul>  <p>The <code>x-amz-chime-bearer</code> request header is
         * mandatory. Use the ARN of the <code>AppInstanceUserArn</code> or
         * <code>AppInstanceBot</code> that makes the API call as the value in the
         * header.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-messaging-2021-05-15/CreateChannelMembership">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateChannelMembershipOutcome CreateChannelMembership(const Model::CreateChannelMembershipRequest& request) const;

        /**
         * A Callable wrapper for CreateChannelMembership that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateChannelMembershipRequestT = Model::CreateChannelMembershipRequest>
        Model::CreateChannelMembershipOutcomeCallable CreateChannelMembershipCallable(const CreateChannelMembershipRequestT& request) const
        {
            return SubmitCallable(&ChimeSDKMessagingClient::CreateChannelMembership, request);
        }

        /**
         * An Async wrapper for CreateChannelMembership that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateChannelMembershipRequestT = Model::CreateChannelMembershipRequest>
        void CreateChannelMembershipAsync(const CreateChannelMembershipRequestT& request, const CreateChannelMembershipResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ChimeSDKMessagingClient::CreateChannelMembership, request, handler, context);
        }

        /**
         * <p>Creates a new <code>ChannelModerator</code>. A channel moderator can:</p>
         * <ul> <li> <p>Add and remove other members of the channel.</p> </li> <li> <p>Add
         * and remove other moderators of the channel.</p> </li> <li> <p>Add and remove
         * user bans for the channel.</p> </li> <li> <p>Redact messages in the channel.</p>
         * </li> <li> <p>List messages in the channel.</p> </li> </ul>  <p>The
         * <code>x-amz-chime-bearer</code> request header is mandatory. Use the ARN of the
         * <code>AppInstanceUser</code> or <code>AppInstanceBot</code>of the user that
         * makes the API call as the value in the header.</p> <p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-messaging-2021-05-15/CreateChannelModerator">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateChannelModeratorOutcome CreateChannelModerator(const Model::CreateChannelModeratorRequest& request) const;

        /**
         * A Callable wrapper for CreateChannelModerator that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateChannelModeratorRequestT = Model::CreateChannelModeratorRequest>
        Model::CreateChannelModeratorOutcomeCallable CreateChannelModeratorCallable(const CreateChannelModeratorRequestT& request) const
        {
            return SubmitCallable(&ChimeSDKMessagingClient::CreateChannelModerator, request);
        }

        /**
         * An Async wrapper for CreateChannelModerator that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateChannelModeratorRequestT = Model::CreateChannelModeratorRequest>
        void CreateChannelModeratorAsync(const CreateChannelModeratorRequestT& request, const CreateChannelModeratorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ChimeSDKMessagingClient::CreateChannelModerator, request, handler, context);
        }

        /**
         * <p>Immediately makes a channel and its memberships inaccessible and marks them
         * for deletion. This is an irreversible process.</p>  <p>The
         * <code>x-amz-chime-bearer</code> request header is mandatory. Use the ARN of the
         * <code>AppInstanceUserArn</code> or <code>AppInstanceBot</code> that makes the
         * API call as the value in the header.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-messaging-2021-05-15/DeleteChannel">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteChannelOutcome DeleteChannel(const Model::DeleteChannelRequest& request) const;

        /**
         * A Callable wrapper for DeleteChannel that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteChannelRequestT = Model::DeleteChannelRequest>
        Model::DeleteChannelOutcomeCallable DeleteChannelCallable(const DeleteChannelRequestT& request) const
        {
            return SubmitCallable(&ChimeSDKMessagingClient::DeleteChannel, request);
        }

        /**
         * An Async wrapper for DeleteChannel that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteChannelRequestT = Model::DeleteChannelRequest>
        void DeleteChannelAsync(const DeleteChannelRequestT& request, const DeleteChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ChimeSDKMessagingClient::DeleteChannel, request, handler, context);
        }

        /**
         * <p>Removes a member from a channel's ban list.</p>  <p>The
         * <code>x-amz-chime-bearer</code> request header is mandatory. Use the ARN of the
         * <code>AppInstanceUser</code> or <code>AppInstanceBot</code> that makes the API
         * call as the value in the header.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-messaging-2021-05-15/DeleteChannelBan">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteChannelBanOutcome DeleteChannelBan(const Model::DeleteChannelBanRequest& request) const;

        /**
         * A Callable wrapper for DeleteChannelBan that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteChannelBanRequestT = Model::DeleteChannelBanRequest>
        Model::DeleteChannelBanOutcomeCallable DeleteChannelBanCallable(const DeleteChannelBanRequestT& request) const
        {
            return SubmitCallable(&ChimeSDKMessagingClient::DeleteChannelBan, request);
        }

        /**
         * An Async wrapper for DeleteChannelBan that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteChannelBanRequestT = Model::DeleteChannelBanRequest>
        void DeleteChannelBanAsync(const DeleteChannelBanRequestT& request, const DeleteChannelBanResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ChimeSDKMessagingClient::DeleteChannelBan, request, handler, context);
        }

        /**
         * <p>Deletes a channel flow, an irreversible process. This is a developer API.</p>
         *  <p> This API works only when the channel flow is not associated with any
         * channel. To get a list of all channels that a channel flow is associated with,
         * use the <code>ListChannelsAssociatedWithChannelFlow</code> API. Use the
         * <code>DisassociateChannelFlow</code> API to disassociate a channel flow from all
         * channels. </p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-messaging-2021-05-15/DeleteChannelFlow">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteChannelFlowOutcome DeleteChannelFlow(const Model::DeleteChannelFlowRequest& request) const;

        /**
         * A Callable wrapper for DeleteChannelFlow that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteChannelFlowRequestT = Model::DeleteChannelFlowRequest>
        Model::DeleteChannelFlowOutcomeCallable DeleteChannelFlowCallable(const DeleteChannelFlowRequestT& request) const
        {
            return SubmitCallable(&ChimeSDKMessagingClient::DeleteChannelFlow, request);
        }

        /**
         * An Async wrapper for DeleteChannelFlow that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteChannelFlowRequestT = Model::DeleteChannelFlowRequest>
        void DeleteChannelFlowAsync(const DeleteChannelFlowRequestT& request, const DeleteChannelFlowResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ChimeSDKMessagingClient::DeleteChannelFlow, request, handler, context);
        }

        /**
         * <p>Removes a member from a channel.</p>  <p>The
         * <code>x-amz-chime-bearer</code> request header is mandatory. Use the
         * <code>AppInstanceUserArn</code> of the user that makes the API call as the value
         * in the header.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-messaging-2021-05-15/DeleteChannelMembership">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteChannelMembershipOutcome DeleteChannelMembership(const Model::DeleteChannelMembershipRequest& request) const;

        /**
         * A Callable wrapper for DeleteChannelMembership that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteChannelMembershipRequestT = Model::DeleteChannelMembershipRequest>
        Model::DeleteChannelMembershipOutcomeCallable DeleteChannelMembershipCallable(const DeleteChannelMembershipRequestT& request) const
        {
            return SubmitCallable(&ChimeSDKMessagingClient::DeleteChannelMembership, request);
        }

        /**
         * An Async wrapper for DeleteChannelMembership that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteChannelMembershipRequestT = Model::DeleteChannelMembershipRequest>
        void DeleteChannelMembershipAsync(const DeleteChannelMembershipRequestT& request, const DeleteChannelMembershipResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ChimeSDKMessagingClient::DeleteChannelMembership, request, handler, context);
        }

        /**
         * <p>Deletes a channel message. Only admins can perform this action. Deletion
         * makes messages inaccessible immediately. A background process deletes any
         * revisions created by <code>UpdateChannelMessage</code>.</p>  <p>The
         * <code>x-amz-chime-bearer</code> request header is mandatory. Use the ARN of the
         * <code>AppInstanceUser</code> or <code>AppInstanceBot</code> that makes the API
         * call as the value in the header.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-messaging-2021-05-15/DeleteChannelMessage">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteChannelMessageOutcome DeleteChannelMessage(const Model::DeleteChannelMessageRequest& request) const;

        /**
         * A Callable wrapper for DeleteChannelMessage that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteChannelMessageRequestT = Model::DeleteChannelMessageRequest>
        Model::DeleteChannelMessageOutcomeCallable DeleteChannelMessageCallable(const DeleteChannelMessageRequestT& request) const
        {
            return SubmitCallable(&ChimeSDKMessagingClient::DeleteChannelMessage, request);
        }

        /**
         * An Async wrapper for DeleteChannelMessage that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteChannelMessageRequestT = Model::DeleteChannelMessageRequest>
        void DeleteChannelMessageAsync(const DeleteChannelMessageRequestT& request, const DeleteChannelMessageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ChimeSDKMessagingClient::DeleteChannelMessage, request, handler, context);
        }

        /**
         * <p>Deletes a channel moderator.</p>  <p>The
         * <code>x-amz-chime-bearer</code> request header is mandatory. Use the ARN of the
         * <code>AppInstanceUser</code> or <code>AppInstanceBot</code> that makes the API
         * call as the value in the header.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-messaging-2021-05-15/DeleteChannelModerator">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteChannelModeratorOutcome DeleteChannelModerator(const Model::DeleteChannelModeratorRequest& request) const;

        /**
         * A Callable wrapper for DeleteChannelModerator that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteChannelModeratorRequestT = Model::DeleteChannelModeratorRequest>
        Model::DeleteChannelModeratorOutcomeCallable DeleteChannelModeratorCallable(const DeleteChannelModeratorRequestT& request) const
        {
            return SubmitCallable(&ChimeSDKMessagingClient::DeleteChannelModerator, request);
        }

        /**
         * An Async wrapper for DeleteChannelModerator that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteChannelModeratorRequestT = Model::DeleteChannelModeratorRequest>
        void DeleteChannelModeratorAsync(const DeleteChannelModeratorRequestT& request, const DeleteChannelModeratorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ChimeSDKMessagingClient::DeleteChannelModerator, request, handler, context);
        }

        /**
         * <p>Deletes the streaming configurations for an <code>AppInstance</code>. For
         * more information, see <a
         * href="https://docs.aws.amazon.com/chime-sdk/latest/dg/streaming-export.html">Streaming
         * messaging data</a> in the <i>Amazon Chime SDK Developer Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-messaging-2021-05-15/DeleteMessagingStreamingConfigurations">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteMessagingStreamingConfigurationsOutcome DeleteMessagingStreamingConfigurations(const Model::DeleteMessagingStreamingConfigurationsRequest& request) const;

        /**
         * A Callable wrapper for DeleteMessagingStreamingConfigurations that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteMessagingStreamingConfigurationsRequestT = Model::DeleteMessagingStreamingConfigurationsRequest>
        Model::DeleteMessagingStreamingConfigurationsOutcomeCallable DeleteMessagingStreamingConfigurationsCallable(const DeleteMessagingStreamingConfigurationsRequestT& request) const
        {
            return SubmitCallable(&ChimeSDKMessagingClient::DeleteMessagingStreamingConfigurations, request);
        }

        /**
         * An Async wrapper for DeleteMessagingStreamingConfigurations that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteMessagingStreamingConfigurationsRequestT = Model::DeleteMessagingStreamingConfigurationsRequest>
        void DeleteMessagingStreamingConfigurationsAsync(const DeleteMessagingStreamingConfigurationsRequestT& request, const DeleteMessagingStreamingConfigurationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ChimeSDKMessagingClient::DeleteMessagingStreamingConfigurations, request, handler, context);
        }

        /**
         * <p>Returns the full details of a channel in an Amazon Chime
         * <code>AppInstance</code>.</p>  <p>The <code>x-amz-chime-bearer</code>
         * request header is mandatory. Use the ARN of the <code>AppInstanceUser</code> or
         * <code>AppInstanceBot</code> that makes the API call as the value in the
         * header.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-messaging-2021-05-15/DescribeChannel">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeChannelOutcome DescribeChannel(const Model::DescribeChannelRequest& request) const;

        /**
         * A Callable wrapper for DescribeChannel that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeChannelRequestT = Model::DescribeChannelRequest>
        Model::DescribeChannelOutcomeCallable DescribeChannelCallable(const DescribeChannelRequestT& request) const
        {
            return SubmitCallable(&ChimeSDKMessagingClient::DescribeChannel, request);
        }

        /**
         * An Async wrapper for DescribeChannel that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeChannelRequestT = Model::DescribeChannelRequest>
        void DescribeChannelAsync(const DescribeChannelRequestT& request, const DescribeChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ChimeSDKMessagingClient::DescribeChannel, request, handler, context);
        }

        /**
         * <p>Returns the full details of a channel ban.</p>  <p>The
         * <code>x-amz-chime-bearer</code> request header is mandatory. Use the ARN of the
         * <code>AppInstanceUser</code> or <code>AppInstanceBot</code> that makes the API
         * call as the value in the header.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-messaging-2021-05-15/DescribeChannelBan">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeChannelBanOutcome DescribeChannelBan(const Model::DescribeChannelBanRequest& request) const;

        /**
         * A Callable wrapper for DescribeChannelBan that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeChannelBanRequestT = Model::DescribeChannelBanRequest>
        Model::DescribeChannelBanOutcomeCallable DescribeChannelBanCallable(const DescribeChannelBanRequestT& request) const
        {
            return SubmitCallable(&ChimeSDKMessagingClient::DescribeChannelBan, request);
        }

        /**
         * An Async wrapper for DescribeChannelBan that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeChannelBanRequestT = Model::DescribeChannelBanRequest>
        void DescribeChannelBanAsync(const DescribeChannelBanRequestT& request, const DescribeChannelBanResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ChimeSDKMessagingClient::DescribeChannelBan, request, handler, context);
        }

        /**
         * <p>Returns the full details of a channel flow in an Amazon Chime
         * <code>AppInstance</code>. This is a developer API.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-messaging-2021-05-15/DescribeChannelFlow">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeChannelFlowOutcome DescribeChannelFlow(const Model::DescribeChannelFlowRequest& request) const;

        /**
         * A Callable wrapper for DescribeChannelFlow that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeChannelFlowRequestT = Model::DescribeChannelFlowRequest>
        Model::DescribeChannelFlowOutcomeCallable DescribeChannelFlowCallable(const DescribeChannelFlowRequestT& request) const
        {
            return SubmitCallable(&ChimeSDKMessagingClient::DescribeChannelFlow, request);
        }

        /**
         * An Async wrapper for DescribeChannelFlow that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeChannelFlowRequestT = Model::DescribeChannelFlowRequest>
        void DescribeChannelFlowAsync(const DescribeChannelFlowRequestT& request, const DescribeChannelFlowResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ChimeSDKMessagingClient::DescribeChannelFlow, request, handler, context);
        }

        /**
         * <p>Returns the full details of a user's channel membership.</p>  <p>The
         * <code>x-amz-chime-bearer</code> request header is mandatory. Use the ARN of the
         * <code>AppInstanceUser</code> or <code>AppInstanceBot</code> that makes the API
         * call as the value in the header.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-messaging-2021-05-15/DescribeChannelMembership">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeChannelMembershipOutcome DescribeChannelMembership(const Model::DescribeChannelMembershipRequest& request) const;

        /**
         * A Callable wrapper for DescribeChannelMembership that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeChannelMembershipRequestT = Model::DescribeChannelMembershipRequest>
        Model::DescribeChannelMembershipOutcomeCallable DescribeChannelMembershipCallable(const DescribeChannelMembershipRequestT& request) const
        {
            return SubmitCallable(&ChimeSDKMessagingClient::DescribeChannelMembership, request);
        }

        /**
         * An Async wrapper for DescribeChannelMembership that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeChannelMembershipRequestT = Model::DescribeChannelMembershipRequest>
        void DescribeChannelMembershipAsync(const DescribeChannelMembershipRequestT& request, const DescribeChannelMembershipResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ChimeSDKMessagingClient::DescribeChannelMembership, request, handler, context);
        }

        /**
         * <p> Returns the details of a channel based on the membership of the specified
         * <code>AppInstanceUser</code> or <code>AppInstanceBot</code>.</p>  <p>The
         * <code>x-amz-chime-bearer</code> request header is mandatory. Use the ARN of the
         * <code>AppInstanceUser</code> or <code>AppInstanceBot</code> that makes the API
         * call as the value in the header.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-messaging-2021-05-15/DescribeChannelMembershipForAppInstanceUser">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeChannelMembershipForAppInstanceUserOutcome DescribeChannelMembershipForAppInstanceUser(const Model::DescribeChannelMembershipForAppInstanceUserRequest& request) const;

        /**
         * A Callable wrapper for DescribeChannelMembershipForAppInstanceUser that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeChannelMembershipForAppInstanceUserRequestT = Model::DescribeChannelMembershipForAppInstanceUserRequest>
        Model::DescribeChannelMembershipForAppInstanceUserOutcomeCallable DescribeChannelMembershipForAppInstanceUserCallable(const DescribeChannelMembershipForAppInstanceUserRequestT& request) const
        {
            return SubmitCallable(&ChimeSDKMessagingClient::DescribeChannelMembershipForAppInstanceUser, request);
        }

        /**
         * An Async wrapper for DescribeChannelMembershipForAppInstanceUser that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeChannelMembershipForAppInstanceUserRequestT = Model::DescribeChannelMembershipForAppInstanceUserRequest>
        void DescribeChannelMembershipForAppInstanceUserAsync(const DescribeChannelMembershipForAppInstanceUserRequestT& request, const DescribeChannelMembershipForAppInstanceUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ChimeSDKMessagingClient::DescribeChannelMembershipForAppInstanceUser, request, handler, context);
        }

        /**
         * <p>Returns the full details of a channel moderated by the specified
         * <code>AppInstanceUser</code> or <code>AppInstanceBot</code>.</p>  <p>The
         * <code>x-amz-chime-bearer</code> request header is mandatory. Use the ARN of the
         * <code>AppInstanceUser</code> or <code>AppInstanceBot</code> that makes the API
         * call as the value in the header.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-messaging-2021-05-15/DescribeChannelModeratedByAppInstanceUser">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeChannelModeratedByAppInstanceUserOutcome DescribeChannelModeratedByAppInstanceUser(const Model::DescribeChannelModeratedByAppInstanceUserRequest& request) const;

        /**
         * A Callable wrapper for DescribeChannelModeratedByAppInstanceUser that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeChannelModeratedByAppInstanceUserRequestT = Model::DescribeChannelModeratedByAppInstanceUserRequest>
        Model::DescribeChannelModeratedByAppInstanceUserOutcomeCallable DescribeChannelModeratedByAppInstanceUserCallable(const DescribeChannelModeratedByAppInstanceUserRequestT& request) const
        {
            return SubmitCallable(&ChimeSDKMessagingClient::DescribeChannelModeratedByAppInstanceUser, request);
        }

        /**
         * An Async wrapper for DescribeChannelModeratedByAppInstanceUser that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeChannelModeratedByAppInstanceUserRequestT = Model::DescribeChannelModeratedByAppInstanceUserRequest>
        void DescribeChannelModeratedByAppInstanceUserAsync(const DescribeChannelModeratedByAppInstanceUserRequestT& request, const DescribeChannelModeratedByAppInstanceUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ChimeSDKMessagingClient::DescribeChannelModeratedByAppInstanceUser, request, handler, context);
        }

        /**
         * <p>Returns the full details of a single ChannelModerator.</p>  <p>The
         * <code>x-amz-chime-bearer</code> request header is mandatory. Use the
         * <code>AppInstanceUserArn</code> of the user that makes the API call as the value
         * in the header.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-messaging-2021-05-15/DescribeChannelModerator">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeChannelModeratorOutcome DescribeChannelModerator(const Model::DescribeChannelModeratorRequest& request) const;

        /**
         * A Callable wrapper for DescribeChannelModerator that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeChannelModeratorRequestT = Model::DescribeChannelModeratorRequest>
        Model::DescribeChannelModeratorOutcomeCallable DescribeChannelModeratorCallable(const DescribeChannelModeratorRequestT& request) const
        {
            return SubmitCallable(&ChimeSDKMessagingClient::DescribeChannelModerator, request);
        }

        /**
         * An Async wrapper for DescribeChannelModerator that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeChannelModeratorRequestT = Model::DescribeChannelModeratorRequest>
        void DescribeChannelModeratorAsync(const DescribeChannelModeratorRequestT& request, const DescribeChannelModeratorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ChimeSDKMessagingClient::DescribeChannelModerator, request, handler, context);
        }

        /**
         * <p>Disassociates a channel flow from all its channels. Once disassociated, all
         * messages to that channel stop going through the channel flow processor.</p>
         *  <p>Only administrators or channel moderators can disassociate a channel
         * flow.</p> <p>The <code>x-amz-chime-bearer</code> request header is mandatory.
         * Use the ARN of the <code>AppInstanceUser</code> or <code>AppInstanceBot</code>
         * that makes the API call as the value in the header.</p> <p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-messaging-2021-05-15/DisassociateChannelFlow">AWS
         * API Reference</a></p>
         */
        virtual Model::DisassociateChannelFlowOutcome DisassociateChannelFlow(const Model::DisassociateChannelFlowRequest& request) const;

        /**
         * A Callable wrapper for DisassociateChannelFlow that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DisassociateChannelFlowRequestT = Model::DisassociateChannelFlowRequest>
        Model::DisassociateChannelFlowOutcomeCallable DisassociateChannelFlowCallable(const DisassociateChannelFlowRequestT& request) const
        {
            return SubmitCallable(&ChimeSDKMessagingClient::DisassociateChannelFlow, request);
        }

        /**
         * An Async wrapper for DisassociateChannelFlow that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DisassociateChannelFlowRequestT = Model::DisassociateChannelFlowRequest>
        void DisassociateChannelFlowAsync(const DisassociateChannelFlowRequestT& request, const DisassociateChannelFlowResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ChimeSDKMessagingClient::DisassociateChannelFlow, request, handler, context);
        }

        /**
         * <p>Gets the membership preferences of an <code>AppInstanceUser</code> or
         * <code>AppInstanceBot</code> for the specified channel. A user or a bot must be a
         * member of the channel and own the membership in order to retrieve membership
         * preferences. Users or bots in the <code>AppInstanceAdmin</code> and channel
         * moderator roles can't retrieve preferences for other users or bots. Banned users
         * or bots can't retrieve membership preferences for the channel from which they
         * are banned.</p>  <p>The <code>x-amz-chime-bearer</code> request header is
         * mandatory. Use the ARN of the <code>AppInstanceUser</code> or
         * <code>AppInstanceBot</code> that makes the API call as the value in the
         * header.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-messaging-2021-05-15/GetChannelMembershipPreferences">AWS
         * API Reference</a></p>
         */
        virtual Model::GetChannelMembershipPreferencesOutcome GetChannelMembershipPreferences(const Model::GetChannelMembershipPreferencesRequest& request) const;

        /**
         * A Callable wrapper for GetChannelMembershipPreferences that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetChannelMembershipPreferencesRequestT = Model::GetChannelMembershipPreferencesRequest>
        Model::GetChannelMembershipPreferencesOutcomeCallable GetChannelMembershipPreferencesCallable(const GetChannelMembershipPreferencesRequestT& request) const
        {
            return SubmitCallable(&ChimeSDKMessagingClient::GetChannelMembershipPreferences, request);
        }

        /**
         * An Async wrapper for GetChannelMembershipPreferences that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetChannelMembershipPreferencesRequestT = Model::GetChannelMembershipPreferencesRequest>
        void GetChannelMembershipPreferencesAsync(const GetChannelMembershipPreferencesRequestT& request, const GetChannelMembershipPreferencesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ChimeSDKMessagingClient::GetChannelMembershipPreferences, request, handler, context);
        }

        /**
         * <p>Gets the full details of a channel message.</p>  <p>The
         * <code>x-amz-chime-bearer</code> request header is mandatory. Use the ARN of the
         * <code>AppInstanceUser</code> or <code>AppInstanceBot</code> that makes the API
         * call as the value in the header.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-messaging-2021-05-15/GetChannelMessage">AWS
         * API Reference</a></p>
         */
        virtual Model::GetChannelMessageOutcome GetChannelMessage(const Model::GetChannelMessageRequest& request) const;

        /**
         * A Callable wrapper for GetChannelMessage that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetChannelMessageRequestT = Model::GetChannelMessageRequest>
        Model::GetChannelMessageOutcomeCallable GetChannelMessageCallable(const GetChannelMessageRequestT& request) const
        {
            return SubmitCallable(&ChimeSDKMessagingClient::GetChannelMessage, request);
        }

        /**
         * An Async wrapper for GetChannelMessage that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetChannelMessageRequestT = Model::GetChannelMessageRequest>
        void GetChannelMessageAsync(const GetChannelMessageRequestT& request, const GetChannelMessageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ChimeSDKMessagingClient::GetChannelMessage, request, handler, context);
        }

        /**
         * <p>Gets message status for a specified <code>messageId</code>. Use this API to
         * determine the intermediate status of messages going through channel flow
         * processing. The API provides an alternative to retrieving message status if the
         * event was not received because a client wasn't connected to a websocket. </p>
         * <p>Messages can have any one of these statuses.</p> <dl> <dt>SENT</dt> <dd>
         * <p>Message processed successfully</p> </dd> <dt>PENDING</dt> <dd> <p>Ongoing
         * processing</p> </dd> <dt>FAILED</dt> <dd> <p>Processing failed</p> </dd>
         * <dt>DENIED</dt> <dd> <p>Message denied by the processor</p> </dd> </dl> 
         * <ul> <li> <p>This API does not return statuses for denied messages, because we
         * don't store them once the processor denies them. </p> </li> <li> <p>Only the
         * message sender can invoke this API.</p> </li> <li> <p>The
         * <code>x-amz-chime-bearer</code> request header is mandatory. Use the ARN of the
         * <code>AppInstanceUser</code> or <code>AppInstanceBot</code> that makes the API
         * call as the value in the header.</p> </li> </ul> <p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-messaging-2021-05-15/GetChannelMessageStatus">AWS
         * API Reference</a></p>
         */
        virtual Model::GetChannelMessageStatusOutcome GetChannelMessageStatus(const Model::GetChannelMessageStatusRequest& request) const;

        /**
         * A Callable wrapper for GetChannelMessageStatus that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetChannelMessageStatusRequestT = Model::GetChannelMessageStatusRequest>
        Model::GetChannelMessageStatusOutcomeCallable GetChannelMessageStatusCallable(const GetChannelMessageStatusRequestT& request) const
        {
            return SubmitCallable(&ChimeSDKMessagingClient::GetChannelMessageStatus, request);
        }

        /**
         * An Async wrapper for GetChannelMessageStatus that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetChannelMessageStatusRequestT = Model::GetChannelMessageStatusRequest>
        void GetChannelMessageStatusAsync(const GetChannelMessageStatusRequestT& request, const GetChannelMessageStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ChimeSDKMessagingClient::GetChannelMessageStatus, request, handler, context);
        }

        /**
         * <p>The details of the endpoint for the messaging session.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-messaging-2021-05-15/GetMessagingSessionEndpoint">AWS
         * API Reference</a></p>
         */
        virtual Model::GetMessagingSessionEndpointOutcome GetMessagingSessionEndpoint(const Model::GetMessagingSessionEndpointRequest& request) const;

        /**
         * A Callable wrapper for GetMessagingSessionEndpoint that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetMessagingSessionEndpointRequestT = Model::GetMessagingSessionEndpointRequest>
        Model::GetMessagingSessionEndpointOutcomeCallable GetMessagingSessionEndpointCallable(const GetMessagingSessionEndpointRequestT& request) const
        {
            return SubmitCallable(&ChimeSDKMessagingClient::GetMessagingSessionEndpoint, request);
        }

        /**
         * An Async wrapper for GetMessagingSessionEndpoint that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetMessagingSessionEndpointRequestT = Model::GetMessagingSessionEndpointRequest>
        void GetMessagingSessionEndpointAsync(const GetMessagingSessionEndpointRequestT& request, const GetMessagingSessionEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ChimeSDKMessagingClient::GetMessagingSessionEndpoint, request, handler, context);
        }

        /**
         * <p>Retrieves the data streaming configuration for an <code>AppInstance</code>.
         * For more information, see <a
         * href="https://docs.aws.amazon.com/chime-sdk/latest/dg/streaming-export.html">Streaming
         * messaging data</a> in the <i>Amazon Chime SDK Developer Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-messaging-2021-05-15/GetMessagingStreamingConfigurations">AWS
         * API Reference</a></p>
         */
        virtual Model::GetMessagingStreamingConfigurationsOutcome GetMessagingStreamingConfigurations(const Model::GetMessagingStreamingConfigurationsRequest& request) const;

        /**
         * A Callable wrapper for GetMessagingStreamingConfigurations that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetMessagingStreamingConfigurationsRequestT = Model::GetMessagingStreamingConfigurationsRequest>
        Model::GetMessagingStreamingConfigurationsOutcomeCallable GetMessagingStreamingConfigurationsCallable(const GetMessagingStreamingConfigurationsRequestT& request) const
        {
            return SubmitCallable(&ChimeSDKMessagingClient::GetMessagingStreamingConfigurations, request);
        }

        /**
         * An Async wrapper for GetMessagingStreamingConfigurations that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetMessagingStreamingConfigurationsRequestT = Model::GetMessagingStreamingConfigurationsRequest>
        void GetMessagingStreamingConfigurationsAsync(const GetMessagingStreamingConfigurationsRequestT& request, const GetMessagingStreamingConfigurationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ChimeSDKMessagingClient::GetMessagingStreamingConfigurations, request, handler, context);
        }

        /**
         * <p>Lists all the users and bots banned from a particular channel.</p> 
         * <p>The <code>x-amz-chime-bearer</code> request header is mandatory. Use the ARN
         * of the <code>AppInstanceUser</code> or <code>AppInstanceBot</code> that makes
         * the API call as the value in the header.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-messaging-2021-05-15/ListChannelBans">AWS
         * API Reference</a></p>
         */
        virtual Model::ListChannelBansOutcome ListChannelBans(const Model::ListChannelBansRequest& request) const;

        /**
         * A Callable wrapper for ListChannelBans that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListChannelBansRequestT = Model::ListChannelBansRequest>
        Model::ListChannelBansOutcomeCallable ListChannelBansCallable(const ListChannelBansRequestT& request) const
        {
            return SubmitCallable(&ChimeSDKMessagingClient::ListChannelBans, request);
        }

        /**
         * An Async wrapper for ListChannelBans that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListChannelBansRequestT = Model::ListChannelBansRequest>
        void ListChannelBansAsync(const ListChannelBansRequestT& request, const ListChannelBansResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ChimeSDKMessagingClient::ListChannelBans, request, handler, context);
        }

        /**
         * <p>Returns a paginated lists of all the channel flows created under a single
         * Chime. This is a developer API.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-messaging-2021-05-15/ListChannelFlows">AWS
         * API Reference</a></p>
         */
        virtual Model::ListChannelFlowsOutcome ListChannelFlows(const Model::ListChannelFlowsRequest& request) const;

        /**
         * A Callable wrapper for ListChannelFlows that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListChannelFlowsRequestT = Model::ListChannelFlowsRequest>
        Model::ListChannelFlowsOutcomeCallable ListChannelFlowsCallable(const ListChannelFlowsRequestT& request) const
        {
            return SubmitCallable(&ChimeSDKMessagingClient::ListChannelFlows, request);
        }

        /**
         * An Async wrapper for ListChannelFlows that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListChannelFlowsRequestT = Model::ListChannelFlowsRequest>
        void ListChannelFlowsAsync(const ListChannelFlowsRequestT& request, const ListChannelFlowsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ChimeSDKMessagingClient::ListChannelFlows, request, handler, context);
        }

        /**
         * <p>Lists all channel memberships in a channel.</p>  <p>The
         * <code>x-amz-chime-bearer</code> request header is mandatory. Use the ARN of the
         * <code>AppInstanceUser</code> or <code>AppInstanceBot</code> that makes the API
         * call as the value in the header.</p>  <p>If you want to list the channels
         * to which a specific app instance user belongs, see the <a
         * href="https://docs.aws.amazon.com/chime/latest/APIReference/API_messaging-chime_ListChannelMembershipsForAppInstanceUser.html">ListChannelMembershipsForAppInstanceUser</a>
         * API.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-messaging-2021-05-15/ListChannelMemberships">AWS
         * API Reference</a></p>
         */
        virtual Model::ListChannelMembershipsOutcome ListChannelMemberships(const Model::ListChannelMembershipsRequest& request) const;

        /**
         * A Callable wrapper for ListChannelMemberships that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListChannelMembershipsRequestT = Model::ListChannelMembershipsRequest>
        Model::ListChannelMembershipsOutcomeCallable ListChannelMembershipsCallable(const ListChannelMembershipsRequestT& request) const
        {
            return SubmitCallable(&ChimeSDKMessagingClient::ListChannelMemberships, request);
        }

        /**
         * An Async wrapper for ListChannelMemberships that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListChannelMembershipsRequestT = Model::ListChannelMembershipsRequest>
        void ListChannelMembershipsAsync(const ListChannelMembershipsRequestT& request, const ListChannelMembershipsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ChimeSDKMessagingClient::ListChannelMemberships, request, handler, context);
        }

        /**
         * <p> Lists all channels that an <code>AppInstanceUser</code> or
         * <code>AppInstanceBot</code> is a part of. Only an <code>AppInstanceAdmin</code>
         * can call the API with a user ARN that is not their own. </p>  <p>The
         * <code>x-amz-chime-bearer</code> request header is mandatory. Use the ARN of the
         * <code>AppInstanceUser</code> or <code>AppInstanceBot</code> that makes the API
         * call as the value in the header.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-messaging-2021-05-15/ListChannelMembershipsForAppInstanceUser">AWS
         * API Reference</a></p>
         */
        virtual Model::ListChannelMembershipsForAppInstanceUserOutcome ListChannelMembershipsForAppInstanceUser(const Model::ListChannelMembershipsForAppInstanceUserRequest& request) const;

        /**
         * A Callable wrapper for ListChannelMembershipsForAppInstanceUser that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListChannelMembershipsForAppInstanceUserRequestT = Model::ListChannelMembershipsForAppInstanceUserRequest>
        Model::ListChannelMembershipsForAppInstanceUserOutcomeCallable ListChannelMembershipsForAppInstanceUserCallable(const ListChannelMembershipsForAppInstanceUserRequestT& request) const
        {
            return SubmitCallable(&ChimeSDKMessagingClient::ListChannelMembershipsForAppInstanceUser, request);
        }

        /**
         * An Async wrapper for ListChannelMembershipsForAppInstanceUser that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListChannelMembershipsForAppInstanceUserRequestT = Model::ListChannelMembershipsForAppInstanceUserRequest>
        void ListChannelMembershipsForAppInstanceUserAsync(const ListChannelMembershipsForAppInstanceUserRequestT& request, const ListChannelMembershipsForAppInstanceUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ChimeSDKMessagingClient::ListChannelMembershipsForAppInstanceUser, request, handler, context);
        }

        /**
         * <p>List all the messages in a channel. Returns a paginated list of
         * <code>ChannelMessages</code>. By default, sorted by creation timestamp in
         * descending order.</p>  <p>Redacted messages appear in the results as
         * empty, since they are only redacted, not deleted. Deleted messages do not appear
         * in the results. This action always returns the latest version of an edited
         * message.</p> <p>Also, the <code>x-amz-chime-bearer</code> request header is
         * mandatory. Use the ARN of the <code>AppInstanceUser</code> or
         * <code>AppInstanceBot</code> that makes the API call as the value in the
         * header.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-messaging-2021-05-15/ListChannelMessages">AWS
         * API Reference</a></p>
         */
        virtual Model::ListChannelMessagesOutcome ListChannelMessages(const Model::ListChannelMessagesRequest& request) const;

        /**
         * A Callable wrapper for ListChannelMessages that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListChannelMessagesRequestT = Model::ListChannelMessagesRequest>
        Model::ListChannelMessagesOutcomeCallable ListChannelMessagesCallable(const ListChannelMessagesRequestT& request) const
        {
            return SubmitCallable(&ChimeSDKMessagingClient::ListChannelMessages, request);
        }

        /**
         * An Async wrapper for ListChannelMessages that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListChannelMessagesRequestT = Model::ListChannelMessagesRequest>
        void ListChannelMessagesAsync(const ListChannelMessagesRequestT& request, const ListChannelMessagesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ChimeSDKMessagingClient::ListChannelMessages, request, handler, context);
        }

        /**
         * <p>Lists all the moderators for a channel.</p>  <p>The
         * <code>x-amz-chime-bearer</code> request header is mandatory. Use the ARN of the
         * <code>AppInstanceUser</code> or <code>AppInstanceBot</code> that makes the API
         * call as the value in the header.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-messaging-2021-05-15/ListChannelModerators">AWS
         * API Reference</a></p>
         */
        virtual Model::ListChannelModeratorsOutcome ListChannelModerators(const Model::ListChannelModeratorsRequest& request) const;

        /**
         * A Callable wrapper for ListChannelModerators that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListChannelModeratorsRequestT = Model::ListChannelModeratorsRequest>
        Model::ListChannelModeratorsOutcomeCallable ListChannelModeratorsCallable(const ListChannelModeratorsRequestT& request) const
        {
            return SubmitCallable(&ChimeSDKMessagingClient::ListChannelModerators, request);
        }

        /**
         * An Async wrapper for ListChannelModerators that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListChannelModeratorsRequestT = Model::ListChannelModeratorsRequest>
        void ListChannelModeratorsAsync(const ListChannelModeratorsRequestT& request, const ListChannelModeratorsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ChimeSDKMessagingClient::ListChannelModerators, request, handler, context);
        }

        /**
         * <p>Lists all Channels created under a single Chime App as a paginated list. You
         * can specify filters to narrow results.</p> <p class="title"> <b>Functionality
         * &amp; restrictions</b> </p> <ul> <li> <p>Use privacy = <code>PUBLIC</code> to
         * retrieve all public channels in the account.</p> </li> <li> <p>Only an
         * <code>AppInstanceAdmin</code> can set privacy = <code>PRIVATE</code> to list the
         * private channels in an account.</p> </li> </ul>  <p>The
         * <code>x-amz-chime-bearer</code> request header is mandatory. Use the ARN of the
         * <code>AppInstanceUser</code> or <code>AppInstanceBot</code> that makes the API
         * call as the value in the header.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-messaging-2021-05-15/ListChannels">AWS
         * API Reference</a></p>
         */
        virtual Model::ListChannelsOutcome ListChannels(const Model::ListChannelsRequest& request) const;

        /**
         * A Callable wrapper for ListChannels that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListChannelsRequestT = Model::ListChannelsRequest>
        Model::ListChannelsOutcomeCallable ListChannelsCallable(const ListChannelsRequestT& request) const
        {
            return SubmitCallable(&ChimeSDKMessagingClient::ListChannels, request);
        }

        /**
         * An Async wrapper for ListChannels that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListChannelsRequestT = Model::ListChannelsRequest>
        void ListChannelsAsync(const ListChannelsRequestT& request, const ListChannelsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ChimeSDKMessagingClient::ListChannels, request, handler, context);
        }

        /**
         * <p>Lists all channels associated with a specified channel flow. You can
         * associate a channel flow with multiple channels, but you can only associate a
         * channel with one channel flow. This is a developer API.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-messaging-2021-05-15/ListChannelsAssociatedWithChannelFlow">AWS
         * API Reference</a></p>
         */
        virtual Model::ListChannelsAssociatedWithChannelFlowOutcome ListChannelsAssociatedWithChannelFlow(const Model::ListChannelsAssociatedWithChannelFlowRequest& request) const;

        /**
         * A Callable wrapper for ListChannelsAssociatedWithChannelFlow that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListChannelsAssociatedWithChannelFlowRequestT = Model::ListChannelsAssociatedWithChannelFlowRequest>
        Model::ListChannelsAssociatedWithChannelFlowOutcomeCallable ListChannelsAssociatedWithChannelFlowCallable(const ListChannelsAssociatedWithChannelFlowRequestT& request) const
        {
            return SubmitCallable(&ChimeSDKMessagingClient::ListChannelsAssociatedWithChannelFlow, request);
        }

        /**
         * An Async wrapper for ListChannelsAssociatedWithChannelFlow that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListChannelsAssociatedWithChannelFlowRequestT = Model::ListChannelsAssociatedWithChannelFlowRequest>
        void ListChannelsAssociatedWithChannelFlowAsync(const ListChannelsAssociatedWithChannelFlowRequestT& request, const ListChannelsAssociatedWithChannelFlowResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ChimeSDKMessagingClient::ListChannelsAssociatedWithChannelFlow, request, handler, context);
        }

        /**
         * <p>A list of the channels moderated by an <code>AppInstanceUser</code>.</p>
         *  <p>The <code>x-amz-chime-bearer</code> request header is mandatory. Use
         * the ARN of the <code>AppInstanceUser</code> or <code>AppInstanceBot</code> that
         * makes the API call as the value in the header.</p> <p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-messaging-2021-05-15/ListChannelsModeratedByAppInstanceUser">AWS
         * API Reference</a></p>
         */
        virtual Model::ListChannelsModeratedByAppInstanceUserOutcome ListChannelsModeratedByAppInstanceUser(const Model::ListChannelsModeratedByAppInstanceUserRequest& request) const;

        /**
         * A Callable wrapper for ListChannelsModeratedByAppInstanceUser that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListChannelsModeratedByAppInstanceUserRequestT = Model::ListChannelsModeratedByAppInstanceUserRequest>
        Model::ListChannelsModeratedByAppInstanceUserOutcomeCallable ListChannelsModeratedByAppInstanceUserCallable(const ListChannelsModeratedByAppInstanceUserRequestT& request) const
        {
            return SubmitCallable(&ChimeSDKMessagingClient::ListChannelsModeratedByAppInstanceUser, request);
        }

        /**
         * An Async wrapper for ListChannelsModeratedByAppInstanceUser that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListChannelsModeratedByAppInstanceUserRequestT = Model::ListChannelsModeratedByAppInstanceUserRequest>
        void ListChannelsModeratedByAppInstanceUserAsync(const ListChannelsModeratedByAppInstanceUserRequestT& request, const ListChannelsModeratedByAppInstanceUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ChimeSDKMessagingClient::ListChannelsModeratedByAppInstanceUser, request, handler, context);
        }

        /**
         * <p>Lists all the SubChannels in an elastic channel when given a channel ID.
         * Available only to the app instance admins and channel moderators of elastic
         * channels.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-messaging-2021-05-15/ListSubChannels">AWS
         * API Reference</a></p>
         */
        virtual Model::ListSubChannelsOutcome ListSubChannels(const Model::ListSubChannelsRequest& request) const;

        /**
         * A Callable wrapper for ListSubChannels that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListSubChannelsRequestT = Model::ListSubChannelsRequest>
        Model::ListSubChannelsOutcomeCallable ListSubChannelsCallable(const ListSubChannelsRequestT& request) const
        {
            return SubmitCallable(&ChimeSDKMessagingClient::ListSubChannels, request);
        }

        /**
         * An Async wrapper for ListSubChannels that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListSubChannelsRequestT = Model::ListSubChannelsRequest>
        void ListSubChannelsAsync(const ListSubChannelsRequestT& request, const ListSubChannelsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ChimeSDKMessagingClient::ListSubChannels, request, handler, context);
        }

        /**
         * <p>Lists the tags applied to an Amazon Chime SDK messaging
         * resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-messaging-2021-05-15/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;

        /**
         * A Callable wrapper for ListTagsForResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const ListTagsForResourceRequestT& request) const
        {
            return SubmitCallable(&ChimeSDKMessagingClient::ListTagsForResource, request);
        }

        /**
         * An Async wrapper for ListTagsForResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        void ListTagsForResourceAsync(const ListTagsForResourceRequestT& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ChimeSDKMessagingClient::ListTagsForResource, request, handler, context);
        }

        /**
         * <p>Sets the number of days before the channel is automatically deleted.</p>
         *  <ul> <li> <p>A background process deletes expired channels within 6 hours
         * of expiration. Actual deletion times may vary.</p> </li> <li> <p>Expired
         * channels that have not yet been deleted appear as active, and you can update
         * their expiration settings. The system honors the new settings.</p> </li> <li>
         * <p>The <code>x-amz-chime-bearer</code> request header is mandatory. Use the ARN
         * of the <code>AppInstanceUser</code> or <code>AppInstanceBot</code> that makes
         * the API call as the value in the header.</p> </li> </ul> <p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-messaging-2021-05-15/PutChannelExpirationSettings">AWS
         * API Reference</a></p>
         */
        virtual Model::PutChannelExpirationSettingsOutcome PutChannelExpirationSettings(const Model::PutChannelExpirationSettingsRequest& request) const;

        /**
         * A Callable wrapper for PutChannelExpirationSettings that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename PutChannelExpirationSettingsRequestT = Model::PutChannelExpirationSettingsRequest>
        Model::PutChannelExpirationSettingsOutcomeCallable PutChannelExpirationSettingsCallable(const PutChannelExpirationSettingsRequestT& request) const
        {
            return SubmitCallable(&ChimeSDKMessagingClient::PutChannelExpirationSettings, request);
        }

        /**
         * An Async wrapper for PutChannelExpirationSettings that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename PutChannelExpirationSettingsRequestT = Model::PutChannelExpirationSettingsRequest>
        void PutChannelExpirationSettingsAsync(const PutChannelExpirationSettingsRequestT& request, const PutChannelExpirationSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ChimeSDKMessagingClient::PutChannelExpirationSettings, request, handler, context);
        }

        /**
         * <p>Sets the membership preferences of an <code>AppInstanceUser</code> or
         * <code>AppInstanceBot</code> for the specified channel. The user or bot must be a
         * member of the channel. Only the user or bot who owns the membership can set
         * preferences. Users or bots in the <code>AppInstanceAdmin</code> and channel
         * moderator roles can't set preferences for other users. Banned users or bots
         * can't set membership preferences for the channel from which they are banned.</p>
         *  <p>The x-amz-chime-bearer request header is mandatory. Use the ARN of an
         * <code>AppInstanceUser</code> or <code>AppInstanceBot</code> that makes the API
         * call as the value in the header.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-messaging-2021-05-15/PutChannelMembershipPreferences">AWS
         * API Reference</a></p>
         */
        virtual Model::PutChannelMembershipPreferencesOutcome PutChannelMembershipPreferences(const Model::PutChannelMembershipPreferencesRequest& request) const;

        /**
         * A Callable wrapper for PutChannelMembershipPreferences that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename PutChannelMembershipPreferencesRequestT = Model::PutChannelMembershipPreferencesRequest>
        Model::PutChannelMembershipPreferencesOutcomeCallable PutChannelMembershipPreferencesCallable(const PutChannelMembershipPreferencesRequestT& request) const
        {
            return SubmitCallable(&ChimeSDKMessagingClient::PutChannelMembershipPreferences, request);
        }

        /**
         * An Async wrapper for PutChannelMembershipPreferences that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename PutChannelMembershipPreferencesRequestT = Model::PutChannelMembershipPreferencesRequest>
        void PutChannelMembershipPreferencesAsync(const PutChannelMembershipPreferencesRequestT& request, const PutChannelMembershipPreferencesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ChimeSDKMessagingClient::PutChannelMembershipPreferences, request, handler, context);
        }

        /**
         * <p>Sets the data streaming configuration for an <code>AppInstance</code>. For
         * more information, see <a
         * href="https://docs.aws.amazon.com/chime-sdk/latest/dg/streaming-export.html">Streaming
         * messaging data</a> in the <i>Amazon Chime SDK Developer Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-messaging-2021-05-15/PutMessagingStreamingConfigurations">AWS
         * API Reference</a></p>
         */
        virtual Model::PutMessagingStreamingConfigurationsOutcome PutMessagingStreamingConfigurations(const Model::PutMessagingStreamingConfigurationsRequest& request) const;

        /**
         * A Callable wrapper for PutMessagingStreamingConfigurations that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename PutMessagingStreamingConfigurationsRequestT = Model::PutMessagingStreamingConfigurationsRequest>
        Model::PutMessagingStreamingConfigurationsOutcomeCallable PutMessagingStreamingConfigurationsCallable(const PutMessagingStreamingConfigurationsRequestT& request) const
        {
            return SubmitCallable(&ChimeSDKMessagingClient::PutMessagingStreamingConfigurations, request);
        }

        /**
         * An Async wrapper for PutMessagingStreamingConfigurations that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename PutMessagingStreamingConfigurationsRequestT = Model::PutMessagingStreamingConfigurationsRequest>
        void PutMessagingStreamingConfigurationsAsync(const PutMessagingStreamingConfigurationsRequestT& request, const PutMessagingStreamingConfigurationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ChimeSDKMessagingClient::PutMessagingStreamingConfigurations, request, handler, context);
        }

        /**
         * <p>Redacts message content, but not metadata. The message exists in the back
         * end, but the action returns null content, and the state shows as redacted.</p>
         *  <p>The <code>x-amz-chime-bearer</code> request header is mandatory. Use
         * the ARN of the <code>AppInstanceUser</code> or <code>AppInstanceBot</code> that
         * makes the API call as the value in the header.</p> <p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-messaging-2021-05-15/RedactChannelMessage">AWS
         * API Reference</a></p>
         */
        virtual Model::RedactChannelMessageOutcome RedactChannelMessage(const Model::RedactChannelMessageRequest& request) const;

        /**
         * A Callable wrapper for RedactChannelMessage that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename RedactChannelMessageRequestT = Model::RedactChannelMessageRequest>
        Model::RedactChannelMessageOutcomeCallable RedactChannelMessageCallable(const RedactChannelMessageRequestT& request) const
        {
            return SubmitCallable(&ChimeSDKMessagingClient::RedactChannelMessage, request);
        }

        /**
         * An Async wrapper for RedactChannelMessage that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename RedactChannelMessageRequestT = Model::RedactChannelMessageRequest>
        void RedactChannelMessageAsync(const RedactChannelMessageRequestT& request, const RedactChannelMessageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ChimeSDKMessagingClient::RedactChannelMessage, request, handler, context);
        }

        /**
         * <p>Allows the <code>ChimeBearer</code> to search channels by channel members.
         * Users or bots can search across the channels that they belong to. Users in the
         * <code>AppInstanceAdmin</code> role can search across all channels.</p> <p>The
         * <code>x-amz-chime-bearer</code> request header is mandatory. Use the ARN of the
         * <code>AppInstanceUser</code> or <code>AppInstanceBot</code> that makes the API
         * call as the value in the header.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-messaging-2021-05-15/SearchChannels">AWS
         * API Reference</a></p>
         */
        virtual Model::SearchChannelsOutcome SearchChannels(const Model::SearchChannelsRequest& request) const;

        /**
         * A Callable wrapper for SearchChannels that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename SearchChannelsRequestT = Model::SearchChannelsRequest>
        Model::SearchChannelsOutcomeCallable SearchChannelsCallable(const SearchChannelsRequestT& request) const
        {
            return SubmitCallable(&ChimeSDKMessagingClient::SearchChannels, request);
        }

        /**
         * An Async wrapper for SearchChannels that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename SearchChannelsRequestT = Model::SearchChannelsRequest>
        void SearchChannelsAsync(const SearchChannelsRequestT& request, const SearchChannelsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ChimeSDKMessagingClient::SearchChannels, request, handler, context);
        }

        /**
         * <p>Sends a message to a particular channel that the member is a part of.</p>
         *  <p>The <code>x-amz-chime-bearer</code> request header is mandatory. Use
         * the ARN of the <code>AppInstanceUser</code> or <code>AppInstanceBot</code> that
         * makes the API call as the value in the header.</p> <p>Also,
         * <code>STANDARD</code> messages can be up to 4KB in size and contain metadata.
         * Metadata is arbitrary, and you can use it in a variety of ways, such as
         * containing a link to an attachment.</p> <p> <code>CONTROL</code> messages are
         * limited to 30 bytes and do not contain metadata.</p> <p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-messaging-2021-05-15/SendChannelMessage">AWS
         * API Reference</a></p>
         */
        virtual Model::SendChannelMessageOutcome SendChannelMessage(const Model::SendChannelMessageRequest& request) const;

        /**
         * A Callable wrapper for SendChannelMessage that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename SendChannelMessageRequestT = Model::SendChannelMessageRequest>
        Model::SendChannelMessageOutcomeCallable SendChannelMessageCallable(const SendChannelMessageRequestT& request) const
        {
            return SubmitCallable(&ChimeSDKMessagingClient::SendChannelMessage, request);
        }

        /**
         * An Async wrapper for SendChannelMessage that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename SendChannelMessageRequestT = Model::SendChannelMessageRequest>
        void SendChannelMessageAsync(const SendChannelMessageRequestT& request, const SendChannelMessageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ChimeSDKMessagingClient::SendChannelMessage, request, handler, context);
        }

        /**
         * <p>Applies the specified tags to the specified Amazon Chime SDK messaging
         * resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-messaging-2021-05-15/TagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;

        /**
         * A Callable wrapper for TagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        Model::TagResourceOutcomeCallable TagResourceCallable(const TagResourceRequestT& request) const
        {
            return SubmitCallable(&ChimeSDKMessagingClient::TagResource, request);
        }

        /**
         * An Async wrapper for TagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        void TagResourceAsync(const TagResourceRequestT& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ChimeSDKMessagingClient::TagResource, request, handler, context);
        }

        /**
         * <p>Removes the specified tags from the specified Amazon Chime SDK messaging
         * resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-messaging-2021-05-15/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;

        /**
         * A Callable wrapper for UntagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        Model::UntagResourceOutcomeCallable UntagResourceCallable(const UntagResourceRequestT& request) const
        {
            return SubmitCallable(&ChimeSDKMessagingClient::UntagResource, request);
        }

        /**
         * An Async wrapper for UntagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        void UntagResourceAsync(const UntagResourceRequestT& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ChimeSDKMessagingClient::UntagResource, request, handler, context);
        }

        /**
         * <p>Update a channel's attributes.</p> <p> <b>Restriction</b>: You can't change a
         * channel's privacy. </p>  <p>The <code>x-amz-chime-bearer</code> request
         * header is mandatory. Use the ARN of the <code>AppInstanceUser</code> or
         * <code>AppInstanceBot</code> that makes the API call as the value in the
         * header.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-messaging-2021-05-15/UpdateChannel">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateChannelOutcome UpdateChannel(const Model::UpdateChannelRequest& request) const;

        /**
         * A Callable wrapper for UpdateChannel that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateChannelRequestT = Model::UpdateChannelRequest>
        Model::UpdateChannelOutcomeCallable UpdateChannelCallable(const UpdateChannelRequestT& request) const
        {
            return SubmitCallable(&ChimeSDKMessagingClient::UpdateChannel, request);
        }

        /**
         * An Async wrapper for UpdateChannel that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateChannelRequestT = Model::UpdateChannelRequest>
        void UpdateChannelAsync(const UpdateChannelRequestT& request, const UpdateChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ChimeSDKMessagingClient::UpdateChannel, request, handler, context);
        }

        /**
         * <p>Updates channel flow attributes. This is a developer API.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-messaging-2021-05-15/UpdateChannelFlow">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateChannelFlowOutcome UpdateChannelFlow(const Model::UpdateChannelFlowRequest& request) const;

        /**
         * A Callable wrapper for UpdateChannelFlow that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateChannelFlowRequestT = Model::UpdateChannelFlowRequest>
        Model::UpdateChannelFlowOutcomeCallable UpdateChannelFlowCallable(const UpdateChannelFlowRequestT& request) const
        {
            return SubmitCallable(&ChimeSDKMessagingClient::UpdateChannelFlow, request);
        }

        /**
         * An Async wrapper for UpdateChannelFlow that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateChannelFlowRequestT = Model::UpdateChannelFlowRequest>
        void UpdateChannelFlowAsync(const UpdateChannelFlowRequestT& request, const UpdateChannelFlowResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ChimeSDKMessagingClient::UpdateChannelFlow, request, handler, context);
        }

        /**
         * <p>Updates the content of a message.</p>  <p>The
         * <code>x-amz-chime-bearer</code> request header is mandatory. Use the ARN of the
         * <code>AppInstanceUser</code> or <code>AppInstanceBot</code> that makes the API
         * call as the value in the header.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-messaging-2021-05-15/UpdateChannelMessage">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateChannelMessageOutcome UpdateChannelMessage(const Model::UpdateChannelMessageRequest& request) const;

        /**
         * A Callable wrapper for UpdateChannelMessage that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateChannelMessageRequestT = Model::UpdateChannelMessageRequest>
        Model::UpdateChannelMessageOutcomeCallable UpdateChannelMessageCallable(const UpdateChannelMessageRequestT& request) const
        {
            return SubmitCallable(&ChimeSDKMessagingClient::UpdateChannelMessage, request);
        }

        /**
         * An Async wrapper for UpdateChannelMessage that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateChannelMessageRequestT = Model::UpdateChannelMessageRequest>
        void UpdateChannelMessageAsync(const UpdateChannelMessageRequestT& request, const UpdateChannelMessageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ChimeSDKMessagingClient::UpdateChannelMessage, request, handler, context);
        }

        /**
         * <p>The details of the time when a user last read messages in a channel.</p>
         *  <p>The <code>x-amz-chime-bearer</code> request header is mandatory. Use
         * the ARN of the <code>AppInstanceUser</code> or <code>AppInstanceBot</code> that
         * makes the API call as the value in the header.</p> <p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-messaging-2021-05-15/UpdateChannelReadMarker">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateChannelReadMarkerOutcome UpdateChannelReadMarker(const Model::UpdateChannelReadMarkerRequest& request) const;

        /**
         * A Callable wrapper for UpdateChannelReadMarker that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateChannelReadMarkerRequestT = Model::UpdateChannelReadMarkerRequest>
        Model::UpdateChannelReadMarkerOutcomeCallable UpdateChannelReadMarkerCallable(const UpdateChannelReadMarkerRequestT& request) const
        {
            return SubmitCallable(&ChimeSDKMessagingClient::UpdateChannelReadMarker, request);
        }

        /**
         * An Async wrapper for UpdateChannelReadMarker that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateChannelReadMarkerRequestT = Model::UpdateChannelReadMarkerRequest>
        void UpdateChannelReadMarkerAsync(const UpdateChannelReadMarkerRequestT& request, const UpdateChannelReadMarkerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ChimeSDKMessagingClient::UpdateChannelReadMarker, request, handler, context);
        }


      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<ChimeSDKMessagingEndpointProviderBase>& accessEndpointProvider();
    private:
      friend class Aws::Client::ClientWithAsyncTemplateMethods<ChimeSDKMessagingClient>;
      void init(const ChimeSDKMessagingClientConfiguration& clientConfiguration);

      ChimeSDKMessagingClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<ChimeSDKMessagingEndpointProviderBase> m_endpointProvider;
  };

} // namespace ChimeSDKMessaging
} // namespace Aws
