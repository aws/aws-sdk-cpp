/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/email/SESErrors.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/email/SESEndpointProvider.h>
#include <future>
#include <functional>
/* End of generic header includes */

/* Service model headers required in SESClient header */
#include <aws/email/model/CloneReceiptRuleSetResult.h>
#include <aws/email/model/CreateConfigurationSetResult.h>
#include <aws/email/model/CreateConfigurationSetEventDestinationResult.h>
#include <aws/email/model/CreateConfigurationSetTrackingOptionsResult.h>
#include <aws/email/model/CreateReceiptFilterResult.h>
#include <aws/email/model/CreateReceiptRuleResult.h>
#include <aws/email/model/CreateReceiptRuleSetResult.h>
#include <aws/email/model/CreateTemplateResult.h>
#include <aws/email/model/DeleteConfigurationSetResult.h>
#include <aws/email/model/DeleteConfigurationSetEventDestinationResult.h>
#include <aws/email/model/DeleteConfigurationSetTrackingOptionsResult.h>
#include <aws/email/model/DeleteIdentityResult.h>
#include <aws/email/model/DeleteIdentityPolicyResult.h>
#include <aws/email/model/DeleteReceiptFilterResult.h>
#include <aws/email/model/DeleteReceiptRuleResult.h>
#include <aws/email/model/DeleteReceiptRuleSetResult.h>
#include <aws/email/model/DeleteTemplateResult.h>
#include <aws/email/model/DescribeActiveReceiptRuleSetResult.h>
#include <aws/email/model/DescribeConfigurationSetResult.h>
#include <aws/email/model/DescribeReceiptRuleResult.h>
#include <aws/email/model/DescribeReceiptRuleSetResult.h>
#include <aws/email/model/GetAccountSendingEnabledResult.h>
#include <aws/email/model/GetCustomVerificationEmailTemplateResult.h>
#include <aws/email/model/GetIdentityDkimAttributesResult.h>
#include <aws/email/model/GetIdentityMailFromDomainAttributesResult.h>
#include <aws/email/model/GetIdentityNotificationAttributesResult.h>
#include <aws/email/model/GetIdentityPoliciesResult.h>
#include <aws/email/model/GetIdentityVerificationAttributesResult.h>
#include <aws/email/model/GetSendQuotaResult.h>
#include <aws/email/model/GetSendStatisticsResult.h>
#include <aws/email/model/GetTemplateResult.h>
#include <aws/email/model/ListConfigurationSetsResult.h>
#include <aws/email/model/ListCustomVerificationEmailTemplatesResult.h>
#include <aws/email/model/ListIdentitiesResult.h>
#include <aws/email/model/ListIdentityPoliciesResult.h>
#include <aws/email/model/ListReceiptFiltersResult.h>
#include <aws/email/model/ListReceiptRuleSetsResult.h>
#include <aws/email/model/ListTemplatesResult.h>
#include <aws/email/model/ListVerifiedEmailAddressesResult.h>
#include <aws/email/model/PutConfigurationSetDeliveryOptionsResult.h>
#include <aws/email/model/PutIdentityPolicyResult.h>
#include <aws/email/model/ReorderReceiptRuleSetResult.h>
#include <aws/email/model/SendBounceResult.h>
#include <aws/email/model/SendBulkTemplatedEmailResult.h>
#include <aws/email/model/SendCustomVerificationEmailResult.h>
#include <aws/email/model/SendEmailResult.h>
#include <aws/email/model/SendRawEmailResult.h>
#include <aws/email/model/SendTemplatedEmailResult.h>
#include <aws/email/model/SetActiveReceiptRuleSetResult.h>
#include <aws/email/model/SetIdentityDkimEnabledResult.h>
#include <aws/email/model/SetIdentityFeedbackForwardingEnabledResult.h>
#include <aws/email/model/SetIdentityHeadersInNotificationsEnabledResult.h>
#include <aws/email/model/SetIdentityMailFromDomainResult.h>
#include <aws/email/model/SetIdentityNotificationTopicResult.h>
#include <aws/email/model/SetReceiptRulePositionResult.h>
#include <aws/email/model/TestRenderTemplateResult.h>
#include <aws/email/model/UpdateConfigurationSetEventDestinationResult.h>
#include <aws/email/model/UpdateConfigurationSetTrackingOptionsResult.h>
#include <aws/email/model/UpdateReceiptRuleResult.h>
#include <aws/email/model/UpdateTemplateResult.h>
#include <aws/email/model/VerifyDomainDkimResult.h>
#include <aws/email/model/VerifyDomainIdentityResult.h>
#include <aws/email/model/VerifyEmailIdentityResult.h>
#include <aws/core/NoResult.h>
/* End of service model headers required in SESClient header */

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

  namespace SES
  {
    using SESClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
    using SESEndpointProviderBase = Aws::SES::Endpoint::SESEndpointProviderBase;
    using SESEndpointProvider = Aws::SES::Endpoint::SESEndpointProvider;

    namespace Model
    {
      /* Service model forward declarations required in SESClient header */
      class CloneReceiptRuleSetRequest;
      class CreateConfigurationSetRequest;
      class CreateConfigurationSetEventDestinationRequest;
      class CreateConfigurationSetTrackingOptionsRequest;
      class CreateCustomVerificationEmailTemplateRequest;
      class CreateReceiptFilterRequest;
      class CreateReceiptRuleRequest;
      class CreateReceiptRuleSetRequest;
      class CreateTemplateRequest;
      class DeleteConfigurationSetRequest;
      class DeleteConfigurationSetEventDestinationRequest;
      class DeleteConfigurationSetTrackingOptionsRequest;
      class DeleteCustomVerificationEmailTemplateRequest;
      class DeleteIdentityRequest;
      class DeleteIdentityPolicyRequest;
      class DeleteReceiptFilterRequest;
      class DeleteReceiptRuleRequest;
      class DeleteReceiptRuleSetRequest;
      class DeleteTemplateRequest;
      class DeleteVerifiedEmailAddressRequest;
      class DescribeActiveReceiptRuleSetRequest;
      class DescribeConfigurationSetRequest;
      class DescribeReceiptRuleRequest;
      class DescribeReceiptRuleSetRequest;
      class GetAccountSendingEnabledRequest;
      class GetCustomVerificationEmailTemplateRequest;
      class GetIdentityDkimAttributesRequest;
      class GetIdentityMailFromDomainAttributesRequest;
      class GetIdentityNotificationAttributesRequest;
      class GetIdentityPoliciesRequest;
      class GetIdentityVerificationAttributesRequest;
      class GetSendQuotaRequest;
      class GetSendStatisticsRequest;
      class GetTemplateRequest;
      class ListConfigurationSetsRequest;
      class ListCustomVerificationEmailTemplatesRequest;
      class ListIdentitiesRequest;
      class ListIdentityPoliciesRequest;
      class ListReceiptFiltersRequest;
      class ListReceiptRuleSetsRequest;
      class ListTemplatesRequest;
      class ListVerifiedEmailAddressesRequest;
      class PutConfigurationSetDeliveryOptionsRequest;
      class PutIdentityPolicyRequest;
      class ReorderReceiptRuleSetRequest;
      class SendBounceRequest;
      class SendBulkTemplatedEmailRequest;
      class SendCustomVerificationEmailRequest;
      class SendEmailRequest;
      class SendRawEmailRequest;
      class SendTemplatedEmailRequest;
      class SetActiveReceiptRuleSetRequest;
      class SetIdentityDkimEnabledRequest;
      class SetIdentityFeedbackForwardingEnabledRequest;
      class SetIdentityHeadersInNotificationsEnabledRequest;
      class SetIdentityMailFromDomainRequest;
      class SetIdentityNotificationTopicRequest;
      class SetReceiptRulePositionRequest;
      class TestRenderTemplateRequest;
      class UpdateAccountSendingEnabledRequest;
      class UpdateConfigurationSetEventDestinationRequest;
      class UpdateConfigurationSetReputationMetricsEnabledRequest;
      class UpdateConfigurationSetSendingEnabledRequest;
      class UpdateConfigurationSetTrackingOptionsRequest;
      class UpdateCustomVerificationEmailTemplateRequest;
      class UpdateReceiptRuleRequest;
      class UpdateTemplateRequest;
      class VerifyDomainDkimRequest;
      class VerifyDomainIdentityRequest;
      class VerifyEmailAddressRequest;
      class VerifyEmailIdentityRequest;
      /* End of service model forward declarations required in SESClient header */

      /* Service model Outcome class definitions */
      typedef Aws::Utils::Outcome<CloneReceiptRuleSetResult, SESError> CloneReceiptRuleSetOutcome;
      typedef Aws::Utils::Outcome<CreateConfigurationSetResult, SESError> CreateConfigurationSetOutcome;
      typedef Aws::Utils::Outcome<CreateConfigurationSetEventDestinationResult, SESError> CreateConfigurationSetEventDestinationOutcome;
      typedef Aws::Utils::Outcome<CreateConfigurationSetTrackingOptionsResult, SESError> CreateConfigurationSetTrackingOptionsOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, SESError> CreateCustomVerificationEmailTemplateOutcome;
      typedef Aws::Utils::Outcome<CreateReceiptFilterResult, SESError> CreateReceiptFilterOutcome;
      typedef Aws::Utils::Outcome<CreateReceiptRuleResult, SESError> CreateReceiptRuleOutcome;
      typedef Aws::Utils::Outcome<CreateReceiptRuleSetResult, SESError> CreateReceiptRuleSetOutcome;
      typedef Aws::Utils::Outcome<CreateTemplateResult, SESError> CreateTemplateOutcome;
      typedef Aws::Utils::Outcome<DeleteConfigurationSetResult, SESError> DeleteConfigurationSetOutcome;
      typedef Aws::Utils::Outcome<DeleteConfigurationSetEventDestinationResult, SESError> DeleteConfigurationSetEventDestinationOutcome;
      typedef Aws::Utils::Outcome<DeleteConfigurationSetTrackingOptionsResult, SESError> DeleteConfigurationSetTrackingOptionsOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, SESError> DeleteCustomVerificationEmailTemplateOutcome;
      typedef Aws::Utils::Outcome<DeleteIdentityResult, SESError> DeleteIdentityOutcome;
      typedef Aws::Utils::Outcome<DeleteIdentityPolicyResult, SESError> DeleteIdentityPolicyOutcome;
      typedef Aws::Utils::Outcome<DeleteReceiptFilterResult, SESError> DeleteReceiptFilterOutcome;
      typedef Aws::Utils::Outcome<DeleteReceiptRuleResult, SESError> DeleteReceiptRuleOutcome;
      typedef Aws::Utils::Outcome<DeleteReceiptRuleSetResult, SESError> DeleteReceiptRuleSetOutcome;
      typedef Aws::Utils::Outcome<DeleteTemplateResult, SESError> DeleteTemplateOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, SESError> DeleteVerifiedEmailAddressOutcome;
      typedef Aws::Utils::Outcome<DescribeActiveReceiptRuleSetResult, SESError> DescribeActiveReceiptRuleSetOutcome;
      typedef Aws::Utils::Outcome<DescribeConfigurationSetResult, SESError> DescribeConfigurationSetOutcome;
      typedef Aws::Utils::Outcome<DescribeReceiptRuleResult, SESError> DescribeReceiptRuleOutcome;
      typedef Aws::Utils::Outcome<DescribeReceiptRuleSetResult, SESError> DescribeReceiptRuleSetOutcome;
      typedef Aws::Utils::Outcome<GetAccountSendingEnabledResult, SESError> GetAccountSendingEnabledOutcome;
      typedef Aws::Utils::Outcome<GetCustomVerificationEmailTemplateResult, SESError> GetCustomVerificationEmailTemplateOutcome;
      typedef Aws::Utils::Outcome<GetIdentityDkimAttributesResult, SESError> GetIdentityDkimAttributesOutcome;
      typedef Aws::Utils::Outcome<GetIdentityMailFromDomainAttributesResult, SESError> GetIdentityMailFromDomainAttributesOutcome;
      typedef Aws::Utils::Outcome<GetIdentityNotificationAttributesResult, SESError> GetIdentityNotificationAttributesOutcome;
      typedef Aws::Utils::Outcome<GetIdentityPoliciesResult, SESError> GetIdentityPoliciesOutcome;
      typedef Aws::Utils::Outcome<GetIdentityVerificationAttributesResult, SESError> GetIdentityVerificationAttributesOutcome;
      typedef Aws::Utils::Outcome<GetSendQuotaResult, SESError> GetSendQuotaOutcome;
      typedef Aws::Utils::Outcome<GetSendStatisticsResult, SESError> GetSendStatisticsOutcome;
      typedef Aws::Utils::Outcome<GetTemplateResult, SESError> GetTemplateOutcome;
      typedef Aws::Utils::Outcome<ListConfigurationSetsResult, SESError> ListConfigurationSetsOutcome;
      typedef Aws::Utils::Outcome<ListCustomVerificationEmailTemplatesResult, SESError> ListCustomVerificationEmailTemplatesOutcome;
      typedef Aws::Utils::Outcome<ListIdentitiesResult, SESError> ListIdentitiesOutcome;
      typedef Aws::Utils::Outcome<ListIdentityPoliciesResult, SESError> ListIdentityPoliciesOutcome;
      typedef Aws::Utils::Outcome<ListReceiptFiltersResult, SESError> ListReceiptFiltersOutcome;
      typedef Aws::Utils::Outcome<ListReceiptRuleSetsResult, SESError> ListReceiptRuleSetsOutcome;
      typedef Aws::Utils::Outcome<ListTemplatesResult, SESError> ListTemplatesOutcome;
      typedef Aws::Utils::Outcome<ListVerifiedEmailAddressesResult, SESError> ListVerifiedEmailAddressesOutcome;
      typedef Aws::Utils::Outcome<PutConfigurationSetDeliveryOptionsResult, SESError> PutConfigurationSetDeliveryOptionsOutcome;
      typedef Aws::Utils::Outcome<PutIdentityPolicyResult, SESError> PutIdentityPolicyOutcome;
      typedef Aws::Utils::Outcome<ReorderReceiptRuleSetResult, SESError> ReorderReceiptRuleSetOutcome;
      typedef Aws::Utils::Outcome<SendBounceResult, SESError> SendBounceOutcome;
      typedef Aws::Utils::Outcome<SendBulkTemplatedEmailResult, SESError> SendBulkTemplatedEmailOutcome;
      typedef Aws::Utils::Outcome<SendCustomVerificationEmailResult, SESError> SendCustomVerificationEmailOutcome;
      typedef Aws::Utils::Outcome<SendEmailResult, SESError> SendEmailOutcome;
      typedef Aws::Utils::Outcome<SendRawEmailResult, SESError> SendRawEmailOutcome;
      typedef Aws::Utils::Outcome<SendTemplatedEmailResult, SESError> SendTemplatedEmailOutcome;
      typedef Aws::Utils::Outcome<SetActiveReceiptRuleSetResult, SESError> SetActiveReceiptRuleSetOutcome;
      typedef Aws::Utils::Outcome<SetIdentityDkimEnabledResult, SESError> SetIdentityDkimEnabledOutcome;
      typedef Aws::Utils::Outcome<SetIdentityFeedbackForwardingEnabledResult, SESError> SetIdentityFeedbackForwardingEnabledOutcome;
      typedef Aws::Utils::Outcome<SetIdentityHeadersInNotificationsEnabledResult, SESError> SetIdentityHeadersInNotificationsEnabledOutcome;
      typedef Aws::Utils::Outcome<SetIdentityMailFromDomainResult, SESError> SetIdentityMailFromDomainOutcome;
      typedef Aws::Utils::Outcome<SetIdentityNotificationTopicResult, SESError> SetIdentityNotificationTopicOutcome;
      typedef Aws::Utils::Outcome<SetReceiptRulePositionResult, SESError> SetReceiptRulePositionOutcome;
      typedef Aws::Utils::Outcome<TestRenderTemplateResult, SESError> TestRenderTemplateOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, SESError> UpdateAccountSendingEnabledOutcome;
      typedef Aws::Utils::Outcome<UpdateConfigurationSetEventDestinationResult, SESError> UpdateConfigurationSetEventDestinationOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, SESError> UpdateConfigurationSetReputationMetricsEnabledOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, SESError> UpdateConfigurationSetSendingEnabledOutcome;
      typedef Aws::Utils::Outcome<UpdateConfigurationSetTrackingOptionsResult, SESError> UpdateConfigurationSetTrackingOptionsOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, SESError> UpdateCustomVerificationEmailTemplateOutcome;
      typedef Aws::Utils::Outcome<UpdateReceiptRuleResult, SESError> UpdateReceiptRuleOutcome;
      typedef Aws::Utils::Outcome<UpdateTemplateResult, SESError> UpdateTemplateOutcome;
      typedef Aws::Utils::Outcome<VerifyDomainDkimResult, SESError> VerifyDomainDkimOutcome;
      typedef Aws::Utils::Outcome<VerifyDomainIdentityResult, SESError> VerifyDomainIdentityOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, SESError> VerifyEmailAddressOutcome;
      typedef Aws::Utils::Outcome<VerifyEmailIdentityResult, SESError> VerifyEmailIdentityOutcome;
      /* End of service model Outcome class definitions */

      /* Service model Outcome callable definitions */
      typedef std::future<CloneReceiptRuleSetOutcome> CloneReceiptRuleSetOutcomeCallable;
      typedef std::future<CreateConfigurationSetOutcome> CreateConfigurationSetOutcomeCallable;
      typedef std::future<CreateConfigurationSetEventDestinationOutcome> CreateConfigurationSetEventDestinationOutcomeCallable;
      typedef std::future<CreateConfigurationSetTrackingOptionsOutcome> CreateConfigurationSetTrackingOptionsOutcomeCallable;
      typedef std::future<CreateCustomVerificationEmailTemplateOutcome> CreateCustomVerificationEmailTemplateOutcomeCallable;
      typedef std::future<CreateReceiptFilterOutcome> CreateReceiptFilterOutcomeCallable;
      typedef std::future<CreateReceiptRuleOutcome> CreateReceiptRuleOutcomeCallable;
      typedef std::future<CreateReceiptRuleSetOutcome> CreateReceiptRuleSetOutcomeCallable;
      typedef std::future<CreateTemplateOutcome> CreateTemplateOutcomeCallable;
      typedef std::future<DeleteConfigurationSetOutcome> DeleteConfigurationSetOutcomeCallable;
      typedef std::future<DeleteConfigurationSetEventDestinationOutcome> DeleteConfigurationSetEventDestinationOutcomeCallable;
      typedef std::future<DeleteConfigurationSetTrackingOptionsOutcome> DeleteConfigurationSetTrackingOptionsOutcomeCallable;
      typedef std::future<DeleteCustomVerificationEmailTemplateOutcome> DeleteCustomVerificationEmailTemplateOutcomeCallable;
      typedef std::future<DeleteIdentityOutcome> DeleteIdentityOutcomeCallable;
      typedef std::future<DeleteIdentityPolicyOutcome> DeleteIdentityPolicyOutcomeCallable;
      typedef std::future<DeleteReceiptFilterOutcome> DeleteReceiptFilterOutcomeCallable;
      typedef std::future<DeleteReceiptRuleOutcome> DeleteReceiptRuleOutcomeCallable;
      typedef std::future<DeleteReceiptRuleSetOutcome> DeleteReceiptRuleSetOutcomeCallable;
      typedef std::future<DeleteTemplateOutcome> DeleteTemplateOutcomeCallable;
      typedef std::future<DeleteVerifiedEmailAddressOutcome> DeleteVerifiedEmailAddressOutcomeCallable;
      typedef std::future<DescribeActiveReceiptRuleSetOutcome> DescribeActiveReceiptRuleSetOutcomeCallable;
      typedef std::future<DescribeConfigurationSetOutcome> DescribeConfigurationSetOutcomeCallable;
      typedef std::future<DescribeReceiptRuleOutcome> DescribeReceiptRuleOutcomeCallable;
      typedef std::future<DescribeReceiptRuleSetOutcome> DescribeReceiptRuleSetOutcomeCallable;
      typedef std::future<GetAccountSendingEnabledOutcome> GetAccountSendingEnabledOutcomeCallable;
      typedef std::future<GetCustomVerificationEmailTemplateOutcome> GetCustomVerificationEmailTemplateOutcomeCallable;
      typedef std::future<GetIdentityDkimAttributesOutcome> GetIdentityDkimAttributesOutcomeCallable;
      typedef std::future<GetIdentityMailFromDomainAttributesOutcome> GetIdentityMailFromDomainAttributesOutcomeCallable;
      typedef std::future<GetIdentityNotificationAttributesOutcome> GetIdentityNotificationAttributesOutcomeCallable;
      typedef std::future<GetIdentityPoliciesOutcome> GetIdentityPoliciesOutcomeCallable;
      typedef std::future<GetIdentityVerificationAttributesOutcome> GetIdentityVerificationAttributesOutcomeCallable;
      typedef std::future<GetSendQuotaOutcome> GetSendQuotaOutcomeCallable;
      typedef std::future<GetSendStatisticsOutcome> GetSendStatisticsOutcomeCallable;
      typedef std::future<GetTemplateOutcome> GetTemplateOutcomeCallable;
      typedef std::future<ListConfigurationSetsOutcome> ListConfigurationSetsOutcomeCallable;
      typedef std::future<ListCustomVerificationEmailTemplatesOutcome> ListCustomVerificationEmailTemplatesOutcomeCallable;
      typedef std::future<ListIdentitiesOutcome> ListIdentitiesOutcomeCallable;
      typedef std::future<ListIdentityPoliciesOutcome> ListIdentityPoliciesOutcomeCallable;
      typedef std::future<ListReceiptFiltersOutcome> ListReceiptFiltersOutcomeCallable;
      typedef std::future<ListReceiptRuleSetsOutcome> ListReceiptRuleSetsOutcomeCallable;
      typedef std::future<ListTemplatesOutcome> ListTemplatesOutcomeCallable;
      typedef std::future<ListVerifiedEmailAddressesOutcome> ListVerifiedEmailAddressesOutcomeCallable;
      typedef std::future<PutConfigurationSetDeliveryOptionsOutcome> PutConfigurationSetDeliveryOptionsOutcomeCallable;
      typedef std::future<PutIdentityPolicyOutcome> PutIdentityPolicyOutcomeCallable;
      typedef std::future<ReorderReceiptRuleSetOutcome> ReorderReceiptRuleSetOutcomeCallable;
      typedef std::future<SendBounceOutcome> SendBounceOutcomeCallable;
      typedef std::future<SendBulkTemplatedEmailOutcome> SendBulkTemplatedEmailOutcomeCallable;
      typedef std::future<SendCustomVerificationEmailOutcome> SendCustomVerificationEmailOutcomeCallable;
      typedef std::future<SendEmailOutcome> SendEmailOutcomeCallable;
      typedef std::future<SendRawEmailOutcome> SendRawEmailOutcomeCallable;
      typedef std::future<SendTemplatedEmailOutcome> SendTemplatedEmailOutcomeCallable;
      typedef std::future<SetActiveReceiptRuleSetOutcome> SetActiveReceiptRuleSetOutcomeCallable;
      typedef std::future<SetIdentityDkimEnabledOutcome> SetIdentityDkimEnabledOutcomeCallable;
      typedef std::future<SetIdentityFeedbackForwardingEnabledOutcome> SetIdentityFeedbackForwardingEnabledOutcomeCallable;
      typedef std::future<SetIdentityHeadersInNotificationsEnabledOutcome> SetIdentityHeadersInNotificationsEnabledOutcomeCallable;
      typedef std::future<SetIdentityMailFromDomainOutcome> SetIdentityMailFromDomainOutcomeCallable;
      typedef std::future<SetIdentityNotificationTopicOutcome> SetIdentityNotificationTopicOutcomeCallable;
      typedef std::future<SetReceiptRulePositionOutcome> SetReceiptRulePositionOutcomeCallable;
      typedef std::future<TestRenderTemplateOutcome> TestRenderTemplateOutcomeCallable;
      typedef std::future<UpdateAccountSendingEnabledOutcome> UpdateAccountSendingEnabledOutcomeCallable;
      typedef std::future<UpdateConfigurationSetEventDestinationOutcome> UpdateConfigurationSetEventDestinationOutcomeCallable;
      typedef std::future<UpdateConfigurationSetReputationMetricsEnabledOutcome> UpdateConfigurationSetReputationMetricsEnabledOutcomeCallable;
      typedef std::future<UpdateConfigurationSetSendingEnabledOutcome> UpdateConfigurationSetSendingEnabledOutcomeCallable;
      typedef std::future<UpdateConfigurationSetTrackingOptionsOutcome> UpdateConfigurationSetTrackingOptionsOutcomeCallable;
      typedef std::future<UpdateCustomVerificationEmailTemplateOutcome> UpdateCustomVerificationEmailTemplateOutcomeCallable;
      typedef std::future<UpdateReceiptRuleOutcome> UpdateReceiptRuleOutcomeCallable;
      typedef std::future<UpdateTemplateOutcome> UpdateTemplateOutcomeCallable;
      typedef std::future<VerifyDomainDkimOutcome> VerifyDomainDkimOutcomeCallable;
      typedef std::future<VerifyDomainIdentityOutcome> VerifyDomainIdentityOutcomeCallable;
      typedef std::future<VerifyEmailAddressOutcome> VerifyEmailAddressOutcomeCallable;
      typedef std::future<VerifyEmailIdentityOutcome> VerifyEmailIdentityOutcomeCallable;
      /* End of service model Outcome callable definitions */
    } // namespace Model

    class SESClient;

    /* Service model async handlers definitions */
    typedef std::function<void(const SESClient*, const Model::CloneReceiptRuleSetRequest&, const Model::CloneReceiptRuleSetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CloneReceiptRuleSetResponseReceivedHandler;
    typedef std::function<void(const SESClient*, const Model::CreateConfigurationSetRequest&, const Model::CreateConfigurationSetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateConfigurationSetResponseReceivedHandler;
    typedef std::function<void(const SESClient*, const Model::CreateConfigurationSetEventDestinationRequest&, const Model::CreateConfigurationSetEventDestinationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateConfigurationSetEventDestinationResponseReceivedHandler;
    typedef std::function<void(const SESClient*, const Model::CreateConfigurationSetTrackingOptionsRequest&, const Model::CreateConfigurationSetTrackingOptionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateConfigurationSetTrackingOptionsResponseReceivedHandler;
    typedef std::function<void(const SESClient*, const Model::CreateCustomVerificationEmailTemplateRequest&, const Model::CreateCustomVerificationEmailTemplateOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateCustomVerificationEmailTemplateResponseReceivedHandler;
    typedef std::function<void(const SESClient*, const Model::CreateReceiptFilterRequest&, const Model::CreateReceiptFilterOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateReceiptFilterResponseReceivedHandler;
    typedef std::function<void(const SESClient*, const Model::CreateReceiptRuleRequest&, const Model::CreateReceiptRuleOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateReceiptRuleResponseReceivedHandler;
    typedef std::function<void(const SESClient*, const Model::CreateReceiptRuleSetRequest&, const Model::CreateReceiptRuleSetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateReceiptRuleSetResponseReceivedHandler;
    typedef std::function<void(const SESClient*, const Model::CreateTemplateRequest&, const Model::CreateTemplateOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateTemplateResponseReceivedHandler;
    typedef std::function<void(const SESClient*, const Model::DeleteConfigurationSetRequest&, const Model::DeleteConfigurationSetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteConfigurationSetResponseReceivedHandler;
    typedef std::function<void(const SESClient*, const Model::DeleteConfigurationSetEventDestinationRequest&, const Model::DeleteConfigurationSetEventDestinationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteConfigurationSetEventDestinationResponseReceivedHandler;
    typedef std::function<void(const SESClient*, const Model::DeleteConfigurationSetTrackingOptionsRequest&, const Model::DeleteConfigurationSetTrackingOptionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteConfigurationSetTrackingOptionsResponseReceivedHandler;
    typedef std::function<void(const SESClient*, const Model::DeleteCustomVerificationEmailTemplateRequest&, const Model::DeleteCustomVerificationEmailTemplateOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteCustomVerificationEmailTemplateResponseReceivedHandler;
    typedef std::function<void(const SESClient*, const Model::DeleteIdentityRequest&, const Model::DeleteIdentityOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteIdentityResponseReceivedHandler;
    typedef std::function<void(const SESClient*, const Model::DeleteIdentityPolicyRequest&, const Model::DeleteIdentityPolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteIdentityPolicyResponseReceivedHandler;
    typedef std::function<void(const SESClient*, const Model::DeleteReceiptFilterRequest&, const Model::DeleteReceiptFilterOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteReceiptFilterResponseReceivedHandler;
    typedef std::function<void(const SESClient*, const Model::DeleteReceiptRuleRequest&, const Model::DeleteReceiptRuleOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteReceiptRuleResponseReceivedHandler;
    typedef std::function<void(const SESClient*, const Model::DeleteReceiptRuleSetRequest&, const Model::DeleteReceiptRuleSetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteReceiptRuleSetResponseReceivedHandler;
    typedef std::function<void(const SESClient*, const Model::DeleteTemplateRequest&, const Model::DeleteTemplateOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteTemplateResponseReceivedHandler;
    typedef std::function<void(const SESClient*, const Model::DeleteVerifiedEmailAddressRequest&, const Model::DeleteVerifiedEmailAddressOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteVerifiedEmailAddressResponseReceivedHandler;
    typedef std::function<void(const SESClient*, const Model::DescribeActiveReceiptRuleSetRequest&, const Model::DescribeActiveReceiptRuleSetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeActiveReceiptRuleSetResponseReceivedHandler;
    typedef std::function<void(const SESClient*, const Model::DescribeConfigurationSetRequest&, const Model::DescribeConfigurationSetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeConfigurationSetResponseReceivedHandler;
    typedef std::function<void(const SESClient*, const Model::DescribeReceiptRuleRequest&, const Model::DescribeReceiptRuleOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeReceiptRuleResponseReceivedHandler;
    typedef std::function<void(const SESClient*, const Model::DescribeReceiptRuleSetRequest&, const Model::DescribeReceiptRuleSetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeReceiptRuleSetResponseReceivedHandler;
    typedef std::function<void(const SESClient*, const Model::GetAccountSendingEnabledRequest&, const Model::GetAccountSendingEnabledOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetAccountSendingEnabledResponseReceivedHandler;
    typedef std::function<void(const SESClient*, const Model::GetCustomVerificationEmailTemplateRequest&, const Model::GetCustomVerificationEmailTemplateOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetCustomVerificationEmailTemplateResponseReceivedHandler;
    typedef std::function<void(const SESClient*, const Model::GetIdentityDkimAttributesRequest&, const Model::GetIdentityDkimAttributesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetIdentityDkimAttributesResponseReceivedHandler;
    typedef std::function<void(const SESClient*, const Model::GetIdentityMailFromDomainAttributesRequest&, const Model::GetIdentityMailFromDomainAttributesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetIdentityMailFromDomainAttributesResponseReceivedHandler;
    typedef std::function<void(const SESClient*, const Model::GetIdentityNotificationAttributesRequest&, const Model::GetIdentityNotificationAttributesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetIdentityNotificationAttributesResponseReceivedHandler;
    typedef std::function<void(const SESClient*, const Model::GetIdentityPoliciesRequest&, const Model::GetIdentityPoliciesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetIdentityPoliciesResponseReceivedHandler;
    typedef std::function<void(const SESClient*, const Model::GetIdentityVerificationAttributesRequest&, const Model::GetIdentityVerificationAttributesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetIdentityVerificationAttributesResponseReceivedHandler;
    typedef std::function<void(const SESClient*, const Model::GetSendQuotaRequest&, const Model::GetSendQuotaOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetSendQuotaResponseReceivedHandler;
    typedef std::function<void(const SESClient*, const Model::GetSendStatisticsRequest&, const Model::GetSendStatisticsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetSendStatisticsResponseReceivedHandler;
    typedef std::function<void(const SESClient*, const Model::GetTemplateRequest&, const Model::GetTemplateOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetTemplateResponseReceivedHandler;
    typedef std::function<void(const SESClient*, const Model::ListConfigurationSetsRequest&, const Model::ListConfigurationSetsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListConfigurationSetsResponseReceivedHandler;
    typedef std::function<void(const SESClient*, const Model::ListCustomVerificationEmailTemplatesRequest&, const Model::ListCustomVerificationEmailTemplatesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListCustomVerificationEmailTemplatesResponseReceivedHandler;
    typedef std::function<void(const SESClient*, const Model::ListIdentitiesRequest&, const Model::ListIdentitiesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListIdentitiesResponseReceivedHandler;
    typedef std::function<void(const SESClient*, const Model::ListIdentityPoliciesRequest&, const Model::ListIdentityPoliciesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListIdentityPoliciesResponseReceivedHandler;
    typedef std::function<void(const SESClient*, const Model::ListReceiptFiltersRequest&, const Model::ListReceiptFiltersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListReceiptFiltersResponseReceivedHandler;
    typedef std::function<void(const SESClient*, const Model::ListReceiptRuleSetsRequest&, const Model::ListReceiptRuleSetsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListReceiptRuleSetsResponseReceivedHandler;
    typedef std::function<void(const SESClient*, const Model::ListTemplatesRequest&, const Model::ListTemplatesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTemplatesResponseReceivedHandler;
    typedef std::function<void(const SESClient*, const Model::ListVerifiedEmailAddressesRequest&, const Model::ListVerifiedEmailAddressesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListVerifiedEmailAddressesResponseReceivedHandler;
    typedef std::function<void(const SESClient*, const Model::PutConfigurationSetDeliveryOptionsRequest&, const Model::PutConfigurationSetDeliveryOptionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutConfigurationSetDeliveryOptionsResponseReceivedHandler;
    typedef std::function<void(const SESClient*, const Model::PutIdentityPolicyRequest&, const Model::PutIdentityPolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutIdentityPolicyResponseReceivedHandler;
    typedef std::function<void(const SESClient*, const Model::ReorderReceiptRuleSetRequest&, const Model::ReorderReceiptRuleSetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ReorderReceiptRuleSetResponseReceivedHandler;
    typedef std::function<void(const SESClient*, const Model::SendBounceRequest&, const Model::SendBounceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > SendBounceResponseReceivedHandler;
    typedef std::function<void(const SESClient*, const Model::SendBulkTemplatedEmailRequest&, const Model::SendBulkTemplatedEmailOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > SendBulkTemplatedEmailResponseReceivedHandler;
    typedef std::function<void(const SESClient*, const Model::SendCustomVerificationEmailRequest&, const Model::SendCustomVerificationEmailOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > SendCustomVerificationEmailResponseReceivedHandler;
    typedef std::function<void(const SESClient*, const Model::SendEmailRequest&, const Model::SendEmailOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > SendEmailResponseReceivedHandler;
    typedef std::function<void(const SESClient*, const Model::SendRawEmailRequest&, const Model::SendRawEmailOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > SendRawEmailResponseReceivedHandler;
    typedef std::function<void(const SESClient*, const Model::SendTemplatedEmailRequest&, const Model::SendTemplatedEmailOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > SendTemplatedEmailResponseReceivedHandler;
    typedef std::function<void(const SESClient*, const Model::SetActiveReceiptRuleSetRequest&, const Model::SetActiveReceiptRuleSetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > SetActiveReceiptRuleSetResponseReceivedHandler;
    typedef std::function<void(const SESClient*, const Model::SetIdentityDkimEnabledRequest&, const Model::SetIdentityDkimEnabledOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > SetIdentityDkimEnabledResponseReceivedHandler;
    typedef std::function<void(const SESClient*, const Model::SetIdentityFeedbackForwardingEnabledRequest&, const Model::SetIdentityFeedbackForwardingEnabledOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > SetIdentityFeedbackForwardingEnabledResponseReceivedHandler;
    typedef std::function<void(const SESClient*, const Model::SetIdentityHeadersInNotificationsEnabledRequest&, const Model::SetIdentityHeadersInNotificationsEnabledOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > SetIdentityHeadersInNotificationsEnabledResponseReceivedHandler;
    typedef std::function<void(const SESClient*, const Model::SetIdentityMailFromDomainRequest&, const Model::SetIdentityMailFromDomainOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > SetIdentityMailFromDomainResponseReceivedHandler;
    typedef std::function<void(const SESClient*, const Model::SetIdentityNotificationTopicRequest&, const Model::SetIdentityNotificationTopicOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > SetIdentityNotificationTopicResponseReceivedHandler;
    typedef std::function<void(const SESClient*, const Model::SetReceiptRulePositionRequest&, const Model::SetReceiptRulePositionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > SetReceiptRulePositionResponseReceivedHandler;
    typedef std::function<void(const SESClient*, const Model::TestRenderTemplateRequest&, const Model::TestRenderTemplateOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TestRenderTemplateResponseReceivedHandler;
    typedef std::function<void(const SESClient*, const Model::UpdateAccountSendingEnabledRequest&, const Model::UpdateAccountSendingEnabledOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateAccountSendingEnabledResponseReceivedHandler;
    typedef std::function<void(const SESClient*, const Model::UpdateConfigurationSetEventDestinationRequest&, const Model::UpdateConfigurationSetEventDestinationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateConfigurationSetEventDestinationResponseReceivedHandler;
    typedef std::function<void(const SESClient*, const Model::UpdateConfigurationSetReputationMetricsEnabledRequest&, const Model::UpdateConfigurationSetReputationMetricsEnabledOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateConfigurationSetReputationMetricsEnabledResponseReceivedHandler;
    typedef std::function<void(const SESClient*, const Model::UpdateConfigurationSetSendingEnabledRequest&, const Model::UpdateConfigurationSetSendingEnabledOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateConfigurationSetSendingEnabledResponseReceivedHandler;
    typedef std::function<void(const SESClient*, const Model::UpdateConfigurationSetTrackingOptionsRequest&, const Model::UpdateConfigurationSetTrackingOptionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateConfigurationSetTrackingOptionsResponseReceivedHandler;
    typedef std::function<void(const SESClient*, const Model::UpdateCustomVerificationEmailTemplateRequest&, const Model::UpdateCustomVerificationEmailTemplateOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateCustomVerificationEmailTemplateResponseReceivedHandler;
    typedef std::function<void(const SESClient*, const Model::UpdateReceiptRuleRequest&, const Model::UpdateReceiptRuleOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateReceiptRuleResponseReceivedHandler;
    typedef std::function<void(const SESClient*, const Model::UpdateTemplateRequest&, const Model::UpdateTemplateOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateTemplateResponseReceivedHandler;
    typedef std::function<void(const SESClient*, const Model::VerifyDomainDkimRequest&, const Model::VerifyDomainDkimOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > VerifyDomainDkimResponseReceivedHandler;
    typedef std::function<void(const SESClient*, const Model::VerifyDomainIdentityRequest&, const Model::VerifyDomainIdentityOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > VerifyDomainIdentityResponseReceivedHandler;
    typedef std::function<void(const SESClient*, const Model::VerifyEmailAddressRequest&, const Model::VerifyEmailAddressOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > VerifyEmailAddressResponseReceivedHandler;
    typedef std::function<void(const SESClient*, const Model::VerifyEmailIdentityRequest&, const Model::VerifyEmailIdentityOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > VerifyEmailIdentityResponseReceivedHandler;
    /* End of service model async handlers definitions */
  } // namespace SES
} // namespace Aws
