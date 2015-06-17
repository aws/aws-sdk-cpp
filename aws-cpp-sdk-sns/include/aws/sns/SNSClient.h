/*
* Copyright 2010-2015 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/core/client/AWSClient.h>
#include <aws/core/utils/Event.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/sns/model/ConfirmSubscriptionResult.h>
#include <aws/sns/model/CreatePlatformApplicationResult.h>
#include <aws/sns/model/CreatePlatformEndpointResult.h>
#include <aws/sns/model/CreateTopicResult.h>
#include <aws/sns/model/GetEndpointAttributesResult.h>
#include <aws/sns/model/GetPlatformApplicationAttributesResult.h>
#include <aws/sns/model/GetSubscriptionAttributesResult.h>
#include <aws/sns/model/GetTopicAttributesResult.h>
#include <aws/sns/model/ListEndpointsByPlatformApplicationResult.h>
#include <aws/sns/model/ListPlatformApplicationsResult.h>
#include <aws/sns/model/ListSubscriptionsResult.h>
#include <aws/sns/model/ListSubscriptionsByTopicResult.h>
#include <aws/sns/model/ListTagsForResourceResult.h>
#include <aws/sns/model/ListTopicsResult.h>
#include <aws/sns/model/PublishResult.h>
#include <aws/sns/model/SubscribeResult.h>
#include <aws/core/NoResult.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <future>

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
  class AddTagsToResourceRequest;
  class ConfirmSubscriptionRequest;
  class CreatePlatformApplicationRequest;
  class CreatePlatformEndpointRequest;
  class CreateTopicRequest;
  class DeleteEndpointRequest;
  class DeletePlatformApplicationRequest;
  class DeleteTopicRequest;
  class GetEndpointAttributesRequest;
  class GetPlatformApplicationAttributesRequest;
  class GetSubscriptionAttributesRequest;
  class GetTopicAttributesRequest;
  class ListEndpointsByPlatformApplicationRequest;
  class ListPlatformApplicationsRequest;
  class ListSubscriptionsRequest;
  class ListSubscriptionsByTopicRequest;
  class ListTagsForResourceRequest;
  class ListTopicsRequest;
  class PublishRequest;
  class RemovePermissionRequest;
  class RemoveTagsFromResourceRequest;
  class SetEndpointAttributesRequest;
  class SetPlatformApplicationAttributesRequest;
  class SetSubscriptionAttributesRequest;
  class SetTopicAttributesRequest;
  class SubscribeRequest;
  class UnsubscribeRequest;

  typedef Utils::Outcome<NoResult, Client::AWSError<SNSErrors>> AddPermissionOutcome;
  typedef Utils::Outcome<NoResult, Client::AWSError<SNSErrors>> AddTagsToResourceOutcome;
  typedef Utils::Outcome<ConfirmSubscriptionResult, Client::AWSError<SNSErrors>> ConfirmSubscriptionOutcome;
  typedef Utils::Outcome<CreatePlatformApplicationResult, Client::AWSError<SNSErrors>> CreatePlatformApplicationOutcome;
  typedef Utils::Outcome<CreatePlatformEndpointResult, Client::AWSError<SNSErrors>> CreatePlatformEndpointOutcome;
  typedef Utils::Outcome<CreateTopicResult, Client::AWSError<SNSErrors>> CreateTopicOutcome;
  typedef Utils::Outcome<NoResult, Client::AWSError<SNSErrors>> DeleteEndpointOutcome;
  typedef Utils::Outcome<NoResult, Client::AWSError<SNSErrors>> DeletePlatformApplicationOutcome;
  typedef Utils::Outcome<NoResult, Client::AWSError<SNSErrors>> DeleteTopicOutcome;
  typedef Utils::Outcome<GetEndpointAttributesResult, Client::AWSError<SNSErrors>> GetEndpointAttributesOutcome;
  typedef Utils::Outcome<GetPlatformApplicationAttributesResult, Client::AWSError<SNSErrors>> GetPlatformApplicationAttributesOutcome;
  typedef Utils::Outcome<GetSubscriptionAttributesResult, Client::AWSError<SNSErrors>> GetSubscriptionAttributesOutcome;
  typedef Utils::Outcome<GetTopicAttributesResult, Client::AWSError<SNSErrors>> GetTopicAttributesOutcome;
  typedef Utils::Outcome<ListEndpointsByPlatformApplicationResult, Client::AWSError<SNSErrors>> ListEndpointsByPlatformApplicationOutcome;
  typedef Utils::Outcome<ListPlatformApplicationsResult, Client::AWSError<SNSErrors>> ListPlatformApplicationsOutcome;
  typedef Utils::Outcome<ListSubscriptionsResult, Client::AWSError<SNSErrors>> ListSubscriptionsOutcome;
  typedef Utils::Outcome<ListSubscriptionsByTopicResult, Client::AWSError<SNSErrors>> ListSubscriptionsByTopicOutcome;
  typedef Utils::Outcome<ListTagsForResourceResult, Client::AWSError<SNSErrors>> ListTagsForResourceOutcome;
  typedef Utils::Outcome<ListTopicsResult, Client::AWSError<SNSErrors>> ListTopicsOutcome;
  typedef Utils::Outcome<PublishResult, Client::AWSError<SNSErrors>> PublishOutcome;
  typedef Utils::Outcome<NoResult, Client::AWSError<SNSErrors>> RemovePermissionOutcome;
  typedef Utils::Outcome<NoResult, Client::AWSError<SNSErrors>> RemoveTagsFromResourceOutcome;
  typedef Utils::Outcome<NoResult, Client::AWSError<SNSErrors>> SetEndpointAttributesOutcome;
  typedef Utils::Outcome<NoResult, Client::AWSError<SNSErrors>> SetPlatformApplicationAttributesOutcome;
  typedef Utils::Outcome<NoResult, Client::AWSError<SNSErrors>> SetSubscriptionAttributesOutcome;
  typedef Utils::Outcome<NoResult, Client::AWSError<SNSErrors>> SetTopicAttributesOutcome;
  typedef Utils::Outcome<SubscribeResult, Client::AWSError<SNSErrors>> SubscribeOutcome;
  typedef Utils::Outcome<NoResult, Client::AWSError<SNSErrors>> UnsubscribeOutcome;

  typedef std::future<AddPermissionOutcome> AddPermissionOutcomeCallable;
  typedef std::future<AddTagsToResourceOutcome> AddTagsToResourceOutcomeCallable;
  typedef std::future<ConfirmSubscriptionOutcome> ConfirmSubscriptionOutcomeCallable;
  typedef std::future<CreatePlatformApplicationOutcome> CreatePlatformApplicationOutcomeCallable;
  typedef std::future<CreatePlatformEndpointOutcome> CreatePlatformEndpointOutcomeCallable;
  typedef std::future<CreateTopicOutcome> CreateTopicOutcomeCallable;
  typedef std::future<DeleteEndpointOutcome> DeleteEndpointOutcomeCallable;
  typedef std::future<DeletePlatformApplicationOutcome> DeletePlatformApplicationOutcomeCallable;
  typedef std::future<DeleteTopicOutcome> DeleteTopicOutcomeCallable;
  typedef std::future<GetEndpointAttributesOutcome> GetEndpointAttributesOutcomeCallable;
  typedef std::future<GetPlatformApplicationAttributesOutcome> GetPlatformApplicationAttributesOutcomeCallable;
  typedef std::future<GetSubscriptionAttributesOutcome> GetSubscriptionAttributesOutcomeCallable;
  typedef std::future<GetTopicAttributesOutcome> GetTopicAttributesOutcomeCallable;
  typedef std::future<ListEndpointsByPlatformApplicationOutcome> ListEndpointsByPlatformApplicationOutcomeCallable;
  typedef std::future<ListPlatformApplicationsOutcome> ListPlatformApplicationsOutcomeCallable;
  typedef std::future<ListSubscriptionsOutcome> ListSubscriptionsOutcomeCallable;
  typedef std::future<ListSubscriptionsByTopicOutcome> ListSubscriptionsByTopicOutcomeCallable;
  typedef std::future<ListTagsForResourceOutcome> ListTagsForResourceOutcomeCallable;
  typedef std::future<ListTopicsOutcome> ListTopicsOutcomeCallable;
  typedef std::future<PublishOutcome> PublishOutcomeCallable;
  typedef std::future<RemovePermissionOutcome> RemovePermissionOutcomeCallable;
  typedef std::future<RemoveTagsFromResourceOutcome> RemoveTagsFromResourceOutcomeCallable;
  typedef std::future<SetEndpointAttributesOutcome> SetEndpointAttributesOutcomeCallable;
  typedef std::future<SetPlatformApplicationAttributesOutcome> SetPlatformApplicationAttributesOutcomeCallable;
  typedef std::future<SetSubscriptionAttributesOutcome> SetSubscriptionAttributesOutcomeCallable;
  typedef std::future<SetTopicAttributesOutcome> SetTopicAttributesOutcomeCallable;
  typedef std::future<SubscribeOutcome> SubscribeOutcomeCallable;
  typedef std::future<UnsubscribeOutcome> UnsubscribeOutcomeCallable;
} // namespace Model

  class SNSClient;

  typedef Aws::Utils::Event<SNSClient, const Model::AddPermissionRequest&, const Model::AddPermissionOutcome&, const Aws::Client::AsyncCallerContext*> AddPermissionOutcomeReceivedEvent;
  typedef Aws::Utils::Event<SNSClient, const Model::AddTagsToResourceRequest&, const Model::AddTagsToResourceOutcome&, const Aws::Client::AsyncCallerContext*> AddTagsToResourceOutcomeReceivedEvent;
  typedef Aws::Utils::Event<SNSClient, const Model::ConfirmSubscriptionRequest&, const Model::ConfirmSubscriptionOutcome&, const Aws::Client::AsyncCallerContext*> ConfirmSubscriptionOutcomeReceivedEvent;
  typedef Aws::Utils::Event<SNSClient, const Model::CreatePlatformApplicationRequest&, const Model::CreatePlatformApplicationOutcome&, const Aws::Client::AsyncCallerContext*> CreatePlatformApplicationOutcomeReceivedEvent;
  typedef Aws::Utils::Event<SNSClient, const Model::CreatePlatformEndpointRequest&, const Model::CreatePlatformEndpointOutcome&, const Aws::Client::AsyncCallerContext*> CreatePlatformEndpointOutcomeReceivedEvent;
  typedef Aws::Utils::Event<SNSClient, const Model::CreateTopicRequest&, const Model::CreateTopicOutcome&, const Aws::Client::AsyncCallerContext*> CreateTopicOutcomeReceivedEvent;
  typedef Aws::Utils::Event<SNSClient, const Model::DeleteEndpointRequest&, const Model::DeleteEndpointOutcome&, const Aws::Client::AsyncCallerContext*> DeleteEndpointOutcomeReceivedEvent;
  typedef Aws::Utils::Event<SNSClient, const Model::DeletePlatformApplicationRequest&, const Model::DeletePlatformApplicationOutcome&, const Aws::Client::AsyncCallerContext*> DeletePlatformApplicationOutcomeReceivedEvent;
  typedef Aws::Utils::Event<SNSClient, const Model::DeleteTopicRequest&, const Model::DeleteTopicOutcome&, const Aws::Client::AsyncCallerContext*> DeleteTopicOutcomeReceivedEvent;
  typedef Aws::Utils::Event<SNSClient, const Model::GetEndpointAttributesRequest&, const Model::GetEndpointAttributesOutcome&, const Aws::Client::AsyncCallerContext*> GetEndpointAttributesOutcomeReceivedEvent;
  typedef Aws::Utils::Event<SNSClient, const Model::GetPlatformApplicationAttributesRequest&, const Model::GetPlatformApplicationAttributesOutcome&, const Aws::Client::AsyncCallerContext*> GetPlatformApplicationAttributesOutcomeReceivedEvent;
  typedef Aws::Utils::Event<SNSClient, const Model::GetSubscriptionAttributesRequest&, const Model::GetSubscriptionAttributesOutcome&, const Aws::Client::AsyncCallerContext*> GetSubscriptionAttributesOutcomeReceivedEvent;
  typedef Aws::Utils::Event<SNSClient, const Model::GetTopicAttributesRequest&, const Model::GetTopicAttributesOutcome&, const Aws::Client::AsyncCallerContext*> GetTopicAttributesOutcomeReceivedEvent;
  typedef Aws::Utils::Event<SNSClient, const Model::ListEndpointsByPlatformApplicationRequest&, const Model::ListEndpointsByPlatformApplicationOutcome&, const Aws::Client::AsyncCallerContext*> ListEndpointsByPlatformApplicationOutcomeReceivedEvent;
  typedef Aws::Utils::Event<SNSClient, const Model::ListPlatformApplicationsRequest&, const Model::ListPlatformApplicationsOutcome&, const Aws::Client::AsyncCallerContext*> ListPlatformApplicationsOutcomeReceivedEvent;
  typedef Aws::Utils::Event<SNSClient, const Model::ListSubscriptionsRequest&, const Model::ListSubscriptionsOutcome&, const Aws::Client::AsyncCallerContext*> ListSubscriptionsOutcomeReceivedEvent;
  typedef Aws::Utils::Event<SNSClient, const Model::ListSubscriptionsByTopicRequest&, const Model::ListSubscriptionsByTopicOutcome&, const Aws::Client::AsyncCallerContext*> ListSubscriptionsByTopicOutcomeReceivedEvent;
  typedef Aws::Utils::Event<SNSClient, const Model::ListTagsForResourceRequest&, const Model::ListTagsForResourceOutcome&, const Aws::Client::AsyncCallerContext*> ListTagsForResourceOutcomeReceivedEvent;
  typedef Aws::Utils::Event<SNSClient, const Model::ListTopicsRequest&, const Model::ListTopicsOutcome&, const Aws::Client::AsyncCallerContext*> ListTopicsOutcomeReceivedEvent;
  typedef Aws::Utils::Event<SNSClient, const Model::PublishRequest&, const Model::PublishOutcome&, const Aws::Client::AsyncCallerContext*> PublishOutcomeReceivedEvent;
  typedef Aws::Utils::Event<SNSClient, const Model::RemovePermissionRequest&, const Model::RemovePermissionOutcome&, const Aws::Client::AsyncCallerContext*> RemovePermissionOutcomeReceivedEvent;
  typedef Aws::Utils::Event<SNSClient, const Model::RemoveTagsFromResourceRequest&, const Model::RemoveTagsFromResourceOutcome&, const Aws::Client::AsyncCallerContext*> RemoveTagsFromResourceOutcomeReceivedEvent;
  typedef Aws::Utils::Event<SNSClient, const Model::SetEndpointAttributesRequest&, const Model::SetEndpointAttributesOutcome&, const Aws::Client::AsyncCallerContext*> SetEndpointAttributesOutcomeReceivedEvent;
  typedef Aws::Utils::Event<SNSClient, const Model::SetPlatformApplicationAttributesRequest&, const Model::SetPlatformApplicationAttributesOutcome&, const Aws::Client::AsyncCallerContext*> SetPlatformApplicationAttributesOutcomeReceivedEvent;
  typedef Aws::Utils::Event<SNSClient, const Model::SetSubscriptionAttributesRequest&, const Model::SetSubscriptionAttributesOutcome&, const Aws::Client::AsyncCallerContext*> SetSubscriptionAttributesOutcomeReceivedEvent;
  typedef Aws::Utils::Event<SNSClient, const Model::SetTopicAttributesRequest&, const Model::SetTopicAttributesOutcome&, const Aws::Client::AsyncCallerContext*> SetTopicAttributesOutcomeReceivedEvent;
  typedef Aws::Utils::Event<SNSClient, const Model::SubscribeRequest&, const Model::SubscribeOutcome&, const Aws::Client::AsyncCallerContext*> SubscribeOutcomeReceivedEvent;
  typedef Aws::Utils::Event<SNSClient, const Model::UnsubscribeRequest&, const Model::UnsubscribeOutcome&, const Aws::Client::AsyncCallerContext*> UnsubscribeOutcomeReceivedEvent;

  /*
    <fullname>Amazon Simple Notification Service</fullname> <p>Amazon Simple Notification Service (Amazon SNS) is a web service that enables you to build distributed web-enabled applications. Applications can use Amazon SNS to easily push real-time notification messages to interested subscribers over multiple delivery protocols. For more information about this product see <a href="http://aws.amazon.com/sns/">http://aws.amazon.com/sns</a>. For detailed information about Amazon SNS features and their associated API calls, see the <a href="http://docs.aws.amazon.com/sns/latest/dg/">Amazon SNS Developer Guide</a>. </p> <p>We also provide SDKs that enable you to access Amazon SNS from your preferred programming language. The SDKs contain functionality that automatically takes care of tasks such as: cryptographically signing your service requests, retrying requests, and handling error responses. For a list of available SDKs, go to <a href="http://aws.amazon.com/tools/">Tools for Amazon Web Services</a>. </p>
  */
  class AWS_SNS_API SNSClient : public Aws::Client::AWSXMLClient
  {
    public:
      typedef Aws::Client::AWSXMLClient BASECLASS;

     /**
      * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
      * is not specified, it will be initialized to default values.
      */
      SNSClient(const Client::ClientConfiguration& clientConfiguration = Client::ClientConfiguration());

     /**
      * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
      * is not specified, it will be initialized to default values.
      */
      SNSClient(const Auth::AWSCredentials& credentials, const Client::ClientConfiguration& clientConfiguration = Client::ClientConfiguration());

     /**
      * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
      * the default http client factory will be used
      */
      SNSClient(const std::shared_ptr<Auth::AWSCredentialsProvider>& credentialsProvider,
        const Client::ClientConfiguration& clientConfiguration = Client::ClientConfiguration(),
        const std::shared_ptr<Http::HttpClientFactory const>& httpClientFactory = nullptr);

      ~SNSClient();

     /*
       <p>Adds a statement to a topic's access control policy, granting access for the specified AWS accounts to the specified actions.</p>
     */
     Model::AddPermissionOutcome AddPermission(const Model::AddPermissionRequest& request) const;

     /*
       <p>Adds a statement to a topic's access control policy, granting access for the specified AWS accounts to the specified actions.</p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::AddPermissionOutcomeCallable AddPermissionCallable(const Model::AddPermissionRequest& request) const;

     /*
       <p>Adds a statement to a topic's access control policy, granting access for the specified AWS accounts to the specified actions.</p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void AddPermissionAsync(const Model::AddPermissionRequest& request, const Aws::Client::AsyncCallerContext* context = nullptr) const;

     /*
       ${operation.documentation}
     */
     Model::AddTagsToResourceOutcome AddTagsToResource(const Model::AddTagsToResourceRequest& request) const;

     /*
       ${operation.documentation}

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::AddTagsToResourceOutcomeCallable AddTagsToResourceCallable(const Model::AddTagsToResourceRequest& request) const;

     /*
       ${operation.documentation}

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void AddTagsToResourceAsync(const Model::AddTagsToResourceRequest& request, const Aws::Client::AsyncCallerContext* context = nullptr) const;

     /*
       <p>Verifies an endpoint owner's intent to receive messages by validating the token sent to the endpoint by an earlier <code>Subscribe</code> action. If the token is valid, the action creates a new subscription and returns its Amazon Resource Name (ARN). This call requires an AWS signature only when the <code>AuthenticateOnUnsubscribe</code> flag is set to "true".</p>
     */
     Model::ConfirmSubscriptionOutcome ConfirmSubscription(const Model::ConfirmSubscriptionRequest& request) const;

     /*
       <p>Verifies an endpoint owner's intent to receive messages by validating the token sent to the endpoint by an earlier <code>Subscribe</code> action. If the token is valid, the action creates a new subscription and returns its Amazon Resource Name (ARN). This call requires an AWS signature only when the <code>AuthenticateOnUnsubscribe</code> flag is set to "true".</p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::ConfirmSubscriptionOutcomeCallable ConfirmSubscriptionCallable(const Model::ConfirmSubscriptionRequest& request) const;

     /*
       <p>Verifies an endpoint owner's intent to receive messages by validating the token sent to the endpoint by an earlier <code>Subscribe</code> action. If the token is valid, the action creates a new subscription and returns its Amazon Resource Name (ARN). This call requires an AWS signature only when the <code>AuthenticateOnUnsubscribe</code> flag is set to "true".</p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void ConfirmSubscriptionAsync(const Model::ConfirmSubscriptionRequest& request, const Aws::Client::AsyncCallerContext* context = nullptr) const;

     /*
       <p>Creates a platform application object for one of the supported push notification services, such as APNS and GCM, to which devices and mobile apps may register. You must specify PlatformPrincipal and PlatformCredential attributes when using the <code>CreatePlatformApplication</code> action. The PlatformPrincipal is received from the notification service. For APNS/APNS_SANDBOX, PlatformPrincipal is "SSL certificate". For GCM, PlatformPrincipal is not applicable. For ADM, PlatformPrincipal is "client id". The PlatformCredential is also received from the notification service. For APNS/APNS_SANDBOX, PlatformCredential is "private key". For GCM, PlatformCredential is "API key". For ADM, PlatformCredential is "client secret". The PlatformApplicationArn that is returned when using <code>CreatePlatformApplication</code> is then used as an attribute for the <code>CreatePlatformEndpoint</code> action. For more information, see <a href="http://docs.aws.amazon.com/sns/latest/dg/SNSMobilePush.html">Using Amazon SNS Mobile Push Notifications</a>. </p>
     */
     Model::CreatePlatformApplicationOutcome CreatePlatformApplication(const Model::CreatePlatformApplicationRequest& request) const;

     /*
       <p>Creates a platform application object for one of the supported push notification services, such as APNS and GCM, to which devices and mobile apps may register. You must specify PlatformPrincipal and PlatformCredential attributes when using the <code>CreatePlatformApplication</code> action. The PlatformPrincipal is received from the notification service. For APNS/APNS_SANDBOX, PlatformPrincipal is "SSL certificate". For GCM, PlatformPrincipal is not applicable. For ADM, PlatformPrincipal is "client id". The PlatformCredential is also received from the notification service. For APNS/APNS_SANDBOX, PlatformCredential is "private key". For GCM, PlatformCredential is "API key". For ADM, PlatformCredential is "client secret". The PlatformApplicationArn that is returned when using <code>CreatePlatformApplication</code> is then used as an attribute for the <code>CreatePlatformEndpoint</code> action. For more information, see <a href="http://docs.aws.amazon.com/sns/latest/dg/SNSMobilePush.html">Using Amazon SNS Mobile Push Notifications</a>. </p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::CreatePlatformApplicationOutcomeCallable CreatePlatformApplicationCallable(const Model::CreatePlatformApplicationRequest& request) const;

     /*
       <p>Creates a platform application object for one of the supported push notification services, such as APNS and GCM, to which devices and mobile apps may register. You must specify PlatformPrincipal and PlatformCredential attributes when using the <code>CreatePlatformApplication</code> action. The PlatformPrincipal is received from the notification service. For APNS/APNS_SANDBOX, PlatformPrincipal is "SSL certificate". For GCM, PlatformPrincipal is not applicable. For ADM, PlatformPrincipal is "client id". The PlatformCredential is also received from the notification service. For APNS/APNS_SANDBOX, PlatformCredential is "private key". For GCM, PlatformCredential is "API key". For ADM, PlatformCredential is "client secret". The PlatformApplicationArn that is returned when using <code>CreatePlatformApplication</code> is then used as an attribute for the <code>CreatePlatformEndpoint</code> action. For more information, see <a href="http://docs.aws.amazon.com/sns/latest/dg/SNSMobilePush.html">Using Amazon SNS Mobile Push Notifications</a>. </p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void CreatePlatformApplicationAsync(const Model::CreatePlatformApplicationRequest& request, const Aws::Client::AsyncCallerContext* context = nullptr) const;

     /*
       <p>Creates an endpoint for a device and mobile app on one of the supported push notification services, such as GCM and APNS. <code>CreatePlatformEndpoint</code> requires the PlatformApplicationArn that is returned from <code>CreatePlatformApplication</code>. The EndpointArn that is returned when using <code>CreatePlatformEndpoint</code> can then be used by the <code>Publish</code> action to send a message to a mobile app or by the <code>Subscribe</code> action for subscription to a topic. The <code>CreatePlatformEndpoint</code> action is idempotent, so if the requester already owns an endpoint with the same device token and attributes, that endpoint's ARN is returned without creating a new endpoint. For more information, see <a href="http://docs.aws.amazon.com/sns/latest/dg/SNSMobilePush.html">Using Amazon SNS Mobile Push Notifications</a>. </p> <p>When using <code>CreatePlatformEndpoint</code> with Baidu, two attributes must be provided: ChannelId and UserId. The token field must also contain the ChannelId. For more information, see <a href="http://docs.aws.amazon.com/sns/latest/dg/SNSMobilePushBaiduEndpoint.html">Creating an Amazon SNS Endpoint for Baidu</a>. </p>
     */
     Model::CreatePlatformEndpointOutcome CreatePlatformEndpoint(const Model::CreatePlatformEndpointRequest& request) const;

     /*
       <p>Creates an endpoint for a device and mobile app on one of the supported push notification services, such as GCM and APNS. <code>CreatePlatformEndpoint</code> requires the PlatformApplicationArn that is returned from <code>CreatePlatformApplication</code>. The EndpointArn that is returned when using <code>CreatePlatformEndpoint</code> can then be used by the <code>Publish</code> action to send a message to a mobile app or by the <code>Subscribe</code> action for subscription to a topic. The <code>CreatePlatformEndpoint</code> action is idempotent, so if the requester already owns an endpoint with the same device token and attributes, that endpoint's ARN is returned without creating a new endpoint. For more information, see <a href="http://docs.aws.amazon.com/sns/latest/dg/SNSMobilePush.html">Using Amazon SNS Mobile Push Notifications</a>. </p> <p>When using <code>CreatePlatformEndpoint</code> with Baidu, two attributes must be provided: ChannelId and UserId. The token field must also contain the ChannelId. For more information, see <a href="http://docs.aws.amazon.com/sns/latest/dg/SNSMobilePushBaiduEndpoint.html">Creating an Amazon SNS Endpoint for Baidu</a>. </p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::CreatePlatformEndpointOutcomeCallable CreatePlatformEndpointCallable(const Model::CreatePlatformEndpointRequest& request) const;

     /*
       <p>Creates an endpoint for a device and mobile app on one of the supported push notification services, such as GCM and APNS. <code>CreatePlatformEndpoint</code> requires the PlatformApplicationArn that is returned from <code>CreatePlatformApplication</code>. The EndpointArn that is returned when using <code>CreatePlatformEndpoint</code> can then be used by the <code>Publish</code> action to send a message to a mobile app or by the <code>Subscribe</code> action for subscription to a topic. The <code>CreatePlatformEndpoint</code> action is idempotent, so if the requester already owns an endpoint with the same device token and attributes, that endpoint's ARN is returned without creating a new endpoint. For more information, see <a href="http://docs.aws.amazon.com/sns/latest/dg/SNSMobilePush.html">Using Amazon SNS Mobile Push Notifications</a>. </p> <p>When using <code>CreatePlatformEndpoint</code> with Baidu, two attributes must be provided: ChannelId and UserId. The token field must also contain the ChannelId. For more information, see <a href="http://docs.aws.amazon.com/sns/latest/dg/SNSMobilePushBaiduEndpoint.html">Creating an Amazon SNS Endpoint for Baidu</a>. </p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void CreatePlatformEndpointAsync(const Model::CreatePlatformEndpointRequest& request, const Aws::Client::AsyncCallerContext* context = nullptr) const;

     /*
       <p>Creates a topic to which notifications can be published. Users can create at most 3000 topics. For more information, see <a href="http://aws.amazon.com/sns/">http://aws.amazon.com/sns</a>. This action is idempotent, so if the requester already owns a topic with the specified name, that topic's ARN is returned without creating a new topic.</p>
     */
     Model::CreateTopicOutcome CreateTopic(const Model::CreateTopicRequest& request) const;

     /*
       <p>Creates a topic to which notifications can be published. Users can create at most 3000 topics. For more information, see <a href="http://aws.amazon.com/sns/">http://aws.amazon.com/sns</a>. This action is idempotent, so if the requester already owns a topic with the specified name, that topic's ARN is returned without creating a new topic.</p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::CreateTopicOutcomeCallable CreateTopicCallable(const Model::CreateTopicRequest& request) const;

     /*
       <p>Creates a topic to which notifications can be published. Users can create at most 3000 topics. For more information, see <a href="http://aws.amazon.com/sns/">http://aws.amazon.com/sns</a>. This action is idempotent, so if the requester already owns a topic with the specified name, that topic's ARN is returned without creating a new topic.</p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void CreateTopicAsync(const Model::CreateTopicRequest& request, const Aws::Client::AsyncCallerContext* context = nullptr) const;

     /*
       <p>Deletes the endpoint from Amazon SNS. This action is idempotent. For more information, see <a href="http://docs.aws.amazon.com/sns/latest/dg/SNSMobilePush.html">Using Amazon SNS Mobile Push Notifications</a>. </p>
     */
     Model::DeleteEndpointOutcome DeleteEndpoint(const Model::DeleteEndpointRequest& request) const;

     /*
       <p>Deletes the endpoint from Amazon SNS. This action is idempotent. For more information, see <a href="http://docs.aws.amazon.com/sns/latest/dg/SNSMobilePush.html">Using Amazon SNS Mobile Push Notifications</a>. </p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::DeleteEndpointOutcomeCallable DeleteEndpointCallable(const Model::DeleteEndpointRequest& request) const;

     /*
       <p>Deletes the endpoint from Amazon SNS. This action is idempotent. For more information, see <a href="http://docs.aws.amazon.com/sns/latest/dg/SNSMobilePush.html">Using Amazon SNS Mobile Push Notifications</a>. </p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void DeleteEndpointAsync(const Model::DeleteEndpointRequest& request, const Aws::Client::AsyncCallerContext* context = nullptr) const;

     /*
       <p>Deletes a platform application object for one of the supported push notification services, such as APNS and GCM. For more information, see <a href="http://docs.aws.amazon.com/sns/latest/dg/SNSMobilePush.html">Using Amazon SNS Mobile Push Notifications</a>. </p>
     */
     Model::DeletePlatformApplicationOutcome DeletePlatformApplication(const Model::DeletePlatformApplicationRequest& request) const;

     /*
       <p>Deletes a platform application object for one of the supported push notification services, such as APNS and GCM. For more information, see <a href="http://docs.aws.amazon.com/sns/latest/dg/SNSMobilePush.html">Using Amazon SNS Mobile Push Notifications</a>. </p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::DeletePlatformApplicationOutcomeCallable DeletePlatformApplicationCallable(const Model::DeletePlatformApplicationRequest& request) const;

     /*
       <p>Deletes a platform application object for one of the supported push notification services, such as APNS and GCM. For more information, see <a href="http://docs.aws.amazon.com/sns/latest/dg/SNSMobilePush.html">Using Amazon SNS Mobile Push Notifications</a>. </p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void DeletePlatformApplicationAsync(const Model::DeletePlatformApplicationRequest& request, const Aws::Client::AsyncCallerContext* context = nullptr) const;

     /*
       <p>Deletes a topic and all its subscriptions. Deleting a topic might prevent some messages previously sent to the topic from being delivered to subscribers. This action is idempotent, so deleting a topic that does not exist does not result in an error.</p>
     */
     Model::DeleteTopicOutcome DeleteTopic(const Model::DeleteTopicRequest& request) const;

     /*
       <p>Deletes a topic and all its subscriptions. Deleting a topic might prevent some messages previously sent to the topic from being delivered to subscribers. This action is idempotent, so deleting a topic that does not exist does not result in an error.</p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::DeleteTopicOutcomeCallable DeleteTopicCallable(const Model::DeleteTopicRequest& request) const;

     /*
       <p>Deletes a topic and all its subscriptions. Deleting a topic might prevent some messages previously sent to the topic from being delivered to subscribers. This action is idempotent, so deleting a topic that does not exist does not result in an error.</p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void DeleteTopicAsync(const Model::DeleteTopicRequest& request, const Aws::Client::AsyncCallerContext* context = nullptr) const;

     /*
       <p>Retrieves the endpoint attributes for a device on one of the supported push notification services, such as GCM and APNS. For more information, see <a href="http://docs.aws.amazon.com/sns/latest/dg/SNSMobilePush.html">Using Amazon SNS Mobile Push Notifications</a>. </p>
     */
     Model::GetEndpointAttributesOutcome GetEndpointAttributes(const Model::GetEndpointAttributesRequest& request) const;

     /*
       <p>Retrieves the endpoint attributes for a device on one of the supported push notification services, such as GCM and APNS. For more information, see <a href="http://docs.aws.amazon.com/sns/latest/dg/SNSMobilePush.html">Using Amazon SNS Mobile Push Notifications</a>. </p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::GetEndpointAttributesOutcomeCallable GetEndpointAttributesCallable(const Model::GetEndpointAttributesRequest& request) const;

     /*
       <p>Retrieves the endpoint attributes for a device on one of the supported push notification services, such as GCM and APNS. For more information, see <a href="http://docs.aws.amazon.com/sns/latest/dg/SNSMobilePush.html">Using Amazon SNS Mobile Push Notifications</a>. </p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void GetEndpointAttributesAsync(const Model::GetEndpointAttributesRequest& request, const Aws::Client::AsyncCallerContext* context = nullptr) const;

     /*
       <p>Retrieves the attributes of the platform application object for the supported push notification services, such as APNS and GCM. For more information, see <a href="http://docs.aws.amazon.com/sns/latest/dg/SNSMobilePush.html">Using Amazon SNS Mobile Push Notifications</a>. </p>
     */
     Model::GetPlatformApplicationAttributesOutcome GetPlatformApplicationAttributes(const Model::GetPlatformApplicationAttributesRequest& request) const;

     /*
       <p>Retrieves the attributes of the platform application object for the supported push notification services, such as APNS and GCM. For more information, see <a href="http://docs.aws.amazon.com/sns/latest/dg/SNSMobilePush.html">Using Amazon SNS Mobile Push Notifications</a>. </p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::GetPlatformApplicationAttributesOutcomeCallable GetPlatformApplicationAttributesCallable(const Model::GetPlatformApplicationAttributesRequest& request) const;

     /*
       <p>Retrieves the attributes of the platform application object for the supported push notification services, such as APNS and GCM. For more information, see <a href="http://docs.aws.amazon.com/sns/latest/dg/SNSMobilePush.html">Using Amazon SNS Mobile Push Notifications</a>. </p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void GetPlatformApplicationAttributesAsync(const Model::GetPlatformApplicationAttributesRequest& request, const Aws::Client::AsyncCallerContext* context = nullptr) const;

     /*
       <p>Returns all of the properties of a subscription.</p>
     */
     Model::GetSubscriptionAttributesOutcome GetSubscriptionAttributes(const Model::GetSubscriptionAttributesRequest& request) const;

     /*
       <p>Returns all of the properties of a subscription.</p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::GetSubscriptionAttributesOutcomeCallable GetSubscriptionAttributesCallable(const Model::GetSubscriptionAttributesRequest& request) const;

     /*
       <p>Returns all of the properties of a subscription.</p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void GetSubscriptionAttributesAsync(const Model::GetSubscriptionAttributesRequest& request, const Aws::Client::AsyncCallerContext* context = nullptr) const;

     /*
       <p>Returns all of the properties of a topic. Topic properties returned might differ based on the authorization of the user. </p>
     */
     Model::GetTopicAttributesOutcome GetTopicAttributes(const Model::GetTopicAttributesRequest& request) const;

     /*
       <p>Returns all of the properties of a topic. Topic properties returned might differ based on the authorization of the user. </p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::GetTopicAttributesOutcomeCallable GetTopicAttributesCallable(const Model::GetTopicAttributesRequest& request) const;

     /*
       <p>Returns all of the properties of a topic. Topic properties returned might differ based on the authorization of the user. </p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void GetTopicAttributesAsync(const Model::GetTopicAttributesRequest& request, const Aws::Client::AsyncCallerContext* context = nullptr) const;

     /*
       <p>Lists the endpoints and endpoint attributes for devices in a supported push notification service, such as GCM and APNS. The results for <code>ListEndpointsByPlatformApplication</code> are paginated and return a limited list of endpoints, up to 100. If additional records are available after the first page results, then a NextToken string will be returned. To receive the next page, you call <code>ListEndpointsByPlatformApplication</code> again using the NextToken string received from the previous call. When there are no more records to return, NextToken will be null. For more information, see <a href="http://docs.aws.amazon.com/sns/latest/dg/SNSMobilePush.html">Using Amazon SNS Mobile Push Notifications</a>. </p>
     */
     Model::ListEndpointsByPlatformApplicationOutcome ListEndpointsByPlatformApplication(const Model::ListEndpointsByPlatformApplicationRequest& request) const;

     /*
       <p>Lists the endpoints and endpoint attributes for devices in a supported push notification service, such as GCM and APNS. The results for <code>ListEndpointsByPlatformApplication</code> are paginated and return a limited list of endpoints, up to 100. If additional records are available after the first page results, then a NextToken string will be returned. To receive the next page, you call <code>ListEndpointsByPlatformApplication</code> again using the NextToken string received from the previous call. When there are no more records to return, NextToken will be null. For more information, see <a href="http://docs.aws.amazon.com/sns/latest/dg/SNSMobilePush.html">Using Amazon SNS Mobile Push Notifications</a>. </p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::ListEndpointsByPlatformApplicationOutcomeCallable ListEndpointsByPlatformApplicationCallable(const Model::ListEndpointsByPlatformApplicationRequest& request) const;

     /*
       <p>Lists the endpoints and endpoint attributes for devices in a supported push notification service, such as GCM and APNS. The results for <code>ListEndpointsByPlatformApplication</code> are paginated and return a limited list of endpoints, up to 100. If additional records are available after the first page results, then a NextToken string will be returned. To receive the next page, you call <code>ListEndpointsByPlatformApplication</code> again using the NextToken string received from the previous call. When there are no more records to return, NextToken will be null. For more information, see <a href="http://docs.aws.amazon.com/sns/latest/dg/SNSMobilePush.html">Using Amazon SNS Mobile Push Notifications</a>. </p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void ListEndpointsByPlatformApplicationAsync(const Model::ListEndpointsByPlatformApplicationRequest& request, const Aws::Client::AsyncCallerContext* context = nullptr) const;

     /*
       <p>Lists the platform application objects for the supported push notification services, such as APNS and GCM. The results for <code>ListPlatformApplications</code> are paginated and return a limited list of applications, up to 100. If additional records are available after the first page results, then a NextToken string will be returned. To receive the next page, you call <code>ListPlatformApplications</code> using the NextToken string received from the previous call. When there are no more records to return, NextToken will be null. For more information, see <a href="http://docs.aws.amazon.com/sns/latest/dg/SNSMobilePush.html">Using Amazon SNS Mobile Push Notifications</a>. </p>
     */
     Model::ListPlatformApplicationsOutcome ListPlatformApplications(const Model::ListPlatformApplicationsRequest& request) const;

     /*
       <p>Lists the platform application objects for the supported push notification services, such as APNS and GCM. The results for <code>ListPlatformApplications</code> are paginated and return a limited list of applications, up to 100. If additional records are available after the first page results, then a NextToken string will be returned. To receive the next page, you call <code>ListPlatformApplications</code> using the NextToken string received from the previous call. When there are no more records to return, NextToken will be null. For more information, see <a href="http://docs.aws.amazon.com/sns/latest/dg/SNSMobilePush.html">Using Amazon SNS Mobile Push Notifications</a>. </p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::ListPlatformApplicationsOutcomeCallable ListPlatformApplicationsCallable(const Model::ListPlatformApplicationsRequest& request) const;

     /*
       <p>Lists the platform application objects for the supported push notification services, such as APNS and GCM. The results for <code>ListPlatformApplications</code> are paginated and return a limited list of applications, up to 100. If additional records are available after the first page results, then a NextToken string will be returned. To receive the next page, you call <code>ListPlatformApplications</code> using the NextToken string received from the previous call. When there are no more records to return, NextToken will be null. For more information, see <a href="http://docs.aws.amazon.com/sns/latest/dg/SNSMobilePush.html">Using Amazon SNS Mobile Push Notifications</a>. </p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void ListPlatformApplicationsAsync(const Model::ListPlatformApplicationsRequest& request, const Aws::Client::AsyncCallerContext* context = nullptr) const;

     /*
       <p>Returns a list of the requester's subscriptions. Each call returns a limited list of subscriptions, up to 100. If there are more subscriptions, a <code>NextToken</code> is also returned. Use the <code>NextToken</code> parameter in a new <code>ListSubscriptions</code> call to get further results.</p>
     */
     Model::ListSubscriptionsOutcome ListSubscriptions(const Model::ListSubscriptionsRequest& request) const;

     /*
       <p>Returns a list of the requester's subscriptions. Each call returns a limited list of subscriptions, up to 100. If there are more subscriptions, a <code>NextToken</code> is also returned. Use the <code>NextToken</code> parameter in a new <code>ListSubscriptions</code> call to get further results.</p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::ListSubscriptionsOutcomeCallable ListSubscriptionsCallable(const Model::ListSubscriptionsRequest& request) const;

     /*
       <p>Returns a list of the requester's subscriptions. Each call returns a limited list of subscriptions, up to 100. If there are more subscriptions, a <code>NextToken</code> is also returned. Use the <code>NextToken</code> parameter in a new <code>ListSubscriptions</code> call to get further results.</p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void ListSubscriptionsAsync(const Model::ListSubscriptionsRequest& request, const Aws::Client::AsyncCallerContext* context = nullptr) const;

     /*
       <p>Returns a list of the subscriptions to a specific topic. Each call returns a limited list of subscriptions, up to 100. If there are more subscriptions, a <code>NextToken</code> is also returned. Use the <code>NextToken</code> parameter in a new <code>ListSubscriptionsByTopic</code> call to get further results.</p>
     */
     Model::ListSubscriptionsByTopicOutcome ListSubscriptionsByTopic(const Model::ListSubscriptionsByTopicRequest& request) const;

     /*
       <p>Returns a list of the subscriptions to a specific topic. Each call returns a limited list of subscriptions, up to 100. If there are more subscriptions, a <code>NextToken</code> is also returned. Use the <code>NextToken</code> parameter in a new <code>ListSubscriptionsByTopic</code> call to get further results.</p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::ListSubscriptionsByTopicOutcomeCallable ListSubscriptionsByTopicCallable(const Model::ListSubscriptionsByTopicRequest& request) const;

     /*
       <p>Returns a list of the subscriptions to a specific topic. Each call returns a limited list of subscriptions, up to 100. If there are more subscriptions, a <code>NextToken</code> is also returned. Use the <code>NextToken</code> parameter in a new <code>ListSubscriptionsByTopic</code> call to get further results.</p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void ListSubscriptionsByTopicAsync(const Model::ListSubscriptionsByTopicRequest& request, const Aws::Client::AsyncCallerContext* context = nullptr) const;

     /*
       ${operation.documentation}
     */
     Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;

     /*
       ${operation.documentation}

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const Model::ListTagsForResourceRequest& request) const;

     /*
       ${operation.documentation}

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void ListTagsForResourceAsync(const Model::ListTagsForResourceRequest& request, const Aws::Client::AsyncCallerContext* context = nullptr) const;

     /*
       <p>Returns a list of the requester's topics. Each call returns a limited list of topics, up to 100. If there are more topics, a <code>NextToken</code> is also returned. Use the <code>NextToken</code> parameter in a new <code>ListTopics</code> call to get further results.</p>
     */
     Model::ListTopicsOutcome ListTopics(const Model::ListTopicsRequest& request) const;

     /*
       <p>Returns a list of the requester's topics. Each call returns a limited list of topics, up to 100. If there are more topics, a <code>NextToken</code> is also returned. Use the <code>NextToken</code> parameter in a new <code>ListTopics</code> call to get further results.</p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::ListTopicsOutcomeCallable ListTopicsCallable(const Model::ListTopicsRequest& request) const;

     /*
       <p>Returns a list of the requester's topics. Each call returns a limited list of topics, up to 100. If there are more topics, a <code>NextToken</code> is also returned. Use the <code>NextToken</code> parameter in a new <code>ListTopics</code> call to get further results.</p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void ListTopicsAsync(const Model::ListTopicsRequest& request, const Aws::Client::AsyncCallerContext* context = nullptr) const;

     /*
       <p>Sends a message to all of a topic's subscribed endpoints. When a <code>messageId</code> is returned, the message has been saved and Amazon SNS will attempt to deliver it to the topic's subscribers shortly. The format of the outgoing message to each subscribed endpoint depends on the notification protocol selected.</p> <p>To use the <code>Publish</code> action for sending a message to a mobile endpoint, such as an app on a Kindle device or mobile phone, you must specify the EndpointArn. The EndpointArn is returned when making a call with the <code>CreatePlatformEndpoint</code> action. The second example below shows a request and response for publishing to a mobile endpoint. </p>
     */
     Model::PublishOutcome Publish(const Model::PublishRequest& request) const;

     /*
       <p>Sends a message to all of a topic's subscribed endpoints. When a <code>messageId</code> is returned, the message has been saved and Amazon SNS will attempt to deliver it to the topic's subscribers shortly. The format of the outgoing message to each subscribed endpoint depends on the notification protocol selected.</p> <p>To use the <code>Publish</code> action for sending a message to a mobile endpoint, such as an app on a Kindle device or mobile phone, you must specify the EndpointArn. The EndpointArn is returned when making a call with the <code>CreatePlatformEndpoint</code> action. The second example below shows a request and response for publishing to a mobile endpoint. </p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::PublishOutcomeCallable PublishCallable(const Model::PublishRequest& request) const;

     /*
       <p>Sends a message to all of a topic's subscribed endpoints. When a <code>messageId</code> is returned, the message has been saved and Amazon SNS will attempt to deliver it to the topic's subscribers shortly. The format of the outgoing message to each subscribed endpoint depends on the notification protocol selected.</p> <p>To use the <code>Publish</code> action for sending a message to a mobile endpoint, such as an app on a Kindle device or mobile phone, you must specify the EndpointArn. The EndpointArn is returned when making a call with the <code>CreatePlatformEndpoint</code> action. The second example below shows a request and response for publishing to a mobile endpoint. </p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void PublishAsync(const Model::PublishRequest& request, const Aws::Client::AsyncCallerContext* context = nullptr) const;

     /*
       <p>Removes a statement from a topic's access control policy.</p>
     */
     Model::RemovePermissionOutcome RemovePermission(const Model::RemovePermissionRequest& request) const;

     /*
       <p>Removes a statement from a topic's access control policy.</p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::RemovePermissionOutcomeCallable RemovePermissionCallable(const Model::RemovePermissionRequest& request) const;

     /*
       <p>Removes a statement from a topic's access control policy.</p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void RemovePermissionAsync(const Model::RemovePermissionRequest& request, const Aws::Client::AsyncCallerContext* context = nullptr) const;

     /*
       ${operation.documentation}
     */
     Model::RemoveTagsFromResourceOutcome RemoveTagsFromResource(const Model::RemoveTagsFromResourceRequest& request) const;

     /*
       ${operation.documentation}

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::RemoveTagsFromResourceOutcomeCallable RemoveTagsFromResourceCallable(const Model::RemoveTagsFromResourceRequest& request) const;

     /*
       ${operation.documentation}

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void RemoveTagsFromResourceAsync(const Model::RemoveTagsFromResourceRequest& request, const Aws::Client::AsyncCallerContext* context = nullptr) const;

     /*
       <p>Sets the attributes for an endpoint for a device on one of the supported push notification services, such as GCM and APNS. For more information, see <a href="http://docs.aws.amazon.com/sns/latest/dg/SNSMobilePush.html">Using Amazon SNS Mobile Push Notifications</a>. </p>
     */
     Model::SetEndpointAttributesOutcome SetEndpointAttributes(const Model::SetEndpointAttributesRequest& request) const;

     /*
       <p>Sets the attributes for an endpoint for a device on one of the supported push notification services, such as GCM and APNS. For more information, see <a href="http://docs.aws.amazon.com/sns/latest/dg/SNSMobilePush.html">Using Amazon SNS Mobile Push Notifications</a>. </p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::SetEndpointAttributesOutcomeCallable SetEndpointAttributesCallable(const Model::SetEndpointAttributesRequest& request) const;

     /*
       <p>Sets the attributes for an endpoint for a device on one of the supported push notification services, such as GCM and APNS. For more information, see <a href="http://docs.aws.amazon.com/sns/latest/dg/SNSMobilePush.html">Using Amazon SNS Mobile Push Notifications</a>. </p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void SetEndpointAttributesAsync(const Model::SetEndpointAttributesRequest& request, const Aws::Client::AsyncCallerContext* context = nullptr) const;

     /*
       <p>Sets the attributes of the platform application object for the supported push notification services, such as APNS and GCM. For more information, see <a href="http://docs.aws.amazon.com/sns/latest/dg/SNSMobilePush.html">Using Amazon SNS Mobile Push Notifications</a>. </p>
     */
     Model::SetPlatformApplicationAttributesOutcome SetPlatformApplicationAttributes(const Model::SetPlatformApplicationAttributesRequest& request) const;

     /*
       <p>Sets the attributes of the platform application object for the supported push notification services, such as APNS and GCM. For more information, see <a href="http://docs.aws.amazon.com/sns/latest/dg/SNSMobilePush.html">Using Amazon SNS Mobile Push Notifications</a>. </p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::SetPlatformApplicationAttributesOutcomeCallable SetPlatformApplicationAttributesCallable(const Model::SetPlatformApplicationAttributesRequest& request) const;

     /*
       <p>Sets the attributes of the platform application object for the supported push notification services, such as APNS and GCM. For more information, see <a href="http://docs.aws.amazon.com/sns/latest/dg/SNSMobilePush.html">Using Amazon SNS Mobile Push Notifications</a>. </p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void SetPlatformApplicationAttributesAsync(const Model::SetPlatformApplicationAttributesRequest& request, const Aws::Client::AsyncCallerContext* context = nullptr) const;

     /*
       <p>Allows a subscription owner to set an attribute of the topic to a new value.</p>
     */
     Model::SetSubscriptionAttributesOutcome SetSubscriptionAttributes(const Model::SetSubscriptionAttributesRequest& request) const;

     /*
       <p>Allows a subscription owner to set an attribute of the topic to a new value.</p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::SetSubscriptionAttributesOutcomeCallable SetSubscriptionAttributesCallable(const Model::SetSubscriptionAttributesRequest& request) const;

     /*
       <p>Allows a subscription owner to set an attribute of the topic to a new value.</p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void SetSubscriptionAttributesAsync(const Model::SetSubscriptionAttributesRequest& request, const Aws::Client::AsyncCallerContext* context = nullptr) const;

     /*
       <p>Allows a topic owner to set an attribute of the topic to a new value.</p>
     */
     Model::SetTopicAttributesOutcome SetTopicAttributes(const Model::SetTopicAttributesRequest& request) const;

     /*
       <p>Allows a topic owner to set an attribute of the topic to a new value.</p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::SetTopicAttributesOutcomeCallable SetTopicAttributesCallable(const Model::SetTopicAttributesRequest& request) const;

     /*
       <p>Allows a topic owner to set an attribute of the topic to a new value.</p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void SetTopicAttributesAsync(const Model::SetTopicAttributesRequest& request, const Aws::Client::AsyncCallerContext* context = nullptr) const;

     /*
       <p>Prepares to subscribe an endpoint by sending the endpoint a confirmation message. To actually create a subscription, the endpoint owner must call the <code>ConfirmSubscription</code> action with the token from the confirmation message. Confirmation tokens are valid for three days.</p>
     */
     Model::SubscribeOutcome Subscribe(const Model::SubscribeRequest& request) const;

     /*
       <p>Prepares to subscribe an endpoint by sending the endpoint a confirmation message. To actually create a subscription, the endpoint owner must call the <code>ConfirmSubscription</code> action with the token from the confirmation message. Confirmation tokens are valid for three days.</p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::SubscribeOutcomeCallable SubscribeCallable(const Model::SubscribeRequest& request) const;

     /*
       <p>Prepares to subscribe an endpoint by sending the endpoint a confirmation message. To actually create a subscription, the endpoint owner must call the <code>ConfirmSubscription</code> action with the token from the confirmation message. Confirmation tokens are valid for three days.</p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void SubscribeAsync(const Model::SubscribeRequest& request, const Aws::Client::AsyncCallerContext* context = nullptr) const;

     /*
       <p>Deletes a subscription. If the subscription requires authentication for deletion, only the owner of the subscription or the topic's owner can unsubscribe, and an AWS signature is required. If the <code>Unsubscribe</code> call does not require authentication and the requester is not the subscription owner, a final cancellation message is delivered to the endpoint, so that the endpoint owner can easily resubscribe to the topic if the <code>Unsubscribe</code> request was unintended.</p>
     */
     Model::UnsubscribeOutcome Unsubscribe(const Model::UnsubscribeRequest& request) const;

     /*
       <p>Deletes a subscription. If the subscription requires authentication for deletion, only the owner of the subscription or the topic's owner can unsubscribe, and an AWS signature is required. If the <code>Unsubscribe</code> call does not require authentication and the requester is not the subscription owner, a final cancellation message is delivered to the endpoint, so that the endpoint owner can easily resubscribe to the topic if the <code>Unsubscribe</code> request was unintended.</p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::UnsubscribeOutcomeCallable UnsubscribeCallable(const Model::UnsubscribeRequest& request) const;

     /*
       <p>Deletes a subscription. If the subscription requires authentication for deletion, only the owner of the subscription or the topic's owner can unsubscribe, and an AWS signature is required. If the <code>Unsubscribe</code> call does not require authentication and the requester is not the subscription owner, a final cancellation message is delivered to the endpoint, so that the endpoint owner can easily resubscribe to the topic if the <code>Unsubscribe</code> request was unintended.</p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void UnsubscribeAsync(const Model::UnsubscribeRequest& request, const Aws::Client::AsyncCallerContext* context = nullptr) const;

   /**
    * Adds an event handler for AddPermissionAsync to call upon completion to the handler chain. You need to call this to
    * use AddPermissionAsync.
    */
    inline void RegisterAddPermissionOutcomeReceivedHandler(const AddPermissionOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onAddPermissionOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for AddPermission.
    */
    inline void ClearAllAddPermissionOutcomeReceivedHandlers()
    {
      m_onAddPermissionOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for AddTagsToResourceAsync to call upon completion to the handler chain. You need to call this to
    * use AddTagsToResourceAsync.
    */
    inline void RegisterAddTagsToResourceOutcomeReceivedHandler(const AddTagsToResourceOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onAddTagsToResourceOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for AddTagsToResource.
    */
    inline void ClearAllAddTagsToResourceOutcomeReceivedHandlers()
    {
      m_onAddTagsToResourceOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for ConfirmSubscriptionAsync to call upon completion to the handler chain. You need to call this to
    * use ConfirmSubscriptionAsync.
    */
    inline void RegisterConfirmSubscriptionOutcomeReceivedHandler(const ConfirmSubscriptionOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onConfirmSubscriptionOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for ConfirmSubscription.
    */
    inline void ClearAllConfirmSubscriptionOutcomeReceivedHandlers()
    {
      m_onConfirmSubscriptionOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for CreatePlatformApplicationAsync to call upon completion to the handler chain. You need to call this to
    * use CreatePlatformApplicationAsync.
    */
    inline void RegisterCreatePlatformApplicationOutcomeReceivedHandler(const CreatePlatformApplicationOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onCreatePlatformApplicationOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for CreatePlatformApplication.
    */
    inline void ClearAllCreatePlatformApplicationOutcomeReceivedHandlers()
    {
      m_onCreatePlatformApplicationOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for CreatePlatformEndpointAsync to call upon completion to the handler chain. You need to call this to
    * use CreatePlatformEndpointAsync.
    */
    inline void RegisterCreatePlatformEndpointOutcomeReceivedHandler(const CreatePlatformEndpointOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onCreatePlatformEndpointOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for CreatePlatformEndpoint.
    */
    inline void ClearAllCreatePlatformEndpointOutcomeReceivedHandlers()
    {
      m_onCreatePlatformEndpointOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for CreateTopicAsync to call upon completion to the handler chain. You need to call this to
    * use CreateTopicAsync.
    */
    inline void RegisterCreateTopicOutcomeReceivedHandler(const CreateTopicOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onCreateTopicOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for CreateTopic.
    */
    inline void ClearAllCreateTopicOutcomeReceivedHandlers()
    {
      m_onCreateTopicOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for DeleteEndpointAsync to call upon completion to the handler chain. You need to call this to
    * use DeleteEndpointAsync.
    */
    inline void RegisterDeleteEndpointOutcomeReceivedHandler(const DeleteEndpointOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onDeleteEndpointOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for DeleteEndpoint.
    */
    inline void ClearAllDeleteEndpointOutcomeReceivedHandlers()
    {
      m_onDeleteEndpointOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for DeletePlatformApplicationAsync to call upon completion to the handler chain. You need to call this to
    * use DeletePlatformApplicationAsync.
    */
    inline void RegisterDeletePlatformApplicationOutcomeReceivedHandler(const DeletePlatformApplicationOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onDeletePlatformApplicationOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for DeletePlatformApplication.
    */
    inline void ClearAllDeletePlatformApplicationOutcomeReceivedHandlers()
    {
      m_onDeletePlatformApplicationOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for DeleteTopicAsync to call upon completion to the handler chain. You need to call this to
    * use DeleteTopicAsync.
    */
    inline void RegisterDeleteTopicOutcomeReceivedHandler(const DeleteTopicOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onDeleteTopicOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for DeleteTopic.
    */
    inline void ClearAllDeleteTopicOutcomeReceivedHandlers()
    {
      m_onDeleteTopicOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for GetEndpointAttributesAsync to call upon completion to the handler chain. You need to call this to
    * use GetEndpointAttributesAsync.
    */
    inline void RegisterGetEndpointAttributesOutcomeReceivedHandler(const GetEndpointAttributesOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onGetEndpointAttributesOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for GetEndpointAttributes.
    */
    inline void ClearAllGetEndpointAttributesOutcomeReceivedHandlers()
    {
      m_onGetEndpointAttributesOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for GetPlatformApplicationAttributesAsync to call upon completion to the handler chain. You need to call this to
    * use GetPlatformApplicationAttributesAsync.
    */
    inline void RegisterGetPlatformApplicationAttributesOutcomeReceivedHandler(const GetPlatformApplicationAttributesOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onGetPlatformApplicationAttributesOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for GetPlatformApplicationAttributes.
    */
    inline void ClearAllGetPlatformApplicationAttributesOutcomeReceivedHandlers()
    {
      m_onGetPlatformApplicationAttributesOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for GetSubscriptionAttributesAsync to call upon completion to the handler chain. You need to call this to
    * use GetSubscriptionAttributesAsync.
    */
    inline void RegisterGetSubscriptionAttributesOutcomeReceivedHandler(const GetSubscriptionAttributesOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onGetSubscriptionAttributesOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for GetSubscriptionAttributes.
    */
    inline void ClearAllGetSubscriptionAttributesOutcomeReceivedHandlers()
    {
      m_onGetSubscriptionAttributesOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for GetTopicAttributesAsync to call upon completion to the handler chain. You need to call this to
    * use GetTopicAttributesAsync.
    */
    inline void RegisterGetTopicAttributesOutcomeReceivedHandler(const GetTopicAttributesOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onGetTopicAttributesOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for GetTopicAttributes.
    */
    inline void ClearAllGetTopicAttributesOutcomeReceivedHandlers()
    {
      m_onGetTopicAttributesOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for ListEndpointsByPlatformApplicationAsync to call upon completion to the handler chain. You need to call this to
    * use ListEndpointsByPlatformApplicationAsync.
    */
    inline void RegisterListEndpointsByPlatformApplicationOutcomeReceivedHandler(const ListEndpointsByPlatformApplicationOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onListEndpointsByPlatformApplicationOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for ListEndpointsByPlatformApplication.
    */
    inline void ClearAllListEndpointsByPlatformApplicationOutcomeReceivedHandlers()
    {
      m_onListEndpointsByPlatformApplicationOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for ListPlatformApplicationsAsync to call upon completion to the handler chain. You need to call this to
    * use ListPlatformApplicationsAsync.
    */
    inline void RegisterListPlatformApplicationsOutcomeReceivedHandler(const ListPlatformApplicationsOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onListPlatformApplicationsOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for ListPlatformApplications.
    */
    inline void ClearAllListPlatformApplicationsOutcomeReceivedHandlers()
    {
      m_onListPlatformApplicationsOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for ListSubscriptionsAsync to call upon completion to the handler chain. You need to call this to
    * use ListSubscriptionsAsync.
    */
    inline void RegisterListSubscriptionsOutcomeReceivedHandler(const ListSubscriptionsOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onListSubscriptionsOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for ListSubscriptions.
    */
    inline void ClearAllListSubscriptionsOutcomeReceivedHandlers()
    {
      m_onListSubscriptionsOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for ListSubscriptionsByTopicAsync to call upon completion to the handler chain. You need to call this to
    * use ListSubscriptionsByTopicAsync.
    */
    inline void RegisterListSubscriptionsByTopicOutcomeReceivedHandler(const ListSubscriptionsByTopicOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onListSubscriptionsByTopicOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for ListSubscriptionsByTopic.
    */
    inline void ClearAllListSubscriptionsByTopicOutcomeReceivedHandlers()
    {
      m_onListSubscriptionsByTopicOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for ListTagsForResourceAsync to call upon completion to the handler chain. You need to call this to
    * use ListTagsForResourceAsync.
    */
    inline void RegisterListTagsForResourceOutcomeReceivedHandler(const ListTagsForResourceOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onListTagsForResourceOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for ListTagsForResource.
    */
    inline void ClearAllListTagsForResourceOutcomeReceivedHandlers()
    {
      m_onListTagsForResourceOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for ListTopicsAsync to call upon completion to the handler chain. You need to call this to
    * use ListTopicsAsync.
    */
    inline void RegisterListTopicsOutcomeReceivedHandler(const ListTopicsOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onListTopicsOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for ListTopics.
    */
    inline void ClearAllListTopicsOutcomeReceivedHandlers()
    {
      m_onListTopicsOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for PublishAsync to call upon completion to the handler chain. You need to call this to
    * use PublishAsync.
    */
    inline void RegisterPublishOutcomeReceivedHandler(const PublishOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onPublishOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for Publish.
    */
    inline void ClearAllPublishOutcomeReceivedHandlers()
    {
      m_onPublishOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for RemovePermissionAsync to call upon completion to the handler chain. You need to call this to
    * use RemovePermissionAsync.
    */
    inline void RegisterRemovePermissionOutcomeReceivedHandler(const RemovePermissionOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onRemovePermissionOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for RemovePermission.
    */
    inline void ClearAllRemovePermissionOutcomeReceivedHandlers()
    {
      m_onRemovePermissionOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for RemoveTagsFromResourceAsync to call upon completion to the handler chain. You need to call this to
    * use RemoveTagsFromResourceAsync.
    */
    inline void RegisterRemoveTagsFromResourceOutcomeReceivedHandler(const RemoveTagsFromResourceOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onRemoveTagsFromResourceOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for RemoveTagsFromResource.
    */
    inline void ClearAllRemoveTagsFromResourceOutcomeReceivedHandlers()
    {
      m_onRemoveTagsFromResourceOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for SetEndpointAttributesAsync to call upon completion to the handler chain. You need to call this to
    * use SetEndpointAttributesAsync.
    */
    inline void RegisterSetEndpointAttributesOutcomeReceivedHandler(const SetEndpointAttributesOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onSetEndpointAttributesOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for SetEndpointAttributes.
    */
    inline void ClearAllSetEndpointAttributesOutcomeReceivedHandlers()
    {
      m_onSetEndpointAttributesOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for SetPlatformApplicationAttributesAsync to call upon completion to the handler chain. You need to call this to
    * use SetPlatformApplicationAttributesAsync.
    */
    inline void RegisterSetPlatformApplicationAttributesOutcomeReceivedHandler(const SetPlatformApplicationAttributesOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onSetPlatformApplicationAttributesOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for SetPlatformApplicationAttributes.
    */
    inline void ClearAllSetPlatformApplicationAttributesOutcomeReceivedHandlers()
    {
      m_onSetPlatformApplicationAttributesOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for SetSubscriptionAttributesAsync to call upon completion to the handler chain. You need to call this to
    * use SetSubscriptionAttributesAsync.
    */
    inline void RegisterSetSubscriptionAttributesOutcomeReceivedHandler(const SetSubscriptionAttributesOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onSetSubscriptionAttributesOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for SetSubscriptionAttributes.
    */
    inline void ClearAllSetSubscriptionAttributesOutcomeReceivedHandlers()
    {
      m_onSetSubscriptionAttributesOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for SetTopicAttributesAsync to call upon completion to the handler chain. You need to call this to
    * use SetTopicAttributesAsync.
    */
    inline void RegisterSetTopicAttributesOutcomeReceivedHandler(const SetTopicAttributesOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onSetTopicAttributesOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for SetTopicAttributes.
    */
    inline void ClearAllSetTopicAttributesOutcomeReceivedHandlers()
    {
      m_onSetTopicAttributesOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for SubscribeAsync to call upon completion to the handler chain. You need to call this to
    * use SubscribeAsync.
    */
    inline void RegisterSubscribeOutcomeReceivedHandler(const SubscribeOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onSubscribeOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for Subscribe.
    */
    inline void ClearAllSubscribeOutcomeReceivedHandlers()
    {
      m_onSubscribeOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for UnsubscribeAsync to call upon completion to the handler chain. You need to call this to
    * use UnsubscribeAsync.
    */
    inline void RegisterUnsubscribeOutcomeReceivedHandler(const UnsubscribeOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onUnsubscribeOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for Unsubscribe.
    */
    inline void ClearAllUnsubscribeOutcomeReceivedHandlers()
    {
      m_onUnsubscribeOutcomeReceived.Clear();
    }

  private:
    void init(const Client::ClientConfiguration& clientConfiguration);

    /**Async helpers**/
    void AddPermissionAsyncHelper(const Model::AddPermissionRequest& request, const Aws::Client::AsyncCallerContext* context) const;
    void AddTagsToResourceAsyncHelper(const Model::AddTagsToResourceRequest& request, const Aws::Client::AsyncCallerContext* context) const;
    void ConfirmSubscriptionAsyncHelper(const Model::ConfirmSubscriptionRequest& request, const Aws::Client::AsyncCallerContext* context) const;
    void CreatePlatformApplicationAsyncHelper(const Model::CreatePlatformApplicationRequest& request, const Aws::Client::AsyncCallerContext* context) const;
    void CreatePlatformEndpointAsyncHelper(const Model::CreatePlatformEndpointRequest& request, const Aws::Client::AsyncCallerContext* context) const;
    void CreateTopicAsyncHelper(const Model::CreateTopicRequest& request, const Aws::Client::AsyncCallerContext* context) const;
    void DeleteEndpointAsyncHelper(const Model::DeleteEndpointRequest& request, const Aws::Client::AsyncCallerContext* context) const;
    void DeletePlatformApplicationAsyncHelper(const Model::DeletePlatformApplicationRequest& request, const Aws::Client::AsyncCallerContext* context) const;
    void DeleteTopicAsyncHelper(const Model::DeleteTopicRequest& request, const Aws::Client::AsyncCallerContext* context) const;
    void GetEndpointAttributesAsyncHelper(const Model::GetEndpointAttributesRequest& request, const Aws::Client::AsyncCallerContext* context) const;
    void GetPlatformApplicationAttributesAsyncHelper(const Model::GetPlatformApplicationAttributesRequest& request, const Aws::Client::AsyncCallerContext* context) const;
    void GetSubscriptionAttributesAsyncHelper(const Model::GetSubscriptionAttributesRequest& request, const Aws::Client::AsyncCallerContext* context) const;
    void GetTopicAttributesAsyncHelper(const Model::GetTopicAttributesRequest& request, const Aws::Client::AsyncCallerContext* context) const;
    void ListEndpointsByPlatformApplicationAsyncHelper(const Model::ListEndpointsByPlatformApplicationRequest& request, const Aws::Client::AsyncCallerContext* context) const;
    void ListPlatformApplicationsAsyncHelper(const Model::ListPlatformApplicationsRequest& request, const Aws::Client::AsyncCallerContext* context) const;
    void ListSubscriptionsAsyncHelper(const Model::ListSubscriptionsRequest& request, const Aws::Client::AsyncCallerContext* context) const;
    void ListSubscriptionsByTopicAsyncHelper(const Model::ListSubscriptionsByTopicRequest& request, const Aws::Client::AsyncCallerContext* context) const;
    void ListTagsForResourceAsyncHelper(const Model::ListTagsForResourceRequest& request, const Aws::Client::AsyncCallerContext* context) const;
    void ListTopicsAsyncHelper(const Model::ListTopicsRequest& request, const Aws::Client::AsyncCallerContext* context) const;
    void PublishAsyncHelper(const Model::PublishRequest& request, const Aws::Client::AsyncCallerContext* context) const;
    void RemovePermissionAsyncHelper(const Model::RemovePermissionRequest& request, const Aws::Client::AsyncCallerContext* context) const;
    void RemoveTagsFromResourceAsyncHelper(const Model::RemoveTagsFromResourceRequest& request, const Aws::Client::AsyncCallerContext* context) const;
    void SetEndpointAttributesAsyncHelper(const Model::SetEndpointAttributesRequest& request, const Aws::Client::AsyncCallerContext* context) const;
    void SetPlatformApplicationAttributesAsyncHelper(const Model::SetPlatformApplicationAttributesRequest& request, const Aws::Client::AsyncCallerContext* context) const;
    void SetSubscriptionAttributesAsyncHelper(const Model::SetSubscriptionAttributesRequest& request, const Aws::Client::AsyncCallerContext* context) const;
    void SetTopicAttributesAsyncHelper(const Model::SetTopicAttributesRequest& request, const Aws::Client::AsyncCallerContext* context) const;
    void SubscribeAsyncHelper(const Model::SubscribeRequest& request, const Aws::Client::AsyncCallerContext* context) const;
    void UnsubscribeAsyncHelper(const Model::UnsubscribeRequest& request, const Aws::Client::AsyncCallerContext* context) const;

    Aws::String m_uri;
    std::shared_ptr<Utils::Threading::Executor> m_executor;

    /** events **/
    AddPermissionOutcomeReceivedEvent m_onAddPermissionOutcomeReceived;
    AddTagsToResourceOutcomeReceivedEvent m_onAddTagsToResourceOutcomeReceived;
    ConfirmSubscriptionOutcomeReceivedEvent m_onConfirmSubscriptionOutcomeReceived;
    CreatePlatformApplicationOutcomeReceivedEvent m_onCreatePlatformApplicationOutcomeReceived;
    CreatePlatformEndpointOutcomeReceivedEvent m_onCreatePlatformEndpointOutcomeReceived;
    CreateTopicOutcomeReceivedEvent m_onCreateTopicOutcomeReceived;
    DeleteEndpointOutcomeReceivedEvent m_onDeleteEndpointOutcomeReceived;
    DeletePlatformApplicationOutcomeReceivedEvent m_onDeletePlatformApplicationOutcomeReceived;
    DeleteTopicOutcomeReceivedEvent m_onDeleteTopicOutcomeReceived;
    GetEndpointAttributesOutcomeReceivedEvent m_onGetEndpointAttributesOutcomeReceived;
    GetPlatformApplicationAttributesOutcomeReceivedEvent m_onGetPlatformApplicationAttributesOutcomeReceived;
    GetSubscriptionAttributesOutcomeReceivedEvent m_onGetSubscriptionAttributesOutcomeReceived;
    GetTopicAttributesOutcomeReceivedEvent m_onGetTopicAttributesOutcomeReceived;
    ListEndpointsByPlatformApplicationOutcomeReceivedEvent m_onListEndpointsByPlatformApplicationOutcomeReceived;
    ListPlatformApplicationsOutcomeReceivedEvent m_onListPlatformApplicationsOutcomeReceived;
    ListSubscriptionsOutcomeReceivedEvent m_onListSubscriptionsOutcomeReceived;
    ListSubscriptionsByTopicOutcomeReceivedEvent m_onListSubscriptionsByTopicOutcomeReceived;
    ListTagsForResourceOutcomeReceivedEvent m_onListTagsForResourceOutcomeReceived;
    ListTopicsOutcomeReceivedEvent m_onListTopicsOutcomeReceived;
    PublishOutcomeReceivedEvent m_onPublishOutcomeReceived;
    RemovePermissionOutcomeReceivedEvent m_onRemovePermissionOutcomeReceived;
    RemoveTagsFromResourceOutcomeReceivedEvent m_onRemoveTagsFromResourceOutcomeReceived;
    SetEndpointAttributesOutcomeReceivedEvent m_onSetEndpointAttributesOutcomeReceived;
    SetPlatformApplicationAttributesOutcomeReceivedEvent m_onSetPlatformApplicationAttributesOutcomeReceived;
    SetSubscriptionAttributesOutcomeReceivedEvent m_onSetSubscriptionAttributesOutcomeReceived;
    SetTopicAttributesOutcomeReceivedEvent m_onSetTopicAttributesOutcomeReceived;
    SubscribeOutcomeReceivedEvent m_onSubscribeOutcomeReceived;
    UnsubscribeOutcomeReceivedEvent m_onUnsubscribeOutcomeReceived;
  };

} // namespace SNS
} // namespace Aws
