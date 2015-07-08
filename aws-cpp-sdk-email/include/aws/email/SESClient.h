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
#include <aws/email/SES_EXPORTS.h>
#include <aws/email/SESErrors.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/utils/Event.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/email/model/DeleteIdentityResult.h>
#include <aws/email/model/DeleteIdentityPolicyResult.h>
#include <aws/email/model/GetIdentityDkimAttributesResult.h>
#include <aws/email/model/GetIdentityNotificationAttributesResult.h>
#include <aws/email/model/GetIdentityPoliciesResult.h>
#include <aws/email/model/GetIdentityVerificationAttributesResult.h>
#include <aws/email/model/GetSendQuotaResult.h>
#include <aws/email/model/GetSendStatisticsResult.h>
#include <aws/email/model/ListIdentitiesResult.h>
#include <aws/email/model/ListIdentityPoliciesResult.h>
#include <aws/email/model/ListVerifiedEmailAddressesResult.h>
#include <aws/email/model/PutIdentityPolicyResult.h>
#include <aws/email/model/SendEmailResult.h>
#include <aws/email/model/SendRawEmailResult.h>
#include <aws/email/model/SetIdentityDkimEnabledResult.h>
#include <aws/email/model/SetIdentityFeedbackForwardingEnabledResult.h>
#include <aws/email/model/SetIdentityNotificationTopicResult.h>
#include <aws/email/model/VerifyDomainDkimResult.h>
#include <aws/email/model/VerifyDomainIdentityResult.h>
#include <aws/email/model/VerifyEmailIdentityResult.h>
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

namespace SES
{

namespace Model
{
  class DeleteIdentityRequest;
  class DeleteIdentityPolicyRequest;
  class DeleteVerifiedEmailAddressRequest;
  class GetIdentityDkimAttributesRequest;
  class GetIdentityNotificationAttributesRequest;
  class GetIdentityPoliciesRequest;
  class GetIdentityVerificationAttributesRequest;
  class GetSendQuotaRequest;
  class GetSendStatisticsRequest;
  class ListIdentitiesRequest;
  class ListIdentityPoliciesRequest;
  class ListVerifiedEmailAddressesRequest;
  class PutIdentityPolicyRequest;
  class SendEmailRequest;
  class SendRawEmailRequest;
  class SetIdentityDkimEnabledRequest;
  class SetIdentityFeedbackForwardingEnabledRequest;
  class SetIdentityNotificationTopicRequest;
  class VerifyDomainDkimRequest;
  class VerifyDomainIdentityRequest;
  class VerifyEmailAddressRequest;
  class VerifyEmailIdentityRequest;

  typedef Utils::Outcome<DeleteIdentityResult, Client::AWSError<SESErrors>> DeleteIdentityOutcome;
  typedef Utils::Outcome<DeleteIdentityPolicyResult, Client::AWSError<SESErrors>> DeleteIdentityPolicyOutcome;
  typedef Utils::Outcome<NoResult, Client::AWSError<SESErrors>> DeleteVerifiedEmailAddressOutcome;
  typedef Utils::Outcome<GetIdentityDkimAttributesResult, Client::AWSError<SESErrors>> GetIdentityDkimAttributesOutcome;
  typedef Utils::Outcome<GetIdentityNotificationAttributesResult, Client::AWSError<SESErrors>> GetIdentityNotificationAttributesOutcome;
  typedef Utils::Outcome<GetIdentityPoliciesResult, Client::AWSError<SESErrors>> GetIdentityPoliciesOutcome;
  typedef Utils::Outcome<GetIdentityVerificationAttributesResult, Client::AWSError<SESErrors>> GetIdentityVerificationAttributesOutcome;
  typedef Utils::Outcome<GetSendQuotaResult, Client::AWSError<SESErrors>> GetSendQuotaOutcome;
  typedef Utils::Outcome<GetSendStatisticsResult, Client::AWSError<SESErrors>> GetSendStatisticsOutcome;
  typedef Utils::Outcome<ListIdentitiesResult, Client::AWSError<SESErrors>> ListIdentitiesOutcome;
  typedef Utils::Outcome<ListIdentityPoliciesResult, Client::AWSError<SESErrors>> ListIdentityPoliciesOutcome;
  typedef Utils::Outcome<ListVerifiedEmailAddressesResult, Client::AWSError<SESErrors>> ListVerifiedEmailAddressesOutcome;
  typedef Utils::Outcome<PutIdentityPolicyResult, Client::AWSError<SESErrors>> PutIdentityPolicyOutcome;
  typedef Utils::Outcome<SendEmailResult, Client::AWSError<SESErrors>> SendEmailOutcome;
  typedef Utils::Outcome<SendRawEmailResult, Client::AWSError<SESErrors>> SendRawEmailOutcome;
  typedef Utils::Outcome<SetIdentityDkimEnabledResult, Client::AWSError<SESErrors>> SetIdentityDkimEnabledOutcome;
  typedef Utils::Outcome<SetIdentityFeedbackForwardingEnabledResult, Client::AWSError<SESErrors>> SetIdentityFeedbackForwardingEnabledOutcome;
  typedef Utils::Outcome<SetIdentityNotificationTopicResult, Client::AWSError<SESErrors>> SetIdentityNotificationTopicOutcome;
  typedef Utils::Outcome<VerifyDomainDkimResult, Client::AWSError<SESErrors>> VerifyDomainDkimOutcome;
  typedef Utils::Outcome<VerifyDomainIdentityResult, Client::AWSError<SESErrors>> VerifyDomainIdentityOutcome;
  typedef Utils::Outcome<NoResult, Client::AWSError<SESErrors>> VerifyEmailAddressOutcome;
  typedef Utils::Outcome<VerifyEmailIdentityResult, Client::AWSError<SESErrors>> VerifyEmailIdentityOutcome;

  typedef std::future<DeleteIdentityOutcome> DeleteIdentityOutcomeCallable;
  typedef std::future<DeleteIdentityPolicyOutcome> DeleteIdentityPolicyOutcomeCallable;
  typedef std::future<DeleteVerifiedEmailAddressOutcome> DeleteVerifiedEmailAddressOutcomeCallable;
  typedef std::future<GetIdentityDkimAttributesOutcome> GetIdentityDkimAttributesOutcomeCallable;
  typedef std::future<GetIdentityNotificationAttributesOutcome> GetIdentityNotificationAttributesOutcomeCallable;
  typedef std::future<GetIdentityPoliciesOutcome> GetIdentityPoliciesOutcomeCallable;
  typedef std::future<GetIdentityVerificationAttributesOutcome> GetIdentityVerificationAttributesOutcomeCallable;
  typedef std::future<GetSendQuotaOutcome> GetSendQuotaOutcomeCallable;
  typedef std::future<GetSendStatisticsOutcome> GetSendStatisticsOutcomeCallable;
  typedef std::future<ListIdentitiesOutcome> ListIdentitiesOutcomeCallable;
  typedef std::future<ListIdentityPoliciesOutcome> ListIdentityPoliciesOutcomeCallable;
  typedef std::future<ListVerifiedEmailAddressesOutcome> ListVerifiedEmailAddressesOutcomeCallable;
  typedef std::future<PutIdentityPolicyOutcome> PutIdentityPolicyOutcomeCallable;
  typedef std::future<SendEmailOutcome> SendEmailOutcomeCallable;
  typedef std::future<SendRawEmailOutcome> SendRawEmailOutcomeCallable;
  typedef std::future<SetIdentityDkimEnabledOutcome> SetIdentityDkimEnabledOutcomeCallable;
  typedef std::future<SetIdentityFeedbackForwardingEnabledOutcome> SetIdentityFeedbackForwardingEnabledOutcomeCallable;
  typedef std::future<SetIdentityNotificationTopicOutcome> SetIdentityNotificationTopicOutcomeCallable;
  typedef std::future<VerifyDomainDkimOutcome> VerifyDomainDkimOutcomeCallable;
  typedef std::future<VerifyDomainIdentityOutcome> VerifyDomainIdentityOutcomeCallable;
  typedef std::future<VerifyEmailAddressOutcome> VerifyEmailAddressOutcomeCallable;
  typedef std::future<VerifyEmailIdentityOutcome> VerifyEmailIdentityOutcomeCallable;
} // namespace Model

  class SESClient;

