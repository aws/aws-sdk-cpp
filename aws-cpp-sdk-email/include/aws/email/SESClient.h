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
#include <aws/email/model/GetIdentityDkimAttributesResult.h>
#include <aws/email/model/GetIdentityNotificationAttributesResult.h>
#include <aws/email/model/GetIdentityVerificationAttributesResult.h>
#include <aws/email/model/GetSendQuotaResult.h>
#include <aws/email/model/GetSendStatisticsResult.h>
#include <aws/email/model/ListIdentitiesResult.h>
#include <aws/email/model/ListVerifiedEmailAddressesResult.h>
#include <aws/email/model/SendEmailResult.h>
#include <aws/email/model/SendRawEmailResult.h>
#include <aws/email/model/SetIdentityDkimEnabledResult.h>
#include <aws/email/model/SetIdentityFeedbackForwardingEnabledResult.h>
#include <aws/email/model/SetIdentityNotificationTopicResult.h>
#include <aws/email/model/VerifyDomainDkimResult.h>
#include <aws/email/model/VerifyDomainIdentityResult.h>
#include <aws/email/model/VerifyEmailIdentityResult.h>
#include <aws/core/NoResult.h>
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
  class DeleteVerifiedEmailAddressRequest;
  class GetIdentityDkimAttributesRequest;
  class GetIdentityNotificationAttributesRequest;
  class GetIdentityVerificationAttributesRequest;
  class GetSendQuotaRequest;
  class GetSendStatisticsRequest;
  class ListIdentitiesRequest;
  class ListVerifiedEmailAddressesRequest;
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
  typedef Utils::Outcome<NoResult, Client::AWSError<SESErrors>> DeleteVerifiedEmailAddressOutcome;
  typedef Utils::Outcome<GetIdentityDkimAttributesResult, Client::AWSError<SESErrors>> GetIdentityDkimAttributesOutcome;
  typedef Utils::Outcome<GetIdentityNotificationAttributesResult, Client::AWSError<SESErrors>> GetIdentityNotificationAttributesOutcome;
  typedef Utils::Outcome<GetIdentityVerificationAttributesResult, Client::AWSError<SESErrors>> GetIdentityVerificationAttributesOutcome;
  typedef Utils::Outcome<GetSendQuotaResult, Client::AWSError<SESErrors>> GetSendQuotaOutcome;
  typedef Utils::Outcome<GetSendStatisticsResult, Client::AWSError<SESErrors>> GetSendStatisticsOutcome;
  typedef Utils::Outcome<ListIdentitiesResult, Client::AWSError<SESErrors>> ListIdentitiesOutcome;
  typedef Utils::Outcome<ListVerifiedEmailAddressesResult, Client::AWSError<SESErrors>> ListVerifiedEmailAddressesOutcome;
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
  typedef std::future<DeleteVerifiedEmailAddressOutcome> DeleteVerifiedEmailAddressOutcomeCallable;
  typedef std::future<GetIdentityDkimAttributesOutcome> GetIdentityDkimAttributesOutcomeCallable;
  typedef std::future<GetIdentityNotificationAttributesOutcome> GetIdentityNotificationAttributesOutcomeCallable;
  typedef std::future<GetIdentityVerificationAttributesOutcome> GetIdentityVerificationAttributesOutcomeCallable;
  typedef std::future<GetSendQuotaOutcome> GetSendQuotaOutcomeCallable;
  typedef std::future<GetSendStatisticsOutcome> GetSendStatisticsOutcomeCallable;
  typedef std::future<ListIdentitiesOutcome> ListIdentitiesOutcomeCallable;
  typedef std::future<ListVerifiedEmailAddressesOutcome> ListVerifiedEmailAddressesOutcomeCallable;
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

  typedef Aws::Utils::Event<SESClient, const Model::DeleteIdentityRequest&, const Model::DeleteIdentityOutcome&> DeleteIdentityOutcomeReceivedEvent;
  typedef Aws::Utils::Event<SESClient, const Model::DeleteVerifiedEmailAddressRequest&, const Model::DeleteVerifiedEmailAddressOutcome&> DeleteVerifiedEmailAddressOutcomeReceivedEvent;
  typedef Aws::Utils::Event<SESClient, const Model::GetIdentityDkimAttributesRequest&, const Model::GetIdentityDkimAttributesOutcome&> GetIdentityDkimAttributesOutcomeReceivedEvent;
  typedef Aws::Utils::Event<SESClient, const Model::GetIdentityNotificationAttributesRequest&, const Model::GetIdentityNotificationAttributesOutcome&> GetIdentityNotificationAttributesOutcomeReceivedEvent;
  typedef Aws::Utils::Event<SESClient, const Model::GetIdentityVerificationAttributesRequest&, const Model::GetIdentityVerificationAttributesOutcome&> GetIdentityVerificationAttributesOutcomeReceivedEvent;
  typedef Aws::Utils::Event<SESClient, const Model::GetSendQuotaRequest&, const Model::GetSendQuotaOutcome&> GetSendQuotaOutcomeReceivedEvent;
  typedef Aws::Utils::Event<SESClient, const Model::GetSendStatisticsRequest&, const Model::GetSendStatisticsOutcome&> GetSendStatisticsOutcomeReceivedEvent;
  typedef Aws::Utils::Event<SESClient, const Model::ListIdentitiesRequest&, const Model::ListIdentitiesOutcome&> ListIdentitiesOutcomeReceivedEvent;
  typedef Aws::Utils::Event<SESClient, const Model::ListVerifiedEmailAddressesRequest&, const Model::ListVerifiedEmailAddressesOutcome&> ListVerifiedEmailAddressesOutcomeReceivedEvent;
  typedef Aws::Utils::Event<SESClient, const Model::SendEmailRequest&, const Model::SendEmailOutcome&> SendEmailOutcomeReceivedEvent;
  typedef Aws::Utils::Event<SESClient, const Model::SendRawEmailRequest&, const Model::SendRawEmailOutcome&> SendRawEmailOutcomeReceivedEvent;
  typedef Aws::Utils::Event<SESClient, const Model::SetIdentityDkimEnabledRequest&, const Model::SetIdentityDkimEnabledOutcome&> SetIdentityDkimEnabledOutcomeReceivedEvent;
  typedef Aws::Utils::Event<SESClient, const Model::SetIdentityFeedbackForwardingEnabledRequest&, const Model::SetIdentityFeedbackForwardingEnabledOutcome&> SetIdentityFeedbackForwardingEnabledOutcomeReceivedEvent;
  typedef Aws::Utils::Event<SESClient, const Model::SetIdentityNotificationTopicRequest&, const Model::SetIdentityNotificationTopicOutcome&> SetIdentityNotificationTopicOutcomeReceivedEvent;
  typedef Aws::Utils::Event<SESClient, const Model::VerifyDomainDkimRequest&, const Model::VerifyDomainDkimOutcome&> VerifyDomainDkimOutcomeReceivedEvent;
  typedef Aws::Utils::Event<SESClient, const Model::VerifyDomainIdentityRequest&, const Model::VerifyDomainIdentityOutcome&> VerifyDomainIdentityOutcomeReceivedEvent;
  typedef Aws::Utils::Event<SESClient, const Model::VerifyEmailAddressRequest&, const Model::VerifyEmailAddressOutcome&> VerifyEmailAddressOutcomeReceivedEvent;
  typedef Aws::Utils::Event<SESClient, const Model::VerifyEmailIdentityRequest&, const Model::VerifyEmailIdentityOutcome&> VerifyEmailIdentityOutcomeReceivedEvent;

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
     void DeleteIdentityAsync(const Model::DeleteIdentityRequest& request) const;

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
     void DeleteVerifiedEmailAddressAsync(const Model::DeleteVerifiedEmailAddressRequest& request) const;

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
     void GetIdentityDkimAttributesAsync(const Model::GetIdentityDkimAttributesRequest& request) const;

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
     void GetIdentityNotificationAttributesAsync(const Model::GetIdentityNotificationAttributesRequest& request) const;

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
     void GetIdentityVerificationAttributesAsync(const Model::GetIdentityVerificationAttributesRequest& request) const;

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
     void GetSendQuotaAsync(const Model::GetSendQuotaRequest& request) const;

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
     void GetSendStatisticsAsync(const Model::GetSendStatisticsRequest& request) const;

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
     void ListIdentitiesAsync(const Model::ListIdentitiesRequest& request) const;

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
     void ListVerifiedEmailAddressesAsync(const Model::ListVerifiedEmailAddressesRequest& request) const;

     /*
       <p>Composes an email message based on input data, and then immediately queues the message for sending. </p> <important> You can only send email from verified email addresses and domains. If your account is still in the Amazon SES sandbox, you must also verify every recipient email address except for the recipients provided by the Amazon SES mailbox simulator. For more information, go to the <a href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/verify-addresses-and-domains.html">Amazon SES Developer Guide</a>. </important> <p>The total size of the message cannot exceed 10 MB.</p> <p>Amazon SES has a limit on the total number of recipients per message: The combined number of To:, CC: and BCC: email addresses cannot exceed 50. If you need to send an email message to a larger audience, you can divide your recipient list into groups of 50 or fewer, and then call Amazon SES repeatedly to send the message to each group. </p> <p>For every message that you send, the total number of recipients (To:, CC: and BCC:) is counted against your <i>sending quota</i> - the maximum number of emails you can send in a 24-hour period. For information about your sending quota, go to the <a href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/manage-sending-limits.html">Amazon SES Developer Guide</a>. </p>
     */
     Model::SendEmailOutcome SendEmail(const Model::SendEmailRequest& request) const;

     /*
       <p>Composes an email message based on input data, and then immediately queues the message for sending. </p> <important> You can only send email from verified email addresses and domains. If your account is still in the Amazon SES sandbox, you must also verify every recipient email address except for the recipients provided by the Amazon SES mailbox simulator. For more information, go to the <a href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/verify-addresses-and-domains.html">Amazon SES Developer Guide</a>. </important> <p>The total size of the message cannot exceed 10 MB.</p> <p>Amazon SES has a limit on the total number of recipients per message: The combined number of To:, CC: and BCC: email addresses cannot exceed 50. If you need to send an email message to a larger audience, you can divide your recipient list into groups of 50 or fewer, and then call Amazon SES repeatedly to send the message to each group. </p> <p>For every message that you send, the total number of recipients (To:, CC: and BCC:) is counted against your <i>sending quota</i> - the maximum number of emails you can send in a 24-hour period. For information about your sending quota, go to the <a href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/manage-sending-limits.html">Amazon SES Developer Guide</a>. </p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::SendEmailOutcomeCallable SendEmailCallable(const Model::SendEmailRequest& request) const;

     /*
       <p>Composes an email message based on input data, and then immediately queues the message for sending. </p> <important> You can only send email from verified email addresses and domains. If your account is still in the Amazon SES sandbox, you must also verify every recipient email address except for the recipients provided by the Amazon SES mailbox simulator. For more information, go to the <a href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/verify-addresses-and-domains.html">Amazon SES Developer Guide</a>. </important> <p>The total size of the message cannot exceed 10 MB.</p> <p>Amazon SES has a limit on the total number of recipients per message: The combined number of To:, CC: and BCC: email addresses cannot exceed 50. If you need to send an email message to a larger audience, you can divide your recipient list into groups of 50 or fewer, and then call Amazon SES repeatedly to send the message to each group. </p> <p>For every message that you send, the total number of recipients (To:, CC: and BCC:) is counted against your <i>sending quota</i> - the maximum number of emails you can send in a 24-hour period. For information about your sending quota, go to the <a href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/manage-sending-limits.html">Amazon SES Developer Guide</a>. </p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void SendEmailAsync(const Model::SendEmailRequest& request) const;

     /*
       <p>Sends an email message, with header and content specified by the client. The <code>SendRawEmail</code> action is useful for sending multipart MIME emails. The raw text of the message must comply with Internet email standards; otherwise, the message cannot be sent. </p> <important> You can only send email from verified email addresses and domains. If your account is still in the Amazon SES sandbox, you must also verify every recipient email address except for the recipients provided by the Amazon SES mailbox simulator. For more information, go to the <a href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/verify-addresses-and-domains.html">Amazon SES Developer Guide</a>. </important> <p>The total size of the message cannot exceed 10 MB. This includes any attachments that are part of the message.</p> <p>Amazon SES has a limit on the total number of recipients per message: The combined number of To:, CC: and BCC: email addresses cannot exceed 50. If you need to send an email message to a larger audience, you can divide your recipient list into groups of 50 or fewer, and then call Amazon SES repeatedly to send the message to each group. </p> <p>The To:, CC:, and BCC: headers in the raw message can contain a group list. Note that each recipient in a group list counts towards the 50-recipient limit. </p> <p>For every message that you send, the total number of recipients (To:, CC: and BCC:) is counted against your <i>sending quota</i> - the maximum number of emails you can send in a 24-hour period. For information about your sending quota, go to the <a href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/manage-sending-limits.html">Amazon SES Developer Guide</a>. </p>
     */
     Model::SendRawEmailOutcome SendRawEmail(const Model::SendRawEmailRequest& request) const;

     /*
       <p>Sends an email message, with header and content specified by the client. The <code>SendRawEmail</code> action is useful for sending multipart MIME emails. The raw text of the message must comply with Internet email standards; otherwise, the message cannot be sent. </p> <important> You can only send email from verified email addresses and domains. If your account is still in the Amazon SES sandbox, you must also verify every recipient email address except for the recipients provided by the Amazon SES mailbox simulator. For more information, go to the <a href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/verify-addresses-and-domains.html">Amazon SES Developer Guide</a>. </important> <p>The total size of the message cannot exceed 10 MB. This includes any attachments that are part of the message.</p> <p>Amazon SES has a limit on the total number of recipients per message: The combined number of To:, CC: and BCC: email addresses cannot exceed 50. If you need to send an email message to a larger audience, you can divide your recipient list into groups of 50 or fewer, and then call Amazon SES repeatedly to send the message to each group. </p> <p>The To:, CC:, and BCC: headers in the raw message can contain a group list. Note that each recipient in a group list counts towards the 50-recipient limit. </p> <p>For every message that you send, the total number of recipients (To:, CC: and BCC:) is counted against your <i>sending quota</i> - the maximum number of emails you can send in a 24-hour period. For information about your sending quota, go to the <a href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/manage-sending-limits.html">Amazon SES Developer Guide</a>. </p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::SendRawEmailOutcomeCallable SendRawEmailCallable(const Model::SendRawEmailRequest& request) const;

     /*
       <p>Sends an email message, with header and content specified by the client. The <code>SendRawEmail</code> action is useful for sending multipart MIME emails. The raw text of the message must comply with Internet email standards; otherwise, the message cannot be sent. </p> <important> You can only send email from verified email addresses and domains. If your account is still in the Amazon SES sandbox, you must also verify every recipient email address except for the recipients provided by the Amazon SES mailbox simulator. For more information, go to the <a href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/verify-addresses-and-domains.html">Amazon SES Developer Guide</a>. </important> <p>The total size of the message cannot exceed 10 MB. This includes any attachments that are part of the message.</p> <p>Amazon SES has a limit on the total number of recipients per message: The combined number of To:, CC: and BCC: email addresses cannot exceed 50. If you need to send an email message to a larger audience, you can divide your recipient list into groups of 50 or fewer, and then call Amazon SES repeatedly to send the message to each group. </p> <p>The To:, CC:, and BCC: headers in the raw message can contain a group list. Note that each recipient in a group list counts towards the 50-recipient limit. </p> <p>For every message that you send, the total number of recipients (To:, CC: and BCC:) is counted against your <i>sending quota</i> - the maximum number of emails you can send in a 24-hour period. For information about your sending quota, go to the <a href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/manage-sending-limits.html">Amazon SES Developer Guide</a>. </p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void SendRawEmailAsync(const Model::SendRawEmailRequest& request) const;

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
     void SetIdentityDkimEnabledAsync(const Model::SetIdentityDkimEnabledRequest& request) const;

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
     void SetIdentityFeedbackForwardingEnabledAsync(const Model::SetIdentityFeedbackForwardingEnabledRequest& request) const;

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
     void SetIdentityNotificationTopicAsync(const Model::SetIdentityNotificationTopicRequest& request) const;

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
     void VerifyDomainDkimAsync(const Model::VerifyDomainDkimRequest& request) const;

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
     void VerifyDomainIdentityAsync(const Model::VerifyDomainIdentityRequest& request) const;

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
     void VerifyEmailAddressAsync(const Model::VerifyEmailAddressRequest& request) const;

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
     void VerifyEmailIdentityAsync(const Model::VerifyEmailIdentityRequest& request) const;

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
    void DeleteIdentityAsyncHelper(const Model::DeleteIdentityRequest& request) const;
    void DeleteVerifiedEmailAddressAsyncHelper(const Model::DeleteVerifiedEmailAddressRequest& request) const;
    void GetIdentityDkimAttributesAsyncHelper(const Model::GetIdentityDkimAttributesRequest& request) const;
    void GetIdentityNotificationAttributesAsyncHelper(const Model::GetIdentityNotificationAttributesRequest& request) const;
    void GetIdentityVerificationAttributesAsyncHelper(const Model::GetIdentityVerificationAttributesRequest& request) const;
    void GetSendQuotaAsyncHelper(const Model::GetSendQuotaRequest& request) const;
    void GetSendStatisticsAsyncHelper(const Model::GetSendStatisticsRequest& request) const;
    void ListIdentitiesAsyncHelper(const Model::ListIdentitiesRequest& request) const;
    void ListVerifiedEmailAddressesAsyncHelper(const Model::ListVerifiedEmailAddressesRequest& request) const;
    void SendEmailAsyncHelper(const Model::SendEmailRequest& request) const;
    void SendRawEmailAsyncHelper(const Model::SendRawEmailRequest& request) const;
    void SetIdentityDkimEnabledAsyncHelper(const Model::SetIdentityDkimEnabledRequest& request) const;
    void SetIdentityFeedbackForwardingEnabledAsyncHelper(const Model::SetIdentityFeedbackForwardingEnabledRequest& request) const;
    void SetIdentityNotificationTopicAsyncHelper(const Model::SetIdentityNotificationTopicRequest& request) const;
    void VerifyDomainDkimAsyncHelper(const Model::VerifyDomainDkimRequest& request) const;
    void VerifyDomainIdentityAsyncHelper(const Model::VerifyDomainIdentityRequest& request) const;
    void VerifyEmailAddressAsyncHelper(const Model::VerifyEmailAddressRequest& request) const;
    void VerifyEmailIdentityAsyncHelper(const Model::VerifyEmailIdentityRequest& request) const;

    Aws::String m_uri;
    std::shared_ptr<Utils::Threading::Executor> m_executor;

    /** events **/
    DeleteIdentityOutcomeReceivedEvent m_onDeleteIdentityOutcomeReceived;
    DeleteVerifiedEmailAddressOutcomeReceivedEvent m_onDeleteVerifiedEmailAddressOutcomeReceived;
    GetIdentityDkimAttributesOutcomeReceivedEvent m_onGetIdentityDkimAttributesOutcomeReceived;
    GetIdentityNotificationAttributesOutcomeReceivedEvent m_onGetIdentityNotificationAttributesOutcomeReceived;
    GetIdentityVerificationAttributesOutcomeReceivedEvent m_onGetIdentityVerificationAttributesOutcomeReceived;
    GetSendQuotaOutcomeReceivedEvent m_onGetSendQuotaOutcomeReceived;
    GetSendStatisticsOutcomeReceivedEvent m_onGetSendStatisticsOutcomeReceived;
    ListIdentitiesOutcomeReceivedEvent m_onListIdentitiesOutcomeReceived;
    ListVerifiedEmailAddressesOutcomeReceivedEvent m_onListVerifiedEmailAddressesOutcomeReceived;
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
