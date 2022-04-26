/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ivschat/Ivschat_EXPORTS.h>
#include <aws/ivschat/IvschatErrors.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/ivschat/model/CreateChatTokenResult.h>
#include <aws/ivschat/model/CreateRoomResult.h>
#include <aws/ivschat/model/DeleteMessageResult.h>
#include <aws/ivschat/model/DisconnectUserResult.h>
#include <aws/ivschat/model/GetRoomResult.h>
#include <aws/ivschat/model/ListRoomsResult.h>
#include <aws/ivschat/model/ListTagsForResourceResult.h>
#include <aws/ivschat/model/SendEventResult.h>
#include <aws/ivschat/model/TagResourceResult.h>
#include <aws/ivschat/model/UntagResourceResult.h>
#include <aws/ivschat/model/UpdateRoomResult.h>
#include <aws/core/NoResult.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <future>
#include <functional>

namespace Aws
{

namespace Http
{
  class HttpClient;
  class HttpClientFactory;
} // namespace Http

namespace Utils
{
  template< typename R, typename E> class Outcome;
namespace Threading
{
  class Executor;
} // namespace Threading
} // namespace Utils

namespace Auth
{
  class AWSCredentials;
  class AWSCredentialsProvider;
} // namespace Auth

namespace Client
{
  class RetryStrategy;
} // namespace Client

namespace ivschat
{

namespace Model
{
        class CreateChatTokenRequest;
        class CreateRoomRequest;
        class DeleteMessageRequest;
        class DeleteRoomRequest;
        class DisconnectUserRequest;
        class GetRoomRequest;
        class ListRoomsRequest;
        class ListTagsForResourceRequest;
        class SendEventRequest;
        class TagResourceRequest;
        class UntagResourceRequest;
        class UpdateRoomRequest;

        typedef Aws::Utils::Outcome<CreateChatTokenResult, IvschatError> CreateChatTokenOutcome;
        typedef Aws::Utils::Outcome<CreateRoomResult, IvschatError> CreateRoomOutcome;
        typedef Aws::Utils::Outcome<DeleteMessageResult, IvschatError> DeleteMessageOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, IvschatError> DeleteRoomOutcome;
        typedef Aws::Utils::Outcome<DisconnectUserResult, IvschatError> DisconnectUserOutcome;
        typedef Aws::Utils::Outcome<GetRoomResult, IvschatError> GetRoomOutcome;
        typedef Aws::Utils::Outcome<ListRoomsResult, IvschatError> ListRoomsOutcome;
        typedef Aws::Utils::Outcome<ListTagsForResourceResult, IvschatError> ListTagsForResourceOutcome;
        typedef Aws::Utils::Outcome<SendEventResult, IvschatError> SendEventOutcome;
        typedef Aws::Utils::Outcome<TagResourceResult, IvschatError> TagResourceOutcome;
        typedef Aws::Utils::Outcome<UntagResourceResult, IvschatError> UntagResourceOutcome;
        typedef Aws::Utils::Outcome<UpdateRoomResult, IvschatError> UpdateRoomOutcome;

        typedef std::future<CreateChatTokenOutcome> CreateChatTokenOutcomeCallable;
        typedef std::future<CreateRoomOutcome> CreateRoomOutcomeCallable;
        typedef std::future<DeleteMessageOutcome> DeleteMessageOutcomeCallable;
        typedef std::future<DeleteRoomOutcome> DeleteRoomOutcomeCallable;
        typedef std::future<DisconnectUserOutcome> DisconnectUserOutcomeCallable;
        typedef std::future<GetRoomOutcome> GetRoomOutcomeCallable;
        typedef std::future<ListRoomsOutcome> ListRoomsOutcomeCallable;
        typedef std::future<ListTagsForResourceOutcome> ListTagsForResourceOutcomeCallable;
        typedef std::future<SendEventOutcome> SendEventOutcomeCallable;
        typedef std::future<TagResourceOutcome> TagResourceOutcomeCallable;
        typedef std::future<UntagResourceOutcome> UntagResourceOutcomeCallable;
        typedef std::future<UpdateRoomOutcome> UpdateRoomOutcomeCallable;
} // namespace Model

