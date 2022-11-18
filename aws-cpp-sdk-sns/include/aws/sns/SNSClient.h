/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sns/SNS_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/AmazonSerializableWebServiceRequest.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSAsyncOperationTemplate.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/sns/SNSServiceClientModel.h>
#include <aws/sns/SNSLegacyAsyncMacros.h>

namespace Aws
{
namespace SNS
{
  /**
   * <fullname>Amazon Simple Notification Service</fullname> <p>Amazon Simple
   * Notification Service (Amazon SNS) is a web service that enables you to build
   * distributed web-enabled applications. Applications can use Amazon SNS to easily
   * push real-time notification messages to interested subscribers over multiple
   * delivery protocols. For more information about this product see the <a
   * href="http://aws.amazon.com/sns/">Amazon SNS product page</a>. For detailed
   * information about Amazon SNS features and their associated API calls, see the <a
   * href="https://docs.aws.amazon.com/sns/latest/dg/">Amazon SNS Developer
   * Guide</a>. </p> <p>For information on the permissions you need to use this API,
   * see <a
   * href="https://docs.aws.amazon.com/sns/latest/dg/sns-authentication-and-access-control.html">Identity
   * and access management in Amazon SNS</a> in the <i>Amazon SNS Developer
   * Guide.</i> </p> <p>We also provide SDKs that enable you to access Amazon SNS
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
      static const char* SERVICE_NAME;
      static const char* ALLOCATION_TAG;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        SNSClient(const Aws::SNS::SNSClientConfiguration& clientConfiguration = Aws::SNS::SNSClientConfiguration(),
                  std::shared_ptr<SNSEndpointProviderBase> endpointProvider = Aws::MakeShared<SNSEndpointProvider>(ALLOCATION_TAG));

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        SNSClient(const Aws::Auth::AWSCredentials& credentials,
                  std::shared_ptr<SNSEndpointProviderBase> endpointProvider = Aws::MakeShared<SNSEndpointProvider>(ALLOCATION_TAG),
                  const Aws::SNS::SNSClientConfiguration& clientConfiguration = Aws::SNS::SNSClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        SNSClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                  std::shared_ptr<SNSEndpointProviderBase> endpointProvider = Aws::MakeShared<SNSEndpointProvider>(ALLOCATION_TAG),
                  const Aws::SNS::SNSClientConfiguration& clientConfiguration = Aws::SNS::SNSClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        SNSClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        SNSClient(const Aws::Auth::AWSCredentials& credentials,
                  const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        SNSClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                  const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~SNSClient();


        template<typename RequestT,
                 typename HandlerT,
                 typename HandlerContextT,
                 typename OperationFuncT>
        void SubmitAsync(OperationFuncT&& operationFunc,
                         const RequestT& request,
                         const HandlerT& handler,
                         const HandlerContextT& context)
        {
            Aws::Client::MakeAsyncOperation(std::forward<OperationFuncT>(operationFunc), this, request, handler, context, m_executor.get());
        }

        template<typename RequestT,
                 typename HandlerT,
                 typename HandlerContextT,
                 typename OperationFuncT>
        void SubmitAsync(OperationFuncT&& operationFunc,
                         RequestT& request,
                         const HandlerT& handler,
                         const HandlerContextT& context)
        {
            Aws::Client::MakeAsyncStreamingOperation(std::forward<OperationFuncT>(operationFunc), this, request, handler, context, m_executor.get());
        }

        template<typename RequestT,
                 typename OperationFuncT>
        auto SubmitCallable(OperationFuncT&& operationFunc,
                            const RequestT& request) -> std::future<decltype((this->*operationFunc)(request))>
        {
            return Aws::Client::MakeCallableOperation(ALLOCATION_TAG, operationFunc, this, request, m_executor.get());
        }

        template<typename RequestT,
                 typename OperationFuncT>
        auto SubmitCallable(OperationFuncT&& operationFunc,
                            RequestT& request) -> std::future<decltype((this->*operationFunc)(request))>
        {
            return Aws::Client::MakeCallableStreamingOperation(ALLOCATION_TAG, operationFunc, this, request, m_executor.get());
        }


       /**
        * Converts any request object to a presigned URL with the GET method, using region for the signer and a timeout of 15 minutes.
        */
        Aws::String ConvertRequestToPresignedUrl(const Aws::AmazonSerializableWebServiceRequest& requestToConvert, const char* region) const;


