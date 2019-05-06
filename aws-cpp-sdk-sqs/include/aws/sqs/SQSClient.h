/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/sqs/SQS_EXPORTS.h>
#include <aws/sqs/SQSErrors.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/AmazonSerializableWebServiceRequest.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/sqs/model/ChangeMessageVisibilityBatchResult.h>
#include <aws/sqs/model/CreateQueueResult.h>
#include <aws/sqs/model/DeleteMessageBatchResult.h>
#include <aws/sqs/model/GetQueueAttributesResult.h>
#include <aws/sqs/model/GetQueueUrlResult.h>
#include <aws/sqs/model/ListDeadLetterSourceQueuesResult.h>
#include <aws/sqs/model/ListQueueTagsResult.h>
#include <aws/sqs/model/ListQueuesResult.h>
#include <aws/sqs/model/ReceiveMessageResult.h>
#include <aws/sqs/model/SendMessageResult.h>
#include <aws/sqs/model/SendMessageBatchResult.h>
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

namespace Xml
{
  class XmlDocument;
} // namespace Xml
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

namespace SQS
{

namespace Model
{
        class AddPermissionRequest;
        class ChangeMessageVisibilityRequest;
        class ChangeMessageVisibilityBatchRequest;
        class CreateQueueRequest;
        class DeleteMessageRequest;
        class DeleteMessageBatchRequest;
        class DeleteQueueRequest;
        class GetQueueAttributesRequest;
        class GetQueueUrlRequest;
        class ListDeadLetterSourceQueuesRequest;
        class ListQueueTagsRequest;
        class ListQueuesRequest;
        class PurgeQueueRequest;
        class ReceiveMessageRequest;
        class RemovePermissionRequest;
        class SendMessageRequest;
        class SendMessageBatchRequest;
        class SetQueueAttributesRequest;
        class TagQueueRequest;
        class UntagQueueRequest;

        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<SQSErrors>> AddPermissionOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<SQSErrors>> ChangeMessageVisibilityOutcome;
        typedef Aws::Utils::Outcome<ChangeMessageVisibilityBatchResult, Aws::Client::AWSError<SQSErrors>> ChangeMessageVisibilityBatchOutcome;
        typedef Aws::Utils::Outcome<CreateQueueResult, Aws::Client::AWSError<SQSErrors>> CreateQueueOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<SQSErrors>> DeleteMessageOutcome;
        typedef Aws::Utils::Outcome<DeleteMessageBatchResult, Aws::Client::AWSError<SQSErrors>> DeleteMessageBatchOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<SQSErrors>> DeleteQueueOutcome;
        typedef Aws::Utils::Outcome<GetQueueAttributesResult, Aws::Client::AWSError<SQSErrors>> GetQueueAttributesOutcome;
        typedef Aws::Utils::Outcome<GetQueueUrlResult, Aws::Client::AWSError<SQSErrors>> GetQueueUrlOutcome;
        typedef Aws::Utils::Outcome<ListDeadLetterSourceQueuesResult, Aws::Client::AWSError<SQSErrors>> ListDeadLetterSourceQueuesOutcome;
        typedef Aws::Utils::Outcome<ListQueueTagsResult, Aws::Client::AWSError<SQSErrors>> ListQueueTagsOutcome;
        typedef Aws::Utils::Outcome<ListQueuesResult, Aws::Client::AWSError<SQSErrors>> ListQueuesOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<SQSErrors>> PurgeQueueOutcome;
        typedef Aws::Utils::Outcome<ReceiveMessageResult, Aws::Client::AWSError<SQSErrors>> ReceiveMessageOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<SQSErrors>> RemovePermissionOutcome;
        typedef Aws::Utils::Outcome<SendMessageResult, Aws::Client::AWSError<SQSErrors>> SendMessageOutcome;
        typedef Aws::Utils::Outcome<SendMessageBatchResult, Aws::Client::AWSError<SQSErrors>> SendMessageBatchOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<SQSErrors>> SetQueueAttributesOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<SQSErrors>> TagQueueOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<SQSErrors>> UntagQueueOutcome;

        typedef std::future<AddPermissionOutcome> AddPermissionOutcomeCallable;
        typedef std::future<ChangeMessageVisibilityOutcome> ChangeMessageVisibilityOutcomeCallable;
        typedef std::future<ChangeMessageVisibilityBatchOutcome> ChangeMessageVisibilityBatchOutcomeCallable;
        typedef std::future<CreateQueueOutcome> CreateQueueOutcomeCallable;
        typedef std::future<DeleteMessageOutcome> DeleteMessageOutcomeCallable;
        typedef std::future<DeleteMessageBatchOutcome> DeleteMessageBatchOutcomeCallable;
        typedef std::future<DeleteQueueOutcome> DeleteQueueOutcomeCallable;
        typedef std::future<GetQueueAttributesOutcome> GetQueueAttributesOutcomeCallable;
        typedef std::future<GetQueueUrlOutcome> GetQueueUrlOutcomeCallable;
        typedef std::future<ListDeadLetterSourceQueuesOutcome> ListDeadLetterSourceQueuesOutcomeCallable;
        typedef std::future<ListQueueTagsOutcome> ListQueueTagsOutcomeCallable;
        typedef std::future<ListQueuesOutcome> ListQueuesOutcomeCallable;
        typedef std::future<PurgeQueueOutcome> PurgeQueueOutcomeCallable;
        typedef std::future<ReceiveMessageOutcome> ReceiveMessageOutcomeCallable;
        typedef std::future<RemovePermissionOutcome> RemovePermissionOutcomeCallable;
        typedef std::future<SendMessageOutcome> SendMessageOutcomeCallable;
        typedef std::future<SendMessageBatchOutcome> SendMessageBatchOutcomeCallable;
        typedef std::future<SetQueueAttributesOutcome> SetQueueAttributesOutcomeCallable;
        typedef std::future<TagQueueOutcome> TagQueueOutcomeCallable;
        typedef std::future<UntagQueueOutcome> UntagQueueOutcomeCallable;
} // namespace Model

  class SQSClient;

