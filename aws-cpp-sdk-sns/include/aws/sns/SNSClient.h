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
#include <aws/sns/SNS_EXPORTS.h>
#include <aws/sns/SNSErrors.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/AmazonSerializableWebServiceRequest.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/sns/model/CheckIfPhoneNumberIsOptedOutResult.h>
#include <aws/sns/model/ConfirmSubscriptionResult.h>
#include <aws/sns/model/CreatePlatformApplicationResult.h>
#include <aws/sns/model/CreatePlatformEndpointResult.h>
#include <aws/sns/model/CreateTopicResult.h>
#include <aws/sns/model/GetEndpointAttributesResult.h>
#include <aws/sns/model/GetPlatformApplicationAttributesResult.h>
#include <aws/sns/model/GetSMSAttributesResult.h>
#include <aws/sns/model/GetSubscriptionAttributesResult.h>
#include <aws/sns/model/GetTopicAttributesResult.h>
#include <aws/sns/model/ListEndpointsByPlatformApplicationResult.h>
#include <aws/sns/model/ListPhoneNumbersOptedOutResult.h>
#include <aws/sns/model/ListPlatformApplicationsResult.h>
#include <aws/sns/model/ListSubscriptionsResult.h>
#include <aws/sns/model/ListSubscriptionsByTopicResult.h>
#include <aws/sns/model/ListTagsForResourceResult.h>
#include <aws/sns/model/ListTopicsResult.h>
#include <aws/sns/model/OptInPhoneNumberResult.h>
#include <aws/sns/model/PublishResult.h>
#include <aws/sns/model/SetSMSAttributesResult.h>
#include <aws/sns/model/SubscribeResult.h>
#include <aws/sns/model/TagResourceResult.h>
#include <aws/sns/model/UntagResourceResult.h>
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

namespace SNS
{

namespace Model
{
        class AddPermissionRequest;
        class CheckIfPhoneNumberIsOptedOutRequest;
        class ConfirmSubscriptionRequest;
        class CreatePlatformApplicationRequest;
        class CreatePlatformEndpointRequest;
        class CreateTopicRequest;
        class DeleteEndpointRequest;
        class DeletePlatformApplicationRequest;
        class DeleteTopicRequest;
        class GetEndpointAttributesRequest;
        class GetPlatformApplicationAttributesRequest;
        class GetSMSAttributesRequest;
        class GetSubscriptionAttributesRequest;
        class GetTopicAttributesRequest;
        class ListEndpointsByPlatformApplicationRequest;
        class ListPhoneNumbersOptedOutRequest;
        class ListPlatformApplicationsRequest;
        class ListSubscriptionsRequest;
        class ListSubscriptionsByTopicRequest;
        class ListTagsForResourceRequest;
        class ListTopicsRequest;
        class OptInPhoneNumberRequest;
        class PublishRequest;
        class RemovePermissionRequest;
        class SetEndpointAttributesRequest;
        class SetPlatformApplicationAttributesRequest;
        class SetSMSAttributesRequest;
        class SetSubscriptionAttributesRequest;
        class SetTopicAttributesRequest;
        class SubscribeRequest;
        class TagResourceRequest;
        class UnsubscribeRequest;
        class UntagResourceRequest;

        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<SNSErrors>> AddPermissionOutcome;
        typedef Aws::Utils::Outcome<CheckIfPhoneNumberIsOptedOutResult, Aws::Client::AWSError<SNSErrors>> CheckIfPhoneNumberIsOptedOutOutcome;
        typedef Aws::Utils::Outcome<ConfirmSubscriptionResult, Aws::Client::AWSError<SNSErrors>> ConfirmSubscriptionOutcome;
        typedef Aws::Utils::Outcome<CreatePlatformApplicationResult, Aws::Client::AWSError<SNSErrors>> CreatePlatformApplicationOutcome;
        typedef Aws::Utils::Outcome<CreatePlatformEndpointResult, Aws::Client::AWSError<SNSErrors>> CreatePlatformEndpointOutcome;
        typedef Aws::Utils::Outcome<CreateTopicResult, Aws::Client::AWSError<SNSErrors>> CreateTopicOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<SNSErrors>> DeleteEndpointOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<SNSErrors>> DeletePlatformApplicationOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<SNSErrors>> DeleteTopicOutcome;
        typedef Aws::Utils::Outcome<GetEndpointAttributesResult, Aws::Client::AWSError<SNSErrors>> GetEndpointAttributesOutcome;
        typedef Aws::Utils::Outcome<GetPlatformApplicationAttributesResult, Aws::Client::AWSError<SNSErrors>> GetPlatformApplicationAttributesOutcome;
        typedef Aws::Utils::Outcome<GetSMSAttributesResult, Aws::Client::AWSError<SNSErrors>> GetSMSAttributesOutcome;
        typedef Aws::Utils::Outcome<GetSubscriptionAttributesResult, Aws::Client::AWSError<SNSErrors>> GetSubscriptionAttributesOutcome;
        typedef Aws::Utils::Outcome<GetTopicAttributesResult, Aws::Client::AWSError<SNSErrors>> GetTopicAttributesOutcome;
        typedef Aws::Utils::Outcome<ListEndpointsByPlatformApplicationResult, Aws::Client::AWSError<SNSErrors>> ListEndpointsByPlatformApplicationOutcome;
        typedef Aws::Utils::Outcome<ListPhoneNumbersOptedOutResult, Aws::Client::AWSError<SNSErrors>> ListPhoneNumbersOptedOutOutcome;
        typedef Aws::Utils::Outcome<ListPlatformApplicationsResult, Aws::Client::AWSError<SNSErrors>> ListPlatformApplicationsOutcome;
        typedef Aws::Utils::Outcome<ListSubscriptionsResult, Aws::Client::AWSError<SNSErrors>> ListSubscriptionsOutcome;
        typedef Aws::Utils::Outcome<ListSubscriptionsByTopicResult, Aws::Client::AWSError<SNSErrors>> ListSubscriptionsByTopicOutcome;
        typedef Aws::Utils::Outcome<ListTagsForResourceResult, Aws::Client::AWSError<SNSErrors>> ListTagsForResourceOutcome;
        typedef Aws::Utils::Outcome<ListTopicsResult, Aws::Client::AWSError<SNSErrors>> ListTopicsOutcome;
        typedef Aws::Utils::Outcome<OptInPhoneNumberResult, Aws::Client::AWSError<SNSErrors>> OptInPhoneNumberOutcome;
        typedef Aws::Utils::Outcome<PublishResult, Aws::Client::AWSError<SNSErrors>> PublishOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<SNSErrors>> RemovePermissionOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<SNSErrors>> SetEndpointAttributesOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<SNSErrors>> SetPlatformApplicationAttributesOutcome;
        typedef Aws::Utils::Outcome<SetSMSAttributesResult, Aws::Client::AWSError<SNSErrors>> SetSMSAttributesOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<SNSErrors>> SetSubscriptionAttributesOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<SNSErrors>> SetTopicAttributesOutcome;
        typedef Aws::Utils::Outcome<SubscribeResult, Aws::Client::AWSError<SNSErrors>> SubscribeOutcome;
        typedef Aws::Utils::Outcome<TagResourceResult, Aws::Client::AWSError<SNSErrors>> TagResourceOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<SNSErrors>> UnsubscribeOutcome;
        typedef Aws::Utils::Outcome<UntagResourceResult, Aws::Client::AWSError<SNSErrors>> UntagResourceOutcome;

        typedef std::future<AddPermissionOutcome> AddPermissionOutcomeCallable;
        typedef std::future<CheckIfPhoneNumberIsOptedOutOutcome> CheckIfPhoneNumberIsOptedOutOutcomeCallable;
        typedef std::future<ConfirmSubscriptionOutcome> ConfirmSubscriptionOutcomeCallable;
        typedef std::future<CreatePlatformApplicationOutcome> CreatePlatformApplicationOutcomeCallable;
        typedef std::future<CreatePlatformEndpointOutcome> CreatePlatformEndpointOutcomeCallable;
        typedef std::future<CreateTopicOutcome> CreateTopicOutcomeCallable;
        typedef std::future<DeleteEndpointOutcome> DeleteEndpointOutcomeCallable;
        typedef std::future<DeletePlatformApplicationOutcome> DeletePlatformApplicationOutcomeCallable;
        typedef std::future<DeleteTopicOutcome> DeleteTopicOutcomeCallable;
        typedef std::future<GetEndpointAttributesOutcome> GetEndpointAttributesOutcomeCallable;
        typedef std::future<GetPlatformApplicationAttributesOutcome> GetPlatformApplicationAttributesOutcomeCallable;
        typedef std::future<GetSMSAttributesOutcome> GetSMSAttributesOutcomeCallable;
        typedef std::future<GetSubscriptionAttributesOutcome> GetSubscriptionAttributesOutcomeCallable;
        typedef std::future<GetTopicAttributesOutcome> GetTopicAttributesOutcomeCallable;
        typedef std::future<ListEndpointsByPlatformApplicationOutcome> ListEndpointsByPlatformApplicationOutcomeCallable;
        typedef std::future<ListPhoneNumbersOptedOutOutcome> ListPhoneNumbersOptedOutOutcomeCallable;
        typedef std::future<ListPlatformApplicationsOutcome> ListPlatformApplicationsOutcomeCallable;
        typedef std::future<ListSubscriptionsOutcome> ListSubscriptionsOutcomeCallable;
        typedef std::future<ListSubscriptionsByTopicOutcome> ListSubscriptionsByTopicOutcomeCallable;
        typedef std::future<ListTagsForResourceOutcome> ListTagsForResourceOutcomeCallable;
        typedef std::future<ListTopicsOutcome> ListTopicsOutcomeCallable;
        typedef std::future<OptInPhoneNumberOutcome> OptInPhoneNumberOutcomeCallable;
        typedef std::future<PublishOutcome> PublishOutcomeCallable;
        typedef std::future<RemovePermissionOutcome> RemovePermissionOutcomeCallable;
        typedef std::future<SetEndpointAttributesOutcome> SetEndpointAttributesOutcomeCallable;
        typedef std::future<SetPlatformApplicationAttributesOutcome> SetPlatformApplicationAttributesOutcomeCallable;
        typedef std::future<SetSMSAttributesOutcome> SetSMSAttributesOutcomeCallable;
        typedef std::future<SetSubscriptionAttributesOutcome> SetSubscriptionAttributesOutcomeCallable;
        typedef std::future<SetTopicAttributesOutcome> SetTopicAttributesOutcomeCallable;
        typedef std::future<SubscribeOutcome> SubscribeOutcomeCallable;
        typedef std::future<TagResourceOutcome> TagResourceOutcomeCallable;
        typedef std::future<UnsubscribeOutcome> UnsubscribeOutcomeCallable;
        typedef std::future<UntagResourceOutcome> UntagResourceOutcomeCallable;
} // namespace Model