  typedef Aws::Utils::Event<SESClient, const Model::DeleteIdentityRequest&, const Model::DeleteIdentityOutcome&, const Aws::Client::AsyncCallerContext*> DeleteIdentityOutcomeReceivedEvent;
  typedef Aws::Utils::Event<SESClient, const Model::DeleteIdentityPolicyRequest&, const Model::DeleteIdentityPolicyOutcome&, const Aws::Client::AsyncCallerContext*> DeleteIdentityPolicyOutcomeReceivedEvent;
  typedef Aws::Utils::Event<SESClient, const Model::DeleteVerifiedEmailAddressRequest&, const Model::DeleteVerifiedEmailAddressOutcome&, const Aws::Client::AsyncCallerContext*> DeleteVerifiedEmailAddressOutcomeReceivedEvent;
  typedef Aws::Utils::Event<SESClient, const Model::GetIdentityDkimAttributesRequest&, const Model::GetIdentityDkimAttributesOutcome&, const Aws::Client::AsyncCallerContext*> GetIdentityDkimAttributesOutcomeReceivedEvent;
  typedef Aws::Utils::Event<SESClient, const Model::GetIdentityNotificationAttributesRequest&, const Model::GetIdentityNotificationAttributesOutcome&, const Aws::Client::AsyncCallerContext*> GetIdentityNotificationAttributesOutcomeReceivedEvent;
  typedef Aws::Utils::Event<SESClient, const Model::GetIdentityPoliciesRequest&, const Model::GetIdentityPoliciesOutcome&, const Aws::Client::AsyncCallerContext*> GetIdentityPoliciesOutcomeReceivedEvent;
  typedef Aws::Utils::Event<SESClient, const Model::GetIdentityVerificationAttributesRequest&, const Model::GetIdentityVerificationAttributesOutcome&, const Aws::Client::AsyncCallerContext*> GetIdentityVerificationAttributesOutcomeReceivedEvent;
  typedef Aws::Utils::Event<SESClient, const Model::GetSendQuotaRequest&, const Model::GetSendQuotaOutcome&, const Aws::Client::AsyncCallerContext*> GetSendQuotaOutcomeReceivedEvent;
  typedef Aws::Utils::Event<SESClient, const Model::GetSendStatisticsRequest&, const Model::GetSendStatisticsOutcome&, const Aws::Client::AsyncCallerContext*> GetSendStatisticsOutcomeReceivedEvent;
  typedef Aws::Utils::Event<SESClient, const Model::ListIdentitiesRequest&, const Model::ListIdentitiesOutcome&, const Aws::Client::AsyncCallerContext*> ListIdentitiesOutcomeReceivedEvent;
  typedef Aws::Utils::Event<SESClient, const Model::ListIdentityPoliciesRequest&, const Model::ListIdentityPoliciesOutcome&, const Aws::Client::AsyncCallerContext*> ListIdentityPoliciesOutcomeReceivedEvent;
  typedef Aws::Utils::Event<SESClient, const Model::ListVerifiedEmailAddressesRequest&, const Model::ListVerifiedEmailAddressesOutcome&, const Aws::Client::AsyncCallerContext*> ListVerifiedEmailAddressesOutcomeReceivedEvent;
  typedef Aws::Utils::Event<SESClient, const Model::PutIdentityPolicyRequest&, const Model::PutIdentityPolicyOutcome&, const Aws::Client::AsyncCallerContext*> PutIdentityPolicyOutcomeReceivedEvent;
  typedef Aws::Utils::Event<SESClient, const Model::SendEmailRequest&, const Model::SendEmailOutcome&, const Aws::Client::AsyncCallerContext*> SendEmailOutcomeReceivedEvent;
  typedef Aws::Utils::Event<SESClient, const Model::SendRawEmailRequest&, const Model::SendRawEmailOutcome&, const Aws::Client::AsyncCallerContext*> SendRawEmailOutcomeReceivedEvent;
  typedef Aws::Utils::Event<SESClient, const Model::SetIdentityDkimEnabledRequest&, const Model::SetIdentityDkimEnabledOutcome&, const Aws::Client::AsyncCallerContext*> SetIdentityDkimEnabledOutcomeReceivedEvent;
  typedef Aws::Utils::Event<SESClient, const Model::SetIdentityFeedbackForwardingEnabledRequest&, const Model::SetIdentityFeedbackForwardingEnabledOutcome&, const Aws::Client::AsyncCallerContext*> SetIdentityFeedbackForwardingEnabledOutcomeReceivedEvent;
  typedef Aws::Utils::Event<SESClient, const Model::SetIdentityNotificationTopicRequest&, const Model::SetIdentityNotificationTopicOutcome&, const Aws::Client::AsyncCallerContext*> SetIdentityNotificationTopicOutcomeReceivedEvent;
  typedef Aws::Utils::Event<SESClient, const Model::VerifyDomainDkimRequest&, const Model::VerifyDomainDkimOutcome&, const Aws::Client::AsyncCallerContext*> VerifyDomainDkimOutcomeReceivedEvent;
  typedef Aws::Utils::Event<SESClient, const Model::VerifyDomainIdentityRequest&, const Model::VerifyDomainIdentityOutcome&, const Aws::Client::AsyncCallerContext*> VerifyDomainIdentityOutcomeReceivedEvent;
  typedef Aws::Utils::Event<SESClient, const Model::VerifyEmailAddressRequest&, const Model::VerifyEmailAddressOutcome&, const Aws::Client::AsyncCallerContext*> VerifyEmailAddressOutcomeReceivedEvent;
  typedef Aws::Utils::Event<SESClient, const Model::VerifyEmailIdentityRequest&, const Model::VerifyEmailIdentityOutcome&, const Aws::Client::AsyncCallerContext*> VerifyEmailIdentityOutcomeReceivedEvent;

  /*
    <fullname>Amazon Simple Email Service</fullname> <p> This is the API Reference for Amazon Simple Email Service (Amazon SES). This documentation is intended to be used in conjunction with the <a href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/Welcome.html">Amazon SES Developer Guide</a>. </p> <note>For a list of Amazon SES endpoints to use in service requests, see <a href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/regions.html">Regions and Amazon SES</a> in the Amazon SES Developer Guide. </note>
  */
  class AWS_SES_API SESClient : public Aws::Client::AWSXMLClient
  {
    public:
      typedef Aws::Client::AWSXMLClient BASECLASS;

     /**
      * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
      * is not specified, it will be initialized to default values.
      */
      SESClient(const Client::ClientConfiguration& clientConfiguration = Client::ClientConfiguration());

     /**
      * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
      * is not specified, it will be initialized to default values.
      */
      SESClient(const Auth::AWSCredentials& credentials, const Client::ClientConfiguration& clientConfiguration = Client::ClientConfiguration());

     /**
      * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
      * the default http client factory will be used
      */
      SESClient(const std::shared_ptr<Auth::AWSCredentialsProvider>& credentialsProvider,
        const Client::ClientConfiguration& clientConfiguration = Client::ClientConfiguration(),
        const std::shared_ptr<Http::HttpClientFactory const>& httpClientFactory = nullptr);

      ~SESClient();

     /*
       <p>Deletes the specified identity (email address or domain) from the list of verified identities.</p> <p>This action is throttled at one request per second.</p>
     */
     Model::DeleteIdentityOutcome DeleteIdentity(const Model::DeleteIdentityRequest& request) const;

     /*
       <p>Deletes the specified identity (email address or domain) from the list of verified identities.</p> <p>This action is throttled at one request per second.</p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::DeleteIdentityOutcomeCallable DeleteIdentityCallable(const Model::DeleteIdentityRequest& request) const;

     /*
       <p>Deletes the specified identity (email address or domain) from the list of verified identities.</p> <p>This action is throttled at one request per second.</p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void DeleteIdentityAsync(const Model::DeleteIdentityRequest& request, const Aws::Client::AsyncCallerContext* context = nullptr) const;

     /*
       <p>Deletes the specified sending authorization policy for the given identity (email address or domain). This API returns successfully even if a policy with the specified name does not exist.</p> <note>This API is for the identity owner only. If you have not verified the identity, this API will return an error.</note> <p>Sending authorization is a feature that enables an identity owner to authorize other senders to use its identities. For information about using sending authorization, see the <a href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/sending-authorization.html">Amazon SES Developer Guide</a>.</p> <p>This action is throttled at one request per second.</p>
     */
     Model::DeleteIdentityPolicyOutcome DeleteIdentityPolicy(const Model::DeleteIdentityPolicyRequest& request) const;

     /*
       <p>Deletes the specified sending authorization policy for the given identity (email address or domain). This API returns successfully even if a policy with the specified name does not exist.</p> <note>This API is for the identity owner only. If you have not verified the identity, this API will return an error.</note> <p>Sending authorization is a feature that enables an identity owner to authorize other senders to use its identities. For information about using sending authorization, see the <a href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/sending-authorization.html">Amazon SES Developer Guide</a>.</p> <p>This action is throttled at one request per second.</p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::DeleteIdentityPolicyOutcomeCallable DeleteIdentityPolicyCallable(const Model::DeleteIdentityPolicyRequest& request) const;

     /*
       <p>Deletes the specified sending authorization policy for the given identity (email address or domain). This API returns successfully even if a policy with the specified name does not exist.</p> <note>This API is for the identity owner only. If you have not verified the identity, this API will return an error.</note> <p>Sending authorization is a feature that enables an identity owner to authorize other senders to use its identities. For information about using sending authorization, see the <a href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/sending-authorization.html">Amazon SES Developer Guide</a>.</p> <p>This action is throttled at one request per second.</p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void DeleteIdentityPolicyAsync(const Model::DeleteIdentityPolicyRequest& request, const Aws::Client::AsyncCallerContext* context = nullptr) const;

     /*
       <p>Deletes the specified email address from the list of verified addresses.</p> <important>The DeleteVerifiedEmailAddress action is deprecated as of the May 15, 2012 release of Domain Verification. The DeleteIdentity action is now preferred.</important> <p>This action is throttled at one request per second.</p>
     */
     Model::DeleteVerifiedEmailAddressOutcome DeleteVerifiedEmailAddress(const Model::DeleteVerifiedEmailAddressRequest& request) const;