    typedef std::function<void(const SQSClient*, const Model::AddPermissionRequest&, const Model::AddPermissionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AddPermissionResponseReceivedHandler;
    typedef std::function<void(const SQSClient*, const Model::ChangeMessageVisibilityRequest&, const Model::ChangeMessageVisibilityOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ChangeMessageVisibilityResponseReceivedHandler;
    typedef std::function<void(const SQSClient*, const Model::ChangeMessageVisibilityBatchRequest&, const Model::ChangeMessageVisibilityBatchOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ChangeMessageVisibilityBatchResponseReceivedHandler;
    typedef std::function<void(const SQSClient*, const Model::CreateQueueRequest&, const Model::CreateQueueOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateQueueResponseReceivedHandler;
    typedef std::function<void(const SQSClient*, const Model::DeleteMessageRequest&, const Model::DeleteMessageOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteMessageResponseReceivedHandler;
    typedef std::function<void(const SQSClient*, const Model::DeleteMessageBatchRequest&, const Model::DeleteMessageBatchOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteMessageBatchResponseReceivedHandler;
    typedef std::function<void(const SQSClient*, const Model::DeleteQueueRequest&, const Model::DeleteQueueOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteQueueResponseReceivedHandler;
    typedef std::function<void(const SQSClient*, const Model::GetQueueAttributesRequest&, const Model::GetQueueAttributesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetQueueAttributesResponseReceivedHandler;
    typedef std::function<void(const SQSClient*, const Model::GetQueueUrlRequest&, const Model::GetQueueUrlOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetQueueUrlResponseReceivedHandler;
    typedef std::function<void(const SQSClient*, const Model::ListDeadLetterSourceQueuesRequest&, const Model::ListDeadLetterSourceQueuesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListDeadLetterSourceQueuesResponseReceivedHandler;
    typedef std::function<void(const SQSClient*, const Model::ListQueueTagsRequest&, const Model::ListQueueTagsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListQueueTagsResponseReceivedHandler;
    typedef std::function<void(const SQSClient*, const Model::ListQueuesRequest&, const Model::ListQueuesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListQueuesResponseReceivedHandler;
    typedef std::function<void(const SQSClient*, const Model::PurgeQueueRequest&, const Model::PurgeQueueOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PurgeQueueResponseReceivedHandler;
    typedef std::function<void(const SQSClient*, const Model::ReceiveMessageRequest&, const Model::ReceiveMessageOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ReceiveMessageResponseReceivedHandler;
    typedef std::function<void(const SQSClient*, const Model::RemovePermissionRequest&, const Model::RemovePermissionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RemovePermissionResponseReceivedHandler;
    typedef std::function<void(const SQSClient*, const Model::SendMessageRequest&, const Model::SendMessageOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > SendMessageResponseReceivedHandler;
    typedef std::function<void(const SQSClient*, const Model::SendMessageBatchRequest&, const Model::SendMessageBatchOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > SendMessageBatchResponseReceivedHandler;
    typedef std::function<void(const SQSClient*, const Model::SetQueueAttributesRequest&, const Model::SetQueueAttributesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > SetQueueAttributesResponseReceivedHandler;
    typedef std::function<void(const SQSClient*, const Model::TagQueueRequest&, const Model::TagQueueOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TagQueueResponseReceivedHandler;
    typedef std::function<void(const SQSClient*, const Model::UntagQueueRequest&, const Model::UntagQueueOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UntagQueueResponseReceivedHandler;

  /**
   * <p>Welcome to the <i>Amazon Simple Queue Service API Reference</i>.</p>
   * <p>Amazon Simple Queue Service (Amazon SQS) is a reliable, highly-scalable
   * hosted queue for storing messages as they travel between applications or
   * microservices. Amazon SQS moves data between distributed application components
   * and helps you decouple these components.</p> <note> <p> <a
   * href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/standard-queues.html">Standard
   * queues</a> are available in all regions. <a
   * href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/FIFO-queues.html">FIFO
   * queues</a> are available in the US East (N. Virginia), US East (Ohio), US West
   * (Oregon), and EU (Ireland) regions.</p> </note> <p>You can use <a
   * href="http://aws.amazon.com/tools/#sdk">AWS SDKs</a> to access Amazon SQS using
   * your favorite programming language. The SDKs perform tasks such as the following
   * automatically:</p> <ul> <li> <p>Cryptographically sign your service requests</p>
   * </li> <li> <p>Retry requests</p> </li> <li> <p>Handle error responses</p> </li>
   * </ul> <p> <b>Additional Information</b> </p> <ul> <li> <p> <a
   * href="http://aws.amazon.com/sqs/">Amazon SQS Product Page</a> </p> </li> <li>
   * <p> <i>Amazon Simple Queue Service Developer Guide</i> </p> <ul> <li> <p> <a
   * href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/sqs-making-api-requests.html">Making
   * API Requests</a> </p> </li> <li> <p> <a
   * href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/sqs-message-attributes.html">Amazon
   * SQS Message Attributes</a> </p> </li> <li> <p> <a
   * href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/sqs-dead-letter-queues.html">Amazon
   * SQS Dead-Letter Queues</a> </p> </li> </ul> </li> <li> <p> <a
   * href="http://docs.aws.amazon.com/cli/latest/reference/sqs/index.html">Amazon SQS
   * in the <i>AWS CLI Command Reference</i> </a> </p> </li> <li> <p> <i>Amazon Web
   * Services General Reference</i> </p> <ul> <li> <p> <a
   * href="http://docs.aws.amazon.com/general/latest/gr/rande.html#sqs_region">Regions
   * and Endpoints</a> </p> </li> </ul> </li> </ul>
   */
  class AWS_SQS_API SQSClient : public Aws::Client::AWSXMLClient
  {
    public:
      typedef Aws::Client::AWSXMLClient BASECLASS;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        SQSClient(const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        SQSClient(const Aws::Auth::AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        SQSClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
            const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

        virtual ~SQSClient();

        inline virtual const char* GetServiceClientName() const override { return "SQS"; }


       /**
        * Converts any request object to a presigned URL with the GET method, using region for the signer and a timeout of 15 minutes.
        */
        Aws::String ConvertRequestToPresignedUrl(const Aws::AmazonSerializableWebServiceRequest& requestToConvert, const char* region) const;


        /**
         * <p>Adds a permission to a queue for a specific <a
         * href="http://docs.aws.amazon.com/general/latest/gr/glos-chap.html#P">principal</a>.
         * This allows sharing access to the queue.</p> <p>When you create a queue, you
         * have full control access rights for the queue. Only you, the owner of the queue,
         * can grant or deny permissions to the queue. For more information about these
         * permissions, see <a
         * href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/sqs-writing-an-sqs-policy.html#write-messages-to-shared-queue">Allow
         * Developers to Write Messages to a Shared Queue</a> in the <i>Amazon Simple Queue
         * Service Developer Guide</i>.</p> <note> <p> <code>AddPermission</code> writes an
         * Amazon-SQS-generated policy. If you want to write your own policy, use <code>
         * <a>SetQueueAttributes</a> </code> to upload your policy. For more information
         * about writing your own policy, see <a
         * href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/sqs-creating-custom-policies.html">Using
         * Custom Policies with the Amazon SQS Access Policy Language</a> in the <i>Amazon
         * Simple Queue Service Developer Guide</i>.</p> <p>An Amazon SQS policy can have a
         * maximum of 7 actions.</p> </note> <p>Some actions take lists of parameters.
         * These lists are specified using the <code>param.n</code> notation. Values of
         * <code>n</code> are integers starting from 1. For example, a parameter list with
         * two elements looks like this:</p> <p> <code>&amp;Attribute.1=first</code> </p>
         * <p> <code>&amp;Attribute.2=second</code> </p> <note> <p>Cross-account
         * permissions don't apply to this action. For more information, see see <a
         * href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/sqs-customer-managed-policy-examples.html#grant-cross-account-permissions-to-role-and-user-name">Grant
         * Cross-Account Permissions to a Role and a User Name</a> in the <i>Amazon Simple
         * Queue Service Developer Guide</i>.</p> </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sqs-2012-11-05/AddPermission">AWS
         * API Reference</a></p>
         */
        virtual Model::AddPermissionOutcome AddPermission(const Model::AddPermissionRequest& request) const;

        /**
         * <p>Adds a permission to a queue for a specific <a
         * href="http://docs.aws.amazon.com/general/latest/gr/glos-chap.html#P">principal</a>.
         * This allows sharing access to the queue.</p> <p>When you create a queue, you
         * have full control access rights for the queue. Only you, the owner of the queue,
         * can grant or deny permissions to the queue. For more information about these
         * permissions, see <a
         * href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/sqs-writing-an-sqs-policy.html#write-messages-to-shared-queue">Allow
         * Developers to Write Messages to a Shared Queue</a> in the <i>Amazon Simple Queue
         * Service Developer Guide</i>.</p> <note> <p> <code>AddPermission</code> writes an
         * Amazon-SQS-generated policy. If you want to write your own policy, use <code>
         * <a>SetQueueAttributes</a> </code> to upload your policy. For more information
         * about writing your own policy, see <a
         * href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/sqs-creating-custom-policies.html">Using
         * Custom Policies with the Amazon SQS Access Policy Language</a> in the <i>Amazon
         * Simple Queue Service Developer Guide</i>.</p> <p>An Amazon SQS policy can have a
         * maximum of 7 actions.</p> </note> <p>Some actions take lists of parameters.
         * These lists are specified using the <code>param.n</code> notation. Values of
         * <code>n</code> are integers starting from 1. For example, a parameter list with
         * two elements looks like this:</p> <p> <code>&amp;Attribute.1=first</code> </p>
         * <p> <code>&amp;Attribute.2=second</code> </p> <note> <p>Cross-account
         * permissions don't apply to this action. For more information, see see <a
         * href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/sqs-customer-managed-policy-examples.html#grant-cross-account-permissions-to-role-and-user-name">Grant
         * Cross-Account Permissions to a Role and a User Name</a> in the <i>Amazon Simple
         * Queue Service Developer Guide</i>.</p> </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sqs-2012-11-05/AddPermission">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AddPermissionOutcomeCallable AddPermissionCallable(const Model::AddPermissionRequest& request) const;

        /**
         * <p>Adds a permission to a queue for a specific <a
         * href="http://docs.aws.amazon.com/general/latest/gr/glos-chap.html#P">principal</a>.
         * This allows sharing access to the queue.</p> <p>When you create a queue, you
         * have full control access rights for the queue. Only you, the owner of the queue,
         * can grant or deny permissions to the queue. For more information about these
         * permissions, see <a
         * href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/sqs-writing-an-sqs-policy.html#write-messages-to-shared-queue">Allow
         * Developers to Write Messages to a Shared Queue</a> in the <i>Amazon Simple Queue
         * Service Developer Guide</i>.</p> <note> <p> <code>AddPermission</code> writes an
         * Amazon-SQS-generated policy. If you want to write your own policy, use <code>
         * <a>SetQueueAttributes</a> </code> to upload your policy. For more information
         * about writing your own policy, see <a
         * href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/sqs-creating-custom-policies.html">Using
         * Custom Policies with the Amazon SQS Access Policy Language</a> in the <i>Amazon
         * Simple Queue Service Developer Guide</i>.</p> <p>An Amazon SQS policy can have a
         * maximum of 7 actions.</p> </note> <p>Some actions take lists of parameters.
         * These lists are specified using the <code>param.n</code> notation. Values of
         * <code>n</code> are integers starting from 1. For example, a parameter list with
         * two elements looks like this:</p> <p> <code>&amp;Attribute.1=first</code> </p>
         * <p> <code>&amp;Attribute.2=second</code> </p> <note> <p>Cross-account
         * permissions don't apply to this action. For more information, see see <a
         * href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/sqs-customer-managed-policy-examples.html#grant-cross-account-permissions-to-role-and-user-name">Grant
         * Cross-Account Permissions to a Role and a User Name</a> in the <i>Amazon Simple
         * Queue Service Developer Guide</i>.</p> </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sqs-2012-11-05/AddPermission">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AddPermissionAsync(const Model::AddPermissionRequest& request, const AddPermissionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Changes the visibility timeout of a specified message in a queue to a new
         * value. The maximum allowed timeout value is 12 hours. For more information, see
         * <a
         * href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/sqs-visibility-timeout.html">Visibility
         * Timeout</a> in the <i>Amazon Simple Queue Service Developer Guide</i>.</p>
         * <p>For example, you have a message with a visibility timeout of 5 minutes. After
         * 3 minutes, you call <code>ChangeMessageVisibility</code> with a timeout of 10
         * minutes. You can continue to call <code>ChangeMessageVisibility</code> to extend
         * the visibility timeout to a maximum of 12 hours. If you try to extend the
         * visibility timeout beyond 12 hours, your request is rejected.</p> <p>A message
         * is considered to be <i>in flight</i> after it's received from a queue by a
         * consumer, but not yet deleted from the queue.</p> <p>For standard queues, there
         * can be a maximum of 120,000 inflight messages per queue. If you reach this
         * limit, Amazon SQS returns the <code>OverLimit</code> error message. To avoid
         * reaching the limit, you should delete messages from the queue after they're
         * processed. You can also increase the number of queues you use to process your
         * messages.</p> <p>For FIFO queues, there can be a maximum of 20,000 inflight
         * messages per queue. If you reach this limit, Amazon SQS returns no error
         * messages.</p> <important> <p>If you attempt to set the
         * <code>VisibilityTimeout</code> to a value greater than the maximum time left,
         * Amazon SQS returns an error. Amazon SQS doesn't automatically recalculate and
         * increase the timeout to the maximum remaining time.</p> <p>Unlike with a queue,
         * when you change the visibility timeout for a specific message the timeout value
         * is applied immediately but isn't saved in memory for that message. If you don't
         * delete a message after it is received, the visibility timeout for the message
         * reverts to the original timeout value (not to the value you set using the
         * <code>ChangeMessageVisibility</code> action) the next time the message is
         * received.</p> </important><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sqs-2012-11-05/ChangeMessageVisibility">AWS
         * API Reference</a></p>
         */
        virtual Model::ChangeMessageVisibilityOutcome ChangeMessageVisibility(const Model::ChangeMessageVisibilityRequest& request) const;

        /**
         * <p>Changes the visibility timeout of a specified message in a queue to a new
         * value. The maximum allowed timeout value is 12 hours. For more information, see
         * <a
         * href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/sqs-visibility-timeout.html">Visibility
         * Timeout</a> in the <i>Amazon Simple Queue Service Developer Guide</i>.</p>
         * <p>For example, you have a message with a visibility timeout of 5 minutes. After
         * 3 minutes, you call <code>ChangeMessageVisibility</code> with a timeout of 10
         * minutes. You can continue to call <code>ChangeMessageVisibility</code> to extend
         * the visibility timeout to a maximum of 12 hours. If you try to extend the
         * visibility timeout beyond 12 hours, your request is rejected.</p> <p>A message
         * is considered to be <i>in flight</i> after it's received from a queue by a
         * consumer, but not yet deleted from the queue.</p> <p>For standard queues, there
         * can be a maximum of 120,000 inflight messages per queue. If you reach this
         * limit, Amazon SQS returns the <code>OverLimit</code> error message. To avoid
         * reaching the limit, you should delete messages from the queue after they're
         * processed. You can also increase the number of queues you use to process your
         * messages.</p> <p>For FIFO queues, there can be a maximum of 20,000 inflight
         * messages per queue. If you reach this limit, Amazon SQS returns no error
         * messages.</p> <important> <p>If you attempt to set the
         * <code>VisibilityTimeout</code> to a value greater than the maximum time left,
         * Amazon SQS returns an error. Amazon SQS doesn't automatically recalculate and
         * increase the timeout to the maximum remaining time.</p> <p>Unlike with a queue,
         * when you change the visibility timeout for a specific message the timeout value
         * is applied immediately but isn't saved in memory for that message. If you don't
         * delete a message after it is received, the visibility timeout for the message
         * reverts to the original timeout value (not to the value you set using the
         * <code>ChangeMessageVisibility</code> action) the next time the message is
         * received.</p> </important><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sqs-2012-11-05/ChangeMessageVisibility">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ChangeMessageVisibilityOutcomeCallable ChangeMessageVisibilityCallable(const Model::ChangeMessageVisibilityRequest& request) const;

        /**
         * <p>Changes the visibility timeout of a specified message in a queue to a new
         * value. The maximum allowed timeout value is 12 hours. For more information, see
         * <a
         * href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/sqs-visibility-timeout.html">Visibility
         * Timeout</a> in the <i>Amazon Simple Queue Service Developer Guide</i>.</p>
         * <p>For example, you have a message with a visibility timeout of 5 minutes. After
         * 3 minutes, you call <code>ChangeMessageVisibility</code> with a timeout of 10
         * minutes. You can continue to call <code>ChangeMessageVisibility</code> to extend
         * the visibility timeout to a maximum of 12 hours. If you try to extend the
         * visibility timeout beyond 12 hours, your request is rejected.</p> <p>A message
         * is considered to be <i>in flight</i> after it's received from a queue by a
         * consumer, but not yet deleted from the queue.</p> <p>For standard queues, there
         * can be a maximum of 120,000 inflight messages per queue. If you reach this
         * limit, Amazon SQS returns the <code>OverLimit</code> error message. To avoid
         * reaching the limit, you should delete messages from the queue after they're
         * processed. You can also increase the number of queues you use to process your
         * messages.</p> <p>For FIFO queues, there can be a maximum of 20,000 inflight
         * messages per queue. If you reach this limit, Amazon SQS returns no error
         * messages.</p> <important> <p>If you attempt to set the
         * <code>VisibilityTimeout</code> to a value greater than the maximum time left,
         * Amazon SQS returns an error. Amazon SQS doesn't automatically recalculate and
         * increase the timeout to the maximum remaining time.</p> <p>Unlike with a queue,
         * when you change the visibility timeout for a specific message the timeout value
         * is applied immediately but isn't saved in memory for that message. If you don't
         * delete a message after it is received, the visibility timeout for the message
         * reverts to the original timeout value (not to the value you set using the
         * <code>ChangeMessageVisibility</code> action) the next time the message is
         * received.</p> </important><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sqs-2012-11-05/ChangeMessageVisibility">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ChangeMessageVisibilityAsync(const Model::ChangeMessageVisibilityRequest& request, const ChangeMessageVisibilityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Changes the visibility timeout of multiple messages. This is a batch version
         * of <code> <a>ChangeMessageVisibility</a>.</code> The result of the action on
         * each message is reported individually in the response. You can send up to 10
         * <code> <a>ChangeMessageVisibility</a> </code> requests with each
         * <code>ChangeMessageVisibilityBatch</code> action.</p> <important> <p>Because the
         * batch request can result in a combination of successful and unsuccessful
         * actions, you should check for batch errors even when the call returns an HTTP
         * status code of <code>200</code>.</p> </important> <p>Some actions take lists of
         * parameters. These lists are specified using the <code>param.n</code> notation.
         * Values of <code>n</code> are integers starting from 1. For example, a parameter
         * list with two elements looks like this:</p> <p>
         * <code>&amp;Attribute.1=first</code> </p> <p>
         * <code>&amp;Attribute.2=second</code> </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sqs-2012-11-05/ChangeMessageVisibilityBatch">AWS
         * API Reference</a></p>
         */
        virtual Model::ChangeMessageVisibilityBatchOutcome ChangeMessageVisibilityBatch(const Model::ChangeMessageVisibilityBatchRequest& request) const;

        /**
         * <p>Changes the visibility timeout of multiple messages. This is a batch version
         * of <code> <a>ChangeMessageVisibility</a>.</code> The result of the action on
         * each message is reported individually in the response. You can send up to 10
         * <code> <a>ChangeMessageVisibility</a> </code> requests with each
         * <code>ChangeMessageVisibilityBatch</code> action.</p> <important> <p>Because the
         * batch request can result in a combination of successful and unsuccessful
         * actions, you should check for batch errors even when the call returns an HTTP
         * status code of <code>200</code>.</p> </important> <p>Some actions take lists of
         * parameters. These lists are specified using the <code>param.n</code> notation.
         * Values of <code>n</code> are integers starting from 1. For example, a parameter
         * list with two elements looks like this:</p> <p>
         * <code>&amp;Attribute.1=first</code> </p> <p>
         * <code>&amp;Attribute.2=second</code> </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sqs-2012-11-05/ChangeMessageVisibilityBatch">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ChangeMessageVisibilityBatchOutcomeCallable ChangeMessageVisibilityBatchCallable(const Model::ChangeMessageVisibilityBatchRequest& request) const;

        /**
         * <p>Changes the visibility timeout of multiple messages. This is a batch version
         * of <code> <a>ChangeMessageVisibility</a>.</code> The result of the action on
         * each message is reported individually in the response. You can send up to 10
         * <code> <a>ChangeMessageVisibility</a> </code> requests with each
         * <code>ChangeMessageVisibilityBatch</code> action.</p> <important> <p>Because the
         * batch request can result in a combination of successful and unsuccessful
         * actions, you should check for batch errors even when the call returns an HTTP
         * status code of <code>200</code>.</p> </important> <p>Some actions take lists of
         * parameters. These lists are specified using the <code>param.n</code> notation.
         * Values of <code>n</code> are integers starting from 1. For example, a parameter
         * list with two elements looks like this:</p> <p>
         * <code>&amp;Attribute.1=first</code> </p> <p>
         * <code>&amp;Attribute.2=second</code> </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sqs-2012-11-05/ChangeMessageVisibilityBatch">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ChangeMessageVisibilityBatchAsync(const Model::ChangeMessageVisibilityBatchRequest& request, const ChangeMessageVisibilityBatchResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a new standard or FIFO queue. You can pass one or more attributes in
         * the request. Keep the following caveats in mind:</p> <ul> <li> <p>If you don't
         * specify the <code>FifoQueue</code> attribute, Amazon SQS creates a standard
         * queue.</p> <note> <p> You can't change the queue type after you create it and
         * you can't convert an existing standard queue into a FIFO queue. You must either
         * create a new FIFO queue for your application or delete your existing standard
         * queue and recreate it as a FIFO queue. For more information, see <a
         * href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/FIFO-queues.html#FIFO-queues-moving">Moving
         * From a Standard Queue to a FIFO Queue</a> in the <i>Amazon Simple Queue Service
         * Developer Guide</i>. </p> </note> </li> <li> <p>If you don't provide a value for
         * an attribute, the queue is created with the default value for the attribute.</p>
         * </li> <li> <p>If you delete a queue, you must wait at least 60 seconds before
         * creating a queue with the same name.</p> </li> </ul> <p>To successfully create a
         * new queue, you must provide a queue name that adheres to the <a
         * href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/limits-queues.html">limits
         * related to queues</a> and is unique within the scope of your queues.</p> <p>To
         * get the queue URL, use the <code> <a>GetQueueUrl</a> </code> action. <code>
         * <a>GetQueueUrl</a> </code> requires only the <code>QueueName</code> parameter.
         * be aware of existing queue names:</p> <ul> <li> <p>If you provide the name of an
         * existing queue along with the exact names and values of all the queue's
         * attributes, <code>CreateQueue</code> returns the queue URL for the existing
         * queue.</p> </li> <li> <p>If the queue name, attribute names, or attribute values
         * don't match an existing queue, <code>CreateQueue</code> returns an error.</p>
         * </li> </ul> <p>Some actions take lists of parameters. These lists are specified
         * using the <code>param.n</code> notation. Values of <code>n</code> are integers
         * starting from 1. For example, a parameter list with two elements looks like
         * this:</p> <p> <code>&amp;Attribute.1=first</code> </p> <p>
         * <code>&amp;Attribute.2=second</code> </p> <note> <p>Cross-account permissions
         * don't apply to this action. For more information, see see <a
         * href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/sqs-customer-managed-policy-examples.html#grant-cross-account-permissions-to-role-and-user-name">Grant
         * Cross-Account Permissions to a Role and a User Name</a> in the <i>Amazon Simple
         * Queue Service Developer Guide</i>.</p> </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sqs-2012-11-05/CreateQueue">AWS API
         * Reference</a></p>
         */
        virtual Model::CreateQueueOutcome CreateQueue(const Model::CreateQueueRequest& request) const;

        /**
         * <p>Creates a new standard or FIFO queue. You can pass one or more attributes in
         * the request. Keep the following caveats in mind:</p> <ul> <li> <p>If you don't
         * specify the <code>FifoQueue</code> attribute, Amazon SQS creates a standard
         * queue.</p> <note> <p> You can't change the queue type after you create it and
         * you can't convert an existing standard queue into a FIFO queue. You must either
         * create a new FIFO queue for your application or delete your existing standard
         * queue and recreate it as a FIFO queue. For more information, see <a
         * href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/FIFO-queues.html#FIFO-queues-moving">Moving
         * From a Standard Queue to a FIFO Queue</a> in the <i>Amazon Simple Queue Service
         * Developer Guide</i>. </p> </note> </li> <li> <p>If you don't provide a value for
         * an attribute, the queue is created with the default value for the attribute.</p>
         * </li> <li> <p>If you delete a queue, you must wait at least 60 seconds before
         * creating a queue with the same name.</p> </li> </ul> <p>To successfully create a
         * new queue, you must provide a queue name that adheres to the <a
         * href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/limits-queues.html">limits
         * related to queues</a> and is unique within the scope of your queues.</p> <p>To
         * get the queue URL, use the <code> <a>GetQueueUrl</a> </code> action. <code>
         * <a>GetQueueUrl</a> </code> requires only the <code>QueueName</code> parameter.
         * be aware of existing queue names:</p> <ul> <li> <p>If you provide the name of an
         * existing queue along with the exact names and values of all the queue's
         * attributes, <code>CreateQueue</code> returns the queue URL for the existing
         * queue.</p> </li> <li> <p>If the queue name, attribute names, or attribute values
         * don't match an existing queue, <code>CreateQueue</code> returns an error.</p>
         * </li> </ul> <p>Some actions take lists of parameters. These lists are specified
         * using the <code>param.n</code> notation. Values of <code>n</code> are integers
         * starting from 1. For example, a parameter list with two elements looks like
         * this:</p> <p> <code>&amp;Attribute.1=first</code> </p> <p>
         * <code>&amp;Attribute.2=second</code> </p> <note> <p>Cross-account permissions
         * don't apply to this action. For more information, see see <a
         * href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/sqs-customer-managed-policy-examples.html#grant-cross-account-permissions-to-role-and-user-name">Grant
         * Cross-Account Permissions to a Role and a User Name</a> in the <i>Amazon Simple
         * Queue Service Developer Guide</i>.</p> </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sqs-2012-11-05/CreateQueue">AWS API
         * Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateQueueOutcomeCallable CreateQueueCallable(const Model::CreateQueueRequest& request) const;

        /**
         * <p>Creates a new standard or FIFO queue. You can pass one or more attributes in
         * the request. Keep the following caveats in mind:</p> <ul> <li> <p>If you don't
         * specify the <code>FifoQueue</code> attribute, Amazon SQS creates a standard
         * queue.</p> <note> <p> You can't change the queue type after you create it and
         * you can't convert an existing standard queue into a FIFO queue. You must either
         * create a new FIFO queue for your application or delete your existing standard
         * queue and recreate it as a FIFO queue. For more information, see <a
         * href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/FIFO-queues.html#FIFO-queues-moving">Moving
         * From a Standard Queue to a FIFO Queue</a> in the <i>Amazon Simple Queue Service
         * Developer Guide</i>. </p> </note> </li> <li> <p>If you don't provide a value for
         * an attribute, the queue is created with the default value for the attribute.</p>
         * </li> <li> <p>If you delete a queue, you must wait at least 60 seconds before
         * creating a queue with the same name.</p> </li> </ul> <p>To successfully create a
         * new queue, you must provide a queue name that adheres to the <a
         * href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/limits-queues.html">limits
         * related to queues</a> and is unique within the scope of your queues.</p> <p>To
         * get the queue URL, use the <code> <a>GetQueueUrl</a> </code> action. <code>
         * <a>GetQueueUrl</a> </code> requires only the <code>QueueName</code> parameter.
         * be aware of existing queue names:</p> <ul> <li> <p>If you provide the name of an
         * existing queue along with the exact names and values of all the queue's
         * attributes, <code>CreateQueue</code> returns the queue URL for the existing
         * queue.</p> </li> <li> <p>If the queue name, attribute names, or attribute values
         * don't match an existing queue, <code>CreateQueue</code> returns an error.</p>
         * </li> </ul> <p>Some actions take lists of parameters. These lists are specified
         * using the <code>param.n</code> notation. Values of <code>n</code> are integers
         * starting from 1. For example, a parameter list with two elements looks like
         * this:</p> <p> <code>&amp;Attribute.1=first</code> </p> <p>
         * <code>&amp;Attribute.2=second</code> </p> <note> <p>Cross-account permissions
         * don't apply to this action. For more information, see see <a
         * href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/sqs-customer-managed-policy-examples.html#grant-cross-account-permissions-to-role-and-user-name">Grant
         * Cross-Account Permissions to a Role and a User Name</a> in the <i>Amazon Simple
         * Queue Service Developer Guide</i>.</p> </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sqs-2012-11-05/CreateQueue">AWS API
         * Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateQueueAsync(const Model::CreateQueueRequest& request, const CreateQueueResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the specified message from the specified queue. To select the message
         * to delete, use the <code>ReceiptHandle</code> of the message (<i>not</i> the
         * <code>MessageId</code> which you receive when you send the message). Amazon SQS
         * can delete a message from a queue even if a visibility timeout setting causes
         * the message to be locked by another consumer. Amazon SQS automatically deletes
         * messages left in a queue longer than the retention period configured for the
         * queue. </p> <note> <p>The <code>ReceiptHandle</code> is associated with a
         * <i>specific instance</i> of receiving a message. If you receive a message more
         * than once, the <code>ReceiptHandle</code> is different each time you receive a
         * message. When you use the <code>DeleteMessage</code> action, you must provide
         * the most recently received <code>ReceiptHandle</code> for the message
         * (otherwise, the request succeeds, but the message might not be deleted).</p>
         * <p>For standard queues, it is possible to receive a message even after you
         * delete it. This might happen on rare occasions if one of the servers which
         * stores a copy of the message is unavailable when you send the request to delete
         * the message. The copy remains on the server and might be returned to you during
         * a subsequent receive request. You should ensure that your application is
         * idempotent, so that receiving a message more than once does not cause
         * issues.</p> </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sqs-2012-11-05/DeleteMessage">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteMessageOutcome DeleteMessage(const Model::DeleteMessageRequest& request) const;

        /**
         * <p>Deletes the specified message from the specified queue. To select the message
         * to delete, use the <code>ReceiptHandle</code> of the message (<i>not</i> the
         * <code>MessageId</code> which you receive when you send the message). Amazon SQS
         * can delete a message from a queue even if a visibility timeout setting causes
         * the message to be locked by another consumer. Amazon SQS automatically deletes
         * messages left in a queue longer than the retention period configured for the
         * queue. </p> <note> <p>The <code>ReceiptHandle</code> is associated with a
         * <i>specific instance</i> of receiving a message. If you receive a message more
         * than once, the <code>ReceiptHandle</code> is different each time you receive a
         * message. When you use the <code>DeleteMessage</code> action, you must provide
         * the most recently received <code>ReceiptHandle</code> for the message
         * (otherwise, the request succeeds, but the message might not be deleted).</p>
         * <p>For standard queues, it is possible to receive a message even after you
         * delete it. This might happen on rare occasions if one of the servers which
         * stores a copy of the message is unavailable when you send the request to delete
         * the message. The copy remains on the server and might be returned to you during
         * a subsequent receive request. You should ensure that your application is
         * idempotent, so that receiving a message more than once does not cause
         * issues.</p> </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sqs-2012-11-05/DeleteMessage">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteMessageOutcomeCallable DeleteMessageCallable(const Model::DeleteMessageRequest& request) const;

        /**
         * <p>Deletes the specified message from the specified queue. To select the message
         * to delete, use the <code>ReceiptHandle</code> of the message (<i>not</i> the
         * <code>MessageId</code> which you receive when you send the message). Amazon SQS
         * can delete a message from a queue even if a visibility timeout setting causes
         * the message to be locked by another consumer. Amazon SQS automatically deletes
         * messages left in a queue longer than the retention period configured for the
         * queue. </p> <note> <p>The <code>ReceiptHandle</code> is associated with a
         * <i>specific instance</i> of receiving a message. If you receive a message more
         * than once, the <code>ReceiptHandle</code> is different each time you receive a
         * message. When you use the <code>DeleteMessage</code> action, you must provide
         * the most recently received <code>ReceiptHandle</code> for the message
         * (otherwise, the request succeeds, but the message might not be deleted).</p>
         * <p>For standard queues, it is possible to receive a message even after you
         * delete it. This might happen on rare occasions if one of the servers which
         * stores a copy of the message is unavailable when you send the request to delete
         * the message. The copy remains on the server and might be returned to you during
         * a subsequent receive request. You should ensure that your application is
         * idempotent, so that receiving a message more than once does not cause
         * issues.</p> </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sqs-2012-11-05/DeleteMessage">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteMessageAsync(const Model::DeleteMessageRequest& request, const DeleteMessageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes up to ten messages from the specified queue. This is a batch version
         * of <code> <a>DeleteMessage</a>.</code> The result of the action on each message
         * is reported individually in the response.</p> <important> <p>Because the batch
         * request can result in a combination of successful and unsuccessful actions, you
         * should check for batch errors even when the call returns an HTTP status code of
         * <code>200</code>.</p> </important> <p>Some actions take lists of parameters.
         * These lists are specified using the <code>param.n</code> notation. Values of
         * <code>n</code> are integers starting from 1. For example, a parameter list with
         * two elements looks like this:</p> <p> <code>&amp;Attribute.1=first</code> </p>
         * <p> <code>&amp;Attribute.2=second</code> </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sqs-2012-11-05/DeleteMessageBatch">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteMessageBatchOutcome DeleteMessageBatch(const Model::DeleteMessageBatchRequest& request) const;

        /**
         * <p>Deletes up to ten messages from the specified queue. This is a batch version
         * of <code> <a>DeleteMessage</a>.</code> The result of the action on each message
         * is reported individually in the response.</p> <important> <p>Because the batch
         * request can result in a combination of successful and unsuccessful actions, you
         * should check for batch errors even when the call returns an HTTP status code of
         * <code>200</code>.</p> </important> <p>Some actions take lists of parameters.
         * These lists are specified using the <code>param.n</code> notation. Values of
         * <code>n</code> are integers starting from 1. For example, a parameter list with
         * two elements looks like this:</p> <p> <code>&amp;Attribute.1=first</code> </p>
         * <p> <code>&amp;Attribute.2=second</code> </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sqs-2012-11-05/DeleteMessageBatch">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteMessageBatchOutcomeCallable DeleteMessageBatchCallable(const Model::DeleteMessageBatchRequest& request) const;

        /**
         * <p>Deletes up to ten messages from the specified queue. This is a batch version
         * of <code> <a>DeleteMessage</a>.</code> The result of the action on each message
         * is reported individually in the response.</p> <important> <p>Because the batch
         * request can result in a combination of successful and unsuccessful actions, you
         * should check for batch errors even when the call returns an HTTP status code of
         * <code>200</code>.</p> </important> <p>Some actions take lists of parameters.
         * These lists are specified using the <code>param.n</code> notation. Values of
         * <code>n</code> are integers starting from 1. For example, a parameter list with
         * two elements looks like this:</p> <p> <code>&amp;Attribute.1=first</code> </p>
         * <p> <code>&amp;Attribute.2=second</code> </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sqs-2012-11-05/DeleteMessageBatch">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteMessageBatchAsync(const Model::DeleteMessageBatchRequest& request, const DeleteMessageBatchResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the queue specified by the <code>QueueUrl</code>, regardless of the
         * queue's contents. If the specified queue doesn't exist, Amazon SQS returns a
         * successful response.</p> <important> <p>Be careful with the
         * <code>DeleteQueue</code> action: When you delete a queue, any messages in the
         * queue are no longer available. </p> </important> <p>When you delete a queue, the
         * deletion process takes up to 60 seconds. Requests you send involving that queue
         * during the 60 seconds might succeed. For example, a <code> <a>SendMessage</a>
         * </code> request might succeed, but after 60 seconds the queue and the message
         * you sent no longer exist.</p> <p>When you delete a queue, you must wait at least
         * 60 seconds before creating a queue with the same name.</p> <note>
         * <p>Cross-account permissions don't apply to this action. For more information,
         * see see <a
         * href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/sqs-customer-managed-policy-examples.html#grant-cross-account-permissions-to-role-and-user-name">Grant
         * Cross-Account Permissions to a Role and a User Name</a> in the <i>Amazon Simple
         * Queue Service Developer Guide</i>.</p> </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sqs-2012-11-05/DeleteQueue">AWS API
         * Reference</a></p>
         */
        virtual Model::DeleteQueueOutcome DeleteQueue(const Model::DeleteQueueRequest& request) const;

        /**
         * <p>Deletes the queue specified by the <code>QueueUrl</code>, regardless of the
         * queue's contents. If the specified queue doesn't exist, Amazon SQS returns a
         * successful response.</p> <important> <p>Be careful with the
         * <code>DeleteQueue</code> action: When you delete a queue, any messages in the
         * queue are no longer available. </p> </important> <p>When you delete a queue, the
         * deletion process takes up to 60 seconds. Requests you send involving that queue
         * during the 60 seconds might succeed. For example, a <code> <a>SendMessage</a>
         * </code> request might succeed, but after 60 seconds the queue and the message
         * you sent no longer exist.</p> <p>When you delete a queue, you must wait at least
         * 60 seconds before creating a queue with the same name.</p> <note>
         * <p>Cross-account permissions don't apply to this action. For more information,
         * see see <a
         * href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/sqs-customer-managed-policy-examples.html#grant-cross-account-permissions-to-role-and-user-name">Grant
         * Cross-Account Permissions to a Role and a User Name</a> in the <i>Amazon Simple
         * Queue Service Developer Guide</i>.</p> </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sqs-2012-11-05/DeleteQueue">AWS API
         * Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteQueueOutcomeCallable DeleteQueueCallable(const Model::DeleteQueueRequest& request) const;

        /**
         * <p>Deletes the queue specified by the <code>QueueUrl</code>, regardless of the
         * queue's contents. If the specified queue doesn't exist, Amazon SQS returns a
         * successful response.</p> <important> <p>Be careful with the
         * <code>DeleteQueue</code> action: When you delete a queue, any messages in the
         * queue are no longer available. </p> </important> <p>When you delete a queue, the
         * deletion process takes up to 60 seconds. Requests you send involving that queue
         * during the 60 seconds might succeed. For example, a <code> <a>SendMessage</a>
         * </code> request might succeed, but after 60 seconds the queue and the message
         * you sent no longer exist.</p> <p>When you delete a queue, you must wait at least
         * 60 seconds before creating a queue with the same name.</p> <note>
         * <p>Cross-account permissions don't apply to this action. For more information,
         * see see <a
         * href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/sqs-customer-managed-policy-examples.html#grant-cross-account-permissions-to-role-and-user-name">Grant
         * Cross-Account Permissions to a Role and a User Name</a> in the <i>Amazon Simple
         * Queue Service Developer Guide</i>.</p> </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sqs-2012-11-05/DeleteQueue">AWS API
         * Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteQueueAsync(const Model::DeleteQueueRequest& request, const DeleteQueueResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets attributes for the specified queue.</p> <note> <p>To determine whether a
         * queue is <a
         * href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/FIFO-queues.html">FIFO</a>,
         * you can check whether <code>QueueName</code> ends with the <code>.fifo</code>
         * suffix.</p> </note> <p>Some actions take lists of parameters. These lists are
         * specified using the <code>param.n</code> notation. Values of <code>n</code> are
         * integers starting from 1. For example, a parameter list with two elements looks
         * like this:</p> <p> <code>&amp;Attribute.1=first</code> </p> <p>
         * <code>&amp;Attribute.2=second</code> </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sqs-2012-11-05/GetQueueAttributes">AWS
         * API Reference</a></p>
         */
        virtual Model::GetQueueAttributesOutcome GetQueueAttributes(const Model::GetQueueAttributesRequest& request) const;

        /**
         * <p>Gets attributes for the specified queue.</p> <note> <p>To determine whether a
         * queue is <a
         * href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/FIFO-queues.html">FIFO</a>,
         * you can check whether <code>QueueName</code> ends with the <code>.fifo</code>
         * suffix.</p> </note> <p>Some actions take lists of parameters. These lists are
         * specified using the <code>param.n</code> notation. Values of <code>n</code> are
         * integers starting from 1. For example, a parameter list with two elements looks
         * like this:</p> <p> <code>&amp;Attribute.1=first</code> </p> <p>
         * <code>&amp;Attribute.2=second</code> </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sqs-2012-11-05/GetQueueAttributes">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetQueueAttributesOutcomeCallable GetQueueAttributesCallable(const Model::GetQueueAttributesRequest& request) const;

        /**
         * <p>Gets attributes for the specified queue.</p> <note> <p>To determine whether a
         * queue is <a
         * href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/FIFO-queues.html">FIFO</a>,
         * you can check whether <code>QueueName</code> ends with the <code>.fifo</code>
         * suffix.</p> </note> <p>Some actions take lists of parameters. These lists are
         * specified using the <code>param.n</code> notation. Values of <code>n</code> are
         * integers starting from 1. For example, a parameter list with two elements looks
         * like this:</p> <p> <code>&amp;Attribute.1=first</code> </p> <p>
         * <code>&amp;Attribute.2=second</code> </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sqs-2012-11-05/GetQueueAttributes">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetQueueAttributesAsync(const Model::GetQueueAttributesRequest& request, const GetQueueAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns the URL of an existing Amazon SQS queue.</p> <p>To access a queue
         * that belongs to another AWS account, use the <code>QueueOwnerAWSAccountId</code>
         * parameter to specify the account ID of the queue's owner. The queue's owner must
         * grant you permission to access the queue. For more information about shared
         * queue access, see <code> <a>AddPermission</a> </code> or see <a
         * href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/sqs-writing-an-sqs-policy.html#write-messages-to-shared-queue">Allow
         * Developers to Write Messages to a Shared Queue</a> in the <i>Amazon Simple Queue
         * Service Developer Guide</i>. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sqs-2012-11-05/GetQueueUrl">AWS API
         * Reference</a></p>
         */
        virtual Model::GetQueueUrlOutcome GetQueueUrl(const Model::GetQueueUrlRequest& request) const;

        /**
         * <p>Returns the URL of an existing Amazon SQS queue.</p> <p>To access a queue
         * that belongs to another AWS account, use the <code>QueueOwnerAWSAccountId</code>
         * parameter to specify the account ID of the queue's owner. The queue's owner must
         * grant you permission to access the queue. For more information about shared
         * queue access, see <code> <a>AddPermission</a> </code> or see <a
         * href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/sqs-writing-an-sqs-policy.html#write-messages-to-shared-queue">Allow
         * Developers to Write Messages to a Shared Queue</a> in the <i>Amazon Simple Queue
         * Service Developer Guide</i>. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sqs-2012-11-05/GetQueueUrl">AWS API
         * Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetQueueUrlOutcomeCallable GetQueueUrlCallable(const Model::GetQueueUrlRequest& request) const;

        /**
         * <p>Returns the URL of an existing Amazon SQS queue.</p> <p>To access a queue
         * that belongs to another AWS account, use the <code>QueueOwnerAWSAccountId</code>
         * parameter to specify the account ID of the queue's owner. The queue's owner must
         * grant you permission to access the queue. For more information about shared
         * queue access, see <code> <a>AddPermission</a> </code> or see <a
         * href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/sqs-writing-an-sqs-policy.html#write-messages-to-shared-queue">Allow
         * Developers to Write Messages to a Shared Queue</a> in the <i>Amazon Simple Queue
         * Service Developer Guide</i>. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sqs-2012-11-05/GetQueueUrl">AWS API
         * Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetQueueUrlAsync(const Model::GetQueueUrlRequest& request, const GetQueueUrlResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a list of your queues that have the <code>RedrivePolicy</code> queue
         * attribute configured with a dead-letter queue.</p> <p>For more information about
         * using dead-letter queues, see <a
         * href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/sqs-dead-letter-queues.html">Using
         * Amazon SQS Dead-Letter Queues</a> in the <i>Amazon Simple Queue Service
         * Developer Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sqs-2012-11-05/ListDeadLetterSourceQueues">AWS
         * API Reference</a></p>
         */
        virtual Model::ListDeadLetterSourceQueuesOutcome ListDeadLetterSourceQueues(const Model::ListDeadLetterSourceQueuesRequest& request) const;

        /**
         * <p>Returns a list of your queues that have the <code>RedrivePolicy</code> queue
         * attribute configured with a dead-letter queue.</p> <p>For more information about
         * using dead-letter queues, see <a
         * href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/sqs-dead-letter-queues.html">Using
         * Amazon SQS Dead-Letter Queues</a> in the <i>Amazon Simple Queue Service
         * Developer Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sqs-2012-11-05/ListDeadLetterSourceQueues">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListDeadLetterSourceQueuesOutcomeCallable ListDeadLetterSourceQueuesCallable(const Model::ListDeadLetterSourceQueuesRequest& request) const;

        /**
         * <p>Returns a list of your queues that have the <code>RedrivePolicy</code> queue
         * attribute configured with a dead-letter queue.</p> <p>For more information about
         * using dead-letter queues, see <a
         * href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/sqs-dead-letter-queues.html">Using
         * Amazon SQS Dead-Letter Queues</a> in the <i>Amazon Simple Queue Service
         * Developer Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sqs-2012-11-05/ListDeadLetterSourceQueues">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListDeadLetterSourceQueuesAsync(const Model::ListDeadLetterSourceQueuesRequest& request, const ListDeadLetterSourceQueuesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>List all cost allocation tags added to the specified Amazon SQS queue. For an
         * overview, see <a
         * href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/sqs-queue-tags.html">Tagging
         * Your Amazon SQS Queues</a> in the <i>Amazon Simple Queue Service Developer
         * Guide</i>.</p> <p>When you use queue tags, keep the following guidelines in
         * mind:</p> <ul> <li> <p>Adding more than 50 tags to a queue isn't
         * recommended.</p> </li> <li> <p>Tags don't have any semantic meaning. Amazon SQS
         * interprets tags as character strings.</p> </li> <li> <p>Tags are
         * case-sensitive.</p> </li> <li> <p>A new tag with a key identical to that of an
         * existing tag overwrites the existing tag.</p> </li> <li> <p>Tagging actions are
         * limited to 5 TPS per AWS account. If your application requires a higher
         * throughput, file a <a
         * href="https://console.aws.amazon.com/support/home#/case/create?issueType=technical">technical
         * support request</a>.</p> </li> </ul> <p>For a full list of tag restrictions, see
         * <a
         * href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/sqs-limits.html#limits-queues">Limits
         * Related to Queues</a> in the <i>Amazon Simple Queue Service Developer
         * Guide</i>.</p> <note> <p>Cross-account permissions don't apply to this action.
         * For more information, see see <a
         * href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/sqs-customer-managed-policy-examples.html#grant-cross-account-permissions-to-role-and-user-name">Grant
         * Cross-Account Permissions to a Role and a User Name</a> in the <i>Amazon Simple
         * Queue Service Developer Guide</i>.</p> </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sqs-2012-11-05/ListQueueTags">AWS
         * API Reference</a></p>
         */
        virtual Model::ListQueueTagsOutcome ListQueueTags(const Model::ListQueueTagsRequest& request) const;

        /**
         * <p>List all cost allocation tags added to the specified Amazon SQS queue. For an
         * overview, see <a
         * href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/sqs-queue-tags.html">Tagging
         * Your Amazon SQS Queues</a> in the <i>Amazon Simple Queue Service Developer
         * Guide</i>.</p> <p>When you use queue tags, keep the following guidelines in
         * mind:</p> <ul> <li> <p>Adding more than 50 tags to a queue isn't
         * recommended.</p> </li> <li> <p>Tags don't have any semantic meaning. Amazon SQS
         * interprets tags as character strings.</p> </li> <li> <p>Tags are
         * case-sensitive.</p> </li> <li> <p>A new tag with a key identical to that of an
         * existing tag overwrites the existing tag.</p> </li> <li> <p>Tagging actions are
         * limited to 5 TPS per AWS account. If your application requires a higher
         * throughput, file a <a
         * href="https://console.aws.amazon.com/support/home#/case/create?issueType=technical">technical
         * support request</a>.</p> </li> </ul> <p>For a full list of tag restrictions, see
         * <a
         * href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/sqs-limits.html#limits-queues">Limits
         * Related to Queues</a> in the <i>Amazon Simple Queue Service Developer
         * Guide</i>.</p> <note> <p>Cross-account permissions don't apply to this action.
         * For more information, see see <a
         * href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/sqs-customer-managed-policy-examples.html#grant-cross-account-permissions-to-role-and-user-name">Grant
         * Cross-Account Permissions to a Role and a User Name</a> in the <i>Amazon Simple
         * Queue Service Developer Guide</i>.</p> </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sqs-2012-11-05/ListQueueTags">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListQueueTagsOutcomeCallable ListQueueTagsCallable(const Model::ListQueueTagsRequest& request) const;

        /**
         * <p>List all cost allocation tags added to the specified Amazon SQS queue. For an
         * overview, see <a
         * href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/sqs-queue-tags.html">Tagging
         * Your Amazon SQS Queues</a> in the <i>Amazon Simple Queue Service Developer
         * Guide</i>.</p> <p>When you use queue tags, keep the following guidelines in
         * mind:</p> <ul> <li> <p>Adding more than 50 tags to a queue isn't
         * recommended.</p> </li> <li> <p>Tags don't have any semantic meaning. Amazon SQS
         * interprets tags as character strings.</p> </li> <li> <p>Tags are
         * case-sensitive.</p> </li> <li> <p>A new tag with a key identical to that of an
         * existing tag overwrites the existing tag.</p> </li> <li> <p>Tagging actions are
         * limited to 5 TPS per AWS account. If your application requires a higher
         * throughput, file a <a
         * href="https://console.aws.amazon.com/support/home#/case/create?issueType=technical">technical
         * support request</a>.</p> </li> </ul> <p>For a full list of tag restrictions, see
         * <a
         * href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/sqs-limits.html#limits-queues">Limits
         * Related to Queues</a> in the <i>Amazon Simple Queue Service Developer
         * Guide</i>.</p> <note> <p>Cross-account permissions don't apply to this action.
         * For more information, see see <a
         * href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/sqs-customer-managed-policy-examples.html#grant-cross-account-permissions-to-role-and-user-name">Grant
         * Cross-Account Permissions to a Role and a User Name</a> in the <i>Amazon Simple
         * Queue Service Developer Guide</i>.</p> </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sqs-2012-11-05/ListQueueTags">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListQueueTagsAsync(const Model::ListQueueTagsRequest& request, const ListQueueTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a list of your queues. The maximum number of queues that can be
         * returned is 1,000. If you specify a value for the optional
         * <code>QueueNamePrefix</code> parameter, only queues with a name that begins with
         * the specified value are returned.</p> <note> <p>Cross-account permissions don't
         * apply to this action. For more information, see see <a
         * href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/sqs-customer-managed-policy-examples.html#grant-cross-account-permissions-to-role-and-user-name">Grant
         * Cross-Account Permissions to a Role and a User Name</a> in the <i>Amazon Simple
         * Queue Service Developer Guide</i>.</p> </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sqs-2012-11-05/ListQueues">AWS API
         * Reference</a></p>
         */
        virtual Model::ListQueuesOutcome ListQueues(const Model::ListQueuesRequest& request) const;

        /**
         * <p>Returns a list of your queues. The maximum number of queues that can be
         * returned is 1,000. If you specify a value for the optional
         * <code>QueueNamePrefix</code> parameter, only queues with a name that begins with
         * the specified value are returned.</p> <note> <p>Cross-account permissions don't
         * apply to this action. For more information, see see <a
         * href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/sqs-customer-managed-policy-examples.html#grant-cross-account-permissions-to-role-and-user-name">Grant
         * Cross-Account Permissions to a Role and a User Name</a> in the <i>Amazon Simple
         * Queue Service Developer Guide</i>.</p> </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sqs-2012-11-05/ListQueues">AWS API
         * Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListQueuesOutcomeCallable ListQueuesCallable(const Model::ListQueuesRequest& request) const;

        /**
         * <p>Returns a list of your queues. The maximum number of queues that can be
         * returned is 1,000. If you specify a value for the optional
         * <code>QueueNamePrefix</code> parameter, only queues with a name that begins with
         * the specified value are returned.</p> <note> <p>Cross-account permissions don't
         * apply to this action. For more information, see see <a
         * href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/sqs-customer-managed-policy-examples.html#grant-cross-account-permissions-to-role-and-user-name">Grant
         * Cross-Account Permissions to a Role and a User Name</a> in the <i>Amazon Simple
         * Queue Service Developer Guide</i>.</p> </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sqs-2012-11-05/ListQueues">AWS API
         * Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListQueuesAsync(const Model::ListQueuesRequest& request, const ListQueuesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the messages in a queue specified by the <code>QueueURL</code>
         * parameter.</p> <important> <p>When you use the <code>PurgeQueue</code> action,
         * you can't retrieve any messages deleted from a queue.</p> <p>The message
         * deletion process takes up to 60 seconds. We recommend waiting for 60 seconds
         * regardless of your queue's size. </p> </important> <p>Messages sent to the queue
         * <i>before</i> you call <code>PurgeQueue</code> might be received but are deleted
         * within the next minute.</p> <p>Messages sent to the queue <i>after</i> you call
         * <code>PurgeQueue</code> might be deleted while the queue is being
         * purged.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sqs-2012-11-05/PurgeQueue">AWS API
         * Reference</a></p>
         */
        virtual Model::PurgeQueueOutcome PurgeQueue(const Model::PurgeQueueRequest& request) const;

        /**
         * <p>Deletes the messages in a queue specified by the <code>QueueURL</code>
         * parameter.</p> <important> <p>When you use the <code>PurgeQueue</code> action,
         * you can't retrieve any messages deleted from a queue.</p> <p>The message
         * deletion process takes up to 60 seconds. We recommend waiting for 60 seconds
         * regardless of your queue's size. </p> </important> <p>Messages sent to the queue
         * <i>before</i> you call <code>PurgeQueue</code> might be received but are deleted
         * within the next minute.</p> <p>Messages sent to the queue <i>after</i> you call
         * <code>PurgeQueue</code> might be deleted while the queue is being
         * purged.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sqs-2012-11-05/PurgeQueue">AWS API
         * Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PurgeQueueOutcomeCallable PurgeQueueCallable(const Model::PurgeQueueRequest& request) const;

        /**
         * <p>Deletes the messages in a queue specified by the <code>QueueURL</code>
         * parameter.</p> <important> <p>When you use the <code>PurgeQueue</code> action,
         * you can't retrieve any messages deleted from a queue.</p> <p>The message
         * deletion process takes up to 60 seconds. We recommend waiting for 60 seconds
         * regardless of your queue's size. </p> </important> <p>Messages sent to the queue
         * <i>before</i> you call <code>PurgeQueue</code> might be received but are deleted
         * within the next minute.</p> <p>Messages sent to the queue <i>after</i> you call
         * <code>PurgeQueue</code> might be deleted while the queue is being
         * purged.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sqs-2012-11-05/PurgeQueue">AWS API
         * Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PurgeQueueAsync(const Model::PurgeQueueRequest& request, const PurgeQueueResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves one or more messages (up to 10), from the specified queue. Using
         * the <code>WaitTimeSeconds</code> parameter enables long-poll support. For more
         * information, see <a
         * href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/sqs-long-polling.html">Amazon
         * SQS Long Polling</a> in the <i>Amazon Simple Queue Service Developer Guide</i>.
         * </p> <p>Short poll is the default behavior where a weighted random set of
         * machines is sampled on a <code>ReceiveMessage</code> call. Thus, only the
         * messages on the sampled machines are returned. If the number of messages in the
         * queue is small (fewer than 1,000), you most likely get fewer messages than you
         * requested per <code>ReceiveMessage</code> call. If the number of messages in the
         * queue is extremely small, you might not receive any messages in a particular
         * <code>ReceiveMessage</code> response. If this happens, repeat the request. </p>
         * <p>For each message returned, the response includes the following:</p> <ul> <li>
         * <p>The message body.</p> </li> <li> <p>An MD5 digest of the message body. For
         * information about MD5, see <a
         * href="https://www.ietf.org/rfc/rfc1321.txt">RFC1321</a>.</p> </li> <li> <p>The
         * <code>MessageId</code> you received when you sent the message to the queue.</p>
         * </li> <li> <p>The receipt handle.</p> </li> <li> <p>The message attributes.</p>
         * </li> <li> <p>An MD5 digest of the message attributes.</p> </li> </ul> <p>The
         * receipt handle is the identifier you must provide when deleting the message. For
         * more information, see <a
         * href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/sqs-queue-message-identifiers.html">Queue
         * and Message Identifiers</a> in the <i>Amazon Simple Queue Service Developer
         * Guide</i>.</p> <p>You can provide the <code>VisibilityTimeout</code> parameter
         * in your request. The parameter is applied to the messages that Amazon SQS
         * returns in the response. If you don't include the parameter, the overall
         * visibility timeout for the queue is used for the returned messages. For more
         * information, see <a
         * href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/sqs-visibility-timeout.html">Visibility
         * Timeout</a> in the <i>Amazon Simple Queue Service Developer Guide</i>.</p> <p>A
         * message that isn't deleted or a message whose visibility isn't extended before
         * the visibility timeout expires counts as a failed receive. Depending on the
         * configuration of the queue, the message might be sent to the dead-letter
         * queue.</p> <note> <p>In the future, new attributes might be added. If you write
         * code that calls this action, we recommend that you structure your code so that
         * it can handle new attributes gracefully.</p> </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sqs-2012-11-05/ReceiveMessage">AWS
         * API Reference</a></p>
         */
        virtual Model::ReceiveMessageOutcome ReceiveMessage(const Model::ReceiveMessageRequest& request) const;

        /**
         * <p>Retrieves one or more messages (up to 10), from the specified queue. Using
         * the <code>WaitTimeSeconds</code> parameter enables long-poll support. For more
         * information, see <a
         * href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/sqs-long-polling.html">Amazon
         * SQS Long Polling</a> in the <i>Amazon Simple Queue Service Developer Guide</i>.
         * </p> <p>Short poll is the default behavior where a weighted random set of
         * machines is sampled on a <code>ReceiveMessage</code> call. Thus, only the
         * messages on the sampled machines are returned. If the number of messages in the
         * queue is small (fewer than 1,000), you most likely get fewer messages than you
         * requested per <code>ReceiveMessage</code> call. If the number of messages in the
         * queue is extremely small, you might not receive any messages in a particular
         * <code>ReceiveMessage</code> response. If this happens, repeat the request. </p>
         * <p>For each message returned, the response includes the following:</p> <ul> <li>
         * <p>The message body.</p> </li> <li> <p>An MD5 digest of the message body. For
         * information about MD5, see <a
         * href="https://www.ietf.org/rfc/rfc1321.txt">RFC1321</a>.</p> </li> <li> <p>The
         * <code>MessageId</code> you received when you sent the message to the queue.</p>
         * </li> <li> <p>The receipt handle.</p> </li> <li> <p>The message attributes.</p>
         * </li> <li> <p>An MD5 digest of the message attributes.</p> </li> </ul> <p>The
         * receipt handle is the identifier you must provide when deleting the message. For
         * more information, see <a
         * href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/sqs-queue-message-identifiers.html">Queue
         * and Message Identifiers</a> in the <i>Amazon Simple Queue Service Developer
         * Guide</i>.</p> <p>You can provide the <code>VisibilityTimeout</code> parameter
         * in your request. The parameter is applied to the messages that Amazon SQS
         * returns in the response. If you don't include the parameter, the overall
         * visibility timeout for the queue is used for the returned messages. For more
         * information, see <a
         * href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/sqs-visibility-timeout.html">Visibility
         * Timeout</a> in the <i>Amazon Simple Queue Service Developer Guide</i>.</p> <p>A
         * message that isn't deleted or a message whose visibility isn't extended before
         * the visibility timeout expires counts as a failed receive. Depending on the
         * configuration of the queue, the message might be sent to the dead-letter
         * queue.</p> <note> <p>In the future, new attributes might be added. If you write
         * code that calls this action, we recommend that you structure your code so that
         * it can handle new attributes gracefully.</p> </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sqs-2012-11-05/ReceiveMessage">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ReceiveMessageOutcomeCallable ReceiveMessageCallable(const Model::ReceiveMessageRequest& request) const;

        /**
         * <p>Retrieves one or more messages (up to 10), from the specified queue. Using
         * the <code>WaitTimeSeconds</code> parameter enables long-poll support. For more
         * information, see <a
         * href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/sqs-long-polling.html">Amazon
         * SQS Long Polling</a> in the <i>Amazon Simple Queue Service Developer Guide</i>.
         * </p> <p>Short poll is the default behavior where a weighted random set of
         * machines is sampled on a <code>ReceiveMessage</code> call. Thus, only the
         * messages on the sampled machines are returned. If the number of messages in the
         * queue is small (fewer than 1,000), you most likely get fewer messages than you
         * requested per <code>ReceiveMessage</code> call. If the number of messages in the
         * queue is extremely small, you might not receive any messages in a particular
         * <code>ReceiveMessage</code> response. If this happens, repeat the request. </p>
         * <p>For each message returned, the response includes the following:</p> <ul> <li>
         * <p>The message body.</p> </li> <li> <p>An MD5 digest of the message body. For
         * information about MD5, see <a
         * href="https://www.ietf.org/rfc/rfc1321.txt">RFC1321</a>.</p> </li> <li> <p>The
         * <code>MessageId</code> you received when you sent the message to the queue.</p>
         * </li> <li> <p>The receipt handle.</p> </li> <li> <p>The message attributes.</p>
         * </li> <li> <p>An MD5 digest of the message attributes.</p> </li> </ul> <p>The
         * receipt handle is the identifier you must provide when deleting the message. For
         * more information, see <a
         * href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/sqs-queue-message-identifiers.html">Queue
         * and Message Identifiers</a> in the <i>Amazon Simple Queue Service Developer
         * Guide</i>.</p> <p>You can provide the <code>VisibilityTimeout</code> parameter
         * in your request. The parameter is applied to the messages that Amazon SQS
         * returns in the response. If you don't include the parameter, the overall
         * visibility timeout for the queue is used for the returned messages. For more
         * information, see <a
         * href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/sqs-visibility-timeout.html">Visibility
         * Timeout</a> in the <i>Amazon Simple Queue Service Developer Guide</i>.</p> <p>A
         * message that isn't deleted or a message whose visibility isn't extended before
         * the visibility timeout expires counts as a failed receive. Depending on the
         * configuration of the queue, the message might be sent to the dead-letter
         * queue.</p> <note> <p>In the future, new attributes might be added. If you write
         * code that calls this action, we recommend that you structure your code so that
         * it can handle new attributes gracefully.</p> </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sqs-2012-11-05/ReceiveMessage">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ReceiveMessageAsync(const Model::ReceiveMessageRequest& request, const ReceiveMessageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Revokes any permissions in the queue policy that matches the specified
         * <code>Label</code> parameter.</p> <note> <p>Only the owner of a queue can remove
         * permissions from it.</p> <p>Cross-account permissions don't apply to this
         * action. For more information, see see <a
         * href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/sqs-customer-managed-policy-examples.html#grant-cross-account-permissions-to-role-and-user-name">Grant
         * Cross-Account Permissions to a Role and a User Name</a> in the <i>Amazon Simple
         * Queue Service Developer Guide</i>.</p> </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sqs-2012-11-05/RemovePermission">AWS
         * API Reference</a></p>
         */
        virtual Model::RemovePermissionOutcome RemovePermission(const Model::RemovePermissionRequest& request) const;

        /**
         * <p>Revokes any permissions in the queue policy that matches the specified
         * <code>Label</code> parameter.</p> <note> <p>Only the owner of a queue can remove
         * permissions from it.</p> <p>Cross-account permissions don't apply to this
         * action. For more information, see see <a
         * href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/sqs-customer-managed-policy-examples.html#grant-cross-account-permissions-to-role-and-user-name">Grant
         * Cross-Account Permissions to a Role and a User Name</a> in the <i>Amazon Simple
         * Queue Service Developer Guide</i>.</p> </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sqs-2012-11-05/RemovePermission">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::RemovePermissionOutcomeCallable RemovePermissionCallable(const Model::RemovePermissionRequest& request) const;

        /**
         * <p>Revokes any permissions in the queue policy that matches the specified
         * <code>Label</code> parameter.</p> <note> <p>Only the owner of a queue can remove
         * permissions from it.</p> <p>Cross-account permissions don't apply to this
         * action. For more information, see see <a
         * href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/sqs-customer-managed-policy-examples.html#grant-cross-account-permissions-to-role-and-user-name">Grant
         * Cross-Account Permissions to a Role and a User Name</a> in the <i>Amazon Simple
         * Queue Service Developer Guide</i>.</p> </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sqs-2012-11-05/RemovePermission">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void RemovePermissionAsync(const Model::RemovePermissionRequest& request, const RemovePermissionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Delivers a message to the specified queue.</p> <important> <p>A message can
         * include only XML, JSON, and unformatted text. The following Unicode characters
         * are allowed:</p> <p> <code>#x9</code> | <code>#xA</code> | <code>#xD</code> |
         * <code>#x20</code> to <code>#xD7FF</code> | <code>#xE000</code> to
         * <code>#xFFFD</code> | <code>#x10000</code> to <code>#x10FFFF</code> </p> <p>Any
         * characters not included in this list will be rejected. For more information, see
         * the <a href="http://www.w3.org/TR/REC-xml/#charsets">W3C specification for
         * characters</a>.</p> </important><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sqs-2012-11-05/SendMessage">AWS API
         * Reference</a></p>
         */
        virtual Model::SendMessageOutcome SendMessage(const Model::SendMessageRequest& request) const;

        /**
         * <p>Delivers a message to the specified queue.</p> <important> <p>A message can
         * include only XML, JSON, and unformatted text. The following Unicode characters
         * are allowed:</p> <p> <code>#x9</code> | <code>#xA</code> | <code>#xD</code> |
         * <code>#x20</code> to <code>#xD7FF</code> | <code>#xE000</code> to
         * <code>#xFFFD</code> | <code>#x10000</code> to <code>#x10FFFF</code> </p> <p>Any
         * characters not included in this list will be rejected. For more information, see
         * the <a href="http://www.w3.org/TR/REC-xml/#charsets">W3C specification for
         * characters</a>.</p> </important><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sqs-2012-11-05/SendMessage">AWS API
         * Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::SendMessageOutcomeCallable SendMessageCallable(const Model::SendMessageRequest& request) const;

        /**
         * <p>Delivers a message to the specified queue.</p> <important> <p>A message can
         * include only XML, JSON, and unformatted text. The following Unicode characters
         * are allowed:</p> <p> <code>#x9</code> | <code>#xA</code> | <code>#xD</code> |
         * <code>#x20</code> to <code>#xD7FF</code> | <code>#xE000</code> to
         * <code>#xFFFD</code> | <code>#x10000</code> to <code>#x10FFFF</code> </p> <p>Any
         * characters not included in this list will be rejected. For more information, see
         * the <a href="http://www.w3.org/TR/REC-xml/#charsets">W3C specification for
         * characters</a>.</p> </important><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sqs-2012-11-05/SendMessage">AWS API
         * Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void SendMessageAsync(const Model::SendMessageRequest& request, const SendMessageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Delivers up to ten messages to the specified queue. This is a batch version
         * of <code> <a>SendMessage</a>.</code> For a FIFO queue, multiple messages within
         * a single batch are enqueued in the order they are sent.</p> <p>The result of
         * sending each message is reported individually in the response. Because the batch
         * request can result in a combination of successful and unsuccessful actions, you
         * should check for batch errors even when the call returns an HTTP status code of
         * <code>200</code>.</p> <p>The maximum allowed individual message size and the
         * maximum total payload size (the sum of the individual lengths of all of the
         * batched messages) are both 256 KB (262,144 bytes).</p> <important> <p>A message
         * can include only XML, JSON, and unformatted text. The following Unicode
         * characters are allowed:</p> <p> <code>#x9</code> | <code>#xA</code> |
         * <code>#xD</code> | <code>#x20</code> to <code>#xD7FF</code> |
         * <code>#xE000</code> to <code>#xFFFD</code> | <code>#x10000</code> to
         * <code>#x10FFFF</code> </p> <p>Any characters not included in this list will be
         * rejected. For more information, see the <a
         * href="http://www.w3.org/TR/REC-xml/#charsets">W3C specification for
         * characters</a>.</p> </important> <p>If you don't specify the
         * <code>DelaySeconds</code> parameter for an entry, Amazon SQS uses the default
         * value for the queue.</p> <p>Some actions take lists of parameters. These lists
         * are specified using the <code>param.n</code> notation. Values of <code>n</code>
         * are integers starting from 1. For example, a parameter list with two elements
         * looks like this:</p> <p> <code>&amp;Attribute.1=first</code> </p> <p>
         * <code>&amp;Attribute.2=second</code> </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sqs-2012-11-05/SendMessageBatch">AWS
         * API Reference</a></p>
         */
        virtual Model::SendMessageBatchOutcome SendMessageBatch(const Model::SendMessageBatchRequest& request) const;

        /**
         * <p>Delivers up to ten messages to the specified queue. This is a batch version
         * of <code> <a>SendMessage</a>.</code> For a FIFO queue, multiple messages within
         * a single batch are enqueued in the order they are sent.</p> <p>The result of
         * sending each message is reported individually in the response. Because the batch
         * request can result in a combination of successful and unsuccessful actions, you
         * should check for batch errors even when the call returns an HTTP status code of
         * <code>200</code>.</p> <p>The maximum allowed individual message size and the
         * maximum total payload size (the sum of the individual lengths of all of the
         * batched messages) are both 256 KB (262,144 bytes).</p> <important> <p>A message
         * can include only XML, JSON, and unformatted text. The following Unicode
         * characters are allowed:</p> <p> <code>#x9</code> | <code>#xA</code> |
         * <code>#xD</code> | <code>#x20</code> to <code>#xD7FF</code> |
         * <code>#xE000</code> to <code>#xFFFD</code> | <code>#x10000</code> to
         * <code>#x10FFFF</code> </p> <p>Any characters not included in this list will be
         * rejected. For more information, see the <a
         * href="http://www.w3.org/TR/REC-xml/#charsets">W3C specification for
         * characters</a>.</p> </important> <p>If you don't specify the
         * <code>DelaySeconds</code> parameter for an entry, Amazon SQS uses the default
         * value for the queue.</p> <p>Some actions take lists of parameters. These lists
         * are specified using the <code>param.n</code> notation. Values of <code>n</code>
         * are integers starting from 1. For example, a parameter list with two elements
         * looks like this:</p> <p> <code>&amp;Attribute.1=first</code> </p> <p>
         * <code>&amp;Attribute.2=second</code> </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sqs-2012-11-05/SendMessageBatch">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::SendMessageBatchOutcomeCallable SendMessageBatchCallable(const Model::SendMessageBatchRequest& request) const;

        /**
         * <p>Delivers up to ten messages to the specified queue. This is a batch version
         * of <code> <a>SendMessage</a>.</code> For a FIFO queue, multiple messages within
         * a single batch are enqueued in the order they are sent.</p> <p>The result of
         * sending each message is reported individually in the response. Because the batch
         * request can result in a combination of successful and unsuccessful actions, you
         * should check for batch errors even when the call returns an HTTP status code of
         * <code>200</code>.</p> <p>The maximum allowed individual message size and the
         * maximum total payload size (the sum of the individual lengths of all of the
         * batched messages) are both 256 KB (262,144 bytes).</p> <important> <p>A message
         * can include only XML, JSON, and unformatted text. The following Unicode
         * characters are allowed:</p> <p> <code>#x9</code> | <code>#xA</code> |
         * <code>#xD</code> | <code>#x20</code> to <code>#xD7FF</code> |
         * <code>#xE000</code> to <code>#xFFFD</code> | <code>#x10000</code> to
         * <code>#x10FFFF</code> </p> <p>Any characters not included in this list will be
         * rejected. For more information, see the <a
         * href="http://www.w3.org/TR/REC-xml/#charsets">W3C specification for
         * characters</a>.</p> </important> <p>If you don't specify the
         * <code>DelaySeconds</code> parameter for an entry, Amazon SQS uses the default
         * value for the queue.</p> <p>Some actions take lists of parameters. These lists
         * are specified using the <code>param.n</code> notation. Values of <code>n</code>
         * are integers starting from 1. For example, a parameter list with two elements
         * looks like this:</p> <p> <code>&amp;Attribute.1=first</code> </p> <p>
         * <code>&amp;Attribute.2=second</code> </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sqs-2012-11-05/SendMessageBatch">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void SendMessageBatchAsync(const Model::SendMessageBatchRequest& request, const SendMessageBatchResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Sets the value of one or more queue attributes. When you change a queue's
         * attributes, the change can take up to 60 seconds for most of the attributes to
         * propagate throughout the Amazon SQS system. Changes made to the
         * <code>MessageRetentionPeriod</code> attribute can take up to 15 minutes.</p>
         * <note> <p>In the future, new attributes might be added. If you write code that
         * calls this action, we recommend that you structure your code so that it can
         * handle new attributes gracefully.</p> <p>Cross-account permissions don't apply
         * to this action. For more information, see see <a
         * href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/sqs-customer-managed-policy-examples.html#grant-cross-account-permissions-to-role-and-user-name">Grant
         * Cross-Account Permissions to a Role and a User Name</a> in the <i>Amazon Simple
         * Queue Service Developer Guide</i>.</p> </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sqs-2012-11-05/SetQueueAttributes">AWS
         * API Reference</a></p>
         */
        virtual Model::SetQueueAttributesOutcome SetQueueAttributes(const Model::SetQueueAttributesRequest& request) const;

        /**
         * <p>Sets the value of one or more queue attributes. When you change a queue's
         * attributes, the change can take up to 60 seconds for most of the attributes to
         * propagate throughout the Amazon SQS system. Changes made to the
         * <code>MessageRetentionPeriod</code> attribute can take up to 15 minutes.</p>
         * <note> <p>In the future, new attributes might be added. If you write code that
         * calls this action, we recommend that you structure your code so that it can
         * handle new attributes gracefully.</p> <p>Cross-account permissions don't apply
         * to this action. For more information, see see <a
         * href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/sqs-customer-managed-policy-examples.html#grant-cross-account-permissions-to-role-and-user-name">Grant
         * Cross-Account Permissions to a Role and a User Name</a> in the <i>Amazon Simple
         * Queue Service Developer Guide</i>.</p> </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sqs-2012-11-05/SetQueueAttributes">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::SetQueueAttributesOutcomeCallable SetQueueAttributesCallable(const Model::SetQueueAttributesRequest& request) const;

        /**
         * <p>Sets the value of one or more queue attributes. When you change a queue's
         * attributes, the change can take up to 60 seconds for most of the attributes to
         * propagate throughout the Amazon SQS system. Changes made to the
         * <code>MessageRetentionPeriod</code> attribute can take up to 15 minutes.</p>
         * <note> <p>In the future, new attributes might be added. If you write code that
         * calls this action, we recommend that you structure your code so that it can
         * handle new attributes gracefully.</p> <p>Cross-account permissions don't apply
         * to this action. For more information, see see <a
         * href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/sqs-customer-managed-policy-examples.html#grant-cross-account-permissions-to-role-and-user-name">Grant
         * Cross-Account Permissions to a Role and a User Name</a> in the <i>Amazon Simple
         * Queue Service Developer Guide</i>.</p> </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sqs-2012-11-05/SetQueueAttributes">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void SetQueueAttributesAsync(const Model::SetQueueAttributesRequest& request, const SetQueueAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Add cost allocation tags to the specified Amazon SQS queue. For an overview,
         * see <a
         * href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/sqs-queue-tags.html">Tagging
         * Your Amazon SQS Queues</a> in the <i>Amazon Simple Queue Service Developer
         * Guide</i>.</p> <p>When you use queue tags, keep the following guidelines in
         * mind:</p> <ul> <li> <p>Adding more than 50 tags to a queue isn't
         * recommended.</p> </li> <li> <p>Tags don't have any semantic meaning. Amazon SQS
         * interprets tags as character strings.</p> </li> <li> <p>Tags are
         * case-sensitive.</p> </li> <li> <p>A new tag with a key identical to that of an
         * existing tag overwrites the existing tag.</p> </li> <li> <p>Tagging actions are
         * limited to 5 TPS per AWS account. If your application requires a higher
         * throughput, file a <a
         * href="https://console.aws.amazon.com/support/home#/case/create?issueType=technical">technical
         * support request</a>.</p> </li> </ul> <p>For a full list of tag restrictions, see
         * <a
         * href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/sqs-limits.html#limits-queues">Limits
         * Related to Queues</a> in the <i>Amazon Simple Queue Service Developer
         * Guide</i>.</p> <note> <p>Cross-account permissions don't apply to this action.
         * For more information, see see <a
         * href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/sqs-customer-managed-policy-examples.html#grant-cross-account-permissions-to-role-and-user-name">Grant
         * Cross-Account Permissions to a Role and a User Name</a> in the <i>Amazon Simple
         * Queue Service Developer Guide</i>.</p> </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sqs-2012-11-05/TagQueue">AWS API
         * Reference</a></p>
         */
        virtual Model::TagQueueOutcome TagQueue(const Model::TagQueueRequest& request) const;

        /**
         * <p>Add cost allocation tags to the specified Amazon SQS queue. For an overview,
         * see <a
         * href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/sqs-queue-tags.html">Tagging
         * Your Amazon SQS Queues</a> in the <i>Amazon Simple Queue Service Developer
         * Guide</i>.</p> <p>When you use queue tags, keep the following guidelines in
         * mind:</p> <ul> <li> <p>Adding more than 50 tags to a queue isn't
         * recommended.</p> </li> <li> <p>Tags don't have any semantic meaning. Amazon SQS
         * interprets tags as character strings.</p> </li> <li> <p>Tags are
         * case-sensitive.</p> </li> <li> <p>A new tag with a key identical to that of an
         * existing tag overwrites the existing tag.</p> </li> <li> <p>Tagging actions are
         * limited to 5 TPS per AWS account. If your application requires a higher
         * throughput, file a <a
         * href="https://console.aws.amazon.com/support/home#/case/create?issueType=technical">technical
         * support request</a>.</p> </li> </ul> <p>For a full list of tag restrictions, see
         * <a
         * href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/sqs-limits.html#limits-queues">Limits
         * Related to Queues</a> in the <i>Amazon Simple Queue Service Developer
         * Guide</i>.</p> <note> <p>Cross-account permissions don't apply to this action.
         * For more information, see see <a
         * href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/sqs-customer-managed-policy-examples.html#grant-cross-account-permissions-to-role-and-user-name">Grant
         * Cross-Account Permissions to a Role and a User Name</a> in the <i>Amazon Simple
         * Queue Service Developer Guide</i>.</p> </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sqs-2012-11-05/TagQueue">AWS API
         * Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::TagQueueOutcomeCallable TagQueueCallable(const Model::TagQueueRequest& request) const;

        /**
         * <p>Add cost allocation tags to the specified Amazon SQS queue. For an overview,
         * see <a
         * href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/sqs-queue-tags.html">Tagging
         * Your Amazon SQS Queues</a> in the <i>Amazon Simple Queue Service Developer
         * Guide</i>.</p> <p>When you use queue tags, keep the following guidelines in
         * mind:</p> <ul> <li> <p>Adding more than 50 tags to a queue isn't
         * recommended.</p> </li> <li> <p>Tags don't have any semantic meaning. Amazon SQS
         * interprets tags as character strings.</p> </li> <li> <p>Tags are
         * case-sensitive.</p> </li> <li> <p>A new tag with a key identical to that of an
         * existing tag overwrites the existing tag.</p> </li> <li> <p>Tagging actions are
         * limited to 5 TPS per AWS account. If your application requires a higher
         * throughput, file a <a
         * href="https://console.aws.amazon.com/support/home#/case/create?issueType=technical">technical
         * support request</a>.</p> </li> </ul> <p>For a full list of tag restrictions, see
         * <a
         * href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/sqs-limits.html#limits-queues">Limits
         * Related to Queues</a> in the <i>Amazon Simple Queue Service Developer
         * Guide</i>.</p> <note> <p>Cross-account permissions don't apply to this action.
         * For more information, see see <a
         * href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/sqs-customer-managed-policy-examples.html#grant-cross-account-permissions-to-role-and-user-name">Grant
         * Cross-Account Permissions to a Role and a User Name</a> in the <i>Amazon Simple
         * Queue Service Developer Guide</i>.</p> </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sqs-2012-11-05/TagQueue">AWS API
         * Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void TagQueueAsync(const Model::TagQueueRequest& request, const TagQueueResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Remove cost allocation tags from the specified Amazon SQS queue. For an
         * overview, see <a
         * href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/sqs-queue-tags.html">Tagging
         * Your Amazon SQS Queues</a> in the <i>Amazon Simple Queue Service Developer
         * Guide</i>.</p> <p>When you use queue tags, keep the following guidelines in
         * mind:</p> <ul> <li> <p>Adding more than 50 tags to a queue isn't
         * recommended.</p> </li> <li> <p>Tags don't have any semantic meaning. Amazon SQS
         * interprets tags as character strings.</p> </li> <li> <p>Tags are
         * case-sensitive.</p> </li> <li> <p>A new tag with a key identical to that of an
         * existing tag overwrites the existing tag.</p> </li> <li> <p>Tagging actions are
         * limited to 5 TPS per AWS account. If your application requires a higher
         * throughput, file a <a
         * href="https://console.aws.amazon.com/support/home#/case/create?issueType=technical">technical
         * support request</a>.</p> </li> </ul> <p>For a full list of tag restrictions, see
         * <a
         * href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/sqs-limits.html#limits-queues">Limits
         * Related to Queues</a> in the <i>Amazon Simple Queue Service Developer
         * Guide</i>.</p> <note> <p>Cross-account permissions don't apply to this action.
         * For more information, see see <a
         * href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/sqs-customer-managed-policy-examples.html#grant-cross-account-permissions-to-role-and-user-name">Grant
         * Cross-Account Permissions to a Role and a User Name</a> in the <i>Amazon Simple
         * Queue Service Developer Guide</i>.</p> </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sqs-2012-11-05/UntagQueue">AWS API
         * Reference</a></p>
         */
        virtual Model::UntagQueueOutcome UntagQueue(const Model::UntagQueueRequest& request) const;

        /**
         * <p>Remove cost allocation tags from the specified Amazon SQS queue. For an
         * overview, see <a
         * href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/sqs-queue-tags.html">Tagging
         * Your Amazon SQS Queues</a> in the <i>Amazon Simple Queue Service Developer
         * Guide</i>.</p> <p>When you use queue tags, keep the following guidelines in
         * mind:</p> <ul> <li> <p>Adding more than 50 tags to a queue isn't
         * recommended.</p> </li> <li> <p>Tags don't have any semantic meaning. Amazon SQS
         * interprets tags as character strings.</p> </li> <li> <p>Tags are
         * case-sensitive.</p> </li> <li> <p>A new tag with a key identical to that of an
         * existing tag overwrites the existing tag.</p> </li> <li> <p>Tagging actions are
         * limited to 5 TPS per AWS account. If your application requires a higher
         * throughput, file a <a
         * href="https://console.aws.amazon.com/support/home#/case/create?issueType=technical">technical
         * support request</a>.</p> </li> </ul> <p>For a full list of tag restrictions, see
         * <a
         * href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/sqs-limits.html#limits-queues">Limits
         * Related to Queues</a> in the <i>Amazon Simple Queue Service Developer
         * Guide</i>.</p> <note> <p>Cross-account permissions don't apply to this action.
         * For more information, see see <a
         * href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/sqs-customer-managed-policy-examples.html#grant-cross-account-permissions-to-role-and-user-name">Grant
         * Cross-Account Permissions to a Role and a User Name</a> in the <i>Amazon Simple
         * Queue Service Developer Guide</i>.</p> </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sqs-2012-11-05/UntagQueue">AWS API
         * Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UntagQueueOutcomeCallable UntagQueueCallable(const Model::UntagQueueRequest& request) const;

        /**
         * <p>Remove cost allocation tags from the specified Amazon SQS queue. For an
         * overview, see <a
         * href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/sqs-queue-tags.html">Tagging
         * Your Amazon SQS Queues</a> in the <i>Amazon Simple Queue Service Developer
         * Guide</i>.</p> <p>When you use queue tags, keep the following guidelines in
         * mind:</p> <ul> <li> <p>Adding more than 50 tags to a queue isn't
         * recommended.</p> </li> <li> <p>Tags don't have any semantic meaning. Amazon SQS
         * interprets tags as character strings.</p> </li> <li> <p>Tags are
         * case-sensitive.</p> </li> <li> <p>A new tag with a key identical to that of an
         * existing tag overwrites the existing tag.</p> </li> <li> <p>Tagging actions are
         * limited to 5 TPS per AWS account. If your application requires a higher
         * throughput, file a <a
         * href="https://console.aws.amazon.com/support/home#/case/create?issueType=technical">technical
         * support request</a>.</p> </li> </ul> <p>For a full list of tag restrictions, see
         * <a
         * href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/sqs-limits.html#limits-queues">Limits
         * Related to Queues</a> in the <i>Amazon Simple Queue Service Developer
         * Guide</i>.</p> <note> <p>Cross-account permissions don't apply to this action.
         * For more information, see see <a
         * href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/sqs-customer-managed-policy-examples.html#grant-cross-account-permissions-to-role-and-user-name">Grant
         * Cross-Account Permissions to a Role and a User Name</a> in the <i>Amazon Simple
         * Queue Service Developer Guide</i>.</p> </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sqs-2012-11-05/UntagQueue">AWS API
         * Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UntagQueueAsync(const Model::UntagQueueRequest& request, const UntagQueueResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

      
        void OverrideEndpoint(const Aws::String& endpoint);
  private:
        void init(const Aws::Client::ClientConfiguration& clientConfiguration);
        void AddPermissionAsyncHelper(const Model::AddPermissionRequest& request, const AddPermissionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ChangeMessageVisibilityAsyncHelper(const Model::ChangeMessageVisibilityRequest& request, const ChangeMessageVisibilityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ChangeMessageVisibilityBatchAsyncHelper(const Model::ChangeMessageVisibilityBatchRequest& request, const ChangeMessageVisibilityBatchResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateQueueAsyncHelper(const Model::CreateQueueRequest& request, const CreateQueueResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteMessageAsyncHelper(const Model::DeleteMessageRequest& request, const DeleteMessageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteMessageBatchAsyncHelper(const Model::DeleteMessageBatchRequest& request, const DeleteMessageBatchResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteQueueAsyncHelper(const Model::DeleteQueueRequest& request, const DeleteQueueResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetQueueAttributesAsyncHelper(const Model::GetQueueAttributesRequest& request, const GetQueueAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetQueueUrlAsyncHelper(const Model::GetQueueUrlRequest& request, const GetQueueUrlResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListDeadLetterSourceQueuesAsyncHelper(const Model::ListDeadLetterSourceQueuesRequest& request, const ListDeadLetterSourceQueuesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListQueueTagsAsyncHelper(const Model::ListQueueTagsRequest& request, const ListQueueTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListQueuesAsyncHelper(const Model::ListQueuesRequest& request, const ListQueuesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void PurgeQueueAsyncHelper(const Model::PurgeQueueRequest& request, const PurgeQueueResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ReceiveMessageAsyncHelper(const Model::ReceiveMessageRequest& request, const ReceiveMessageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void RemovePermissionAsyncHelper(const Model::RemovePermissionRequest& request, const RemovePermissionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void SendMessageAsyncHelper(const Model::SendMessageRequest& request, const SendMessageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void SendMessageBatchAsyncHelper(const Model::SendMessageBatchRequest& request, const SendMessageBatchResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void SetQueueAttributesAsyncHelper(const Model::SetQueueAttributesRequest& request, const SetQueueAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void TagQueueAsyncHelper(const Model::TagQueueRequest& request, const TagQueueResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UntagQueueAsyncHelper(const Model::UntagQueueRequest& request, const UntagQueueResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;

        Aws::String m_uri;
        Aws::String m_configScheme;
        std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
  };

} // namespace SQS
} // namespace Aws