  class IvschatClient;

    typedef std::function<void(const IvschatClient*, const Model::CreateChatTokenRequest&, const Model::CreateChatTokenOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateChatTokenResponseReceivedHandler;
    typedef std::function<void(const IvschatClient*, const Model::CreateRoomRequest&, const Model::CreateRoomOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateRoomResponseReceivedHandler;
    typedef std::function<void(const IvschatClient*, const Model::DeleteMessageRequest&, const Model::DeleteMessageOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteMessageResponseReceivedHandler;
    typedef std::function<void(const IvschatClient*, const Model::DeleteRoomRequest&, const Model::DeleteRoomOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteRoomResponseReceivedHandler;
    typedef std::function<void(const IvschatClient*, const Model::DisconnectUserRequest&, const Model::DisconnectUserOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DisconnectUserResponseReceivedHandler;
    typedef std::function<void(const IvschatClient*, const Model::GetRoomRequest&, const Model::GetRoomOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetRoomResponseReceivedHandler;
    typedef std::function<void(const IvschatClient*, const Model::ListRoomsRequest&, const Model::ListRoomsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListRoomsResponseReceivedHandler;
    typedef std::function<void(const IvschatClient*, const Model::ListTagsForResourceRequest&, const Model::ListTagsForResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsForResourceResponseReceivedHandler;
    typedef std::function<void(const IvschatClient*, const Model::SendEventRequest&, const Model::SendEventOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > SendEventResponseReceivedHandler;
    typedef std::function<void(const IvschatClient*, const Model::TagResourceRequest&, const Model::TagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TagResourceResponseReceivedHandler;
    typedef std::function<void(const IvschatClient*, const Model::UntagResourceRequest&, const Model::UntagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UntagResourceResponseReceivedHandler;
    typedef std::function<void(const IvschatClient*, const Model::UpdateRoomRequest&, const Model::UpdateRoomOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateRoomResponseReceivedHandler;

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
   * </li> </ul> <pre><code> &lt;p&gt; &lt;b&gt;Resources&lt;/b&gt; &lt;/p&gt;
   * &lt;p&gt;The following resource is part of Amazon IVS Chat:&lt;/p&gt; &lt;ul&gt;
   * &lt;li&gt; &lt;p&gt; &lt;b&gt;Room&lt;/b&gt; — The central Amazon IVS Chat
   * resource through which clients connect to and exchange chat messages. See the
   * Room endpoints for more information.&lt;/p&gt; &lt;/li&gt; &lt;/ul&gt; &lt;p&gt;
   * &lt;b&gt;API Access Security&lt;/b&gt; &lt;/p&gt; &lt;p&gt;Your Amazon IVS Chat
   * applications (service applications and clients) must be authenticated and
   * authorized to access Amazon IVS Chat resources. Note the differences between
   * these concepts:&lt;/p&gt; &lt;ul&gt; &lt;li&gt; &lt;p&gt;
   * &lt;i&gt;Authentication&lt;/i&gt; is about verifying identity. Requests to the
   * Amazon IVS Chat API must be signed to verify your identity.&lt;/p&gt;
   * &lt;/li&gt; &lt;li&gt; &lt;p&gt; &lt;i&gt;Authorization&lt;/i&gt; is about
   * granting permissions. Your IAM roles need to have permissions for Amazon IVS
   * Chat API requests.&lt;/p&gt; &lt;/li&gt; &lt;/ul&gt; &lt;p&gt;Users (viewers)
   * connect to a room using secure access tokens that you create using the
   * &lt;a&gt;CreateChatToken&lt;/a&gt; endpoint through the AWS SDK. You call
   * CreateChatToken for every user’s chat session, passing identity and
   * authorization information about the user.&lt;/p&gt; &lt;p&gt; &lt;b&gt;Signing
   * API Requests&lt;/b&gt; &lt;/p&gt; &lt;p&gt;HTTP API requests must be signed with
   * an AWS SigV4 signature using your AWS security credentials. The AWS Command Line
   * Interface (CLI) and the AWS SDKs take care of signing the underlying API calls
   * for you. However, if your application calls the Amazon IVS Chat HTTP API
   * directly, it’s your responsibility to sign the requests.&lt;/p&gt; &lt;p&gt;You
   * generate a signature using valid AWS credentials for an IAM role that has
   * permission to perform the requested action. For example, DeleteMessage requests
   * must be made using an IAM role that has the
   * &lt;code&gt;ivschat:DeleteMessage&lt;/code&gt; permission.&lt;/p&gt;
   * &lt;p&gt;For more information:&lt;/p&gt; &lt;ul&gt; &lt;li&gt;
   * &lt;p&gt;Authentication and generating signatures — See &lt;a
   * href=&quot;https://docs.aws.amazon.com/AmazonS3/latest/API/sig-v4-authenticating-requests.html&quot;&gt;Authenticating
   * Requests (Amazon Web Services Signature Version 4)&lt;/a&gt; in the
   * &lt;i&gt;Amazon Web Services General Reference&lt;/i&gt;.&lt;/p&gt; &lt;/li&gt;
   * &lt;li&gt; &lt;p&gt;Managing Amazon IVS permissions — See &lt;a
   * href=&quot;https://docs.aws.amazon.com/ivs/latest/userguide/security-iam.html&quot;&gt;Identity
   * and Access Management&lt;/a&gt; on the Security page of the &lt;i&gt;Amazon IVS
   * User Guide&lt;/i&gt;.&lt;/p&gt; &lt;/li&gt; &lt;/ul&gt; &lt;p&gt;
   * &lt;b&gt;Messaging Endpoints&lt;/b&gt; &lt;/p&gt; &lt;ul&gt; &lt;li&gt;
   * &lt;p&gt; &lt;a&gt;DeleteMessage&lt;/a&gt; — Sends an event to a specific room
   * which directs clients to delete a specific message; that is, unrender it from
   * view and delete it from the client’s chat history. This event’s
   * &lt;code&gt;EventName&lt;/code&gt; is
   * &lt;code&gt;aws:DELETE_MESSAGE&lt;/code&gt;. This replicates the &lt;a
   * href=&quot;https://docs.aws.amazon.com/ivs/latest/chatmsgapireference/actions-deletemessage-publish.html&quot;&gt;
   * DeleteMessage&lt;/a&gt; WebSocket operation in the Amazon IVS Chat Messaging
   * API.&lt;/p&gt; &lt;/li&gt; &lt;li&gt; &lt;p&gt;
   * &lt;a&gt;DisconnectUser&lt;/a&gt; — Disconnects all connections using a
   * specified user ID from a room. This replicates the &lt;a
   * href=&quot;https://docs.aws.amazon.com/ivs/latest/chatmsgapireference/actions-disconnectuser-publish.html&quot;&gt;
   * DisconnectUser&lt;/a&gt; WebSocket operation in the Amazon IVS Chat Messaging
   * API.&lt;/p&gt; &lt;/li&gt; &lt;li&gt; &lt;p&gt; &lt;a&gt;SendEvent&lt;/a&gt; —
   * Sends an event to a room. Use this within your application’s business logic to
   * send events to clients of a room; e.g., to notify clients to change the way the
   * chat UI is rendered.&lt;/p&gt; &lt;/li&gt; &lt;/ul&gt; &lt;p&gt; &lt;b&gt;Chat
   * Token Endpoint&lt;/b&gt; &lt;/p&gt; &lt;ul&gt; &lt;li&gt; &lt;p&gt;
   * &lt;a&gt;CreateChatToken&lt;/a&gt; — Creates an encrypted token that is used to
   * establish an individual WebSocket connection to a room. The token is valid for
   * one minute, and a connection (session) established with the token is valid for
   * the specified duration.&lt;/p&gt; &lt;/li&gt; &lt;/ul&gt; &lt;p&gt;
   * &lt;b&gt;Room Endpoints&lt;/b&gt; &lt;/p&gt; &lt;ul&gt; &lt;li&gt; &lt;p&gt;
   * &lt;a&gt;CreateRoom&lt;/a&gt; — Creates a room that allows clients to connect
   * and pass messages.&lt;/p&gt; &lt;/li&gt; &lt;li&gt; &lt;p&gt;
   * &lt;a&gt;DeleteRoom&lt;/a&gt; — Deletes the specified room.&lt;/p&gt;
   * &lt;/li&gt; &lt;li&gt; &lt;p&gt; &lt;a&gt;GetRoom&lt;/a&gt; — Gets the specified
   * room.&lt;/p&gt; &lt;/li&gt; &lt;li&gt; &lt;p&gt; &lt;a&gt;ListRooms&lt;/a&gt; —
   * Gets summary information about all your rooms in the AWS region where the API
   * request is processed. &lt;/p&gt; &lt;/li&gt; &lt;li&gt; &lt;p&gt;
   * &lt;a&gt;UpdateRoom&lt;/a&gt; — Updates a room’s configuration.&lt;/p&gt;
   * &lt;/li&gt; &lt;/ul&gt; &lt;p&gt; &lt;b&gt;Tags Endpoints&lt;/b&gt; &lt;/p&gt;
   * &lt;ul&gt; &lt;li&gt; &lt;p&gt; &lt;a&gt;ListTagsForResource&lt;/a&gt; — Gets
   * information about AWS tags for the specified ARN.&lt;/p&gt; &lt;/li&gt;
   * &lt;li&gt; &lt;p&gt; &lt;a&gt;TagResource&lt;/a&gt; — Adds or updates tags for
   * the AWS resource with the specified ARN.&lt;/p&gt; &lt;/li&gt; &lt;li&gt;
   * &lt;p&gt; &lt;a&gt;UntagResource&lt;/a&gt; — Removes tags from the resource with
   * the specified ARN.&lt;/p&gt; &lt;/li&gt; &lt;/ul&gt; &lt;p&gt;All the above are
   * HTTP operations. There is a separate &lt;i&gt;messaging&lt;/i&gt; API for
   * managing Chat resources; see the &lt;a
   * href=&quot;https://docs.aws.amazon.com/ivs/latest/chatmsgapireference/chat-messaging-api.html&quot;&gt;
   * Amazon IVS Chat Messaging API Reference&lt;/a&gt;.&lt;/p&gt; </code></pre>
   */
  class AWS_IVSCHAT_API IvschatClient : public Aws::Client::AWSJsonClient
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        IvschatClient(const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        IvschatClient(const Aws::Auth::AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        IvschatClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
            const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

        virtual ~IvschatClient();


        /**
         * <p>Creates an encrypted token that is used to establish an individual WebSocket
         * connection to a room. The token is valid for one minute, and a connection
         * (session) established with the token is valid for the specified duration.</p>
         * <p>Encryption keys are owned by Amazon IVS Chat and never used directly by your
         * application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ivschat-2020-07-14/CreateChatToken">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateChatTokenOutcome CreateChatToken(const Model::CreateChatTokenRequest& request) const;

        /**
         * <p>Creates an encrypted token that is used to establish an individual WebSocket
         * connection to a room. The token is valid for one minute, and a connection
         * (session) established with the token is valid for the specified duration.</p>
         * <p>Encryption keys are owned by Amazon IVS Chat and never used directly by your
         * application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ivschat-2020-07-14/CreateChatToken">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateChatTokenOutcomeCallable CreateChatTokenCallable(const Model::CreateChatTokenRequest& request) const;

        /**
         * <p>Creates an encrypted token that is used to establish an individual WebSocket
         * connection to a room. The token is valid for one minute, and a connection
         * (session) established with the token is valid for the specified duration.</p>
         * <p>Encryption keys are owned by Amazon IVS Chat and never used directly by your
         * application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ivschat-2020-07-14/CreateChatToken">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateChatTokenAsync(const Model::CreateChatTokenRequest& request, const CreateChatTokenResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a room that allows clients to connect and pass
         * messages.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ivschat-2020-07-14/CreateRoom">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateRoomOutcome CreateRoom(const Model::CreateRoomRequest& request) const;

        /**
         * <p>Creates a room that allows clients to connect and pass
         * messages.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ivschat-2020-07-14/CreateRoom">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateRoomOutcomeCallable CreateRoomCallable(const Model::CreateRoomRequest& request) const;

        /**
         * <p>Creates a room that allows clients to connect and pass
         * messages.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ivschat-2020-07-14/CreateRoom">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateRoomAsync(const Model::CreateRoomRequest& request, const CreateRoomResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
         * <p>Sends an event to a specific room which directs clients to delete a specific
         * message; that is, unrender it from view and delete it from the client’s chat
         * history. This event’s <code>EventName</code> is <code>aws:DELETE_MESSAGE</code>.
         * This replicates the <a
         * href="https://docs.aws.amazon.com/ivs/latest/chatmsgapireference/actions-deletemessage-publish.html">
         * DeleteMessage</a> WebSocket operation in the Amazon IVS Chat Messaging
         * API.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ivschat-2020-07-14/DeleteMessage">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteMessageOutcomeCallable DeleteMessageCallable(const Model::DeleteMessageRequest& request) const;

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
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteMessageAsync(const Model::DeleteMessageRequest& request, const DeleteMessageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the specified room.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ivschat-2020-07-14/DeleteRoom">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteRoomOutcome DeleteRoom(const Model::DeleteRoomRequest& request) const;

        /**
         * <p>Deletes the specified room.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ivschat-2020-07-14/DeleteRoom">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteRoomOutcomeCallable DeleteRoomCallable(const Model::DeleteRoomRequest& request) const;

        /**
         * <p>Deletes the specified room.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ivschat-2020-07-14/DeleteRoom">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Disconnects all connections using a specified user ID from a room. This
         * replicates the <a
         * href="https://docs.aws.amazon.com/ivs/latest/chatmsgapireference/actions-disconnectuser-publish.html">
         * DisconnectUser</a> WebSocket operation in the Amazon IVS Chat Messaging
         * API.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ivschat-2020-07-14/DisconnectUser">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DisconnectUserOutcomeCallable DisconnectUserCallable(const Model::DisconnectUserRequest& request) const;

        /**
         * <p>Disconnects all connections using a specified user ID from a room. This
         * replicates the <a
         * href="https://docs.aws.amazon.com/ivs/latest/chatmsgapireference/actions-disconnectuser-publish.html">
         * DisconnectUser</a> WebSocket operation in the Amazon IVS Chat Messaging
         * API.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ivschat-2020-07-14/DisconnectUser">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DisconnectUserAsync(const Model::DisconnectUserRequest& request, const DisconnectUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets the specified room.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ivschat-2020-07-14/GetRoom">AWS API
         * Reference</a></p>
         */
        virtual Model::GetRoomOutcome GetRoom(const Model::GetRoomRequest& request) const;

        /**
         * <p>Gets the specified room.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ivschat-2020-07-14/GetRoom">AWS API
         * Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetRoomOutcomeCallable GetRoomCallable(const Model::GetRoomRequest& request) const;

        /**
         * <p>Gets the specified room.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ivschat-2020-07-14/GetRoom">AWS API
         * Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetRoomAsync(const Model::GetRoomRequest& request, const GetRoomResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets summary information about all your rooms in the AWS region where the API
         * request is processed. Results are sorted in descending order of
         * <code>updateTime</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ivschat-2020-07-14/ListRooms">AWS
         * API Reference</a></p>
         */
        virtual Model::ListRoomsOutcome ListRooms(const Model::ListRoomsRequest& request) const;

        /**
         * <p>Gets summary information about all your rooms in the AWS region where the API
         * request is processed. Results are sorted in descending order of
         * <code>updateTime</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ivschat-2020-07-14/ListRooms">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListRoomsOutcomeCallable ListRoomsCallable(const Model::ListRoomsRequest& request) const;

        /**
         * <p>Gets summary information about all your rooms in the AWS region where the API
         * request is processed. Results are sorted in descending order of
         * <code>updateTime</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ivschat-2020-07-14/ListRooms">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Gets information about AWS tags for the specified ARN.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ivschat-2020-07-14/ListTagsForResource">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const Model::ListTagsForResourceRequest& request) const;

        /**
         * <p>Gets information about AWS tags for the specified ARN.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ivschat-2020-07-14/ListTagsForResource">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Sends an event to a room. Use this within your application’s business logic
         * to send events to clients of a room; e.g., to notify clients to change the way
         * the chat UI is rendered.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ivschat-2020-07-14/SendEvent">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::SendEventOutcomeCallable SendEventCallable(const Model::SendEventRequest& request) const;

        /**
         * <p>Sends an event to a room. Use this within your application’s business logic
         * to send events to clients of a room; e.g., to notify clients to change the way
         * the chat UI is rendered.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ivschat-2020-07-14/SendEvent">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Adds or updates tags for the AWS resource with the specified
         * ARN.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ivschat-2020-07-14/TagResource">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::TagResourceOutcomeCallable TagResourceCallable(const Model::TagResourceRequest& request) const;

        /**
         * <p>Adds or updates tags for the AWS resource with the specified
         * ARN.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ivschat-2020-07-14/TagResource">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Removes tags from the resource with the specified ARN.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ivschat-2020-07-14/UntagResource">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UntagResourceOutcomeCallable UntagResourceCallable(const Model::UntagResourceRequest& request) const;

        /**
         * <p>Removes tags from the resource with the specified ARN.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ivschat-2020-07-14/UntagResource">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UntagResourceAsync(const Model::UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates a room’s configuration.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ivschat-2020-07-14/UpdateRoom">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateRoomOutcome UpdateRoom(const Model::UpdateRoomRequest& request) const;

        /**
         * <p>Updates a room’s configuration.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ivschat-2020-07-14/UpdateRoom">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateRoomOutcomeCallable UpdateRoomCallable(const Model::UpdateRoomRequest& request) const;

        /**
         * <p>Updates a room’s configuration.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ivschat-2020-07-14/UpdateRoom">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateRoomAsync(const Model::UpdateRoomRequest& request, const UpdateRoomResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


      void OverrideEndpoint(const Aws::String& endpoint);
    private:
      void init(const Aws::Client::ClientConfiguration& clientConfiguration);
        void CreateChatTokenAsyncHelper(const Model::CreateChatTokenRequest& request, const CreateChatTokenResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateRoomAsyncHelper(const Model::CreateRoomRequest& request, const CreateRoomResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteMessageAsyncHelper(const Model::DeleteMessageRequest& request, const DeleteMessageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteRoomAsyncHelper(const Model::DeleteRoomRequest& request, const DeleteRoomResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DisconnectUserAsyncHelper(const Model::DisconnectUserRequest& request, const DisconnectUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetRoomAsyncHelper(const Model::GetRoomRequest& request, const GetRoomResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListRoomsAsyncHelper(const Model::ListRoomsRequest& request, const ListRoomsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListTagsForResourceAsyncHelper(const Model::ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void SendEventAsyncHelper(const Model::SendEventRequest& request, const SendEventResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void TagResourceAsyncHelper(const Model::TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UntagResourceAsyncHelper(const Model::UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateRoomAsyncHelper(const Model::UpdateRoomRequest& request, const UpdateRoomResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;

      Aws::String m_uri;
      Aws::String m_configScheme;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
  };

} // namespace ivschat
} // namespace Aws