     /*
       <p>Deletes the specified email address from the list of verified addresses.</p> <important>The DeleteVerifiedEmailAddress action is deprecated as of the May 15, 2012 release of Domain Verification. The DeleteIdentity action is now preferred.</important> <p>This action is throttled at one request per second.</p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::DeleteVerifiedEmailAddressOutcomeCallable DeleteVerifiedEmailAddressCallable(const Model::DeleteVerifiedEmailAddressRequest& request) const;

     /*
       <p>Deletes the specified email address from the list of verified addresses.</p> <important>The DeleteVerifiedEmailAddress action is deprecated as of the May 15, 2012 release of Domain Verification. The DeleteIdentity action is now preferred.</important> <p>This action is throttled at one request per second.</p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void DeleteVerifiedEmailAddressAsync(const Model::DeleteVerifiedEmailAddressRequest& request, const Aws::Client::AsyncCallerContext* context = nullptr) const;

     /*
       <p>Returns the current status of Easy DKIM signing for an entity. For domain name identities, this action also returns the DKIM tokens that are required for Easy DKIM signing, and whether Amazon SES has successfully verified that these tokens have been published.</p> <p>This action takes a list of identities as input and returns the following information for each:</p> <ul> <li>Whether Easy DKIM signing is enabled or disabled.</li> <li>A set of DKIM tokens that represent the identity. If the identity is an email address, the tokens represent the domain of that address.</li> <li>Whether Amazon SES has successfully verified the DKIM tokens published in the domain's DNS. This information is only returned for domain name identities, not for email addresses.</li> </ul> <p>This action is throttled at one request per second and can only get DKIM attributes for up to 100 identities at a time.</p> <p>For more information about creating DNS records using DKIM tokens, go to the <a href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/easy-dkim-dns-records.html">Amazon SES Developer Guide</a>.</p>
     */
     Model::GetIdentityDkimAttributesOutcome GetIdentityDkimAttributes(const Model::GetIdentityDkimAttributesRequest& request) const;

     /*
       <p>Returns the current status of Easy DKIM signing for an entity. For domain name identities, this action also returns the DKIM tokens that are required for Easy DKIM signing, and whether Amazon SES has successfully verified that these tokens have been published.</p> <p>This action takes a list of identities as input and returns the following information for each:</p> <ul> <li>Whether Easy DKIM signing is enabled or disabled.</li> <li>A set of DKIM tokens that represent the identity. If the identity is an email address, the tokens represent the domain of that address.</li> <li>Whether Amazon SES has successfully verified the DKIM tokens published in the domain's DNS. This information is only returned for domain name identities, not for email addresses.</li> </ul> <p>This action is throttled at one request per second and can only get DKIM attributes for up to 100 identities at a time.</p> <p>For more information about creating DNS records using DKIM tokens, go to the <a href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/easy-dkim-dns-records.html">Amazon SES Developer Guide</a>.</p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::GetIdentityDkimAttributesOutcomeCallable GetIdentityDkimAttributesCallable(const Model::GetIdentityDkimAttributesRequest& request) const;

     /*
       <p>Returns the current status of Easy DKIM signing for an entity. For domain name identities, this action also returns the DKIM tokens that are required for Easy DKIM signing, and whether Amazon SES has successfully verified that these tokens have been published.</p> <p>This action takes a list of identities as input and returns the following information for each:</p> <ul> <li>Whether Easy DKIM signing is enabled or disabled.</li> <li>A set of DKIM tokens that represent the identity. If the identity is an email address, the tokens represent the domain of that address.</li> <li>Whether Amazon SES has successfully verified the DKIM tokens published in the domain's DNS. This information is only returned for domain name identities, not for email addresses.</li> </ul> <p>This action is throttled at one request per second and can only get DKIM attributes for up to 100 identities at a time.</p> <p>For more information about creating DNS records using DKIM tokens, go to the <a href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/easy-dkim-dns-records.html">Amazon SES Developer Guide</a>.</p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void GetIdentityDkimAttributesAsync(const Model::GetIdentityDkimAttributesRequest& request, const Aws::Client::AsyncCallerContext* context = nullptr) const;

     /*
       <p>Given a list of verified identities (email addresses and/or domains), returns a structure describing identity notification attributes.</p> <p>This action is throttled at one request per second and can only get notification attributes for up to 100 identities at a time.</p> <p>For more information about using notifications with Amazon SES, see the <a href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/notifications.html">Amazon SES Developer Guide</a>.</p>
     */
     Model::GetIdentityNotificationAttributesOutcome GetIdentityNotificationAttributes(const Model::GetIdentityNotificationAttributesRequest& request) const;

     /*
       <p>Given a list of verified identities (email addresses and/or domains), returns a structure describing identity notification attributes.</p> <p>This action is throttled at one request per second and can only get notification attributes for up to 100 identities at a time.</p> <p>For more information about using notifications with Amazon SES, see the <a href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/notifications.html">Amazon SES Developer Guide</a>.</p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::GetIdentityNotificationAttributesOutcomeCallable GetIdentityNotificationAttributesCallable(const Model::GetIdentityNotificationAttributesRequest& request) const;

     /*
       <p>Given a list of verified identities (email addresses and/or domains), returns a structure describing identity notification attributes.</p> <p>This action is throttled at one request per second and can only get notification attributes for up to 100 identities at a time.</p> <p>For more information about using notifications with Amazon SES, see the <a href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/notifications.html">Amazon SES Developer Guide</a>.</p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void GetIdentityNotificationAttributesAsync(const Model::GetIdentityNotificationAttributesRequest& request, const Aws::Client::AsyncCallerContext* context = nullptr) const;

     /*
       <p>Returns the requested sending authorization policies for the given identity (email address or domain). The policies are returned as a map of policy names to policy contents. You can retrieve a maximum of 20 policies at a time.</p> <note>This API is for the identity owner only. If you have not verified the identity, this API will return an error.</note> <p>Sending authorization is a feature that enables an identity owner to authorize other senders to use its identities. For information about using sending authorization, see the <a href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/sending-authorization.html">Amazon SES Developer Guide</a>.</p> <p>This action is throttled at one request per second.</p>
     */
     Model::GetIdentityPoliciesOutcome GetIdentityPolicies(const Model::GetIdentityPoliciesRequest& request) const;

     /*
       <p>Returns the requested sending authorization policies for the given identity (email address or domain). The policies are returned as a map of policy names to policy contents. You can retrieve a maximum of 20 policies at a time.</p> <note>This API is for the identity owner only. If you have not verified the identity, this API will return an error.</note> <p>Sending authorization is a feature that enables an identity owner to authorize other senders to use its identities. For information about using sending authorization, see the <a href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/sending-authorization.html">Amazon SES Developer Guide</a>.</p> <p>This action is throttled at one request per second.</p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::GetIdentityPoliciesOutcomeCallable GetIdentityPoliciesCallable(const Model::GetIdentityPoliciesRequest& request) const;

     /*
       <p>Returns the requested sending authorization policies for the given identity (email address or domain). The policies are returned as a map of policy names to policy contents. You can retrieve a maximum of 20 policies at a time.</p> <note>This API is for the identity owner only. If you have not verified the identity, this API will return an error.</note> <p>Sending authorization is a feature that enables an identity owner to authorize other senders to use its identities. For information about using sending authorization, see the <a href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/sending-authorization.html">Amazon SES Developer Guide</a>.</p> <p>This action is throttled at one request per second.</p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void GetIdentityPoliciesAsync(const Model::GetIdentityPoliciesRequest& request, const Aws::Client::AsyncCallerContext* context = nullptr) const;

     /*
       <p>Given a list of identities (email addresses and/or domains), returns the verification status and (for domain identities) the verification token for each identity.</p> <p>This action is throttled at one request per second and can only get verification attributes for up to 100 identities at a time.</p>
     */
     Model::GetIdentityVerificationAttributesOutcome GetIdentityVerificationAttributes(const Model::GetIdentityVerificationAttributesRequest& request) const;

     /*
       <p>Given a list of identities (email addresses and/or domains), returns the verification status and (for domain identities) the verification token for each identity.</p> <p>This action is throttled at one request per second and can only get verification attributes for up to 100 identities at a time.</p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::GetIdentityVerificationAttributesOutcomeCallable GetIdentityVerificationAttributesCallable(const Model::GetIdentityVerificationAttributesRequest& request) const;

     /*
       <p>Given a list of identities (email addresses and/or domains), returns the verification status and (for domain identities) the verification token for each identity.</p> <p>This action is throttled at one request per second and can only get verification attributes for up to 100 identities at a time.</p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void GetIdentityVerificationAttributesAsync(const Model::GetIdentityVerificationAttributesRequest& request, const Aws::Client::AsyncCallerContext* context = nullptr) const;

     /*
       <p>Returns the user's current sending limits.</p> <p>This action is throttled at one request per second.</p>
     */
     Model::GetSendQuotaOutcome GetSendQuota(const Model::GetSendQuotaRequest& request) const;

     /*
       <p>Returns the user's current sending limits.</p> <p>This action is throttled at one request per second.</p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::GetSendQuotaOutcomeCallable GetSendQuotaCallable(const Model::GetSendQuotaRequest& request) const;

     /*
       <p>Returns the user's current sending limits.</p> <p>This action is throttled at one request per second.</p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void GetSendQuotaAsync(const Model::GetSendQuotaRequest& request, const Aws::Client::AsyncCallerContext* context = nullptr) const;

     /*
       <p>Returns the user's sending statistics. The result is a list of data points, representing the last two weeks of sending activity. </p> <p>Each data point in the list contains statistics for a 15-minute interval.</p> <p>This action is throttled at one request per second.</p>
     */
     Model::GetSendStatisticsOutcome GetSendStatistics(const Model::GetSendStatisticsRequest& request) const;

     /*
       <p>Returns the user's sending statistics. The result is a list of data points, representing the last two weeks of sending activity. </p> <p>Each data point in the list contains statistics for a 15-minute interval.</p> <p>This action is throttled at one request per second.</p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::GetSendStatisticsOutcomeCallable GetSendStatisticsCallable(const Model::GetSendStatisticsRequest& request) const;

     /*
       <p>Returns the user's sending statistics. The result is a list of data points, representing the last two weeks of sending activity. </p> <p>Each data point in the list contains statistics for a 15-minute interval.</p> <p>This action is throttled at one request per second.</p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void GetSendStatisticsAsync(const Model::GetSendStatisticsRequest& request, const Aws::Client::AsyncCallerContext* context = nullptr) const;

     /*
       <p>Returns a list containing all of the identities (email addresses and domains) for a specific AWS Account, regardless of verification status.</p> <p>This action is throttled at one request per second.</p>
     */
     Model::ListIdentitiesOutcome ListIdentities(const Model::ListIdentitiesRequest& request) const;