        /**
         * <p>Adds a statement to a topic's access control policy, granting access for the
         * specified Amazon Web Services accounts to the specified actions.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sns-2010-03-31/AddPermission">AWS
         * API Reference</a></p>
         */
        virtual Model::AddPermissionOutcome AddPermission(const Model::AddPermissionRequest& request) const;


        /**
         * <p>Accepts a phone number and indicates whether the phone holder has opted out
         * of receiving SMS messages from your Amazon Web Services account. You cannot send
         * SMS messages to a number that is opted out.</p> <p>To resume sending messages,
         * you can opt in the number by using the <code>OptInPhoneNumber</code>
         * action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sns-2010-03-31/CheckIfPhoneNumberIsOptedOut">AWS
         * API Reference</a></p>
         */
        virtual Model::CheckIfPhoneNumberIsOptedOutOutcome CheckIfPhoneNumberIsOptedOut(const Model::CheckIfPhoneNumberIsOptedOutRequest& request) const;


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
         * <p>Creates a platform application object for one of the supported push
         * notification services, such as APNS and GCM (Firebase Cloud Messaging), to which
         * devices and mobile apps may register. You must specify
         * <code>PlatformPrincipal</code> and <code>PlatformCredential</code> attributes
         * when using the <code>CreatePlatformApplication</code> action.</p> <p>
         * <code>PlatformPrincipal</code> and <code>PlatformCredential</code> are received
         * from the notification service.</p> <ul> <li> <p>For <code>ADM</code>,
         * <code>PlatformPrincipal</code> is <code>client id</code> and
         * <code>PlatformCredential</code> is <code>client secret</code>.</p> </li> <li>
         * <p>For <code>Baidu</code>, <code>PlatformPrincipal</code> is <code>API
         * key</code> and <code>PlatformCredential</code> is <code>secret key</code>.</p>
         * </li> <li> <p>For <code>APNS</code> and <code>APNS_SANDBOX</code> using
         * certificate credentials, <code>PlatformPrincipal</code> is <code>SSL
         * certificate</code> and <code>PlatformCredential</code> is <code>private
         * key</code>.</p> </li> <li> <p>For <code>APNS</code> and
         * <code>APNS_SANDBOX</code> using token credentials,
         * <code>PlatformPrincipal</code> is <code>signing key ID</code> and
         * <code>PlatformCredential</code> is <code>signing key</code>.</p> </li> <li>
         * <p>For <code>GCM</code> (Firebase Cloud Messaging), there is no
         * <code>PlatformPrincipal</code> and the <code>PlatformCredential</code> is
         * <code>API key</code>.</p> </li> <li> <p>For <code>MPNS</code>,
         * <code>PlatformPrincipal</code> is <code>TLS certificate</code> and
         * <code>PlatformCredential</code> is <code>private key</code>.</p> </li> <li>
         * <p>For <code>WNS</code>, <code>PlatformPrincipal</code> is <code>Package
         * Security Identifier</code> and <code>PlatformCredential</code> is <code>secret
         * key</code>.</p> </li> </ul> <p>You can use the returned
         * <code>PlatformApplicationArn</code> as an attribute for the
         * <code>CreatePlatformEndpoint</code> action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sns-2010-03-31/CreatePlatformApplication">AWS
         * API Reference</a></p>
         */
        virtual Model::CreatePlatformApplicationOutcome CreatePlatformApplication(const Model::CreatePlatformApplicationRequest& request) const;