  class SNSClient;

    typedef std::function<void(const SNSClient*, const Model::AddPermissionRequest&, const Model::AddPermissionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AddPermissionResponseReceivedHandler;
    typedef std::function<void(const SNSClient*, const Model::CheckIfPhoneNumberIsOptedOutRequest&, const Model::CheckIfPhoneNumberIsOptedOutOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CheckIfPhoneNumberIsOptedOutResponseReceivedHandler;
    typedef std::function<void(const SNSClient*, const Model::ConfirmSubscriptionRequest&, const Model::ConfirmSubscriptionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ConfirmSubscriptionResponseReceivedHandler;
    typedef std::function<void(const SNSClient*, const Model::CreatePlatformApplicationRequest&, const Model::CreatePlatformApplicationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreatePlatformApplicationResponseReceivedHandler;
    typedef std::function<void(const SNSClient*, const Model::CreatePlatformEndpointRequest&, const Model::CreatePlatformEndpointOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreatePlatformEndpointResponseReceivedHandler;
    typedef std::function<void(const SNSClient*, const Model::CreateTopicRequest&, const Model::CreateTopicOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateTopicResponseReceivedHandler;
    typedef std::function<void(const SNSClient*, const Model::DeleteEndpointRequest&, const Model::DeleteEndpointOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteEndpointResponseReceivedHandler;
    typedef std::function<void(const SNSClient*, const Model::DeletePlatformApplicationRequest&, const Model::DeletePlatformApplicationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeletePlatformApplicationResponseReceivedHandler;
    typedef std::function<void(const SNSClient*, const Model::DeleteTopicRequest&, const Model::DeleteTopicOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteTopicResponseReceivedHandler;
    typedef std::function<void(const SNSClient*, const Model::GetEndpointAttributesRequest&, const Model::GetEndpointAttributesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetEndpointAttributesResponseReceivedHandler;
    typedef std::function<void(const SNSClient*, const Model::GetPlatformApplicationAttributesRequest&, const Model::GetPlatformApplicationAttributesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetPlatformApplicationAttributesResponseReceivedHandler;
    typedef std::function<void(const SNSClient*, const Model::GetSMSAttributesRequest&, const Model::GetSMSAttributesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetSMSAttributesResponseReceivedHandler;
    typedef std::function<void(const SNSClient*, const Model::GetSubscriptionAttributesRequest&, const Model::GetSubscriptionAttributesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetSubscriptionAttributesResponseReceivedHandler;
    typedef std::function<void(const SNSClient*, const Model::GetTopicAttributesRequest&, const Model::GetTopicAttributesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetTopicAttributesResponseReceivedHandler;
    typedef std::function<void(const SNSClient*, const Model::ListEndpointsByPlatformApplicationRequest&, const Model::ListEndpointsByPlatformApplicationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListEndpointsByPlatformApplicationResponseReceivedHandler;
    typedef std::function<void(const SNSClient*, const Model::ListPhoneNumbersOptedOutRequest&, const Model::ListPhoneNumbersOptedOutOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListPhoneNumbersOptedOutResponseReceivedHandler;
    typedef std::function<void(const SNSClient*, const Model::ListPlatformApplicationsRequest&, const Model::ListPlatformApplicationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListPlatformApplicationsResponseReceivedHandler;
    typedef std::function<void(const SNSClient*, const Model::ListSubscriptionsRequest&, const Model::ListSubscriptionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListSubscriptionsResponseReceivedHandler;
    typedef std::function<void(const SNSClient*, const Model::ListSubscriptionsByTopicRequest&, const Model::ListSubscriptionsByTopicOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListSubscriptionsByTopicResponseReceivedHandler;
    typedef std::function<void(const SNSClient*, const Model::ListTagsForResourceRequest&, const Model::ListTagsForResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsForResourceResponseReceivedHandler;
    typedef std::function<void(const SNSClient*, const Model::ListTopicsRequest&, const Model::ListTopicsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTopicsResponseReceivedHandler;
    typedef std::function<void(const SNSClient*, const Model::OptInPhoneNumberRequest&, const Model::OptInPhoneNumberOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > OptInPhoneNumberResponseReceivedHandler;
    typedef std::function<void(const SNSClient*, const Model::PublishRequest&, const Model::PublishOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PublishResponseReceivedHandler;
    typedef std::function<void(const SNSClient*, const Model::RemovePermissionRequest&, const Model::RemovePermissionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RemovePermissionResponseReceivedHandler;
    typedef std::function<void(const SNSClient*, const Model::SetEndpointAttributesRequest&, const Model::SetEndpointAttributesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > SetEndpointAttributesResponseReceivedHandler;
    typedef std::function<void(const SNSClient*, const Model::SetPlatformApplicationAttributesRequest&, const Model::SetPlatformApplicationAttributesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > SetPlatformApplicationAttributesResponseReceivedHandler;
    typedef std::function<void(const SNSClient*, const Model::SetSMSAttributesRequest&, const Model::SetSMSAttributesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > SetSMSAttributesResponseReceivedHandler;
    typedef std::function<void(const SNSClient*, const Model::SetSubscriptionAttributesRequest&, const Model::SetSubscriptionAttributesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > SetSubscriptionAttributesResponseReceivedHandler;
    typedef std::function<void(const SNSClient*, const Model::SetTopicAttributesRequest&, const Model::SetTopicAttributesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > SetTopicAttributesResponseReceivedHandler;
    typedef std::function<void(const SNSClient*, const Model::SubscribeRequest&, const Model::SubscribeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > SubscribeResponseReceivedHandler;
    typedef std::function<void(const SNSClient*, const Model::TagResourceRequest&, const Model::TagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TagResourceResponseReceivedHandler;
    typedef std::function<void(const SNSClient*, const Model::UnsubscribeRequest&, const Model::UnsubscribeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UnsubscribeResponseReceivedHandler;
    typedef std::function<void(const SNSClient*, const Model::UntagResourceRequest&, const Model::UntagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UntagResourceResponseReceivedHandler;

  /**
   * <fullname>Amazon Simple Notification Service</fullname> <p>Amazon Simple
   * Notification Service (Amazon SNS) is a web service that enables you to build
   * distributed web-enabled applications. Applications can use Amazon SNS to easily
   * push real-time notification messages to interested subscribers over multiple
   * delivery protocols. For more information about this product see <a
   * href="http://aws.amazon.com/sns/">https://aws.amazon.com/sns</a>. For detailed
   * information about Amazon SNS features and their associated API calls, see the <a
   * href="https://docs.aws.amazon.com/sns/latest/dg/">Amazon SNS Developer
   * Guide</a>. </p> <p>We also provide SDKs that enable you to access Amazon SNS
   * from your preferred programming language. The SDKs contain functionality that
   * automatically takes care of tasks such as: cryptographically signing your
   * service requests, retrying requests, and handling error responses. For a list of
   * available SDKs, go to <a href="http://aws.amazon.com/tools/">Tools for Amazon
   * Web Services</a>. </p>
   */
  class AWS_SNS_API SNSClient : public Aws::Client::AWSXMLClient
  {
    public:
      typedef Aws::Client::AWSXMLClient BASECLASS;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        SNSClient(const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        SNSClient(const Aws::Auth::AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        SNSClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
            const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

        virtual ~SNSClient();

        inline virtual const char* GetServiceClientName() const override { return "SNS"; }


       /**
        * Converts any request object to a presigned URL with the GET method, using region for the signer and a timeout of 15 minutes.
        */
        Aws::String ConvertRequestToPresignedUrl(const Aws::AmazonSerializableWebServiceRequest& requestToConvert, const char* region) const;


        /**
         * <p>Adds a statement to a topic's access control policy, granting access for the
         * specified AWS accounts to the specified actions.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sns-2010-03-31/AddPermission">AWS
         * API Reference</a></p>
         */
        virtual Model::AddPermissionOutcome AddPermission(const Model::AddPermissionRequest& request) const;

        /**
         * <p>Adds a statement to a topic's access control policy, granting access for the
         * specified AWS accounts to the specified actions.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sns-2010-03-31/AddPermission">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AddPermissionOutcomeCallable AddPermissionCallable(const Model::AddPermissionRequest& request) const;

        /**
         * <p>Adds a statement to a topic's access control policy, granting access for the
         * specified AWS accounts to the specified actions.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sns-2010-03-31/AddPermission">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AddPermissionAsync(const Model::AddPermissionRequest& request, const AddPermissionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Accepts a phone number and indicates whether the phone holder has opted out
         * of receiving SMS messages from your account. You cannot send SMS messages to a
         * number that is opted out.</p> <p>To resume sending messages, you can opt in the
         * number by using the <code>OptInPhoneNumber</code> action.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sns-2010-03-31/CheckIfPhoneNumberIsOptedOut">AWS
         * API Reference</a></p>
         */
        virtual Model::CheckIfPhoneNumberIsOptedOutOutcome CheckIfPhoneNumberIsOptedOut(const Model::CheckIfPhoneNumberIsOptedOutRequest& request) const;

        /**
         * <p>Accepts a phone number and indicates whether the phone holder has opted out
         * of receiving SMS messages from your account. You cannot send SMS messages to a
         * number that is opted out.</p> <p>To resume sending messages, you can opt in the
         * number by using the <code>OptInPhoneNumber</code> action.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sns-2010-03-31/CheckIfPhoneNumberIsOptedOut">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CheckIfPhoneNumberIsOptedOutOutcomeCallable CheckIfPhoneNumberIsOptedOutCallable(const Model::CheckIfPhoneNumberIsOptedOutRequest& request) const;

        /**
         * <p>Accepts a phone number and indicates whether the phone holder has opted out
         * of receiving SMS messages from your account. You cannot send SMS messages to a
         * number that is opted out.</p> <p>To resume sending messages, you can opt in the
         * number by using the <code>OptInPhoneNumber</code> action.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sns-2010-03-31/CheckIfPhoneNumberIsOptedOut">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CheckIfPhoneNumberIsOptedOutAsync(const Model::CheckIfPhoneNumberIsOptedOutRequest& request, const CheckIfPhoneNumberIsOptedOutResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Verifies an endpoint owner's intent to receive messages by validating the
         * token sent to the endpoint by an earlier <code>Subscribe</code> action. If the
         * token is valid, the action creates a new subscription and returns its Amazon
         * Resource Name (ARN). This call requires an AWS signature only when the
         * <code>AuthenticateOnUnsubscribe</code> flag is set to "true".</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sns-2010-03-31/ConfirmSubscription">AWS
         * API Reference</a></p>
         */
        virtual Model::ConfirmSubscriptionOutcome ConfirmSubscription(const Model::ConfirmSubscriptionRequest& request) const;

        /**
         * <p>Verifies an endpoint owner's intent to receive messages by validating the
         * token sent to the endpoint by an earlier <code>Subscribe</code> action. If the
         * token is valid, the action creates a new subscription and returns its Amazon
         * Resource Name (ARN). This call requires an AWS signature only when the
         * <code>AuthenticateOnUnsubscribe</code> flag is set to "true".</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sns-2010-03-31/ConfirmSubscription">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ConfirmSubscriptionOutcomeCallable ConfirmSubscriptionCallable(const Model::ConfirmSubscriptionRequest& request) const;

        /**
         * <p>Verifies an endpoint owner's intent to receive messages by validating the
         * token sent to the endpoint by an earlier <code>Subscribe</code> action. If the
         * token is valid, the action creates a new subscription and returns its Amazon
         * Resource Name (ARN). This call requires an AWS signature only when the
         * <code>AuthenticateOnUnsubscribe</code> flag is set to "true".</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sns-2010-03-31/ConfirmSubscription">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ConfirmSubscriptionAsync(const Model::ConfirmSubscriptionRequest& request, const ConfirmSubscriptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a platform application object for one of the supported push
         * notification services, such as APNS and FCM, to which devices and mobile apps
         * may register. You must specify PlatformPrincipal and PlatformCredential
         * attributes when using the <code>CreatePlatformApplication</code> action. The
         * PlatformPrincipal is received from the notification service. For
         * APNS/APNS_SANDBOX, PlatformPrincipal is "SSL certificate". For GCM,
         * PlatformPrincipal is not applicable. For ADM, PlatformPrincipal is "client id".
         * The PlatformCredential is also received from the notification service. For WNS,
         * PlatformPrincipal is "Package Security Identifier". For MPNS, PlatformPrincipal
         * is "TLS certificate". For Baidu, PlatformPrincipal is "API key".</p> <p>For
         * APNS/APNS_SANDBOX, PlatformCredential is "private key". For GCM,
         * PlatformCredential is "API key". For ADM, PlatformCredential is "client secret".
         * For WNS, PlatformCredential is "secret key". For MPNS, PlatformCredential is
         * "private key". For Baidu, PlatformCredential is "secret key". The
         * PlatformApplicationArn that is returned when using
         * <code>CreatePlatformApplication</code> is then used as an attribute for the
         * <code>CreatePlatformEndpoint</code> action. For more information, see <a
         * href="https://docs.aws.amazon.com/sns/latest/dg/SNSMobilePush.html">Using Amazon
         * SNS Mobile Push Notifications</a>. For more information about obtaining the
         * PlatformPrincipal and PlatformCredential for each of the supported push
         * notification services, see <a
         * href="https://docs.aws.amazon.com/sns/latest/dg/mobile-push-apns.html">Getting
         * Started with Apple Push Notification Service</a>, <a
         * href="https://docs.aws.amazon.com/sns/latest/dg/mobile-push-adm.html">Getting
         * Started with Amazon Device Messaging</a>, <a
         * href="https://docs.aws.amazon.com/sns/latest/dg/mobile-push-baidu.html">Getting
         * Started with Baidu Cloud Push</a>, <a
         * href="https://docs.aws.amazon.com/sns/latest/dg/mobile-push-gcm.html">Getting
         * Started with Google Cloud Messaging for Android</a>, <a
         * href="https://docs.aws.amazon.com/sns/latest/dg/mobile-push-mpns.html">Getting
         * Started with MPNS</a>, or <a
         * href="https://docs.aws.amazon.com/sns/latest/dg/mobile-push-wns.html">Getting
         * Started with WNS</a>. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sns-2010-03-31/CreatePlatformApplication">AWS
         * API Reference</a></p>
         */
        virtual Model::CreatePlatformApplicationOutcome CreatePlatformApplication(const Model::CreatePlatformApplicationRequest& request) const;

        /**
         * <p>Creates a platform application object for one of the supported push
         * notification services, such as APNS and FCM, to which devices and mobile apps
         * may register. You must specify PlatformPrincipal and PlatformCredential
         * attributes when using the <code>CreatePlatformApplication</code> action. The
         * PlatformPrincipal is received from the notification service. For
         * APNS/APNS_SANDBOX, PlatformPrincipal is "SSL certificate". For GCM,
         * PlatformPrincipal is not applicable. For ADM, PlatformPrincipal is "client id".
         * The PlatformCredential is also received from the notification service. For WNS,
         * PlatformPrincipal is "Package Security Identifier". For MPNS, PlatformPrincipal
         * is "TLS certificate". For Baidu, PlatformPrincipal is "API key".</p> <p>For
         * APNS/APNS_SANDBOX, PlatformCredential is "private key". For GCM,
         * PlatformCredential is "API key". For ADM, PlatformCredential is "client secret".
         * For WNS, PlatformCredential is "secret key". For MPNS, PlatformCredential is
         * "private key". For Baidu, PlatformCredential is "secret key". The
         * PlatformApplicationArn that is returned when using
         * <code>CreatePlatformApplication</code> is then used as an attribute for the
         * <code>CreatePlatformEndpoint</code> action. For more information, see <a
         * href="https://docs.aws.amazon.com/sns/latest/dg/SNSMobilePush.html">Using Amazon
         * SNS Mobile Push Notifications</a>. For more information about obtaining the
         * PlatformPrincipal and PlatformCredential for each of the supported push
         * notification services, see <a
         * href="https://docs.aws.amazon.com/sns/latest/dg/mobile-push-apns.html">Getting
         * Started with Apple Push Notification Service</a>, <a
         * href="https://docs.aws.amazon.com/sns/latest/dg/mobile-push-adm.html">Getting
         * Started with Amazon Device Messaging</a>, <a
         * href="https://docs.aws.amazon.com/sns/latest/dg/mobile-push-baidu.html">Getting
         * Started with Baidu Cloud Push</a>, <a
         * href="https://docs.aws.amazon.com/sns/latest/dg/mobile-push-gcm.html">Getting
         * Started with Google Cloud Messaging for Android</a>, <a
         * href="https://docs.aws.amazon.com/sns/latest/dg/mobile-push-mpns.html">Getting
         * Started with MPNS</a>, or <a
         * href="https://docs.aws.amazon.com/sns/latest/dg/mobile-push-wns.html">Getting
         * Started with WNS</a>. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sns-2010-03-31/CreatePlatformApplication">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreatePlatformApplicationOutcomeCallable CreatePlatformApplicationCallable(const Model::CreatePlatformApplicationRequest& request) const;

        /**
         * <p>Creates a platform application object for one of the supported push
         * notification services, such as APNS and FCM, to which devices and mobile apps
         * may register. You must specify PlatformPrincipal and PlatformCredential
         * attributes when using the <code>CreatePlatformApplication</code> action. The
         * PlatformPrincipal is received from the notification service. For
         * APNS/APNS_SANDBOX, PlatformPrincipal is "SSL certificate". For GCM,
         * PlatformPrincipal is not applicable. For ADM, PlatformPrincipal is "client id".
         * The PlatformCredential is also received from the notification service. For WNS,
         * PlatformPrincipal is "Package Security Identifier". For MPNS, PlatformPrincipal
         * is "TLS certificate". For Baidu, PlatformPrincipal is "API key".</p> <p>For
         * APNS/APNS_SANDBOX, PlatformCredential is "private key". For GCM,
         * PlatformCredential is "API key". For ADM, PlatformCredential is "client secret".
         * For WNS, PlatformCredential is "secret key". For MPNS, PlatformCredential is
         * "private key". For Baidu, PlatformCredential is "secret key". The
         * PlatformApplicationArn that is returned when using
         * <code>CreatePlatformApplication</code> is then used as an attribute for the
         * <code>CreatePlatformEndpoint</code> action. For more information, see <a
         * href="https://docs.aws.amazon.com/sns/latest/dg/SNSMobilePush.html">Using Amazon
         * SNS Mobile Push Notifications</a>. For more information about obtaining the
         * PlatformPrincipal and PlatformCredential for each of the supported push
         * notification services, see <a
         * href="https://docs.aws.amazon.com/sns/latest/dg/mobile-push-apns.html">Getting
         * Started with Apple Push Notification Service</a>, <a
         * href="https://docs.aws.amazon.com/sns/latest/dg/mobile-push-adm.html">Getting
         * Started with Amazon Device Messaging</a>, <a
         * href="https://docs.aws.amazon.com/sns/latest/dg/mobile-push-baidu.html">Getting
         * Started with Baidu Cloud Push</a>, <a
         * href="https://docs.aws.amazon.com/sns/latest/dg/mobile-push-gcm.html">Getting
         * Started with Google Cloud Messaging for Android</a>, <a
         * href="https://docs.aws.amazon.com/sns/latest/dg/mobile-push-mpns.html">Getting
         * Started with MPNS</a>, or <a
         * href="https://docs.aws.amazon.com/sns/latest/dg/mobile-push-wns.html">Getting
         * Started with WNS</a>. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sns-2010-03-31/CreatePlatformApplication">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreatePlatformApplicationAsync(const Model::CreatePlatformApplicationRequest& request, const CreatePlatformApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates an endpoint for a device and mobile app on one of the supported push
         * notification services, such as GCM and APNS. <code>CreatePlatformEndpoint</code>
         * requires the PlatformApplicationArn that is returned from
         * <code>CreatePlatformApplication</code>. The EndpointArn that is returned when
         * using <code>CreatePlatformEndpoint</code> can then be used by the
         * <code>Publish</code> action to send a message to a mobile app or by the
         * <code>Subscribe</code> action for subscription to a topic. The
         * <code>CreatePlatformEndpoint</code> action is idempotent, so if the requester
         * already owns an endpoint with the same device token and attributes, that
         * endpoint's ARN is returned without creating a new endpoint. For more
         * information, see <a
         * href="https://docs.aws.amazon.com/sns/latest/dg/SNSMobilePush.html">Using Amazon
         * SNS Mobile Push Notifications</a>. </p> <p>When using
         * <code>CreatePlatformEndpoint</code> with Baidu, two attributes must be provided:
         * ChannelId and UserId. The token field must also contain the ChannelId. For more
         * information, see <a
         * href="https://docs.aws.amazon.com/sns/latest/dg/SNSMobilePushBaiduEndpoint.html">Creating
         * an Amazon SNS Endpoint for Baidu</a>. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sns-2010-03-31/CreatePlatformEndpoint">AWS
         * API Reference</a></p>
         */
        virtual Model::CreatePlatformEndpointOutcome CreatePlatformEndpoint(const Model::CreatePlatformEndpointRequest& request) const;

        /**
         * <p>Creates an endpoint for a device and mobile app on one of the supported push
         * notification services, such as GCM and APNS. <code>CreatePlatformEndpoint</code>
         * requires the PlatformApplicationArn that is returned from
         * <code>CreatePlatformApplication</code>. The EndpointArn that is returned when
         * using <code>CreatePlatformEndpoint</code> can then be used by the
         * <code>Publish</code> action to send a message to a mobile app or by the
         * <code>Subscribe</code> action for subscription to a topic. The
         * <code>CreatePlatformEndpoint</code> action is idempotent, so if the requester
         * already owns an endpoint with the same device token and attributes, that
         * endpoint's ARN is returned without creating a new endpoint. For more
         * information, see <a
         * href="https://docs.aws.amazon.com/sns/latest/dg/SNSMobilePush.html">Using Amazon
         * SNS Mobile Push Notifications</a>. </p> <p>When using
         * <code>CreatePlatformEndpoint</code> with Baidu, two attributes must be provided:
         * ChannelId and UserId. The token field must also contain the ChannelId. For more
         * information, see <a
         * href="https://docs.aws.amazon.com/sns/latest/dg/SNSMobilePushBaiduEndpoint.html">Creating
         * an Amazon SNS Endpoint for Baidu</a>. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sns-2010-03-31/CreatePlatformEndpoint">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreatePlatformEndpointOutcomeCallable CreatePlatformEndpointCallable(const Model::CreatePlatformEndpointRequest& request) const;

        /**
         * <p>Creates an endpoint for a device and mobile app on one of the supported push
         * notification services, such as GCM and APNS. <code>CreatePlatformEndpoint</code>
         * requires the PlatformApplicationArn that is returned from
         * <code>CreatePlatformApplication</code>. The EndpointArn that is returned when
         * using <code>CreatePlatformEndpoint</code> can then be used by the
         * <code>Publish</code> action to send a message to a mobile app or by the
         * <code>Subscribe</code> action for subscription to a topic. The
         * <code>CreatePlatformEndpoint</code> action is idempotent, so if the requester
         * already owns an endpoint with the same device token and attributes, that
         * endpoint's ARN is returned without creating a new endpoint. For more
         * information, see <a
         * href="https://docs.aws.amazon.com/sns/latest/dg/SNSMobilePush.html">Using Amazon
         * SNS Mobile Push Notifications</a>. </p> <p>When using
         * <code>CreatePlatformEndpoint</code> with Baidu, two attributes must be provided:
         * ChannelId and UserId. The token field must also contain the ChannelId. For more
         * information, see <a
         * href="https://docs.aws.amazon.com/sns/latest/dg/SNSMobilePushBaiduEndpoint.html">Creating
         * an Amazon SNS Endpoint for Baidu</a>. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sns-2010-03-31/CreatePlatformEndpoint">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreatePlatformEndpointAsync(const Model::CreatePlatformEndpointRequest& request, const CreatePlatformEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a topic to which notifications can be published. Users can create at
         * most 100,000 topics. For more information, see <a
         * href="http://aws.amazon.com/sns/">https://aws.amazon.com/sns</a>. This action is
         * idempotent, so if the requester already owns a topic with the specified name,
         * that topic's ARN is returned without creating a new topic.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sns-2010-03-31/CreateTopic">AWS API
         * Reference</a></p>
         */
        virtual Model::CreateTopicOutcome CreateTopic(const Model::CreateTopicRequest& request) const;

        /**
         * <p>Creates a topic to which notifications can be published. Users can create at
         * most 100,000 topics. For more information, see <a
         * href="http://aws.amazon.com/sns/">https://aws.amazon.com/sns</a>. This action is
         * idempotent, so if the requester already owns a topic with the specified name,
         * that topic's ARN is returned without creating a new topic.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sns-2010-03-31/CreateTopic">AWS API
         * Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateTopicOutcomeCallable CreateTopicCallable(const Model::CreateTopicRequest& request) const;

        /**
         * <p>Creates a topic to which notifications can be published. Users can create at
         * most 100,000 topics. For more information, see <a
         * href="http://aws.amazon.com/sns/">https://aws.amazon.com/sns</a>. This action is
         * idempotent, so if the requester already owns a topic with the specified name,
         * that topic's ARN is returned without creating a new topic.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sns-2010-03-31/CreateTopic">AWS API
         * Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateTopicAsync(const Model::CreateTopicRequest& request, const CreateTopicResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the endpoint for a device and mobile app from Amazon SNS. This action
         * is idempotent. For more information, see <a
         * href="https://docs.aws.amazon.com/sns/latest/dg/SNSMobilePush.html">Using Amazon
         * SNS Mobile Push Notifications</a>. </p> <p>When you delete an endpoint that is
         * also subscribed to a topic, then you must also unsubscribe the endpoint from the
         * topic.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sns-2010-03-31/DeleteEndpoint">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteEndpointOutcome DeleteEndpoint(const Model::DeleteEndpointRequest& request) const;

        /**
         * <p>Deletes the endpoint for a device and mobile app from Amazon SNS. This action
         * is idempotent. For more information, see <a
         * href="https://docs.aws.amazon.com/sns/latest/dg/SNSMobilePush.html">Using Amazon
         * SNS Mobile Push Notifications</a>. </p> <p>When you delete an endpoint that is
         * also subscribed to a topic, then you must also unsubscribe the endpoint from the
         * topic.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sns-2010-03-31/DeleteEndpoint">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteEndpointOutcomeCallable DeleteEndpointCallable(const Model::DeleteEndpointRequest& request) const;

        /**
         * <p>Deletes the endpoint for a device and mobile app from Amazon SNS. This action
         * is idempotent. For more information, see <a
         * href="https://docs.aws.amazon.com/sns/latest/dg/SNSMobilePush.html">Using Amazon
         * SNS Mobile Push Notifications</a>. </p> <p>When you delete an endpoint that is
         * also subscribed to a topic, then you must also unsubscribe the endpoint from the
         * topic.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sns-2010-03-31/DeleteEndpoint">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteEndpointAsync(const Model::DeleteEndpointRequest& request, const DeleteEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a platform application object for one of the supported push
         * notification services, such as APNS and GCM. For more information, see <a
         * href="https://docs.aws.amazon.com/sns/latest/dg/SNSMobilePush.html">Using Amazon
         * SNS Mobile Push Notifications</a>. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sns-2010-03-31/DeletePlatformApplication">AWS
         * API Reference</a></p>
         */
        virtual Model::DeletePlatformApplicationOutcome DeletePlatformApplication(const Model::DeletePlatformApplicationRequest& request) const;

        /**
         * <p>Deletes a platform application object for one of the supported push
         * notification services, such as APNS and GCM. For more information, see <a
         * href="https://docs.aws.amazon.com/sns/latest/dg/SNSMobilePush.html">Using Amazon
         * SNS Mobile Push Notifications</a>. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sns-2010-03-31/DeletePlatformApplication">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeletePlatformApplicationOutcomeCallable DeletePlatformApplicationCallable(const Model::DeletePlatformApplicationRequest& request) const;

        /**
         * <p>Deletes a platform application object for one of the supported push
         * notification services, such as APNS and GCM. For more information, see <a
         * href="https://docs.aws.amazon.com/sns/latest/dg/SNSMobilePush.html">Using Amazon
         * SNS Mobile Push Notifications</a>. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sns-2010-03-31/DeletePlatformApplication">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeletePlatformApplicationAsync(const Model::DeletePlatformApplicationRequest& request, const DeletePlatformApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a topic and all its subscriptions. Deleting a topic might prevent
         * some messages previously sent to the topic from being delivered to subscribers.
         * This action is idempotent, so deleting a topic that does not exist does not
         * result in an error.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sns-2010-03-31/DeleteTopic">AWS API
         * Reference</a></p>
         */
        virtual Model::DeleteTopicOutcome DeleteTopic(const Model::DeleteTopicRequest& request) const;

        /**
         * <p>Deletes a topic and all its subscriptions. Deleting a topic might prevent
         * some messages previously sent to the topic from being delivered to subscribers.
         * This action is idempotent, so deleting a topic that does not exist does not
         * result in an error.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sns-2010-03-31/DeleteTopic">AWS API
         * Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteTopicOutcomeCallable DeleteTopicCallable(const Model::DeleteTopicRequest& request) const;

        /**
         * <p>Deletes a topic and all its subscriptions. Deleting a topic might prevent
         * some messages previously sent to the topic from being delivered to subscribers.
         * This action is idempotent, so deleting a topic that does not exist does not
         * result in an error.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sns-2010-03-31/DeleteTopic">AWS API
         * Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteTopicAsync(const Model::DeleteTopicRequest& request, const DeleteTopicResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves the endpoint attributes for a device on one of the supported push
         * notification services, such as GCM and APNS. For more information, see <a
         * href="https://docs.aws.amazon.com/sns/latest/dg/SNSMobilePush.html">Using Amazon
         * SNS Mobile Push Notifications</a>. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sns-2010-03-31/GetEndpointAttributes">AWS
         * API Reference</a></p>
         */
        virtual Model::GetEndpointAttributesOutcome GetEndpointAttributes(const Model::GetEndpointAttributesRequest& request) const;

        /**
         * <p>Retrieves the endpoint attributes for a device on one of the supported push
         * notification services, such as GCM and APNS. For more information, see <a
         * href="https://docs.aws.amazon.com/sns/latest/dg/SNSMobilePush.html">Using Amazon
         * SNS Mobile Push Notifications</a>. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sns-2010-03-31/GetEndpointAttributes">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetEndpointAttributesOutcomeCallable GetEndpointAttributesCallable(const Model::GetEndpointAttributesRequest& request) const;

        /**
         * <p>Retrieves the endpoint attributes for a device on one of the supported push
         * notification services, such as GCM and APNS. For more information, see <a
         * href="https://docs.aws.amazon.com/sns/latest/dg/SNSMobilePush.html">Using Amazon
         * SNS Mobile Push Notifications</a>. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sns-2010-03-31/GetEndpointAttributes">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetEndpointAttributesAsync(const Model::GetEndpointAttributesRequest& request, const GetEndpointAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves the attributes of the platform application object for the supported
         * push notification services, such as APNS and GCM. For more information, see <a
         * href="https://docs.aws.amazon.com/sns/latest/dg/SNSMobilePush.html">Using Amazon
         * SNS Mobile Push Notifications</a>. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sns-2010-03-31/GetPlatformApplicationAttributes">AWS
         * API Reference</a></p>
         */
        virtual Model::GetPlatformApplicationAttributesOutcome GetPlatformApplicationAttributes(const Model::GetPlatformApplicationAttributesRequest& request) const;

        /**
         * <p>Retrieves the attributes of the platform application object for the supported
         * push notification services, such as APNS and GCM. For more information, see <a
         * href="https://docs.aws.amazon.com/sns/latest/dg/SNSMobilePush.html">Using Amazon
         * SNS Mobile Push Notifications</a>. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sns-2010-03-31/GetPlatformApplicationAttributes">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetPlatformApplicationAttributesOutcomeCallable GetPlatformApplicationAttributesCallable(const Model::GetPlatformApplicationAttributesRequest& request) const;

        /**
         * <p>Retrieves the attributes of the platform application object for the supported
         * push notification services, such as APNS and GCM. For more information, see <a
         * href="https://docs.aws.amazon.com/sns/latest/dg/SNSMobilePush.html">Using Amazon
         * SNS Mobile Push Notifications</a>. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sns-2010-03-31/GetPlatformApplicationAttributes">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetPlatformApplicationAttributesAsync(const Model::GetPlatformApplicationAttributesRequest& request, const GetPlatformApplicationAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns the settings for sending SMS messages from your account.</p> <p>These
         * settings are set with the <code>SetSMSAttributes</code> action.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sns-2010-03-31/GetSMSAttributes">AWS
         * API Reference</a></p>
         */
        virtual Model::GetSMSAttributesOutcome GetSMSAttributes(const Model::GetSMSAttributesRequest& request) const;

        /**
         * <p>Returns the settings for sending SMS messages from your account.</p> <p>These
         * settings are set with the <code>SetSMSAttributes</code> action.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sns-2010-03-31/GetSMSAttributes">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetSMSAttributesOutcomeCallable GetSMSAttributesCallable(const Model::GetSMSAttributesRequest& request) const;

        /**
         * <p>Returns the settings for sending SMS messages from your account.</p> <p>These
         * settings are set with the <code>SetSMSAttributes</code> action.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sns-2010-03-31/GetSMSAttributes">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetSMSAttributesAsync(const Model::GetSMSAttributesRequest& request, const GetSMSAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns all of the properties of a subscription.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sns-2010-03-31/GetSubscriptionAttributes">AWS
         * API Reference</a></p>
         */
        virtual Model::GetSubscriptionAttributesOutcome GetSubscriptionAttributes(const Model::GetSubscriptionAttributesRequest& request) const;

        /**
         * <p>Returns all of the properties of a subscription.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sns-2010-03-31/GetSubscriptionAttributes">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetSubscriptionAttributesOutcomeCallable GetSubscriptionAttributesCallable(const Model::GetSubscriptionAttributesRequest& request) const;

        /**
         * <p>Returns all of the properties of a subscription.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sns-2010-03-31/GetSubscriptionAttributes">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetSubscriptionAttributesAsync(const Model::GetSubscriptionAttributesRequest& request, const GetSubscriptionAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns all of the properties of a topic. Topic properties returned might
         * differ based on the authorization of the user.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sns-2010-03-31/GetTopicAttributes">AWS
         * API Reference</a></p>
         */
        virtual Model::GetTopicAttributesOutcome GetTopicAttributes(const Model::GetTopicAttributesRequest& request) const;

        /**
         * <p>Returns all of the properties of a topic. Topic properties returned might
         * differ based on the authorization of the user.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sns-2010-03-31/GetTopicAttributes">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetTopicAttributesOutcomeCallable GetTopicAttributesCallable(const Model::GetTopicAttributesRequest& request) const;

        /**
         * <p>Returns all of the properties of a topic. Topic properties returned might
         * differ based on the authorization of the user.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sns-2010-03-31/GetTopicAttributes">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetTopicAttributesAsync(const Model::GetTopicAttributesRequest& request, const GetTopicAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the endpoints and endpoint attributes for devices in a supported push
         * notification service, such as GCM and APNS. The results for
         * <code>ListEndpointsByPlatformApplication</code> are paginated and return a
         * limited list of endpoints, up to 100. If additional records are available after
         * the first page results, then a NextToken string will be returned. To receive the
         * next page, you call <code>ListEndpointsByPlatformApplication</code> again using
         * the NextToken string received from the previous call. When there are no more
         * records to return, NextToken will be null. For more information, see <a
         * href="https://docs.aws.amazon.com/sns/latest/dg/SNSMobilePush.html">Using Amazon
         * SNS Mobile Push Notifications</a>. </p> <p>This action is throttled at 30
         * transactions per second (TPS).</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sns-2010-03-31/ListEndpointsByPlatformApplication">AWS
         * API Reference</a></p>
         */
        virtual Model::ListEndpointsByPlatformApplicationOutcome ListEndpointsByPlatformApplication(const Model::ListEndpointsByPlatformApplicationRequest& request) const;

        /**
         * <p>Lists the endpoints and endpoint attributes for devices in a supported push
         * notification service, such as GCM and APNS. The results for
         * <code>ListEndpointsByPlatformApplication</code> are paginated and return a
         * limited list of endpoints, up to 100. If additional records are available after
         * the first page results, then a NextToken string will be returned. To receive the
         * next page, you call <code>ListEndpointsByPlatformApplication</code> again using
         * the NextToken string received from the previous call. When there are no more
         * records to return, NextToken will be null. For more information, see <a
         * href="https://docs.aws.amazon.com/sns/latest/dg/SNSMobilePush.html">Using Amazon
         * SNS Mobile Push Notifications</a>. </p> <p>This action is throttled at 30
         * transactions per second (TPS).</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sns-2010-03-31/ListEndpointsByPlatformApplication">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListEndpointsByPlatformApplicationOutcomeCallable ListEndpointsByPlatformApplicationCallable(const Model::ListEndpointsByPlatformApplicationRequest& request) const;

        /**
         * <p>Lists the endpoints and endpoint attributes for devices in a supported push
         * notification service, such as GCM and APNS. The results for
         * <code>ListEndpointsByPlatformApplication</code> are paginated and return a
         * limited list of endpoints, up to 100. If additional records are available after
         * the first page results, then a NextToken string will be returned. To receive the
         * next page, you call <code>ListEndpointsByPlatformApplication</code> again using
         * the NextToken string received from the previous call. When there are no more
         * records to return, NextToken will be null. For more information, see <a
         * href="https://docs.aws.amazon.com/sns/latest/dg/SNSMobilePush.html">Using Amazon
         * SNS Mobile Push Notifications</a>. </p> <p>This action is throttled at 30
         * transactions per second (TPS).</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sns-2010-03-31/ListEndpointsByPlatformApplication">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListEndpointsByPlatformApplicationAsync(const Model::ListEndpointsByPlatformApplicationRequest& request, const ListEndpointsByPlatformApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a list of phone numbers that are opted out, meaning you cannot send
         * SMS messages to them.</p> <p>The results for
         * <code>ListPhoneNumbersOptedOut</code> are paginated, and each page returns up to
         * 100 phone numbers. If additional phone numbers are available after the first
         * page of results, then a <code>NextToken</code> string will be returned. To
         * receive the next page, you call <code>ListPhoneNumbersOptedOut</code> again
         * using the <code>NextToken</code> string received from the previous call. When
         * there are no more records to return, <code>NextToken</code> will be
         * null.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sns-2010-03-31/ListPhoneNumbersOptedOut">AWS
         * API Reference</a></p>
         */
        virtual Model::ListPhoneNumbersOptedOutOutcome ListPhoneNumbersOptedOut(const Model::ListPhoneNumbersOptedOutRequest& request) const;

        /**
         * <p>Returns a list of phone numbers that are opted out, meaning you cannot send
         * SMS messages to them.</p> <p>The results for
         * <code>ListPhoneNumbersOptedOut</code> are paginated, and each page returns up to
         * 100 phone numbers. If additional phone numbers are available after the first
         * page of results, then a <code>NextToken</code> string will be returned. To
         * receive the next page, you call <code>ListPhoneNumbersOptedOut</code> again
         * using the <code>NextToken</code> string received from the previous call. When
         * there are no more records to return, <code>NextToken</code> will be
         * null.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sns-2010-03-31/ListPhoneNumbersOptedOut">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListPhoneNumbersOptedOutOutcomeCallable ListPhoneNumbersOptedOutCallable(const Model::ListPhoneNumbersOptedOutRequest& request) const;

        /**
         * <p>Returns a list of phone numbers that are opted out, meaning you cannot send
         * SMS messages to them.</p> <p>The results for
         * <code>ListPhoneNumbersOptedOut</code> are paginated, and each page returns up to
         * 100 phone numbers. If additional phone numbers are available after the first
         * page of results, then a <code>NextToken</code> string will be returned. To
         * receive the next page, you call <code>ListPhoneNumbersOptedOut</code> again
         * using the <code>NextToken</code> string received from the previous call. When
         * there are no more records to return, <code>NextToken</code> will be
         * null.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sns-2010-03-31/ListPhoneNumbersOptedOut">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListPhoneNumbersOptedOutAsync(const Model::ListPhoneNumbersOptedOutRequest& request, const ListPhoneNumbersOptedOutResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the platform application objects for the supported push notification
         * services, such as APNS and GCM. The results for
         * <code>ListPlatformApplications</code> are paginated and return a limited list of
         * applications, up to 100. If additional records are available after the first
         * page results, then a NextToken string will be returned. To receive the next
         * page, you call <code>ListPlatformApplications</code> using the NextToken string
         * received from the previous call. When there are no more records to return,
         * NextToken will be null. For more information, see <a
         * href="https://docs.aws.amazon.com/sns/latest/dg/SNSMobilePush.html">Using Amazon
         * SNS Mobile Push Notifications</a>. </p> <p>This action is throttled at 15
         * transactions per second (TPS).</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sns-2010-03-31/ListPlatformApplications">AWS
         * API Reference</a></p>
         */
        virtual Model::ListPlatformApplicationsOutcome ListPlatformApplications(const Model::ListPlatformApplicationsRequest& request) const;

        /**
         * <p>Lists the platform application objects for the supported push notification
         * services, such as APNS and GCM. The results for
         * <code>ListPlatformApplications</code> are paginated and return a limited list of
         * applications, up to 100. If additional records are available after the first
         * page results, then a NextToken string will be returned. To receive the next
         * page, you call <code>ListPlatformApplications</code> using the NextToken string
         * received from the previous call. When there are no more records to return,
         * NextToken will be null. For more information, see <a
         * href="https://docs.aws.amazon.com/sns/latest/dg/SNSMobilePush.html">Using Amazon
         * SNS Mobile Push Notifications</a>. </p> <p>This action is throttled at 15
         * transactions per second (TPS).</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sns-2010-03-31/ListPlatformApplications">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListPlatformApplicationsOutcomeCallable ListPlatformApplicationsCallable(const Model::ListPlatformApplicationsRequest& request) const;

        /**
         * <p>Lists the platform application objects for the supported push notification
         * services, such as APNS and GCM. The results for
         * <code>ListPlatformApplications</code> are paginated and return a limited list of
         * applications, up to 100. If additional records are available after the first
         * page results, then a NextToken string will be returned. To receive the next
         * page, you call <code>ListPlatformApplications</code> using the NextToken string
         * received from the previous call. When there are no more records to return,
         * NextToken will be null. For more information, see <a
         * href="https://docs.aws.amazon.com/sns/latest/dg/SNSMobilePush.html">Using Amazon
         * SNS Mobile Push Notifications</a>. </p> <p>This action is throttled at 15
         * transactions per second (TPS).</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sns-2010-03-31/ListPlatformApplications">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListPlatformApplicationsAsync(const Model::ListPlatformApplicationsRequest& request, const ListPlatformApplicationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a list of the requester's subscriptions. Each call returns a limited
         * list of subscriptions, up to 100. If there are more subscriptions, a
         * <code>NextToken</code> is also returned. Use the <code>NextToken</code>
         * parameter in a new <code>ListSubscriptions</code> call to get further
         * results.</p> <p>This action is throttled at 30 transactions per second
         * (TPS).</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sns-2010-03-31/ListSubscriptions">AWS
         * API Reference</a></p>
         */
        virtual Model::ListSubscriptionsOutcome ListSubscriptions(const Model::ListSubscriptionsRequest& request) const;

        /**
         * <p>Returns a list of the requester's subscriptions. Each call returns a limited
         * list of subscriptions, up to 100. If there are more subscriptions, a
         * <code>NextToken</code> is also returned. Use the <code>NextToken</code>
         * parameter in a new <code>ListSubscriptions</code> call to get further
         * results.</p> <p>This action is throttled at 30 transactions per second
         * (TPS).</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sns-2010-03-31/ListSubscriptions">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListSubscriptionsOutcomeCallable ListSubscriptionsCallable(const Model::ListSubscriptionsRequest& request) const;

        /**
         * <p>Returns a list of the requester's subscriptions. Each call returns a limited
         * list of subscriptions, up to 100. If there are more subscriptions, a
         * <code>NextToken</code> is also returned. Use the <code>NextToken</code>
         * parameter in a new <code>ListSubscriptions</code> call to get further
         * results.</p> <p>This action is throttled at 30 transactions per second
         * (TPS).</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sns-2010-03-31/ListSubscriptions">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListSubscriptionsAsync(const Model::ListSubscriptionsRequest& request, const ListSubscriptionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a list of the subscriptions to a specific topic. Each call returns a
         * limited list of subscriptions, up to 100. If there are more subscriptions, a
         * <code>NextToken</code> is also returned. Use the <code>NextToken</code>
         * parameter in a new <code>ListSubscriptionsByTopic</code> call to get further
         * results.</p> <p>This action is throttled at 30 transactions per second
         * (TPS).</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sns-2010-03-31/ListSubscriptionsByTopic">AWS
         * API Reference</a></p>
         */
        virtual Model::ListSubscriptionsByTopicOutcome ListSubscriptionsByTopic(const Model::ListSubscriptionsByTopicRequest& request) const;

        /**
         * <p>Returns a list of the subscriptions to a specific topic. Each call returns a
         * limited list of subscriptions, up to 100. If there are more subscriptions, a
         * <code>NextToken</code> is also returned. Use the <code>NextToken</code>
         * parameter in a new <code>ListSubscriptionsByTopic</code> call to get further
         * results.</p> <p>This action is throttled at 30 transactions per second
         * (TPS).</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sns-2010-03-31/ListSubscriptionsByTopic">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListSubscriptionsByTopicOutcomeCallable ListSubscriptionsByTopicCallable(const Model::ListSubscriptionsByTopicRequest& request) const;

        /**
         * <p>Returns a list of the subscriptions to a specific topic. Each call returns a
         * limited list of subscriptions, up to 100. If there are more subscriptions, a
         * <code>NextToken</code> is also returned. Use the <code>NextToken</code>
         * parameter in a new <code>ListSubscriptionsByTopic</code> call to get further
         * results.</p> <p>This action is throttled at 30 transactions per second
         * (TPS).</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sns-2010-03-31/ListSubscriptionsByTopic">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListSubscriptionsByTopicAsync(const Model::ListSubscriptionsByTopicRequest& request, const ListSubscriptionsByTopicResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>List all tags added to the specified Amazon SNS topic. For an overview, see
         * <a href="https://docs.aws.amazon.com/sns/latest/dg/sns-tags.html">Amazon SNS
         * Tags</a> in the <i>Amazon Simple Notification Service Developer
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sns-2010-03-31/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;

        /**
         * <p>List all tags added to the specified Amazon SNS topic. For an overview, see
         * <a href="https://docs.aws.amazon.com/sns/latest/dg/sns-tags.html">Amazon SNS
         * Tags</a> in the <i>Amazon Simple Notification Service Developer
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sns-2010-03-31/ListTagsForResource">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const Model::ListTagsForResourceRequest& request) const;

        /**
         * <p>List all tags added to the specified Amazon SNS topic. For an overview, see
         * <a href="https://docs.aws.amazon.com/sns/latest/dg/sns-tags.html">Amazon SNS
         * Tags</a> in the <i>Amazon Simple Notification Service Developer
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sns-2010-03-31/ListTagsForResource">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListTagsForResourceAsync(const Model::ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a list of the requester's topics. Each call returns a limited list of
         * topics, up to 100. If there are more topics, a <code>NextToken</code> is also
         * returned. Use the <code>NextToken</code> parameter in a new
         * <code>ListTopics</code> call to get further results.</p> <p>This action is
         * throttled at 30 transactions per second (TPS).</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sns-2010-03-31/ListTopics">AWS API
         * Reference</a></p>
         */
        virtual Model::ListTopicsOutcome ListTopics(const Model::ListTopicsRequest& request) const;

        /**
         * <p>Returns a list of the requester's topics. Each call returns a limited list of
         * topics, up to 100. If there are more topics, a <code>NextToken</code> is also
         * returned. Use the <code>NextToken</code> parameter in a new
         * <code>ListTopics</code> call to get further results.</p> <p>This action is
         * throttled at 30 transactions per second (TPS).</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sns-2010-03-31/ListTopics">AWS API
         * Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListTopicsOutcomeCallable ListTopicsCallable(const Model::ListTopicsRequest& request) const;

        /**
         * <p>Returns a list of the requester's topics. Each call returns a limited list of
         * topics, up to 100. If there are more topics, a <code>NextToken</code> is also
         * returned. Use the <code>NextToken</code> parameter in a new
         * <code>ListTopics</code> call to get further results.</p> <p>This action is
         * throttled at 30 transactions per second (TPS).</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sns-2010-03-31/ListTopics">AWS API
         * Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListTopicsAsync(const Model::ListTopicsRequest& request, const ListTopicsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Use this request to opt in a phone number that is opted out, which enables
         * you to resume sending SMS messages to the number.</p> <p>You can opt in a phone
         * number only once every 30 days.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sns-2010-03-31/OptInPhoneNumber">AWS
         * API Reference</a></p>
         */
        virtual Model::OptInPhoneNumberOutcome OptInPhoneNumber(const Model::OptInPhoneNumberRequest& request) const;

        /**
         * <p>Use this request to opt in a phone number that is opted out, which enables
         * you to resume sending SMS messages to the number.</p> <p>You can opt in a phone
         * number only once every 30 days.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sns-2010-03-31/OptInPhoneNumber">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::OptInPhoneNumberOutcomeCallable OptInPhoneNumberCallable(const Model::OptInPhoneNumberRequest& request) const;

        /**
         * <p>Use this request to opt in a phone number that is opted out, which enables
         * you to resume sending SMS messages to the number.</p> <p>You can opt in a phone
         * number only once every 30 days.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sns-2010-03-31/OptInPhoneNumber">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void OptInPhoneNumberAsync(const Model::OptInPhoneNumberRequest& request, const OptInPhoneNumberResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Sends a message to an Amazon SNS topic or sends a text message (SMS message)
         * directly to a phone number. </p> <p>If you send a message to a topic, Amazon SNS
         * delivers the message to each endpoint that is subscribed to the topic. The
         * format of the message depends on the notification protocol for each subscribed
         * endpoint.</p> <p>When a <code>messageId</code> is returned, the message has been
         * saved and Amazon SNS will attempt to deliver it shortly.</p> <p>To use the
         * <code>Publish</code> action for sending a message to a mobile endpoint, such as
         * an app on a Kindle device or mobile phone, you must specify the EndpointArn for
         * the TargetArn parameter. The EndpointArn is returned when making a call with the
         * <code>CreatePlatformEndpoint</code> action. </p> <p>For more information about
         * formatting messages, see <a
         * href="https://docs.aws.amazon.com/sns/latest/dg/mobile-push-send-custommessage.html">Send
         * Custom Platform-Specific Payloads in Messages to Mobile Devices</a>.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sns-2010-03-31/Publish">AWS API
         * Reference</a></p>
         */
        virtual Model::PublishOutcome Publish(const Model::PublishRequest& request) const;

        /**
         * <p>Sends a message to an Amazon SNS topic or sends a text message (SMS message)
         * directly to a phone number. </p> <p>If you send a message to a topic, Amazon SNS
         * delivers the message to each endpoint that is subscribed to the topic. The
         * format of the message depends on the notification protocol for each subscribed
         * endpoint.</p> <p>When a <code>messageId</code> is returned, the message has been
         * saved and Amazon SNS will attempt to deliver it shortly.</p> <p>To use the
         * <code>Publish</code> action for sending a message to a mobile endpoint, such as
         * an app on a Kindle device or mobile phone, you must specify the EndpointArn for
         * the TargetArn parameter. The EndpointArn is returned when making a call with the
         * <code>CreatePlatformEndpoint</code> action. </p> <p>For more information about
         * formatting messages, see <a
         * href="https://docs.aws.amazon.com/sns/latest/dg/mobile-push-send-custommessage.html">Send
         * Custom Platform-Specific Payloads in Messages to Mobile Devices</a>.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sns-2010-03-31/Publish">AWS API
         * Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PublishOutcomeCallable PublishCallable(const Model::PublishRequest& request) const;

        /**
         * <p>Sends a message to an Amazon SNS topic or sends a text message (SMS message)
         * directly to a phone number. </p> <p>If you send a message to a topic, Amazon SNS
         * delivers the message to each endpoint that is subscribed to the topic. The
         * format of the message depends on the notification protocol for each subscribed
         * endpoint.</p> <p>When a <code>messageId</code> is returned, the message has been
         * saved and Amazon SNS will attempt to deliver it shortly.</p> <p>To use the
         * <code>Publish</code> action for sending a message to a mobile endpoint, such as
         * an app on a Kindle device or mobile phone, you must specify the EndpointArn for
         * the TargetArn parameter. The EndpointArn is returned when making a call with the
         * <code>CreatePlatformEndpoint</code> action. </p> <p>For more information about
         * formatting messages, see <a
         * href="https://docs.aws.amazon.com/sns/latest/dg/mobile-push-send-custommessage.html">Send
         * Custom Platform-Specific Payloads in Messages to Mobile Devices</a>.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sns-2010-03-31/Publish">AWS API
         * Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PublishAsync(const Model::PublishRequest& request, const PublishResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Removes a statement from a topic's access control policy.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sns-2010-03-31/RemovePermission">AWS
         * API Reference</a></p>
         */
        virtual Model::RemovePermissionOutcome RemovePermission(const Model::RemovePermissionRequest& request) const;

        /**
         * <p>Removes a statement from a topic's access control policy.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sns-2010-03-31/RemovePermission">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::RemovePermissionOutcomeCallable RemovePermissionCallable(const Model::RemovePermissionRequest& request) const;

        /**
         * <p>Removes a statement from a topic's access control policy.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sns-2010-03-31/RemovePermission">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void RemovePermissionAsync(const Model::RemovePermissionRequest& request, const RemovePermissionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Sets the attributes for an endpoint for a device on one of the supported push
         * notification services, such as GCM and APNS. For more information, see <a
         * href="https://docs.aws.amazon.com/sns/latest/dg/SNSMobilePush.html">Using Amazon
         * SNS Mobile Push Notifications</a>. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sns-2010-03-31/SetEndpointAttributes">AWS
         * API Reference</a></p>
         */
        virtual Model::SetEndpointAttributesOutcome SetEndpointAttributes(const Model::SetEndpointAttributesRequest& request) const;

        /**
         * <p>Sets the attributes for an endpoint for a device on one of the supported push
         * notification services, such as GCM and APNS. For more information, see <a
         * href="https://docs.aws.amazon.com/sns/latest/dg/SNSMobilePush.html">Using Amazon
         * SNS Mobile Push Notifications</a>. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sns-2010-03-31/SetEndpointAttributes">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::SetEndpointAttributesOutcomeCallable SetEndpointAttributesCallable(const Model::SetEndpointAttributesRequest& request) const;

        /**
         * <p>Sets the attributes for an endpoint for a device on one of the supported push
         * notification services, such as GCM and APNS. For more information, see <a
         * href="https://docs.aws.amazon.com/sns/latest/dg/SNSMobilePush.html">Using Amazon
         * SNS Mobile Push Notifications</a>. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sns-2010-03-31/SetEndpointAttributes">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void SetEndpointAttributesAsync(const Model::SetEndpointAttributesRequest& request, const SetEndpointAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Sets the attributes of the platform application object for the supported push
         * notification services, such as APNS and GCM. For more information, see <a
         * href="https://docs.aws.amazon.com/sns/latest/dg/SNSMobilePush.html">Using Amazon
         * SNS Mobile Push Notifications</a>. For information on configuring attributes for
         * message delivery status, see <a
         * href="https://docs.aws.amazon.com/sns/latest/dg/sns-msg-status.html">Using
         * Amazon SNS Application Attributes for Message Delivery Status</a>.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sns-2010-03-31/SetPlatformApplicationAttributes">AWS
         * API Reference</a></p>
         */
        virtual Model::SetPlatformApplicationAttributesOutcome SetPlatformApplicationAttributes(const Model::SetPlatformApplicationAttributesRequest& request) const;

        /**
         * <p>Sets the attributes of the platform application object for the supported push
         * notification services, such as APNS and GCM. For more information, see <a
         * href="https://docs.aws.amazon.com/sns/latest/dg/SNSMobilePush.html">Using Amazon
         * SNS Mobile Push Notifications</a>. For information on configuring attributes for
         * message delivery status, see <a
         * href="https://docs.aws.amazon.com/sns/latest/dg/sns-msg-status.html">Using
         * Amazon SNS Application Attributes for Message Delivery Status</a>.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sns-2010-03-31/SetPlatformApplicationAttributes">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::SetPlatformApplicationAttributesOutcomeCallable SetPlatformApplicationAttributesCallable(const Model::SetPlatformApplicationAttributesRequest& request) const;

        /**
         * <p>Sets the attributes of the platform application object for the supported push
         * notification services, such as APNS and GCM. For more information, see <a
         * href="https://docs.aws.amazon.com/sns/latest/dg/SNSMobilePush.html">Using Amazon
         * SNS Mobile Push Notifications</a>. For information on configuring attributes for
         * message delivery status, see <a
         * href="https://docs.aws.amazon.com/sns/latest/dg/sns-msg-status.html">Using
         * Amazon SNS Application Attributes for Message Delivery Status</a>.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sns-2010-03-31/SetPlatformApplicationAttributes">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void SetPlatformApplicationAttributesAsync(const Model::SetPlatformApplicationAttributesRequest& request, const SetPlatformApplicationAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Use this request to set the default settings for sending SMS messages and
         * receiving daily SMS usage reports.</p> <p>You can override some of these
         * settings for a single message when you use the <code>Publish</code> action with
         * the <code>MessageAttributes.entry.N</code> parameter. For more information, see
         * <a
         * href="https://docs.aws.amazon.com/sns/latest/dg/sms_publish-to-phone.html">Sending
         * an SMS Message</a> in the <i>Amazon SNS Developer Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sns-2010-03-31/SetSMSAttributes">AWS
         * API Reference</a></p>
         */
        virtual Model::SetSMSAttributesOutcome SetSMSAttributes(const Model::SetSMSAttributesRequest& request) const;

        /**
         * <p>Use this request to set the default settings for sending SMS messages and
         * receiving daily SMS usage reports.</p> <p>You can override some of these
         * settings for a single message when you use the <code>Publish</code> action with
         * the <code>MessageAttributes.entry.N</code> parameter. For more information, see
         * <a
         * href="https://docs.aws.amazon.com/sns/latest/dg/sms_publish-to-phone.html">Sending
         * an SMS Message</a> in the <i>Amazon SNS Developer Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sns-2010-03-31/SetSMSAttributes">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::SetSMSAttributesOutcomeCallable SetSMSAttributesCallable(const Model::SetSMSAttributesRequest& request) const;

        /**
         * <p>Use this request to set the default settings for sending SMS messages and
         * receiving daily SMS usage reports.</p> <p>You can override some of these
         * settings for a single message when you use the <code>Publish</code> action with
         * the <code>MessageAttributes.entry.N</code> parameter. For more information, see
         * <a
         * href="https://docs.aws.amazon.com/sns/latest/dg/sms_publish-to-phone.html">Sending
         * an SMS Message</a> in the <i>Amazon SNS Developer Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sns-2010-03-31/SetSMSAttributes">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void SetSMSAttributesAsync(const Model::SetSMSAttributesRequest& request, const SetSMSAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Allows a subscription owner to set an attribute of the subscription to a new
         * value.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sns-2010-03-31/SetSubscriptionAttributes">AWS
         * API Reference</a></p>
         */
        virtual Model::SetSubscriptionAttributesOutcome SetSubscriptionAttributes(const Model::SetSubscriptionAttributesRequest& request) const;

        /**
         * <p>Allows a subscription owner to set an attribute of the subscription to a new
         * value.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sns-2010-03-31/SetSubscriptionAttributes">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::SetSubscriptionAttributesOutcomeCallable SetSubscriptionAttributesCallable(const Model::SetSubscriptionAttributesRequest& request) const;

        /**
         * <p>Allows a subscription owner to set an attribute of the subscription to a new
         * value.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sns-2010-03-31/SetSubscriptionAttributes">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void SetSubscriptionAttributesAsync(const Model::SetSubscriptionAttributesRequest& request, const SetSubscriptionAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Allows a topic owner to set an attribute of the topic to a new
         * value.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sns-2010-03-31/SetTopicAttributes">AWS
         * API Reference</a></p>
         */
        virtual Model::SetTopicAttributesOutcome SetTopicAttributes(const Model::SetTopicAttributesRequest& request) const;

        /**
         * <p>Allows a topic owner to set an attribute of the topic to a new
         * value.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sns-2010-03-31/SetTopicAttributes">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::SetTopicAttributesOutcomeCallable SetTopicAttributesCallable(const Model::SetTopicAttributesRequest& request) const;

        /**
         * <p>Allows a topic owner to set an attribute of the topic to a new
         * value.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sns-2010-03-31/SetTopicAttributes">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void SetTopicAttributesAsync(const Model::SetTopicAttributesRequest& request, const SetTopicAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Prepares to subscribe an endpoint by sending the endpoint a confirmation
         * message. To actually create a subscription, the endpoint owner must call the
         * <code>ConfirmSubscription</code> action with the token from the confirmation
         * message. Confirmation tokens are valid for three days.</p> <p>This action is
         * throttled at 100 transactions per second (TPS).</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sns-2010-03-31/Subscribe">AWS API
         * Reference</a></p>
         */
        virtual Model::SubscribeOutcome Subscribe(const Model::SubscribeRequest& request) const;

        /**
         * <p>Prepares to subscribe an endpoint by sending the endpoint a confirmation
         * message. To actually create a subscription, the endpoint owner must call the
         * <code>ConfirmSubscription</code> action with the token from the confirmation
         * message. Confirmation tokens are valid for three days.</p> <p>This action is
         * throttled at 100 transactions per second (TPS).</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sns-2010-03-31/Subscribe">AWS API
         * Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::SubscribeOutcomeCallable SubscribeCallable(const Model::SubscribeRequest& request) const;

        /**
         * <p>Prepares to subscribe an endpoint by sending the endpoint a confirmation
         * message. To actually create a subscription, the endpoint owner must call the
         * <code>ConfirmSubscription</code> action with the token from the confirmation
         * message. Confirmation tokens are valid for three days.</p> <p>This action is
         * throttled at 100 transactions per second (TPS).</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sns-2010-03-31/Subscribe">AWS API
         * Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void SubscribeAsync(const Model::SubscribeRequest& request, const SubscribeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Add tags to the specified Amazon SNS topic. For an overview, see <a
         * href="https://docs.aws.amazon.com/sns/latest/dg/sns-tags.html">Amazon SNS
         * Tags</a> in the <i>Amazon SNS Developer Guide</i>.</p> <p>When you use topic
         * tags, keep the following guidelines in mind:</p> <ul> <li> <p>Adding more than
         * 50 tags to a topic isn't recommended.</p> </li> <li> <p>Tags don't have any
         * semantic meaning. Amazon SNS interprets tags as character strings.</p> </li>
         * <li> <p>Tags are case-sensitive.</p> </li> <li> <p>A new tag with a key
         * identical to that of an existing tag overwrites the existing tag.</p> </li> <li>
         * <p>Tagging actions are limited to 10 TPS per AWS account. If your application
         * requires a higher throughput, file a <a
         * href="https://console.aws.amazon.com/support/home#/case/create?issueType=technical">technical
         * support request</a>.</p> </li> </ul> <p>For a full list of tag restrictions, see
         * <a
         * href="https://docs.aws.amazon.com/sns/latest/dg/sns-limits.html#limits-topics">Limits
         * Related to Topics</a> in the <i>Amazon SNS Developer Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sns-2010-03-31/TagResource">AWS API
         * Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;

        /**
         * <p>Add tags to the specified Amazon SNS topic. For an overview, see <a
         * href="https://docs.aws.amazon.com/sns/latest/dg/sns-tags.html">Amazon SNS
         * Tags</a> in the <i>Amazon SNS Developer Guide</i>.</p> <p>When you use topic
         * tags, keep the following guidelines in mind:</p> <ul> <li> <p>Adding more than
         * 50 tags to a topic isn't recommended.</p> </li> <li> <p>Tags don't have any
         * semantic meaning. Amazon SNS interprets tags as character strings.</p> </li>
         * <li> <p>Tags are case-sensitive.</p> </li> <li> <p>A new tag with a key
         * identical to that of an existing tag overwrites the existing tag.</p> </li> <li>
         * <p>Tagging actions are limited to 10 TPS per AWS account. If your application
         * requires a higher throughput, file a <a
         * href="https://console.aws.amazon.com/support/home#/case/create?issueType=technical">technical
         * support request</a>.</p> </li> </ul> <p>For a full list of tag restrictions, see
         * <a
         * href="https://docs.aws.amazon.com/sns/latest/dg/sns-limits.html#limits-topics">Limits
         * Related to Topics</a> in the <i>Amazon SNS Developer Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sns-2010-03-31/TagResource">AWS API
         * Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::TagResourceOutcomeCallable TagResourceCallable(const Model::TagResourceRequest& request) const;

        /**
         * <p>Add tags to the specified Amazon SNS topic. For an overview, see <a
         * href="https://docs.aws.amazon.com/sns/latest/dg/sns-tags.html">Amazon SNS
         * Tags</a> in the <i>Amazon SNS Developer Guide</i>.</p> <p>When you use topic
         * tags, keep the following guidelines in mind:</p> <ul> <li> <p>Adding more than
         * 50 tags to a topic isn't recommended.</p> </li> <li> <p>Tags don't have any
         * semantic meaning. Amazon SNS interprets tags as character strings.</p> </li>
         * <li> <p>Tags are case-sensitive.</p> </li> <li> <p>A new tag with a key
         * identical to that of an existing tag overwrites the existing tag.</p> </li> <li>
         * <p>Tagging actions are limited to 10 TPS per AWS account. If your application
         * requires a higher throughput, file a <a
         * href="https://console.aws.amazon.com/support/home#/case/create?issueType=technical">technical
         * support request</a>.</p> </li> </ul> <p>For a full list of tag restrictions, see
         * <a
         * href="https://docs.aws.amazon.com/sns/latest/dg/sns-limits.html#limits-topics">Limits
         * Related to Topics</a> in the <i>Amazon SNS Developer Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sns-2010-03-31/TagResource">AWS API
         * Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void TagResourceAsync(const Model::TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a subscription. If the subscription requires authentication for
         * deletion, only the owner of the subscription or the topic's owner can
         * unsubscribe, and an AWS signature is required. If the <code>Unsubscribe</code>
         * call does not require authentication and the requester is not the subscription
         * owner, a final cancellation message is delivered to the endpoint, so that the
         * endpoint owner can easily resubscribe to the topic if the
         * <code>Unsubscribe</code> request was unintended.</p> <p>This action is throttled
         * at 100 transactions per second (TPS).</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sns-2010-03-31/Unsubscribe">AWS API
         * Reference</a></p>
         */
        virtual Model::UnsubscribeOutcome Unsubscribe(const Model::UnsubscribeRequest& request) const;

        /**
         * <p>Deletes a subscription. If the subscription requires authentication for
         * deletion, only the owner of the subscription or the topic's owner can
         * unsubscribe, and an AWS signature is required. If the <code>Unsubscribe</code>
         * call does not require authentication and the requester is not the subscription
         * owner, a final cancellation message is delivered to the endpoint, so that the
         * endpoint owner can easily resubscribe to the topic if the
         * <code>Unsubscribe</code> request was unintended.</p> <p>This action is throttled
         * at 100 transactions per second (TPS).</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sns-2010-03-31/Unsubscribe">AWS API
         * Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UnsubscribeOutcomeCallable UnsubscribeCallable(const Model::UnsubscribeRequest& request) const;

        /**
         * <p>Deletes a subscription. If the subscription requires authentication for
         * deletion, only the owner of the subscription or the topic's owner can
         * unsubscribe, and an AWS signature is required. If the <code>Unsubscribe</code>
         * call does not require authentication and the requester is not the subscription
         * owner, a final cancellation message is delivered to the endpoint, so that the
         * endpoint owner can easily resubscribe to the topic if the
         * <code>Unsubscribe</code> request was unintended.</p> <p>This action is throttled
         * at 100 transactions per second (TPS).</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sns-2010-03-31/Unsubscribe">AWS API
         * Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UnsubscribeAsync(const Model::UnsubscribeRequest& request, const UnsubscribeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Remove tags from the specified Amazon SNS topic. For an overview, see <a
         * href="https://docs.aws.amazon.com/sns/latest/dg/sns-tags.html">Amazon SNS
         * Tags</a> in the <i>Amazon SNS Developer Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sns-2010-03-31/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;

        /**
         * <p>Remove tags from the specified Amazon SNS topic. For an overview, see <a
         * href="https://docs.aws.amazon.com/sns/latest/dg/sns-tags.html">Amazon SNS
         * Tags</a> in the <i>Amazon SNS Developer Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sns-2010-03-31/UntagResource">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UntagResourceOutcomeCallable UntagResourceCallable(const Model::UntagResourceRequest& request) const;

        /**
         * <p>Remove tags from the specified Amazon SNS topic. For an overview, see <a
         * href="https://docs.aws.amazon.com/sns/latest/dg/sns-tags.html">Amazon SNS
         * Tags</a> in the <i>Amazon SNS Developer Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sns-2010-03-31/UntagResource">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UntagResourceAsync(const Model::UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

      
        void OverrideEndpoint(const Aws::String& endpoint);
  private:
        void init(const Aws::Client::ClientConfiguration& clientConfiguration);
        void AddPermissionAsyncHelper(const Model::AddPermissionRequest& request, const AddPermissionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CheckIfPhoneNumberIsOptedOutAsyncHelper(const Model::CheckIfPhoneNumberIsOptedOutRequest& request, const CheckIfPhoneNumberIsOptedOutResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ConfirmSubscriptionAsyncHelper(const Model::ConfirmSubscriptionRequest& request, const ConfirmSubscriptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreatePlatformApplicationAsyncHelper(const Model::CreatePlatformApplicationRequest& request, const CreatePlatformApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreatePlatformEndpointAsyncHelper(const Model::CreatePlatformEndpointRequest& request, const CreatePlatformEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateTopicAsyncHelper(const Model::CreateTopicRequest& request, const CreateTopicResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteEndpointAsyncHelper(const Model::DeleteEndpointRequest& request, const DeleteEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeletePlatformApplicationAsyncHelper(const Model::DeletePlatformApplicationRequest& request, const DeletePlatformApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteTopicAsyncHelper(const Model::DeleteTopicRequest& request, const DeleteTopicResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetEndpointAttributesAsyncHelper(const Model::GetEndpointAttributesRequest& request, const GetEndpointAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetPlatformApplicationAttributesAsyncHelper(const Model::GetPlatformApplicationAttributesRequest& request, const GetPlatformApplicationAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetSMSAttributesAsyncHelper(const Model::GetSMSAttributesRequest& request, const GetSMSAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetSubscriptionAttributesAsyncHelper(const Model::GetSubscriptionAttributesRequest& request, const GetSubscriptionAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetTopicAttributesAsyncHelper(const Model::GetTopicAttributesRequest& request, const GetTopicAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListEndpointsByPlatformApplicationAsyncHelper(const Model::ListEndpointsByPlatformApplicationRequest& request, const ListEndpointsByPlatformApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListPhoneNumbersOptedOutAsyncHelper(const Model::ListPhoneNumbersOptedOutRequest& request, const ListPhoneNumbersOptedOutResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListPlatformApplicationsAsyncHelper(const Model::ListPlatformApplicationsRequest& request, const ListPlatformApplicationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListSubscriptionsAsyncHelper(const Model::ListSubscriptionsRequest& request, const ListSubscriptionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListSubscriptionsByTopicAsyncHelper(const Model::ListSubscriptionsByTopicRequest& request, const ListSubscriptionsByTopicResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListTagsForResourceAsyncHelper(const Model::ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListTopicsAsyncHelper(const Model::ListTopicsRequest& request, const ListTopicsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void OptInPhoneNumberAsyncHelper(const Model::OptInPhoneNumberRequest& request, const OptInPhoneNumberResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void PublishAsyncHelper(const Model::PublishRequest& request, const PublishResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void RemovePermissionAsyncHelper(const Model::RemovePermissionRequest& request, const RemovePermissionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void SetEndpointAttributesAsyncHelper(const Model::SetEndpointAttributesRequest& request, const SetEndpointAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void SetPlatformApplicationAttributesAsyncHelper(const Model::SetPlatformApplicationAttributesRequest& request, const SetPlatformApplicationAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void SetSMSAttributesAsyncHelper(const Model::SetSMSAttributesRequest& request, const SetSMSAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void SetSubscriptionAttributesAsyncHelper(const Model::SetSubscriptionAttributesRequest& request, const SetSubscriptionAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void SetTopicAttributesAsyncHelper(const Model::SetTopicAttributesRequest& request, const SetTopicAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void SubscribeAsyncHelper(const Model::SubscribeRequest& request, const SubscribeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void TagResourceAsyncHelper(const Model::TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UnsubscribeAsyncHelper(const Model::UnsubscribeRequest& request, const UnsubscribeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UntagResourceAsyncHelper(const Model::UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;

        Aws::String m_uri;
        Aws::String m_configScheme;
        std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
  };

} // namespace SNS
} // namespace Aws