     /*
       <p>Returns a list containing all of the identities (email addresses and domains) for a specific AWS Account, regardless of verification status.</p> <p>This action is throttled at one request per second.</p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::ListIdentitiesOutcomeCallable ListIdentitiesCallable(const Model::ListIdentitiesRequest& request) const;

     /*
       <p>Returns a list containing all of the identities (email addresses and domains) for a specific AWS Account, regardless of verification status.</p> <p>This action is throttled at one request per second.</p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void ListIdentitiesAsync(const Model::ListIdentitiesRequest& request, const Aws::Client::AsyncCallerContext* context = nullptr) const;

     /*
       <p>Returns a list of sending authorization policies that are attached to the given identity (email address or domain). This API returns only a list. If you want the actual policy content, you can use <code>GetIdentityPolicies</code>.</p> <note>This API is for the identity owner only. If you have not verified the identity, this API will return an error.</note> <p>Sending authorization is a feature that enables an identity owner to authorize other senders to use its identities. For information about using sending authorization, see the <a href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/sending-authorization.html">Amazon SES Developer Guide</a>.</p> <p>This action is throttled at one request per second.</p>
     */
     Model::ListIdentityPoliciesOutcome ListIdentityPolicies(const Model::ListIdentityPoliciesRequest& request) const;

     /*
       <p>Returns a list of sending authorization policies that are attached to the given identity (email address or domain). This API returns only a list. If you want the actual policy content, you can use <code>GetIdentityPolicies</code>.</p> <note>This API is for the identity owner only. If you have not verified the identity, this API will return an error.</note> <p>Sending authorization is a feature that enables an identity owner to authorize other senders to use its identities. For information about using sending authorization, see the <a href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/sending-authorization.html">Amazon SES Developer Guide</a>.</p> <p>This action is throttled at one request per second.</p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::ListIdentityPoliciesOutcomeCallable ListIdentityPoliciesCallable(const Model::ListIdentityPoliciesRequest& request) const;

     /*
       <p>Returns a list of sending authorization policies that are attached to the given identity (email address or domain). This API returns only a list. If you want the actual policy content, you can use <code>GetIdentityPolicies</code>.</p> <note>This API is for the identity owner only. If you have not verified the identity, this API will return an error.</note> <p>Sending authorization is a feature that enables an identity owner to authorize other senders to use its identities. For information about using sending authorization, see the <a href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/sending-authorization.html">Amazon SES Developer Guide</a>.</p> <p>This action is throttled at one request per second.</p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void ListIdentityPoliciesAsync(const Model::ListIdentityPoliciesRequest& request, const Aws::Client::AsyncCallerContext* context = nullptr) const;

     /*
       <p>Returns a list containing all of the email addresses that have been verified.</p> <important>The ListVerifiedEmailAddresses action is deprecated as of the May 15, 2012 release of Domain Verification. The ListIdentities action is now preferred.</important> <p>This action is throttled at one request per second.</p>
     */
     Model::ListVerifiedEmailAddressesOutcome ListVerifiedEmailAddresses(const Model::ListVerifiedEmailAddressesRequest& request) const;

     /*
       <p>Returns a list containing all of the email addresses that have been verified.</p> <important>The ListVerifiedEmailAddresses action is deprecated as of the May 15, 2012 release of Domain Verification. The ListIdentities action is now preferred.</important> <p>This action is throttled at one request per second.</p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::ListVerifiedEmailAddressesOutcomeCallable ListVerifiedEmailAddressesCallable(const Model::ListVerifiedEmailAddressesRequest& request) const;

     /*
       <p>Returns a list containing all of the email addresses that have been verified.</p> <important>The ListVerifiedEmailAddresses action is deprecated as of the May 15, 2012 release of Domain Verification. The ListIdentities action is now preferred.</important> <p>This action is throttled at one request per second.</p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void ListVerifiedEmailAddressesAsync(const Model::ListVerifiedEmailAddressesRequest& request, const Aws::Client::AsyncCallerContext* context = nullptr) const;

     /*
       <p>Adds or updates a sending authorization policy for the specified identity (email address or domain).</p> <note>This API is for the identity owner only. If you have not verified the identity, this API will return an error.</note> <p>Sending authorization is a feature that enables an identity owner to authorize other senders to use its identities. For information about using sending authorization, see the <a href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/sending-authorization.html">Amazon SES Developer Guide</a>.</p> <p>This action is throttled at one request per second.</p>
     */
     Model::PutIdentityPolicyOutcome PutIdentityPolicy(const Model::PutIdentityPolicyRequest& request) const;

     /*
       <p>Adds or updates a sending authorization policy for the specified identity (email address or domain).</p> <note>This API is for the identity owner only. If you have not verified the identity, this API will return an error.</note> <p>Sending authorization is a feature that enables an identity owner to authorize other senders to use its identities. For information about using sending authorization, see the <a href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/sending-authorization.html">Amazon SES Developer Guide</a>.</p> <p>This action is throttled at one request per second.</p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::PutIdentityPolicyOutcomeCallable PutIdentityPolicyCallable(const Model::PutIdentityPolicyRequest& request) const;

     /*
       <p>Adds or updates a sending authorization policy for the specified identity (email address or domain).</p> <note>This API is for the identity owner only. If you have not verified the identity, this API will return an error.</note> <p>Sending authorization is a feature that enables an identity owner to authorize other senders to use its identities. For information about using sending authorization, see the <a href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/sending-authorization.html">Amazon SES Developer Guide</a>.</p> <p>This action is throttled at one request per second.</p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void PutIdentityPolicyAsync(const Model::PutIdentityPolicyRequest& request, const Aws::Client::AsyncCallerContext* context = nullptr) const;

     /*
       <p>Composes an email message based on input data, and then immediately queues the message for sending. </p> <p>There are several important points to know about <code>SendEmail</code>:</p> <ul> <li>You can only send email from verified email addresses and domains; otherwise, you will get an "Email address not verified" error. If your account is still in the Amazon SES sandbox, you must also verify every recipient email address except for the recipients provided by the Amazon SES mailbox simulator. For more information, go to the <a href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/verify-addresses-and-domains.html">Amazon SES Developer Guide</a>.</li> <li>The total size of the message cannot exceed 10 MB. This includes any attachments that are part of the message.</li> <li>Amazon SES has a limit on the total number of recipients per message. The combined number of To:, CC: and BCC: email addresses cannot exceed 50. If you need to send an email message to a larger audience, you can divide your recipient list into groups of 50 or fewer, and then call Amazon SES repeatedly to send the message to each group.</li> <li>For every message that you send, the total number of recipients (To:, CC: and BCC:) is counted against your sending quota - the maximum number of emails you can send in a 24-hour period. For information about your sending quota, go to the <a href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/manage-sending-limits.html">Amazon SES Developer Guide</a>.</li> </ul>
     */
     Model::SendEmailOutcome SendEmail(const Model::SendEmailRequest& request) const;