        /**
         * <p>Creates an endpoint for a device and mobile app on one of the supported push
         * notification services, such as GCM (Firebase Cloud Messaging) and APNS.
         * <code>CreatePlatformEndpoint</code> requires the
         * <code>PlatformApplicationArn</code> that is returned from
         * <code>CreatePlatformApplication</code>. You can use the returned
         * <code>EndpointArn</code> to send a message to a mobile app or by the
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
         * <p>Adds a destination phone number to an Amazon Web Services account in the SMS
         * sandbox and sends a one-time password (OTP) to that phone number.</p> <p>When
         * you start using Amazon SNS to send SMS messages, your Amazon Web Services
         * account is in the <i>SMS sandbox</i>. The SMS sandbox provides a safe
         * environment for you to try Amazon SNS features without risking your reputation
         * as an SMS sender. While your Amazon Web Services account is in the SMS sandbox,
         * you can use all of the features of Amazon SNS. However, you can send SMS
         * messages only to verified destination phone numbers. For more information,
         * including how to move out of the sandbox to send messages without restrictions,
         * see <a href="https://docs.aws.amazon.com/sns/latest/dg/sns-sms-sandbox.html">SMS
         * sandbox</a> in the <i>Amazon SNS Developer Guide</i>.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sns-2010-03-31/CreateSMSSandboxPhoneNumber">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateSMSSandboxPhoneNumberOutcome CreateSMSSandboxPhoneNumber(const Model::CreateSMSSandboxPhoneNumberRequest& request) const;


        /**
         * <p>Creates a topic to which notifications can be published. Users can create at
         * most 100,000 standard topics (at most 1,000 FIFO topics). For more information,
         * see <a
         * href="https://docs.aws.amazon.com/sns/latest/dg/sns-create-topic.html">Creating
         * an Amazon SNS topic</a> in the <i>Amazon SNS Developer Guide</i>. This action is
         * idempotent, so if the requester already owns a topic with the specified name,
         * that topic's ARN is returned without creating a new topic.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sns-2010-03-31/CreateTopic">AWS API
         * Reference</a></p>
         */
        virtual Model::CreateTopicOutcome CreateTopic(const Model::CreateTopicRequest& request) const;


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
         * <p>Deletes a platform application object for one of the supported push
         * notification services, such as APNS and GCM (Firebase Cloud Messaging). For more
         * information, see <a
         * href="https://docs.aws.amazon.com/sns/latest/dg/SNSMobilePush.html">Using Amazon
         * SNS Mobile Push Notifications</a>. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sns-2010-03-31/DeletePlatformApplication">AWS
         * API Reference</a></p>
         */
        virtual Model::DeletePlatformApplicationOutcome DeletePlatformApplication(const Model::DeletePlatformApplicationRequest& request) const;


        /**
         * <p>Deletes an Amazon Web Services account's verified or pending phone number
         * from the SMS sandbox.</p> <p>When you start using Amazon SNS to send SMS
         * messages, your Amazon Web Services account is in the <i>SMS sandbox</i>. The SMS
         * sandbox provides a safe environment for you to try Amazon SNS features without
         * risking your reputation as an SMS sender. While your Amazon Web Services account
         * is in the SMS sandbox, you can use all of the features of Amazon SNS. However,
         * you can send SMS messages only to verified destination phone numbers. For more
         * information, including how to move out of the sandbox to send messages without
         * restrictions, see <a
         * href="https://docs.aws.amazon.com/sns/latest/dg/sns-sms-sandbox.html">SMS
         * sandbox</a> in the <i>Amazon SNS Developer Guide</i>.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sns-2010-03-31/DeleteSMSSandboxPhoneNumber">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteSMSSandboxPhoneNumberOutcome DeleteSMSSandboxPhoneNumber(const Model::DeleteSMSSandboxPhoneNumberRequest& request) const;


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
         * <p>Retrieves the specified inline <code>DataProtectionPolicy</code> document
         * that is stored in the specified Amazon SNS topic. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sns-2010-03-31/GetDataProtectionPolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::GetDataProtectionPolicyOutcome GetDataProtectionPolicy(const Model::GetDataProtectionPolicyRequest& request) const;


        /**
         * <p>Retrieves the endpoint attributes for a device on one of the supported push
         * notification services, such as GCM (Firebase Cloud Messaging) and APNS. For more
         * information, see <a
         * href="https://docs.aws.amazon.com/sns/latest/dg/SNSMobilePush.html">Using Amazon
         * SNS Mobile Push Notifications</a>. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sns-2010-03-31/GetEndpointAttributes">AWS
         * API Reference</a></p>
         */
        virtual Model::GetEndpointAttributesOutcome GetEndpointAttributes(const Model::GetEndpointAttributesRequest& request) const;


        /**
         * <p>Retrieves the attributes of the platform application object for the supported
         * push notification services, such as APNS and GCM (Firebase Cloud Messaging). For
         * more information, see <a
         * href="https://docs.aws.amazon.com/sns/latest/dg/SNSMobilePush.html">Using Amazon
         * SNS Mobile Push Notifications</a>. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sns-2010-03-31/GetPlatformApplicationAttributes">AWS
         * API Reference</a></p>
         */
        virtual Model::GetPlatformApplicationAttributesOutcome GetPlatformApplicationAttributes(const Model::GetPlatformApplicationAttributesRequest& request) const;


