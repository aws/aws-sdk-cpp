/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ivschat/Ivschat_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/ivschat/IvschatServiceClientModel.h>

namespace Aws
{
namespace ivschat
{
  /**
   * <p> <b>Introduction</b> </p> <p>The Amazon IVS Chat control-plane API enables
   * you to create and manage Amazon IVS Chat resources. You also need to integrate
   * with the <a
   * href="https://docs.aws.amazon.com/ivs/latest/chatmsgapireference/chat-messaging-api.html">
   * Amazon IVS Chat Messaging API</a>, to enable users to interact with chat rooms
   * in real time.</p> <p>The API is an AWS regional service. For a list of supported
   * regions and Amazon IVS Chat HTTPS service endpoints, see the Amazon IVS Chat
   * information on the <a
   * href="https://docs.aws.amazon.com/general/latest/gr/ivs.html">Amazon IVS
   * page</a> in the <i>AWS General Reference</i>. </p> <p> <b>Notes on
   * terminology:</b> </p> <ul> <li> <p>You create service applications using the
   * Amazon IVS Chat API. We refer to these as <i>applications</i>.</p> </li> <li>
   * <p>You create front-end client applications (browser and Android/iOS apps) using
   * the Amazon IVS Chat Messaging API. We refer to these as <i>clients</i>. </p>
   * </li> </ul> <p> <b>Resources</b> </p> <p>The following resources are part of
   * Amazon IVS Chat:</p> <ul> <li> <p> <b>LoggingConfiguration</b> — A configuration
   * that allows customers to store and record sent messages in a chat room. See the
   * Logging Configuration endpoints for more information.</p> </li> <li> <p>
   * <b>Room</b> — The central Amazon IVS Chat resource through which clients connect
   * to and exchange chat messages. See the Room endpoints for more information.</p>
   * </li> </ul> <p> <b>Tagging</b> </p> <p>A <i>tag</i> is a metadata label that you
   * assign to an AWS resource. A tag comprises a <i>key</i> and a <i>value</i>, both
   * set by you. For example, you might set a tag as <code>topic:nature</code> to
   * label a particular video category. See <a
   * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html">Tagging
   * AWS Resources</a> for more information, including restrictions that apply to
   * tags and "Tag naming limits and requirements"; Amazon IVS Chat has no
   * service-specific constraints beyond what is documented there.</p> <p>Tags can
   * help you identify and organize your AWS resources. For example, you can use the
   * same tag for different resources to indicate that they are related. You can also
   * use tags to manage access (see <a
   * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/access_tags.html">Access
   * Tags</a>).</p> <p>The Amazon IVS Chat API has these tag-related endpoints:
   * <a>TagResource</a>, <a>UntagResource</a>, and <a>ListTagsForResource</a>. The
   * following resource supports tagging: Room.</p> <p>At most 50 tags can be applied
   * to a resource.</p> <p> <b>API Access Security</b> </p> <p>Your Amazon IVS Chat
   * applications (service applications and clients) must be authenticated and
   * authorized to access Amazon IVS Chat resources. Note the differences between
   * these concepts:</p> <ul> <li> <p> <i>Authentication</i> is about verifying
   * identity. Requests to the Amazon IVS Chat API must be signed to verify your
   * identity.</p> </li> <li> <p> <i>Authorization</i> is about granting permissions.
   * Your IAM roles need to have permissions for Amazon IVS Chat API requests.</p>
   * </li> </ul> <p>Users (viewers) connect to a room using secure access tokens that
   * you create using the <a>CreateChatToken</a> endpoint through the AWS SDK. You
   * call CreateChatToken for every user’s chat session, passing identity and
   * authorization information about the user.</p> <p> <b>Signing API Requests</b>
   * </p> <p>HTTP API requests must be signed with an AWS SigV4 signature using your
   * AWS security credentials. The AWS Command Line Interface (CLI) and the AWS SDKs
   * take care of signing the underlying API calls for you. However, if your
   * application calls the Amazon IVS Chat HTTP API directly, it’s your
   * responsibility to sign the requests.</p> <p>You generate a signature using valid
   * AWS credentials for an IAM role that has permission to perform the requested
   * action. For example, DeleteMessage requests must be made using an IAM role that
   * has the <code>ivschat:DeleteMessage</code> permission.</p> <p>For more
   * information:</p> <ul> <li> <p>Authentication and generating signatures — See <a
   * href="https://docs.aws.amazon.com/AmazonS3/latest/API/sig-v4-authenticating-requests.html">Authenticating
   * Requests (Amazon Web Services Signature Version 4)</a> in the <i>Amazon Web
   * Services General Reference</i>.</p> </li> <li> <p>Managing Amazon IVS
   * permissions — See <a
   * href="https://docs.aws.amazon.com/ivs/latest/userguide/security-iam.html">Identity
   * and Access Management</a> on the Security page of the <i>Amazon IVS User
   * Guide</i>.</p> </li> </ul> <p> <b>Amazon Resource Names (ARNs)</b> </p> <p>ARNs
   * uniquely identify AWS resources. An ARN is required when you need to specify a
   * resource unambiguously across all of AWS, such as in IAM policies and API calls.
   * For more information, see <a
   * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
   * Resource Names</a> in the <i>AWS General Reference</i>.</p> <p> <b>Messaging
   * Endpoints</b> </p> <ul> <li> <p> <a>DeleteMessage</a> — Sends an event to a
   * specific room which directs clients to delete a specific message; that is,
   * unrender it from view and delete it from the client’s chat history. This event’s
   * <code>EventName</code> is <code>aws:DELETE_MESSAGE</code>. This replicates the
   * <a
   * href="https://docs.aws.amazon.com/ivs/latest/chatmsgapireference/actions-deletemessage-publish.html">
   * DeleteMessage</a> WebSocket operation in the Amazon IVS Chat Messaging API.</p>
   * </li> <li> <p> <a>DisconnectUser</a> — Disconnects all connections using a
   * specified user ID from a room. This replicates the <a
   * href="https://docs.aws.amazon.com/ivs/latest/chatmsgapireference/actions-disconnectuser-publish.html">
   * DisconnectUser</a> WebSocket operation in the Amazon IVS Chat Messaging API.</p>
   * </li> <li> <p> <a>SendEvent</a> — Sends an event to a room. Use this within your
   * application’s business logic to send events to clients of a room; e.g., to
   * notify clients to change the way the chat UI is rendered.</p> </li> </ul> <p>
   * <b>Chat Token Endpoint</b> </p> <ul> <li> <p> <a>CreateChatToken</a> — Creates
   * an encrypted token that is used by a chat participant to establish an individual
   * WebSocket chat connection to a room. When the token is used to connect to chat,
   * the connection is valid for the session duration specified in the request. The
   * token becomes invalid at the token-expiration timestamp included in the
   * response.</p> </li> </ul> <p> <b>Room Endpoints</b> </p> <ul> <li> <p>
   * <a>CreateRoom</a> — Creates a room that allows clients to connect and pass
   * messages.</p> </li> <li> <p> <a>DeleteRoom</a> — Deletes the specified room.</p>
   * </li> <li> <p> <a>GetRoom</a> — Gets the specified room.</p> </li> <li> <p>
   * <a>ListRooms</a> — Gets summary information about all your rooms in the AWS
   * region where the API request is processed. </p> </li> <li> <p> <a>UpdateRoom</a>
   * — Updates a room’s configuration.</p> </li> </ul> <p> <b>Logging Configuration
   * Endpoints</b> </p> <ul> <li> <p> <a>CreateLoggingConfiguration</a> — Creates a
   * logging configuration that allows clients to store and record sent messages.</p>
   * </li> <li> <p> <a>DeleteLoggingConfiguration</a> — Deletes the specified logging
   * configuration.</p> </li> <li> <p> <a>GetLoggingConfiguration</a> — Gets the
   * specified logging configuration.</p> </li> <li> <p>
   * <a>ListLoggingConfigurations</a> — Gets summary information about all your
   * logging configurations in the AWS region where the API request is processed.</p>
   * </li> <li> <p> <a>UpdateLoggingConfiguration</a> — Updates a specified logging
   * configuration.</p> </li> </ul> <p> <b>Tags Endpoints</b> </p> <ul> <li> <p>
   * <a>ListTagsForResource</a> — Gets information about AWS tags for the specified
   * ARN.</p> </li> <li> <p> <a>TagResource</a> — Adds or updates tags for the AWS
   * resource with the specified ARN.</p> </li> <li> <p> <a>UntagResource</a> —
   * Removes tags from the resource with the specified ARN.</p> </li> </ul> <p>All
   * the above are HTTP operations. There is a separate <i>messaging</i> API for
   * managing Chat resources; see the <a
   * href="https://docs.aws.amazon.com/ivs/latest/chatmsgapireference/chat-messaging-api.html">
   * Amazon IVS Chat Messaging API Reference</a>.</p>
   */
  class AWS_IVSCHAT_API IvschatClient : public Aws::Client::AWSJsonClient, public Aws::Client::ClientWithAsyncTemplateMethods<IvschatClient>
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* SERVICE_NAME;
      static const char* ALLOCATION_TAG;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        IvschatClient(const Aws::ivschat::IvschatClientConfiguration& clientConfiguration = Aws::ivschat::IvschatClientConfiguration(),
                      std::shared_ptr<IvschatEndpointProviderBase> endpointProvider = Aws::MakeShared<IvschatEndpointProvider>(ALLOCATION_TAG));

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        IvschatClient(const Aws::Auth::AWSCredentials& credentials,
                      std::shared_ptr<IvschatEndpointProviderBase> endpointProvider = Aws::MakeShared<IvschatEndpointProvider>(ALLOCATION_TAG),
                      const Aws::ivschat::IvschatClientConfiguration& clientConfiguration = Aws::ivschat::IvschatClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        IvschatClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                      std::shared_ptr<IvschatEndpointProviderBase> endpointProvider = Aws::MakeShared<IvschatEndpointProvider>(ALLOCATION_TAG),
                      const Aws::ivschat::IvschatClientConfiguration& clientConfiguration = Aws::ivschat::IvschatClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        IvschatClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        IvschatClient(const Aws::Auth::AWSCredentials& credentials,
                      const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        IvschatClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                      const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~IvschatClient();

        /**
         * <p>Creates an encrypted token that is used by a chat participant to establish an
         * individual WebSocket chat connection to a room. When the token is used to
         * connect to chat, the connection is valid for the session duration specified in
         * the request. The token becomes invalid at the token-expiration timestamp
         * included in the response.</p> <p>Use the <code>capabilities</code> field to
         * permit an end user to send messages or moderate a room.</p> <p>The
         * <code>attributes</code> field securely attaches structured data to the chat
         * session; the data is included within each message sent by the end user and
         * received by other participants in the room. Common use cases for attributes
         * include passing end-user profile data like an icon, display name, colors,
         * badges, and other display features.</p> <p>Encryption keys are owned by Amazon
         * IVS Chat and never used directly by your application.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ivschat-2020-07-14/CreateChatToken">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateChatTokenOutcome CreateChatToken(const Model::CreateChatTokenRequest& request) const;

        /**
         * A Callable wrapper for CreateChatToken that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateChatTokenOutcomeCallable CreateChatTokenCallable(const Model::CreateChatTokenRequest& request) const;

        /**
         * An Async wrapper for CreateChatToken that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateChatTokenAsync(const Model::CreateChatTokenRequest& request, const CreateChatTokenResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a logging configuration that allows clients to store and record sent
         * messages.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ivschat-2020-07-14/CreateLoggingConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateLoggingConfigurationOutcome CreateLoggingConfiguration(const Model::CreateLoggingConfigurationRequest& request) const;

        /**
         * A Callable wrapper for CreateLoggingConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateLoggingConfigurationOutcomeCallable CreateLoggingConfigurationCallable(const Model::CreateLoggingConfigurationRequest& request) const;

        /**
         * An Async wrapper for CreateLoggingConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateLoggingConfigurationAsync(const Model::CreateLoggingConfigurationRequest& request, const CreateLoggingConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a room that allows clients to connect and pass
         * messages.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ivschat-2020-07-14/CreateRoom">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateRoomOutcome CreateRoom(const Model::CreateRoomRequest& request) const;

        /**
         * A Callable wrapper for CreateRoom that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateRoomOutcomeCallable CreateRoomCallable(const Model::CreateRoomRequest& request) const;

        /**
         * An Async wrapper for CreateRoom that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateRoomAsync(const Model::CreateRoomRequest& request, const CreateRoomResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the specified logging configuration.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ivschat-2020-07-14/DeleteLoggingConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteLoggingConfigurationOutcome DeleteLoggingConfiguration(const Model::DeleteLoggingConfigurationRequest& request) const;

        /**
         * A Callable wrapper for DeleteLoggingConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteLoggingConfigurationOutcomeCallable DeleteLoggingConfigurationCallable(const Model::DeleteLoggingConfigurationRequest& request) const;

        /**
         * An Async wrapper for DeleteLoggingConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteLoggingConfigurationAsync(const Model::DeleteLoggingConfigurationRequest& request, const DeleteLoggingConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Sends an event to a specific room which directs clients to delete a specific
         * message; that is, unrender it from view and delete it from the client’s chat
         * history. This event’s <code>EventName</code> is <code>aws:DELETE_MESSAGE</code>.
         * This replicates the <a
         * href="https://docs.aws.amazon.com/ivs/latest/chatmsgapireference/actions-deletemessage-publish.html">
         * DeleteMessage</a> WebSocket operation in the Amazon IVS Chat Messaging
         * API.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ivschat-2020-07-14/DeleteMessage">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteMessageOutcome DeleteMessage(const Model::DeleteMessageRequest& request) const;

        /**
         * A Callable wrapper for DeleteMessage that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteMessageOutcomeCallable DeleteMessageCallable(const Model::DeleteMessageRequest& request) const;

        /**
         * An Async wrapper for DeleteMessage that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteMessageAsync(const Model::DeleteMessageRequest& request, const DeleteMessageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the specified room.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ivschat-2020-07-14/DeleteRoom">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteRoomOutcome DeleteRoom(const Model::DeleteRoomRequest& request) const;

        /**
         * A Callable wrapper for DeleteRoom that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteRoomOutcomeCallable DeleteRoomCallable(const Model::DeleteRoomRequest& request) const;

        /**
         * An Async wrapper for DeleteRoom that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteRoomAsync(const Model::DeleteRoomRequest& request, const DeleteRoomResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Disconnects all connections using a specified user ID from a room. This
         * replicates the <a
         * href="https://docs.aws.amazon.com/ivs/latest/chatmsgapireference/actions-disconnectuser-publish.html">
         * DisconnectUser</a> WebSocket operation in the Amazon IVS Chat Messaging
         * API.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ivschat-2020-07-14/DisconnectUser">AWS
         * API Reference</a></p>
         */
        virtual Model::DisconnectUserOutcome DisconnectUser(const Model::DisconnectUserRequest& request) const;

        /**
         * A Callable wrapper for DisconnectUser that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DisconnectUserOutcomeCallable DisconnectUserCallable(const Model::DisconnectUserRequest& request) const;

        /**
         * An Async wrapper for DisconnectUser that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DisconnectUserAsync(const Model::DisconnectUserRequest& request, const DisconnectUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets the specified logging configuration.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ivschat-2020-07-14/GetLoggingConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::GetLoggingConfigurationOutcome GetLoggingConfiguration(const Model::GetLoggingConfigurationRequest& request) const;

        /**
         * A Callable wrapper for GetLoggingConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetLoggingConfigurationOutcomeCallable GetLoggingConfigurationCallable(const Model::GetLoggingConfigurationRequest& request) const;

        /**
         * An Async wrapper for GetLoggingConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetLoggingConfigurationAsync(const Model::GetLoggingConfigurationRequest& request, const GetLoggingConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets the specified room.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ivschat-2020-07-14/GetRoom">AWS API
         * Reference</a></p>
         */
        virtual Model::GetRoomOutcome GetRoom(const Model::GetRoomRequest& request) const;

        /**
         * A Callable wrapper for GetRoom that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetRoomOutcomeCallable GetRoomCallable(const Model::GetRoomRequest& request) const;

        /**
         * An Async wrapper for GetRoom that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetRoomAsync(const Model::GetRoomRequest& request, const GetRoomResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets summary information about all your logging configurations in the AWS
         * region where the API request is processed.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ivschat-2020-07-14/ListLoggingConfigurations">AWS
         * API Reference</a></p>
         */
        virtual Model::ListLoggingConfigurationsOutcome ListLoggingConfigurations(const Model::ListLoggingConfigurationsRequest& request) const;

        /**
         * A Callable wrapper for ListLoggingConfigurations that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListLoggingConfigurationsOutcomeCallable ListLoggingConfigurationsCallable(const Model::ListLoggingConfigurationsRequest& request) const;

        /**
         * An Async wrapper for ListLoggingConfigurations that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListLoggingConfigurationsAsync(const Model::ListLoggingConfigurationsRequest& request, const ListLoggingConfigurationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets summary information about all your rooms in the AWS region where the API
         * request is processed. Results are sorted in descending order of
         * <code>updateTime</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ivschat-2020-07-14/ListRooms">AWS
         * API Reference</a></p>
         */
        virtual Model::ListRoomsOutcome ListRooms(const Model::ListRoomsRequest& request) const;

        /**
         * A Callable wrapper for ListRooms that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListRoomsOutcomeCallable ListRoomsCallable(const Model::ListRoomsRequest& request) const;

        /**
         * An Async wrapper for ListRooms that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListRoomsAsync(const Model::ListRoomsRequest& request, const ListRoomsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets information about AWS tags for the specified ARN.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ivschat-2020-07-14/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;

        /**
         * A Callable wrapper for ListTagsForResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const Model::ListTagsForResourceRequest& request) const;

        /**
         * An Async wrapper for ListTagsForResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListTagsForResourceAsync(const Model::ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Sends an event to a room. Use this within your application’s business logic
         * to send events to clients of a room; e.g., to notify clients to change the way
         * the chat UI is rendered.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ivschat-2020-07-14/SendEvent">AWS
         * API Reference</a></p>
         */
        virtual Model::SendEventOutcome SendEvent(const Model::SendEventRequest& request) const;

        /**
         * A Callable wrapper for SendEvent that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::SendEventOutcomeCallable SendEventCallable(const Model::SendEventRequest& request) const;

        /**
         * An Async wrapper for SendEvent that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void SendEventAsync(const Model::SendEventRequest& request, const SendEventResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Adds or updates tags for the AWS resource with the specified
         * ARN.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ivschat-2020-07-14/TagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;

        /**
         * A Callable wrapper for TagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::TagResourceOutcomeCallable TagResourceCallable(const Model::TagResourceRequest& request) const;

        /**
         * An Async wrapper for TagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void TagResourceAsync(const Model::TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Removes tags from the resource with the specified ARN.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ivschat-2020-07-14/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;

        /**
         * A Callable wrapper for UntagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UntagResourceOutcomeCallable UntagResourceCallable(const Model::UntagResourceRequest& request) const;

        /**
         * An Async wrapper for UntagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UntagResourceAsync(const Model::UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates a specified logging configuration.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ivschat-2020-07-14/UpdateLoggingConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateLoggingConfigurationOutcome UpdateLoggingConfiguration(const Model::UpdateLoggingConfigurationRequest& request) const;

        /**
         * A Callable wrapper for UpdateLoggingConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateLoggingConfigurationOutcomeCallable UpdateLoggingConfigurationCallable(const Model::UpdateLoggingConfigurationRequest& request) const;

        /**
         * An Async wrapper for UpdateLoggingConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateLoggingConfigurationAsync(const Model::UpdateLoggingConfigurationRequest& request, const UpdateLoggingConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates a room’s configuration.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ivschat-2020-07-14/UpdateRoom">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateRoomOutcome UpdateRoom(const Model::UpdateRoomRequest& request) const;

        /**
         * A Callable wrapper for UpdateRoom that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateRoomOutcomeCallable UpdateRoomCallable(const Model::UpdateRoomRequest& request) const;

        /**
         * An Async wrapper for UpdateRoom that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateRoomAsync(const Model::UpdateRoomRequest& request, const UpdateRoomResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<IvschatEndpointProviderBase>& accessEndpointProvider();
    private:
      friend class Aws::Client::ClientWithAsyncTemplateMethods<IvschatClient>;
      void init(const IvschatClientConfiguration& clientConfiguration);

      IvschatClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<IvschatEndpointProviderBase> m_endpointProvider;
  };

} // namespace ivschat
} // namespace Aws