     /*
       <p>Composes an email message based on input data, and then immediately queues the message for sending. </p> <p>There are several important points to know about <code>SendEmail</code>:</p> <ul> <li>You can only send email from verified email addresses and domains; otherwise, you will get an "Email address not verified" error. If your account is still in the Amazon SES sandbox, you must also verify every recipient email address except for the recipients provided by the Amazon SES mailbox simulator. For more information, go to the <a href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/verify-addresses-and-domains.html">Amazon SES Developer Guide</a>.</li> <li>The total size of the message cannot exceed 10 MB. This includes any attachments that are part of the message.</li> <li>Amazon SES has a limit on the total number of recipients per message. The combined number of To:, CC: and BCC: email addresses cannot exceed 50. If you need to send an email message to a larger audience, you can divide your recipient list into groups of 50 or fewer, and then call Amazon SES repeatedly to send the message to each group.</li> <li>For every message that you send, the total number of recipients (To:, CC: and BCC:) is counted against your sending quota - the maximum number of emails you can send in a 24-hour period. For information about your sending quota, go to the <a href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/manage-sending-limits.html">Amazon SES Developer Guide</a>.</li> </ul>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::SendEmailOutcomeCallable SendEmailCallable(const Model::SendEmailRequest& request) const;

     /*
       <p>Composes an email message based on input data, and then immediately queues the message for sending. </p> <p>There are several important points to know about <code>SendEmail</code>:</p> <ul> <li>You can only send email from verified email addresses and domains; otherwise, you will get an "Email address not verified" error. If your account is still in the Amazon SES sandbox, you must also verify every recipient email address except for the recipients provided by the Amazon SES mailbox simulator. For more information, go to the <a href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/verify-addresses-and-domains.html">Amazon SES Developer Guide</a>.</li> <li>The total size of the message cannot exceed 10 MB. This includes any attachments that are part of the message.</li> <li>Amazon SES has a limit on the total number of recipients per message. The combined number of To:, CC: and BCC: email addresses cannot exceed 50. If you need to send an email message to a larger audience, you can divide your recipient list into groups of 50 or fewer, and then call Amazon SES repeatedly to send the message to each group.</li> <li>For every message that you send, the total number of recipients (To:, CC: and BCC:) is counted against your sending quota - the maximum number of emails you can send in a 24-hour period. For information about your sending quota, go to the <a href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/manage-sending-limits.html">Amazon SES Developer Guide</a>.</li> </ul>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void SendEmailAsync(const Model::SendEmailRequest& request, const Aws::Client::AsyncCallerContext* context = nullptr) const;

     /*
       <p>Sends an email message, with header and content specified by the client. The <code>SendRawEmail</code> action is useful for sending multipart MIME emails. The raw text of the message must comply with Internet email standards; otherwise, the message cannot be sent. </p> <p>There are several important points to know about <code>SendRawEmail</code>:</p> <ul> <li>You can only send email from verified email addresses and domains; otherwise, you will get an "Email address not verified" error. If your account is still in the Amazon SES sandbox, you must also verify every recipient email address except for the recipients provided by the Amazon SES mailbox simulator. For more information, go to the <a href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/verify-addresses-and-domains.html">Amazon SES Developer Guide</a>.</li> <li>The total size of the message cannot exceed 10 MB. This includes any attachments that are part of the message.</li> <li>Amazon SES has a limit on the total number of recipients per message. The combined number of To:, CC: and BCC: email addresses cannot exceed 50. If you need to send an email message to a larger audience, you can divide your recipient list into groups of 50 or fewer, and then call Amazon SES repeatedly to send the message to each group.</li> <li>The To:, CC:, and BCC: headers in the raw message can contain a group list. Note that each recipient in a group list counts towards the 50-recipient limit.</li> <li>For every message that you send, the total number of recipients (To:, CC: and BCC:) is counted against your sending quota - the maximum number of emails you can send in a 24-hour period. For information about your sending quota, go to the <a href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/manage-sending-limits.html">Amazon SES Developer Guide</a>.</li> <li>If you are using sending authorization to send on behalf of another user, <code>SendRawEmail</code> enables you to specify the cross-account identity for the email's "Source," "From," and "Return-Path" parameters in one of two ways: you can pass optional parameters <code>SourceArn</code>, <code>FromArn</code>, and/or <code>ReturnPathArn</code> to the API, or you can include the following X-headers in the header of your raw email: <ul> <li><code>X-SES-SOURCE-ARN</code></li> <li><code>X-SES-FROM-ARN</code></li> <li><code>X-SES-RETURN-PATH-ARN</code></li> </ul> <important>Do not include these X-headers in the DKIM signature, because they are removed by Amazon SES before sending the email.</important> For the most common sending authorization use case, we recommend that you specify the <code>SourceIdentityArn</code> and do not specify either the <code>FromIdentityArn</code> or <code>ReturnPathIdentityArn</code>. (The same note applies to the corresponding X-headers.) If you only specify the <code>SourceIdentityArn</code>, Amazon SES will simply set the "From" address and the "Return Path" address to the identity specified in <code>SourceIdentityArn</code>. For more information about sending authorization, see the <a href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/sending-authorization.html">Amazon SES Developer Guide</a>.</li> </ul>
     */
     Model::SendRawEmailOutcome SendRawEmail(const Model::SendRawEmailRequest& request) const;

     /*
       <p>Sends an email message, with header and content specified by the client. The <code>SendRawEmail</code> action is useful for sending multipart MIME emails. The raw text of the message must comply with Internet email standards; otherwise, the message cannot be sent. </p> <p>There are several important points to know about <code>SendRawEmail</code>:</p> <ul> <li>You can only send email from verified email addresses and domains; otherwise, you will get an "Email address not verified" error. If your account is still in the Amazon SES sandbox, you must also verify every recipient email address except for the recipients provided by the Amazon SES mailbox simulator. For more information, go to the <a href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/verify-addresses-and-domains.html">Amazon SES Developer Guide</a>.</li> <li>The total size of the message cannot exceed 10 MB. This includes any attachments that are part of the message.</li> <li>Amazon SES has a limit on the total number of recipients per message. The combined number of To:, CC: and BCC: email addresses cannot exceed 50. If you need to send an email message to a larger audience, you can divide your recipient list into groups of 50 or fewer, and then call Amazon SES repeatedly to send the message to each group.</li> <li>The To:, CC:, and BCC: headers in the raw message can contain a group list. Note that each recipient in a group list counts towards the 50-recipient limit.</li> <li>For every message that you send, the total number of recipients (To:, CC: and BCC:) is counted against your sending quota - the maximum number of emails you can send in a 24-hour period. For information about your sending quota, go to the <a href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/manage-sending-limits.html">Amazon SES Developer Guide</a>.</li> <li>If you are using sending authorization to send on behalf of another user, <code>SendRawEmail</code> enables you to specify the cross-account identity for the email's "Source," "From," and "Return-Path" parameters in one of two ways: you can pass optional parameters <code>SourceArn</code>, <code>FromArn</code>, and/or <code>ReturnPathArn</code> to the API, or you can include the following X-headers in the header of your raw email: <ul> <li><code>X-SES-SOURCE-ARN</code></li> <li><code>X-SES-FROM-ARN</code></li> <li><code>X-SES-RETURN-PATH-ARN</code></li> </ul> <important>Do not include these X-headers in the DKIM signature, because they are removed by Amazon SES before sending the email.</important> For the most common sending authorization use case, we recommend that you specify the <code>SourceIdentityArn</code> and do not specify either the <code>FromIdentityArn</code> or <code>ReturnPathIdentityArn</code>. (The same note applies to the corresponding X-headers.) If you only specify the <code>SourceIdentityArn</code>, Amazon SES will simply set the "From" address and the "Return Path" address to the identity specified in <code>SourceIdentityArn</code>. For more information about sending authorization, see the <a href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/sending-authorization.html">Amazon SES Developer Guide</a>.</li> </ul>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::SendRawEmailOutcomeCallable SendRawEmailCallable(const Model::SendRawEmailRequest& request) const;

     /*
       <p>Sends an email message, with header and content specified by the client. The <code>SendRawEmail</code> action is useful for sending multipart MIME emails. The raw text of the message must comply with Internet email standards; otherwise, the message cannot be sent. </p> <p>There are several important points to know about <code>SendRawEmail</code>:</p> <ul> <li>You can only send email from verified email addresses and domains; otherwise, you will get an "Email address not verified" error. If your account is still in the Amazon SES sandbox, you must also verify every recipient email address except for the recipients provided by the Amazon SES mailbox simulator. For more information, go to the <a href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/verify-addresses-and-domains.html">Amazon SES Developer Guide</a>.</li> <li>The total size of the message cannot exceed 10 MB. This includes any attachments that are part of the message.</li> <li>Amazon SES has a limit on the total number of recipients per message. The combined number of To:, CC: and BCC: email addresses cannot exceed 50. If you need to send an email message to a larger audience, you can divide your recipient list into groups of 50 or fewer, and then call Amazon SES repeatedly to send the message to each group.</li> <li>The To:, CC:, and BCC: headers in the raw message can contain a group list. Note that each recipient in a group list counts towards the 50-recipient limit.</li> <li>For every message that you send, the total number of recipients (To:, CC: and BCC:) is counted against your sending quota - the maximum number of emails you can send in a 24-hour period. For information about your sending quota, go to the <a href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/manage-sending-limits.html">Amazon SES Developer Guide</a>.</li> <li>If you are using sending authorization to send on behalf of another user, <code>SendRawEmail</code> enables you to specify the cross-account identity for the email's "Source," "From," and "Return-Path" parameters in one of two ways: you can pass optional parameters <code>SourceArn</code>, <code>FromArn</code>, and/or <code>ReturnPathArn</code> to the API, or you can include the following X-headers in the header of your raw email: <ul> <li><code>X-SES-SOURCE-ARN</code></li> <li><code>X-SES-FROM-ARN</code></li> <li><code>X-SES-RETURN-PATH-ARN</code></li> </ul> <important>Do not include these X-headers in the DKIM signature, because they are removed by Amazon SES before sending the email.</important> For the most common sending authorization use case, we recommend that you specify the <code>SourceIdentityArn</code> and do not specify either the <code>FromIdentityArn</code> or <code>ReturnPathIdentityArn</code>. (The same note applies to the corresponding X-headers.) If you only specify the <code>SourceIdentityArn</code>, Amazon SES will simply set the "From" address and the "Return Path" address to the identity specified in <code>SourceIdentityArn</code>. For more information about sending authorization, see the <a href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/sending-authorization.html">Amazon SES Developer Guide</a>.</li> </ul>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void SendRawEmailAsync(const Model::SendRawEmailRequest& request, const Aws::Client::AsyncCallerContext* context = nullptr) const;

     /*
       <p>Enables or disables Easy DKIM signing of email sent from an identity:</p> <ul> <li>If Easy DKIM signing is enabled for a domain name identity (e.g., <code>example.com</code>), then Amazon SES will DKIM-sign all email sent by addresses under that domain name (e.g., <code>user@example.com</code>).</li> <li>If Easy DKIM signing is enabled for an email address, then Amazon SES will DKIM-sign all email sent by that email address.</li> </ul> <p>For email addresses (e.g., <code>user@example.com</code>), you can only enable Easy DKIM signing if the corresponding domain (e.g., <code>example.com</code>) has been set up for Easy DKIM using the AWS Console or the <code>VerifyDomainDkim</code> action.</p> <p>This action is throttled at one request per second.</p> <p>For more information about Easy DKIM signing, go to the <a href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/easy-dkim.html">Amazon SES Developer Guide</a>.</p>
     */
     Model::SetIdentityDkimEnabledOutcome SetIdentityDkimEnabled(const Model::SetIdentityDkimEnabledRequest& request) const;