        /**
         * <p>Returns the settings for sending SMS messages from your Amazon Web Services
         * account.</p> <p>These settings are set with the <code>SetSMSAttributes</code>
         * action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sns-2010-03-31/GetSMSAttributes">AWS
         * API Reference</a></p>
         */
        virtual Model::GetSMSAttributesOutcome GetSMSAttributes(const Model::GetSMSAttributesRequest& request) const;


        /**
         * <p>Retrieves the SMS sandbox status for the calling Amazon Web Services account
         * in the target Amazon Web Services Region.</p> <p>When you start using Amazon SNS
         * to send SMS messages, your Amazon Web Services account is in the <i>SMS
         * sandbox</i>. The SMS sandbox provides a safe environment for you to try Amazon
         * SNS features without risking your reputation as an SMS sender. While your Amazon
         * Web Services account is in the SMS sandbox, you can use all of the features of
         * Amazon SNS. However, you can send SMS messages only to verified destination
         * phone numbers. For more information, including how to move out of the sandbox to
         * send messages without restrictions, see <a
         * href="https://docs.aws.amazon.com/sns/latest/dg/sns-sms-sandbox.html">SMS
         * sandbox</a> in the <i>Amazon SNS Developer Guide</i>.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sns-2010-03-31/GetSMSSandboxAccountStatus">AWS
         * API Reference</a></p>
         */
        virtual Model::GetSMSSandboxAccountStatusOutcome GetSMSSandboxAccountStatus(const Model::GetSMSSandboxAccountStatusRequest& request) const;


        /**
         * <p>Returns all of the properties of a subscription.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sns-2010-03-31/GetSubscriptionAttributes">AWS
         * API Reference</a></p>
         */
        virtual Model::GetSubscriptionAttributesOutcome GetSubscriptionAttributes(const Model::GetSubscriptionAttributesRequest& request) const;


        /**
         * <p>Returns all of the properties of a topic. Topic properties returned might
         * differ based on the authorization of the user.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sns-2010-03-31/GetTopicAttributes">AWS
         * API Reference</a></p>
         */
        virtual Model::GetTopicAttributesOutcome GetTopicAttributes(const Model::GetTopicAttributesRequest& request) const;


        /**
         * <p>Lists the endpoints and endpoint attributes for devices in a supported push
         * notification service, such as GCM (Firebase Cloud Messaging) and APNS. The
         * results for <code>ListEndpointsByPlatformApplication</code> are paginated and
         * return a limited list of endpoints, up to 100. If additional records are
         * available after the first page results, then a NextToken string will be
         * returned. To receive the next page, you call
         * <code>ListEndpointsByPlatformApplication</code> again using the NextToken string
         * received from the previous call. When there are no more records to return,
         * NextToken will be null. For more information, see <a
         * href="https://docs.aws.amazon.com/sns/latest/dg/SNSMobilePush.html">Using Amazon
         * SNS Mobile Push Notifications</a>. </p> <p>This action is throttled at 30
         * transactions per second (TPS).</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sns-2010-03-31/ListEndpointsByPlatformApplication">AWS
         * API Reference</a></p>
         */
        virtual Model::ListEndpointsByPlatformApplicationOutcome ListEndpointsByPlatformApplication(const Model::ListEndpointsByPlatformApplicationRequest& request) const;


