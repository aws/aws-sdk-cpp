/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/sns/model/ListTopicsResult.h>
#include <aws/sns/model/PublishResult.h>
#include <aws/sns/model/SubscribeResult.h>
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
        class ListTopicsRequest;
        class PublishRequest;
        class RemovePermissionRequest;
        class SetEndpointAttributesRequest;
        class SetPlatformApplicationAttributesRequest;
        class SetSubscriptionAttributesRequest;
        class SetTopicAttributesRequest;
        class SubscribeRequest;
        class UnsubscribeRequest;

        typedef Aws::Utils::Outcome<NoResult, Aws::Client::AWSError<SNSErrors>> AddPermissionOutcome;
        typedef Aws::Utils::Outcome<ConfirmSubscriptionResult, Aws::Client::AWSError<SNSErrors>> ConfirmSubscriptionOutcome;
        typedef Aws::Utils::Outcome<CreatePlatformApplicationResult, Aws::Client::AWSError<SNSErrors>> CreatePlatformApplicationOutcome;
        typedef Aws::Utils::Outcome<CreatePlatformEndpointResult, Aws::Client::AWSError<SNSErrors>> CreatePlatformEndpointOutcome;
        typedef Aws::Utils::Outcome<CreateTopicResult, Aws::Client::AWSError<SNSErrors>> CreateTopicOutcome;
        typedef Aws::Utils::Outcome<NoResult, Aws::Client::AWSError<SNSErrors>> DeleteEndpointOutcome;
        typedef Aws::Utils::Outcome<NoResult, Aws::Client::AWSError<SNSErrors>> DeletePlatformApplicationOutcome;
        typedef Aws::Utils::Outcome<NoResult, Aws::Client::AWSError<SNSErrors>> DeleteTopicOutcome;
        typedef Aws::Utils::Outcome<GetEndpointAttributesResult, Aws::Client::AWSError<SNSErrors>> GetEndpointAttributesOutcome;
        typedef Aws::Utils::Outcome<GetPlatformApplicationAttributesResult, Aws::Client::AWSError<SNSErrors>> GetPlatformApplicationAttributesOutcome;
        typedef Aws::Utils::Outcome<GetSubscriptionAttributesResult, Aws::Client::AWSError<SNSErrors>> GetSubscriptionAttributesOutcome;
        typedef Aws::Utils::Outcome<GetTopicAttributesResult, Aws::Client::AWSError<SNSErrors>> GetTopicAttributesOutcome;
        typedef Aws::Utils::Outcome<ListEndpointsByPlatformApplicationResult, Aws::Client::AWSError<SNSErrors>> ListEndpointsByPlatformApplicationOutcome;
        typedef Aws::Utils::Outcome<ListPlatformApplicationsResult, Aws::Client::AWSError<SNSErrors>> ListPlatformApplicationsOutcome;
        typedef Aws::Utils::Outcome<ListSubscriptionsResult, Aws::Client::AWSError<SNSErrors>> ListSubscriptionsOutcome;
        typedef Aws::Utils::Outcome<ListSubscriptionsByTopicResult, Aws::Client::AWSError<SNSErrors>> ListSubscriptionsByTopicOutcome;
        typedef Aws::Utils::Outcome<ListTopicsResult, Aws::Client::AWSError<SNSErrors>> ListTopicsOutcome;
        typedef Aws::Utils::Outcome<PublishResult, Aws::Client::AWSError<SNSErrors>> PublishOutcome;
        typedef Aws::Utils::Outcome<NoResult, Aws::Client::AWSError<SNSErrors>> RemovePermissionOutcome;
        typedef Aws::Utils::Outcome<NoResult, Aws::Client::AWSError<SNSErrors>> SetEndpointAttributesOutcome;
        typedef Aws::Utils::Outcome<NoResult, Aws::Client::AWSError<SNSErrors>> SetPlatformApplicationAttributesOutcome;
        typedef Aws::Utils::Outcome<NoResult, Aws::Client::AWSError<SNSErrors>> SetSubscriptionAttributesOutcome;
        typedef Aws::Utils::Outcome<NoResult, Aws::Client::AWSError<SNSErrors>> SetTopicAttributesOutcome;
        typedef Aws::Utils::Outcome<SubscribeResult, Aws::Client::AWSError<SNSErrors>> SubscribeOutcome;
        typedef Aws::Utils::Outcome<NoResult, Aws::Client::AWSError<SNSErrors>> UnsubscribeOutcome;

        typedef std::future<AddPermissionOutcome> AddPermissionOutcomeCallable;
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
        typedef std::future<ListTopicsOutcome> ListTopicsOutcomeCallable;
        typedef std::future<PublishOutcome> PublishOutcomeCallable;
        typedef std::future<RemovePermissionOutcome> RemovePermissionOutcomeCallable;
        typedef std::future<SetEndpointAttributesOutcome> SetEndpointAttributesOutcomeCallable;
        typedef std::future<SetPlatformApplicationAttributesOutcome> SetPlatformApplicationAttributesOutcomeCallable;
        typedef std::future<SetSubscriptionAttributesOutcome> SetSubscriptionAttributesOutcomeCallable;
        typedef std::future<SetTopicAttributesOutcome> SetTopicAttributesOutcomeCallable;
        typedef std::future<SubscribeOutcome> SubscribeOutcomeCallable;
        typedef std::future<UnsubscribeOutcome> UnsubscribeOutcomeCallable;
} // namespace Model

  class SNSClient;

    typedef std::function<void(const SNSClient*, const Model::AddPermissionRequest&, const Model::AddPermissionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AddPermissionResponseReceivedHandler;
    typedef std::function<void(const SNSClient*, const Model::ConfirmSubscriptionRequest&, const Model::ConfirmSubscriptionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ConfirmSubscriptionResponseReceivedHandler;
    typedef std::function<void(const SNSClient*, const Model::CreatePlatformApplicationRequest&, const Model::CreatePlatformApplicationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreatePlatformApplicationResponseReceivedHandler;
    typedef std::function<void(const SNSClient*, const Model::CreatePlatformEndpointRequest&, const Model::CreatePlatformEndpointOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreatePlatformEndpointResponseReceivedHandler;
    typedef std::function<void(const SNSClient*, const Model::CreateTopicRequest&, const Model::CreateTopicOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateTopicResponseReceivedHandler;
    typedef std::function<void(const SNSClient*, const Model::DeleteEndpointRequest&, const Model::DeleteEndpointOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteEndpointResponseReceivedHandler;
    typedef std::function<void(const SNSClient*, const Model::DeletePlatformApplicationRequest&, const Model::DeletePlatformApplicationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeletePlatformApplicationResponseReceivedHandler;
    typedef std::function<void(const SNSClient*, const Model::DeleteTopicRequest&, const Model::DeleteTopicOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteTopicResponseReceivedHandler;
    typedef std::function<void(const SNSClient*, const Model::GetEndpointAttributesRequest&, const Model::GetEndpointAttributesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetEndpointAttributesResponseReceivedHandler;
    typedef std::function<void(const SNSClient*, const Model::GetPlatformApplicationAttributesRequest&, const Model::GetPlatformApplicationAttributesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetPlatformApplicationAttributesResponseReceivedHandler;
    typedef std::function<void(const SNSClient*, const Model::GetSubscriptionAttributesRequest&, const Model::GetSubscriptionAttributesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetSubscriptionAttributesResponseReceivedHandler;
    typedef std::function<void(const SNSClient*, const Model::GetTopicAttributesRequest&, const Model::GetTopicAttributesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetTopicAttributesResponseReceivedHandler;
    typedef std::function<void(const SNSClient*, const Model::ListEndpointsByPlatformApplicationRequest&, const Model::ListEndpointsByPlatformApplicationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListEndpointsByPlatformApplicationResponseReceivedHandler;
    typedef std::function<void(const SNSClient*, const Model::ListPlatformApplicationsRequest&, const Model::ListPlatformApplicationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListPlatformApplicationsResponseReceivedHandler;
    typedef std::function<void(const SNSClient*, const Model::ListSubscriptionsRequest&, const Model::ListSubscriptionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListSubscriptionsResponseReceivedHandler;
    typedef std::function<void(const SNSClient*, const Model::ListSubscriptionsByTopicRequest&, const Model::ListSubscriptionsByTopicOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListSubscriptionsByTopicResponseReceivedHandler;
    typedef std::function<void(const SNSClient*, const Model::ListTopicsRequest&, const Model::ListTopicsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTopicsResponseReceivedHandler;
    typedef std::function<void(const SNSClient*, const Model::PublishRequest&, const Model::PublishOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PublishResponseReceivedHandler;
    typedef std::function<void(const SNSClient*, const Model::RemovePermissionRequest&, const Model::RemovePermissionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RemovePermissionResponseReceivedHandler;
    typedef std::function<void(const SNSClient*, const Model::SetEndpointAttributesRequest&, const Model::SetEndpointAttributesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > SetEndpointAttributesResponseReceivedHandler;
    typedef std::function<void(const SNSClient*, const Model::SetPlatformApplicationAttributesRequest&, const Model::SetPlatformApplicationAttributesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > SetPlatformApplicationAttributesResponseReceivedHandler;
    typedef std::function<void(const SNSClient*, const Model::SetSubscriptionAttributesRequest&, const Model::SetSubscriptionAttributesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > SetSubscriptionAttributesResponseReceivedHandler;
    typedef std::function<void(const SNSClient*, const Model::SetTopicAttributesRequest&, const Model::SetTopicAttributesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > SetTopicAttributesResponseReceivedHandler;
    typedef std::function<void(const SNSClient*, const Model::SubscribeRequest&, const Model::SubscribeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > SubscribeResponseReceivedHandler;
    typedef std::function<void(const SNSClient*, const Model::UnsubscribeRequest&, const Model::UnsubscribeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UnsubscribeResponseReceivedHandler;

  /**
   * <fullname>Amazon Simple Notification Service</fullname>
    
	<p>Amazon Simple
   * Notification Service (Amazon SNS) is a web service that enables you to build
   * distributed web-enabled applications. 
    	Applications can use Amazon SNS to
   * easily push real-time notification messages 
    	to interested subscribers over
   * multiple delivery protocols. For more information about this product
		see <a
   * href="http://aws.amazon.com/sns/">http://aws.amazon.com/sns</a>. For detailed
   * information about Amazon SNS features and their associated API calls,
		see the
   * <a href="http://docs.aws.amazon.com/sns/latest/dg/">Amazon SNS Developer
   * Guide</a>.
	</p>
    <p>We also provide SDKs that enable you to access Amazon
   * SNS from your preferred programming language. 
      The SDKs contain
   * functionality that automatically takes care of tasks such as: cryptographically
   * signing your service requests, 
      retrying requests, and handling error
   * responses. For a list of available SDKs, go to <a
   * href="http://aws.amazon.com/tools/">Tools for Amazon Web Services</a>.    
 
   * </p>
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

        virtual ~SNSClient();

        /**
         * <p>Adds a statement to a topic's access control policy, granting access for the
         * specified AWS accounts to the specified actions.</p>
<examples>

         * <queryrequest>

  http://sns.us-east-1.amazonaws.com/
 
         * ?TopicArn=arn%3Aaws%3Asns%3Aus-east-1%3A123456789012%3AMy-Test
 
         * &amp;ActionName.member.1=Publish
  &amp;ActionName.member.2=GetTopicAttributes
 
         * &amp;Label=NewPermission
  &amp;AWSAccountId.member.1=987654321000
 
         * &amp;AWSAccountId.member.2=876543210000
  &amp;Action=AddPermission
 
         * &amp;SignatureVersion=2
  &amp;SignatureMethod=HmacSHA256
 
         * &amp;Timestamp=2010-03-31T12%3A00%3A00.000Z
  &amp;AWSAccessKeyId=(AWS Access
         * Key ID)
  &amp;Signature=k%2FAU%2FKp13pjndwJ7rr1sZszy6MZMlOhRBCHx1ZaZFiw%3D


         * </queryrequest>
 <queryresponse>
  
&lt;AddPermissionResponse
         * xmlns="http://sns.amazonaws.com/doc/2010-03-31/"&gt;
  &lt;ResponseMetadata&gt;

         * &lt;RequestId&gt;6a213e4e-33a8-11df-9540-99d0768312d3&lt;/RequestId&gt;
 
         * &lt;/ResponseMetadata&gt;
&lt;/AddPermissionResponse&gt;
  

         * </queryresponse>
</examples>
         */
        virtual Model::AddPermissionOutcome AddPermission(const Model::AddPermissionRequest& request) const;

        /**
         * <p>Adds a statement to a topic's access control policy, granting access for the
         * specified AWS accounts to the specified actions.</p>
<examples>

         * <queryrequest>

  http://sns.us-east-1.amazonaws.com/
 
         * ?TopicArn=arn%3Aaws%3Asns%3Aus-east-1%3A123456789012%3AMy-Test
 
         * &amp;ActionName.member.1=Publish
  &amp;ActionName.member.2=GetTopicAttributes
 
         * &amp;Label=NewPermission
  &amp;AWSAccountId.member.1=987654321000
 
         * &amp;AWSAccountId.member.2=876543210000
  &amp;Action=AddPermission
 
         * &amp;SignatureVersion=2
  &amp;SignatureMethod=HmacSHA256
 
         * &amp;Timestamp=2010-03-31T12%3A00%3A00.000Z
  &amp;AWSAccessKeyId=(AWS Access
         * Key ID)
  &amp;Signature=k%2FAU%2FKp13pjndwJ7rr1sZszy6MZMlOhRBCHx1ZaZFiw%3D


         * </queryrequest>
 <queryresponse>
  
&lt;AddPermissionResponse
         * xmlns="http://sns.amazonaws.com/doc/2010-03-31/"&gt;
  &lt;ResponseMetadata&gt;

         * &lt;RequestId&gt;6a213e4e-33a8-11df-9540-99d0768312d3&lt;/RequestId&gt;
 
         * &lt;/ResponseMetadata&gt;
&lt;/AddPermissionResponse&gt;
  

         * </queryresponse>
</examples>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AddPermissionOutcomeCallable AddPermissionCallable(const Model::AddPermissionRequest& request) const;

        /**
         * <p>Adds a statement to a topic's access control policy, granting access for the
         * specified AWS accounts to the specified actions.</p>
<examples>

         * <queryrequest>

  http://sns.us-east-1.amazonaws.com/
 
         * ?TopicArn=arn%3Aaws%3Asns%3Aus-east-1%3A123456789012%3AMy-Test
 
         * &amp;ActionName.member.1=Publish
  &amp;ActionName.member.2=GetTopicAttributes
 
         * &amp;Label=NewPermission
  &amp;AWSAccountId.member.1=987654321000
 
         * &amp;AWSAccountId.member.2=876543210000
  &amp;Action=AddPermission
 
         * &amp;SignatureVersion=2
  &amp;SignatureMethod=HmacSHA256
 
         * &amp;Timestamp=2010-03-31T12%3A00%3A00.000Z
  &amp;AWSAccessKeyId=(AWS Access
         * Key ID)
  &amp;Signature=k%2FAU%2FKp13pjndwJ7rr1sZszy6MZMlOhRBCHx1ZaZFiw%3D


         * </queryrequest>
 <queryresponse>
  
&lt;AddPermissionResponse
         * xmlns="http://sns.amazonaws.com/doc/2010-03-31/"&gt;
  &lt;ResponseMetadata&gt;

         * &lt;RequestId&gt;6a213e4e-33a8-11df-9540-99d0768312d3&lt;/RequestId&gt;
 
         * &lt;/ResponseMetadata&gt;
&lt;/AddPermissionResponse&gt;
  

         * </queryresponse>
</examples>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AddPermissionAsync(const Model::AddPermissionRequest& request, const AddPermissionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Verifies an endpoint owner's intent to receive messages by validating
     
         * the token sent to the endpoint by an earlier <code>Subscribe</code> action. If
         * the
      token is valid, the action creates a new subscription and returns its

         * Amazon Resource Name (ARN). This call requires an AWS signature only when the
         * <code>AuthenticateOnUnsubscribe</code> flag is set to "true".</p>
<examples>

         * <queryrequest>

  https://sns.us-east-1.amazonaws.com/
 
         * ?Action=ConfirmSubscription
 
         * &amp;TopicArn=arn:aws:sns:us-east-1:123456789012:My-Topic
 
         * &amp;Token=51b2ff3edb475b7d91550e0ab6edf0c1de2a34e6ebaf6
  
         * c2262a001bcb7e051c43aa00022ceecce70bd2a67b2042da8d8
  
         * eb47fef7a4e4e942d23e7fa56146b9ee35da040b4b8af564cc4
  
         * 184a7391c834cb75d75c22981f776ad1ce8805e9bab29da2329
  
         * 985337bb8095627907b46c8577c8440556b6f86582a95475802
  
         * 6f41fc62041c4b3f67b0f5921232b5dae5aaca1

 </queryrequest>
 <queryresponse>
 
         * 
&lt;ConfirmSubscriptionResponse
         * xmlns="http://sns.amazonaws.com/doc/2010-03-31/"&gt;
 
         * &lt;ConfirmSubscriptionResult&gt;
   
         * &lt;SubscriptionArn&gt;arn:aws:sns:us-east-1:123456789012:My-Topic:80289ba6-0fd4-4079-afb4-ce8c8260f0ca&lt;/SubscriptionArn&gt;

         * &lt;/ConfirmSubscriptionResult&gt;
  &lt;ResponseMetadata&gt;
   
         * &lt;RequestId&gt;7a50221f-3774-11df-a9b7-05d48da6f042&lt;/RequestId&gt;
 
         * &lt;/ResponseMetadata&gt;
&lt;/ConfirmSubscriptionResponse&gt;
  

         * </queryresponse>
</examples>
         */
        virtual Model::ConfirmSubscriptionOutcome ConfirmSubscription(const Model::ConfirmSubscriptionRequest& request) const;

        /**
         * <p>Verifies an endpoint owner's intent to receive messages by validating
     
         * the token sent to the endpoint by an earlier <code>Subscribe</code> action. If
         * the
      token is valid, the action creates a new subscription and returns its

         * Amazon Resource Name (ARN). This call requires an AWS signature only when the
         * <code>AuthenticateOnUnsubscribe</code> flag is set to "true".</p>
<examples>

         * <queryrequest>

  https://sns.us-east-1.amazonaws.com/
 
         * ?Action=ConfirmSubscription
 
         * &amp;TopicArn=arn:aws:sns:us-east-1:123456789012:My-Topic
 
         * &amp;Token=51b2ff3edb475b7d91550e0ab6edf0c1de2a34e6ebaf6
  
         * c2262a001bcb7e051c43aa00022ceecce70bd2a67b2042da8d8
  
         * eb47fef7a4e4e942d23e7fa56146b9ee35da040b4b8af564cc4
  
         * 184a7391c834cb75d75c22981f776ad1ce8805e9bab29da2329
  
         * 985337bb8095627907b46c8577c8440556b6f86582a95475802
  
         * 6f41fc62041c4b3f67b0f5921232b5dae5aaca1

 </queryrequest>
 <queryresponse>
 
         * 
&lt;ConfirmSubscriptionResponse
         * xmlns="http://sns.amazonaws.com/doc/2010-03-31/"&gt;
 
         * &lt;ConfirmSubscriptionResult&gt;
   
         * &lt;SubscriptionArn&gt;arn:aws:sns:us-east-1:123456789012:My-Topic:80289ba6-0fd4-4079-afb4-ce8c8260f0ca&lt;/SubscriptionArn&gt;

         * &lt;/ConfirmSubscriptionResult&gt;
  &lt;ResponseMetadata&gt;
   
         * &lt;RequestId&gt;7a50221f-3774-11df-a9b7-05d48da6f042&lt;/RequestId&gt;
 
         * &lt;/ResponseMetadata&gt;
&lt;/ConfirmSubscriptionResponse&gt;
  

         * </queryresponse>
</examples>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ConfirmSubscriptionOutcomeCallable ConfirmSubscriptionCallable(const Model::ConfirmSubscriptionRequest& request) const;

        /**
         * <p>Verifies an endpoint owner's intent to receive messages by validating
     
         * the token sent to the endpoint by an earlier <code>Subscribe</code> action. If
         * the
      token is valid, the action creates a new subscription and returns its

         * Amazon Resource Name (ARN). This call requires an AWS signature only when the
         * <code>AuthenticateOnUnsubscribe</code> flag is set to "true".</p>
<examples>

         * <queryrequest>

  https://sns.us-east-1.amazonaws.com/
 
         * ?Action=ConfirmSubscription
 
         * &amp;TopicArn=arn:aws:sns:us-east-1:123456789012:My-Topic
 
         * &amp;Token=51b2ff3edb475b7d91550e0ab6edf0c1de2a34e6ebaf6
  
         * c2262a001bcb7e051c43aa00022ceecce70bd2a67b2042da8d8
  
         * eb47fef7a4e4e942d23e7fa56146b9ee35da040b4b8af564cc4
  
         * 184a7391c834cb75d75c22981f776ad1ce8805e9bab29da2329
  
         * 985337bb8095627907b46c8577c8440556b6f86582a95475802
  
         * 6f41fc62041c4b3f67b0f5921232b5dae5aaca1

 </queryrequest>
 <queryresponse>
 
         * 
&lt;ConfirmSubscriptionResponse
         * xmlns="http://sns.amazonaws.com/doc/2010-03-31/"&gt;
 
         * &lt;ConfirmSubscriptionResult&gt;
   
         * &lt;SubscriptionArn&gt;arn:aws:sns:us-east-1:123456789012:My-Topic:80289ba6-0fd4-4079-afb4-ce8c8260f0ca&lt;/SubscriptionArn&gt;

         * &lt;/ConfirmSubscriptionResult&gt;
  &lt;ResponseMetadata&gt;
   
         * &lt;RequestId&gt;7a50221f-3774-11df-a9b7-05d48da6f042&lt;/RequestId&gt;
 
         * &lt;/ResponseMetadata&gt;
&lt;/ConfirmSubscriptionResponse&gt;
  

         * </queryresponse>
</examples>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ConfirmSubscriptionAsync(const Model::ConfirmSubscriptionRequest& request, const ConfirmSubscriptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a platform application object for one of the supported push
         * notification services, 
      such as APNS and GCM, to which devices and mobile
         * apps may register. You must specify PlatformPrincipal and PlatformCredential
         * attributes when using 
      the <code>CreatePlatformApplication</code> action.
         * The PlatformPrincipal is received from the notification service. For
         * APNS/APNS_SANDBOX, PlatformPrincipal is "SSL certificate". 
      For GCM,
         * PlatformPrincipal is not applicable. For ADM, PlatformPrincipal is "client id".
         * The PlatformCredential is also received from the notification service. 
     
         * For APNS/APNS_SANDBOX, PlatformCredential is "private key". For GCM,
         * PlatformCredential is "API key". For ADM, PlatformCredential is "client secret".
         * 
      The PlatformApplicationArn that is returned when using
         * <code>CreatePlatformApplication</code> is then used as an attribute for the
         * <code>CreatePlatformEndpoint</code> action.
      For more information, see <a
         * href="http://docs.aws.amazon.com/sns/latest/dg/SNSMobilePush.html">Using Amazon
         * SNS Mobile Push Notifications</a>. 
    </p>
    
    <examples>
     
         * <queryrequest>
        
POST http://sns.us-west-2.amazonaws.com/
         * HTTP/1.1
...
Attributes.entry.2.key=PlatformPrincipal
&amp;SignatureMethod=HmacSHA256
&amp;Attributes.entry.1.value=AIzaSyClE2lcV2zEKTLYYo645zfk2jhQPFeyxDo
&amp;Attributes.entry.2.value=There+is+no+principal+for+GCM
&amp;AWSAccessKeyId=AKIAIOSFODNN7EXAMPLE
&amp;Signature=82sHzg1Wfbgisw3i%2BHA2OgBmRktsqUKFinknkq3u%2FQ4%3D
&amp;Timestamp=2013-07-01T15%3A49%3A50.354Z
&amp;Name=gcmpushapp
&amp;Attributes.entry.1.key=PlatformCredential
&amp;Action=CreatePlatformApplication
&amp;Version=2010-03-31
&amp;SignatureVersion=2
&amp;Platform=GCM


         * </queryrequest>
      <queryresponse>
        
HTTP/1.1 200
         * OK
...
&lt;CreatePlatformApplicationResponse
         * xmlns="http://sns.amazonaws.com/doc/2010-03-31/"&gt;
 
         * &lt;CreatePlatformApplicationResult&gt;
   
         * &lt;PlatformApplicationArn&gt;arn:aws:sns:us-west-2:123456789012:app/GCM/gcmpushapp&lt;/PlatformApplicationArn&gt;

         * &lt;/CreatePlatformApplicationResult&gt;
  &lt;ResponseMetadata&gt;
   
         * &lt;RequestId&gt;b6f0e78b-e9d4-5a0e-b973-adc04e8a4ff9&lt;/RequestId&gt;
 
         * &lt;/ResponseMetadata&gt;
&lt;/CreatePlatformApplicationResponse&gt;

     
         * </queryresponse>
    </examples>
         */
        virtual Model::CreatePlatformApplicationOutcome CreatePlatformApplication(const Model::CreatePlatformApplicationRequest& request) const;

        /**
         * <p>Creates a platform application object for one of the supported push
         * notification services, 
      such as APNS and GCM, to which devices and mobile
         * apps may register. You must specify PlatformPrincipal and PlatformCredential
         * attributes when using 
      the <code>CreatePlatformApplication</code> action.
         * The PlatformPrincipal is received from the notification service. For
         * APNS/APNS_SANDBOX, PlatformPrincipal is "SSL certificate". 
      For GCM,
         * PlatformPrincipal is not applicable. For ADM, PlatformPrincipal is "client id".
         * The PlatformCredential is also received from the notification service. 
     
         * For APNS/APNS_SANDBOX, PlatformCredential is "private key". For GCM,
         * PlatformCredential is "API key". For ADM, PlatformCredential is "client secret".
         * 
      The PlatformApplicationArn that is returned when using
         * <code>CreatePlatformApplication</code> is then used as an attribute for the
         * <code>CreatePlatformEndpoint</code> action.
      For more information, see <a
         * href="http://docs.aws.amazon.com/sns/latest/dg/SNSMobilePush.html">Using Amazon
         * SNS Mobile Push Notifications</a>. 
    </p>
    
    <examples>
     
         * <queryrequest>
        
POST http://sns.us-west-2.amazonaws.com/
         * HTTP/1.1
...
Attributes.entry.2.key=PlatformPrincipal
&amp;SignatureMethod=HmacSHA256
&amp;Attributes.entry.1.value=AIzaSyClE2lcV2zEKTLYYo645zfk2jhQPFeyxDo
&amp;Attributes.entry.2.value=There+is+no+principal+for+GCM
&amp;AWSAccessKeyId=AKIAIOSFODNN7EXAMPLE
&amp;Signature=82sHzg1Wfbgisw3i%2BHA2OgBmRktsqUKFinknkq3u%2FQ4%3D
&amp;Timestamp=2013-07-01T15%3A49%3A50.354Z
&amp;Name=gcmpushapp
&amp;Attributes.entry.1.key=PlatformCredential
&amp;Action=CreatePlatformApplication
&amp;Version=2010-03-31
&amp;SignatureVersion=2
&amp;Platform=GCM


         * </queryrequest>
      <queryresponse>
        
HTTP/1.1 200
         * OK
...
&lt;CreatePlatformApplicationResponse
         * xmlns="http://sns.amazonaws.com/doc/2010-03-31/"&gt;
 
         * &lt;CreatePlatformApplicationResult&gt;
   
         * &lt;PlatformApplicationArn&gt;arn:aws:sns:us-west-2:123456789012:app/GCM/gcmpushapp&lt;/PlatformApplicationArn&gt;

         * &lt;/CreatePlatformApplicationResult&gt;
  &lt;ResponseMetadata&gt;
   
         * &lt;RequestId&gt;b6f0e78b-e9d4-5a0e-b973-adc04e8a4ff9&lt;/RequestId&gt;
 
         * &lt;/ResponseMetadata&gt;
&lt;/CreatePlatformApplicationResponse&gt;

     
         * </queryresponse>
    </examples>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreatePlatformApplicationOutcomeCallable CreatePlatformApplicationCallable(const Model::CreatePlatformApplicationRequest& request) const;

        /**
         * <p>Creates a platform application object for one of the supported push
         * notification services, 
      such as APNS and GCM, to which devices and mobile
         * apps may register. You must specify PlatformPrincipal and PlatformCredential
         * attributes when using 
      the <code>CreatePlatformApplication</code> action.
         * The PlatformPrincipal is received from the notification service. For
         * APNS/APNS_SANDBOX, PlatformPrincipal is "SSL certificate". 
      For GCM,
         * PlatformPrincipal is not applicable. For ADM, PlatformPrincipal is "client id".
         * The PlatformCredential is also received from the notification service. 
     
         * For APNS/APNS_SANDBOX, PlatformCredential is "private key". For GCM,
         * PlatformCredential is "API key". For ADM, PlatformCredential is "client secret".
         * 
      The PlatformApplicationArn that is returned when using
         * <code>CreatePlatformApplication</code> is then used as an attribute for the
         * <code>CreatePlatformEndpoint</code> action.
      For more information, see <a
         * href="http://docs.aws.amazon.com/sns/latest/dg/SNSMobilePush.html">Using Amazon
         * SNS Mobile Push Notifications</a>. 
    </p>
    
    <examples>
     
         * <queryrequest>
        
POST http://sns.us-west-2.amazonaws.com/
         * HTTP/1.1
...
Attributes.entry.2.key=PlatformPrincipal
&amp;SignatureMethod=HmacSHA256
&amp;Attributes.entry.1.value=AIzaSyClE2lcV2zEKTLYYo645zfk2jhQPFeyxDo
&amp;Attributes.entry.2.value=There+is+no+principal+for+GCM
&amp;AWSAccessKeyId=AKIAIOSFODNN7EXAMPLE
&amp;Signature=82sHzg1Wfbgisw3i%2BHA2OgBmRktsqUKFinknkq3u%2FQ4%3D
&amp;Timestamp=2013-07-01T15%3A49%3A50.354Z
&amp;Name=gcmpushapp
&amp;Attributes.entry.1.key=PlatformCredential
&amp;Action=CreatePlatformApplication
&amp;Version=2010-03-31
&amp;SignatureVersion=2
&amp;Platform=GCM


         * </queryrequest>
      <queryresponse>
        
HTTP/1.1 200
         * OK
...
&lt;CreatePlatformApplicationResponse
         * xmlns="http://sns.amazonaws.com/doc/2010-03-31/"&gt;
 
         * &lt;CreatePlatformApplicationResult&gt;
   
         * &lt;PlatformApplicationArn&gt;arn:aws:sns:us-west-2:123456789012:app/GCM/gcmpushapp&lt;/PlatformApplicationArn&gt;

         * &lt;/CreatePlatformApplicationResult&gt;
  &lt;ResponseMetadata&gt;
   
         * &lt;RequestId&gt;b6f0e78b-e9d4-5a0e-b973-adc04e8a4ff9&lt;/RequestId&gt;
 
         * &lt;/ResponseMetadata&gt;
&lt;/CreatePlatformApplicationResponse&gt;

     
         * </queryresponse>
    </examples>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreatePlatformApplicationAsync(const Model::CreatePlatformApplicationRequest& request, const CreatePlatformApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates an endpoint for a device and mobile app on one of the supported push
         * notification services, such as GCM and APNS. 
     
         * <code>CreatePlatformEndpoint</code> requires the PlatformApplicationArn that is
         * returned from <code>CreatePlatformApplication</code>. The EndpointArn that is
  
         * returned when using <code>CreatePlatformEndpoint</code> can then be used by the
         * <code>Publish</code> action to send a message to a mobile app or by the
         * <code>Subscribe</code> 
      action for subscription to a topic. The
         * <code>CreatePlatformEndpoint</code> action is idempotent, so if the requester
         * already owns an endpoint with the same device token and attributes, 
      that
         * endpoint's ARN is returned without creating a new endpoint. 
      For more
         * information, see <a
         * href="http://docs.aws.amazon.com/sns/latest/dg/SNSMobilePush.html">Using Amazon
         * SNS Mobile Push Notifications</a>.
    </p>
    <p>When using
         * <code>CreatePlatformEndpoint</code> with Baidu, two attributes must be provided:
         * ChannelId and UserId. The token field must also contain the ChannelId. 
     
         * For more information, see <a
         * href="http://docs.aws.amazon.com/sns/latest/dg/SNSMobilePushBaiduEndpoint.html">Creating
         * an Amazon SNS Endpoint for Baidu</a>.      
    </p>
    <examples>
     
         * <queryrequest>
        
POST http://sns.us-west-2.amazonaws.com/
         * HTTP/1.1
...
PlatformApplicationArn=arn%3Aaws%3Asns%3Aus-west-2%3A123456789012%3Aapp%2FGCM%2Fgcmpushapp
&amp;Action=CreatePlatformEndpoint
&amp;SignatureMethod=HmacSHA256
&amp;CustomUserData=UserId%3D27576823
&amp;AWSAccessKeyId=AKIAIOSFODNN7EXAMPLE
&amp;Token=APA91bGi7fFachkC1xjlqT66VYEucGHochmf1VQAr9k...jsM0PKPxKhddCzx6paEsyay9Zn3D4wNUJb8m6HZrBEXAMPLE
&amp;SignatureVersion=2
&amp;Version=2010-03-31
&amp;Signature=Rg5vXBS6OfgPtWkt1u32p1w14uiGh%2BKOicvXNWTEz2w%3D
&amp;Timestamp=2013-07-01T15%3A49%3A50.598Z


         * </queryrequest>
      <queryresponse>
        
HTTP/1.1 200
         * OK
...
&lt;CreatePlatformEndpointResponse
         * xmlns="http://sns.amazonaws.com/doc/2010-03-31/"&gt;
 
         * &lt;CreatePlatformEndpointResult&gt;
   
         * &lt;EndpointArn&gt;arn:aws:sns:us-west-2:123456789012:endpoint/GCM/gcmpushapp/5e3e9847-3183-3f18-a7e8-671c3a57d4b3&lt;/EndpointArn&gt;

         * &lt;/CreatePlatformEndpointResult&gt;
  &lt;ResponseMetadata&gt;
   
         * &lt;RequestId&gt;6613341d-3e15-53f7-bf3c-7e56994ba278&lt;/RequestId&gt;
 
         * &lt;/ResponseMetadata&gt;
&lt;/CreatePlatformEndpointResponse&gt;

     
         * </queryresponse>
    </examples>
         */
        virtual Model::CreatePlatformEndpointOutcome CreatePlatformEndpoint(const Model::CreatePlatformEndpointRequest& request) const;

        /**
         * <p>Creates an endpoint for a device and mobile app on one of the supported push
         * notification services, such as GCM and APNS. 
     
         * <code>CreatePlatformEndpoint</code> requires the PlatformApplicationArn that is
         * returned from <code>CreatePlatformApplication</code>. The EndpointArn that is
  
         * returned when using <code>CreatePlatformEndpoint</code> can then be used by the
         * <code>Publish</code> action to send a message to a mobile app or by the
         * <code>Subscribe</code> 
      action for subscription to a topic. The
         * <code>CreatePlatformEndpoint</code> action is idempotent, so if the requester
         * already owns an endpoint with the same device token and attributes, 
      that
         * endpoint's ARN is returned without creating a new endpoint. 
      For more
         * information, see <a
         * href="http://docs.aws.amazon.com/sns/latest/dg/SNSMobilePush.html">Using Amazon
         * SNS Mobile Push Notifications</a>.
    </p>
    <p>When using
         * <code>CreatePlatformEndpoint</code> with Baidu, two attributes must be provided:
         * ChannelId and UserId. The token field must also contain the ChannelId. 
     
         * For more information, see <a
         * href="http://docs.aws.amazon.com/sns/latest/dg/SNSMobilePushBaiduEndpoint.html">Creating
         * an Amazon SNS Endpoint for Baidu</a>.      
    </p>
    <examples>
     
         * <queryrequest>
        
POST http://sns.us-west-2.amazonaws.com/
         * HTTP/1.1
...
PlatformApplicationArn=arn%3Aaws%3Asns%3Aus-west-2%3A123456789012%3Aapp%2FGCM%2Fgcmpushapp
&amp;Action=CreatePlatformEndpoint
&amp;SignatureMethod=HmacSHA256
&amp;CustomUserData=UserId%3D27576823
&amp;AWSAccessKeyId=AKIAIOSFODNN7EXAMPLE
&amp;Token=APA91bGi7fFachkC1xjlqT66VYEucGHochmf1VQAr9k...jsM0PKPxKhddCzx6paEsyay9Zn3D4wNUJb8m6HZrBEXAMPLE
&amp;SignatureVersion=2
&amp;Version=2010-03-31
&amp;Signature=Rg5vXBS6OfgPtWkt1u32p1w14uiGh%2BKOicvXNWTEz2w%3D
&amp;Timestamp=2013-07-01T15%3A49%3A50.598Z


         * </queryrequest>
      <queryresponse>
        
HTTP/1.1 200
         * OK
...
&lt;CreatePlatformEndpointResponse
         * xmlns="http://sns.amazonaws.com/doc/2010-03-31/"&gt;
 
         * &lt;CreatePlatformEndpointResult&gt;
   
         * &lt;EndpointArn&gt;arn:aws:sns:us-west-2:123456789012:endpoint/GCM/gcmpushapp/5e3e9847-3183-3f18-a7e8-671c3a57d4b3&lt;/EndpointArn&gt;

         * &lt;/CreatePlatformEndpointResult&gt;
  &lt;ResponseMetadata&gt;
   
         * &lt;RequestId&gt;6613341d-3e15-53f7-bf3c-7e56994ba278&lt;/RequestId&gt;
 
         * &lt;/ResponseMetadata&gt;
&lt;/CreatePlatformEndpointResponse&gt;

     
         * </queryresponse>
    </examples>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreatePlatformEndpointOutcomeCallable CreatePlatformEndpointCallable(const Model::CreatePlatformEndpointRequest& request) const;

        /**
         * <p>Creates an endpoint for a device and mobile app on one of the supported push
         * notification services, such as GCM and APNS. 
     
         * <code>CreatePlatformEndpoint</code> requires the PlatformApplicationArn that is
         * returned from <code>CreatePlatformApplication</code>. The EndpointArn that is
  
         * returned when using <code>CreatePlatformEndpoint</code> can then be used by the
         * <code>Publish</code> action to send a message to a mobile app or by the
         * <code>Subscribe</code> 
      action for subscription to a topic. The
         * <code>CreatePlatformEndpoint</code> action is idempotent, so if the requester
         * already owns an endpoint with the same device token and attributes, 
      that
         * endpoint's ARN is returned without creating a new endpoint. 
      For more
         * information, see <a
         * href="http://docs.aws.amazon.com/sns/latest/dg/SNSMobilePush.html">Using Amazon
         * SNS Mobile Push Notifications</a>.
    </p>
    <p>When using
         * <code>CreatePlatformEndpoint</code> with Baidu, two attributes must be provided:
         * ChannelId and UserId. The token field must also contain the ChannelId. 
     
         * For more information, see <a
         * href="http://docs.aws.amazon.com/sns/latest/dg/SNSMobilePushBaiduEndpoint.html">Creating
         * an Amazon SNS Endpoint for Baidu</a>.      
    </p>
    <examples>
     
         * <queryrequest>
        
POST http://sns.us-west-2.amazonaws.com/
         * HTTP/1.1
...
PlatformApplicationArn=arn%3Aaws%3Asns%3Aus-west-2%3A123456789012%3Aapp%2FGCM%2Fgcmpushapp
&amp;Action=CreatePlatformEndpoint
&amp;SignatureMethod=HmacSHA256
&amp;CustomUserData=UserId%3D27576823
&amp;AWSAccessKeyId=AKIAIOSFODNN7EXAMPLE
&amp;Token=APA91bGi7fFachkC1xjlqT66VYEucGHochmf1VQAr9k...jsM0PKPxKhddCzx6paEsyay9Zn3D4wNUJb8m6HZrBEXAMPLE
&amp;SignatureVersion=2
&amp;Version=2010-03-31
&amp;Signature=Rg5vXBS6OfgPtWkt1u32p1w14uiGh%2BKOicvXNWTEz2w%3D
&amp;Timestamp=2013-07-01T15%3A49%3A50.598Z


         * </queryrequest>
      <queryresponse>
        
HTTP/1.1 200
         * OK
...
&lt;CreatePlatformEndpointResponse
         * xmlns="http://sns.amazonaws.com/doc/2010-03-31/"&gt;
 
         * &lt;CreatePlatformEndpointResult&gt;
   
         * &lt;EndpointArn&gt;arn:aws:sns:us-west-2:123456789012:endpoint/GCM/gcmpushapp/5e3e9847-3183-3f18-a7e8-671c3a57d4b3&lt;/EndpointArn&gt;

         * &lt;/CreatePlatformEndpointResult&gt;
  &lt;ResponseMetadata&gt;
   
         * &lt;RequestId&gt;6613341d-3e15-53f7-bf3c-7e56994ba278&lt;/RequestId&gt;
 
         * &lt;/ResponseMetadata&gt;
&lt;/CreatePlatformEndpointResponse&gt;

     
         * </queryresponse>
    </examples>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreatePlatformEndpointAsync(const Model::CreatePlatformEndpointRequest& request, const CreatePlatformEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a topic to which notifications can be published. Users can create
   
         * at most 3000 topics. For more information, see <a
         * href="http://aws.amazon.com/sns/">http://aws.amazon.com/sns</a>. 
     This
         * action is idempotent, so if the requester already owns a topic with the
         * specified name, that topic's ARN is 
     returned without creating a new
         * topic.</p>
<examples>
 <queryrequest>

  http://sns.us-east-1.amazonaws.com/
 
         * ?Name=My-Topic
  &amp;Action=CreateTopic
  &amp;SignatureVersion=2
 
         * &amp;SignatureMethod=HmacSHA256
  &amp;Timestamp=2010-03-31T12%3A00%3A00.000Z
 
         * &amp;AWSAccessKeyId=(AWS Access Key ID)
 
         * &amp;Signature=gfzIF53exFVdpSNb8AiwN3Lv%2FNYXh6S%2Br3yySK70oX4%3D


         * </queryrequest>
 <queryresponse>
  
   &lt;CreateTopicResponse
         * xmlns="http://sns.amazonaws.com/doc/2010-03-31/"&gt;
    
         * &lt;CreateTopicResult&gt;
      
         * &lt;TopicArn&gt;arn:aws:sns:us-east-1:123456789012:My-Topic&lt;/TopicArn&gt;
   
         * &lt;/CreateTopicResult&gt;
     &lt;ResponseMetadata&gt;
      
         * &lt;RequestId&gt;a8dec8b3-33a4-11df-8963-01868b7c937a&lt;/RequestId&gt;
    
         * &lt;/ResponseMetadata&gt;
   &lt;/CreateTopicResponse&gt;
  

         * </queryresponse>
</examples>
         */
        virtual Model::CreateTopicOutcome CreateTopic(const Model::CreateTopicRequest& request) const;

        /**
         * <p>Creates a topic to which notifications can be published. Users can create
   
         * at most 3000 topics. For more information, see <a
         * href="http://aws.amazon.com/sns/">http://aws.amazon.com/sns</a>. 
     This
         * action is idempotent, so if the requester already owns a topic with the
         * specified name, that topic's ARN is 
     returned without creating a new
         * topic.</p>
<examples>
 <queryrequest>

  http://sns.us-east-1.amazonaws.com/
 
         * ?Name=My-Topic
  &amp;Action=CreateTopic
  &amp;SignatureVersion=2
 
         * &amp;SignatureMethod=HmacSHA256
  &amp;Timestamp=2010-03-31T12%3A00%3A00.000Z
 
         * &amp;AWSAccessKeyId=(AWS Access Key ID)
 
         * &amp;Signature=gfzIF53exFVdpSNb8AiwN3Lv%2FNYXh6S%2Br3yySK70oX4%3D


         * </queryrequest>
 <queryresponse>
  
   &lt;CreateTopicResponse
         * xmlns="http://sns.amazonaws.com/doc/2010-03-31/"&gt;
    
         * &lt;CreateTopicResult&gt;
      
         * &lt;TopicArn&gt;arn:aws:sns:us-east-1:123456789012:My-Topic&lt;/TopicArn&gt;
   
         * &lt;/CreateTopicResult&gt;
     &lt;ResponseMetadata&gt;
      
         * &lt;RequestId&gt;a8dec8b3-33a4-11df-8963-01868b7c937a&lt;/RequestId&gt;
    
         * &lt;/ResponseMetadata&gt;
   &lt;/CreateTopicResponse&gt;
  

         * </queryresponse>
</examples>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateTopicOutcomeCallable CreateTopicCallable(const Model::CreateTopicRequest& request) const;

        /**
         * <p>Creates a topic to which notifications can be published. Users can create
   
         * at most 3000 topics. For more information, see <a
         * href="http://aws.amazon.com/sns/">http://aws.amazon.com/sns</a>. 
     This
         * action is idempotent, so if the requester already owns a topic with the
         * specified name, that topic's ARN is 
     returned without creating a new
         * topic.</p>
<examples>
 <queryrequest>

  http://sns.us-east-1.amazonaws.com/
 
         * ?Name=My-Topic
  &amp;Action=CreateTopic
  &amp;SignatureVersion=2
 
         * &amp;SignatureMethod=HmacSHA256
  &amp;Timestamp=2010-03-31T12%3A00%3A00.000Z
 
         * &amp;AWSAccessKeyId=(AWS Access Key ID)
 
         * &amp;Signature=gfzIF53exFVdpSNb8AiwN3Lv%2FNYXh6S%2Br3yySK70oX4%3D


         * </queryrequest>
 <queryresponse>
  
   &lt;CreateTopicResponse
         * xmlns="http://sns.amazonaws.com/doc/2010-03-31/"&gt;
    
         * &lt;CreateTopicResult&gt;
      
         * &lt;TopicArn&gt;arn:aws:sns:us-east-1:123456789012:My-Topic&lt;/TopicArn&gt;
   
         * &lt;/CreateTopicResult&gt;
     &lt;ResponseMetadata&gt;
      
         * &lt;RequestId&gt;a8dec8b3-33a4-11df-8963-01868b7c937a&lt;/RequestId&gt;
    
         * &lt;/ResponseMetadata&gt;
   &lt;/CreateTopicResponse&gt;
  

         * </queryresponse>
</examples>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateTopicAsync(const Model::CreateTopicRequest& request, const CreateTopicResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the endpoint from Amazon SNS. This action is idempotent. 
      For
         * more information, see <a
         * href="http://docs.aws.amazon.com/sns/latest/dg/SNSMobilePush.html">Using Amazon
         * SNS Mobile Push Notifications</a>.
    </p>    
    <examples>
     
         * <queryrequest>
        
POST http://sns.us-west-2.amazonaws.com/
         * HTTP/1.1
...
Action=DeleteEndpoint
&amp;SignatureMethod=HmacSHA256
&amp;AWSAccessKeyId=AKIAIOSFODNN7EXAMPLE
&amp;EndpointArn=arn%3Aaws%3Asns%3Aus-west-2%3A123456789012%3Aendpoint%2FGCM%2Fgcmpushapp%2F5e3e9847-3183-3f18-a7e8-671c3a57d4b3
&amp;SignatureVersion=2
&amp;Version=2010-03-31
&amp;Signature=LIc6GI3JbNhmHBEDmSxzZp648XPe5CMeFny%2BTQFtomQ%3D
&amp;Timestamp=2013-07-01T23%3A00%3A12.456Z


         * </queryrequest>
      <queryresponse>
        
HTTP/1.1 200
         * OK
...
&lt;DeleteEndpointResponse
         * xmlns="http://sns.amazonaws.com/doc/2010-03-31/"&gt;
  &lt;ResponseMetadata&gt;

         * &lt;RequestId&gt;c1d2b191-353c-5a5f-8969-fbdd3900afa8&lt;/RequestId&gt;
 
         * &lt;/ResponseMetadata&gt;
&lt;/DeleteEndpointResponse&gt;

     
         * </queryresponse>
    </examples>
         */
        virtual Model::DeleteEndpointOutcome DeleteEndpoint(const Model::DeleteEndpointRequest& request) const;

        /**
         * <p>Deletes the endpoint from Amazon SNS. This action is idempotent. 
      For
         * more information, see <a
         * href="http://docs.aws.amazon.com/sns/latest/dg/SNSMobilePush.html">Using Amazon
         * SNS Mobile Push Notifications</a>.
    </p>    
    <examples>
     
         * <queryrequest>
        
POST http://sns.us-west-2.amazonaws.com/
         * HTTP/1.1
...
Action=DeleteEndpoint
&amp;SignatureMethod=HmacSHA256
&amp;AWSAccessKeyId=AKIAIOSFODNN7EXAMPLE
&amp;EndpointArn=arn%3Aaws%3Asns%3Aus-west-2%3A123456789012%3Aendpoint%2FGCM%2Fgcmpushapp%2F5e3e9847-3183-3f18-a7e8-671c3a57d4b3
&amp;SignatureVersion=2
&amp;Version=2010-03-31
&amp;Signature=LIc6GI3JbNhmHBEDmSxzZp648XPe5CMeFny%2BTQFtomQ%3D
&amp;Timestamp=2013-07-01T23%3A00%3A12.456Z


         * </queryrequest>
      <queryresponse>
        
HTTP/1.1 200
         * OK
...
&lt;DeleteEndpointResponse
         * xmlns="http://sns.amazonaws.com/doc/2010-03-31/"&gt;
  &lt;ResponseMetadata&gt;

         * &lt;RequestId&gt;c1d2b191-353c-5a5f-8969-fbdd3900afa8&lt;/RequestId&gt;
 
         * &lt;/ResponseMetadata&gt;
&lt;/DeleteEndpointResponse&gt;

     
         * </queryresponse>
    </examples>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteEndpointOutcomeCallable DeleteEndpointCallable(const Model::DeleteEndpointRequest& request) const;

        /**
         * <p>Deletes the endpoint from Amazon SNS. This action is idempotent. 
      For
         * more information, see <a
         * href="http://docs.aws.amazon.com/sns/latest/dg/SNSMobilePush.html">Using Amazon
         * SNS Mobile Push Notifications</a>.
    </p>    
    <examples>
     
         * <queryrequest>
        
POST http://sns.us-west-2.amazonaws.com/
         * HTTP/1.1
...
Action=DeleteEndpoint
&amp;SignatureMethod=HmacSHA256
&amp;AWSAccessKeyId=AKIAIOSFODNN7EXAMPLE
&amp;EndpointArn=arn%3Aaws%3Asns%3Aus-west-2%3A123456789012%3Aendpoint%2FGCM%2Fgcmpushapp%2F5e3e9847-3183-3f18-a7e8-671c3a57d4b3
&amp;SignatureVersion=2
&amp;Version=2010-03-31
&amp;Signature=LIc6GI3JbNhmHBEDmSxzZp648XPe5CMeFny%2BTQFtomQ%3D
&amp;Timestamp=2013-07-01T23%3A00%3A12.456Z


         * </queryrequest>
      <queryresponse>
        
HTTP/1.1 200
         * OK
...
&lt;DeleteEndpointResponse
         * xmlns="http://sns.amazonaws.com/doc/2010-03-31/"&gt;
  &lt;ResponseMetadata&gt;

         * &lt;RequestId&gt;c1d2b191-353c-5a5f-8969-fbdd3900afa8&lt;/RequestId&gt;
 
         * &lt;/ResponseMetadata&gt;
&lt;/DeleteEndpointResponse&gt;

     
         * </queryresponse>
    </examples>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteEndpointAsync(const Model::DeleteEndpointRequest& request, const DeleteEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a platform application object for one of the supported push
         * notification services, 
      such as APNS and GCM.
      For more information,
         * see <a href="http://docs.aws.amazon.com/sns/latest/dg/SNSMobilePush.html">Using
         * Amazon SNS Mobile Push Notifications</a>.
    </p>
    <examples>
     
         * <queryrequest>
        
POST http://sns.us-west-2.amazonaws.com/
         * HTTP/1.1
...
PlatformApplicationArn=arn%3Aaws%3Asns%3Aus-west-2%3A123456789012%3Aapp%2FGCM%2Fgcmpushapp
&amp;Action=DeletePlatformApplication
&amp;SignatureMethod=HmacSHA256
&amp;AWSAccessKeyId=AKIAIOSFODNN7EXAMPLE
&amp;SignatureVersion=2
&amp;Version=2010-03-31
&amp;Signature=Mh7X%2BQo%2BGpcm5B1IpkovBaRiJCJOqvFlIOYzL62SGrg%3D
&amp;Timestamp=2013-07-01T23%3A02%3A03.872Z


         * </queryrequest>
      <queryresponse>
        
HTTP/1.1 200
         * OK
...
&lt;DeletePlatformApplicationResponse
         * xmlns="http://sns.amazonaws.com/doc/2010-03-31/"&gt;
  &lt;ResponseMetadata&gt;

         * &lt;RequestId&gt;097dac18-7a77-5823-a8dd-e65476dcb037&lt;/RequestId&gt;
 
         * &lt;/ResponseMetadata&gt;
&lt;/DeletePlatformApplicationResponse&gt;

     
         * </queryresponse>
    </examples>
         */
        virtual Model::DeletePlatformApplicationOutcome DeletePlatformApplication(const Model::DeletePlatformApplicationRequest& request) const;

        /**
         * <p>Deletes a platform application object for one of the supported push
         * notification services, 
      such as APNS and GCM.
      For more information,
         * see <a href="http://docs.aws.amazon.com/sns/latest/dg/SNSMobilePush.html">Using
         * Amazon SNS Mobile Push Notifications</a>.
    </p>
    <examples>
     
         * <queryrequest>
        
POST http://sns.us-west-2.amazonaws.com/
         * HTTP/1.1
...
PlatformApplicationArn=arn%3Aaws%3Asns%3Aus-west-2%3A123456789012%3Aapp%2FGCM%2Fgcmpushapp
&amp;Action=DeletePlatformApplication
&amp;SignatureMethod=HmacSHA256
&amp;AWSAccessKeyId=AKIAIOSFODNN7EXAMPLE
&amp;SignatureVersion=2
&amp;Version=2010-03-31
&amp;Signature=Mh7X%2BQo%2BGpcm5B1IpkovBaRiJCJOqvFlIOYzL62SGrg%3D
&amp;Timestamp=2013-07-01T23%3A02%3A03.872Z


         * </queryrequest>
      <queryresponse>
        
HTTP/1.1 200
         * OK
...
&lt;DeletePlatformApplicationResponse
         * xmlns="http://sns.amazonaws.com/doc/2010-03-31/"&gt;
  &lt;ResponseMetadata&gt;

         * &lt;RequestId&gt;097dac18-7a77-5823-a8dd-e65476dcb037&lt;/RequestId&gt;
 
         * &lt;/ResponseMetadata&gt;
&lt;/DeletePlatformApplicationResponse&gt;

     
         * </queryresponse>
    </examples>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeletePlatformApplicationOutcomeCallable DeletePlatformApplicationCallable(const Model::DeletePlatformApplicationRequest& request) const;

        /**
         * <p>Deletes a platform application object for one of the supported push
         * notification services, 
      such as APNS and GCM.
      For more information,
         * see <a href="http://docs.aws.amazon.com/sns/latest/dg/SNSMobilePush.html">Using
         * Amazon SNS Mobile Push Notifications</a>.
    </p>
    <examples>
     
         * <queryrequest>
        
POST http://sns.us-west-2.amazonaws.com/
         * HTTP/1.1
...
PlatformApplicationArn=arn%3Aaws%3Asns%3Aus-west-2%3A123456789012%3Aapp%2FGCM%2Fgcmpushapp
&amp;Action=DeletePlatformApplication
&amp;SignatureMethod=HmacSHA256
&amp;AWSAccessKeyId=AKIAIOSFODNN7EXAMPLE
&amp;SignatureVersion=2
&amp;Version=2010-03-31
&amp;Signature=Mh7X%2BQo%2BGpcm5B1IpkovBaRiJCJOqvFlIOYzL62SGrg%3D
&amp;Timestamp=2013-07-01T23%3A02%3A03.872Z


         * </queryrequest>
      <queryresponse>
        
HTTP/1.1 200
         * OK
...
&lt;DeletePlatformApplicationResponse
         * xmlns="http://sns.amazonaws.com/doc/2010-03-31/"&gt;
  &lt;ResponseMetadata&gt;

         * &lt;RequestId&gt;097dac18-7a77-5823-a8dd-e65476dcb037&lt;/RequestId&gt;
 
         * &lt;/ResponseMetadata&gt;
&lt;/DeletePlatformApplicationResponse&gt;

     
         * </queryresponse>
    </examples>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeletePlatformApplicationAsync(const Model::DeletePlatformApplicationRequest& request, const DeletePlatformApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a topic and all its subscriptions. Deleting a topic might
     
         * prevent some messages previously sent to the topic from being delivered to
     
         * subscribers. This action is idempotent, so deleting a topic that does not
     
         * exist does not result in an error.</p>
<examples>
<queryrequest>

 
         * http://sns.us-east-1.amazonaws.com/
 
         * &amp;TopicArn=arn%3Aaws%3Asns%3Aus-east-1%3A123456789012%3AMy-Topic
 
         * &amp;Action=DeleteTopic
  &amp;SignatureVersion=2
 
         * &amp;SignatureMethod=HmacSHA256
  &amp;Timestamp=2010-03-31T12%3A00%3A00.000Z
 
         * &amp;AWSAccessKeyId=(AWS Access Key Id)
 
         * &amp;Signature=mQA3nJI%2BcmAIY7r8HCArGElSqPX5JG4UGzF4yo0RygE%3D

</queryrequest>
<queryresponse>

&lt;DeleteTopicResponse
         * xmlns="http://sns.amazonaws.com/doc/2010-03-31/"&gt;
  &lt;ResponseMetadata&gt;

         * &lt;RequestId&gt;f3aa9ac9-3c3d-11df-8235-9dab105e9c32&lt;/RequestId&gt;
 
         * &lt;/ResponseMetadata&gt;
&lt;/DeleteTopicResponse&gt;

</queryresponse>
</examples>
         */
        virtual Model::DeleteTopicOutcome DeleteTopic(const Model::DeleteTopicRequest& request) const;

        /**
         * <p>Deletes a topic and all its subscriptions. Deleting a topic might
     
         * prevent some messages previously sent to the topic from being delivered to
     
         * subscribers. This action is idempotent, so deleting a topic that does not
     
         * exist does not result in an error.</p>
<examples>
<queryrequest>

 
         * http://sns.us-east-1.amazonaws.com/
 
         * &amp;TopicArn=arn%3Aaws%3Asns%3Aus-east-1%3A123456789012%3AMy-Topic
 
         * &amp;Action=DeleteTopic
  &amp;SignatureVersion=2
 
         * &amp;SignatureMethod=HmacSHA256
  &amp;Timestamp=2010-03-31T12%3A00%3A00.000Z
 
         * &amp;AWSAccessKeyId=(AWS Access Key Id)
 
         * &amp;Signature=mQA3nJI%2BcmAIY7r8HCArGElSqPX5JG4UGzF4yo0RygE%3D

</queryrequest>
<queryresponse>

&lt;DeleteTopicResponse
         * xmlns="http://sns.amazonaws.com/doc/2010-03-31/"&gt;
  &lt;ResponseMetadata&gt;

         * &lt;RequestId&gt;f3aa9ac9-3c3d-11df-8235-9dab105e9c32&lt;/RequestId&gt;
 
         * &lt;/ResponseMetadata&gt;
&lt;/DeleteTopicResponse&gt;

</queryresponse>
</examples>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteTopicOutcomeCallable DeleteTopicCallable(const Model::DeleteTopicRequest& request) const;

        /**
         * <p>Deletes a topic and all its subscriptions. Deleting a topic might
     
         * prevent some messages previously sent to the topic from being delivered to
     
         * subscribers. This action is idempotent, so deleting a topic that does not
     
         * exist does not result in an error.</p>
<examples>
<queryrequest>

 
         * http://sns.us-east-1.amazonaws.com/
 
         * &amp;TopicArn=arn%3Aaws%3Asns%3Aus-east-1%3A123456789012%3AMy-Topic
 
         * &amp;Action=DeleteTopic
  &amp;SignatureVersion=2
 
         * &amp;SignatureMethod=HmacSHA256
  &amp;Timestamp=2010-03-31T12%3A00%3A00.000Z
 
         * &amp;AWSAccessKeyId=(AWS Access Key Id)
 
         * &amp;Signature=mQA3nJI%2BcmAIY7r8HCArGElSqPX5JG4UGzF4yo0RygE%3D

</queryrequest>
<queryresponse>

&lt;DeleteTopicResponse
         * xmlns="http://sns.amazonaws.com/doc/2010-03-31/"&gt;
  &lt;ResponseMetadata&gt;

         * &lt;RequestId&gt;f3aa9ac9-3c3d-11df-8235-9dab105e9c32&lt;/RequestId&gt;
 
         * &lt;/ResponseMetadata&gt;
&lt;/DeleteTopicResponse&gt;

</queryresponse>
</examples>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteTopicAsync(const Model::DeleteTopicRequest& request, const DeleteTopicResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves the endpoint attributes for a device on one of the supported push
         * notification services, such as GCM and APNS. 
      For more information, see <a
         * href="http://docs.aws.amazon.com/sns/latest/dg/SNSMobilePush.html">Using Amazon
         * SNS Mobile Push Notifications</a>.
    </p>
    <examples>
      <queryrequest>

         * 
POST http://sns.us-west-2.amazonaws.com/
         * HTTP/1.1
...
Action=GetEndpointAttributes
&amp;SignatureMethod=HmacSHA256
&amp;AWSAccessKeyId=AKIAIOSFODNN7EXAMPLE
&amp;EndpointArn=arn%3Aaws%3Asns%3Aus-west-2%3A123456789012%3Aendpoint%2FGCM%2Fgcmpushapp%2F5e3e9847-3183-3f18-a7e8-671c3a57d4b3
&amp;SignatureVersion=2
&amp;Version=2010-03-31
&amp;Signature=%2B2egbEoT4npw3p5H3wiIdzZBoTn4KI3UWmMFyBsHH9c%3D
&amp;Timestamp=2013-07-01T22%3A44%3A56.515Z


         * </queryrequest>
      <queryresponse>
        
HTTP/1.1 200
         * OK
...
&lt;GetEndpointAttributesResponse
         * xmlns="http://sns.amazonaws.com/doc/2010-03-31/"&gt;
 
         * &lt;GetEndpointAttributesResult&gt;
    &lt;Attributes&gt;
      &lt;entry&gt;
 
         * &lt;key&gt;Enabled&lt;/key&gt;
        &lt;value&gt;true&lt;/value&gt;
     
         * &lt;/entry&gt;
      &lt;entry&gt;
       
         * &lt;key&gt;CustomUserData&lt;/key&gt;
       
         * &lt;value&gt;UserId=01234567&lt;/value&gt;
      &lt;/entry&gt;
     
         * &lt;entry&gt;
        &lt;key&gt;Token&lt;/key&gt;
       
         * &lt;value&gt;APA91bGi7fFachkC1xjlqT66VYEucGHochmf1VQAr9k...jsM0PKPxKhddCzx6paEsyay9Zn3D4wNUJb8m6HZrBEXAMPLE&lt;/value&gt;

         * &lt;/entry&gt;
    &lt;/Attributes&gt;
  &lt;/GetEndpointAttributesResult&gt;
 
         * &lt;ResponseMetadata&gt;
   
         * &lt;RequestId&gt;6c725a19-a142-5b77-94f9-1055a9ea04e7&lt;/RequestId&gt;
 
         * &lt;/ResponseMetadata&gt;
&lt;/GetEndpointAttributesResponse&gt;

     
         * </queryresponse>
    </examples>
         */
        virtual Model::GetEndpointAttributesOutcome GetEndpointAttributes(const Model::GetEndpointAttributesRequest& request) const;

        /**
         * <p>Retrieves the endpoint attributes for a device on one of the supported push
         * notification services, such as GCM and APNS. 
      For more information, see <a
         * href="http://docs.aws.amazon.com/sns/latest/dg/SNSMobilePush.html">Using Amazon
         * SNS Mobile Push Notifications</a>.
    </p>
    <examples>
      <queryrequest>

         * 
POST http://sns.us-west-2.amazonaws.com/
         * HTTP/1.1
...
Action=GetEndpointAttributes
&amp;SignatureMethod=HmacSHA256
&amp;AWSAccessKeyId=AKIAIOSFODNN7EXAMPLE
&amp;EndpointArn=arn%3Aaws%3Asns%3Aus-west-2%3A123456789012%3Aendpoint%2FGCM%2Fgcmpushapp%2F5e3e9847-3183-3f18-a7e8-671c3a57d4b3
&amp;SignatureVersion=2
&amp;Version=2010-03-31
&amp;Signature=%2B2egbEoT4npw3p5H3wiIdzZBoTn4KI3UWmMFyBsHH9c%3D
&amp;Timestamp=2013-07-01T22%3A44%3A56.515Z


         * </queryrequest>
      <queryresponse>
        
HTTP/1.1 200
         * OK
...
&lt;GetEndpointAttributesResponse
         * xmlns="http://sns.amazonaws.com/doc/2010-03-31/"&gt;
 
         * &lt;GetEndpointAttributesResult&gt;
    &lt;Attributes&gt;
      &lt;entry&gt;
 
         * &lt;key&gt;Enabled&lt;/key&gt;
        &lt;value&gt;true&lt;/value&gt;
     
         * &lt;/entry&gt;
      &lt;entry&gt;
       
         * &lt;key&gt;CustomUserData&lt;/key&gt;
       
         * &lt;value&gt;UserId=01234567&lt;/value&gt;
      &lt;/entry&gt;
     
         * &lt;entry&gt;
        &lt;key&gt;Token&lt;/key&gt;
       
         * &lt;value&gt;APA91bGi7fFachkC1xjlqT66VYEucGHochmf1VQAr9k...jsM0PKPxKhddCzx6paEsyay9Zn3D4wNUJb8m6HZrBEXAMPLE&lt;/value&gt;

         * &lt;/entry&gt;
    &lt;/Attributes&gt;
  &lt;/GetEndpointAttributesResult&gt;
 
         * &lt;ResponseMetadata&gt;
   
         * &lt;RequestId&gt;6c725a19-a142-5b77-94f9-1055a9ea04e7&lt;/RequestId&gt;
 
         * &lt;/ResponseMetadata&gt;
&lt;/GetEndpointAttributesResponse&gt;

     
         * </queryresponse>
    </examples>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetEndpointAttributesOutcomeCallable GetEndpointAttributesCallable(const Model::GetEndpointAttributesRequest& request) const;

        /**
         * <p>Retrieves the endpoint attributes for a device on one of the supported push
         * notification services, such as GCM and APNS. 
      For more information, see <a
         * href="http://docs.aws.amazon.com/sns/latest/dg/SNSMobilePush.html">Using Amazon
         * SNS Mobile Push Notifications</a>.
    </p>
    <examples>
      <queryrequest>

         * 
POST http://sns.us-west-2.amazonaws.com/
         * HTTP/1.1
...
Action=GetEndpointAttributes
&amp;SignatureMethod=HmacSHA256
&amp;AWSAccessKeyId=AKIAIOSFODNN7EXAMPLE
&amp;EndpointArn=arn%3Aaws%3Asns%3Aus-west-2%3A123456789012%3Aendpoint%2FGCM%2Fgcmpushapp%2F5e3e9847-3183-3f18-a7e8-671c3a57d4b3
&amp;SignatureVersion=2
&amp;Version=2010-03-31
&amp;Signature=%2B2egbEoT4npw3p5H3wiIdzZBoTn4KI3UWmMFyBsHH9c%3D
&amp;Timestamp=2013-07-01T22%3A44%3A56.515Z


         * </queryrequest>
      <queryresponse>
        
HTTP/1.1 200
         * OK
...
&lt;GetEndpointAttributesResponse
         * xmlns="http://sns.amazonaws.com/doc/2010-03-31/"&gt;
 
         * &lt;GetEndpointAttributesResult&gt;
    &lt;Attributes&gt;
      &lt;entry&gt;
 
         * &lt;key&gt;Enabled&lt;/key&gt;
        &lt;value&gt;true&lt;/value&gt;
     
         * &lt;/entry&gt;
      &lt;entry&gt;
       
         * &lt;key&gt;CustomUserData&lt;/key&gt;
       
         * &lt;value&gt;UserId=01234567&lt;/value&gt;
      &lt;/entry&gt;
     
         * &lt;entry&gt;
        &lt;key&gt;Token&lt;/key&gt;
       
         * &lt;value&gt;APA91bGi7fFachkC1xjlqT66VYEucGHochmf1VQAr9k...jsM0PKPxKhddCzx6paEsyay9Zn3D4wNUJb8m6HZrBEXAMPLE&lt;/value&gt;

         * &lt;/entry&gt;
    &lt;/Attributes&gt;
  &lt;/GetEndpointAttributesResult&gt;
 
         * &lt;ResponseMetadata&gt;
   
         * &lt;RequestId&gt;6c725a19-a142-5b77-94f9-1055a9ea04e7&lt;/RequestId&gt;
 
         * &lt;/ResponseMetadata&gt;
&lt;/GetEndpointAttributesResponse&gt;

     
         * </queryresponse>
    </examples>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetEndpointAttributesAsync(const Model::GetEndpointAttributesRequest& request, const GetEndpointAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves the attributes of the platform application object for the supported
         * push notification services, 
      such as APNS and GCM.
      For more
         * information, see <a
         * href="http://docs.aws.amazon.com/sns/latest/dg/SNSMobilePush.html">Using Amazon
         * SNS Mobile Push Notifications</a>.
    </p>
    <examples>
      <queryrequest>

         * 
POST http://sns.us-west-2.amazonaws.com/
         * HTTP/1.1
...
PlatformApplicationArn=arn%3Aaws%3Asns%3Aus-west-2%3A123456789012%3Aapp%2FGCM%2Fgcmpushapp
&amp;Action=GetPlatformApplicationAttributes
&amp;SignatureMethod=HmacSHA256
&amp;AWSAccessKeyId=AKIAIOSFODNN7EXAMPLE
&amp;SignatureVersion=2
&amp;Version=2010-03-31
&amp;Signature=UGMaCq8CCJGSYXO9Ehr2VuHIBYSe6WbxkqgMKRslTK4%3D
&amp;Timestamp=2013-07-01T22%3A40%3A50.643Z


         * </queryrequest>
      <queryresponse>
        
HTTP/1.1 200
         * OK
...
&lt;GetPlatformApplicationAttributesResponse
         * xmlns="http://sns.amazonaws.com/doc/2010-03-31/"&gt;
 
         * &lt;GetPlatformApplicationAttributesResult&gt;
    &lt;Attributes&gt;
     
         * &lt;entry&gt;
        &lt;key&gt;AllowEndpointPolicies&lt;/key&gt;
       
         * &lt;value&gt;false&lt;/value&gt;
      &lt;/entry&gt;
    &lt;/Attributes&gt;
 
         * &lt;/GetPlatformApplicationAttributesResult&gt;
  &lt;ResponseMetadata&gt;
   
         * &lt;RequestId&gt;74848df2-87f6-55ed-890c-c7be80442462&lt;/RequestId&gt;
 
         * &lt;/ResponseMetadata&gt;
&lt;/GetPlatformApplicationAttributesResponse&gt;

   
         *   </queryresponse>
    </examples>
         */
        virtual Model::GetPlatformApplicationAttributesOutcome GetPlatformApplicationAttributes(const Model::GetPlatformApplicationAttributesRequest& request) const;

        /**
         * <p>Retrieves the attributes of the platform application object for the supported
         * push notification services, 
      such as APNS and GCM.
      For more
         * information, see <a
         * href="http://docs.aws.amazon.com/sns/latest/dg/SNSMobilePush.html">Using Amazon
         * SNS Mobile Push Notifications</a>.
    </p>
    <examples>
      <queryrequest>

         * 
POST http://sns.us-west-2.amazonaws.com/
         * HTTP/1.1
...
PlatformApplicationArn=arn%3Aaws%3Asns%3Aus-west-2%3A123456789012%3Aapp%2FGCM%2Fgcmpushapp
&amp;Action=GetPlatformApplicationAttributes
&amp;SignatureMethod=HmacSHA256
&amp;AWSAccessKeyId=AKIAIOSFODNN7EXAMPLE
&amp;SignatureVersion=2
&amp;Version=2010-03-31
&amp;Signature=UGMaCq8CCJGSYXO9Ehr2VuHIBYSe6WbxkqgMKRslTK4%3D
&amp;Timestamp=2013-07-01T22%3A40%3A50.643Z


         * </queryrequest>
      <queryresponse>
        
HTTP/1.1 200
         * OK
...
&lt;GetPlatformApplicationAttributesResponse
         * xmlns="http://sns.amazonaws.com/doc/2010-03-31/"&gt;
 
         * &lt;GetPlatformApplicationAttributesResult&gt;
    &lt;Attributes&gt;
     
         * &lt;entry&gt;
        &lt;key&gt;AllowEndpointPolicies&lt;/key&gt;
       
         * &lt;value&gt;false&lt;/value&gt;
      &lt;/entry&gt;
    &lt;/Attributes&gt;
 
         * &lt;/GetPlatformApplicationAttributesResult&gt;
  &lt;ResponseMetadata&gt;
   
         * &lt;RequestId&gt;74848df2-87f6-55ed-890c-c7be80442462&lt;/RequestId&gt;
 
         * &lt;/ResponseMetadata&gt;
&lt;/GetPlatformApplicationAttributesResponse&gt;

   
         *   </queryresponse>
    </examples>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetPlatformApplicationAttributesOutcomeCallable GetPlatformApplicationAttributesCallable(const Model::GetPlatformApplicationAttributesRequest& request) const;

        /**
         * <p>Retrieves the attributes of the platform application object for the supported
         * push notification services, 
      such as APNS and GCM.
      For more
         * information, see <a
         * href="http://docs.aws.amazon.com/sns/latest/dg/SNSMobilePush.html">Using Amazon
         * SNS Mobile Push Notifications</a>.
    </p>
    <examples>
      <queryrequest>

         * 
POST http://sns.us-west-2.amazonaws.com/
         * HTTP/1.1
...
PlatformApplicationArn=arn%3Aaws%3Asns%3Aus-west-2%3A123456789012%3Aapp%2FGCM%2Fgcmpushapp
&amp;Action=GetPlatformApplicationAttributes
&amp;SignatureMethod=HmacSHA256
&amp;AWSAccessKeyId=AKIAIOSFODNN7EXAMPLE
&amp;SignatureVersion=2
&amp;Version=2010-03-31
&amp;Signature=UGMaCq8CCJGSYXO9Ehr2VuHIBYSe6WbxkqgMKRslTK4%3D
&amp;Timestamp=2013-07-01T22%3A40%3A50.643Z


         * </queryrequest>
      <queryresponse>
        
HTTP/1.1 200
         * OK
...
&lt;GetPlatformApplicationAttributesResponse
         * xmlns="http://sns.amazonaws.com/doc/2010-03-31/"&gt;
 
         * &lt;GetPlatformApplicationAttributesResult&gt;
    &lt;Attributes&gt;
     
         * &lt;entry&gt;
        &lt;key&gt;AllowEndpointPolicies&lt;/key&gt;
       
         * &lt;value&gt;false&lt;/value&gt;
      &lt;/entry&gt;
    &lt;/Attributes&gt;
 
         * &lt;/GetPlatformApplicationAttributesResult&gt;
  &lt;ResponseMetadata&gt;
   
         * &lt;RequestId&gt;74848df2-87f6-55ed-890c-c7be80442462&lt;/RequestId&gt;
 
         * &lt;/ResponseMetadata&gt;
&lt;/GetPlatformApplicationAttributesResponse&gt;

   
         *   </queryresponse>
    </examples>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetPlatformApplicationAttributesAsync(const Model::GetPlatformApplicationAttributesRequest& request, const GetPlatformApplicationAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns all of the properties of a subscription.</p>
<examples>

         * <queryrequest>

  http://sns.us-east-1.amazonaws.com/
 
         * ?SubscriptionArn=arn%3Aaws%3Asns%3Aus-east-1%3A123456789012%3AMy-Topic%3A80289ba6-0fd4-4079-afb4-ce8c8260f0ca

         * &amp;Action=GetSubscriptionAttributes
  &amp;SignatureVersion=2
 
         * &amp;SignatureMethod=HmacSHA256
  &amp;Timestamp=2010-03-31T12%3A00%3A00.000Z
 
         * &amp;AWSAccessKeyId=(AWS Access Key Id)
 
         * &amp;Signature=92lBGRVq0%2BxhaACaBGqtdemy%2Bi9isfgyTljCbJM80Yk%3D


         * </queryrequest>
 <queryresponse>
  
&lt;GetSubscriptionAttributesResponse
         * xmlns="http://sns.amazonaws.com/doc/2010-03-31/"&gt;
 
         * &lt;GetSubscriptionAttributesResult&gt;
    &lt;Attributes&gt;
     
         * &lt;entry&gt;
        &lt;key&gt;Owner&lt;/key&gt;
       
         * &lt;value&gt;123456789012&lt;/value&gt;
      &lt;/entry&gt;
     
         * &lt;entry&gt;
        &lt;key&gt;DeliveryPolicy&lt;/key&gt;
       
         * &lt;value&gt;{&amp;quot;healthyRetryPolicy&amp;quot;:{&amp;quot;numRetries&amp;quot;:10}}&lt;/value&gt;

         * &lt;/entry&gt;
      &lt;entry&gt;
       
         * &lt;key&gt;SubscriptionArn&lt;/key&gt;
       
         * &lt;value&gt;arn:aws:sns:us-east-1:123456789012:My-Topic:80289ba6-0fd4-4079-afb4-ce8c8260f0ca&lt;/value&gt;

         * &lt;/entry&gt;
    &lt;/Attributes&gt;
 
         * &lt;/GetSubscriptionAttributesResult&gt;
  &lt;ResponseMetadata&gt;
   
         * &lt;RequestId&gt;057f074c-33a7-11df-9540-99d0768312d3&lt;/RequestId&gt;
 
         * &lt;/ResponseMetadata&gt;
&lt;/GetTopicAttributesResponse&gt;
  

         * </queryresponse>
</examples>
         */
        virtual Model::GetSubscriptionAttributesOutcome GetSubscriptionAttributes(const Model::GetSubscriptionAttributesRequest& request) const;

        /**
         * <p>Returns all of the properties of a subscription.</p>
<examples>

         * <queryrequest>

  http://sns.us-east-1.amazonaws.com/
 
         * ?SubscriptionArn=arn%3Aaws%3Asns%3Aus-east-1%3A123456789012%3AMy-Topic%3A80289ba6-0fd4-4079-afb4-ce8c8260f0ca

         * &amp;Action=GetSubscriptionAttributes
  &amp;SignatureVersion=2
 
         * &amp;SignatureMethod=HmacSHA256
  &amp;Timestamp=2010-03-31T12%3A00%3A00.000Z
 
         * &amp;AWSAccessKeyId=(AWS Access Key Id)
 
         * &amp;Signature=92lBGRVq0%2BxhaACaBGqtdemy%2Bi9isfgyTljCbJM80Yk%3D


         * </queryrequest>
 <queryresponse>
  
&lt;GetSubscriptionAttributesResponse
         * xmlns="http://sns.amazonaws.com/doc/2010-03-31/"&gt;
 
         * &lt;GetSubscriptionAttributesResult&gt;
    &lt;Attributes&gt;
     
         * &lt;entry&gt;
        &lt;key&gt;Owner&lt;/key&gt;
       
         * &lt;value&gt;123456789012&lt;/value&gt;
      &lt;/entry&gt;
     
         * &lt;entry&gt;
        &lt;key&gt;DeliveryPolicy&lt;/key&gt;
       
         * &lt;value&gt;{&amp;quot;healthyRetryPolicy&amp;quot;:{&amp;quot;numRetries&amp;quot;:10}}&lt;/value&gt;

         * &lt;/entry&gt;
      &lt;entry&gt;
       
         * &lt;key&gt;SubscriptionArn&lt;/key&gt;
       
         * &lt;value&gt;arn:aws:sns:us-east-1:123456789012:My-Topic:80289ba6-0fd4-4079-afb4-ce8c8260f0ca&lt;/value&gt;

         * &lt;/entry&gt;
    &lt;/Attributes&gt;
 
         * &lt;/GetSubscriptionAttributesResult&gt;
  &lt;ResponseMetadata&gt;
   
         * &lt;RequestId&gt;057f074c-33a7-11df-9540-99d0768312d3&lt;/RequestId&gt;
 
         * &lt;/ResponseMetadata&gt;
&lt;/GetTopicAttributesResponse&gt;
  

         * </queryresponse>
</examples>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetSubscriptionAttributesOutcomeCallable GetSubscriptionAttributesCallable(const Model::GetSubscriptionAttributesRequest& request) const;

        /**
         * <p>Returns all of the properties of a subscription.</p>
<examples>

         * <queryrequest>

  http://sns.us-east-1.amazonaws.com/
 
         * ?SubscriptionArn=arn%3Aaws%3Asns%3Aus-east-1%3A123456789012%3AMy-Topic%3A80289ba6-0fd4-4079-afb4-ce8c8260f0ca

         * &amp;Action=GetSubscriptionAttributes
  &amp;SignatureVersion=2
 
         * &amp;SignatureMethod=HmacSHA256
  &amp;Timestamp=2010-03-31T12%3A00%3A00.000Z
 
         * &amp;AWSAccessKeyId=(AWS Access Key Id)
 
         * &amp;Signature=92lBGRVq0%2BxhaACaBGqtdemy%2Bi9isfgyTljCbJM80Yk%3D


         * </queryrequest>
 <queryresponse>
  
&lt;GetSubscriptionAttributesResponse
         * xmlns="http://sns.amazonaws.com/doc/2010-03-31/"&gt;
 
         * &lt;GetSubscriptionAttributesResult&gt;
    &lt;Attributes&gt;
     
         * &lt;entry&gt;
        &lt;key&gt;Owner&lt;/key&gt;
       
         * &lt;value&gt;123456789012&lt;/value&gt;
      &lt;/entry&gt;
     
         * &lt;entry&gt;
        &lt;key&gt;DeliveryPolicy&lt;/key&gt;
       
         * &lt;value&gt;{&amp;quot;healthyRetryPolicy&amp;quot;:{&amp;quot;numRetries&amp;quot;:10}}&lt;/value&gt;

         * &lt;/entry&gt;
      &lt;entry&gt;
       
         * &lt;key&gt;SubscriptionArn&lt;/key&gt;
       
         * &lt;value&gt;arn:aws:sns:us-east-1:123456789012:My-Topic:80289ba6-0fd4-4079-afb4-ce8c8260f0ca&lt;/value&gt;

         * &lt;/entry&gt;
    &lt;/Attributes&gt;
 
         * &lt;/GetSubscriptionAttributesResult&gt;
  &lt;ResponseMetadata&gt;
   
         * &lt;RequestId&gt;057f074c-33a7-11df-9540-99d0768312d3&lt;/RequestId&gt;
 
         * &lt;/ResponseMetadata&gt;
&lt;/GetTopicAttributesResponse&gt;
  

         * </queryresponse>
</examples>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetSubscriptionAttributesAsync(const Model::GetSubscriptionAttributesRequest& request, const GetSubscriptionAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns all of the properties of a topic. 
    Topic properties returned
         * might differ based on the authorization of the user. </p>
<examples>

         * <queryrequest>

  http://sns.us-east-1.amazonaws.com/
 
         * ?TopicArn=arn%3Aaws%3Asns%3Aus-east-1%3A123456789012%3AMy-Topic
 
         * &amp;Action=GetTopicAttributes
  &amp;SignatureVersion=2
 
         * &amp;SignatureMethod=HmacSHA256
  &amp;Timestamp=2010-03-31T12%3A00%3A00.000Z
 
         * &amp;AWSAccessKeyId=(AWS Access Key Id)
 
         * &amp;Signature=92lBGRVq0%2BxhaACaBGqtdemy%2Bi9isfgyTljCbJM80Yk%3D


         * </queryrequest>
 <queryresponse>
  
&lt;GetTopicAttributesResponse
         * xmlns="http://sns.amazonaws.com/doc/2010-03-31/"&gt;
 
         * &lt;GetTopicAttributesResult&gt;
    &lt;Attributes&gt;
      &lt;entry&gt;
    
         * &lt;key&gt;Owner&lt;/key&gt;
        &lt;value&gt;123456789012&lt;/value&gt;
   
         * &lt;/entry&gt;
      &lt;entry&gt;
        &lt;key&gt;Policy&lt;/key&gt;
       
         * &lt;value&gt;{
&amp;quot;Version&amp;quot;:&amp;quot;2008-10-17&amp;quot;,&amp;quot;Id&amp;quot;:&amp;quot;us-east-1/698519295917/test__default_policy_ID&amp;quot;,&amp;quot;Statement&amp;quot;
         * :
         * [{&amp;quot;Effect&amp;quot;:&amp;quot;Allow&amp;quot;,&amp;quot;Sid&amp;quot;:&amp;quot;us-east-1/698519295917/test__default_statement_ID&amp;quot;,&amp;quot;Principal&amp;quot;
         * : {&amp;quot;AWS&amp;quot;:
         * &amp;quot;*&amp;quot;},&amp;quot;Action&amp;quot;:[&amp;quot;SNS:GetTopicAttributes&amp;quot;,&amp;quot;SNS:SetTopicAttributes&amp;quot;,&amp;quot;SNS:AddPermission&amp;quot;,&amp;quot;SNS:RemovePermission&amp;quot;,&amp;quot;SNS:DeleteTopic&amp;quot;,&amp;quot;SNS:Subscribe&amp;quot;,&amp;quot;SNS:ListSubscriptionsByTopic&amp;quot;,&amp;quot;SNS:Publish&amp;quot;,&amp;quot;SNS:Receive&amp;quot;],&amp;quot;Resource&amp;quot;:&amp;quot;arn:aws:sns:us-east-1:698519295917:test&amp;quot;,&amp;quot;Condition&amp;quot;
         * : {&amp;quot;StringLike&amp;quot; : {&amp;quot;AWS:SourceArn&amp;quot;:
         * &amp;quot;arn:aws:*:*:698519295917:*&amp;quot;}}}]}&lt;/value&gt;
     
         * &lt;/entry&gt;
      &lt;entry&gt;
        &lt;key&gt;TopicArn&lt;/key&gt;
     
         * &lt;value&gt;arn:aws:sns:us-east-1:123456789012:My-Topic&lt;/value&gt;
     
         * &lt;/entry&gt;
    &lt;/Attributes&gt;
  &lt;/GetTopicAttributesResult&gt;
 
         * &lt;ResponseMetadata&gt;
   
         * &lt;RequestId&gt;057f074c-33a7-11df-9540-99d0768312d3&lt;/RequestId&gt;
 
         * &lt;/ResponseMetadata&gt;
&lt;/GetTopicAttributesResponse&gt;
  

         * </queryresponse>
</examples>
         */
        virtual Model::GetTopicAttributesOutcome GetTopicAttributes(const Model::GetTopicAttributesRequest& request) const;

        /**
         * <p>Returns all of the properties of a topic. 
    Topic properties returned
         * might differ based on the authorization of the user. </p>
<examples>

         * <queryrequest>

  http://sns.us-east-1.amazonaws.com/
 
         * ?TopicArn=arn%3Aaws%3Asns%3Aus-east-1%3A123456789012%3AMy-Topic
 
         * &amp;Action=GetTopicAttributes
  &amp;SignatureVersion=2
 
         * &amp;SignatureMethod=HmacSHA256
  &amp;Timestamp=2010-03-31T12%3A00%3A00.000Z
 
         * &amp;AWSAccessKeyId=(AWS Access Key Id)
 
         * &amp;Signature=92lBGRVq0%2BxhaACaBGqtdemy%2Bi9isfgyTljCbJM80Yk%3D


         * </queryrequest>
 <queryresponse>
  
&lt;GetTopicAttributesResponse
         * xmlns="http://sns.amazonaws.com/doc/2010-03-31/"&gt;
 
         * &lt;GetTopicAttributesResult&gt;
    &lt;Attributes&gt;
      &lt;entry&gt;
    
         * &lt;key&gt;Owner&lt;/key&gt;
        &lt;value&gt;123456789012&lt;/value&gt;
   
         * &lt;/entry&gt;
      &lt;entry&gt;
        &lt;key&gt;Policy&lt;/key&gt;
       
         * &lt;value&gt;{
&amp;quot;Version&amp;quot;:&amp;quot;2008-10-17&amp;quot;,&amp;quot;Id&amp;quot;:&amp;quot;us-east-1/698519295917/test__default_policy_ID&amp;quot;,&amp;quot;Statement&amp;quot;
         * :
         * [{&amp;quot;Effect&amp;quot;:&amp;quot;Allow&amp;quot;,&amp;quot;Sid&amp;quot;:&amp;quot;us-east-1/698519295917/test__default_statement_ID&amp;quot;,&amp;quot;Principal&amp;quot;
         * : {&amp;quot;AWS&amp;quot;:
         * &amp;quot;*&amp;quot;},&amp;quot;Action&amp;quot;:[&amp;quot;SNS:GetTopicAttributes&amp;quot;,&amp;quot;SNS:SetTopicAttributes&amp;quot;,&amp;quot;SNS:AddPermission&amp;quot;,&amp;quot;SNS:RemovePermission&amp;quot;,&amp;quot;SNS:DeleteTopic&amp;quot;,&amp;quot;SNS:Subscribe&amp;quot;,&amp;quot;SNS:ListSubscriptionsByTopic&amp;quot;,&amp;quot;SNS:Publish&amp;quot;,&amp;quot;SNS:Receive&amp;quot;],&amp;quot;Resource&amp;quot;:&amp;quot;arn:aws:sns:us-east-1:698519295917:test&amp;quot;,&amp;quot;Condition&amp;quot;
         * : {&amp;quot;StringLike&amp;quot; : {&amp;quot;AWS:SourceArn&amp;quot;:
         * &amp;quot;arn:aws:*:*:698519295917:*&amp;quot;}}}]}&lt;/value&gt;
     
         * &lt;/entry&gt;
      &lt;entry&gt;
        &lt;key&gt;TopicArn&lt;/key&gt;
     
         * &lt;value&gt;arn:aws:sns:us-east-1:123456789012:My-Topic&lt;/value&gt;
     
         * &lt;/entry&gt;
    &lt;/Attributes&gt;
  &lt;/GetTopicAttributesResult&gt;
 
         * &lt;ResponseMetadata&gt;
   
         * &lt;RequestId&gt;057f074c-33a7-11df-9540-99d0768312d3&lt;/RequestId&gt;
 
         * &lt;/ResponseMetadata&gt;
&lt;/GetTopicAttributesResponse&gt;
  

         * </queryresponse>
</examples>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetTopicAttributesOutcomeCallable GetTopicAttributesCallable(const Model::GetTopicAttributesRequest& request) const;

        /**
         * <p>Returns all of the properties of a topic. 
    Topic properties returned
         * might differ based on the authorization of the user. </p>
<examples>

         * <queryrequest>

  http://sns.us-east-1.amazonaws.com/
 
         * ?TopicArn=arn%3Aaws%3Asns%3Aus-east-1%3A123456789012%3AMy-Topic
 
         * &amp;Action=GetTopicAttributes
  &amp;SignatureVersion=2
 
         * &amp;SignatureMethod=HmacSHA256
  &amp;Timestamp=2010-03-31T12%3A00%3A00.000Z
 
         * &amp;AWSAccessKeyId=(AWS Access Key Id)
 
         * &amp;Signature=92lBGRVq0%2BxhaACaBGqtdemy%2Bi9isfgyTljCbJM80Yk%3D


         * </queryrequest>
 <queryresponse>
  
&lt;GetTopicAttributesResponse
         * xmlns="http://sns.amazonaws.com/doc/2010-03-31/"&gt;
 
         * &lt;GetTopicAttributesResult&gt;
    &lt;Attributes&gt;
      &lt;entry&gt;
    
         * &lt;key&gt;Owner&lt;/key&gt;
        &lt;value&gt;123456789012&lt;/value&gt;
   
         * &lt;/entry&gt;
      &lt;entry&gt;
        &lt;key&gt;Policy&lt;/key&gt;
       
         * &lt;value&gt;{
&amp;quot;Version&amp;quot;:&amp;quot;2008-10-17&amp;quot;,&amp;quot;Id&amp;quot;:&amp;quot;us-east-1/698519295917/test__default_policy_ID&amp;quot;,&amp;quot;Statement&amp;quot;
         * :
         * [{&amp;quot;Effect&amp;quot;:&amp;quot;Allow&amp;quot;,&amp;quot;Sid&amp;quot;:&amp;quot;us-east-1/698519295917/test__default_statement_ID&amp;quot;,&amp;quot;Principal&amp;quot;
         * : {&amp;quot;AWS&amp;quot;:
         * &amp;quot;*&amp;quot;},&amp;quot;Action&amp;quot;:[&amp;quot;SNS:GetTopicAttributes&amp;quot;,&amp;quot;SNS:SetTopicAttributes&amp;quot;,&amp;quot;SNS:AddPermission&amp;quot;,&amp;quot;SNS:RemovePermission&amp;quot;,&amp;quot;SNS:DeleteTopic&amp;quot;,&amp;quot;SNS:Subscribe&amp;quot;,&amp;quot;SNS:ListSubscriptionsByTopic&amp;quot;,&amp;quot;SNS:Publish&amp;quot;,&amp;quot;SNS:Receive&amp;quot;],&amp;quot;Resource&amp;quot;:&amp;quot;arn:aws:sns:us-east-1:698519295917:test&amp;quot;,&amp;quot;Condition&amp;quot;
         * : {&amp;quot;StringLike&amp;quot; : {&amp;quot;AWS:SourceArn&amp;quot;:
         * &amp;quot;arn:aws:*:*:698519295917:*&amp;quot;}}}]}&lt;/value&gt;
     
         * &lt;/entry&gt;
      &lt;entry&gt;
        &lt;key&gt;TopicArn&lt;/key&gt;
     
         * &lt;value&gt;arn:aws:sns:us-east-1:123456789012:My-Topic&lt;/value&gt;
     
         * &lt;/entry&gt;
    &lt;/Attributes&gt;
  &lt;/GetTopicAttributesResult&gt;
 
         * &lt;ResponseMetadata&gt;
   
         * &lt;RequestId&gt;057f074c-33a7-11df-9540-99d0768312d3&lt;/RequestId&gt;
 
         * &lt;/ResponseMetadata&gt;
&lt;/GetTopicAttributesResponse&gt;
  

         * </queryresponse>
</examples>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetTopicAttributesAsync(const Model::GetTopicAttributesRequest& request, const GetTopicAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the endpoints and endpoint attributes for devices in a supported push
         * notification service, such as GCM and APNS. 
      The results for
         * <code>ListEndpointsByPlatformApplication</code> are paginated and return a
         * limited list of endpoints, up to 100.
      If additional records are available
         * after the first page results, then a NextToken string will be returned. 
     
         * To receive the next page, you call
         * <code>ListEndpointsByPlatformApplication</code> again using the NextToken string
         * received from the previous call. 
      When there are no more records to
         * return, NextToken will be null.
      For more information, see <a
         * href="http://docs.aws.amazon.com/sns/latest/dg/SNSMobilePush.html">Using Amazon
         * SNS Mobile Push Notifications</a>.
    </p>
    <examples>
      <queryrequest>

         * 
POST http://sns.us-west-2.amazonaws.com/
         * HTTP/1.1
...
PlatformApplicationArn=arn%3Aaws%3Asns%3Aus-west-2%3A123456789012%3Aapp%2FGCM%2Fgcmpushapp
&amp;Action=ListEndpointsByPlatformApplication
&amp;SignatureMethod=HmacSHA256
&amp;AWSAccessKeyId=AKIAIOSFODNN7EXAMPLE
&amp;SignatureVersion=2
&amp;Version=2010-03-31
&amp;Signature=e6H4sJSCRBBlh%2BaigB%2FtYgp4%2Bjl7dikAQ6WKf%2BMTwNM%3D
&amp;Timestamp=2013-07-01T23%3A00%3A52.515Z


         * </queryrequest>
      <queryresponse>
        
HTTP/1.1 200
         * OK
...
&lt;ListEndpointsByPlatformApplicationResponse
         * xmlns="http://sns.amazonaws.com/doc/2010-03-31/"&gt;
 
         * &lt;ListEndpointsByPlatformApplicationResult&gt;
    &lt;Endpoints&gt;
     
         * &lt;member&gt;
       
         * &lt;EndpointArn&gt;arn:aws:sns:us-west-2:123456789012:endpoint/GCM/gcmpushapp/5e3e9847-3183-3f18-a7e8-671c3a57d4b3&lt;/EndpointArn&gt;

         * &lt;Attributes&gt;
          &lt;entry&gt;
           
         * &lt;key&gt;Enabled&lt;/key&gt;
            &lt;value&gt;true&lt;/value&gt;
     
         * &lt;/entry&gt;
          &lt;entry&gt;
           
         * &lt;key&gt;CustomUserData&lt;/key&gt;
           
         * &lt;value&gt;UserId=27576823&lt;/value&gt;
          &lt;/entry&gt;
         
         * &lt;entry&gt;
            &lt;key&gt;Token&lt;/key&gt;
           
         * &lt;value&gt;APA91bGi7fFachkC1xjlqT66VYEucGHochmf1VQAr9k...jsM0PKPxKhddCzx6paEsyay9Zn3D4wNUJb8m6HZrBEXAMPLE&lt;/value&gt;

         * &lt;/entry&gt;
        &lt;/Attributes&gt;
      &lt;/member&gt;
   
         * &lt;/Endpoints&gt;
  &lt;/ListEndpointsByPlatformApplicationResult&gt;
 
         * &lt;ResponseMetadata&gt;
   
         * &lt;RequestId&gt;9a48768c-dac8-5a60-aec0-3cc27ea08d96&lt;/RequestId&gt;
 
         * &lt;/ResponseMetadata&gt;
&lt;/ListEndpointsByPlatformApplicationResponse&gt;

 
         *     </queryresponse>
    </examples>
         */
        virtual Model::ListEndpointsByPlatformApplicationOutcome ListEndpointsByPlatformApplication(const Model::ListEndpointsByPlatformApplicationRequest& request) const;

        /**
         * <p>Lists the endpoints and endpoint attributes for devices in a supported push
         * notification service, such as GCM and APNS. 
      The results for
         * <code>ListEndpointsByPlatformApplication</code> are paginated and return a
         * limited list of endpoints, up to 100.
      If additional records are available
         * after the first page results, then a NextToken string will be returned. 
     
         * To receive the next page, you call
         * <code>ListEndpointsByPlatformApplication</code> again using the NextToken string
         * received from the previous call. 
      When there are no more records to
         * return, NextToken will be null.
      For more information, see <a
         * href="http://docs.aws.amazon.com/sns/latest/dg/SNSMobilePush.html">Using Amazon
         * SNS Mobile Push Notifications</a>.
    </p>
    <examples>
      <queryrequest>

         * 
POST http://sns.us-west-2.amazonaws.com/
         * HTTP/1.1
...
PlatformApplicationArn=arn%3Aaws%3Asns%3Aus-west-2%3A123456789012%3Aapp%2FGCM%2Fgcmpushapp
&amp;Action=ListEndpointsByPlatformApplication
&amp;SignatureMethod=HmacSHA256
&amp;AWSAccessKeyId=AKIAIOSFODNN7EXAMPLE
&amp;SignatureVersion=2
&amp;Version=2010-03-31
&amp;Signature=e6H4sJSCRBBlh%2BaigB%2FtYgp4%2Bjl7dikAQ6WKf%2BMTwNM%3D
&amp;Timestamp=2013-07-01T23%3A00%3A52.515Z


         * </queryrequest>
      <queryresponse>
        
HTTP/1.1 200
         * OK
...
&lt;ListEndpointsByPlatformApplicationResponse
         * xmlns="http://sns.amazonaws.com/doc/2010-03-31/"&gt;
 
         * &lt;ListEndpointsByPlatformApplicationResult&gt;
    &lt;Endpoints&gt;
     
         * &lt;member&gt;
       
         * &lt;EndpointArn&gt;arn:aws:sns:us-west-2:123456789012:endpoint/GCM/gcmpushapp/5e3e9847-3183-3f18-a7e8-671c3a57d4b3&lt;/EndpointArn&gt;

         * &lt;Attributes&gt;
          &lt;entry&gt;
           
         * &lt;key&gt;Enabled&lt;/key&gt;
            &lt;value&gt;true&lt;/value&gt;
     
         * &lt;/entry&gt;
          &lt;entry&gt;
           
         * &lt;key&gt;CustomUserData&lt;/key&gt;
           
         * &lt;value&gt;UserId=27576823&lt;/value&gt;
          &lt;/entry&gt;
         
         * &lt;entry&gt;
            &lt;key&gt;Token&lt;/key&gt;
           
         * &lt;value&gt;APA91bGi7fFachkC1xjlqT66VYEucGHochmf1VQAr9k...jsM0PKPxKhddCzx6paEsyay9Zn3D4wNUJb8m6HZrBEXAMPLE&lt;/value&gt;

         * &lt;/entry&gt;
        &lt;/Attributes&gt;
      &lt;/member&gt;
   
         * &lt;/Endpoints&gt;
  &lt;/ListEndpointsByPlatformApplicationResult&gt;
 
         * &lt;ResponseMetadata&gt;
   
         * &lt;RequestId&gt;9a48768c-dac8-5a60-aec0-3cc27ea08d96&lt;/RequestId&gt;
 
         * &lt;/ResponseMetadata&gt;
&lt;/ListEndpointsByPlatformApplicationResponse&gt;

 
         *     </queryresponse>
    </examples>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListEndpointsByPlatformApplicationOutcomeCallable ListEndpointsByPlatformApplicationCallable(const Model::ListEndpointsByPlatformApplicationRequest& request) const;

        /**
         * <p>Lists the endpoints and endpoint attributes for devices in a supported push
         * notification service, such as GCM and APNS. 
      The results for
         * <code>ListEndpointsByPlatformApplication</code> are paginated and return a
         * limited list of endpoints, up to 100.
      If additional records are available
         * after the first page results, then a NextToken string will be returned. 
     
         * To receive the next page, you call
         * <code>ListEndpointsByPlatformApplication</code> again using the NextToken string
         * received from the previous call. 
      When there are no more records to
         * return, NextToken will be null.
      For more information, see <a
         * href="http://docs.aws.amazon.com/sns/latest/dg/SNSMobilePush.html">Using Amazon
         * SNS Mobile Push Notifications</a>.
    </p>
    <examples>
      <queryrequest>

         * 
POST http://sns.us-west-2.amazonaws.com/
         * HTTP/1.1
...
PlatformApplicationArn=arn%3Aaws%3Asns%3Aus-west-2%3A123456789012%3Aapp%2FGCM%2Fgcmpushapp
&amp;Action=ListEndpointsByPlatformApplication
&amp;SignatureMethod=HmacSHA256
&amp;AWSAccessKeyId=AKIAIOSFODNN7EXAMPLE
&amp;SignatureVersion=2
&amp;Version=2010-03-31
&amp;Signature=e6H4sJSCRBBlh%2BaigB%2FtYgp4%2Bjl7dikAQ6WKf%2BMTwNM%3D
&amp;Timestamp=2013-07-01T23%3A00%3A52.515Z


         * </queryrequest>
      <queryresponse>
        
HTTP/1.1 200
         * OK
...
&lt;ListEndpointsByPlatformApplicationResponse
         * xmlns="http://sns.amazonaws.com/doc/2010-03-31/"&gt;
 
         * &lt;ListEndpointsByPlatformApplicationResult&gt;
    &lt;Endpoints&gt;
     
         * &lt;member&gt;
       
         * &lt;EndpointArn&gt;arn:aws:sns:us-west-2:123456789012:endpoint/GCM/gcmpushapp/5e3e9847-3183-3f18-a7e8-671c3a57d4b3&lt;/EndpointArn&gt;

         * &lt;Attributes&gt;
          &lt;entry&gt;
           
         * &lt;key&gt;Enabled&lt;/key&gt;
            &lt;value&gt;true&lt;/value&gt;
     
         * &lt;/entry&gt;
          &lt;entry&gt;
           
         * &lt;key&gt;CustomUserData&lt;/key&gt;
           
         * &lt;value&gt;UserId=27576823&lt;/value&gt;
          &lt;/entry&gt;
         
         * &lt;entry&gt;
            &lt;key&gt;Token&lt;/key&gt;
           
         * &lt;value&gt;APA91bGi7fFachkC1xjlqT66VYEucGHochmf1VQAr9k...jsM0PKPxKhddCzx6paEsyay9Zn3D4wNUJb8m6HZrBEXAMPLE&lt;/value&gt;

         * &lt;/entry&gt;
        &lt;/Attributes&gt;
      &lt;/member&gt;
   
         * &lt;/Endpoints&gt;
  &lt;/ListEndpointsByPlatformApplicationResult&gt;
 
         * &lt;ResponseMetadata&gt;
   
         * &lt;RequestId&gt;9a48768c-dac8-5a60-aec0-3cc27ea08d96&lt;/RequestId&gt;
 
         * &lt;/ResponseMetadata&gt;
&lt;/ListEndpointsByPlatformApplicationResponse&gt;

 
         *     </queryresponse>
    </examples>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListEndpointsByPlatformApplicationAsync(const Model::ListEndpointsByPlatformApplicationRequest& request, const ListEndpointsByPlatformApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the platform application objects for the supported push notification
         * services, 
      such as APNS and GCM. The results for
         * <code>ListPlatformApplications</code> are paginated and return a limited list of
         * applications, up to 100.
      If additional records are available after the
         * first page results, then a NextToken string will be returned. 
      To receive
         * the next page, you call <code>ListPlatformApplications</code> using the
         * NextToken string received from the previous call. 
      When there are no more
         * records to return, NextToken will be null.
      
      For more information,
         * see <a href="http://docs.aws.amazon.com/sns/latest/dg/SNSMobilePush.html">Using
         * Amazon SNS Mobile Push Notifications</a>.
    </p>
    <examples>
     
         * <queryrequest>
        
POST http://sns.us-west-2.amazonaws.com/
         * HTTP/1.1
...
Action=ListPlatformApplications
&amp;SignatureMethod=HmacSHA256
&amp;AWSAccessKeyId=AKIAIOSFODNN7EXAMPLE
&amp;SignatureVersion=2
&amp;Version=2010-03-31
&amp;Signature=drVbTuyR5N9e88WJMNPzBOjNFNvawkCaMfZI0xa9kIQ%3D
&amp;Timestamp=2013-07-01T22%3A33%3A55.618Z


         * </queryrequest>
      <queryresponse>
        
HTTP/1.1 200
         * OK
...
&lt;ListPlatformApplicationsResponse
         * xmlns="http://sns.amazonaws.com/doc/2010-03-31/"&gt;
 
         * &lt;ListPlatformApplicationsResult&gt;
    &lt;PlatformApplications&gt;
     
         * &lt;member&gt;
       
         * &lt;PlatformApplicationArn&gt;arn:aws:sns:us-west-2:123456789012:app/APNS_SANDBOX/apnspushapp&lt;/PlatformApplicationArn&gt;

         * &lt;Attributes&gt;
          &lt;entry&gt;
           
         * &lt;key&gt;AllowEndpointPolicies&lt;/key&gt;
           
         * &lt;value&gt;false&lt;/value&gt;
          &lt;/entry&gt;
       
         * &lt;/Attributes&gt;
      &lt;/member&gt;
      &lt;member&gt;
       
         * &lt;PlatformApplicationArn&gt;arn:aws:sns:us-west-2:123456789012:app/GCM/gcmpushapp&lt;/PlatformApplicationArn&gt;

         * &lt;Attributes&gt;
          &lt;entry&gt;
           
         * &lt;key&gt;AllowEndpointPolicies&lt;/key&gt;
           
         * &lt;value&gt;false&lt;/value&gt;
          &lt;/entry&gt;
       
         * &lt;/Attributes&gt;
      &lt;/member&gt;
    &lt;/PlatformApplications&gt;
 
         * &lt;/ListPlatformApplicationsResult&gt;
  &lt;ResponseMetadata&gt;
   
         * &lt;RequestId&gt;315a335e-85d8-52df-9349-791283cbb529&lt;/RequestId&gt;
 
         * &lt;/ResponseMetadata&gt;
&lt;/ListPlatformApplicationsResponse&gt;

     
         * </queryresponse>
    </examples>
         */
        virtual Model::ListPlatformApplicationsOutcome ListPlatformApplications(const Model::ListPlatformApplicationsRequest& request) const;

        /**
         * <p>Lists the platform application objects for the supported push notification
         * services, 
      such as APNS and GCM. The results for
         * <code>ListPlatformApplications</code> are paginated and return a limited list of
         * applications, up to 100.
      If additional records are available after the
         * first page results, then a NextToken string will be returned. 
      To receive
         * the next page, you call <code>ListPlatformApplications</code> using the
         * NextToken string received from the previous call. 
      When there are no more
         * records to return, NextToken will be null.
      
      For more information,
         * see <a href="http://docs.aws.amazon.com/sns/latest/dg/SNSMobilePush.html">Using
         * Amazon SNS Mobile Push Notifications</a>.
    </p>
    <examples>
     
         * <queryrequest>
        
POST http://sns.us-west-2.amazonaws.com/
         * HTTP/1.1
...
Action=ListPlatformApplications
&amp;SignatureMethod=HmacSHA256
&amp;AWSAccessKeyId=AKIAIOSFODNN7EXAMPLE
&amp;SignatureVersion=2
&amp;Version=2010-03-31
&amp;Signature=drVbTuyR5N9e88WJMNPzBOjNFNvawkCaMfZI0xa9kIQ%3D
&amp;Timestamp=2013-07-01T22%3A33%3A55.618Z


         * </queryrequest>
      <queryresponse>
        
HTTP/1.1 200
         * OK
...
&lt;ListPlatformApplicationsResponse
         * xmlns="http://sns.amazonaws.com/doc/2010-03-31/"&gt;
 
         * &lt;ListPlatformApplicationsResult&gt;
    &lt;PlatformApplications&gt;
     
         * &lt;member&gt;
       
         * &lt;PlatformApplicationArn&gt;arn:aws:sns:us-west-2:123456789012:app/APNS_SANDBOX/apnspushapp&lt;/PlatformApplicationArn&gt;

         * &lt;Attributes&gt;
          &lt;entry&gt;
           
         * &lt;key&gt;AllowEndpointPolicies&lt;/key&gt;
           
         * &lt;value&gt;false&lt;/value&gt;
          &lt;/entry&gt;
       
         * &lt;/Attributes&gt;
      &lt;/member&gt;
      &lt;member&gt;
       
         * &lt;PlatformApplicationArn&gt;arn:aws:sns:us-west-2:123456789012:app/GCM/gcmpushapp&lt;/PlatformApplicationArn&gt;

         * &lt;Attributes&gt;
          &lt;entry&gt;
           
         * &lt;key&gt;AllowEndpointPolicies&lt;/key&gt;
           
         * &lt;value&gt;false&lt;/value&gt;
          &lt;/entry&gt;
       
         * &lt;/Attributes&gt;
      &lt;/member&gt;
    &lt;/PlatformApplications&gt;
 
         * &lt;/ListPlatformApplicationsResult&gt;
  &lt;ResponseMetadata&gt;
   
         * &lt;RequestId&gt;315a335e-85d8-52df-9349-791283cbb529&lt;/RequestId&gt;
 
         * &lt;/ResponseMetadata&gt;
&lt;/ListPlatformApplicationsResponse&gt;

     
         * </queryresponse>
    </examples>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListPlatformApplicationsOutcomeCallable ListPlatformApplicationsCallable(const Model::ListPlatformApplicationsRequest& request) const;

        /**
         * <p>Lists the platform application objects for the supported push notification
         * services, 
      such as APNS and GCM. The results for
         * <code>ListPlatformApplications</code> are paginated and return a limited list of
         * applications, up to 100.
      If additional records are available after the
         * first page results, then a NextToken string will be returned. 
      To receive
         * the next page, you call <code>ListPlatformApplications</code> using the
         * NextToken string received from the previous call. 
      When there are no more
         * records to return, NextToken will be null.
      
      For more information,
         * see <a href="http://docs.aws.amazon.com/sns/latest/dg/SNSMobilePush.html">Using
         * Amazon SNS Mobile Push Notifications</a>.
    </p>
    <examples>
     
         * <queryrequest>
        
POST http://sns.us-west-2.amazonaws.com/
         * HTTP/1.1
...
Action=ListPlatformApplications
&amp;SignatureMethod=HmacSHA256
&amp;AWSAccessKeyId=AKIAIOSFODNN7EXAMPLE
&amp;SignatureVersion=2
&amp;Version=2010-03-31
&amp;Signature=drVbTuyR5N9e88WJMNPzBOjNFNvawkCaMfZI0xa9kIQ%3D
&amp;Timestamp=2013-07-01T22%3A33%3A55.618Z


         * </queryrequest>
      <queryresponse>
        
HTTP/1.1 200
         * OK
...
&lt;ListPlatformApplicationsResponse
         * xmlns="http://sns.amazonaws.com/doc/2010-03-31/"&gt;
 
         * &lt;ListPlatformApplicationsResult&gt;
    &lt;PlatformApplications&gt;
     
         * &lt;member&gt;
       
         * &lt;PlatformApplicationArn&gt;arn:aws:sns:us-west-2:123456789012:app/APNS_SANDBOX/apnspushapp&lt;/PlatformApplicationArn&gt;

         * &lt;Attributes&gt;
          &lt;entry&gt;
           
         * &lt;key&gt;AllowEndpointPolicies&lt;/key&gt;
           
         * &lt;value&gt;false&lt;/value&gt;
          &lt;/entry&gt;
       
         * &lt;/Attributes&gt;
      &lt;/member&gt;
      &lt;member&gt;
       
         * &lt;PlatformApplicationArn&gt;arn:aws:sns:us-west-2:123456789012:app/GCM/gcmpushapp&lt;/PlatformApplicationArn&gt;

         * &lt;Attributes&gt;
          &lt;entry&gt;
           
         * &lt;key&gt;AllowEndpointPolicies&lt;/key&gt;
           
         * &lt;value&gt;false&lt;/value&gt;
          &lt;/entry&gt;
       
         * &lt;/Attributes&gt;
      &lt;/member&gt;
    &lt;/PlatformApplications&gt;
 
         * &lt;/ListPlatformApplicationsResult&gt;
  &lt;ResponseMetadata&gt;
   
         * &lt;RequestId&gt;315a335e-85d8-52df-9349-791283cbb529&lt;/RequestId&gt;
 
         * &lt;/ResponseMetadata&gt;
&lt;/ListPlatformApplicationsResponse&gt;

     
         * </queryresponse>
    </examples>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListPlatformApplicationsAsync(const Model::ListPlatformApplicationsRequest& request, const ListPlatformApplicationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a list of the requester's subscriptions. Each call returns a limited
         * list
      of subscriptions, up to 100. If there are more subscriptions, a
         * <code>NextToken</code> is also returned. Use the <code>NextToken</code>
         * parameter in a 
      new <code>ListSubscriptions</code> call to get further
         * results.</p>
<examples>
 <queryrequest>

  http://sns.us-east-1.amazonaws.com/
 
         * &amp;Action=ListSubscriptions
  &amp;SignatureVersion=2
 
         * &amp;SignatureMethod=HmacSHA256
  &amp;Timestamp=2010-03-31T12%3A00%3A00.000Z
 
         * &amp;AWSAccessKeyId=(AWS Access Key ID)
 
         * &amp;Signature=SZmBxEPqfs9R7xxhSt6C1b7PnOEvg%2BSVyyMYJfLRFCA%3D


         * </queryrequest>
 <queryresponse>
  
&lt;ListSubscriptionsResponse
         * xmlns="http://sns.amazonaws.com/doc/2010-03-31/"&gt;
 
         * &lt;ListSubscriptionsResult&gt;
    &lt;Subscriptions&gt;
      &lt;member&gt;
 
         * &lt;TopicArn&gt;arn:aws:sns:us-east-1:698519295917:My-Topic&lt;/TopicArn&gt;
   
         * &lt;Protocol&gt;email&lt;/Protocol&gt;
       
         * &lt;SubscriptionArn&gt;arn:aws:sns:us-east-1:123456789012:My-Topic:80289ba6-0fd4-4079-afb4-ce8c8260f0ca&lt;/SubscriptionArn&gt;

         * &lt;Owner&gt;123456789012&lt;/Owner&gt;
       
         * &lt;Endpoint&gt;example@amazon.com&lt;/Endpoint&gt;
      &lt;/member&gt;
   
         * &lt;/Subscriptions&gt;
  &lt;/ListSubscriptionsResult&gt;
 
         * &lt;ResponseMetadata&gt;
   
         * &lt;RequestId&gt;384ac68d-3775-11df-8963-01868b7c937a&lt;/RequestId&gt;
 
         * &lt;/ResponseMetadata&gt;
&lt;/ListSubscriptionsResponse&gt;
  

         * </queryresponse>
</examples>
         */
        virtual Model::ListSubscriptionsOutcome ListSubscriptions(const Model::ListSubscriptionsRequest& request) const;

        /**
         * <p>Returns a list of the requester's subscriptions. Each call returns a limited
         * list
      of subscriptions, up to 100. If there are more subscriptions, a
         * <code>NextToken</code> is also returned. Use the <code>NextToken</code>
         * parameter in a 
      new <code>ListSubscriptions</code> call to get further
         * results.</p>
<examples>
 <queryrequest>

  http://sns.us-east-1.amazonaws.com/
 
         * &amp;Action=ListSubscriptions
  &amp;SignatureVersion=2
 
         * &amp;SignatureMethod=HmacSHA256
  &amp;Timestamp=2010-03-31T12%3A00%3A00.000Z
 
         * &amp;AWSAccessKeyId=(AWS Access Key ID)
 
         * &amp;Signature=SZmBxEPqfs9R7xxhSt6C1b7PnOEvg%2BSVyyMYJfLRFCA%3D


         * </queryrequest>
 <queryresponse>
  
&lt;ListSubscriptionsResponse
         * xmlns="http://sns.amazonaws.com/doc/2010-03-31/"&gt;
 
         * &lt;ListSubscriptionsResult&gt;
    &lt;Subscriptions&gt;
      &lt;member&gt;
 
         * &lt;TopicArn&gt;arn:aws:sns:us-east-1:698519295917:My-Topic&lt;/TopicArn&gt;
   
         * &lt;Protocol&gt;email&lt;/Protocol&gt;
       
         * &lt;SubscriptionArn&gt;arn:aws:sns:us-east-1:123456789012:My-Topic:80289ba6-0fd4-4079-afb4-ce8c8260f0ca&lt;/SubscriptionArn&gt;

         * &lt;Owner&gt;123456789012&lt;/Owner&gt;
       
         * &lt;Endpoint&gt;example@amazon.com&lt;/Endpoint&gt;
      &lt;/member&gt;
   
         * &lt;/Subscriptions&gt;
  &lt;/ListSubscriptionsResult&gt;
 
         * &lt;ResponseMetadata&gt;
   
         * &lt;RequestId&gt;384ac68d-3775-11df-8963-01868b7c937a&lt;/RequestId&gt;
 
         * &lt;/ResponseMetadata&gt;
&lt;/ListSubscriptionsResponse&gt;
  

         * </queryresponse>
</examples>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListSubscriptionsOutcomeCallable ListSubscriptionsCallable(const Model::ListSubscriptionsRequest& request) const;

        /**
         * <p>Returns a list of the requester's subscriptions. Each call returns a limited
         * list
      of subscriptions, up to 100. If there are more subscriptions, a
         * <code>NextToken</code> is also returned. Use the <code>NextToken</code>
         * parameter in a 
      new <code>ListSubscriptions</code> call to get further
         * results.</p>
<examples>
 <queryrequest>

  http://sns.us-east-1.amazonaws.com/
 
         * &amp;Action=ListSubscriptions
  &amp;SignatureVersion=2
 
         * &amp;SignatureMethod=HmacSHA256
  &amp;Timestamp=2010-03-31T12%3A00%3A00.000Z
 
         * &amp;AWSAccessKeyId=(AWS Access Key ID)
 
         * &amp;Signature=SZmBxEPqfs9R7xxhSt6C1b7PnOEvg%2BSVyyMYJfLRFCA%3D


         * </queryrequest>
 <queryresponse>
  
&lt;ListSubscriptionsResponse
         * xmlns="http://sns.amazonaws.com/doc/2010-03-31/"&gt;
 
         * &lt;ListSubscriptionsResult&gt;
    &lt;Subscriptions&gt;
      &lt;member&gt;
 
         * &lt;TopicArn&gt;arn:aws:sns:us-east-1:698519295917:My-Topic&lt;/TopicArn&gt;
   
         * &lt;Protocol&gt;email&lt;/Protocol&gt;
       
         * &lt;SubscriptionArn&gt;arn:aws:sns:us-east-1:123456789012:My-Topic:80289ba6-0fd4-4079-afb4-ce8c8260f0ca&lt;/SubscriptionArn&gt;

         * &lt;Owner&gt;123456789012&lt;/Owner&gt;
       
         * &lt;Endpoint&gt;example@amazon.com&lt;/Endpoint&gt;
      &lt;/member&gt;
   
         * &lt;/Subscriptions&gt;
  &lt;/ListSubscriptionsResult&gt;
 
         * &lt;ResponseMetadata&gt;
   
         * &lt;RequestId&gt;384ac68d-3775-11df-8963-01868b7c937a&lt;/RequestId&gt;
 
         * &lt;/ResponseMetadata&gt;
&lt;/ListSubscriptionsResponse&gt;
  

         * </queryresponse>
</examples>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListSubscriptionsAsync(const Model::ListSubscriptionsRequest& request, const ListSubscriptionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a list of the subscriptions to a specific topic. Each call returns 
 
         * a limited list of subscriptions, up to 100. If there are more subscriptions, a
         * <code>NextToken</code> is also returned. Use the <code>NextToken</code> 
     
         * parameter in a new <code>ListSubscriptionsByTopic</code> call to get further
         * results.</p>
    <examples>
      <queryrequest>
        
 
         * http://sns.us-east-1.amazonaws.com/
 
         * ?TopicArn=arn%3Aaws%3Asns%3Aus-east-1%3A123456789012%3AMy-Topic
 
         * &amp;Action=ListSubscriptionsByTopic
  &amp;SignatureVersion=2
 
         * &amp;SignatureMethod=HmacSHA256
  &amp;Timestamp=2010-03-31T12%3A00%3A00.000Z
 
         * &amp;AWSAccessKeyId=(AWS Access Key ID)
 
         * &amp;Signature=SZmBxEPqfs9R7xxhSt6C1b7PnOEvg%2BSVyyMYJfLRFCA%3D

     
         * </queryrequest>
      <queryresponse>
       
         * 
&lt;ListSubscriptionsByTopicResponse
         * xmlns="http://sns.amazonaws.com/doc/2010-03-31/"&gt;
 
         * &lt;ListSubscriptionsByTopicResult&gt;
    &lt;Subscriptions&gt;
     
         * &lt;member&gt;
       
         * &lt;TopicArn&gt;arn:aws:sns:us-east-1:123456789012:My-Topic&lt;/TopicArn&gt;
   
         * &lt;Protocol&gt;email&lt;/Protocol&gt;
       
         * &lt;SubscriptionArn&gt;arn:aws:sns:us-east-1:123456789012:My-Topic:80289ba6-0fd4-4079-afb4-ce8c8260f0ca&lt;/SubscriptionArn&gt;

         * &lt;Owner&gt;123456789012&lt;/Owner&gt;
       
         * &lt;Endpoint&gt;example@amazon.com&lt;/Endpoint&gt;
      &lt;/member&gt;
   
         * &lt;/Subscriptions&gt;
  &lt;/ListSubscriptionsByTopicResult&gt;
 
         * &lt;ResponseMetadata&gt;
   
         * &lt;RequestId&gt;b9275252-3774-11df-9540-99d0768312d3&lt;/RequestId&gt;
 
         * &lt;/ResponseMetadata&gt;
&lt;/ListSubscriptionsByTopicResponse&gt;
  
     
         * </queryresponse>
    </examples>
         */
        virtual Model::ListSubscriptionsByTopicOutcome ListSubscriptionsByTopic(const Model::ListSubscriptionsByTopicRequest& request) const;

        /**
         * <p>Returns a list of the subscriptions to a specific topic. Each call returns 
 
         * a limited list of subscriptions, up to 100. If there are more subscriptions, a
         * <code>NextToken</code> is also returned. Use the <code>NextToken</code> 
     
         * parameter in a new <code>ListSubscriptionsByTopic</code> call to get further
         * results.</p>
    <examples>
      <queryrequest>
        
 
         * http://sns.us-east-1.amazonaws.com/
 
         * ?TopicArn=arn%3Aaws%3Asns%3Aus-east-1%3A123456789012%3AMy-Topic
 
         * &amp;Action=ListSubscriptionsByTopic
  &amp;SignatureVersion=2
 
         * &amp;SignatureMethod=HmacSHA256
  &amp;Timestamp=2010-03-31T12%3A00%3A00.000Z
 
         * &amp;AWSAccessKeyId=(AWS Access Key ID)
 
         * &amp;Signature=SZmBxEPqfs9R7xxhSt6C1b7PnOEvg%2BSVyyMYJfLRFCA%3D

     
         * </queryrequest>
      <queryresponse>
       
         * 
&lt;ListSubscriptionsByTopicResponse
         * xmlns="http://sns.amazonaws.com/doc/2010-03-31/"&gt;
 
         * &lt;ListSubscriptionsByTopicResult&gt;
    &lt;Subscriptions&gt;
     
         * &lt;member&gt;
       
         * &lt;TopicArn&gt;arn:aws:sns:us-east-1:123456789012:My-Topic&lt;/TopicArn&gt;
   
         * &lt;Protocol&gt;email&lt;/Protocol&gt;
       
         * &lt;SubscriptionArn&gt;arn:aws:sns:us-east-1:123456789012:My-Topic:80289ba6-0fd4-4079-afb4-ce8c8260f0ca&lt;/SubscriptionArn&gt;

         * &lt;Owner&gt;123456789012&lt;/Owner&gt;
       
         * &lt;Endpoint&gt;example@amazon.com&lt;/Endpoint&gt;
      &lt;/member&gt;
   
         * &lt;/Subscriptions&gt;
  &lt;/ListSubscriptionsByTopicResult&gt;
 
         * &lt;ResponseMetadata&gt;
   
         * &lt;RequestId&gt;b9275252-3774-11df-9540-99d0768312d3&lt;/RequestId&gt;
 
         * &lt;/ResponseMetadata&gt;
&lt;/ListSubscriptionsByTopicResponse&gt;
  
     
         * </queryresponse>
    </examples>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListSubscriptionsByTopicOutcomeCallable ListSubscriptionsByTopicCallable(const Model::ListSubscriptionsByTopicRequest& request) const;

        /**
         * <p>Returns a list of the subscriptions to a specific topic. Each call returns 
 
         * a limited list of subscriptions, up to 100. If there are more subscriptions, a
         * <code>NextToken</code> is also returned. Use the <code>NextToken</code> 
     
         * parameter in a new <code>ListSubscriptionsByTopic</code> call to get further
         * results.</p>
    <examples>
      <queryrequest>
        
 
         * http://sns.us-east-1.amazonaws.com/
 
         * ?TopicArn=arn%3Aaws%3Asns%3Aus-east-1%3A123456789012%3AMy-Topic
 
         * &amp;Action=ListSubscriptionsByTopic
  &amp;SignatureVersion=2
 
         * &amp;SignatureMethod=HmacSHA256
  &amp;Timestamp=2010-03-31T12%3A00%3A00.000Z
 
         * &amp;AWSAccessKeyId=(AWS Access Key ID)
 
         * &amp;Signature=SZmBxEPqfs9R7xxhSt6C1b7PnOEvg%2BSVyyMYJfLRFCA%3D

     
         * </queryrequest>
      <queryresponse>
       
         * 
&lt;ListSubscriptionsByTopicResponse
         * xmlns="http://sns.amazonaws.com/doc/2010-03-31/"&gt;
 
         * &lt;ListSubscriptionsByTopicResult&gt;
    &lt;Subscriptions&gt;
     
         * &lt;member&gt;
       
         * &lt;TopicArn&gt;arn:aws:sns:us-east-1:123456789012:My-Topic&lt;/TopicArn&gt;
   
         * &lt;Protocol&gt;email&lt;/Protocol&gt;
       
         * &lt;SubscriptionArn&gt;arn:aws:sns:us-east-1:123456789012:My-Topic:80289ba6-0fd4-4079-afb4-ce8c8260f0ca&lt;/SubscriptionArn&gt;

         * &lt;Owner&gt;123456789012&lt;/Owner&gt;
       
         * &lt;Endpoint&gt;example@amazon.com&lt;/Endpoint&gt;
      &lt;/member&gt;
   
         * &lt;/Subscriptions&gt;
  &lt;/ListSubscriptionsByTopicResult&gt;
 
         * &lt;ResponseMetadata&gt;
   
         * &lt;RequestId&gt;b9275252-3774-11df-9540-99d0768312d3&lt;/RequestId&gt;
 
         * &lt;/ResponseMetadata&gt;
&lt;/ListSubscriptionsByTopicResponse&gt;
  
     
         * </queryresponse>
    </examples>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListSubscriptionsByTopicAsync(const Model::ListSubscriptionsByTopicRequest& request, const ListSubscriptionsByTopicResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a list of the requester's topics. Each call returns a limited list of
         * topics, up to 100. If
      there are more topics, a <code>NextToken</code> is
         * also returned. Use the <code>NextToken</code> parameter in a new
         * <code>ListTopics</code> call to get 
     further results.</p>
<examples>

         * <queryrequest>

  http://sns.us-east-1.amazonaws.com/
  ?Action=ListTopics
 
         * &amp;SignatureVersion=2
  &amp;SignatureMethod=HmacSHA256
 
         * &amp;Timestamp=2010-03-31T12%3A00%3A00.000Z
  &amp;AWSAccessKeyId=(AWS Access
         * Key ID)
  &amp;Signature=tPg1qKNTNVPydnL3Yx5Fqm2O9GxCr9vh3EF5r9%2F5%2BJs%3D


         * </queryrequest>
 <queryresponse>
  
&lt;ListTopicsResponse
         * xmlns="http://sns.amazonaws.com/doc/2010-03-31/"&gt;
  &lt;ListTopicsResult&gt;

         * &lt;Topics&gt;
      &lt;member&gt;
       
         * &lt;TopicArn&gt;arn:aws:sns:us-east-1:123456789012:My-Topic&lt;/TopicArn&gt;
   
         * &lt;/member&gt;
    &lt;/Topics&gt;
  &lt;/ListTopicsResult&gt;
 
         * &lt;ResponseMetadata&gt;
   
         * &lt;RequestId&gt;3f1478c7-33a9-11df-9540-99d0768312d3&lt;/RequestId&gt;
 
         * &lt;/ResponseMetadata&gt;
&lt;/ListTopicsResponse&gt;
  

         * </queryresponse>
</examples>
         */
        virtual Model::ListTopicsOutcome ListTopics(const Model::ListTopicsRequest& request) const;

        /**
         * <p>Returns a list of the requester's topics. Each call returns a limited list of
         * topics, up to 100. If
      there are more topics, a <code>NextToken</code> is
         * also returned. Use the <code>NextToken</code> parameter in a new
         * <code>ListTopics</code> call to get 
     further results.</p>
<examples>

         * <queryrequest>

  http://sns.us-east-1.amazonaws.com/
  ?Action=ListTopics
 
         * &amp;SignatureVersion=2
  &amp;SignatureMethod=HmacSHA256
 
         * &amp;Timestamp=2010-03-31T12%3A00%3A00.000Z
  &amp;AWSAccessKeyId=(AWS Access
         * Key ID)
  &amp;Signature=tPg1qKNTNVPydnL3Yx5Fqm2O9GxCr9vh3EF5r9%2F5%2BJs%3D


         * </queryrequest>
 <queryresponse>
  
&lt;ListTopicsResponse
         * xmlns="http://sns.amazonaws.com/doc/2010-03-31/"&gt;
  &lt;ListTopicsResult&gt;

         * &lt;Topics&gt;
      &lt;member&gt;
       
         * &lt;TopicArn&gt;arn:aws:sns:us-east-1:123456789012:My-Topic&lt;/TopicArn&gt;
   
         * &lt;/member&gt;
    &lt;/Topics&gt;
  &lt;/ListTopicsResult&gt;
 
         * &lt;ResponseMetadata&gt;
   
         * &lt;RequestId&gt;3f1478c7-33a9-11df-9540-99d0768312d3&lt;/RequestId&gt;
 
         * &lt;/ResponseMetadata&gt;
&lt;/ListTopicsResponse&gt;
  

         * </queryresponse>
</examples>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListTopicsOutcomeCallable ListTopicsCallable(const Model::ListTopicsRequest& request) const;

        /**
         * <p>Returns a list of the requester's topics. Each call returns a limited list of
         * topics, up to 100. If
      there are more topics, a <code>NextToken</code> is
         * also returned. Use the <code>NextToken</code> parameter in a new
         * <code>ListTopics</code> call to get 
     further results.</p>
<examples>

         * <queryrequest>

  http://sns.us-east-1.amazonaws.com/
  ?Action=ListTopics
 
         * &amp;SignatureVersion=2
  &amp;SignatureMethod=HmacSHA256
 
         * &amp;Timestamp=2010-03-31T12%3A00%3A00.000Z
  &amp;AWSAccessKeyId=(AWS Access
         * Key ID)
  &amp;Signature=tPg1qKNTNVPydnL3Yx5Fqm2O9GxCr9vh3EF5r9%2F5%2BJs%3D


         * </queryrequest>
 <queryresponse>
  
&lt;ListTopicsResponse
         * xmlns="http://sns.amazonaws.com/doc/2010-03-31/"&gt;
  &lt;ListTopicsResult&gt;

         * &lt;Topics&gt;
      &lt;member&gt;
       
         * &lt;TopicArn&gt;arn:aws:sns:us-east-1:123456789012:My-Topic&lt;/TopicArn&gt;
   
         * &lt;/member&gt;
    &lt;/Topics&gt;
  &lt;/ListTopicsResult&gt;
 
         * &lt;ResponseMetadata&gt;
   
         * &lt;RequestId&gt;3f1478c7-33a9-11df-9540-99d0768312d3&lt;/RequestId&gt;
 
         * &lt;/ResponseMetadata&gt;
&lt;/ListTopicsResponse&gt;
  

         * </queryresponse>
</examples>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListTopicsAsync(const Model::ListTopicsRequest& request, const ListTopicsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Sends a message to all of a topic's subscribed endpoints. When a
   
         * <code>messageId</code> is returned, the message has been saved and Amazon SNS
         * will attempt to deliver it 
      to the topic's subscribers shortly. The format
         * of the outgoing message to each
      subscribed endpoint depends on the
         * notification protocol selected.</p>
    <p>To use the <code>Publish</code>
         * action for sending a message to a mobile endpoint, such as an app on a Kindle
         * device or mobile phone, 
      you must specify the EndpointArn. The EndpointArn
         * is returned when making a call with the <code>CreatePlatformEndpoint</code>
         * action. 
      The second example below shows a request and response for
         * publishing to a mobile endpoint.
    </p>
    <examples>
      <queryrequest>
  
         * 
  The following example publishes the same message to all protocols:
  
 
         * http://sns.us-east-1.amazonaws.com/
  ?Subject=My%20first%20message
 
         * &amp;TopicArn=arn%3Aaws%3Asns%3Aus-east-1%3A698519295917%3AMy-Topic
 
         * &amp;Message=Hello%20world%21
  &amp;Action=Publish
  &amp;SignatureVersion=2
 
         * &amp;SignatureMethod=HmacSHA256
  &amp;Timestamp=2010-03-31T12%3A00%3A00.000Z
 
         * &amp;AWSAccessKeyId=AKIAIOSFODNN7EXAMPLE
 
         * &amp;Signature=9GZysQ4Jpnz%2BHklqM7VFTvEcjR2LIUtn6jW47054xxE%3D
  
  Use the
         * following JSON object format for the Message parameter to send different
         * messages to each protocol (linebreaks added for readability):
  {
  "default" :
         * "some message",
  "email" : "some email message",
  "email-json" : "some
         * email-json message",
  "http" : "some http message",
  "https" : "some https
         * message",
  "sqs" : "some sqs message"
  }
  

      </queryrequest>
     
         * <queryresponse>
        
&lt;PublishResponse
         * xmlns="http://sns.amazonaws.com/doc/2010-03-31/"&gt;
  &lt;PublishResult&gt;
   
         * &lt;MessageId&gt;94f20ce6-13c5-43a0-9a9e-ca52d816e90b&lt;/MessageId&gt;
 
         * &lt;/PublishResult&gt;
  &lt;ResponseMetadata&gt;
   
         * &lt;RequestId&gt;f187a3c1-376f-11df-8963-01868b7c937a&lt;/RequestId&gt;
 
         * &lt;/ResponseMetadata&gt;
&lt;/PublishResponse&gt;
  
      </queryresponse>
   
         * <queryrequest>
        
POST http://sns.us-west-2.amazonaws.com/
         * HTTP/1.1
...
Action=Publish
&amp;Message=%7B%22default%22%3A%22This+is+the+default+Message%22%2C%22APNS_SANDBOX%22%3A%22%7B+%5C%22aps%5C%22+%3A+%7B+%5C%22alert%5C%22+%3A+%5C%22You+have+got+email.%5C%22%2C+%5C%22badge%5C%22+%3A+9%2C%5C%22sound%5C%22+%3A%5C%22default%5C%22%7D%7D%22%7D
&amp;TargetArn=arn%3Aaws%3Asns%3Aus-west-2%3A803981987763%3Aendpoint%2FAPNS_SANDBOX%2Fpushapp%2F98e9ced9-f136-3893-9d60-776547eafebb
&amp;SignatureMethod=HmacSHA256
&amp;AWSAccessKeyId=AKIAIOSFODNN7EXAMPLE
&amp;SignatureVersion=2
&amp;Version=2010-03-31
&amp;Signature=vmqc4XRupKAxsDAdN4j4Ayw5LQljXMps3kss4bkDfCk%3D
&amp;Timestamp=2013-07-18T22%3A44%3A09.452Z
&amp;MessageStructure=json

         * 

      </queryrequest>
      <queryresponse>
        
HTTP/1.1 200
         * OK
...
&lt;PublishResponse xmlns="http://sns.amazonaws.com/doc/2010-03-31/"&gt;

         * &lt;PublishResult&gt;
   
         * &lt;MessageId&gt;567910cd-659e-55d4-8ccb-5aaf14679dc0&lt;/MessageId&gt;
 
         * &lt;/PublishResult&gt;
  &lt;ResponseMetadata&gt;
   
         * &lt;RequestId&gt;d74b8436-ae13-5ab4-a9ff-ce54dfea72a0&lt;/RequestId&gt;
 
         * &lt;/ResponseMetadata&gt;
&lt;/PublishResponse&gt;
  
      </queryresponse>
   
         * </examples>
         */
        virtual Model::PublishOutcome Publish(const Model::PublishRequest& request) const;

        /**
         * <p>Sends a message to all of a topic's subscribed endpoints. When a
   
         * <code>messageId</code> is returned, the message has been saved and Amazon SNS
         * will attempt to deliver it 
      to the topic's subscribers shortly. The format
         * of the outgoing message to each
      subscribed endpoint depends on the
         * notification protocol selected.</p>
    <p>To use the <code>Publish</code>
         * action for sending a message to a mobile endpoint, such as an app on a Kindle
         * device or mobile phone, 
      you must specify the EndpointArn. The EndpointArn
         * is returned when making a call with the <code>CreatePlatformEndpoint</code>
         * action. 
      The second example below shows a request and response for
         * publishing to a mobile endpoint.
    </p>
    <examples>
      <queryrequest>
  
         * 
  The following example publishes the same message to all protocols:
  
 
         * http://sns.us-east-1.amazonaws.com/
  ?Subject=My%20first%20message
 
         * &amp;TopicArn=arn%3Aaws%3Asns%3Aus-east-1%3A698519295917%3AMy-Topic
 
         * &amp;Message=Hello%20world%21
  &amp;Action=Publish
  &amp;SignatureVersion=2
 
         * &amp;SignatureMethod=HmacSHA256
  &amp;Timestamp=2010-03-31T12%3A00%3A00.000Z
 
         * &amp;AWSAccessKeyId=AKIAIOSFODNN7EXAMPLE
 
         * &amp;Signature=9GZysQ4Jpnz%2BHklqM7VFTvEcjR2LIUtn6jW47054xxE%3D
  
  Use the
         * following JSON object format for the Message parameter to send different
         * messages to each protocol (linebreaks added for readability):
  {
  "default" :
         * "some message",
  "email" : "some email message",
  "email-json" : "some
         * email-json message",
  "http" : "some http message",
  "https" : "some https
         * message",
  "sqs" : "some sqs message"
  }
  

      </queryrequest>
     
         * <queryresponse>
        
&lt;PublishResponse
         * xmlns="http://sns.amazonaws.com/doc/2010-03-31/"&gt;
  &lt;PublishResult&gt;
   
         * &lt;MessageId&gt;94f20ce6-13c5-43a0-9a9e-ca52d816e90b&lt;/MessageId&gt;
 
         * &lt;/PublishResult&gt;
  &lt;ResponseMetadata&gt;
   
         * &lt;RequestId&gt;f187a3c1-376f-11df-8963-01868b7c937a&lt;/RequestId&gt;
 
         * &lt;/ResponseMetadata&gt;
&lt;/PublishResponse&gt;
  
      </queryresponse>
   
         * <queryrequest>
        
POST http://sns.us-west-2.amazonaws.com/
         * HTTP/1.1
...
Action=Publish
&amp;Message=%7B%22default%22%3A%22This+is+the+default+Message%22%2C%22APNS_SANDBOX%22%3A%22%7B+%5C%22aps%5C%22+%3A+%7B+%5C%22alert%5C%22+%3A+%5C%22You+have+got+email.%5C%22%2C+%5C%22badge%5C%22+%3A+9%2C%5C%22sound%5C%22+%3A%5C%22default%5C%22%7D%7D%22%7D
&amp;TargetArn=arn%3Aaws%3Asns%3Aus-west-2%3A803981987763%3Aendpoint%2FAPNS_SANDBOX%2Fpushapp%2F98e9ced9-f136-3893-9d60-776547eafebb
&amp;SignatureMethod=HmacSHA256
&amp;AWSAccessKeyId=AKIAIOSFODNN7EXAMPLE
&amp;SignatureVersion=2
&amp;Version=2010-03-31
&amp;Signature=vmqc4XRupKAxsDAdN4j4Ayw5LQljXMps3kss4bkDfCk%3D
&amp;Timestamp=2013-07-18T22%3A44%3A09.452Z
&amp;MessageStructure=json

         * 

      </queryrequest>
      <queryresponse>
        
HTTP/1.1 200
         * OK
...
&lt;PublishResponse xmlns="http://sns.amazonaws.com/doc/2010-03-31/"&gt;

         * &lt;PublishResult&gt;
   
         * &lt;MessageId&gt;567910cd-659e-55d4-8ccb-5aaf14679dc0&lt;/MessageId&gt;
 
         * &lt;/PublishResult&gt;
  &lt;ResponseMetadata&gt;
   
         * &lt;RequestId&gt;d74b8436-ae13-5ab4-a9ff-ce54dfea72a0&lt;/RequestId&gt;
 
         * &lt;/ResponseMetadata&gt;
&lt;/PublishResponse&gt;
  
      </queryresponse>
   
         * </examples>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PublishOutcomeCallable PublishCallable(const Model::PublishRequest& request) const;

        /**
         * <p>Sends a message to all of a topic's subscribed endpoints. When a
   
         * <code>messageId</code> is returned, the message has been saved and Amazon SNS
         * will attempt to deliver it 
      to the topic's subscribers shortly. The format
         * of the outgoing message to each
      subscribed endpoint depends on the
         * notification protocol selected.</p>
    <p>To use the <code>Publish</code>
         * action for sending a message to a mobile endpoint, such as an app on a Kindle
         * device or mobile phone, 
      you must specify the EndpointArn. The EndpointArn
         * is returned when making a call with the <code>CreatePlatformEndpoint</code>
         * action. 
      The second example below shows a request and response for
         * publishing to a mobile endpoint.
    </p>
    <examples>
      <queryrequest>
  
         * 
  The following example publishes the same message to all protocols:
  
 
         * http://sns.us-east-1.amazonaws.com/
  ?Subject=My%20first%20message
 
         * &amp;TopicArn=arn%3Aaws%3Asns%3Aus-east-1%3A698519295917%3AMy-Topic
 
         * &amp;Message=Hello%20world%21
  &amp;Action=Publish
  &amp;SignatureVersion=2
 
         * &amp;SignatureMethod=HmacSHA256
  &amp;Timestamp=2010-03-31T12%3A00%3A00.000Z
 
         * &amp;AWSAccessKeyId=AKIAIOSFODNN7EXAMPLE
 
         * &amp;Signature=9GZysQ4Jpnz%2BHklqM7VFTvEcjR2LIUtn6jW47054xxE%3D
  
  Use the
         * following JSON object format for the Message parameter to send different
         * messages to each protocol (linebreaks added for readability):
  {
  "default" :
         * "some message",
  "email" : "some email message",
  "email-json" : "some
         * email-json message",
  "http" : "some http message",
  "https" : "some https
         * message",
  "sqs" : "some sqs message"
  }
  

      </queryrequest>
     
         * <queryresponse>
        
&lt;PublishResponse
         * xmlns="http://sns.amazonaws.com/doc/2010-03-31/"&gt;
  &lt;PublishResult&gt;
   
         * &lt;MessageId&gt;94f20ce6-13c5-43a0-9a9e-ca52d816e90b&lt;/MessageId&gt;
 
         * &lt;/PublishResult&gt;
  &lt;ResponseMetadata&gt;
   
         * &lt;RequestId&gt;f187a3c1-376f-11df-8963-01868b7c937a&lt;/RequestId&gt;
 
         * &lt;/ResponseMetadata&gt;
&lt;/PublishResponse&gt;
  
      </queryresponse>
   
         * <queryrequest>
        
POST http://sns.us-west-2.amazonaws.com/
         * HTTP/1.1
...
Action=Publish
&amp;Message=%7B%22default%22%3A%22This+is+the+default+Message%22%2C%22APNS_SANDBOX%22%3A%22%7B+%5C%22aps%5C%22+%3A+%7B+%5C%22alert%5C%22+%3A+%5C%22You+have+got+email.%5C%22%2C+%5C%22badge%5C%22+%3A+9%2C%5C%22sound%5C%22+%3A%5C%22default%5C%22%7D%7D%22%7D
&amp;TargetArn=arn%3Aaws%3Asns%3Aus-west-2%3A803981987763%3Aendpoint%2FAPNS_SANDBOX%2Fpushapp%2F98e9ced9-f136-3893-9d60-776547eafebb
&amp;SignatureMethod=HmacSHA256
&amp;AWSAccessKeyId=AKIAIOSFODNN7EXAMPLE
&amp;SignatureVersion=2
&amp;Version=2010-03-31
&amp;Signature=vmqc4XRupKAxsDAdN4j4Ayw5LQljXMps3kss4bkDfCk%3D
&amp;Timestamp=2013-07-18T22%3A44%3A09.452Z
&amp;MessageStructure=json

         * 

      </queryrequest>
      <queryresponse>
        
HTTP/1.1 200
         * OK
...
&lt;PublishResponse xmlns="http://sns.amazonaws.com/doc/2010-03-31/"&gt;

         * &lt;PublishResult&gt;
   
         * &lt;MessageId&gt;567910cd-659e-55d4-8ccb-5aaf14679dc0&lt;/MessageId&gt;
 
         * &lt;/PublishResult&gt;
  &lt;ResponseMetadata&gt;
   
         * &lt;RequestId&gt;d74b8436-ae13-5ab4-a9ff-ce54dfea72a0&lt;/RequestId&gt;
 
         * &lt;/ResponseMetadata&gt;
&lt;/PublishResponse&gt;
  
      </queryresponse>
   
         * </examples>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PublishAsync(const Model::PublishRequest& request, const PublishResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Removes a statement from a topic's access control policy.</p>
<examples>

         * <queryrequest>

  http://sns.us-east-1.amazonaws.com/
 
         * ?TopicArn=arn%3Aaws%3Asns%3Aus-east-1%3A123456789012%3AMy-Test
 
         * &amp;Label=NewPermission
  &amp;Action=RemovePermission
 
         * &amp;SignatureVersion=2
  &amp;SignatureMethod=HmacSHA256
 
         * &amp;Timestamp=2010-03-31T12%3A00%3A00.000Z
  &amp;AWSAccessKeyId=(AWS Access
         * Key ID)
  &amp;Signature=N1abwRY9i7zaSQmbAlm71pPf9EEFOqNbQL1alzw2yCg%3D


         * </queryrequest>
 <queryresponse>
  
&lt;RemovePermissionResponse
         * xmlns="http://sns.amazonaws.com/doc/2010-03-31/"&gt;
  &lt;ResponseMetadata&gt;

         * &lt;RequestId&gt;d170b150-33a8-11df-995a-2d6fbe836cc1&lt;/RequestId&gt;
 
         * &lt;/ResponseMetadata&gt;
&lt;/RemovePermissionResponse&gt;
  

         * </queryresponse>
</examples>
         */
        virtual Model::RemovePermissionOutcome RemovePermission(const Model::RemovePermissionRequest& request) const;

        /**
         * <p>Removes a statement from a topic's access control policy.</p>
<examples>

         * <queryrequest>

  http://sns.us-east-1.amazonaws.com/
 
         * ?TopicArn=arn%3Aaws%3Asns%3Aus-east-1%3A123456789012%3AMy-Test
 
         * &amp;Label=NewPermission
  &amp;Action=RemovePermission
 
         * &amp;SignatureVersion=2
  &amp;SignatureMethod=HmacSHA256
 
         * &amp;Timestamp=2010-03-31T12%3A00%3A00.000Z
  &amp;AWSAccessKeyId=(AWS Access
         * Key ID)
  &amp;Signature=N1abwRY9i7zaSQmbAlm71pPf9EEFOqNbQL1alzw2yCg%3D


         * </queryrequest>
 <queryresponse>
  
&lt;RemovePermissionResponse
         * xmlns="http://sns.amazonaws.com/doc/2010-03-31/"&gt;
  &lt;ResponseMetadata&gt;

         * &lt;RequestId&gt;d170b150-33a8-11df-995a-2d6fbe836cc1&lt;/RequestId&gt;
 
         * &lt;/ResponseMetadata&gt;
&lt;/RemovePermissionResponse&gt;
  

         * </queryresponse>
</examples>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::RemovePermissionOutcomeCallable RemovePermissionCallable(const Model::RemovePermissionRequest& request) const;

        /**
         * <p>Removes a statement from a topic's access control policy.</p>
<examples>

         * <queryrequest>

  http://sns.us-east-1.amazonaws.com/
 
         * ?TopicArn=arn%3Aaws%3Asns%3Aus-east-1%3A123456789012%3AMy-Test
 
         * &amp;Label=NewPermission
  &amp;Action=RemovePermission
 
         * &amp;SignatureVersion=2
  &amp;SignatureMethod=HmacSHA256
 
         * &amp;Timestamp=2010-03-31T12%3A00%3A00.000Z
  &amp;AWSAccessKeyId=(AWS Access
         * Key ID)
  &amp;Signature=N1abwRY9i7zaSQmbAlm71pPf9EEFOqNbQL1alzw2yCg%3D


         * </queryrequest>
 <queryresponse>
  
&lt;RemovePermissionResponse
         * xmlns="http://sns.amazonaws.com/doc/2010-03-31/"&gt;
  &lt;ResponseMetadata&gt;

         * &lt;RequestId&gt;d170b150-33a8-11df-995a-2d6fbe836cc1&lt;/RequestId&gt;
 
         * &lt;/ResponseMetadata&gt;
&lt;/RemovePermissionResponse&gt;
  

         * </queryresponse>
</examples>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void RemovePermissionAsync(const Model::RemovePermissionRequest& request, const RemovePermissionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Sets the attributes for an endpoint for a device on one of the supported push
         * notification services, such as GCM and APNS.
      For more information, see <a
         * href="http://docs.aws.amazon.com/sns/latest/dg/SNSMobilePush.html">Using Amazon
         * SNS Mobile Push Notifications</a>.
    </p>
    <examples>
      <queryrequest>

         * 
POST http://sns.us-west-2.amazonaws.com/
         * HTTP/1.1
...
Attributes.entry.1.key=CustomUserData
&amp;Action=SetEndpointAttributes
&amp;SignatureMethod=HmacSHA256
&amp;Attributes.entry.1.value=My+custom+userdata
&amp;AWSAccessKeyId=AKIAIOSFODNN7EXAMPLE
&amp;EndpointArn=arn%3Aaws%3Asns%3Aus-west-2%3A123456789012%3Aendpoint%2FGCM%2Fgcmpushapp%2F5e3e9847-3183-3f18-a7e8-671c3a57d4b3
&amp;SignatureVersion=2
&amp;Version=2010-03-31
&amp;Signature=CFTGfGOS5vgSU3%2FZgv2h%2FJdWgr2JQdDJSrUU9k38wSM%3D
&amp;Timestamp=2013-07-01T22%3A56%3A45.582Z


         * </queryrequest>
      <queryresponse>
        
HTTP/1.1 200
         * OK
...
&lt;SetEndpointAttributesResponse
         * xmlns="http://sns.amazonaws.com/doc/2010-03-31/"&gt;
  &lt;ResponseMetadata&gt;

         * &lt;RequestId&gt;2fe0bfc7-3e85-5ee5-a9e2-f58b35e85f6a&lt;/RequestId&gt;
 
         * &lt;/ResponseMetadata&gt;
&lt;/SetEndpointAttributesResponse&gt;

     
         * </queryresponse>
    </examples>
         */
        virtual Model::SetEndpointAttributesOutcome SetEndpointAttributes(const Model::SetEndpointAttributesRequest& request) const;

        /**
         * <p>Sets the attributes for an endpoint for a device on one of the supported push
         * notification services, such as GCM and APNS.
      For more information, see <a
         * href="http://docs.aws.amazon.com/sns/latest/dg/SNSMobilePush.html">Using Amazon
         * SNS Mobile Push Notifications</a>.
    </p>
    <examples>
      <queryrequest>

         * 
POST http://sns.us-west-2.amazonaws.com/
         * HTTP/1.1
...
Attributes.entry.1.key=CustomUserData
&amp;Action=SetEndpointAttributes
&amp;SignatureMethod=HmacSHA256
&amp;Attributes.entry.1.value=My+custom+userdata
&amp;AWSAccessKeyId=AKIAIOSFODNN7EXAMPLE
&amp;EndpointArn=arn%3Aaws%3Asns%3Aus-west-2%3A123456789012%3Aendpoint%2FGCM%2Fgcmpushapp%2F5e3e9847-3183-3f18-a7e8-671c3a57d4b3
&amp;SignatureVersion=2
&amp;Version=2010-03-31
&amp;Signature=CFTGfGOS5vgSU3%2FZgv2h%2FJdWgr2JQdDJSrUU9k38wSM%3D
&amp;Timestamp=2013-07-01T22%3A56%3A45.582Z


         * </queryrequest>
      <queryresponse>
        
HTTP/1.1 200
         * OK
...
&lt;SetEndpointAttributesResponse
         * xmlns="http://sns.amazonaws.com/doc/2010-03-31/"&gt;
  &lt;ResponseMetadata&gt;

         * &lt;RequestId&gt;2fe0bfc7-3e85-5ee5-a9e2-f58b35e85f6a&lt;/RequestId&gt;
 
         * &lt;/ResponseMetadata&gt;
&lt;/SetEndpointAttributesResponse&gt;

     
         * </queryresponse>
    </examples>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::SetEndpointAttributesOutcomeCallable SetEndpointAttributesCallable(const Model::SetEndpointAttributesRequest& request) const;

        /**
         * <p>Sets the attributes for an endpoint for a device on one of the supported push
         * notification services, such as GCM and APNS.
      For more information, see <a
         * href="http://docs.aws.amazon.com/sns/latest/dg/SNSMobilePush.html">Using Amazon
         * SNS Mobile Push Notifications</a>.
    </p>
    <examples>
      <queryrequest>

         * 
POST http://sns.us-west-2.amazonaws.com/
         * HTTP/1.1
...
Attributes.entry.1.key=CustomUserData
&amp;Action=SetEndpointAttributes
&amp;SignatureMethod=HmacSHA256
&amp;Attributes.entry.1.value=My+custom+userdata
&amp;AWSAccessKeyId=AKIAIOSFODNN7EXAMPLE
&amp;EndpointArn=arn%3Aaws%3Asns%3Aus-west-2%3A123456789012%3Aendpoint%2FGCM%2Fgcmpushapp%2F5e3e9847-3183-3f18-a7e8-671c3a57d4b3
&amp;SignatureVersion=2
&amp;Version=2010-03-31
&amp;Signature=CFTGfGOS5vgSU3%2FZgv2h%2FJdWgr2JQdDJSrUU9k38wSM%3D
&amp;Timestamp=2013-07-01T22%3A56%3A45.582Z


         * </queryrequest>
      <queryresponse>
        
HTTP/1.1 200
         * OK
...
&lt;SetEndpointAttributesResponse
         * xmlns="http://sns.amazonaws.com/doc/2010-03-31/"&gt;
  &lt;ResponseMetadata&gt;

         * &lt;RequestId&gt;2fe0bfc7-3e85-5ee5-a9e2-f58b35e85f6a&lt;/RequestId&gt;
 
         * &lt;/ResponseMetadata&gt;
&lt;/SetEndpointAttributesResponse&gt;

     
         * </queryresponse>
    </examples>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void SetEndpointAttributesAsync(const Model::SetEndpointAttributesRequest& request, const SetEndpointAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Sets the attributes of the platform application object for the supported push
         * notification services, 
      such as APNS and GCM.
      For more information,
         * see <a href="http://docs.aws.amazon.com/sns/latest/dg/SNSMobilePush.html">Using
         * Amazon SNS Mobile Push Notifications</a>.
    </p>
    <examples>
     
         * <queryrequest>
        
POST http://sns.us-west-2.amazonaws.com/
         * HTTP/1.1
...
Attributes.entry.1.key=EventEndpointCreated&amp;PlatformApplicationArn=arn%3Aaws%3Asns%3Aus-west-2%3A123456789012%3Aapp%2FGCM%2Fgcmpushapp
&amp;Action=SetPlatformApplicationAttributes
&amp;SignatureMethod=HmacSHA256
&amp;Attributes.entry.1.value=arn%3Aaws%3Asns%3Aus-west-2%3A123456789012%3Atopicarn
&amp;AWSAccessKeyId=AKIAIOSFODNN7EXAMPLE
&amp;SignatureVersion=2
&amp;Version=2010-03-31
&amp;Signature=06L2TsW3jiH%2FGKDYuT8w4NojSrTf4Ig2GKqGeJPhPT4%3D
&amp;Timestamp=2013-07-01T22%3A53%3A17.800Z


         * </queryrequest>
      <queryresponse>
        
HTTP/1.1 200
         * OK
...
&lt;SetPlatformApplicationAttributesResponse
         * xmlns="http://sns.amazonaws.com/doc/2010-03-31/"&gt;
  &lt;ResponseMetadata&gt;

         * &lt;RequestId&gt;cf577bcc-b3dc-5463-88f1-3180b9412395&lt;/RequestId&gt;
 
         * &lt;/ResponseMetadata&gt;
&lt;/SetPlatformApplicationAttributesResponse&gt;

   
         *   </queryresponse>
    </examples>
         */
        virtual Model::SetPlatformApplicationAttributesOutcome SetPlatformApplicationAttributes(const Model::SetPlatformApplicationAttributesRequest& request) const;

        /**
         * <p>Sets the attributes of the platform application object for the supported push
         * notification services, 
      such as APNS and GCM.
      For more information,
         * see <a href="http://docs.aws.amazon.com/sns/latest/dg/SNSMobilePush.html">Using
         * Amazon SNS Mobile Push Notifications</a>.
    </p>
    <examples>
     
         * <queryrequest>
        
POST http://sns.us-west-2.amazonaws.com/
         * HTTP/1.1
...
Attributes.entry.1.key=EventEndpointCreated&amp;PlatformApplicationArn=arn%3Aaws%3Asns%3Aus-west-2%3A123456789012%3Aapp%2FGCM%2Fgcmpushapp
&amp;Action=SetPlatformApplicationAttributes
&amp;SignatureMethod=HmacSHA256
&amp;Attributes.entry.1.value=arn%3Aaws%3Asns%3Aus-west-2%3A123456789012%3Atopicarn
&amp;AWSAccessKeyId=AKIAIOSFODNN7EXAMPLE
&amp;SignatureVersion=2
&amp;Version=2010-03-31
&amp;Signature=06L2TsW3jiH%2FGKDYuT8w4NojSrTf4Ig2GKqGeJPhPT4%3D
&amp;Timestamp=2013-07-01T22%3A53%3A17.800Z


         * </queryrequest>
      <queryresponse>
        
HTTP/1.1 200
         * OK
...
&lt;SetPlatformApplicationAttributesResponse
         * xmlns="http://sns.amazonaws.com/doc/2010-03-31/"&gt;
  &lt;ResponseMetadata&gt;

         * &lt;RequestId&gt;cf577bcc-b3dc-5463-88f1-3180b9412395&lt;/RequestId&gt;
 
         * &lt;/ResponseMetadata&gt;
&lt;/SetPlatformApplicationAttributesResponse&gt;

   
         *   </queryresponse>
    </examples>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::SetPlatformApplicationAttributesOutcomeCallable SetPlatformApplicationAttributesCallable(const Model::SetPlatformApplicationAttributesRequest& request) const;

        /**
         * <p>Sets the attributes of the platform application object for the supported push
         * notification services, 
      such as APNS and GCM.
      For more information,
         * see <a href="http://docs.aws.amazon.com/sns/latest/dg/SNSMobilePush.html">Using
         * Amazon SNS Mobile Push Notifications</a>.
    </p>
    <examples>
     
         * <queryrequest>
        
POST http://sns.us-west-2.amazonaws.com/
         * HTTP/1.1
...
Attributes.entry.1.key=EventEndpointCreated&amp;PlatformApplicationArn=arn%3Aaws%3Asns%3Aus-west-2%3A123456789012%3Aapp%2FGCM%2Fgcmpushapp
&amp;Action=SetPlatformApplicationAttributes
&amp;SignatureMethod=HmacSHA256
&amp;Attributes.entry.1.value=arn%3Aaws%3Asns%3Aus-west-2%3A123456789012%3Atopicarn
&amp;AWSAccessKeyId=AKIAIOSFODNN7EXAMPLE
&amp;SignatureVersion=2
&amp;Version=2010-03-31
&amp;Signature=06L2TsW3jiH%2FGKDYuT8w4NojSrTf4Ig2GKqGeJPhPT4%3D
&amp;Timestamp=2013-07-01T22%3A53%3A17.800Z


         * </queryrequest>
      <queryresponse>
        
HTTP/1.1 200
         * OK
...
&lt;SetPlatformApplicationAttributesResponse
         * xmlns="http://sns.amazonaws.com/doc/2010-03-31/"&gt;
  &lt;ResponseMetadata&gt;

         * &lt;RequestId&gt;cf577bcc-b3dc-5463-88f1-3180b9412395&lt;/RequestId&gt;
 
         * &lt;/ResponseMetadata&gt;
&lt;/SetPlatformApplicationAttributesResponse&gt;

   
         *   </queryresponse>
    </examples>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void SetPlatformApplicationAttributesAsync(const Model::SetPlatformApplicationAttributesRequest& request, const SetPlatformApplicationAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Allows a subscription owner to set an attribute of the topic to a new
         * value.</p>
<examples>
  <queryrequest>
    
The following example sets the
         * delivery policy to 5 total retries
  
  http://sns.us-east-1.amazonaws.com/
 
         * ?AttributeValue={"healthyRetryPolicy":{"numRetries":5}}
 
         * &amp;SubscriptionArn=arn%3Aaws%3Asns%3Aus-east-1%3A123456789012%3AMy-Topic%3A80289ba6-0fd4-4079-afb4-ce8c8260f0ca

         * &amp;AttributeName=DeliveryPolicy
  &amp;Action=SetSubscriptionAttributes
 
         * &amp;SignatureVersion=2
  &amp;SignatureMethod=HmacSHA256
 
         * &amp;Timestamp=2010-03-31T12%3A00%3A00.000Z
  &amp;AWSAccessKeyId=(AWS Access
         * Key Id)
  &amp;Signature=mQA3nJI%2BcmAIY7r8HCArGElSqPX5JG4UGzF4yo0RygE%3D
  
The
         * JSON format for the DeliveryPolicy AttributeValue (linebreaks added for
         * readability):
{
    "healthyRetryPolicy": 
    {
        "minDelayTarget": 
         * &lt;int&gt;,
        "maxDelayTarget": &lt;int&gt;,
        "numRetries":
         * &lt;int&gt;,
        "numMaxDelayRetries": &lt;int&gt;,
       
         * "backoffFunction": "&lt;linear|arithmetic|geometric|exponential&gt;"
    },
   
         * "throttlePolicy":
    {
        "maxReceivesPerSecond": &lt;int&gt;
    }
}
 
         * </queryrequest>
 <queryresponse>
  
&lt;SetSubscriptionAttributesResponse
         * xmlns="http://sns.amazonaws.com/doc/2010-03-31/"&gt;
  &lt;ResponseMetadata&gt;

         * &lt;RequestId&gt;a8763b99-33a7-11df-a9b7-05d48da6f042&lt;/RequestId&gt;
 
         * &lt;/ResponseMetadata&gt;
&lt;/SetSubscriptionAttributesResponse&gt;
  

         * </queryresponse>
</examples>
         */
        virtual Model::SetSubscriptionAttributesOutcome SetSubscriptionAttributes(const Model::SetSubscriptionAttributesRequest& request) const;

        /**
         * <p>Allows a subscription owner to set an attribute of the topic to a new
         * value.</p>
<examples>
  <queryrequest>
    
The following example sets the
         * delivery policy to 5 total retries
  
  http://sns.us-east-1.amazonaws.com/
 
         * ?AttributeValue={"healthyRetryPolicy":{"numRetries":5}}
 
         * &amp;SubscriptionArn=arn%3Aaws%3Asns%3Aus-east-1%3A123456789012%3AMy-Topic%3A80289ba6-0fd4-4079-afb4-ce8c8260f0ca

         * &amp;AttributeName=DeliveryPolicy
  &amp;Action=SetSubscriptionAttributes
 
         * &amp;SignatureVersion=2
  &amp;SignatureMethod=HmacSHA256
 
         * &amp;Timestamp=2010-03-31T12%3A00%3A00.000Z
  &amp;AWSAccessKeyId=(AWS Access
         * Key Id)
  &amp;Signature=mQA3nJI%2BcmAIY7r8HCArGElSqPX5JG4UGzF4yo0RygE%3D
  
The
         * JSON format for the DeliveryPolicy AttributeValue (linebreaks added for
         * readability):
{
    "healthyRetryPolicy": 
    {
        "minDelayTarget": 
         * &lt;int&gt;,
        "maxDelayTarget": &lt;int&gt;,
        "numRetries":
         * &lt;int&gt;,
        "numMaxDelayRetries": &lt;int&gt;,
       
         * "backoffFunction": "&lt;linear|arithmetic|geometric|exponential&gt;"
    },
   
         * "throttlePolicy":
    {
        "maxReceivesPerSecond": &lt;int&gt;
    }
}
 
         * </queryrequest>
 <queryresponse>
  
&lt;SetSubscriptionAttributesResponse
         * xmlns="http://sns.amazonaws.com/doc/2010-03-31/"&gt;
  &lt;ResponseMetadata&gt;

         * &lt;RequestId&gt;a8763b99-33a7-11df-a9b7-05d48da6f042&lt;/RequestId&gt;
 
         * &lt;/ResponseMetadata&gt;
&lt;/SetSubscriptionAttributesResponse&gt;
  

         * </queryresponse>
</examples>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::SetSubscriptionAttributesOutcomeCallable SetSubscriptionAttributesCallable(const Model::SetSubscriptionAttributesRequest& request) const;

        /**
         * <p>Allows a subscription owner to set an attribute of the topic to a new
         * value.</p>
<examples>
  <queryrequest>
    
The following example sets the
         * delivery policy to 5 total retries
  
  http://sns.us-east-1.amazonaws.com/
 
         * ?AttributeValue={"healthyRetryPolicy":{"numRetries":5}}
 
         * &amp;SubscriptionArn=arn%3Aaws%3Asns%3Aus-east-1%3A123456789012%3AMy-Topic%3A80289ba6-0fd4-4079-afb4-ce8c8260f0ca

         * &amp;AttributeName=DeliveryPolicy
  &amp;Action=SetSubscriptionAttributes
 
         * &amp;SignatureVersion=2
  &amp;SignatureMethod=HmacSHA256
 
         * &amp;Timestamp=2010-03-31T12%3A00%3A00.000Z
  &amp;AWSAccessKeyId=(AWS Access
         * Key Id)
  &amp;Signature=mQA3nJI%2BcmAIY7r8HCArGElSqPX5JG4UGzF4yo0RygE%3D
  
The
         * JSON format for the DeliveryPolicy AttributeValue (linebreaks added for
         * readability):
{
    "healthyRetryPolicy": 
    {
        "minDelayTarget": 
         * &lt;int&gt;,
        "maxDelayTarget": &lt;int&gt;,
        "numRetries":
         * &lt;int&gt;,
        "numMaxDelayRetries": &lt;int&gt;,
       
         * "backoffFunction": "&lt;linear|arithmetic|geometric|exponential&gt;"
    },
   
         * "throttlePolicy":
    {
        "maxReceivesPerSecond": &lt;int&gt;
    }
}
 
         * </queryrequest>
 <queryresponse>
  
&lt;SetSubscriptionAttributesResponse
         * xmlns="http://sns.amazonaws.com/doc/2010-03-31/"&gt;
  &lt;ResponseMetadata&gt;

         * &lt;RequestId&gt;a8763b99-33a7-11df-a9b7-05d48da6f042&lt;/RequestId&gt;
 
         * &lt;/ResponseMetadata&gt;
&lt;/SetSubscriptionAttributesResponse&gt;
  

         * </queryresponse>
</examples>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void SetSubscriptionAttributesAsync(const Model::SetSubscriptionAttributesRequest& request, const SetSubscriptionAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Allows a topic owner to set an attribute of the topic to a new
         * value.</p>
<examples>
  <queryrequest>
The following example sets the
         * DisplayName attribute to MyTopicName

  http://sns.us-east-1.amazonaws.com/
 
         * ?AttributeValue=MyTopicName
 
         * &amp;TopicArn=arn%3Aaws%3Asns%3Aus-east-1%3A123456789012%3AMy-Topic
 
         * &amp;AttributeName=DisplayName
  &amp;Action=SetTopicAttributes
 
         * &amp;SignatureVersion=2
  &amp;SignatureMethod=HmacSHA256
 
         * &amp;Timestamp=2010-03-31T12%3A00%3A00.000Z
  &amp;AWSAccessKeyId=(AWS Access
         * Key Id)
  &amp;Signature=mQA3nJI%2BcmAIY7r8HCArGElSqPX5JG4UGzF4yo0RygE%3D
  
The
         * following example sets the delivery policy to 5 total retries
  
 
         * http://sns.us-east-1.amazonaws.com/
 
         * ?AttributeValue={"http":{"defaultHealthyRetryPolicy":{"numRetries":5}}}
 
         * &amp;TopicArn=arn%3Aaws%3Asns%3Aus-east-1%3A123456789012%3AMy-Topic
 
         * &amp;AttributeName=DeliveryPolicy
  &amp;Action=SetTopicAttributes
 
         * &amp;SignatureVersion=2
  &amp;SignatureMethod=HmacSHA256
 
         * &amp;Timestamp=2010-03-31T12%3A00%3A00.000Z
  &amp;AWSAccessKeyId=(AWS Access
         * Key Id)
  &amp;Signature=mQA3nJI%2BcmAIY7r8HCArGElSqPX5JG4UGzF4yo0RygE%3D  
 
         * 
The JSON format for the DeliveryPolicy AttributeValue (linebreaks added for
         * readability):
{
    "http": {
    "defaultHealthyRetryPolicy": 
        {
      
         * "minDelayTarget":  &lt;int&gt;,
        "maxDelayTarget": &lt;int&gt;,
       
         * "numRetries": &lt;int&gt;,
        "numMaxDelayRetries": &lt;int&gt;,
       
         * "backoffFunction": "&lt;linear|arithmetic|geometric|exponential&gt;"
        },

         * "disableSubscriptionOverrides": &lt;boolean&gt;,
    "defaultThrottlePolicy": 
 
         * {
        "maxReceivesPerSecond": &lt;int&gt;
        }
    }
  </queryrequest>

         * <queryresponse>
  
&lt;SetTopicAttributesResponse
         * xmlns="http://sns.amazonaws.com/doc/2010-03-31/"&gt;
  &lt;ResponseMetadata&gt;

         * &lt;RequestId&gt;a8763b99-33a7-11df-a9b7-05d48da6f042&lt;/RequestId&gt;
 
         * &lt;/ResponseMetadata&gt;
&lt;/SetTopicAttributesResponse&gt;
  

         * </queryresponse>
</examples>
         */
        virtual Model::SetTopicAttributesOutcome SetTopicAttributes(const Model::SetTopicAttributesRequest& request) const;

        /**
         * <p>Allows a topic owner to set an attribute of the topic to a new
         * value.</p>
<examples>
  <queryrequest>
The following example sets the
         * DisplayName attribute to MyTopicName

  http://sns.us-east-1.amazonaws.com/
 
         * ?AttributeValue=MyTopicName
 
         * &amp;TopicArn=arn%3Aaws%3Asns%3Aus-east-1%3A123456789012%3AMy-Topic
 
         * &amp;AttributeName=DisplayName
  &amp;Action=SetTopicAttributes
 
         * &amp;SignatureVersion=2
  &amp;SignatureMethod=HmacSHA256
 
         * &amp;Timestamp=2010-03-31T12%3A00%3A00.000Z
  &amp;AWSAccessKeyId=(AWS Access
         * Key Id)
  &amp;Signature=mQA3nJI%2BcmAIY7r8HCArGElSqPX5JG4UGzF4yo0RygE%3D
  
The
         * following example sets the delivery policy to 5 total retries
  
 
         * http://sns.us-east-1.amazonaws.com/
 
         * ?AttributeValue={"http":{"defaultHealthyRetryPolicy":{"numRetries":5}}}
 
         * &amp;TopicArn=arn%3Aaws%3Asns%3Aus-east-1%3A123456789012%3AMy-Topic
 
         * &amp;AttributeName=DeliveryPolicy
  &amp;Action=SetTopicAttributes
 
         * &amp;SignatureVersion=2
  &amp;SignatureMethod=HmacSHA256
 
         * &amp;Timestamp=2010-03-31T12%3A00%3A00.000Z
  &amp;AWSAccessKeyId=(AWS Access
         * Key Id)
  &amp;Signature=mQA3nJI%2BcmAIY7r8HCArGElSqPX5JG4UGzF4yo0RygE%3D  
 
         * 
The JSON format for the DeliveryPolicy AttributeValue (linebreaks added for
         * readability):
{
    "http": {
    "defaultHealthyRetryPolicy": 
        {
      
         * "minDelayTarget":  &lt;int&gt;,
        "maxDelayTarget": &lt;int&gt;,
       
         * "numRetries": &lt;int&gt;,
        "numMaxDelayRetries": &lt;int&gt;,
       
         * "backoffFunction": "&lt;linear|arithmetic|geometric|exponential&gt;"
        },

         * "disableSubscriptionOverrides": &lt;boolean&gt;,
    "defaultThrottlePolicy": 
 
         * {
        "maxReceivesPerSecond": &lt;int&gt;
        }
    }
  </queryrequest>

         * <queryresponse>
  
&lt;SetTopicAttributesResponse
         * xmlns="http://sns.amazonaws.com/doc/2010-03-31/"&gt;
  &lt;ResponseMetadata&gt;

         * &lt;RequestId&gt;a8763b99-33a7-11df-a9b7-05d48da6f042&lt;/RequestId&gt;
 
         * &lt;/ResponseMetadata&gt;
&lt;/SetTopicAttributesResponse&gt;
  

         * </queryresponse>
</examples>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::SetTopicAttributesOutcomeCallable SetTopicAttributesCallable(const Model::SetTopicAttributesRequest& request) const;

        /**
         * <p>Allows a topic owner to set an attribute of the topic to a new
         * value.</p>
<examples>
  <queryrequest>
The following example sets the
         * DisplayName attribute to MyTopicName

  http://sns.us-east-1.amazonaws.com/
 
         * ?AttributeValue=MyTopicName
 
         * &amp;TopicArn=arn%3Aaws%3Asns%3Aus-east-1%3A123456789012%3AMy-Topic
 
         * &amp;AttributeName=DisplayName
  &amp;Action=SetTopicAttributes
 
         * &amp;SignatureVersion=2
  &amp;SignatureMethod=HmacSHA256
 
         * &amp;Timestamp=2010-03-31T12%3A00%3A00.000Z
  &amp;AWSAccessKeyId=(AWS Access
         * Key Id)
  &amp;Signature=mQA3nJI%2BcmAIY7r8HCArGElSqPX5JG4UGzF4yo0RygE%3D
  
The
         * following example sets the delivery policy to 5 total retries
  
 
         * http://sns.us-east-1.amazonaws.com/
 
         * ?AttributeValue={"http":{"defaultHealthyRetryPolicy":{"numRetries":5}}}
 
         * &amp;TopicArn=arn%3Aaws%3Asns%3Aus-east-1%3A123456789012%3AMy-Topic
 
         * &amp;AttributeName=DeliveryPolicy
  &amp;Action=SetTopicAttributes
 
         * &amp;SignatureVersion=2
  &amp;SignatureMethod=HmacSHA256
 
         * &amp;Timestamp=2010-03-31T12%3A00%3A00.000Z
  &amp;AWSAccessKeyId=(AWS Access
         * Key Id)
  &amp;Signature=mQA3nJI%2BcmAIY7r8HCArGElSqPX5JG4UGzF4yo0RygE%3D  
 
         * 
The JSON format for the DeliveryPolicy AttributeValue (linebreaks added for
         * readability):
{
    "http": {
    "defaultHealthyRetryPolicy": 
        {
      
         * "minDelayTarget":  &lt;int&gt;,
        "maxDelayTarget": &lt;int&gt;,
       
         * "numRetries": &lt;int&gt;,
        "numMaxDelayRetries": &lt;int&gt;,
       
         * "backoffFunction": "&lt;linear|arithmetic|geometric|exponential&gt;"
        },

         * "disableSubscriptionOverrides": &lt;boolean&gt;,
    "defaultThrottlePolicy": 
 
         * {
        "maxReceivesPerSecond": &lt;int&gt;
        }
    }
  </queryrequest>

         * <queryresponse>
  
&lt;SetTopicAttributesResponse
         * xmlns="http://sns.amazonaws.com/doc/2010-03-31/"&gt;
  &lt;ResponseMetadata&gt;

         * &lt;RequestId&gt;a8763b99-33a7-11df-a9b7-05d48da6f042&lt;/RequestId&gt;
 
         * &lt;/ResponseMetadata&gt;
&lt;/SetTopicAttributesResponse&gt;
  

         * </queryresponse>
</examples>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void SetTopicAttributesAsync(const Model::SetTopicAttributesRequest& request, const SetTopicAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Prepares to subscribe an endpoint by sending the endpoint a confirmation
         * message. To actually create a
      subscription, the endpoint owner must call
         * the <code>ConfirmSubscription</code>
      action with the token from the
         * confirmation message. Confirmation tokens are
      valid for three
         * days.</p>
<examples>
  <example>
    <description>The following example Query
         * request subscribes an SQS queue to an SNS topic. 
      For more information,
         * see           
      <a
         * href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/sqssubscribe.html">Subscribe
         * Queue to Amazon SNS Topic</a>
      in the <i>Amazon SQS Developer Guide</i>.   
         * 
    </description>
 <queryrequest>

  http://sns.us-west-2.amazonaws.com/
 
         * &amp;Action=Subscribe
 
         * &amp;Endpoint=arn%3Aaws%3Asqs%3Aus-west-2%3A123456789012%3AMyQueue
 
         * &amp;Version=2010-03-31
  &amp;Protocol=sqs
 
         * &amp;TopicArn=arn%3Aaws%3Asns%3Aus-west-2%3A123456789012%3AMyTopic  


         * </queryrequest>
 <queryresponse>
  
&lt;SubscribeResponse
         * xmlns="http://sns.amazonaws.com/doc/2010-03-31/"&gt;
  &lt;SubscribeResult&gt;
 
         * &lt;SubscriptionArn&gt;arn:aws:sns:us-west-2:123456789012:MyTopic:6b0e71bd-7e97-4d97-80ce-4a0994e55286&lt;/SubscriptionArn&gt;

         * &lt;/SubscribeResult&gt;
  &lt;ResponseMetadata&gt;
   
         * &lt;RequestId&gt;c4407779-24a4-56fa-982c-3d927f93a775&lt;/RequestId&gt;
 
         * &lt;/ResponseMetadata&gt;
&lt;/SubscribeResponse&gt;
  
 </queryresponse>
 
         * </example>    
  
</examples>
         */
        virtual Model::SubscribeOutcome Subscribe(const Model::SubscribeRequest& request) const;

        /**
         * <p>Prepares to subscribe an endpoint by sending the endpoint a confirmation
         * message. To actually create a
      subscription, the endpoint owner must call
         * the <code>ConfirmSubscription</code>
      action with the token from the
         * confirmation message. Confirmation tokens are
      valid for three
         * days.</p>
<examples>
  <example>
    <description>The following example Query
         * request subscribes an SQS queue to an SNS topic. 
      For more information,
         * see           
      <a
         * href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/sqssubscribe.html">Subscribe
         * Queue to Amazon SNS Topic</a>
      in the <i>Amazon SQS Developer Guide</i>.   
         * 
    </description>
 <queryrequest>

  http://sns.us-west-2.amazonaws.com/
 
         * &amp;Action=Subscribe
 
         * &amp;Endpoint=arn%3Aaws%3Asqs%3Aus-west-2%3A123456789012%3AMyQueue
 
         * &amp;Version=2010-03-31
  &amp;Protocol=sqs
 
         * &amp;TopicArn=arn%3Aaws%3Asns%3Aus-west-2%3A123456789012%3AMyTopic  


         * </queryrequest>
 <queryresponse>
  
&lt;SubscribeResponse
         * xmlns="http://sns.amazonaws.com/doc/2010-03-31/"&gt;
  &lt;SubscribeResult&gt;
 
         * &lt;SubscriptionArn&gt;arn:aws:sns:us-west-2:123456789012:MyTopic:6b0e71bd-7e97-4d97-80ce-4a0994e55286&lt;/SubscriptionArn&gt;

         * &lt;/SubscribeResult&gt;
  &lt;ResponseMetadata&gt;
   
         * &lt;RequestId&gt;c4407779-24a4-56fa-982c-3d927f93a775&lt;/RequestId&gt;
 
         * &lt;/ResponseMetadata&gt;
&lt;/SubscribeResponse&gt;
  
 </queryresponse>
 
         * </example>    
  
</examples>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::SubscribeOutcomeCallable SubscribeCallable(const Model::SubscribeRequest& request) const;

        /**
         * <p>Prepares to subscribe an endpoint by sending the endpoint a confirmation
         * message. To actually create a
      subscription, the endpoint owner must call
         * the <code>ConfirmSubscription</code>
      action with the token from the
         * confirmation message. Confirmation tokens are
      valid for three
         * days.</p>
<examples>
  <example>
    <description>The following example Query
         * request subscribes an SQS queue to an SNS topic. 
      For more information,
         * see           
      <a
         * href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/sqssubscribe.html">Subscribe
         * Queue to Amazon SNS Topic</a>
      in the <i>Amazon SQS Developer Guide</i>.   
         * 
    </description>
 <queryrequest>

  http://sns.us-west-2.amazonaws.com/
 
         * &amp;Action=Subscribe
 
         * &amp;Endpoint=arn%3Aaws%3Asqs%3Aus-west-2%3A123456789012%3AMyQueue
 
         * &amp;Version=2010-03-31
  &amp;Protocol=sqs
 
         * &amp;TopicArn=arn%3Aaws%3Asns%3Aus-west-2%3A123456789012%3AMyTopic  


         * </queryrequest>
 <queryresponse>
  
&lt;SubscribeResponse
         * xmlns="http://sns.amazonaws.com/doc/2010-03-31/"&gt;
  &lt;SubscribeResult&gt;
 
         * &lt;SubscriptionArn&gt;arn:aws:sns:us-west-2:123456789012:MyTopic:6b0e71bd-7e97-4d97-80ce-4a0994e55286&lt;/SubscriptionArn&gt;

         * &lt;/SubscribeResult&gt;
  &lt;ResponseMetadata&gt;
   
         * &lt;RequestId&gt;c4407779-24a4-56fa-982c-3d927f93a775&lt;/RequestId&gt;
 
         * &lt;/ResponseMetadata&gt;
&lt;/SubscribeResponse&gt;
  
 </queryresponse>
 
         * </example>    
  
</examples>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void SubscribeAsync(const Model::SubscribeRequest& request, const SubscribeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a subscription. If the subscription requires authentication for 
    
         * deletion, only the owner of the subscription or the topic's owner 
      can
         * unsubscribe, and an AWS signature is required. If the 
     
         * <code>Unsubscribe</code> call does not require authentication and the requester
         * is not 
      the subscription owner, a final cancellation message is delivered
         * to the 
      endpoint, so that the endpoint owner can easily resubscribe to the
         * topic if 
      the <code>Unsubscribe</code> request was unintended.</p>
   
         * <examples>
      <queryrequest>
        
  http://sns.us-east-1.amazonaws.com/
 
         * ?SubscriptionArn=arn%3Aaws%3Asns%3Aus-east-1%3A123456789012%3AMy-Topic%3A80289ba6-0fd4-4079-afb4-ce8c8260f0ca

         * &amp;Action=Unsubscribe
  &amp;SignatureVersion=2
 
         * &amp;SignatureMethod=HmacSHA256
  &amp;Timestamp=2010-03-31T12%3A00%3A00.000Z
 
         * &amp;AWSAccessKeyId=(AWS Access Key ID)
 
         * &amp;Signature=e8IwhPzuWeMvPDVrN7jUVxasd3Wv2LuO8x6rE23VCv8%3D

     
         * </queryrequest>
      <queryresponse>
        
&lt;UnsubscribeResponse
         * xmlns="http://sns.amazonaws.com/doc/2010-03-31/"&gt;
  &lt;ResponseMetadata&gt;

         * &lt;RequestId&gt;18e0ac39-3776-11df-84c0-b93cc1666b84&lt;/RequestId&gt;
 
         * &lt;/ResponseMetadata&gt;
&lt;/UnsubscribeResponse&gt;
  
     
         * </queryresponse>
    </examples>
         */
        virtual Model::UnsubscribeOutcome Unsubscribe(const Model::UnsubscribeRequest& request) const;

        /**
         * <p>Deletes a subscription. If the subscription requires authentication for 
    
         * deletion, only the owner of the subscription or the topic's owner 
      can
         * unsubscribe, and an AWS signature is required. If the 
     
         * <code>Unsubscribe</code> call does not require authentication and the requester
         * is not 
      the subscription owner, a final cancellation message is delivered
         * to the 
      endpoint, so that the endpoint owner can easily resubscribe to the
         * topic if 
      the <code>Unsubscribe</code> request was unintended.</p>
   
         * <examples>
      <queryrequest>
        
  http://sns.us-east-1.amazonaws.com/
 
         * ?SubscriptionArn=arn%3Aaws%3Asns%3Aus-east-1%3A123456789012%3AMy-Topic%3A80289ba6-0fd4-4079-afb4-ce8c8260f0ca

         * &amp;Action=Unsubscribe
  &amp;SignatureVersion=2
 
         * &amp;SignatureMethod=HmacSHA256
  &amp;Timestamp=2010-03-31T12%3A00%3A00.000Z
 
         * &amp;AWSAccessKeyId=(AWS Access Key ID)
 
         * &amp;Signature=e8IwhPzuWeMvPDVrN7jUVxasd3Wv2LuO8x6rE23VCv8%3D

     
         * </queryrequest>
      <queryresponse>
        
&lt;UnsubscribeResponse
         * xmlns="http://sns.amazonaws.com/doc/2010-03-31/"&gt;
  &lt;ResponseMetadata&gt;

         * &lt;RequestId&gt;18e0ac39-3776-11df-84c0-b93cc1666b84&lt;/RequestId&gt;
 
         * &lt;/ResponseMetadata&gt;
&lt;/UnsubscribeResponse&gt;
  
     
         * </queryresponse>
    </examples>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UnsubscribeOutcomeCallable UnsubscribeCallable(const Model::UnsubscribeRequest& request) const;

        /**
         * <p>Deletes a subscription. If the subscription requires authentication for 
    
         * deletion, only the owner of the subscription or the topic's owner 
      can
         * unsubscribe, and an AWS signature is required. If the 
     
         * <code>Unsubscribe</code> call does not require authentication and the requester
         * is not 
      the subscription owner, a final cancellation message is delivered
         * to the 
      endpoint, so that the endpoint owner can easily resubscribe to the
         * topic if 
      the <code>Unsubscribe</code> request was unintended.</p>
   
         * <examples>
      <queryrequest>
        
  http://sns.us-east-1.amazonaws.com/
 
         * ?SubscriptionArn=arn%3Aaws%3Asns%3Aus-east-1%3A123456789012%3AMy-Topic%3A80289ba6-0fd4-4079-afb4-ce8c8260f0ca

         * &amp;Action=Unsubscribe
  &amp;SignatureVersion=2
 
         * &amp;SignatureMethod=HmacSHA256
  &amp;Timestamp=2010-03-31T12%3A00%3A00.000Z
 
         * &amp;AWSAccessKeyId=(AWS Access Key ID)
 
         * &amp;Signature=e8IwhPzuWeMvPDVrN7jUVxasd3Wv2LuO8x6rE23VCv8%3D

     
         * </queryrequest>
      <queryresponse>
        
&lt;UnsubscribeResponse
         * xmlns="http://sns.amazonaws.com/doc/2010-03-31/"&gt;
  &lt;ResponseMetadata&gt;

         * &lt;RequestId&gt;18e0ac39-3776-11df-84c0-b93cc1666b84&lt;/RequestId&gt;
 
         * &lt;/ResponseMetadata&gt;
&lt;/UnsubscribeResponse&gt;
  
     
         * </queryresponse>
    </examples>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UnsubscribeAsync(const Model::UnsubscribeRequest& request, const UnsubscribeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


  private:
    void init(const Client::ClientConfiguration& clientConfiguration);

        /**Async helpers**/
        void AddPermissionAsyncHelper(const Model::AddPermissionRequest& request, const AddPermissionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ConfirmSubscriptionAsyncHelper(const Model::ConfirmSubscriptionRequest& request, const ConfirmSubscriptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreatePlatformApplicationAsyncHelper(const Model::CreatePlatformApplicationRequest& request, const CreatePlatformApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreatePlatformEndpointAsyncHelper(const Model::CreatePlatformEndpointRequest& request, const CreatePlatformEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateTopicAsyncHelper(const Model::CreateTopicRequest& request, const CreateTopicResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteEndpointAsyncHelper(const Model::DeleteEndpointRequest& request, const DeleteEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeletePlatformApplicationAsyncHelper(const Model::DeletePlatformApplicationRequest& request, const DeletePlatformApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteTopicAsyncHelper(const Model::DeleteTopicRequest& request, const DeleteTopicResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetEndpointAttributesAsyncHelper(const Model::GetEndpointAttributesRequest& request, const GetEndpointAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetPlatformApplicationAttributesAsyncHelper(const Model::GetPlatformApplicationAttributesRequest& request, const GetPlatformApplicationAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetSubscriptionAttributesAsyncHelper(const Model::GetSubscriptionAttributesRequest& request, const GetSubscriptionAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetTopicAttributesAsyncHelper(const Model::GetTopicAttributesRequest& request, const GetTopicAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListEndpointsByPlatformApplicationAsyncHelper(const Model::ListEndpointsByPlatformApplicationRequest& request, const ListEndpointsByPlatformApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListPlatformApplicationsAsyncHelper(const Model::ListPlatformApplicationsRequest& request, const ListPlatformApplicationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListSubscriptionsAsyncHelper(const Model::ListSubscriptionsRequest& request, const ListSubscriptionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListSubscriptionsByTopicAsyncHelper(const Model::ListSubscriptionsByTopicRequest& request, const ListSubscriptionsByTopicResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListTopicsAsyncHelper(const Model::ListTopicsRequest& request, const ListTopicsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void PublishAsyncHelper(const Model::PublishRequest& request, const PublishResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void RemovePermissionAsyncHelper(const Model::RemovePermissionRequest& request, const RemovePermissionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void SetEndpointAttributesAsyncHelper(const Model::SetEndpointAttributesRequest& request, const SetEndpointAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void SetPlatformApplicationAttributesAsyncHelper(const Model::SetPlatformApplicationAttributesRequest& request, const SetPlatformApplicationAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void SetSubscriptionAttributesAsyncHelper(const Model::SetSubscriptionAttributesRequest& request, const SetSubscriptionAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void SetTopicAttributesAsyncHelper(const Model::SetTopicAttributesRequest& request, const SetTopicAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void SubscribeAsyncHelper(const Model::SubscribeRequest& request, const SubscribeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UnsubscribeAsyncHelper(const Model::UnsubscribeRequest& request, const UnsubscribeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;

    Aws::String m_uri;
    std::shared_ptr<Utils::Threading::Executor> m_executor;
  };

} // namespace SNS
} // namespace Aws