     /*
       <p>Enables or disables Easy DKIM signing of email sent from an identity:</p> <ul> <li>If Easy DKIM signing is enabled for a domain name identity (e.g., <code>example.com</code>), then Amazon SES will DKIM-sign all email sent by addresses under that domain name (e.g., <code>user@example.com</code>).</li> <li>If Easy DKIM signing is enabled for an email address, then Amazon SES will DKIM-sign all email sent by that email address.</li> </ul> <p>For email addresses (e.g., <code>user@example.com</code>), you can only enable Easy DKIM signing if the corresponding domain (e.g., <code>example.com</code>) has been set up for Easy DKIM using the AWS Console or the <code>VerifyDomainDkim</code> action.</p> <p>This action is throttled at one request per second.</p> <p>For more information about Easy DKIM signing, go to the <a href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/easy-dkim.html">Amazon SES Developer Guide</a>.</p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::SetIdentityDkimEnabledOutcomeCallable SetIdentityDkimEnabledCallable(const Model::SetIdentityDkimEnabledRequest& request) const;

     /*
       <p>Enables or disables Easy DKIM signing of email sent from an identity:</p> <ul> <li>If Easy DKIM signing is enabled for a domain name identity (e.g., <code>example.com</code>), then Amazon SES will DKIM-sign all email sent by addresses under that domain name (e.g., <code>user@example.com</code>).</li> <li>If Easy DKIM signing is enabled for an email address, then Amazon SES will DKIM-sign all email sent by that email address.</li> </ul> <p>For email addresses (e.g., <code>user@example.com</code>), you can only enable Easy DKIM signing if the corresponding domain (e.g., <code>example.com</code>) has been set up for Easy DKIM using the AWS Console or the <code>VerifyDomainDkim</code> action.</p> <p>This action is throttled at one request per second.</p> <p>For more information about Easy DKIM signing, go to the <a href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/easy-dkim.html">Amazon SES Developer Guide</a>.</p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void SetIdentityDkimEnabledAsync(const Model::SetIdentityDkimEnabledRequest& request, const Aws::Client::AsyncCallerContext* context = nullptr) const;

     /*
       <p>Given an identity (email address or domain), enables or disables whether Amazon SES forwards bounce and complaint notifications as email. Feedback forwarding can only be disabled when Amazon Simple Notification Service (Amazon SNS) topics are specified for both bounces and complaints.</p> <note>Feedback forwarding does not apply to delivery notifications. Delivery notifications are only available through Amazon SNS.</note> <p>This action is throttled at one request per second.</p> <p>For more information about using notifications with Amazon SES, see the <a href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/notifications.html">Amazon SES Developer Guide</a>.</p>
     */
     Model::SetIdentityFeedbackForwardingEnabledOutcome SetIdentityFeedbackForwardingEnabled(const Model::SetIdentityFeedbackForwardingEnabledRequest& request) const;

     /*
       <p>Given an identity (email address or domain), enables or disables whether Amazon SES forwards bounce and complaint notifications as email. Feedback forwarding can only be disabled when Amazon Simple Notification Service (Amazon SNS) topics are specified for both bounces and complaints.</p> <note>Feedback forwarding does not apply to delivery notifications. Delivery notifications are only available through Amazon SNS.</note> <p>This action is throttled at one request per second.</p> <p>For more information about using notifications with Amazon SES, see the <a href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/notifications.html">Amazon SES Developer Guide</a>.</p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::SetIdentityFeedbackForwardingEnabledOutcomeCallable SetIdentityFeedbackForwardingEnabledCallable(const Model::SetIdentityFeedbackForwardingEnabledRequest& request) const;

     /*
       <p>Given an identity (email address or domain), enables or disables whether Amazon SES forwards bounce and complaint notifications as email. Feedback forwarding can only be disabled when Amazon Simple Notification Service (Amazon SNS) topics are specified for both bounces and complaints.</p> <note>Feedback forwarding does not apply to delivery notifications. Delivery notifications are only available through Amazon SNS.</note> <p>This action is throttled at one request per second.</p> <p>For more information about using notifications with Amazon SES, see the <a href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/notifications.html">Amazon SES Developer Guide</a>.</p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void SetIdentityFeedbackForwardingEnabledAsync(const Model::SetIdentityFeedbackForwardingEnabledRequest& request, const Aws::Client::AsyncCallerContext* context = nullptr) const;

     /*
       <p>Given an identity (email address or domain), sets the Amazon Simple Notification Service (Amazon SNS) topic to which Amazon SES will publish bounce, complaint, and/or delivery notifications for emails sent with that identity as the <code>Source</code>.</p> <note>Unless feedback forwarding is enabled, you must specify Amazon SNS topics for bounce and complaint notifications. For more information, see <code>SetIdentityFeedbackForwardingEnabled</code>. </note> <p>This action is throttled at one request per second.</p> <p>For more information about feedback notification, see the <a href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/notifications.html">Amazon SES Developer Guide</a>.</p>
     */
     Model::SetIdentityNotificationTopicOutcome SetIdentityNotificationTopic(const Model::SetIdentityNotificationTopicRequest& request) const;

     /*
       <p>Given an identity (email address or domain), sets the Amazon Simple Notification Service (Amazon SNS) topic to which Amazon SES will publish bounce, complaint, and/or delivery notifications for emails sent with that identity as the <code>Source</code>.</p> <note>Unless feedback forwarding is enabled, you must specify Amazon SNS topics for bounce and complaint notifications. For more information, see <code>SetIdentityFeedbackForwardingEnabled</code>. </note> <p>This action is throttled at one request per second.</p> <p>For more information about feedback notification, see the <a href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/notifications.html">Amazon SES Developer Guide</a>.</p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::SetIdentityNotificationTopicOutcomeCallable SetIdentityNotificationTopicCallable(const Model::SetIdentityNotificationTopicRequest& request) const;

     /*
       <p>Given an identity (email address or domain), sets the Amazon Simple Notification Service (Amazon SNS) topic to which Amazon SES will publish bounce, complaint, and/or delivery notifications for emails sent with that identity as the <code>Source</code>.</p> <note>Unless feedback forwarding is enabled, you must specify Amazon SNS topics for bounce and complaint notifications. For more information, see <code>SetIdentityFeedbackForwardingEnabled</code>. </note> <p>This action is throttled at one request per second.</p> <p>For more information about feedback notification, see the <a href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/notifications.html">Amazon SES Developer Guide</a>.</p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void SetIdentityNotificationTopicAsync(const Model::SetIdentityNotificationTopicRequest& request, const Aws::Client::AsyncCallerContext* context = nullptr) const;

     /*
       <p>Returns a set of DKIM tokens for a domain. DKIM <i>tokens</i> are character strings that represent your domain's identity. Using these tokens, you will need to create DNS CNAME records that point to DKIM public keys hosted by Amazon SES. Amazon Web Services will eventually detect that you have updated your DNS records; this detection process may take up to 72 hours. Upon successful detection, Amazon SES will be able to DKIM-sign email originating from that domain.</p> <p>This action is throttled at one request per second.</p> <p>To enable or disable Easy DKIM signing for a domain, use the <code>SetIdentityDkimEnabled</code> action.</p> <p>For more information about creating DNS records using DKIM tokens, go to the <a href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/easy-dkim-dns-records.html">Amazon SES Developer Guide</a>.</p>
     */
     Model::VerifyDomainDkimOutcome VerifyDomainDkim(const Model::VerifyDomainDkimRequest& request) const;

     /*
       <p>Returns a set of DKIM tokens for a domain. DKIM <i>tokens</i> are character strings that represent your domain's identity. Using these tokens, you will need to create DNS CNAME records that point to DKIM public keys hosted by Amazon SES. Amazon Web Services will eventually detect that you have updated your DNS records; this detection process may take up to 72 hours. Upon successful detection, Amazon SES will be able to DKIM-sign email originating from that domain.</p> <p>This action is throttled at one request per second.</p> <p>To enable or disable Easy DKIM signing for a domain, use the <code>SetIdentityDkimEnabled</code> action.</p> <p>For more information about creating DNS records using DKIM tokens, go to the <a href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/easy-dkim-dns-records.html">Amazon SES Developer Guide</a>.</p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::VerifyDomainDkimOutcomeCallable VerifyDomainDkimCallable(const Model::VerifyDomainDkimRequest& request) const;

     /*
       <p>Returns a set of DKIM tokens for a domain. DKIM <i>tokens</i> are character strings that represent your domain's identity. Using these tokens, you will need to create DNS CNAME records that point to DKIM public keys hosted by Amazon SES. Amazon Web Services will eventually detect that you have updated your DNS records; this detection process may take up to 72 hours. Upon successful detection, Amazon SES will be able to DKIM-sign email originating from that domain.</p> <p>This action is throttled at one request per second.</p> <p>To enable or disable Easy DKIM signing for a domain, use the <code>SetIdentityDkimEnabled</code> action.</p> <p>For more information about creating DNS records using DKIM tokens, go to the <a href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/easy-dkim-dns-records.html">Amazon SES Developer Guide</a>.</p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void VerifyDomainDkimAsync(const Model::VerifyDomainDkimRequest& request, const Aws::Client::AsyncCallerContext* context = nullptr) const;

     /*
       <p>Verifies a domain.</p> <p>This action is throttled at one request per second.</p>
     */
     Model::VerifyDomainIdentityOutcome VerifyDomainIdentity(const Model::VerifyDomainIdentityRequest& request) const;