        /**
         * <p>Lists the calling Amazon Web Services account's dedicated origination numbers
         * and their metadata. For more information about origination numbers, see <a
         * href="https://docs.aws.amazon.com/sns/latest/dg/channels-sms-originating-identities-origination-numbers.html">Origination
         * numbers</a> in the <i>Amazon SNS Developer Guide</i>.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sns-2010-03-31/ListOriginationNumbers">AWS
         * API Reference</a></p>
         */
        virtual Model::ListOriginationNumbersOutcome ListOriginationNumbers(const Model::ListOriginationNumbersRequest& request) const;


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
         * <p>Lists the platform application objects for the supported push notification
         * services, such as APNS and GCM (Firebase Cloud Messaging). The results for
         * <code>ListPlatformApplications</code> are paginated and return a limited list of
         * applications, up to 100. If additional records are available after the first
         * page results, then a NextToken string will be returned. To receive the next
         * page, you call <code>ListPlatformApplications</code> using the NextToken string
         * received from the previous call. When there are no more records to return,
         * <code>NextToken</code> will be null. For more information, see <a
         * href="https://docs.aws.amazon.com/sns/latest/dg/SNSMobilePush.html">Using Amazon
         * SNS Mobile Push Notifications</a>. </p> <p>This action is throttled at 15
         * transactions per second (TPS).</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sns-2010-03-31/ListPlatformApplications">AWS
         * API Reference</a></p>
         */
        virtual Model::ListPlatformApplicationsOutcome ListPlatformApplications(const Model::ListPlatformApplicationsRequest& request) const;


        /**
         * <p>Lists the calling Amazon Web Services account's current verified and pending
         * destination phone numbers in the SMS sandbox.</p> <p>When you start using Amazon
         * SNS to send SMS messages, your Amazon Web Services account is in the <i>SMS
         * sandbox</i>. The SMS sandbox provides a safe environment for you to try Amazon
         * SNS features without risking your reputation as an SMS sender. While your Amazon
         * Web Services account is in the SMS sandbox, you can use all of the features of
         * Amazon SNS. However, you can send SMS messages only to verified destination
         * phone numbers. For more information, including how to move out of the sandbox to
         * send messages without restrictions, see <a
         * href="https://docs.aws.amazon.com/sns/latest/dg/sns-sms-sandbox.html">SMS
         * sandbox</a> in the <i>Amazon SNS Developer Guide</i>.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sns-2010-03-31/ListSMSSandboxPhoneNumbers">AWS
         * API Reference</a></p>
         */
        virtual Model::ListSMSSandboxPhoneNumbersOutcome ListSMSSandboxPhoneNumbers(const Model::ListSMSSandboxPhoneNumbersRequest& request) const;


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
         * <p>List all tags added to the specified Amazon SNS topic. For an overview, see
         * <a href="https://docs.aws.amazon.com/sns/latest/dg/sns-tags.html">Amazon SNS
         * Tags</a> in the <i>Amazon Simple Notification Service Developer
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sns-2010-03-31/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;


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
         * <p>Use this request to opt in a phone number that is opted out, which enables
         * you to resume sending SMS messages to the number.</p> <p>You can opt in a phone
         * number only once every 30 days.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sns-2010-03-31/OptInPhoneNumber">AWS
         * API Reference</a></p>
         */
        virtual Model::OptInPhoneNumberOutcome OptInPhoneNumber(const Model::OptInPhoneNumberRequest& request) const;


        /**
         * <p>Sends a message to an Amazon SNS topic, a text message (SMS message) directly
         * to a phone number, or a message to a mobile platform endpoint (when you specify
         * the <code>TargetArn</code>).</p> <p>If you send a message to a topic, Amazon SNS
         * delivers the message to each endpoint that is subscribed to the topic. The
         * format of the message depends on the notification protocol for each subscribed
         * endpoint.</p> <p>When a <code>messageId</code> is returned, the message is saved
         * and Amazon SNS immediately delivers it to subscribers.</p> <p>To use the
         * <code>Publish</code> action for publishing a message to a mobile endpoint, such
         * as an app on a Kindle device or mobile phone, you must specify the EndpointArn
         * for the TargetArn parameter. The EndpointArn is returned when making a call with
         * the <code>CreatePlatformEndpoint</code> action. </p> <p>For more information
         * about formatting messages, see <a
         * href="https://docs.aws.amazon.com/sns/latest/dg/mobile-push-send-custommessage.html">Send
         * Custom Platform-Specific Payloads in Messages to Mobile Devices</a>. </p>
         *  <p>You can publish messages only to topics and endpoints in the same
         * Amazon Web Services Region.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sns-2010-03-31/Publish">AWS API
         * Reference</a></p>
         */
        virtual Model::PublishOutcome Publish(const Model::PublishRequest& request) const;


        /**
         * <p>Publishes up to ten messages to the specified topic. This is a batch version
         * of <code>Publish</code>. For FIFO topics, multiple messages within a single
         * batch are published in the order they are sent, and messages are deduplicated
         * within the batch and across batches for 5 minutes.</p> <p>The result of
         * publishing each message is reported individually in the response. Because the
         * batch request can result in a combination of successful and unsuccessful
         * actions, you should check for batch errors even when the call returns an HTTP
         * status code of <code>200</code>.</p> <p>The maximum allowed individual message
         * size and the maximum total payload size (the sum of the individual lengths of
         * all of the batched messages) are both 256 KB (262,144 bytes). </p> <p>Some
         * actions take lists of parameters. These lists are specified using the
         * <code>param.n</code> notation. Values of <code>n</code> are integers starting
         * from 1. For example, a parameter list with two elements looks like this: </p>
         * <p>&amp;AttributeName.1=first</p> <p>&amp;AttributeName.2=second</p> <p>If you
         * send a batch message to a topic, Amazon SNS publishes the batch message to each
         * endpoint that is subscribed to the topic. The format of the batch message
         * depends on the notification protocol for each subscribed endpoint.</p> <p>When a
         * <code>messageId</code> is returned, the batch message is saved and Amazon SNS
         * immediately delivers the message to subscribers.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sns-2010-03-31/PublishBatch">AWS
         * API Reference</a></p>
         */
        virtual Model::PublishBatchOutcome PublishBatch(const Model::PublishBatchRequest& request) const;


        /**
         * <p>Adds or updates an inline policy document that is stored in the specified
         * Amazon SNS topic.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sns-2010-03-31/PutDataProtectionPolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::PutDataProtectionPolicyOutcome PutDataProtectionPolicy(const Model::PutDataProtectionPolicyRequest& request) const;


        /**
         * <p>Removes a statement from a topic's access control policy.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sns-2010-03-31/RemovePermission">AWS
         * API Reference</a></p>
         */
        virtual Model::RemovePermissionOutcome RemovePermission(const Model::RemovePermissionRequest& request) const;


        /**
         * <p>Sets the attributes for an endpoint for a device on one of the supported push
         * notification services, such as GCM (Firebase Cloud Messaging) and APNS. For more
         * information, see <a
         * href="https://docs.aws.amazon.com/sns/latest/dg/SNSMobilePush.html">Using Amazon
         * SNS Mobile Push Notifications</a>. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sns-2010-03-31/SetEndpointAttributes">AWS
         * API Reference</a></p>
         */
        virtual Model::SetEndpointAttributesOutcome SetEndpointAttributes(const Model::SetEndpointAttributesRequest& request) const;


        /**
         * <p>Sets the attributes of the platform application object for the supported push
         * notification services, such as APNS and GCM (Firebase Cloud Messaging). For more
         * information, see <a
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
         * <p>Use this request to set the default settings for sending SMS messages and
         * receiving daily SMS usage reports.</p> <p>You can override some of these
         * settings for a single message when you use the <code>Publish</code> action with
         * the <code>MessageAttributes.entry.N</code> parameter. For more information, see
         * <a
         * href="https://docs.aws.amazon.com/sns/latest/dg/sms_publish-to-phone.html">Publishing
         * to a mobile phone</a> in the <i>Amazon SNS Developer Guide</i>.</p>  <p>To
         * use this operation, you must grant the Amazon SNS service principal
         * (<code>sns.amazonaws.com</code>) permission to perform the
         * <code>s3:ListBucket</code> action. </p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sns-2010-03-31/SetSMSAttributes">AWS
         * API Reference</a></p>
         */
        virtual Model::SetSMSAttributesOutcome SetSMSAttributes(const Model::SetSMSAttributesRequest& request) const;


        /**
         * <p>Allows a subscription owner to set an attribute of the subscription to a new
         * value.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sns-2010-03-31/SetSubscriptionAttributes">AWS
         * API Reference</a></p>
         */
        virtual Model::SetSubscriptionAttributesOutcome SetSubscriptionAttributes(const Model::SetSubscriptionAttributesRequest& request) const;


        /**
         * <p>Allows a topic owner to set an attribute of the topic to a new
         * value.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sns-2010-03-31/SetTopicAttributes">AWS
         * API Reference</a></p>
         */
        virtual Model::SetTopicAttributesOutcome SetTopicAttributes(const Model::SetTopicAttributesRequest& request) const;