     /*
       <p>Verifies a domain.</p> <p>This action is throttled at one request per second.</p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::VerifyDomainIdentityOutcomeCallable VerifyDomainIdentityCallable(const Model::VerifyDomainIdentityRequest& request) const;

     /*
       <p>Verifies a domain.</p> <p>This action is throttled at one request per second.</p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void VerifyDomainIdentityAsync(const Model::VerifyDomainIdentityRequest& request, const Aws::Client::AsyncCallerContext* context = nullptr) const;

     /*
       <p>Verifies an email address. This action causes a confirmation email message to be sent to the specified address.</p> <important>The VerifyEmailAddress action is deprecated as of the May 15, 2012 release of Domain Verification. The VerifyEmailIdentity action is now preferred.</important> <p>This action is throttled at one request per second.</p>
     */
     Model::VerifyEmailAddressOutcome VerifyEmailAddress(const Model::VerifyEmailAddressRequest& request) const;

     /*
       <p>Verifies an email address. This action causes a confirmation email message to be sent to the specified address.</p> <important>The VerifyEmailAddress action is deprecated as of the May 15, 2012 release of Domain Verification. The VerifyEmailIdentity action is now preferred.</important> <p>This action is throttled at one request per second.</p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::VerifyEmailAddressOutcomeCallable VerifyEmailAddressCallable(const Model::VerifyEmailAddressRequest& request) const;

     /*
       <p>Verifies an email address. This action causes a confirmation email message to be sent to the specified address.</p> <important>The VerifyEmailAddress action is deprecated as of the May 15, 2012 release of Domain Verification. The VerifyEmailIdentity action is now preferred.</important> <p>This action is throttled at one request per second.</p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void VerifyEmailAddressAsync(const Model::VerifyEmailAddressRequest& request, const Aws::Client::AsyncCallerContext* context = nullptr) const;

     /*
       <p>Verifies an email address. This action causes a confirmation email message to be sent to the specified address.</p> <p>This action is throttled at one request per second.</p>
     */
     Model::VerifyEmailIdentityOutcome VerifyEmailIdentity(const Model::VerifyEmailIdentityRequest& request) const;