        /**
         * <p>Subscribes an endpoint to an Amazon SNS topic. If the endpoint type is HTTP/S
         * or email, or if the endpoint and the topic are not in the same Amazon Web
         * Services account, the endpoint owner must run the
         * <code>ConfirmSubscription</code> action to confirm the subscription.</p> <p>You
         * call the <code>ConfirmSubscription</code> action with the token from the
         * subscription response. Confirmation tokens are valid for three days.</p> <p>This
         * action is throttled at 100 transactions per second (TPS).</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sns-2010-03-31/Subscribe">AWS API
         * Reference</a></p>
         */
        virtual Model::SubscribeOutcome Subscribe(const Model::SubscribeRequest& request) const;


        /**
         * <p>Add tags to the specified Amazon SNS topic. For an overview, see <a
         * href="https://docs.aws.amazon.com/sns/latest/dg/sns-tags.html">Amazon SNS
         * Tags</a> in the <i>Amazon SNS Developer Guide</i>.</p> <p>When you use topic
         * tags, keep the following guidelines in mind:</p> <ul> <li> <p>Adding more than
         * 50 tags to a topic isn't recommended.</p> </li> <li> <p>Tags don't have any
         * semantic meaning. Amazon SNS interprets tags as character strings.</p> </li>
         * <li> <p>Tags are case-sensitive.</p> </li> <li> <p>A new tag with a key
         * identical to that of an existing tag overwrites the existing tag.</p> </li> <li>
         * <p>Tagging actions are limited to 10 TPS per Amazon Web Services account, per
         * Amazon Web Services Region. If your application requires a higher throughput,
         * file a <a
         * href="https://console.aws.amazon.com/support/home#/case/create?issueType=technical">technical
         * support request</a>.</p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sns-2010-03-31/TagResource">AWS API
         * Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;


        /**
         * <p>Deletes a subscription. If the subscription requires authentication for
         * deletion, only the owner of the subscription or the topic's owner can
         * unsubscribe, and an Amazon Web Services signature is required. If the
         * <code>Unsubscribe</code> call does not require authentication and the requester
         * is not the subscription owner, a final cancellation message is delivered to the
         * endpoint, so that the endpoint owner can easily resubscribe to the topic if the
         * <code>Unsubscribe</code> request was unintended.</p> <p>This action is throttled
         * at 100 transactions per second (TPS).</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sns-2010-03-31/Unsubscribe">AWS API
         * Reference</a></p>
         */
        virtual Model::UnsubscribeOutcome Unsubscribe(const Model::UnsubscribeRequest& request) const;


        /**
         * <p>Remove tags from the specified Amazon SNS topic. For an overview, see <a
         * href="https://docs.aws.amazon.com/sns/latest/dg/sns-tags.html">Amazon SNS
         * Tags</a> in the <i>Amazon SNS Developer Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sns-2010-03-31/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;


        /**
         * <p>Verifies a destination phone number with a one-time password (OTP) for the
         * calling Amazon Web Services account.</p> <p>When you start using Amazon SNS to
         * send SMS messages, your Amazon Web Services account is in the <i>SMS
         * sandbox</i>. The SMS sandbox provides a safe environment for you to try Amazon
         * SNS features without risking your reputation as an SMS sender. While your Amazon
         * Web Services account is in the SMS sandbox, you can use all of the features of
         * Amazon SNS. However, you can send SMS messages only to verified destination
         * phone numbers. For more information, including how to move out of the sandbox to
         * send messages without restrictions, see <a
         * href="https://docs.aws.amazon.com/sns/latest/dg/sns-sms-sandbox.html">SMS
         * sandbox</a> in the <i>Amazon SNS Developer Guide</i>.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sns-2010-03-31/VerifySMSSandboxPhoneNumber">AWS
         * API Reference</a></p>
         */
        virtual Model::VerifySMSSandboxPhoneNumberOutcome VerifySMSSandboxPhoneNumber(const Model::VerifySMSSandboxPhoneNumberRequest& request) const;



        void OverrideEndpoint(const Aws::String& endpoint);
        std::shared_ptr<SNSEndpointProviderBase>& accessEndpointProvider();
  private:
        void init(const SNSClientConfiguration& clientConfiguration);

        SNSClientConfiguration m_clientConfiguration;
        std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
        std::shared_ptr<SNSEndpointProviderBase> m_endpointProvider;
  };

} // namespace SNS
} // namespace Aws