     /*
       <p>Verifies an email address. This action causes a confirmation email message to be sent to the specified address.</p> <p>This action is throttled at one request per second.</p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::VerifyEmailIdentityOutcomeCallable VerifyEmailIdentityCallable(const Model::VerifyEmailIdentityRequest& request) const;

     /*
       <p>Verifies an email address. This action causes a confirmation email message to be sent to the specified address.</p> <p>This action is throttled at one request per second.</p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void VerifyEmailIdentityAsync(const Model::VerifyEmailIdentityRequest& request, const Aws::Client::AsyncCallerContext* context = nullptr) const;

   /**
    * Adds an event handler for DeleteIdentityAsync to call upon completion to the handler chain. You need to call this to
    * use DeleteIdentityAsync.
    */
    inline void RegisterDeleteIdentityOutcomeReceivedHandler(const DeleteIdentityOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onDeleteIdentityOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for DeleteIdentity.
    */
    inline void ClearAllDeleteIdentityOutcomeReceivedHandlers()
    {
      m_onDeleteIdentityOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for DeleteIdentityPolicyAsync to call upon completion to the handler chain. You need to call this to
    * use DeleteIdentityPolicyAsync.
    */
    inline void RegisterDeleteIdentityPolicyOutcomeReceivedHandler(const DeleteIdentityPolicyOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onDeleteIdentityPolicyOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for DeleteIdentityPolicy.
    */
    inline void ClearAllDeleteIdentityPolicyOutcomeReceivedHandlers()
    {
      m_onDeleteIdentityPolicyOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for DeleteVerifiedEmailAddressAsync to call upon completion to the handler chain. You need to call this to
    * use DeleteVerifiedEmailAddressAsync.
    */
    inline void RegisterDeleteVerifiedEmailAddressOutcomeReceivedHandler(const DeleteVerifiedEmailAddressOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onDeleteVerifiedEmailAddressOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for DeleteVerifiedEmailAddress.
    */
    inline void ClearAllDeleteVerifiedEmailAddressOutcomeReceivedHandlers()
    {
      m_onDeleteVerifiedEmailAddressOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for GetIdentityDkimAttributesAsync to call upon completion to the handler chain. You need to call this to
    * use GetIdentityDkimAttributesAsync.
    */
    inline void RegisterGetIdentityDkimAttributesOutcomeReceivedHandler(const GetIdentityDkimAttributesOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onGetIdentityDkimAttributesOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for GetIdentityDkimAttributes.
    */
    inline void ClearAllGetIdentityDkimAttributesOutcomeReceivedHandlers()
    {
      m_onGetIdentityDkimAttributesOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for GetIdentityNotificationAttributesAsync to call upon completion to the handler chain. You need to call this to
    * use GetIdentityNotificationAttributesAsync.
    */
    inline void RegisterGetIdentityNotificationAttributesOutcomeReceivedHandler(const GetIdentityNotificationAttributesOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onGetIdentityNotificationAttributesOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for GetIdentityNotificationAttributes.
    */
    inline void ClearAllGetIdentityNotificationAttributesOutcomeReceivedHandlers()
    {
      m_onGetIdentityNotificationAttributesOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for GetIdentityPoliciesAsync to call upon completion to the handler chain. You need to call this to
    * use GetIdentityPoliciesAsync.
    */
    inline void RegisterGetIdentityPoliciesOutcomeReceivedHandler(const GetIdentityPoliciesOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onGetIdentityPoliciesOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for GetIdentityPolicies.
    */
    inline void ClearAllGetIdentityPoliciesOutcomeReceivedHandlers()
    {
      m_onGetIdentityPoliciesOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for GetIdentityVerificationAttributesAsync to call upon completion to the handler chain. You need to call this to
    * use GetIdentityVerificationAttributesAsync.
    */
    inline void RegisterGetIdentityVerificationAttributesOutcomeReceivedHandler(const GetIdentityVerificationAttributesOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onGetIdentityVerificationAttributesOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for GetIdentityVerificationAttributes.
    */
    inline void ClearAllGetIdentityVerificationAttributesOutcomeReceivedHandlers()
    {
      m_onGetIdentityVerificationAttributesOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for GetSendQuotaAsync to call upon completion to the handler chain. You need to call this to
    * use GetSendQuotaAsync.
    */
    inline void RegisterGetSendQuotaOutcomeReceivedHandler(const GetSendQuotaOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onGetSendQuotaOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for GetSendQuota.
    */
    inline void ClearAllGetSendQuotaOutcomeReceivedHandlers()
    {
      m_onGetSendQuotaOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for GetSendStatisticsAsync to call upon completion to the handler chain. You need to call this to
    * use GetSendStatisticsAsync.
    */
    inline void RegisterGetSendStatisticsOutcomeReceivedHandler(const GetSendStatisticsOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onGetSendStatisticsOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for GetSendStatistics.
    */
    inline void ClearAllGetSendStatisticsOutcomeReceivedHandlers()
    {
      m_onGetSendStatisticsOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for ListIdentitiesAsync to call upon completion to the handler chain. You need to call this to
    * use ListIdentitiesAsync.
    */
    inline void RegisterListIdentitiesOutcomeReceivedHandler(const ListIdentitiesOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onListIdentitiesOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for ListIdentities.
    */
    inline void ClearAllListIdentitiesOutcomeReceivedHandlers()
    {
      m_onListIdentitiesOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for ListIdentityPoliciesAsync to call upon completion to the handler chain. You need to call this to
    * use ListIdentityPoliciesAsync.
    */
    inline void RegisterListIdentityPoliciesOutcomeReceivedHandler(const ListIdentityPoliciesOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onListIdentityPoliciesOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for ListIdentityPolicies.
    */
    inline void ClearAllListIdentityPoliciesOutcomeReceivedHandlers()
    {
      m_onListIdentityPoliciesOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for ListVerifiedEmailAddressesAsync to call upon completion to the handler chain. You need to call this to
    * use ListVerifiedEmailAddressesAsync.
    */
    inline void RegisterListVerifiedEmailAddressesOutcomeReceivedHandler(const ListVerifiedEmailAddressesOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onListVerifiedEmailAddressesOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for ListVerifiedEmailAddresses.
    */
    inline void ClearAllListVerifiedEmailAddressesOutcomeReceivedHandlers()
    {
      m_onListVerifiedEmailAddressesOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for PutIdentityPolicyAsync to call upon completion to the handler chain. You need to call this to
    * use PutIdentityPolicyAsync.
    */
    inline void RegisterPutIdentityPolicyOutcomeReceivedHandler(const PutIdentityPolicyOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onPutIdentityPolicyOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for PutIdentityPolicy.
    */
    inline void ClearAllPutIdentityPolicyOutcomeReceivedHandlers()
    {
      m_onPutIdentityPolicyOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for SendEmailAsync to call upon completion to the handler chain. You need to call this to
    * use SendEmailAsync.
    */
    inline void RegisterSendEmailOutcomeReceivedHandler(const SendEmailOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onSendEmailOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for SendEmail.
    */
    inline void ClearAllSendEmailOutcomeReceivedHandlers()
    {
      m_onSendEmailOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for SendRawEmailAsync to call upon completion to the handler chain. You need to call this to
    * use SendRawEmailAsync.
    */
    inline void RegisterSendRawEmailOutcomeReceivedHandler(const SendRawEmailOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onSendRawEmailOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for SendRawEmail.
    */
    inline void ClearAllSendRawEmailOutcomeReceivedHandlers()
    {
      m_onSendRawEmailOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for SetIdentityDkimEnabledAsync to call upon completion to the handler chain. You need to call this to
    * use SetIdentityDkimEnabledAsync.
    */
    inline void RegisterSetIdentityDkimEnabledOutcomeReceivedHandler(const SetIdentityDkimEnabledOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onSetIdentityDkimEnabledOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for SetIdentityDkimEnabled.
    */
    inline void ClearAllSetIdentityDkimEnabledOutcomeReceivedHandlers()
    {
      m_onSetIdentityDkimEnabledOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for SetIdentityFeedbackForwardingEnabledAsync to call upon completion to the handler chain. You need to call this to
    * use SetIdentityFeedbackForwardingEnabledAsync.
    */
    inline void RegisterSetIdentityFeedbackForwardingEnabledOutcomeReceivedHandler(const SetIdentityFeedbackForwardingEnabledOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onSetIdentityFeedbackForwardingEnabledOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for SetIdentityFeedbackForwardingEnabled.
    */
    inline void ClearAllSetIdentityFeedbackForwardingEnabledOutcomeReceivedHandlers()
    {
      m_onSetIdentityFeedbackForwardingEnabledOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for SetIdentityNotificationTopicAsync to call upon completion to the handler chain. You need to call this to
    * use SetIdentityNotificationTopicAsync.
    */
    inline void RegisterSetIdentityNotificationTopicOutcomeReceivedHandler(const SetIdentityNotificationTopicOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onSetIdentityNotificationTopicOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for SetIdentityNotificationTopic.
    */
    inline void ClearAllSetIdentityNotificationTopicOutcomeReceivedHandlers()
    {
      m_onSetIdentityNotificationTopicOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for VerifyDomainDkimAsync to call upon completion to the handler chain. You need to call this to
    * use VerifyDomainDkimAsync.
    */
    inline void RegisterVerifyDomainDkimOutcomeReceivedHandler(const VerifyDomainDkimOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onVerifyDomainDkimOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for VerifyDomainDkim.
    */
    inline void ClearAllVerifyDomainDkimOutcomeReceivedHandlers()
    {
      m_onVerifyDomainDkimOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for VerifyDomainIdentityAsync to call upon completion to the handler chain. You need to call this to
    * use VerifyDomainIdentityAsync.
    */
    inline void RegisterVerifyDomainIdentityOutcomeReceivedHandler(const VerifyDomainIdentityOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onVerifyDomainIdentityOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for VerifyDomainIdentity.
    */
    inline void ClearAllVerifyDomainIdentityOutcomeReceivedHandlers()
    {
      m_onVerifyDomainIdentityOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for VerifyEmailAddressAsync to call upon completion to the handler chain. You need to call this to
    * use VerifyEmailAddressAsync.
    */
    inline void RegisterVerifyEmailAddressOutcomeReceivedHandler(const VerifyEmailAddressOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onVerifyEmailAddressOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for VerifyEmailAddress.
    */
    inline void ClearAllVerifyEmailAddressOutcomeReceivedHandlers()
    {
      m_onVerifyEmailAddressOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for VerifyEmailIdentityAsync to call upon completion to the handler chain. You need to call this to
    * use VerifyEmailIdentityAsync.
    */
    inline void RegisterVerifyEmailIdentityOutcomeReceivedHandler(const VerifyEmailIdentityOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onVerifyEmailIdentityOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for VerifyEmailIdentity.
    */
    inline void ClearAllVerifyEmailIdentityOutcomeReceivedHandlers()
    {
      m_onVerifyEmailIdentityOutcomeReceived.Clear();
    }

  private:
    void init(const Client::ClientConfiguration& clientConfiguration);

    /**Async helpers**/
    void DeleteIdentityAsyncHelper(const Model::DeleteIdentityRequest& request, const Aws::Client::AsyncCallerContext* context) const;
    void DeleteIdentityPolicyAsyncHelper(const Model::DeleteIdentityPolicyRequest& request, const Aws::Client::AsyncCallerContext* context) const;
    void DeleteVerifiedEmailAddressAsyncHelper(const Model::DeleteVerifiedEmailAddressRequest& request, const Aws::Client::AsyncCallerContext* context) const;
    void GetIdentityDkimAttributesAsyncHelper(const Model::GetIdentityDkimAttributesRequest& request, const Aws::Client::AsyncCallerContext* context) const;
    void GetIdentityNotificationAttributesAsyncHelper(const Model::GetIdentityNotificationAttributesRequest& request, const Aws::Client::AsyncCallerContext* context) const;
    void GetIdentityPoliciesAsyncHelper(const Model::GetIdentityPoliciesRequest& request, const Aws::Client::AsyncCallerContext* context) const;
    void GetIdentityVerificationAttributesAsyncHelper(const Model::GetIdentityVerificationAttributesRequest& request, const Aws::Client::AsyncCallerContext* context) const;
    void GetSendQuotaAsyncHelper(const Model::GetSendQuotaRequest& request, const Aws::Client::AsyncCallerContext* context) const;
    void GetSendStatisticsAsyncHelper(const Model::GetSendStatisticsRequest& request, const Aws::Client::AsyncCallerContext* context) const;
    void ListIdentitiesAsyncHelper(const Model::ListIdentitiesRequest& request, const Aws::Client::AsyncCallerContext* context) const;
    void ListIdentityPoliciesAsyncHelper(const Model::ListIdentityPoliciesRequest& request, const Aws::Client::AsyncCallerContext* context) const;
    void ListVerifiedEmailAddressesAsyncHelper(const Model::ListVerifiedEmailAddressesRequest& request, const Aws::Client::AsyncCallerContext* context) const;
    void PutIdentityPolicyAsyncHelper(const Model::PutIdentityPolicyRequest& request, const Aws::Client::AsyncCallerContext* context) const;
    void SendEmailAsyncHelper(const Model::SendEmailRequest& request, const Aws::Client::AsyncCallerContext* context) const;
    void SendRawEmailAsyncHelper(const Model::SendRawEmailRequest& request, const Aws::Client::AsyncCallerContext* context) const;
    void SetIdentityDkimEnabledAsyncHelper(const Model::SetIdentityDkimEnabledRequest& request, const Aws::Client::AsyncCallerContext* context) const;
    void SetIdentityFeedbackForwardingEnabledAsyncHelper(const Model::SetIdentityFeedbackForwardingEnabledRequest& request, const Aws::Client::AsyncCallerContext* context) const;
    void SetIdentityNotificationTopicAsyncHelper(const Model::SetIdentityNotificationTopicRequest& request, const Aws::Client::AsyncCallerContext* context) const;
    void VerifyDomainDkimAsyncHelper(const Model::VerifyDomainDkimRequest& request, const Aws::Client::AsyncCallerContext* context) const;
    void VerifyDomainIdentityAsyncHelper(const Model::VerifyDomainIdentityRequest& request, const Aws::Client::AsyncCallerContext* context) const;
    void VerifyEmailAddressAsyncHelper(const Model::VerifyEmailAddressRequest& request, const Aws::Client::AsyncCallerContext* context) const;
    void VerifyEmailIdentityAsyncHelper(const Model::VerifyEmailIdentityRequest& request, const Aws::Client::AsyncCallerContext* context) const;

    Aws::String m_uri;
    std::shared_ptr<Utils::Threading::Executor> m_executor;

    /** events **/
    DeleteIdentityOutcomeReceivedEvent m_onDeleteIdentityOutcomeReceived;
    DeleteIdentityPolicyOutcomeReceivedEvent m_onDeleteIdentityPolicyOutcomeReceived;
    DeleteVerifiedEmailAddressOutcomeReceivedEvent m_onDeleteVerifiedEmailAddressOutcomeReceived;
    GetIdentityDkimAttributesOutcomeReceivedEvent m_onGetIdentityDkimAttributesOutcomeReceived;
    GetIdentityNotificationAttributesOutcomeReceivedEvent m_onGetIdentityNotificationAttributesOutcomeReceived;
    GetIdentityPoliciesOutcomeReceivedEvent m_onGetIdentityPoliciesOutcomeReceived;
    GetIdentityVerificationAttributesOutcomeReceivedEvent m_onGetIdentityVerificationAttributesOutcomeReceived;
    GetSendQuotaOutcomeReceivedEvent m_onGetSendQuotaOutcomeReceived;
    GetSendStatisticsOutcomeReceivedEvent m_onGetSendStatisticsOutcomeReceived;
    ListIdentitiesOutcomeReceivedEvent m_onListIdentitiesOutcomeReceived;
    ListIdentityPoliciesOutcomeReceivedEvent m_onListIdentityPoliciesOutcomeReceived;
    ListVerifiedEmailAddressesOutcomeReceivedEvent m_onListVerifiedEmailAddressesOutcomeReceived;
    PutIdentityPolicyOutcomeReceivedEvent m_onPutIdentityPolicyOutcomeReceived;
    SendEmailOutcomeReceivedEvent m_onSendEmailOutcomeReceived;
    SendRawEmailOutcomeReceivedEvent m_onSendRawEmailOutcomeReceived;
    SetIdentityDkimEnabledOutcomeReceivedEvent m_onSetIdentityDkimEnabledOutcomeReceived;
    SetIdentityFeedbackForwardingEnabledOutcomeReceivedEvent m_onSetIdentityFeedbackForwardingEnabledOutcomeReceived;
    SetIdentityNotificationTopicOutcomeReceivedEvent m_onSetIdentityNotificationTopicOutcomeReceived;
    VerifyDomainDkimOutcomeReceivedEvent m_onVerifyDomainDkimOutcomeReceived;
    VerifyDomainIdentityOutcomeReceivedEvent m_onVerifyDomainIdentityOutcomeReceived;
    VerifyEmailAddressOutcomeReceivedEvent m_onVerifyEmailAddressOutcomeReceived;
    VerifyEmailIdentityOutcomeReceivedEvent m_onVerifyEmailIdentityOutcomeReceived;
  };

} // namespace SES
} // namespace Aws
