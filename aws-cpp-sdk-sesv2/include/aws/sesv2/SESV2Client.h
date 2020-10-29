/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sesv2/SESV2_EXPORTS.h>
#include <aws/sesv2/SESV2Errors.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/sesv2/model/CreateConfigurationSetResult.h>
#include <aws/sesv2/model/CreateConfigurationSetEventDestinationResult.h>
#include <aws/sesv2/model/CreateContactResult.h>
#include <aws/sesv2/model/CreateContactListResult.h>
#include <aws/sesv2/model/CreateCustomVerificationEmailTemplateResult.h>
#include <aws/sesv2/model/CreateDedicatedIpPoolResult.h>
#include <aws/sesv2/model/CreateDeliverabilityTestReportResult.h>
#include <aws/sesv2/model/CreateEmailIdentityResult.h>
#include <aws/sesv2/model/CreateEmailIdentityPolicyResult.h>
#include <aws/sesv2/model/CreateEmailTemplateResult.h>
#include <aws/sesv2/model/CreateImportJobResult.h>
#include <aws/sesv2/model/DeleteConfigurationSetResult.h>
#include <aws/sesv2/model/DeleteConfigurationSetEventDestinationResult.h>
#include <aws/sesv2/model/DeleteContactResult.h>
#include <aws/sesv2/model/DeleteContactListResult.h>
#include <aws/sesv2/model/DeleteCustomVerificationEmailTemplateResult.h>
#include <aws/sesv2/model/DeleteDedicatedIpPoolResult.h>
#include <aws/sesv2/model/DeleteEmailIdentityResult.h>
#include <aws/sesv2/model/DeleteEmailIdentityPolicyResult.h>
#include <aws/sesv2/model/DeleteEmailTemplateResult.h>
#include <aws/sesv2/model/DeleteSuppressedDestinationResult.h>
#include <aws/sesv2/model/GetAccountResult.h>
#include <aws/sesv2/model/GetBlacklistReportsResult.h>
#include <aws/sesv2/model/GetConfigurationSetResult.h>
#include <aws/sesv2/model/GetConfigurationSetEventDestinationsResult.h>
#include <aws/sesv2/model/GetContactResult.h>
#include <aws/sesv2/model/GetContactListResult.h>
#include <aws/sesv2/model/GetCustomVerificationEmailTemplateResult.h>
#include <aws/sesv2/model/GetDedicatedIpResult.h>
#include <aws/sesv2/model/GetDedicatedIpsResult.h>
#include <aws/sesv2/model/GetDeliverabilityDashboardOptionsResult.h>
#include <aws/sesv2/model/GetDeliverabilityTestReportResult.h>
#include <aws/sesv2/model/GetDomainDeliverabilityCampaignResult.h>
#include <aws/sesv2/model/GetDomainStatisticsReportResult.h>
#include <aws/sesv2/model/GetEmailIdentityResult.h>
#include <aws/sesv2/model/GetEmailIdentityPoliciesResult.h>
#include <aws/sesv2/model/GetEmailTemplateResult.h>
#include <aws/sesv2/model/GetImportJobResult.h>
#include <aws/sesv2/model/GetSuppressedDestinationResult.h>
#include <aws/sesv2/model/ListConfigurationSetsResult.h>
#include <aws/sesv2/model/ListContactListsResult.h>
#include <aws/sesv2/model/ListContactsResult.h>
#include <aws/sesv2/model/ListCustomVerificationEmailTemplatesResult.h>
#include <aws/sesv2/model/ListDedicatedIpPoolsResult.h>
#include <aws/sesv2/model/ListDeliverabilityTestReportsResult.h>
#include <aws/sesv2/model/ListDomainDeliverabilityCampaignsResult.h>
#include <aws/sesv2/model/ListEmailIdentitiesResult.h>
#include <aws/sesv2/model/ListEmailTemplatesResult.h>
#include <aws/sesv2/model/ListImportJobsResult.h>
#include <aws/sesv2/model/ListSuppressedDestinationsResult.h>
#include <aws/sesv2/model/ListTagsForResourceResult.h>
#include <aws/sesv2/model/PutAccountDedicatedIpWarmupAttributesResult.h>
#include <aws/sesv2/model/PutAccountDetailsResult.h>
#include <aws/sesv2/model/PutAccountSendingAttributesResult.h>
#include <aws/sesv2/model/PutAccountSuppressionAttributesResult.h>
#include <aws/sesv2/model/PutConfigurationSetDeliveryOptionsResult.h>
#include <aws/sesv2/model/PutConfigurationSetReputationOptionsResult.h>
#include <aws/sesv2/model/PutConfigurationSetSendingOptionsResult.h>
#include <aws/sesv2/model/PutConfigurationSetSuppressionOptionsResult.h>
#include <aws/sesv2/model/PutConfigurationSetTrackingOptionsResult.h>
#include <aws/sesv2/model/PutDedicatedIpInPoolResult.h>
#include <aws/sesv2/model/PutDedicatedIpWarmupAttributesResult.h>
#include <aws/sesv2/model/PutDeliverabilityDashboardOptionResult.h>
#include <aws/sesv2/model/PutEmailIdentityDkimAttributesResult.h>
#include <aws/sesv2/model/PutEmailIdentityDkimSigningAttributesResult.h>
#include <aws/sesv2/model/PutEmailIdentityFeedbackAttributesResult.h>
#include <aws/sesv2/model/PutEmailIdentityMailFromAttributesResult.h>
#include <aws/sesv2/model/PutSuppressedDestinationResult.h>
#include <aws/sesv2/model/SendBulkEmailResult.h>
#include <aws/sesv2/model/SendCustomVerificationEmailResult.h>
#include <aws/sesv2/model/SendEmailResult.h>
#include <aws/sesv2/model/TagResourceResult.h>
#include <aws/sesv2/model/TestRenderEmailTemplateResult.h>
#include <aws/sesv2/model/UntagResourceResult.h>
#include <aws/sesv2/model/UpdateConfigurationSetEventDestinationResult.h>
#include <aws/sesv2/model/UpdateContactResult.h>
#include <aws/sesv2/model/UpdateContactListResult.h>
#include <aws/sesv2/model/UpdateCustomVerificationEmailTemplateResult.h>
#include <aws/sesv2/model/UpdateEmailIdentityPolicyResult.h>
#include <aws/sesv2/model/UpdateEmailTemplateResult.h>
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

namespace SESV2
{

namespace Model
{
        class CreateConfigurationSetRequest;
        class CreateConfigurationSetEventDestinationRequest;
        class CreateContactRequest;
        class CreateContactListRequest;
        class CreateCustomVerificationEmailTemplateRequest;
        class CreateDedicatedIpPoolRequest;
        class CreateDeliverabilityTestReportRequest;
        class CreateEmailIdentityRequest;
        class CreateEmailIdentityPolicyRequest;
        class CreateEmailTemplateRequest;
        class CreateImportJobRequest;
        class DeleteConfigurationSetRequest;
        class DeleteConfigurationSetEventDestinationRequest;
        class DeleteContactRequest;
        class DeleteContactListRequest;
        class DeleteCustomVerificationEmailTemplateRequest;
        class DeleteDedicatedIpPoolRequest;
        class DeleteEmailIdentityRequest;
        class DeleteEmailIdentityPolicyRequest;
        class DeleteEmailTemplateRequest;
        class DeleteSuppressedDestinationRequest;
        class GetAccountRequest;
        class GetBlacklistReportsRequest;
        class GetConfigurationSetRequest;
        class GetConfigurationSetEventDestinationsRequest;
        class GetContactRequest;
        class GetContactListRequest;
        class GetCustomVerificationEmailTemplateRequest;
        class GetDedicatedIpRequest;
        class GetDedicatedIpsRequest;
        class GetDeliverabilityDashboardOptionsRequest;
        class GetDeliverabilityTestReportRequest;
        class GetDomainDeliverabilityCampaignRequest;
        class GetDomainStatisticsReportRequest;
        class GetEmailIdentityRequest;
        class GetEmailIdentityPoliciesRequest;
        class GetEmailTemplateRequest;
        class GetImportJobRequest;
        class GetSuppressedDestinationRequest;
        class ListConfigurationSetsRequest;
        class ListContactListsRequest;
        class ListContactsRequest;
        class ListCustomVerificationEmailTemplatesRequest;
        class ListDedicatedIpPoolsRequest;
        class ListDeliverabilityTestReportsRequest;
        class ListDomainDeliverabilityCampaignsRequest;
        class ListEmailIdentitiesRequest;
        class ListEmailTemplatesRequest;
        class ListImportJobsRequest;
        class ListSuppressedDestinationsRequest;
        class ListTagsForResourceRequest;
        class PutAccountDedicatedIpWarmupAttributesRequest;
        class PutAccountDetailsRequest;
        class PutAccountSendingAttributesRequest;
        class PutAccountSuppressionAttributesRequest;
        class PutConfigurationSetDeliveryOptionsRequest;
        class PutConfigurationSetReputationOptionsRequest;
        class PutConfigurationSetSendingOptionsRequest;
        class PutConfigurationSetSuppressionOptionsRequest;
        class PutConfigurationSetTrackingOptionsRequest;
        class PutDedicatedIpInPoolRequest;
        class PutDedicatedIpWarmupAttributesRequest;
        class PutDeliverabilityDashboardOptionRequest;
        class PutEmailIdentityDkimAttributesRequest;
        class PutEmailIdentityDkimSigningAttributesRequest;
        class PutEmailIdentityFeedbackAttributesRequest;
        class PutEmailIdentityMailFromAttributesRequest;
        class PutSuppressedDestinationRequest;
        class SendBulkEmailRequest;
        class SendCustomVerificationEmailRequest;
        class SendEmailRequest;
        class TagResourceRequest;
        class TestRenderEmailTemplateRequest;
        class UntagResourceRequest;
        class UpdateConfigurationSetEventDestinationRequest;
        class UpdateContactRequest;
        class UpdateContactListRequest;
        class UpdateCustomVerificationEmailTemplateRequest;
        class UpdateEmailIdentityPolicyRequest;
        class UpdateEmailTemplateRequest;

        typedef Aws::Utils::Outcome<CreateConfigurationSetResult, SESV2Error> CreateConfigurationSetOutcome;
        typedef Aws::Utils::Outcome<CreateConfigurationSetEventDestinationResult, SESV2Error> CreateConfigurationSetEventDestinationOutcome;
        typedef Aws::Utils::Outcome<CreateContactResult, SESV2Error> CreateContactOutcome;
        typedef Aws::Utils::Outcome<CreateContactListResult, SESV2Error> CreateContactListOutcome;
        typedef Aws::Utils::Outcome<CreateCustomVerificationEmailTemplateResult, SESV2Error> CreateCustomVerificationEmailTemplateOutcome;
        typedef Aws::Utils::Outcome<CreateDedicatedIpPoolResult, SESV2Error> CreateDedicatedIpPoolOutcome;
        typedef Aws::Utils::Outcome<CreateDeliverabilityTestReportResult, SESV2Error> CreateDeliverabilityTestReportOutcome;
        typedef Aws::Utils::Outcome<CreateEmailIdentityResult, SESV2Error> CreateEmailIdentityOutcome;
        typedef Aws::Utils::Outcome<CreateEmailIdentityPolicyResult, SESV2Error> CreateEmailIdentityPolicyOutcome;
        typedef Aws::Utils::Outcome<CreateEmailTemplateResult, SESV2Error> CreateEmailTemplateOutcome;
        typedef Aws::Utils::Outcome<CreateImportJobResult, SESV2Error> CreateImportJobOutcome;
        typedef Aws::Utils::Outcome<DeleteConfigurationSetResult, SESV2Error> DeleteConfigurationSetOutcome;
        typedef Aws::Utils::Outcome<DeleteConfigurationSetEventDestinationResult, SESV2Error> DeleteConfigurationSetEventDestinationOutcome;
        typedef Aws::Utils::Outcome<DeleteContactResult, SESV2Error> DeleteContactOutcome;
        typedef Aws::Utils::Outcome<DeleteContactListResult, SESV2Error> DeleteContactListOutcome;
        typedef Aws::Utils::Outcome<DeleteCustomVerificationEmailTemplateResult, SESV2Error> DeleteCustomVerificationEmailTemplateOutcome;
        typedef Aws::Utils::Outcome<DeleteDedicatedIpPoolResult, SESV2Error> DeleteDedicatedIpPoolOutcome;
        typedef Aws::Utils::Outcome<DeleteEmailIdentityResult, SESV2Error> DeleteEmailIdentityOutcome;
        typedef Aws::Utils::Outcome<DeleteEmailIdentityPolicyResult, SESV2Error> DeleteEmailIdentityPolicyOutcome;
        typedef Aws::Utils::Outcome<DeleteEmailTemplateResult, SESV2Error> DeleteEmailTemplateOutcome;
        typedef Aws::Utils::Outcome<DeleteSuppressedDestinationResult, SESV2Error> DeleteSuppressedDestinationOutcome;
        typedef Aws::Utils::Outcome<GetAccountResult, SESV2Error> GetAccountOutcome;
        typedef Aws::Utils::Outcome<GetBlacklistReportsResult, SESV2Error> GetBlacklistReportsOutcome;
        typedef Aws::Utils::Outcome<GetConfigurationSetResult, SESV2Error> GetConfigurationSetOutcome;
        typedef Aws::Utils::Outcome<GetConfigurationSetEventDestinationsResult, SESV2Error> GetConfigurationSetEventDestinationsOutcome;
        typedef Aws::Utils::Outcome<GetContactResult, SESV2Error> GetContactOutcome;
        typedef Aws::Utils::Outcome<GetContactListResult, SESV2Error> GetContactListOutcome;
        typedef Aws::Utils::Outcome<GetCustomVerificationEmailTemplateResult, SESV2Error> GetCustomVerificationEmailTemplateOutcome;
        typedef Aws::Utils::Outcome<GetDedicatedIpResult, SESV2Error> GetDedicatedIpOutcome;
        typedef Aws::Utils::Outcome<GetDedicatedIpsResult, SESV2Error> GetDedicatedIpsOutcome;
        typedef Aws::Utils::Outcome<GetDeliverabilityDashboardOptionsResult, SESV2Error> GetDeliverabilityDashboardOptionsOutcome;
        typedef Aws::Utils::Outcome<GetDeliverabilityTestReportResult, SESV2Error> GetDeliverabilityTestReportOutcome;
        typedef Aws::Utils::Outcome<GetDomainDeliverabilityCampaignResult, SESV2Error> GetDomainDeliverabilityCampaignOutcome;
        typedef Aws::Utils::Outcome<GetDomainStatisticsReportResult, SESV2Error> GetDomainStatisticsReportOutcome;
        typedef Aws::Utils::Outcome<GetEmailIdentityResult, SESV2Error> GetEmailIdentityOutcome;
        typedef Aws::Utils::Outcome<GetEmailIdentityPoliciesResult, SESV2Error> GetEmailIdentityPoliciesOutcome;
        typedef Aws::Utils::Outcome<GetEmailTemplateResult, SESV2Error> GetEmailTemplateOutcome;
        typedef Aws::Utils::Outcome<GetImportJobResult, SESV2Error> GetImportJobOutcome;
        typedef Aws::Utils::Outcome<GetSuppressedDestinationResult, SESV2Error> GetSuppressedDestinationOutcome;
        typedef Aws::Utils::Outcome<ListConfigurationSetsResult, SESV2Error> ListConfigurationSetsOutcome;
        typedef Aws::Utils::Outcome<ListContactListsResult, SESV2Error> ListContactListsOutcome;
        typedef Aws::Utils::Outcome<ListContactsResult, SESV2Error> ListContactsOutcome;
        typedef Aws::Utils::Outcome<ListCustomVerificationEmailTemplatesResult, SESV2Error> ListCustomVerificationEmailTemplatesOutcome;
        typedef Aws::Utils::Outcome<ListDedicatedIpPoolsResult, SESV2Error> ListDedicatedIpPoolsOutcome;
        typedef Aws::Utils::Outcome<ListDeliverabilityTestReportsResult, SESV2Error> ListDeliverabilityTestReportsOutcome;
        typedef Aws::Utils::Outcome<ListDomainDeliverabilityCampaignsResult, SESV2Error> ListDomainDeliverabilityCampaignsOutcome;
        typedef Aws::Utils::Outcome<ListEmailIdentitiesResult, SESV2Error> ListEmailIdentitiesOutcome;
        typedef Aws::Utils::Outcome<ListEmailTemplatesResult, SESV2Error> ListEmailTemplatesOutcome;
        typedef Aws::Utils::Outcome<ListImportJobsResult, SESV2Error> ListImportJobsOutcome;
        typedef Aws::Utils::Outcome<ListSuppressedDestinationsResult, SESV2Error> ListSuppressedDestinationsOutcome;
        typedef Aws::Utils::Outcome<ListTagsForResourceResult, SESV2Error> ListTagsForResourceOutcome;
        typedef Aws::Utils::Outcome<PutAccountDedicatedIpWarmupAttributesResult, SESV2Error> PutAccountDedicatedIpWarmupAttributesOutcome;
        typedef Aws::Utils::Outcome<PutAccountDetailsResult, SESV2Error> PutAccountDetailsOutcome;
        typedef Aws::Utils::Outcome<PutAccountSendingAttributesResult, SESV2Error> PutAccountSendingAttributesOutcome;
        typedef Aws::Utils::Outcome<PutAccountSuppressionAttributesResult, SESV2Error> PutAccountSuppressionAttributesOutcome;
        typedef Aws::Utils::Outcome<PutConfigurationSetDeliveryOptionsResult, SESV2Error> PutConfigurationSetDeliveryOptionsOutcome;
        typedef Aws::Utils::Outcome<PutConfigurationSetReputationOptionsResult, SESV2Error> PutConfigurationSetReputationOptionsOutcome;
        typedef Aws::Utils::Outcome<PutConfigurationSetSendingOptionsResult, SESV2Error> PutConfigurationSetSendingOptionsOutcome;
        typedef Aws::Utils::Outcome<PutConfigurationSetSuppressionOptionsResult, SESV2Error> PutConfigurationSetSuppressionOptionsOutcome;
        typedef Aws::Utils::Outcome<PutConfigurationSetTrackingOptionsResult, SESV2Error> PutConfigurationSetTrackingOptionsOutcome;
        typedef Aws::Utils::Outcome<PutDedicatedIpInPoolResult, SESV2Error> PutDedicatedIpInPoolOutcome;
        typedef Aws::Utils::Outcome<PutDedicatedIpWarmupAttributesResult, SESV2Error> PutDedicatedIpWarmupAttributesOutcome;
        typedef Aws::Utils::Outcome<PutDeliverabilityDashboardOptionResult, SESV2Error> PutDeliverabilityDashboardOptionOutcome;
        typedef Aws::Utils::Outcome<PutEmailIdentityDkimAttributesResult, SESV2Error> PutEmailIdentityDkimAttributesOutcome;
        typedef Aws::Utils::Outcome<PutEmailIdentityDkimSigningAttributesResult, SESV2Error> PutEmailIdentityDkimSigningAttributesOutcome;
        typedef Aws::Utils::Outcome<PutEmailIdentityFeedbackAttributesResult, SESV2Error> PutEmailIdentityFeedbackAttributesOutcome;
        typedef Aws::Utils::Outcome<PutEmailIdentityMailFromAttributesResult, SESV2Error> PutEmailIdentityMailFromAttributesOutcome;
        typedef Aws::Utils::Outcome<PutSuppressedDestinationResult, SESV2Error> PutSuppressedDestinationOutcome;
        typedef Aws::Utils::Outcome<SendBulkEmailResult, SESV2Error> SendBulkEmailOutcome;
        typedef Aws::Utils::Outcome<SendCustomVerificationEmailResult, SESV2Error> SendCustomVerificationEmailOutcome;
        typedef Aws::Utils::Outcome<SendEmailResult, SESV2Error> SendEmailOutcome;
        typedef Aws::Utils::Outcome<TagResourceResult, SESV2Error> TagResourceOutcome;
        typedef Aws::Utils::Outcome<TestRenderEmailTemplateResult, SESV2Error> TestRenderEmailTemplateOutcome;
        typedef Aws::Utils::Outcome<UntagResourceResult, SESV2Error> UntagResourceOutcome;
        typedef Aws::Utils::Outcome<UpdateConfigurationSetEventDestinationResult, SESV2Error> UpdateConfigurationSetEventDestinationOutcome;
        typedef Aws::Utils::Outcome<UpdateContactResult, SESV2Error> UpdateContactOutcome;
        typedef Aws::Utils::Outcome<UpdateContactListResult, SESV2Error> UpdateContactListOutcome;
        typedef Aws::Utils::Outcome<UpdateCustomVerificationEmailTemplateResult, SESV2Error> UpdateCustomVerificationEmailTemplateOutcome;
        typedef Aws::Utils::Outcome<UpdateEmailIdentityPolicyResult, SESV2Error> UpdateEmailIdentityPolicyOutcome;
        typedef Aws::Utils::Outcome<UpdateEmailTemplateResult, SESV2Error> UpdateEmailTemplateOutcome;

        typedef std::future<CreateConfigurationSetOutcome> CreateConfigurationSetOutcomeCallable;
        typedef std::future<CreateConfigurationSetEventDestinationOutcome> CreateConfigurationSetEventDestinationOutcomeCallable;
        typedef std::future<CreateContactOutcome> CreateContactOutcomeCallable;
        typedef std::future<CreateContactListOutcome> CreateContactListOutcomeCallable;
        typedef std::future<CreateCustomVerificationEmailTemplateOutcome> CreateCustomVerificationEmailTemplateOutcomeCallable;
        typedef std::future<CreateDedicatedIpPoolOutcome> CreateDedicatedIpPoolOutcomeCallable;
        typedef std::future<CreateDeliverabilityTestReportOutcome> CreateDeliverabilityTestReportOutcomeCallable;
        typedef std::future<CreateEmailIdentityOutcome> CreateEmailIdentityOutcomeCallable;
        typedef std::future<CreateEmailIdentityPolicyOutcome> CreateEmailIdentityPolicyOutcomeCallable;
        typedef std::future<CreateEmailTemplateOutcome> CreateEmailTemplateOutcomeCallable;
        typedef std::future<CreateImportJobOutcome> CreateImportJobOutcomeCallable;
        typedef std::future<DeleteConfigurationSetOutcome> DeleteConfigurationSetOutcomeCallable;
        typedef std::future<DeleteConfigurationSetEventDestinationOutcome> DeleteConfigurationSetEventDestinationOutcomeCallable;
        typedef std::future<DeleteContactOutcome> DeleteContactOutcomeCallable;
        typedef std::future<DeleteContactListOutcome> DeleteContactListOutcomeCallable;
        typedef std::future<DeleteCustomVerificationEmailTemplateOutcome> DeleteCustomVerificationEmailTemplateOutcomeCallable;
        typedef std::future<DeleteDedicatedIpPoolOutcome> DeleteDedicatedIpPoolOutcomeCallable;
        typedef std::future<DeleteEmailIdentityOutcome> DeleteEmailIdentityOutcomeCallable;
        typedef std::future<DeleteEmailIdentityPolicyOutcome> DeleteEmailIdentityPolicyOutcomeCallable;
        typedef std::future<DeleteEmailTemplateOutcome> DeleteEmailTemplateOutcomeCallable;
        typedef std::future<DeleteSuppressedDestinationOutcome> DeleteSuppressedDestinationOutcomeCallable;
        typedef std::future<GetAccountOutcome> GetAccountOutcomeCallable;
        typedef std::future<GetBlacklistReportsOutcome> GetBlacklistReportsOutcomeCallable;
        typedef std::future<GetConfigurationSetOutcome> GetConfigurationSetOutcomeCallable;
        typedef std::future<GetConfigurationSetEventDestinationsOutcome> GetConfigurationSetEventDestinationsOutcomeCallable;
        typedef std::future<GetContactOutcome> GetContactOutcomeCallable;
        typedef std::future<GetContactListOutcome> GetContactListOutcomeCallable;
        typedef std::future<GetCustomVerificationEmailTemplateOutcome> GetCustomVerificationEmailTemplateOutcomeCallable;
        typedef std::future<GetDedicatedIpOutcome> GetDedicatedIpOutcomeCallable;
        typedef std::future<GetDedicatedIpsOutcome> GetDedicatedIpsOutcomeCallable;
        typedef std::future<GetDeliverabilityDashboardOptionsOutcome> GetDeliverabilityDashboardOptionsOutcomeCallable;
        typedef std::future<GetDeliverabilityTestReportOutcome> GetDeliverabilityTestReportOutcomeCallable;
        typedef std::future<GetDomainDeliverabilityCampaignOutcome> GetDomainDeliverabilityCampaignOutcomeCallable;
        typedef std::future<GetDomainStatisticsReportOutcome> GetDomainStatisticsReportOutcomeCallable;
        typedef std::future<GetEmailIdentityOutcome> GetEmailIdentityOutcomeCallable;
        typedef std::future<GetEmailIdentityPoliciesOutcome> GetEmailIdentityPoliciesOutcomeCallable;
        typedef std::future<GetEmailTemplateOutcome> GetEmailTemplateOutcomeCallable;
        typedef std::future<GetImportJobOutcome> GetImportJobOutcomeCallable;
        typedef std::future<GetSuppressedDestinationOutcome> GetSuppressedDestinationOutcomeCallable;
        typedef std::future<ListConfigurationSetsOutcome> ListConfigurationSetsOutcomeCallable;
        typedef std::future<ListContactListsOutcome> ListContactListsOutcomeCallable;
        typedef std::future<ListContactsOutcome> ListContactsOutcomeCallable;
        typedef std::future<ListCustomVerificationEmailTemplatesOutcome> ListCustomVerificationEmailTemplatesOutcomeCallable;
        typedef std::future<ListDedicatedIpPoolsOutcome> ListDedicatedIpPoolsOutcomeCallable;
        typedef std::future<ListDeliverabilityTestReportsOutcome> ListDeliverabilityTestReportsOutcomeCallable;
        typedef std::future<ListDomainDeliverabilityCampaignsOutcome> ListDomainDeliverabilityCampaignsOutcomeCallable;
        typedef std::future<ListEmailIdentitiesOutcome> ListEmailIdentitiesOutcomeCallable;
        typedef std::future<ListEmailTemplatesOutcome> ListEmailTemplatesOutcomeCallable;
        typedef std::future<ListImportJobsOutcome> ListImportJobsOutcomeCallable;
        typedef std::future<ListSuppressedDestinationsOutcome> ListSuppressedDestinationsOutcomeCallable;
        typedef std::future<ListTagsForResourceOutcome> ListTagsForResourceOutcomeCallable;
        typedef std::future<PutAccountDedicatedIpWarmupAttributesOutcome> PutAccountDedicatedIpWarmupAttributesOutcomeCallable;
        typedef std::future<PutAccountDetailsOutcome> PutAccountDetailsOutcomeCallable;
        typedef std::future<PutAccountSendingAttributesOutcome> PutAccountSendingAttributesOutcomeCallable;
        typedef std::future<PutAccountSuppressionAttributesOutcome> PutAccountSuppressionAttributesOutcomeCallable;
        typedef std::future<PutConfigurationSetDeliveryOptionsOutcome> PutConfigurationSetDeliveryOptionsOutcomeCallable;
        typedef std::future<PutConfigurationSetReputationOptionsOutcome> PutConfigurationSetReputationOptionsOutcomeCallable;
        typedef std::future<PutConfigurationSetSendingOptionsOutcome> PutConfigurationSetSendingOptionsOutcomeCallable;
        typedef std::future<PutConfigurationSetSuppressionOptionsOutcome> PutConfigurationSetSuppressionOptionsOutcomeCallable;
        typedef std::future<PutConfigurationSetTrackingOptionsOutcome> PutConfigurationSetTrackingOptionsOutcomeCallable;
        typedef std::future<PutDedicatedIpInPoolOutcome> PutDedicatedIpInPoolOutcomeCallable;
        typedef std::future<PutDedicatedIpWarmupAttributesOutcome> PutDedicatedIpWarmupAttributesOutcomeCallable;
        typedef std::future<PutDeliverabilityDashboardOptionOutcome> PutDeliverabilityDashboardOptionOutcomeCallable;
        typedef std::future<PutEmailIdentityDkimAttributesOutcome> PutEmailIdentityDkimAttributesOutcomeCallable;
        typedef std::future<PutEmailIdentityDkimSigningAttributesOutcome> PutEmailIdentityDkimSigningAttributesOutcomeCallable;
        typedef std::future<PutEmailIdentityFeedbackAttributesOutcome> PutEmailIdentityFeedbackAttributesOutcomeCallable;
        typedef std::future<PutEmailIdentityMailFromAttributesOutcome> PutEmailIdentityMailFromAttributesOutcomeCallable;
        typedef std::future<PutSuppressedDestinationOutcome> PutSuppressedDestinationOutcomeCallable;
        typedef std::future<SendBulkEmailOutcome> SendBulkEmailOutcomeCallable;
        typedef std::future<SendCustomVerificationEmailOutcome> SendCustomVerificationEmailOutcomeCallable;
        typedef std::future<SendEmailOutcome> SendEmailOutcomeCallable;
        typedef std::future<TagResourceOutcome> TagResourceOutcomeCallable;
        typedef std::future<TestRenderEmailTemplateOutcome> TestRenderEmailTemplateOutcomeCallable;
        typedef std::future<UntagResourceOutcome> UntagResourceOutcomeCallable;
        typedef std::future<UpdateConfigurationSetEventDestinationOutcome> UpdateConfigurationSetEventDestinationOutcomeCallable;
        typedef std::future<UpdateContactOutcome> UpdateContactOutcomeCallable;
        typedef std::future<UpdateContactListOutcome> UpdateContactListOutcomeCallable;
        typedef std::future<UpdateCustomVerificationEmailTemplateOutcome> UpdateCustomVerificationEmailTemplateOutcomeCallable;
        typedef std::future<UpdateEmailIdentityPolicyOutcome> UpdateEmailIdentityPolicyOutcomeCallable;
        typedef std::future<UpdateEmailTemplateOutcome> UpdateEmailTemplateOutcomeCallable;
} // namespace Model

  class SESV2Client;

    typedef std::function<void(const SESV2Client*, const Model::CreateConfigurationSetRequest&, const Model::CreateConfigurationSetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateConfigurationSetResponseReceivedHandler;
    typedef std::function<void(const SESV2Client*, const Model::CreateConfigurationSetEventDestinationRequest&, const Model::CreateConfigurationSetEventDestinationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateConfigurationSetEventDestinationResponseReceivedHandler;
    typedef std::function<void(const SESV2Client*, const Model::CreateContactRequest&, const Model::CreateContactOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateContactResponseReceivedHandler;
    typedef std::function<void(const SESV2Client*, const Model::CreateContactListRequest&, const Model::CreateContactListOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateContactListResponseReceivedHandler;
    typedef std::function<void(const SESV2Client*, const Model::CreateCustomVerificationEmailTemplateRequest&, const Model::CreateCustomVerificationEmailTemplateOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateCustomVerificationEmailTemplateResponseReceivedHandler;
    typedef std::function<void(const SESV2Client*, const Model::CreateDedicatedIpPoolRequest&, const Model::CreateDedicatedIpPoolOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateDedicatedIpPoolResponseReceivedHandler;
    typedef std::function<void(const SESV2Client*, const Model::CreateDeliverabilityTestReportRequest&, const Model::CreateDeliverabilityTestReportOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateDeliverabilityTestReportResponseReceivedHandler;
    typedef std::function<void(const SESV2Client*, const Model::CreateEmailIdentityRequest&, const Model::CreateEmailIdentityOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateEmailIdentityResponseReceivedHandler;
    typedef std::function<void(const SESV2Client*, const Model::CreateEmailIdentityPolicyRequest&, const Model::CreateEmailIdentityPolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateEmailIdentityPolicyResponseReceivedHandler;
    typedef std::function<void(const SESV2Client*, const Model::CreateEmailTemplateRequest&, const Model::CreateEmailTemplateOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateEmailTemplateResponseReceivedHandler;
    typedef std::function<void(const SESV2Client*, const Model::CreateImportJobRequest&, const Model::CreateImportJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateImportJobResponseReceivedHandler;
    typedef std::function<void(const SESV2Client*, const Model::DeleteConfigurationSetRequest&, const Model::DeleteConfigurationSetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteConfigurationSetResponseReceivedHandler;
    typedef std::function<void(const SESV2Client*, const Model::DeleteConfigurationSetEventDestinationRequest&, const Model::DeleteConfigurationSetEventDestinationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteConfigurationSetEventDestinationResponseReceivedHandler;
    typedef std::function<void(const SESV2Client*, const Model::DeleteContactRequest&, const Model::DeleteContactOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteContactResponseReceivedHandler;
    typedef std::function<void(const SESV2Client*, const Model::DeleteContactListRequest&, const Model::DeleteContactListOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteContactListResponseReceivedHandler;
    typedef std::function<void(const SESV2Client*, const Model::DeleteCustomVerificationEmailTemplateRequest&, const Model::DeleteCustomVerificationEmailTemplateOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteCustomVerificationEmailTemplateResponseReceivedHandler;
    typedef std::function<void(const SESV2Client*, const Model::DeleteDedicatedIpPoolRequest&, const Model::DeleteDedicatedIpPoolOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteDedicatedIpPoolResponseReceivedHandler;
    typedef std::function<void(const SESV2Client*, const Model::DeleteEmailIdentityRequest&, const Model::DeleteEmailIdentityOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteEmailIdentityResponseReceivedHandler;
    typedef std::function<void(const SESV2Client*, const Model::DeleteEmailIdentityPolicyRequest&, const Model::DeleteEmailIdentityPolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteEmailIdentityPolicyResponseReceivedHandler;
    typedef std::function<void(const SESV2Client*, const Model::DeleteEmailTemplateRequest&, const Model::DeleteEmailTemplateOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteEmailTemplateResponseReceivedHandler;
    typedef std::function<void(const SESV2Client*, const Model::DeleteSuppressedDestinationRequest&, const Model::DeleteSuppressedDestinationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteSuppressedDestinationResponseReceivedHandler;
    typedef std::function<void(const SESV2Client*, const Model::GetAccountRequest&, const Model::GetAccountOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetAccountResponseReceivedHandler;
    typedef std::function<void(const SESV2Client*, const Model::GetBlacklistReportsRequest&, const Model::GetBlacklistReportsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetBlacklistReportsResponseReceivedHandler;
    typedef std::function<void(const SESV2Client*, const Model::GetConfigurationSetRequest&, const Model::GetConfigurationSetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetConfigurationSetResponseReceivedHandler;
    typedef std::function<void(const SESV2Client*, const Model::GetConfigurationSetEventDestinationsRequest&, const Model::GetConfigurationSetEventDestinationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetConfigurationSetEventDestinationsResponseReceivedHandler;
    typedef std::function<void(const SESV2Client*, const Model::GetContactRequest&, const Model::GetContactOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetContactResponseReceivedHandler;
    typedef std::function<void(const SESV2Client*, const Model::GetContactListRequest&, const Model::GetContactListOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetContactListResponseReceivedHandler;
    typedef std::function<void(const SESV2Client*, const Model::GetCustomVerificationEmailTemplateRequest&, const Model::GetCustomVerificationEmailTemplateOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetCustomVerificationEmailTemplateResponseReceivedHandler;
    typedef std::function<void(const SESV2Client*, const Model::GetDedicatedIpRequest&, const Model::GetDedicatedIpOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetDedicatedIpResponseReceivedHandler;
    typedef std::function<void(const SESV2Client*, const Model::GetDedicatedIpsRequest&, const Model::GetDedicatedIpsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetDedicatedIpsResponseReceivedHandler;
    typedef std::function<void(const SESV2Client*, const Model::GetDeliverabilityDashboardOptionsRequest&, const Model::GetDeliverabilityDashboardOptionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetDeliverabilityDashboardOptionsResponseReceivedHandler;
    typedef std::function<void(const SESV2Client*, const Model::GetDeliverabilityTestReportRequest&, const Model::GetDeliverabilityTestReportOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetDeliverabilityTestReportResponseReceivedHandler;
    typedef std::function<void(const SESV2Client*, const Model::GetDomainDeliverabilityCampaignRequest&, const Model::GetDomainDeliverabilityCampaignOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetDomainDeliverabilityCampaignResponseReceivedHandler;
    typedef std::function<void(const SESV2Client*, const Model::GetDomainStatisticsReportRequest&, const Model::GetDomainStatisticsReportOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetDomainStatisticsReportResponseReceivedHandler;
    typedef std::function<void(const SESV2Client*, const Model::GetEmailIdentityRequest&, const Model::GetEmailIdentityOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetEmailIdentityResponseReceivedHandler;
    typedef std::function<void(const SESV2Client*, const Model::GetEmailIdentityPoliciesRequest&, const Model::GetEmailIdentityPoliciesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetEmailIdentityPoliciesResponseReceivedHandler;
    typedef std::function<void(const SESV2Client*, const Model::GetEmailTemplateRequest&, const Model::GetEmailTemplateOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetEmailTemplateResponseReceivedHandler;
    typedef std::function<void(const SESV2Client*, const Model::GetImportJobRequest&, const Model::GetImportJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetImportJobResponseReceivedHandler;
    typedef std::function<void(const SESV2Client*, const Model::GetSuppressedDestinationRequest&, const Model::GetSuppressedDestinationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetSuppressedDestinationResponseReceivedHandler;
    typedef std::function<void(const SESV2Client*, const Model::ListConfigurationSetsRequest&, const Model::ListConfigurationSetsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListConfigurationSetsResponseReceivedHandler;
    typedef std::function<void(const SESV2Client*, const Model::ListContactListsRequest&, const Model::ListContactListsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListContactListsResponseReceivedHandler;
    typedef std::function<void(const SESV2Client*, const Model::ListContactsRequest&, const Model::ListContactsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListContactsResponseReceivedHandler;
    typedef std::function<void(const SESV2Client*, const Model::ListCustomVerificationEmailTemplatesRequest&, const Model::ListCustomVerificationEmailTemplatesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListCustomVerificationEmailTemplatesResponseReceivedHandler;
    typedef std::function<void(const SESV2Client*, const Model::ListDedicatedIpPoolsRequest&, const Model::ListDedicatedIpPoolsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListDedicatedIpPoolsResponseReceivedHandler;
    typedef std::function<void(const SESV2Client*, const Model::ListDeliverabilityTestReportsRequest&, const Model::ListDeliverabilityTestReportsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListDeliverabilityTestReportsResponseReceivedHandler;
    typedef std::function<void(const SESV2Client*, const Model::ListDomainDeliverabilityCampaignsRequest&, const Model::ListDomainDeliverabilityCampaignsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListDomainDeliverabilityCampaignsResponseReceivedHandler;
    typedef std::function<void(const SESV2Client*, const Model::ListEmailIdentitiesRequest&, const Model::ListEmailIdentitiesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListEmailIdentitiesResponseReceivedHandler;
    typedef std::function<void(const SESV2Client*, const Model::ListEmailTemplatesRequest&, const Model::ListEmailTemplatesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListEmailTemplatesResponseReceivedHandler;
    typedef std::function<void(const SESV2Client*, const Model::ListImportJobsRequest&, const Model::ListImportJobsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListImportJobsResponseReceivedHandler;
    typedef std::function<void(const SESV2Client*, const Model::ListSuppressedDestinationsRequest&, const Model::ListSuppressedDestinationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListSuppressedDestinationsResponseReceivedHandler;
    typedef std::function<void(const SESV2Client*, const Model::ListTagsForResourceRequest&, const Model::ListTagsForResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsForResourceResponseReceivedHandler;
    typedef std::function<void(const SESV2Client*, const Model::PutAccountDedicatedIpWarmupAttributesRequest&, const Model::PutAccountDedicatedIpWarmupAttributesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutAccountDedicatedIpWarmupAttributesResponseReceivedHandler;
    typedef std::function<void(const SESV2Client*, const Model::PutAccountDetailsRequest&, const Model::PutAccountDetailsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutAccountDetailsResponseReceivedHandler;
    typedef std::function<void(const SESV2Client*, const Model::PutAccountSendingAttributesRequest&, const Model::PutAccountSendingAttributesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutAccountSendingAttributesResponseReceivedHandler;
    typedef std::function<void(const SESV2Client*, const Model::PutAccountSuppressionAttributesRequest&, const Model::PutAccountSuppressionAttributesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutAccountSuppressionAttributesResponseReceivedHandler;
    typedef std::function<void(const SESV2Client*, const Model::PutConfigurationSetDeliveryOptionsRequest&, const Model::PutConfigurationSetDeliveryOptionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutConfigurationSetDeliveryOptionsResponseReceivedHandler;
    typedef std::function<void(const SESV2Client*, const Model::PutConfigurationSetReputationOptionsRequest&, const Model::PutConfigurationSetReputationOptionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutConfigurationSetReputationOptionsResponseReceivedHandler;
    typedef std::function<void(const SESV2Client*, const Model::PutConfigurationSetSendingOptionsRequest&, const Model::PutConfigurationSetSendingOptionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutConfigurationSetSendingOptionsResponseReceivedHandler;
    typedef std::function<void(const SESV2Client*, const Model::PutConfigurationSetSuppressionOptionsRequest&, const Model::PutConfigurationSetSuppressionOptionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutConfigurationSetSuppressionOptionsResponseReceivedHandler;
    typedef std::function<void(const SESV2Client*, const Model::PutConfigurationSetTrackingOptionsRequest&, const Model::PutConfigurationSetTrackingOptionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutConfigurationSetTrackingOptionsResponseReceivedHandler;
    typedef std::function<void(const SESV2Client*, const Model::PutDedicatedIpInPoolRequest&, const Model::PutDedicatedIpInPoolOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutDedicatedIpInPoolResponseReceivedHandler;
    typedef std::function<void(const SESV2Client*, const Model::PutDedicatedIpWarmupAttributesRequest&, const Model::PutDedicatedIpWarmupAttributesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutDedicatedIpWarmupAttributesResponseReceivedHandler;
    typedef std::function<void(const SESV2Client*, const Model::PutDeliverabilityDashboardOptionRequest&, const Model::PutDeliverabilityDashboardOptionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutDeliverabilityDashboardOptionResponseReceivedHandler;
    typedef std::function<void(const SESV2Client*, const Model::PutEmailIdentityDkimAttributesRequest&, const Model::PutEmailIdentityDkimAttributesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutEmailIdentityDkimAttributesResponseReceivedHandler;
    typedef std::function<void(const SESV2Client*, const Model::PutEmailIdentityDkimSigningAttributesRequest&, const Model::PutEmailIdentityDkimSigningAttributesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutEmailIdentityDkimSigningAttributesResponseReceivedHandler;
    typedef std::function<void(const SESV2Client*, const Model::PutEmailIdentityFeedbackAttributesRequest&, const Model::PutEmailIdentityFeedbackAttributesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutEmailIdentityFeedbackAttributesResponseReceivedHandler;
    typedef std::function<void(const SESV2Client*, const Model::PutEmailIdentityMailFromAttributesRequest&, const Model::PutEmailIdentityMailFromAttributesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutEmailIdentityMailFromAttributesResponseReceivedHandler;
    typedef std::function<void(const SESV2Client*, const Model::PutSuppressedDestinationRequest&, const Model::PutSuppressedDestinationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutSuppressedDestinationResponseReceivedHandler;
    typedef std::function<void(const SESV2Client*, const Model::SendBulkEmailRequest&, const Model::SendBulkEmailOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > SendBulkEmailResponseReceivedHandler;
    typedef std::function<void(const SESV2Client*, const Model::SendCustomVerificationEmailRequest&, const Model::SendCustomVerificationEmailOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > SendCustomVerificationEmailResponseReceivedHandler;
    typedef std::function<void(const SESV2Client*, const Model::SendEmailRequest&, const Model::SendEmailOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > SendEmailResponseReceivedHandler;
    typedef std::function<void(const SESV2Client*, const Model::TagResourceRequest&, const Model::TagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TagResourceResponseReceivedHandler;
    typedef std::function<void(const SESV2Client*, const Model::TestRenderEmailTemplateRequest&, const Model::TestRenderEmailTemplateOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TestRenderEmailTemplateResponseReceivedHandler;
    typedef std::function<void(const SESV2Client*, const Model::UntagResourceRequest&, const Model::UntagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UntagResourceResponseReceivedHandler;
    typedef std::function<void(const SESV2Client*, const Model::UpdateConfigurationSetEventDestinationRequest&, const Model::UpdateConfigurationSetEventDestinationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateConfigurationSetEventDestinationResponseReceivedHandler;
    typedef std::function<void(const SESV2Client*, const Model::UpdateContactRequest&, const Model::UpdateContactOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateContactResponseReceivedHandler;
    typedef std::function<void(const SESV2Client*, const Model::UpdateContactListRequest&, const Model::UpdateContactListOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateContactListResponseReceivedHandler;
    typedef std::function<void(const SESV2Client*, const Model::UpdateCustomVerificationEmailTemplateRequest&, const Model::UpdateCustomVerificationEmailTemplateOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateCustomVerificationEmailTemplateResponseReceivedHandler;
    typedef std::function<void(const SESV2Client*, const Model::UpdateEmailIdentityPolicyRequest&, const Model::UpdateEmailIdentityPolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateEmailIdentityPolicyResponseReceivedHandler;
    typedef std::function<void(const SESV2Client*, const Model::UpdateEmailTemplateRequest&, const Model::UpdateEmailTemplateOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateEmailTemplateResponseReceivedHandler;

  /**
   * <fullname>Amazon SES API v2</fullname> <p>Welcome to the Amazon SES API v2
   * Reference. This guide provides information about the Amazon SES API v2,
   * including supported operations, data types, parameters, and schemas.</p> <p> <a
   * href="https://aws.amazon.com/pinpoint">Amazon SES</a> is an AWS service that you
   * can use to send email messages to your customers.</p> <p>If you're new to Amazon
   * SES API v2, you might find it helpful to also review the <a
   * href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/">Amazon Simple
   * Email Service Developer Guide</a>. The <i>Amazon SES Developer Guide</i>
   * provides information and code samples that demonstrate how to use Amazon SES API
   * v2 features programmatically.</p> <p>The Amazon SES API v2 is available in
   * several AWS Regions and it provides an endpoint for each of these Regions. For a
   * list of all the Regions and endpoints where the API is currently available, see
   * <a
   * href="https://docs.aws.amazon.com/general/latest/gr/rande.html#ses_region">AWS
   * Service Endpoints</a> in the <i>Amazon Web Services General Reference</i>. To
   * learn more about AWS Regions, see <a
   * href="https://docs.aws.amazon.com/general/latest/gr/rande-manage.html">Managing
   * AWS Regions</a> in the <i>Amazon Web Services General Reference</i>.</p> <p>In
   * each Region, AWS maintains multiple Availability Zones. These Availability Zones
   * are physically isolated from each other, but are united by private, low-latency,
   * high-throughput, and highly redundant network connections. These Availability
   * Zones enable us to provide very high levels of availability and redundancy,
   * while also minimizing latency. To learn more about the number of Availability
   * Zones that are available in each Region, see <a
   * href="http://aws.amazon.com/about-aws/global-infrastructure/">AWS Global
   * Infrastructure</a>.</p>
   */
  class AWS_SESV2_API SESV2Client : public Aws::Client::AWSJsonClient
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        SESV2Client(const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        SESV2Client(const Aws::Auth::AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        SESV2Client(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
            const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

        virtual ~SESV2Client();


        /**
         * <p>Create a configuration set. <i>Configuration sets</i> are groups of rules
         * that you can apply to the emails that you send. You apply a configuration set to
         * an email by specifying the name of the configuration set when you call the
         * Amazon SES API v2. When you apply a configuration set to an email, all of the
         * rules in that configuration set are applied to the email. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/CreateConfigurationSet">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateConfigurationSetOutcome CreateConfigurationSet(const Model::CreateConfigurationSetRequest& request) const;

        /**
         * <p>Create a configuration set. <i>Configuration sets</i> are groups of rules
         * that you can apply to the emails that you send. You apply a configuration set to
         * an email by specifying the name of the configuration set when you call the
         * Amazon SES API v2. When you apply a configuration set to an email, all of the
         * rules in that configuration set are applied to the email. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/CreateConfigurationSet">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateConfigurationSetOutcomeCallable CreateConfigurationSetCallable(const Model::CreateConfigurationSetRequest& request) const;

        /**
         * <p>Create a configuration set. <i>Configuration sets</i> are groups of rules
         * that you can apply to the emails that you send. You apply a configuration set to
         * an email by specifying the name of the configuration set when you call the
         * Amazon SES API v2. When you apply a configuration set to an email, all of the
         * rules in that configuration set are applied to the email. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/CreateConfigurationSet">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateConfigurationSetAsync(const Model::CreateConfigurationSetRequest& request, const CreateConfigurationSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Create an event destination. <i>Events</i> include message sends, deliveries,
         * opens, clicks, bounces, and complaints. <i>Event destinations</i> are places
         * that you can send information about these events to. For example, you can send
         * event data to Amazon SNS to receive notifications when you receive bounces or
         * complaints, or you can use Amazon Kinesis Data Firehose to stream data to Amazon
         * S3 for long-term storage.</p> <p>A single configuration set can include more
         * than one event destination.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/CreateConfigurationSetEventDestination">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateConfigurationSetEventDestinationOutcome CreateConfigurationSetEventDestination(const Model::CreateConfigurationSetEventDestinationRequest& request) const;

        /**
         * <p>Create an event destination. <i>Events</i> include message sends, deliveries,
         * opens, clicks, bounces, and complaints. <i>Event destinations</i> are places
         * that you can send information about these events to. For example, you can send
         * event data to Amazon SNS to receive notifications when you receive bounces or
         * complaints, or you can use Amazon Kinesis Data Firehose to stream data to Amazon
         * S3 for long-term storage.</p> <p>A single configuration set can include more
         * than one event destination.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/CreateConfigurationSetEventDestination">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateConfigurationSetEventDestinationOutcomeCallable CreateConfigurationSetEventDestinationCallable(const Model::CreateConfigurationSetEventDestinationRequest& request) const;

        /**
         * <p>Create an event destination. <i>Events</i> include message sends, deliveries,
         * opens, clicks, bounces, and complaints. <i>Event destinations</i> are places
         * that you can send information about these events to. For example, you can send
         * event data to Amazon SNS to receive notifications when you receive bounces or
         * complaints, or you can use Amazon Kinesis Data Firehose to stream data to Amazon
         * S3 for long-term storage.</p> <p>A single configuration set can include more
         * than one event destination.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/CreateConfigurationSetEventDestination">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateConfigurationSetEventDestinationAsync(const Model::CreateConfigurationSetEventDestinationRequest& request, const CreateConfigurationSetEventDestinationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a contact, which is an end-user who is receiving the email, and adds
         * them to a contact list.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/CreateContact">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateContactOutcome CreateContact(const Model::CreateContactRequest& request) const;

        /**
         * <p>Creates a contact, which is an end-user who is receiving the email, and adds
         * them to a contact list.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/CreateContact">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateContactOutcomeCallable CreateContactCallable(const Model::CreateContactRequest& request) const;

        /**
         * <p>Creates a contact, which is an end-user who is receiving the email, and adds
         * them to a contact list.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/CreateContact">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateContactAsync(const Model::CreateContactRequest& request, const CreateContactResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a contact list.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/CreateContactList">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateContactListOutcome CreateContactList(const Model::CreateContactListRequest& request) const;

        /**
         * <p>Creates a contact list.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/CreateContactList">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateContactListOutcomeCallable CreateContactListCallable(const Model::CreateContactListRequest& request) const;

        /**
         * <p>Creates a contact list.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/CreateContactList">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateContactListAsync(const Model::CreateContactListRequest& request, const CreateContactListResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a new custom verification email template.</p> <p>For more information
         * about custom verification email templates, see <a
         * href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/send-email-verify-address-custom.html">Using
         * Custom Verification Email Templates</a> in the <i>Amazon SES Developer
         * Guide</i>.</p> <p>You can execute this operation no more than once per
         * second.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/CreateCustomVerificationEmailTemplate">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateCustomVerificationEmailTemplateOutcome CreateCustomVerificationEmailTemplate(const Model::CreateCustomVerificationEmailTemplateRequest& request) const;

        /**
         * <p>Creates a new custom verification email template.</p> <p>For more information
         * about custom verification email templates, see <a
         * href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/send-email-verify-address-custom.html">Using
         * Custom Verification Email Templates</a> in the <i>Amazon SES Developer
         * Guide</i>.</p> <p>You can execute this operation no more than once per
         * second.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/CreateCustomVerificationEmailTemplate">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateCustomVerificationEmailTemplateOutcomeCallable CreateCustomVerificationEmailTemplateCallable(const Model::CreateCustomVerificationEmailTemplateRequest& request) const;

        /**
         * <p>Creates a new custom verification email template.</p> <p>For more information
         * about custom verification email templates, see <a
         * href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/send-email-verify-address-custom.html">Using
         * Custom Verification Email Templates</a> in the <i>Amazon SES Developer
         * Guide</i>.</p> <p>You can execute this operation no more than once per
         * second.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/CreateCustomVerificationEmailTemplate">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateCustomVerificationEmailTemplateAsync(const Model::CreateCustomVerificationEmailTemplateRequest& request, const CreateCustomVerificationEmailTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Create a new pool of dedicated IP addresses. A pool can include one or more
         * dedicated IP addresses that are associated with your AWS account. You can
         * associate a pool with a configuration set. When you send an email that uses that
         * configuration set, the message is sent from one of the addresses in the
         * associated pool.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/CreateDedicatedIpPool">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateDedicatedIpPoolOutcome CreateDedicatedIpPool(const Model::CreateDedicatedIpPoolRequest& request) const;

        /**
         * <p>Create a new pool of dedicated IP addresses. A pool can include one or more
         * dedicated IP addresses that are associated with your AWS account. You can
         * associate a pool with a configuration set. When you send an email that uses that
         * configuration set, the message is sent from one of the addresses in the
         * associated pool.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/CreateDedicatedIpPool">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateDedicatedIpPoolOutcomeCallable CreateDedicatedIpPoolCallable(const Model::CreateDedicatedIpPoolRequest& request) const;

        /**
         * <p>Create a new pool of dedicated IP addresses. A pool can include one or more
         * dedicated IP addresses that are associated with your AWS account. You can
         * associate a pool with a configuration set. When you send an email that uses that
         * configuration set, the message is sent from one of the addresses in the
         * associated pool.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/CreateDedicatedIpPool">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateDedicatedIpPoolAsync(const Model::CreateDedicatedIpPoolRequest& request, const CreateDedicatedIpPoolResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Create a new predictive inbox placement test. Predictive inbox placement
         * tests can help you predict how your messages will be handled by various email
         * providers around the world. When you perform a predictive inbox placement test,
         * you provide a sample message that contains the content that you plan to send to
         * your customers. Amazon SES then sends that message to special email addresses
         * spread across several major email providers. After about 24 hours, the test is
         * complete, and you can use the <code>GetDeliverabilityTestReport</code> operation
         * to view the results of the test.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/CreateDeliverabilityTestReport">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateDeliverabilityTestReportOutcome CreateDeliverabilityTestReport(const Model::CreateDeliverabilityTestReportRequest& request) const;

        /**
         * <p>Create a new predictive inbox placement test. Predictive inbox placement
         * tests can help you predict how your messages will be handled by various email
         * providers around the world. When you perform a predictive inbox placement test,
         * you provide a sample message that contains the content that you plan to send to
         * your customers. Amazon SES then sends that message to special email addresses
         * spread across several major email providers. After about 24 hours, the test is
         * complete, and you can use the <code>GetDeliverabilityTestReport</code> operation
         * to view the results of the test.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/CreateDeliverabilityTestReport">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateDeliverabilityTestReportOutcomeCallable CreateDeliverabilityTestReportCallable(const Model::CreateDeliverabilityTestReportRequest& request) const;

        /**
         * <p>Create a new predictive inbox placement test. Predictive inbox placement
         * tests can help you predict how your messages will be handled by various email
         * providers around the world. When you perform a predictive inbox placement test,
         * you provide a sample message that contains the content that you plan to send to
         * your customers. Amazon SES then sends that message to special email addresses
         * spread across several major email providers. After about 24 hours, the test is
         * complete, and you can use the <code>GetDeliverabilityTestReport</code> operation
         * to view the results of the test.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/CreateDeliverabilityTestReport">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateDeliverabilityTestReportAsync(const Model::CreateDeliverabilityTestReportRequest& request, const CreateDeliverabilityTestReportResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Starts the process of verifying an email identity. An <i>identity</i> is an
         * email address or domain that you use when you send email. Before you can use an
         * identity to send email, you first have to verify it. By verifying an identity,
         * you demonstrate that you're the owner of the identity, and that you've given
         * Amazon SES API v2 permission to send email from the identity.</p> <p>When you
         * verify an email address, Amazon SES sends an email to the address. Your email
         * address is verified as soon as you follow the link in the verification email.
         * </p> <p>When you verify a domain without specifying the
         * <code>DkimSigningAttributes</code> object, this operation provides a set of DKIM
         * tokens. You can convert these tokens into CNAME records, which you then add to
         * the DNS configuration for your domain. Your domain is verified when Amazon SES
         * detects these records in the DNS configuration for your domain. This
         * verification method is known as <a
         * href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/easy-dkim.html">Easy
         * DKIM</a>.</p> <p>Alternatively, you can perform the verification process by
         * providing your own public-private key pair. This verification method is known as
         * Bring Your Own DKIM (BYODKIM). To use BYODKIM, your call to the
         * <code>CreateEmailIdentity</code> operation has to include the
         * <code>DkimSigningAttributes</code> object. When you specify this object, you
         * provide a selector (a component of the DNS record name that identifies the
         * public key that you want to use for DKIM authentication) and a private
         * key.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/CreateEmailIdentity">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateEmailIdentityOutcome CreateEmailIdentity(const Model::CreateEmailIdentityRequest& request) const;

        /**
         * <p>Starts the process of verifying an email identity. An <i>identity</i> is an
         * email address or domain that you use when you send email. Before you can use an
         * identity to send email, you first have to verify it. By verifying an identity,
         * you demonstrate that you're the owner of the identity, and that you've given
         * Amazon SES API v2 permission to send email from the identity.</p> <p>When you
         * verify an email address, Amazon SES sends an email to the address. Your email
         * address is verified as soon as you follow the link in the verification email.
         * </p> <p>When you verify a domain without specifying the
         * <code>DkimSigningAttributes</code> object, this operation provides a set of DKIM
         * tokens. You can convert these tokens into CNAME records, which you then add to
         * the DNS configuration for your domain. Your domain is verified when Amazon SES
         * detects these records in the DNS configuration for your domain. This
         * verification method is known as <a
         * href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/easy-dkim.html">Easy
         * DKIM</a>.</p> <p>Alternatively, you can perform the verification process by
         * providing your own public-private key pair. This verification method is known as
         * Bring Your Own DKIM (BYODKIM). To use BYODKIM, your call to the
         * <code>CreateEmailIdentity</code> operation has to include the
         * <code>DkimSigningAttributes</code> object. When you specify this object, you
         * provide a selector (a component of the DNS record name that identifies the
         * public key that you want to use for DKIM authentication) and a private
         * key.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/CreateEmailIdentity">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateEmailIdentityOutcomeCallable CreateEmailIdentityCallable(const Model::CreateEmailIdentityRequest& request) const;

        /**
         * <p>Starts the process of verifying an email identity. An <i>identity</i> is an
         * email address or domain that you use when you send email. Before you can use an
         * identity to send email, you first have to verify it. By verifying an identity,
         * you demonstrate that you're the owner of the identity, and that you've given
         * Amazon SES API v2 permission to send email from the identity.</p> <p>When you
         * verify an email address, Amazon SES sends an email to the address. Your email
         * address is verified as soon as you follow the link in the verification email.
         * </p> <p>When you verify a domain without specifying the
         * <code>DkimSigningAttributes</code> object, this operation provides a set of DKIM
         * tokens. You can convert these tokens into CNAME records, which you then add to
         * the DNS configuration for your domain. Your domain is verified when Amazon SES
         * detects these records in the DNS configuration for your domain. This
         * verification method is known as <a
         * href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/easy-dkim.html">Easy
         * DKIM</a>.</p> <p>Alternatively, you can perform the verification process by
         * providing your own public-private key pair. This verification method is known as
         * Bring Your Own DKIM (BYODKIM). To use BYODKIM, your call to the
         * <code>CreateEmailIdentity</code> operation has to include the
         * <code>DkimSigningAttributes</code> object. When you specify this object, you
         * provide a selector (a component of the DNS record name that identifies the
         * public key that you want to use for DKIM authentication) and a private
         * key.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/CreateEmailIdentity">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateEmailIdentityAsync(const Model::CreateEmailIdentityRequest& request, const CreateEmailIdentityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates the specified sending authorization policy for the given identity (an
         * email address or a domain).</p>  <p>This API is for the identity owner
         * only. If you have not verified the identity, this API will return an error.</p>
         *  <p>Sending authorization is a feature that enables an identity owner to
         * authorize other senders to use its identities. For information about using
         * sending authorization, see the <a
         * href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/sending-authorization.html">Amazon
         * SES Developer Guide</a>.</p> <p>You can execute this operation no more than once
         * per second.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/CreateEmailIdentityPolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateEmailIdentityPolicyOutcome CreateEmailIdentityPolicy(const Model::CreateEmailIdentityPolicyRequest& request) const;

        /**
         * <p>Creates the specified sending authorization policy for the given identity (an
         * email address or a domain).</p>  <p>This API is for the identity owner
         * only. If you have not verified the identity, this API will return an error.</p>
         *  <p>Sending authorization is a feature that enables an identity owner to
         * authorize other senders to use its identities. For information about using
         * sending authorization, see the <a
         * href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/sending-authorization.html">Amazon
         * SES Developer Guide</a>.</p> <p>You can execute this operation no more than once
         * per second.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/CreateEmailIdentityPolicy">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateEmailIdentityPolicyOutcomeCallable CreateEmailIdentityPolicyCallable(const Model::CreateEmailIdentityPolicyRequest& request) const;

        /**
         * <p>Creates the specified sending authorization policy for the given identity (an
         * email address or a domain).</p>  <p>This API is for the identity owner
         * only. If you have not verified the identity, this API will return an error.</p>
         *  <p>Sending authorization is a feature that enables an identity owner to
         * authorize other senders to use its identities. For information about using
         * sending authorization, see the <a
         * href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/sending-authorization.html">Amazon
         * SES Developer Guide</a>.</p> <p>You can execute this operation no more than once
         * per second.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/CreateEmailIdentityPolicy">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateEmailIdentityPolicyAsync(const Model::CreateEmailIdentityPolicyRequest& request, const CreateEmailIdentityPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates an email template. Email templates enable you to send personalized
         * email to one or more destinations in a single API operation. For more
         * information, see the <a
         * href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/send-personalized-email-api.html">Amazon
         * SES Developer Guide</a>.</p> <p>You can execute this operation no more than once
         * per second.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/CreateEmailTemplate">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateEmailTemplateOutcome CreateEmailTemplate(const Model::CreateEmailTemplateRequest& request) const;

        /**
         * <p>Creates an email template. Email templates enable you to send personalized
         * email to one or more destinations in a single API operation. For more
         * information, see the <a
         * href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/send-personalized-email-api.html">Amazon
         * SES Developer Guide</a>.</p> <p>You can execute this operation no more than once
         * per second.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/CreateEmailTemplate">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateEmailTemplateOutcomeCallable CreateEmailTemplateCallable(const Model::CreateEmailTemplateRequest& request) const;

        /**
         * <p>Creates an email template. Email templates enable you to send personalized
         * email to one or more destinations in a single API operation. For more
         * information, see the <a
         * href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/send-personalized-email-api.html">Amazon
         * SES Developer Guide</a>.</p> <p>You can execute this operation no more than once
         * per second.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/CreateEmailTemplate">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateEmailTemplateAsync(const Model::CreateEmailTemplateRequest& request, const CreateEmailTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates an import job for a data destination.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/CreateImportJob">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateImportJobOutcome CreateImportJob(const Model::CreateImportJobRequest& request) const;

        /**
         * <p>Creates an import job for a data destination.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/CreateImportJob">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateImportJobOutcomeCallable CreateImportJobCallable(const Model::CreateImportJobRequest& request) const;

        /**
         * <p>Creates an import job for a data destination.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/CreateImportJob">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateImportJobAsync(const Model::CreateImportJobRequest& request, const CreateImportJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Delete an existing configuration set.</p> <p> <i>Configuration sets</i> are
         * groups of rules that you can apply to the emails you send. You apply a
         * configuration set to an email by including a reference to the configuration set
         * in the headers of the email. When you apply a configuration set to an email, all
         * of the rules in that configuration set are applied to the email.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/DeleteConfigurationSet">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteConfigurationSetOutcome DeleteConfigurationSet(const Model::DeleteConfigurationSetRequest& request) const;

        /**
         * <p>Delete an existing configuration set.</p> <p> <i>Configuration sets</i> are
         * groups of rules that you can apply to the emails you send. You apply a
         * configuration set to an email by including a reference to the configuration set
         * in the headers of the email. When you apply a configuration set to an email, all
         * of the rules in that configuration set are applied to the email.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/DeleteConfigurationSet">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteConfigurationSetOutcomeCallable DeleteConfigurationSetCallable(const Model::DeleteConfigurationSetRequest& request) const;

        /**
         * <p>Delete an existing configuration set.</p> <p> <i>Configuration sets</i> are
         * groups of rules that you can apply to the emails you send. You apply a
         * configuration set to an email by including a reference to the configuration set
         * in the headers of the email. When you apply a configuration set to an email, all
         * of the rules in that configuration set are applied to the email.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/DeleteConfigurationSet">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteConfigurationSetAsync(const Model::DeleteConfigurationSetRequest& request, const DeleteConfigurationSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Delete an event destination.</p> <p> <i>Events</i> include message sends,
         * deliveries, opens, clicks, bounces, and complaints. <i>Event destinations</i>
         * are places that you can send information about these events to. For example, you
         * can send event data to Amazon SNS to receive notifications when you receive
         * bounces or complaints, or you can use Amazon Kinesis Data Firehose to stream
         * data to Amazon S3 for long-term storage.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/DeleteConfigurationSetEventDestination">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteConfigurationSetEventDestinationOutcome DeleteConfigurationSetEventDestination(const Model::DeleteConfigurationSetEventDestinationRequest& request) const;

        /**
         * <p>Delete an event destination.</p> <p> <i>Events</i> include message sends,
         * deliveries, opens, clicks, bounces, and complaints. <i>Event destinations</i>
         * are places that you can send information about these events to. For example, you
         * can send event data to Amazon SNS to receive notifications when you receive
         * bounces or complaints, or you can use Amazon Kinesis Data Firehose to stream
         * data to Amazon S3 for long-term storage.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/DeleteConfigurationSetEventDestination">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteConfigurationSetEventDestinationOutcomeCallable DeleteConfigurationSetEventDestinationCallable(const Model::DeleteConfigurationSetEventDestinationRequest& request) const;

        /**
         * <p>Delete an event destination.</p> <p> <i>Events</i> include message sends,
         * deliveries, opens, clicks, bounces, and complaints. <i>Event destinations</i>
         * are places that you can send information about these events to. For example, you
         * can send event data to Amazon SNS to receive notifications when you receive
         * bounces or complaints, or you can use Amazon Kinesis Data Firehose to stream
         * data to Amazon S3 for long-term storage.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/DeleteConfigurationSetEventDestination">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteConfigurationSetEventDestinationAsync(const Model::DeleteConfigurationSetEventDestinationRequest& request, const DeleteConfigurationSetEventDestinationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Removes a contact from a contact list.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/DeleteContact">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteContactOutcome DeleteContact(const Model::DeleteContactRequest& request) const;

        /**
         * <p>Removes a contact from a contact list.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/DeleteContact">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteContactOutcomeCallable DeleteContactCallable(const Model::DeleteContactRequest& request) const;

        /**
         * <p>Removes a contact from a contact list.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/DeleteContact">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteContactAsync(const Model::DeleteContactRequest& request, const DeleteContactResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a contact list and all of the contacts on that list.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/DeleteContactList">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteContactListOutcome DeleteContactList(const Model::DeleteContactListRequest& request) const;

        /**
         * <p>Deletes a contact list and all of the contacts on that list.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/DeleteContactList">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteContactListOutcomeCallable DeleteContactListCallable(const Model::DeleteContactListRequest& request) const;

        /**
         * <p>Deletes a contact list and all of the contacts on that list.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/DeleteContactList">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteContactListAsync(const Model::DeleteContactListRequest& request, const DeleteContactListResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes an existing custom verification email template.</p> <p>For more
         * information about custom verification email templates, see <a
         * href="https://docs.aws.amazon.com/es/latest/DeveloperGuide/send-email-verify-address-custom.html">Using
         * Custom Verification Email Templates</a> in the <i>Amazon SES Developer
         * Guide</i>.</p> <p>You can execute this operation no more than once per
         * second.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/DeleteCustomVerificationEmailTemplate">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteCustomVerificationEmailTemplateOutcome DeleteCustomVerificationEmailTemplate(const Model::DeleteCustomVerificationEmailTemplateRequest& request) const;

        /**
         * <p>Deletes an existing custom verification email template.</p> <p>For more
         * information about custom verification email templates, see <a
         * href="https://docs.aws.amazon.com/es/latest/DeveloperGuide/send-email-verify-address-custom.html">Using
         * Custom Verification Email Templates</a> in the <i>Amazon SES Developer
         * Guide</i>.</p> <p>You can execute this operation no more than once per
         * second.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/DeleteCustomVerificationEmailTemplate">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteCustomVerificationEmailTemplateOutcomeCallable DeleteCustomVerificationEmailTemplateCallable(const Model::DeleteCustomVerificationEmailTemplateRequest& request) const;

        /**
         * <p>Deletes an existing custom verification email template.</p> <p>For more
         * information about custom verification email templates, see <a
         * href="https://docs.aws.amazon.com/es/latest/DeveloperGuide/send-email-verify-address-custom.html">Using
         * Custom Verification Email Templates</a> in the <i>Amazon SES Developer
         * Guide</i>.</p> <p>You can execute this operation no more than once per
         * second.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/DeleteCustomVerificationEmailTemplate">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteCustomVerificationEmailTemplateAsync(const Model::DeleteCustomVerificationEmailTemplateRequest& request, const DeleteCustomVerificationEmailTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Delete a dedicated IP pool.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/DeleteDedicatedIpPool">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteDedicatedIpPoolOutcome DeleteDedicatedIpPool(const Model::DeleteDedicatedIpPoolRequest& request) const;

        /**
         * <p>Delete a dedicated IP pool.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/DeleteDedicatedIpPool">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteDedicatedIpPoolOutcomeCallable DeleteDedicatedIpPoolCallable(const Model::DeleteDedicatedIpPoolRequest& request) const;

        /**
         * <p>Delete a dedicated IP pool.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/DeleteDedicatedIpPool">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteDedicatedIpPoolAsync(const Model::DeleteDedicatedIpPoolRequest& request, const DeleteDedicatedIpPoolResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes an email identity. An identity can be either an email address or a
         * domain name.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/DeleteEmailIdentity">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteEmailIdentityOutcome DeleteEmailIdentity(const Model::DeleteEmailIdentityRequest& request) const;

        /**
         * <p>Deletes an email identity. An identity can be either an email address or a
         * domain name.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/DeleteEmailIdentity">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteEmailIdentityOutcomeCallable DeleteEmailIdentityCallable(const Model::DeleteEmailIdentityRequest& request) const;

        /**
         * <p>Deletes an email identity. An identity can be either an email address or a
         * domain name.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/DeleteEmailIdentity">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteEmailIdentityAsync(const Model::DeleteEmailIdentityRequest& request, const DeleteEmailIdentityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the specified sending authorization policy for the given identity (an
         * email address or a domain). This API returns successfully even if a policy with
         * the specified name does not exist.</p>  <p>This API is for the identity
         * owner only. If you have not verified the identity, this API will return an
         * error.</p>  <p>Sending authorization is a feature that enables an
         * identity owner to authorize other senders to use its identities. For information
         * about using sending authorization, see the <a
         * href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/sending-authorization.html">Amazon
         * SES Developer Guide</a>.</p> <p>You can execute this operation no more than once
         * per second.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/DeleteEmailIdentityPolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteEmailIdentityPolicyOutcome DeleteEmailIdentityPolicy(const Model::DeleteEmailIdentityPolicyRequest& request) const;

        /**
         * <p>Deletes the specified sending authorization policy for the given identity (an
         * email address or a domain). This API returns successfully even if a policy with
         * the specified name does not exist.</p>  <p>This API is for the identity
         * owner only. If you have not verified the identity, this API will return an
         * error.</p>  <p>Sending authorization is a feature that enables an
         * identity owner to authorize other senders to use its identities. For information
         * about using sending authorization, see the <a
         * href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/sending-authorization.html">Amazon
         * SES Developer Guide</a>.</p> <p>You can execute this operation no more than once
         * per second.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/DeleteEmailIdentityPolicy">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteEmailIdentityPolicyOutcomeCallable DeleteEmailIdentityPolicyCallable(const Model::DeleteEmailIdentityPolicyRequest& request) const;

        /**
         * <p>Deletes the specified sending authorization policy for the given identity (an
         * email address or a domain). This API returns successfully even if a policy with
         * the specified name does not exist.</p>  <p>This API is for the identity
         * owner only. If you have not verified the identity, this API will return an
         * error.</p>  <p>Sending authorization is a feature that enables an
         * identity owner to authorize other senders to use its identities. For information
         * about using sending authorization, see the <a
         * href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/sending-authorization.html">Amazon
         * SES Developer Guide</a>.</p> <p>You can execute this operation no more than once
         * per second.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/DeleteEmailIdentityPolicy">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteEmailIdentityPolicyAsync(const Model::DeleteEmailIdentityPolicyRequest& request, const DeleteEmailIdentityPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes an email template.</p> <p>You can execute this operation no more than
         * once per second.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/DeleteEmailTemplate">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteEmailTemplateOutcome DeleteEmailTemplate(const Model::DeleteEmailTemplateRequest& request) const;

        /**
         * <p>Deletes an email template.</p> <p>You can execute this operation no more than
         * once per second.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/DeleteEmailTemplate">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteEmailTemplateOutcomeCallable DeleteEmailTemplateCallable(const Model::DeleteEmailTemplateRequest& request) const;

        /**
         * <p>Deletes an email template.</p> <p>You can execute this operation no more than
         * once per second.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/DeleteEmailTemplate">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteEmailTemplateAsync(const Model::DeleteEmailTemplateRequest& request, const DeleteEmailTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Removes an email address from the suppression list for your
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/DeleteSuppressedDestination">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteSuppressedDestinationOutcome DeleteSuppressedDestination(const Model::DeleteSuppressedDestinationRequest& request) const;

        /**
         * <p>Removes an email address from the suppression list for your
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/DeleteSuppressedDestination">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteSuppressedDestinationOutcomeCallable DeleteSuppressedDestinationCallable(const Model::DeleteSuppressedDestinationRequest& request) const;

        /**
         * <p>Removes an email address from the suppression list for your
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/DeleteSuppressedDestination">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteSuppressedDestinationAsync(const Model::DeleteSuppressedDestinationRequest& request, const DeleteSuppressedDestinationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Obtain information about the email-sending status and capabilities of your
         * Amazon SES account in the current AWS Region.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/GetAccount">AWS
         * API Reference</a></p>
         */
        virtual Model::GetAccountOutcome GetAccount(const Model::GetAccountRequest& request) const;

        /**
         * <p>Obtain information about the email-sending status and capabilities of your
         * Amazon SES account in the current AWS Region.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/GetAccount">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetAccountOutcomeCallable GetAccountCallable(const Model::GetAccountRequest& request) const;

        /**
         * <p>Obtain information about the email-sending status and capabilities of your
         * Amazon SES account in the current AWS Region.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/GetAccount">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetAccountAsync(const Model::GetAccountRequest& request, const GetAccountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieve a list of the blacklists that your dedicated IP addresses appear
         * on.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/GetBlacklistReports">AWS
         * API Reference</a></p>
         */
        virtual Model::GetBlacklistReportsOutcome GetBlacklistReports(const Model::GetBlacklistReportsRequest& request) const;

        /**
         * <p>Retrieve a list of the blacklists that your dedicated IP addresses appear
         * on.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/GetBlacklistReports">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetBlacklistReportsOutcomeCallable GetBlacklistReportsCallable(const Model::GetBlacklistReportsRequest& request) const;

        /**
         * <p>Retrieve a list of the blacklists that your dedicated IP addresses appear
         * on.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/GetBlacklistReports">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetBlacklistReportsAsync(const Model::GetBlacklistReportsRequest& request, const GetBlacklistReportsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Get information about an existing configuration set, including the dedicated
         * IP pool that it's associated with, whether or not it's enabled for sending
         * email, and more.</p> <p> <i>Configuration sets</i> are groups of rules that you
         * can apply to the emails you send. You apply a configuration set to an email by
         * including a reference to the configuration set in the headers of the email. When
         * you apply a configuration set to an email, all of the rules in that
         * configuration set are applied to the email.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/GetConfigurationSet">AWS
         * API Reference</a></p>
         */
        virtual Model::GetConfigurationSetOutcome GetConfigurationSet(const Model::GetConfigurationSetRequest& request) const;

        /**
         * <p>Get information about an existing configuration set, including the dedicated
         * IP pool that it's associated with, whether or not it's enabled for sending
         * email, and more.</p> <p> <i>Configuration sets</i> are groups of rules that you
         * can apply to the emails you send. You apply a configuration set to an email by
         * including a reference to the configuration set in the headers of the email. When
         * you apply a configuration set to an email, all of the rules in that
         * configuration set are applied to the email.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/GetConfigurationSet">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetConfigurationSetOutcomeCallable GetConfigurationSetCallable(const Model::GetConfigurationSetRequest& request) const;

        /**
         * <p>Get information about an existing configuration set, including the dedicated
         * IP pool that it's associated with, whether or not it's enabled for sending
         * email, and more.</p> <p> <i>Configuration sets</i> are groups of rules that you
         * can apply to the emails you send. You apply a configuration set to an email by
         * including a reference to the configuration set in the headers of the email. When
         * you apply a configuration set to an email, all of the rules in that
         * configuration set are applied to the email.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/GetConfigurationSet">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetConfigurationSetAsync(const Model::GetConfigurationSetRequest& request, const GetConfigurationSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieve a list of event destinations that are associated with a
         * configuration set.</p> <p> <i>Events</i> include message sends, deliveries,
         * opens, clicks, bounces, and complaints. <i>Event destinations</i> are places
         * that you can send information about these events to. For example, you can send
         * event data to Amazon SNS to receive notifications when you receive bounces or
         * complaints, or you can use Amazon Kinesis Data Firehose to stream data to Amazon
         * S3 for long-term storage.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/GetConfigurationSetEventDestinations">AWS
         * API Reference</a></p>
         */
        virtual Model::GetConfigurationSetEventDestinationsOutcome GetConfigurationSetEventDestinations(const Model::GetConfigurationSetEventDestinationsRequest& request) const;

        /**
         * <p>Retrieve a list of event destinations that are associated with a
         * configuration set.</p> <p> <i>Events</i> include message sends, deliveries,
         * opens, clicks, bounces, and complaints. <i>Event destinations</i> are places
         * that you can send information about these events to. For example, you can send
         * event data to Amazon SNS to receive notifications when you receive bounces or
         * complaints, or you can use Amazon Kinesis Data Firehose to stream data to Amazon
         * S3 for long-term storage.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/GetConfigurationSetEventDestinations">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetConfigurationSetEventDestinationsOutcomeCallable GetConfigurationSetEventDestinationsCallable(const Model::GetConfigurationSetEventDestinationsRequest& request) const;

        /**
         * <p>Retrieve a list of event destinations that are associated with a
         * configuration set.</p> <p> <i>Events</i> include message sends, deliveries,
         * opens, clicks, bounces, and complaints. <i>Event destinations</i> are places
         * that you can send information about these events to. For example, you can send
         * event data to Amazon SNS to receive notifications when you receive bounces or
         * complaints, or you can use Amazon Kinesis Data Firehose to stream data to Amazon
         * S3 for long-term storage.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/GetConfigurationSetEventDestinations">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetConfigurationSetEventDestinationsAsync(const Model::GetConfigurationSetEventDestinationsRequest& request, const GetConfigurationSetEventDestinationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a contact from a contact list.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/GetContact">AWS
         * API Reference</a></p>
         */
        virtual Model::GetContactOutcome GetContact(const Model::GetContactRequest& request) const;

        /**
         * <p>Returns a contact from a contact list.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/GetContact">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetContactOutcomeCallable GetContactCallable(const Model::GetContactRequest& request) const;

        /**
         * <p>Returns a contact from a contact list.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/GetContact">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetContactAsync(const Model::GetContactRequest& request, const GetContactResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns contact list metadata. It does not return any information about the
         * contacts present in the list.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/GetContactList">AWS
         * API Reference</a></p>
         */
        virtual Model::GetContactListOutcome GetContactList(const Model::GetContactListRequest& request) const;

        /**
         * <p>Returns contact list metadata. It does not return any information about the
         * contacts present in the list.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/GetContactList">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetContactListOutcomeCallable GetContactListCallable(const Model::GetContactListRequest& request) const;

        /**
         * <p>Returns contact list metadata. It does not return any information about the
         * contacts present in the list.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/GetContactList">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetContactListAsync(const Model::GetContactListRequest& request, const GetContactListResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns the custom email verification template for the template name you
         * specify.</p> <p>For more information about custom verification email templates,
         * see <a
         * href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/send-email-verify-address-custom.html">Using
         * Custom Verification Email Templates</a> in the <i>Amazon SES Developer
         * Guide</i>.</p> <p>You can execute this operation no more than once per
         * second.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/GetCustomVerificationEmailTemplate">AWS
         * API Reference</a></p>
         */
        virtual Model::GetCustomVerificationEmailTemplateOutcome GetCustomVerificationEmailTemplate(const Model::GetCustomVerificationEmailTemplateRequest& request) const;

        /**
         * <p>Returns the custom email verification template for the template name you
         * specify.</p> <p>For more information about custom verification email templates,
         * see <a
         * href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/send-email-verify-address-custom.html">Using
         * Custom Verification Email Templates</a> in the <i>Amazon SES Developer
         * Guide</i>.</p> <p>You can execute this operation no more than once per
         * second.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/GetCustomVerificationEmailTemplate">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetCustomVerificationEmailTemplateOutcomeCallable GetCustomVerificationEmailTemplateCallable(const Model::GetCustomVerificationEmailTemplateRequest& request) const;

        /**
         * <p>Returns the custom email verification template for the template name you
         * specify.</p> <p>For more information about custom verification email templates,
         * see <a
         * href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/send-email-verify-address-custom.html">Using
         * Custom Verification Email Templates</a> in the <i>Amazon SES Developer
         * Guide</i>.</p> <p>You can execute this operation no more than once per
         * second.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/GetCustomVerificationEmailTemplate">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetCustomVerificationEmailTemplateAsync(const Model::GetCustomVerificationEmailTemplateRequest& request, const GetCustomVerificationEmailTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Get information about a dedicated IP address, including the name of the
         * dedicated IP pool that it's associated with, as well information about the
         * automatic warm-up process for the address.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/GetDedicatedIp">AWS
         * API Reference</a></p>
         */
        virtual Model::GetDedicatedIpOutcome GetDedicatedIp(const Model::GetDedicatedIpRequest& request) const;

        /**
         * <p>Get information about a dedicated IP address, including the name of the
         * dedicated IP pool that it's associated with, as well information about the
         * automatic warm-up process for the address.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/GetDedicatedIp">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetDedicatedIpOutcomeCallable GetDedicatedIpCallable(const Model::GetDedicatedIpRequest& request) const;

        /**
         * <p>Get information about a dedicated IP address, including the name of the
         * dedicated IP pool that it's associated with, as well information about the
         * automatic warm-up process for the address.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/GetDedicatedIp">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetDedicatedIpAsync(const Model::GetDedicatedIpRequest& request, const GetDedicatedIpResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>List the dedicated IP addresses that are associated with your AWS
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/GetDedicatedIps">AWS
         * API Reference</a></p>
         */
        virtual Model::GetDedicatedIpsOutcome GetDedicatedIps(const Model::GetDedicatedIpsRequest& request) const;

        /**
         * <p>List the dedicated IP addresses that are associated with your AWS
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/GetDedicatedIps">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetDedicatedIpsOutcomeCallable GetDedicatedIpsCallable(const Model::GetDedicatedIpsRequest& request) const;

        /**
         * <p>List the dedicated IP addresses that are associated with your AWS
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/GetDedicatedIps">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetDedicatedIpsAsync(const Model::GetDedicatedIpsRequest& request, const GetDedicatedIpsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieve information about the status of the Deliverability dashboard for
         * your account. When the Deliverability dashboard is enabled, you gain access to
         * reputation, deliverability, and other metrics for the domains that you use to
         * send email. You also gain the ability to perform predictive inbox placement
         * tests.</p> <p>When you use the Deliverability dashboard, you pay a monthly
         * subscription charge, in addition to any other fees that you accrue by using
         * Amazon SES and other AWS services. For more information about the features and
         * cost of a Deliverability dashboard subscription, see <a
         * href="http://aws.amazon.com/ses/pricing/">Amazon SES Pricing</a>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/GetDeliverabilityDashboardOptions">AWS
         * API Reference</a></p>
         */
        virtual Model::GetDeliverabilityDashboardOptionsOutcome GetDeliverabilityDashboardOptions(const Model::GetDeliverabilityDashboardOptionsRequest& request) const;

        /**
         * <p>Retrieve information about the status of the Deliverability dashboard for
         * your account. When the Deliverability dashboard is enabled, you gain access to
         * reputation, deliverability, and other metrics for the domains that you use to
         * send email. You also gain the ability to perform predictive inbox placement
         * tests.</p> <p>When you use the Deliverability dashboard, you pay a monthly
         * subscription charge, in addition to any other fees that you accrue by using
         * Amazon SES and other AWS services. For more information about the features and
         * cost of a Deliverability dashboard subscription, see <a
         * href="http://aws.amazon.com/ses/pricing/">Amazon SES Pricing</a>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/GetDeliverabilityDashboardOptions">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetDeliverabilityDashboardOptionsOutcomeCallable GetDeliverabilityDashboardOptionsCallable(const Model::GetDeliverabilityDashboardOptionsRequest& request) const;

        /**
         * <p>Retrieve information about the status of the Deliverability dashboard for
         * your account. When the Deliverability dashboard is enabled, you gain access to
         * reputation, deliverability, and other metrics for the domains that you use to
         * send email. You also gain the ability to perform predictive inbox placement
         * tests.</p> <p>When you use the Deliverability dashboard, you pay a monthly
         * subscription charge, in addition to any other fees that you accrue by using
         * Amazon SES and other AWS services. For more information about the features and
         * cost of a Deliverability dashboard subscription, see <a
         * href="http://aws.amazon.com/ses/pricing/">Amazon SES Pricing</a>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/GetDeliverabilityDashboardOptions">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetDeliverabilityDashboardOptionsAsync(const Model::GetDeliverabilityDashboardOptionsRequest& request, const GetDeliverabilityDashboardOptionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieve the results of a predictive inbox placement test.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/GetDeliverabilityTestReport">AWS
         * API Reference</a></p>
         */
        virtual Model::GetDeliverabilityTestReportOutcome GetDeliverabilityTestReport(const Model::GetDeliverabilityTestReportRequest& request) const;

        /**
         * <p>Retrieve the results of a predictive inbox placement test.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/GetDeliverabilityTestReport">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetDeliverabilityTestReportOutcomeCallable GetDeliverabilityTestReportCallable(const Model::GetDeliverabilityTestReportRequest& request) const;

        /**
         * <p>Retrieve the results of a predictive inbox placement test.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/GetDeliverabilityTestReport">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetDeliverabilityTestReportAsync(const Model::GetDeliverabilityTestReportRequest& request, const GetDeliverabilityTestReportResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieve all the deliverability data for a specific campaign. This data is
         * available for a campaign only if the campaign sent email by using a domain that
         * the Deliverability dashboard is enabled for.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/GetDomainDeliverabilityCampaign">AWS
         * API Reference</a></p>
         */
        virtual Model::GetDomainDeliverabilityCampaignOutcome GetDomainDeliverabilityCampaign(const Model::GetDomainDeliverabilityCampaignRequest& request) const;

        /**
         * <p>Retrieve all the deliverability data for a specific campaign. This data is
         * available for a campaign only if the campaign sent email by using a domain that
         * the Deliverability dashboard is enabled for.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/GetDomainDeliverabilityCampaign">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetDomainDeliverabilityCampaignOutcomeCallable GetDomainDeliverabilityCampaignCallable(const Model::GetDomainDeliverabilityCampaignRequest& request) const;

        /**
         * <p>Retrieve all the deliverability data for a specific campaign. This data is
         * available for a campaign only if the campaign sent email by using a domain that
         * the Deliverability dashboard is enabled for.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/GetDomainDeliverabilityCampaign">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetDomainDeliverabilityCampaignAsync(const Model::GetDomainDeliverabilityCampaignRequest& request, const GetDomainDeliverabilityCampaignResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieve inbox placement and engagement rates for the domains that you use to
         * send email.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/GetDomainStatisticsReport">AWS
         * API Reference</a></p>
         */
        virtual Model::GetDomainStatisticsReportOutcome GetDomainStatisticsReport(const Model::GetDomainStatisticsReportRequest& request) const;

        /**
         * <p>Retrieve inbox placement and engagement rates for the domains that you use to
         * send email.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/GetDomainStatisticsReport">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetDomainStatisticsReportOutcomeCallable GetDomainStatisticsReportCallable(const Model::GetDomainStatisticsReportRequest& request) const;

        /**
         * <p>Retrieve inbox placement and engagement rates for the domains that you use to
         * send email.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/GetDomainStatisticsReport">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetDomainStatisticsReportAsync(const Model::GetDomainStatisticsReportRequest& request, const GetDomainStatisticsReportResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Provides information about a specific identity, including the identity's
         * verification status, sending authorization policies, its DKIM authentication
         * status, and its custom Mail-From settings.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/GetEmailIdentity">AWS
         * API Reference</a></p>
         */
        virtual Model::GetEmailIdentityOutcome GetEmailIdentity(const Model::GetEmailIdentityRequest& request) const;

        /**
         * <p>Provides information about a specific identity, including the identity's
         * verification status, sending authorization policies, its DKIM authentication
         * status, and its custom Mail-From settings.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/GetEmailIdentity">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetEmailIdentityOutcomeCallable GetEmailIdentityCallable(const Model::GetEmailIdentityRequest& request) const;

        /**
         * <p>Provides information about a specific identity, including the identity's
         * verification status, sending authorization policies, its DKIM authentication
         * status, and its custom Mail-From settings.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/GetEmailIdentity">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetEmailIdentityAsync(const Model::GetEmailIdentityRequest& request, const GetEmailIdentityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns the requested sending authorization policies for the given identity
         * (an email address or a domain). The policies are returned as a map of policy
         * names to policy contents. You can retrieve a maximum of 20 policies at a
         * time.</p>  <p>This API is for the identity owner only. If you have not
         * verified the identity, this API will return an error.</p>  <p>Sending
         * authorization is a feature that enables an identity owner to authorize other
         * senders to use its identities. For information about using sending
         * authorization, see the <a
         * href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/sending-authorization.html">Amazon
         * SES Developer Guide</a>.</p> <p>You can execute this operation no more than once
         * per second.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/GetEmailIdentityPolicies">AWS
         * API Reference</a></p>
         */
        virtual Model::GetEmailIdentityPoliciesOutcome GetEmailIdentityPolicies(const Model::GetEmailIdentityPoliciesRequest& request) const;

        /**
         * <p>Returns the requested sending authorization policies for the given identity
         * (an email address or a domain). The policies are returned as a map of policy
         * names to policy contents. You can retrieve a maximum of 20 policies at a
         * time.</p>  <p>This API is for the identity owner only. If you have not
         * verified the identity, this API will return an error.</p>  <p>Sending
         * authorization is a feature that enables an identity owner to authorize other
         * senders to use its identities. For information about using sending
         * authorization, see the <a
         * href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/sending-authorization.html">Amazon
         * SES Developer Guide</a>.</p> <p>You can execute this operation no more than once
         * per second.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/GetEmailIdentityPolicies">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetEmailIdentityPoliciesOutcomeCallable GetEmailIdentityPoliciesCallable(const Model::GetEmailIdentityPoliciesRequest& request) const;

        /**
         * <p>Returns the requested sending authorization policies for the given identity
         * (an email address or a domain). The policies are returned as a map of policy
         * names to policy contents. You can retrieve a maximum of 20 policies at a
         * time.</p>  <p>This API is for the identity owner only. If you have not
         * verified the identity, this API will return an error.</p>  <p>Sending
         * authorization is a feature that enables an identity owner to authorize other
         * senders to use its identities. For information about using sending
         * authorization, see the <a
         * href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/sending-authorization.html">Amazon
         * SES Developer Guide</a>.</p> <p>You can execute this operation no more than once
         * per second.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/GetEmailIdentityPolicies">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetEmailIdentityPoliciesAsync(const Model::GetEmailIdentityPoliciesRequest& request, const GetEmailIdentityPoliciesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Displays the template object (which includes the subject line, HTML part and
         * text part) for the template you specify.</p> <p>You can execute this operation
         * no more than once per second.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/GetEmailTemplate">AWS
         * API Reference</a></p>
         */
        virtual Model::GetEmailTemplateOutcome GetEmailTemplate(const Model::GetEmailTemplateRequest& request) const;

        /**
         * <p>Displays the template object (which includes the subject line, HTML part and
         * text part) for the template you specify.</p> <p>You can execute this operation
         * no more than once per second.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/GetEmailTemplate">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetEmailTemplateOutcomeCallable GetEmailTemplateCallable(const Model::GetEmailTemplateRequest& request) const;

        /**
         * <p>Displays the template object (which includes the subject line, HTML part and
         * text part) for the template you specify.</p> <p>You can execute this operation
         * no more than once per second.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/GetEmailTemplate">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetEmailTemplateAsync(const Model::GetEmailTemplateRequest& request, const GetEmailTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Provides information about an import job.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/GetImportJob">AWS
         * API Reference</a></p>
         */
        virtual Model::GetImportJobOutcome GetImportJob(const Model::GetImportJobRequest& request) const;

        /**
         * <p>Provides information about an import job.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/GetImportJob">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetImportJobOutcomeCallable GetImportJobCallable(const Model::GetImportJobRequest& request) const;

        /**
         * <p>Provides information about an import job.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/GetImportJob">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetImportJobAsync(const Model::GetImportJobRequest& request, const GetImportJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves information about a specific email address that's on the
         * suppression list for your account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/GetSuppressedDestination">AWS
         * API Reference</a></p>
         */
        virtual Model::GetSuppressedDestinationOutcome GetSuppressedDestination(const Model::GetSuppressedDestinationRequest& request) const;

        /**
         * <p>Retrieves information about a specific email address that's on the
         * suppression list for your account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/GetSuppressedDestination">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetSuppressedDestinationOutcomeCallable GetSuppressedDestinationCallable(const Model::GetSuppressedDestinationRequest& request) const;

        /**
         * <p>Retrieves information about a specific email address that's on the
         * suppression list for your account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/GetSuppressedDestination">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetSuppressedDestinationAsync(const Model::GetSuppressedDestinationRequest& request, const GetSuppressedDestinationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>List all of the configuration sets associated with your account in the
         * current region.</p> <p> <i>Configuration sets</i> are groups of rules that you
         * can apply to the emails you send. You apply a configuration set to an email by
         * including a reference to the configuration set in the headers of the email. When
         * you apply a configuration set to an email, all of the rules in that
         * configuration set are applied to the email.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/ListConfigurationSets">AWS
         * API Reference</a></p>
         */
        virtual Model::ListConfigurationSetsOutcome ListConfigurationSets(const Model::ListConfigurationSetsRequest& request) const;

        /**
         * <p>List all of the configuration sets associated with your account in the
         * current region.</p> <p> <i>Configuration sets</i> are groups of rules that you
         * can apply to the emails you send. You apply a configuration set to an email by
         * including a reference to the configuration set in the headers of the email. When
         * you apply a configuration set to an email, all of the rules in that
         * configuration set are applied to the email.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/ListConfigurationSets">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListConfigurationSetsOutcomeCallable ListConfigurationSetsCallable(const Model::ListConfigurationSetsRequest& request) const;

        /**
         * <p>List all of the configuration sets associated with your account in the
         * current region.</p> <p> <i>Configuration sets</i> are groups of rules that you
         * can apply to the emails you send. You apply a configuration set to an email by
         * including a reference to the configuration set in the headers of the email. When
         * you apply a configuration set to an email, all of the rules in that
         * configuration set are applied to the email.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/ListConfigurationSets">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListConfigurationSetsAsync(const Model::ListConfigurationSetsRequest& request, const ListConfigurationSetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists all of the contact lists available.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/ListContactLists">AWS
         * API Reference</a></p>
         */
        virtual Model::ListContactListsOutcome ListContactLists(const Model::ListContactListsRequest& request) const;

        /**
         * <p>Lists all of the contact lists available.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/ListContactLists">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListContactListsOutcomeCallable ListContactListsCallable(const Model::ListContactListsRequest& request) const;

        /**
         * <p>Lists all of the contact lists available.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/ListContactLists">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListContactListsAsync(const Model::ListContactListsRequest& request, const ListContactListsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the contacts present in a specific contact list.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/ListContacts">AWS
         * API Reference</a></p>
         */
        virtual Model::ListContactsOutcome ListContacts(const Model::ListContactsRequest& request) const;

        /**
         * <p>Lists the contacts present in a specific contact list.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/ListContacts">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListContactsOutcomeCallable ListContactsCallable(const Model::ListContactsRequest& request) const;

        /**
         * <p>Lists the contacts present in a specific contact list.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/ListContacts">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListContactsAsync(const Model::ListContactsRequest& request, const ListContactsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the existing custom verification email templates for your account in
         * the current AWS Region.</p> <p>For more information about custom verification
         * email templates, see <a
         * href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/send-email-verify-address-custom.html">Using
         * Custom Verification Email Templates</a> in the <i>Amazon SES Developer
         * Guide</i>.</p> <p>You can execute this operation no more than once per
         * second.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/ListCustomVerificationEmailTemplates">AWS
         * API Reference</a></p>
         */
        virtual Model::ListCustomVerificationEmailTemplatesOutcome ListCustomVerificationEmailTemplates(const Model::ListCustomVerificationEmailTemplatesRequest& request) const;

        /**
         * <p>Lists the existing custom verification email templates for your account in
         * the current AWS Region.</p> <p>For more information about custom verification
         * email templates, see <a
         * href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/send-email-verify-address-custom.html">Using
         * Custom Verification Email Templates</a> in the <i>Amazon SES Developer
         * Guide</i>.</p> <p>You can execute this operation no more than once per
         * second.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/ListCustomVerificationEmailTemplates">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListCustomVerificationEmailTemplatesOutcomeCallable ListCustomVerificationEmailTemplatesCallable(const Model::ListCustomVerificationEmailTemplatesRequest& request) const;

        /**
         * <p>Lists the existing custom verification email templates for your account in
         * the current AWS Region.</p> <p>For more information about custom verification
         * email templates, see <a
         * href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/send-email-verify-address-custom.html">Using
         * Custom Verification Email Templates</a> in the <i>Amazon SES Developer
         * Guide</i>.</p> <p>You can execute this operation no more than once per
         * second.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/ListCustomVerificationEmailTemplates">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListCustomVerificationEmailTemplatesAsync(const Model::ListCustomVerificationEmailTemplatesRequest& request, const ListCustomVerificationEmailTemplatesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>List all of the dedicated IP pools that exist in your AWS account in the
         * current Region.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/ListDedicatedIpPools">AWS
         * API Reference</a></p>
         */
        virtual Model::ListDedicatedIpPoolsOutcome ListDedicatedIpPools(const Model::ListDedicatedIpPoolsRequest& request) const;

        /**
         * <p>List all of the dedicated IP pools that exist in your AWS account in the
         * current Region.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/ListDedicatedIpPools">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListDedicatedIpPoolsOutcomeCallable ListDedicatedIpPoolsCallable(const Model::ListDedicatedIpPoolsRequest& request) const;

        /**
         * <p>List all of the dedicated IP pools that exist in your AWS account in the
         * current Region.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/ListDedicatedIpPools">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListDedicatedIpPoolsAsync(const Model::ListDedicatedIpPoolsRequest& request, const ListDedicatedIpPoolsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Show a list of the predictive inbox placement tests that you've performed,
         * regardless of their statuses. For predictive inbox placement tests that are
         * complete, you can use the <code>GetDeliverabilityTestReport</code> operation to
         * view the results.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/ListDeliverabilityTestReports">AWS
         * API Reference</a></p>
         */
        virtual Model::ListDeliverabilityTestReportsOutcome ListDeliverabilityTestReports(const Model::ListDeliverabilityTestReportsRequest& request) const;

        /**
         * <p>Show a list of the predictive inbox placement tests that you've performed,
         * regardless of their statuses. For predictive inbox placement tests that are
         * complete, you can use the <code>GetDeliverabilityTestReport</code> operation to
         * view the results.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/ListDeliverabilityTestReports">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListDeliverabilityTestReportsOutcomeCallable ListDeliverabilityTestReportsCallable(const Model::ListDeliverabilityTestReportsRequest& request) const;

        /**
         * <p>Show a list of the predictive inbox placement tests that you've performed,
         * regardless of their statuses. For predictive inbox placement tests that are
         * complete, you can use the <code>GetDeliverabilityTestReport</code> operation to
         * view the results.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/ListDeliverabilityTestReports">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListDeliverabilityTestReportsAsync(const Model::ListDeliverabilityTestReportsRequest& request, const ListDeliverabilityTestReportsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieve deliverability data for all the campaigns that used a specific
         * domain to send email during a specified time range. This data is available for a
         * domain only if you enabled the Deliverability dashboard for the
         * domain.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/ListDomainDeliverabilityCampaigns">AWS
         * API Reference</a></p>
         */
        virtual Model::ListDomainDeliverabilityCampaignsOutcome ListDomainDeliverabilityCampaigns(const Model::ListDomainDeliverabilityCampaignsRequest& request) const;

        /**
         * <p>Retrieve deliverability data for all the campaigns that used a specific
         * domain to send email during a specified time range. This data is available for a
         * domain only if you enabled the Deliverability dashboard for the
         * domain.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/ListDomainDeliverabilityCampaigns">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListDomainDeliverabilityCampaignsOutcomeCallable ListDomainDeliverabilityCampaignsCallable(const Model::ListDomainDeliverabilityCampaignsRequest& request) const;

        /**
         * <p>Retrieve deliverability data for all the campaigns that used a specific
         * domain to send email during a specified time range. This data is available for a
         * domain only if you enabled the Deliverability dashboard for the
         * domain.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/ListDomainDeliverabilityCampaigns">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListDomainDeliverabilityCampaignsAsync(const Model::ListDomainDeliverabilityCampaignsRequest& request, const ListDomainDeliverabilityCampaignsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a list of all of the email identities that are associated with your
         * AWS account. An identity can be either an email address or a domain. This
         * operation returns identities that are verified as well as those that aren't.
         * This operation returns identities that are associated with Amazon SES and Amazon
         * Pinpoint.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/ListEmailIdentities">AWS
         * API Reference</a></p>
         */
        virtual Model::ListEmailIdentitiesOutcome ListEmailIdentities(const Model::ListEmailIdentitiesRequest& request) const;

        /**
         * <p>Returns a list of all of the email identities that are associated with your
         * AWS account. An identity can be either an email address or a domain. This
         * operation returns identities that are verified as well as those that aren't.
         * This operation returns identities that are associated with Amazon SES and Amazon
         * Pinpoint.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/ListEmailIdentities">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListEmailIdentitiesOutcomeCallable ListEmailIdentitiesCallable(const Model::ListEmailIdentitiesRequest& request) const;

        /**
         * <p>Returns a list of all of the email identities that are associated with your
         * AWS account. An identity can be either an email address or a domain. This
         * operation returns identities that are verified as well as those that aren't.
         * This operation returns identities that are associated with Amazon SES and Amazon
         * Pinpoint.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/ListEmailIdentities">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListEmailIdentitiesAsync(const Model::ListEmailIdentitiesRequest& request, const ListEmailIdentitiesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the email templates present in your Amazon SES account in the current
         * AWS Region.</p> <p>You can execute this operation no more than once per
         * second.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/ListEmailTemplates">AWS
         * API Reference</a></p>
         */
        virtual Model::ListEmailTemplatesOutcome ListEmailTemplates(const Model::ListEmailTemplatesRequest& request) const;

        /**
         * <p>Lists the email templates present in your Amazon SES account in the current
         * AWS Region.</p> <p>You can execute this operation no more than once per
         * second.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/ListEmailTemplates">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListEmailTemplatesOutcomeCallable ListEmailTemplatesCallable(const Model::ListEmailTemplatesRequest& request) const;

        /**
         * <p>Lists the email templates present in your Amazon SES account in the current
         * AWS Region.</p> <p>You can execute this operation no more than once per
         * second.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/ListEmailTemplates">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListEmailTemplatesAsync(const Model::ListEmailTemplatesRequest& request, const ListEmailTemplatesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists all of the import jobs.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/ListImportJobs">AWS
         * API Reference</a></p>
         */
        virtual Model::ListImportJobsOutcome ListImportJobs(const Model::ListImportJobsRequest& request) const;

        /**
         * <p>Lists all of the import jobs.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/ListImportJobs">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListImportJobsOutcomeCallable ListImportJobsCallable(const Model::ListImportJobsRequest& request) const;

        /**
         * <p>Lists all of the import jobs.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/ListImportJobs">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListImportJobsAsync(const Model::ListImportJobsRequest& request, const ListImportJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves a list of email addresses that are on the suppression list for your
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/ListSuppressedDestinations">AWS
         * API Reference</a></p>
         */
        virtual Model::ListSuppressedDestinationsOutcome ListSuppressedDestinations(const Model::ListSuppressedDestinationsRequest& request) const;

        /**
         * <p>Retrieves a list of email addresses that are on the suppression list for your
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/ListSuppressedDestinations">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListSuppressedDestinationsOutcomeCallable ListSuppressedDestinationsCallable(const Model::ListSuppressedDestinationsRequest& request) const;

        /**
         * <p>Retrieves a list of email addresses that are on the suppression list for your
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/ListSuppressedDestinations">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListSuppressedDestinationsAsync(const Model::ListSuppressedDestinationsRequest& request, const ListSuppressedDestinationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieve a list of the tags (keys and values) that are associated with a
         * specified resource. A <i>tag</i> is a label that you optionally define and
         * associate with a resource. Each tag consists of a required <i>tag key</i> and an
         * optional associated <i>tag value</i>. A tag key is a general label that acts as
         * a category for more specific tag values. A tag value acts as a descriptor within
         * a tag key.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;

        /**
         * <p>Retrieve a list of the tags (keys and values) that are associated with a
         * specified resource. A <i>tag</i> is a label that you optionally define and
         * associate with a resource. Each tag consists of a required <i>tag key</i> and an
         * optional associated <i>tag value</i>. A tag key is a general label that acts as
         * a category for more specific tag values. A tag value acts as a descriptor within
         * a tag key.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/ListTagsForResource">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const Model::ListTagsForResourceRequest& request) const;

        /**
         * <p>Retrieve a list of the tags (keys and values) that are associated with a
         * specified resource. A <i>tag</i> is a label that you optionally define and
         * associate with a resource. Each tag consists of a required <i>tag key</i> and an
         * optional associated <i>tag value</i>. A tag key is a general label that acts as
         * a category for more specific tag values. A tag value acts as a descriptor within
         * a tag key.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/ListTagsForResource">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListTagsForResourceAsync(const Model::ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Enable or disable the automatic warm-up feature for dedicated IP
         * addresses.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/PutAccountDedicatedIpWarmupAttributes">AWS
         * API Reference</a></p>
         */
        virtual Model::PutAccountDedicatedIpWarmupAttributesOutcome PutAccountDedicatedIpWarmupAttributes(const Model::PutAccountDedicatedIpWarmupAttributesRequest& request) const;

        /**
         * <p>Enable or disable the automatic warm-up feature for dedicated IP
         * addresses.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/PutAccountDedicatedIpWarmupAttributes">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutAccountDedicatedIpWarmupAttributesOutcomeCallable PutAccountDedicatedIpWarmupAttributesCallable(const Model::PutAccountDedicatedIpWarmupAttributesRequest& request) const;

        /**
         * <p>Enable or disable the automatic warm-up feature for dedicated IP
         * addresses.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/PutAccountDedicatedIpWarmupAttributes">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutAccountDedicatedIpWarmupAttributesAsync(const Model::PutAccountDedicatedIpWarmupAttributesRequest& request, const PutAccountDedicatedIpWarmupAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Update your Amazon SES account details.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/PutAccountDetails">AWS
         * API Reference</a></p>
         */
        virtual Model::PutAccountDetailsOutcome PutAccountDetails(const Model::PutAccountDetailsRequest& request) const;

        /**
         * <p>Update your Amazon SES account details.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/PutAccountDetails">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutAccountDetailsOutcomeCallable PutAccountDetailsCallable(const Model::PutAccountDetailsRequest& request) const;

        /**
         * <p>Update your Amazon SES account details.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/PutAccountDetails">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutAccountDetailsAsync(const Model::PutAccountDetailsRequest& request, const PutAccountDetailsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Enable or disable the ability of your account to send email.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/PutAccountSendingAttributes">AWS
         * API Reference</a></p>
         */
        virtual Model::PutAccountSendingAttributesOutcome PutAccountSendingAttributes(const Model::PutAccountSendingAttributesRequest& request) const;

        /**
         * <p>Enable or disable the ability of your account to send email.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/PutAccountSendingAttributes">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutAccountSendingAttributesOutcomeCallable PutAccountSendingAttributesCallable(const Model::PutAccountSendingAttributesRequest& request) const;

        /**
         * <p>Enable or disable the ability of your account to send email.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/PutAccountSendingAttributes">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutAccountSendingAttributesAsync(const Model::PutAccountSendingAttributesRequest& request, const PutAccountSendingAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Change the settings for the account-level suppression list.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/PutAccountSuppressionAttributes">AWS
         * API Reference</a></p>
         */
        virtual Model::PutAccountSuppressionAttributesOutcome PutAccountSuppressionAttributes(const Model::PutAccountSuppressionAttributesRequest& request) const;

        /**
         * <p>Change the settings for the account-level suppression list.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/PutAccountSuppressionAttributes">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutAccountSuppressionAttributesOutcomeCallable PutAccountSuppressionAttributesCallable(const Model::PutAccountSuppressionAttributesRequest& request) const;

        /**
         * <p>Change the settings for the account-level suppression list.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/PutAccountSuppressionAttributes">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutAccountSuppressionAttributesAsync(const Model::PutAccountSuppressionAttributesRequest& request, const PutAccountSuppressionAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Associate a configuration set with a dedicated IP pool. You can use dedicated
         * IP pools to create groups of dedicated IP addresses for sending specific types
         * of email.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/PutConfigurationSetDeliveryOptions">AWS
         * API Reference</a></p>
         */
        virtual Model::PutConfigurationSetDeliveryOptionsOutcome PutConfigurationSetDeliveryOptions(const Model::PutConfigurationSetDeliveryOptionsRequest& request) const;

        /**
         * <p>Associate a configuration set with a dedicated IP pool. You can use dedicated
         * IP pools to create groups of dedicated IP addresses for sending specific types
         * of email.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/PutConfigurationSetDeliveryOptions">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutConfigurationSetDeliveryOptionsOutcomeCallable PutConfigurationSetDeliveryOptionsCallable(const Model::PutConfigurationSetDeliveryOptionsRequest& request) const;

        /**
         * <p>Associate a configuration set with a dedicated IP pool. You can use dedicated
         * IP pools to create groups of dedicated IP addresses for sending specific types
         * of email.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/PutConfigurationSetDeliveryOptions">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutConfigurationSetDeliveryOptionsAsync(const Model::PutConfigurationSetDeliveryOptionsRequest& request, const PutConfigurationSetDeliveryOptionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Enable or disable collection of reputation metrics for emails that you send
         * using a particular configuration set in a specific AWS Region.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/PutConfigurationSetReputationOptions">AWS
         * API Reference</a></p>
         */
        virtual Model::PutConfigurationSetReputationOptionsOutcome PutConfigurationSetReputationOptions(const Model::PutConfigurationSetReputationOptionsRequest& request) const;

        /**
         * <p>Enable or disable collection of reputation metrics for emails that you send
         * using a particular configuration set in a specific AWS Region.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/PutConfigurationSetReputationOptions">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutConfigurationSetReputationOptionsOutcomeCallable PutConfigurationSetReputationOptionsCallable(const Model::PutConfigurationSetReputationOptionsRequest& request) const;

        /**
         * <p>Enable or disable collection of reputation metrics for emails that you send
         * using a particular configuration set in a specific AWS Region.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/PutConfigurationSetReputationOptions">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutConfigurationSetReputationOptionsAsync(const Model::PutConfigurationSetReputationOptionsRequest& request, const PutConfigurationSetReputationOptionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Enable or disable email sending for messages that use a particular
         * configuration set in a specific AWS Region.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/PutConfigurationSetSendingOptions">AWS
         * API Reference</a></p>
         */
        virtual Model::PutConfigurationSetSendingOptionsOutcome PutConfigurationSetSendingOptions(const Model::PutConfigurationSetSendingOptionsRequest& request) const;

        /**
         * <p>Enable or disable email sending for messages that use a particular
         * configuration set in a specific AWS Region.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/PutConfigurationSetSendingOptions">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutConfigurationSetSendingOptionsOutcomeCallable PutConfigurationSetSendingOptionsCallable(const Model::PutConfigurationSetSendingOptionsRequest& request) const;

        /**
         * <p>Enable or disable email sending for messages that use a particular
         * configuration set in a specific AWS Region.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/PutConfigurationSetSendingOptions">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutConfigurationSetSendingOptionsAsync(const Model::PutConfigurationSetSendingOptionsRequest& request, const PutConfigurationSetSendingOptionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Specify the account suppression list preferences for a configuration
         * set.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/PutConfigurationSetSuppressionOptions">AWS
         * API Reference</a></p>
         */
        virtual Model::PutConfigurationSetSuppressionOptionsOutcome PutConfigurationSetSuppressionOptions(const Model::PutConfigurationSetSuppressionOptionsRequest& request) const;

        /**
         * <p>Specify the account suppression list preferences for a configuration
         * set.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/PutConfigurationSetSuppressionOptions">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutConfigurationSetSuppressionOptionsOutcomeCallable PutConfigurationSetSuppressionOptionsCallable(const Model::PutConfigurationSetSuppressionOptionsRequest& request) const;

        /**
         * <p>Specify the account suppression list preferences for a configuration
         * set.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/PutConfigurationSetSuppressionOptions">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutConfigurationSetSuppressionOptionsAsync(const Model::PutConfigurationSetSuppressionOptionsRequest& request, const PutConfigurationSetSuppressionOptionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Specify a custom domain to use for open and click tracking elements in email
         * that you send.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/PutConfigurationSetTrackingOptions">AWS
         * API Reference</a></p>
         */
        virtual Model::PutConfigurationSetTrackingOptionsOutcome PutConfigurationSetTrackingOptions(const Model::PutConfigurationSetTrackingOptionsRequest& request) const;

        /**
         * <p>Specify a custom domain to use for open and click tracking elements in email
         * that you send.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/PutConfigurationSetTrackingOptions">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutConfigurationSetTrackingOptionsOutcomeCallable PutConfigurationSetTrackingOptionsCallable(const Model::PutConfigurationSetTrackingOptionsRequest& request) const;

        /**
         * <p>Specify a custom domain to use for open and click tracking elements in email
         * that you send.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/PutConfigurationSetTrackingOptions">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutConfigurationSetTrackingOptionsAsync(const Model::PutConfigurationSetTrackingOptionsRequest& request, const PutConfigurationSetTrackingOptionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Move a dedicated IP address to an existing dedicated IP pool.</p> 
         * <p>The dedicated IP address that you specify must already exist, and must be
         * associated with your AWS account. </p> <p>The dedicated IP pool you specify must
         * already exist. You can create a new pool by using the
         * <code>CreateDedicatedIpPool</code> operation.</p> <p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/PutDedicatedIpInPool">AWS
         * API Reference</a></p>
         */
        virtual Model::PutDedicatedIpInPoolOutcome PutDedicatedIpInPool(const Model::PutDedicatedIpInPoolRequest& request) const;

        /**
         * <p>Move a dedicated IP address to an existing dedicated IP pool.</p> 
         * <p>The dedicated IP address that you specify must already exist, and must be
         * associated with your AWS account. </p> <p>The dedicated IP pool you specify must
         * already exist. You can create a new pool by using the
         * <code>CreateDedicatedIpPool</code> operation.</p> <p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/PutDedicatedIpInPool">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutDedicatedIpInPoolOutcomeCallable PutDedicatedIpInPoolCallable(const Model::PutDedicatedIpInPoolRequest& request) const;

        /**
         * <p>Move a dedicated IP address to an existing dedicated IP pool.</p> 
         * <p>The dedicated IP address that you specify must already exist, and must be
         * associated with your AWS account. </p> <p>The dedicated IP pool you specify must
         * already exist. You can create a new pool by using the
         * <code>CreateDedicatedIpPool</code> operation.</p> <p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/PutDedicatedIpInPool">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutDedicatedIpInPoolAsync(const Model::PutDedicatedIpInPoolRequest& request, const PutDedicatedIpInPoolResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p/><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/PutDedicatedIpWarmupAttributes">AWS
         * API Reference</a></p>
         */
        virtual Model::PutDedicatedIpWarmupAttributesOutcome PutDedicatedIpWarmupAttributes(const Model::PutDedicatedIpWarmupAttributesRequest& request) const;

        /**
         * <p/><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/PutDedicatedIpWarmupAttributes">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutDedicatedIpWarmupAttributesOutcomeCallable PutDedicatedIpWarmupAttributesCallable(const Model::PutDedicatedIpWarmupAttributesRequest& request) const;

        /**
         * <p/><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/PutDedicatedIpWarmupAttributes">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutDedicatedIpWarmupAttributesAsync(const Model::PutDedicatedIpWarmupAttributesRequest& request, const PutDedicatedIpWarmupAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Enable or disable the Deliverability dashboard. When you enable the
         * Deliverability dashboard, you gain access to reputation, deliverability, and
         * other metrics for the domains that you use to send email. You also gain the
         * ability to perform predictive inbox placement tests.</p> <p>When you use the
         * Deliverability dashboard, you pay a monthly subscription charge, in addition to
         * any other fees that you accrue by using Amazon SES and other AWS services. For
         * more information about the features and cost of a Deliverability dashboard
         * subscription, see <a href="http://aws.amazon.com/ses/pricing/">Amazon SES
         * Pricing</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/PutDeliverabilityDashboardOption">AWS
         * API Reference</a></p>
         */
        virtual Model::PutDeliverabilityDashboardOptionOutcome PutDeliverabilityDashboardOption(const Model::PutDeliverabilityDashboardOptionRequest& request) const;

        /**
         * <p>Enable or disable the Deliverability dashboard. When you enable the
         * Deliverability dashboard, you gain access to reputation, deliverability, and
         * other metrics for the domains that you use to send email. You also gain the
         * ability to perform predictive inbox placement tests.</p> <p>When you use the
         * Deliverability dashboard, you pay a monthly subscription charge, in addition to
         * any other fees that you accrue by using Amazon SES and other AWS services. For
         * more information about the features and cost of a Deliverability dashboard
         * subscription, see <a href="http://aws.amazon.com/ses/pricing/">Amazon SES
         * Pricing</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/PutDeliverabilityDashboardOption">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutDeliverabilityDashboardOptionOutcomeCallable PutDeliverabilityDashboardOptionCallable(const Model::PutDeliverabilityDashboardOptionRequest& request) const;

        /**
         * <p>Enable or disable the Deliverability dashboard. When you enable the
         * Deliverability dashboard, you gain access to reputation, deliverability, and
         * other metrics for the domains that you use to send email. You also gain the
         * ability to perform predictive inbox placement tests.</p> <p>When you use the
         * Deliverability dashboard, you pay a monthly subscription charge, in addition to
         * any other fees that you accrue by using Amazon SES and other AWS services. For
         * more information about the features and cost of a Deliverability dashboard
         * subscription, see <a href="http://aws.amazon.com/ses/pricing/">Amazon SES
         * Pricing</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/PutDeliverabilityDashboardOption">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutDeliverabilityDashboardOptionAsync(const Model::PutDeliverabilityDashboardOptionRequest& request, const PutDeliverabilityDashboardOptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Used to enable or disable DKIM authentication for an email
         * identity.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/PutEmailIdentityDkimAttributes">AWS
         * API Reference</a></p>
         */
        virtual Model::PutEmailIdentityDkimAttributesOutcome PutEmailIdentityDkimAttributes(const Model::PutEmailIdentityDkimAttributesRequest& request) const;

        /**
         * <p>Used to enable or disable DKIM authentication for an email
         * identity.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/PutEmailIdentityDkimAttributes">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutEmailIdentityDkimAttributesOutcomeCallable PutEmailIdentityDkimAttributesCallable(const Model::PutEmailIdentityDkimAttributesRequest& request) const;

        /**
         * <p>Used to enable or disable DKIM authentication for an email
         * identity.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/PutEmailIdentityDkimAttributes">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutEmailIdentityDkimAttributesAsync(const Model::PutEmailIdentityDkimAttributesRequest& request, const PutEmailIdentityDkimAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Used to configure or change the DKIM authentication settings for an email
         * domain identity. You can use this operation to do any of the following:</p> <ul>
         * <li> <p>Update the signing attributes for an identity that uses Bring Your Own
         * DKIM (BYODKIM).</p> </li> <li> <p>Change from using no DKIM authentication to
         * using Easy DKIM.</p> </li> <li> <p>Change from using no DKIM authentication to
         * using BYODKIM.</p> </li> <li> <p>Change from using Easy DKIM to using
         * BYODKIM.</p> </li> <li> <p>Change from using BYODKIM to using Easy DKIM.</p>
         * </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/PutEmailIdentityDkimSigningAttributes">AWS
         * API Reference</a></p>
         */
        virtual Model::PutEmailIdentityDkimSigningAttributesOutcome PutEmailIdentityDkimSigningAttributes(const Model::PutEmailIdentityDkimSigningAttributesRequest& request) const;

        /**
         * <p>Used to configure or change the DKIM authentication settings for an email
         * domain identity. You can use this operation to do any of the following:</p> <ul>
         * <li> <p>Update the signing attributes for an identity that uses Bring Your Own
         * DKIM (BYODKIM).</p> </li> <li> <p>Change from using no DKIM authentication to
         * using Easy DKIM.</p> </li> <li> <p>Change from using no DKIM authentication to
         * using BYODKIM.</p> </li> <li> <p>Change from using Easy DKIM to using
         * BYODKIM.</p> </li> <li> <p>Change from using BYODKIM to using Easy DKIM.</p>
         * </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/PutEmailIdentityDkimSigningAttributes">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutEmailIdentityDkimSigningAttributesOutcomeCallable PutEmailIdentityDkimSigningAttributesCallable(const Model::PutEmailIdentityDkimSigningAttributesRequest& request) const;

        /**
         * <p>Used to configure or change the DKIM authentication settings for an email
         * domain identity. You can use this operation to do any of the following:</p> <ul>
         * <li> <p>Update the signing attributes for an identity that uses Bring Your Own
         * DKIM (BYODKIM).</p> </li> <li> <p>Change from using no DKIM authentication to
         * using Easy DKIM.</p> </li> <li> <p>Change from using no DKIM authentication to
         * using BYODKIM.</p> </li> <li> <p>Change from using Easy DKIM to using
         * BYODKIM.</p> </li> <li> <p>Change from using BYODKIM to using Easy DKIM.</p>
         * </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/PutEmailIdentityDkimSigningAttributes">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutEmailIdentityDkimSigningAttributesAsync(const Model::PutEmailIdentityDkimSigningAttributesRequest& request, const PutEmailIdentityDkimSigningAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Used to enable or disable feedback forwarding for an identity. This setting
         * determines what happens when an identity is used to send an email that results
         * in a bounce or complaint event.</p> <p>If the value is <code>true</code>, you
         * receive email notifications when bounce or complaint events occur. These
         * notifications are sent to the address that you specified in the
         * <code>Return-Path</code> header of the original email.</p> <p>You're required to
         * have a method of tracking bounces and complaints. If you haven't set up another
         * mechanism for receiving bounce or complaint notifications (for example, by
         * setting up an event destination), you receive an email notification when these
         * events occur (even if this setting is disabled).</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/PutEmailIdentityFeedbackAttributes">AWS
         * API Reference</a></p>
         */
        virtual Model::PutEmailIdentityFeedbackAttributesOutcome PutEmailIdentityFeedbackAttributes(const Model::PutEmailIdentityFeedbackAttributesRequest& request) const;

        /**
         * <p>Used to enable or disable feedback forwarding for an identity. This setting
         * determines what happens when an identity is used to send an email that results
         * in a bounce or complaint event.</p> <p>If the value is <code>true</code>, you
         * receive email notifications when bounce or complaint events occur. These
         * notifications are sent to the address that you specified in the
         * <code>Return-Path</code> header of the original email.</p> <p>You're required to
         * have a method of tracking bounces and complaints. If you haven't set up another
         * mechanism for receiving bounce or complaint notifications (for example, by
         * setting up an event destination), you receive an email notification when these
         * events occur (even if this setting is disabled).</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/PutEmailIdentityFeedbackAttributes">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutEmailIdentityFeedbackAttributesOutcomeCallable PutEmailIdentityFeedbackAttributesCallable(const Model::PutEmailIdentityFeedbackAttributesRequest& request) const;

        /**
         * <p>Used to enable or disable feedback forwarding for an identity. This setting
         * determines what happens when an identity is used to send an email that results
         * in a bounce or complaint event.</p> <p>If the value is <code>true</code>, you
         * receive email notifications when bounce or complaint events occur. These
         * notifications are sent to the address that you specified in the
         * <code>Return-Path</code> header of the original email.</p> <p>You're required to
         * have a method of tracking bounces and complaints. If you haven't set up another
         * mechanism for receiving bounce or complaint notifications (for example, by
         * setting up an event destination), you receive an email notification when these
         * events occur (even if this setting is disabled).</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/PutEmailIdentityFeedbackAttributes">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutEmailIdentityFeedbackAttributesAsync(const Model::PutEmailIdentityFeedbackAttributesRequest& request, const PutEmailIdentityFeedbackAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Used to enable or disable the custom Mail-From domain configuration for an
         * email identity.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/PutEmailIdentityMailFromAttributes">AWS
         * API Reference</a></p>
         */
        virtual Model::PutEmailIdentityMailFromAttributesOutcome PutEmailIdentityMailFromAttributes(const Model::PutEmailIdentityMailFromAttributesRequest& request) const;

        /**
         * <p>Used to enable or disable the custom Mail-From domain configuration for an
         * email identity.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/PutEmailIdentityMailFromAttributes">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutEmailIdentityMailFromAttributesOutcomeCallable PutEmailIdentityMailFromAttributesCallable(const Model::PutEmailIdentityMailFromAttributesRequest& request) const;

        /**
         * <p>Used to enable or disable the custom Mail-From domain configuration for an
         * email identity.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/PutEmailIdentityMailFromAttributes">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutEmailIdentityMailFromAttributesAsync(const Model::PutEmailIdentityMailFromAttributesRequest& request, const PutEmailIdentityMailFromAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Adds an email address to the suppression list for your account.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/PutSuppressedDestination">AWS
         * API Reference</a></p>
         */
        virtual Model::PutSuppressedDestinationOutcome PutSuppressedDestination(const Model::PutSuppressedDestinationRequest& request) const;

        /**
         * <p>Adds an email address to the suppression list for your account.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/PutSuppressedDestination">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutSuppressedDestinationOutcomeCallable PutSuppressedDestinationCallable(const Model::PutSuppressedDestinationRequest& request) const;

        /**
         * <p>Adds an email address to the suppression list for your account.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/PutSuppressedDestination">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutSuppressedDestinationAsync(const Model::PutSuppressedDestinationRequest& request, const PutSuppressedDestinationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Composes an email message to multiple destinations.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/SendBulkEmail">AWS
         * API Reference</a></p>
         */
        virtual Model::SendBulkEmailOutcome SendBulkEmail(const Model::SendBulkEmailRequest& request) const;

        /**
         * <p>Composes an email message to multiple destinations.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/SendBulkEmail">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::SendBulkEmailOutcomeCallable SendBulkEmailCallable(const Model::SendBulkEmailRequest& request) const;

        /**
         * <p>Composes an email message to multiple destinations.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/SendBulkEmail">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void SendBulkEmailAsync(const Model::SendBulkEmailRequest& request, const SendBulkEmailResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Adds an email address to the list of identities for your Amazon SES account
         * in the current AWS Region and attempts to verify it. As a result of executing
         * this operation, a customized verification email is sent to the specified
         * address.</p> <p>To use this operation, you must first create a custom
         * verification email template. For more information about creating and using
         * custom verification email templates, see <a
         * href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/send-email-verify-address-custom.html">Using
         * Custom Verification Email Templates</a> in the <i>Amazon SES Developer
         * Guide</i>.</p> <p>You can execute this operation no more than once per
         * second.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/SendCustomVerificationEmail">AWS
         * API Reference</a></p>
         */
        virtual Model::SendCustomVerificationEmailOutcome SendCustomVerificationEmail(const Model::SendCustomVerificationEmailRequest& request) const;

        /**
         * <p>Adds an email address to the list of identities for your Amazon SES account
         * in the current AWS Region and attempts to verify it. As a result of executing
         * this operation, a customized verification email is sent to the specified
         * address.</p> <p>To use this operation, you must first create a custom
         * verification email template. For more information about creating and using
         * custom verification email templates, see <a
         * href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/send-email-verify-address-custom.html">Using
         * Custom Verification Email Templates</a> in the <i>Amazon SES Developer
         * Guide</i>.</p> <p>You can execute this operation no more than once per
         * second.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/SendCustomVerificationEmail">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::SendCustomVerificationEmailOutcomeCallable SendCustomVerificationEmailCallable(const Model::SendCustomVerificationEmailRequest& request) const;

        /**
         * <p>Adds an email address to the list of identities for your Amazon SES account
         * in the current AWS Region and attempts to verify it. As a result of executing
         * this operation, a customized verification email is sent to the specified
         * address.</p> <p>To use this operation, you must first create a custom
         * verification email template. For more information about creating and using
         * custom verification email templates, see <a
         * href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/send-email-verify-address-custom.html">Using
         * Custom Verification Email Templates</a> in the <i>Amazon SES Developer
         * Guide</i>.</p> <p>You can execute this operation no more than once per
         * second.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/SendCustomVerificationEmail">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void SendCustomVerificationEmailAsync(const Model::SendCustomVerificationEmailRequest& request, const SendCustomVerificationEmailResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Sends an email message. You can use the Amazon SES API v2 to send two types
         * of messages:</p> <ul> <li> <p> <b>Simple</b> – A standard email message. When
         * you create this type of message, you specify the sender, the recipient, and the
         * message body, and Amazon SES assembles the message for you.</p> </li> <li> <p>
         * <b>Raw</b> – A raw, MIME-formatted email message. When you send this type of
         * email, you have to specify all of the message headers, as well as the message
         * body. You can use this message type to send messages that contain attachments.
         * The message that you specify has to be a valid MIME message.</p> </li> <li> <p>
         * <b>Templated</b> – A message that contains personalization tags. When you send
         * this type of email, Amazon SES API v2 automatically replaces the tags with
         * values that you specify.</p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/SendEmail">AWS API
         * Reference</a></p>
         */
        virtual Model::SendEmailOutcome SendEmail(const Model::SendEmailRequest& request) const;

        /**
         * <p>Sends an email message. You can use the Amazon SES API v2 to send two types
         * of messages:</p> <ul> <li> <p> <b>Simple</b> – A standard email message. When
         * you create this type of message, you specify the sender, the recipient, and the
         * message body, and Amazon SES assembles the message for you.</p> </li> <li> <p>
         * <b>Raw</b> – A raw, MIME-formatted email message. When you send this type of
         * email, you have to specify all of the message headers, as well as the message
         * body. You can use this message type to send messages that contain attachments.
         * The message that you specify has to be a valid MIME message.</p> </li> <li> <p>
         * <b>Templated</b> – A message that contains personalization tags. When you send
         * this type of email, Amazon SES API v2 automatically replaces the tags with
         * values that you specify.</p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/SendEmail">AWS API
         * Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::SendEmailOutcomeCallable SendEmailCallable(const Model::SendEmailRequest& request) const;

        /**
         * <p>Sends an email message. You can use the Amazon SES API v2 to send two types
         * of messages:</p> <ul> <li> <p> <b>Simple</b> – A standard email message. When
         * you create this type of message, you specify the sender, the recipient, and the
         * message body, and Amazon SES assembles the message for you.</p> </li> <li> <p>
         * <b>Raw</b> – A raw, MIME-formatted email message. When you send this type of
         * email, you have to specify all of the message headers, as well as the message
         * body. You can use this message type to send messages that contain attachments.
         * The message that you specify has to be a valid MIME message.</p> </li> <li> <p>
         * <b>Templated</b> – A message that contains personalization tags. When you send
         * this type of email, Amazon SES API v2 automatically replaces the tags with
         * values that you specify.</p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/SendEmail">AWS API
         * Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void SendEmailAsync(const Model::SendEmailRequest& request, const SendEmailResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Add one or more tags (keys and values) to a specified resource. A
         * <i>tag</i> is a label that you optionally define and associate with a resource.
         * Tags can help you categorize and manage resources in different ways, such as by
         * purpose, owner, environment, or other criteria. A resource can have as many as
         * 50 tags.</p> <p>Each tag consists of a required <i>tag key</i> and an
         * associated <i>tag value</i>, both of which you define. A tag key is a general
         * label that acts as a category for more specific tag values. A tag value acts as
         * a descriptor within a tag key.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/TagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;

        /**
         * <p>Add one or more tags (keys and values) to a specified resource. A
         * <i>tag</i> is a label that you optionally define and associate with a resource.
         * Tags can help you categorize and manage resources in different ways, such as by
         * purpose, owner, environment, or other criteria. A resource can have as many as
         * 50 tags.</p> <p>Each tag consists of a required <i>tag key</i> and an
         * associated <i>tag value</i>, both of which you define. A tag key is a general
         * label that acts as a category for more specific tag values. A tag value acts as
         * a descriptor within a tag key.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/TagResource">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::TagResourceOutcomeCallable TagResourceCallable(const Model::TagResourceRequest& request) const;

        /**
         * <p>Add one or more tags (keys and values) to a specified resource. A
         * <i>tag</i> is a label that you optionally define and associate with a resource.
         * Tags can help you categorize and manage resources in different ways, such as by
         * purpose, owner, environment, or other criteria. A resource can have as many as
         * 50 tags.</p> <p>Each tag consists of a required <i>tag key</i> and an
         * associated <i>tag value</i>, both of which you define. A tag key is a general
         * label that acts as a category for more specific tag values. A tag value acts as
         * a descriptor within a tag key.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/TagResource">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void TagResourceAsync(const Model::TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a preview of the MIME content of an email when provided with a
         * template and a set of replacement data.</p> <p>You can execute this operation no
         * more than once per second.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/TestRenderEmailTemplate">AWS
         * API Reference</a></p>
         */
        virtual Model::TestRenderEmailTemplateOutcome TestRenderEmailTemplate(const Model::TestRenderEmailTemplateRequest& request) const;

        /**
         * <p>Creates a preview of the MIME content of an email when provided with a
         * template and a set of replacement data.</p> <p>You can execute this operation no
         * more than once per second.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/TestRenderEmailTemplate">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::TestRenderEmailTemplateOutcomeCallable TestRenderEmailTemplateCallable(const Model::TestRenderEmailTemplateRequest& request) const;

        /**
         * <p>Creates a preview of the MIME content of an email when provided with a
         * template and a set of replacement data.</p> <p>You can execute this operation no
         * more than once per second.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/TestRenderEmailTemplate">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void TestRenderEmailTemplateAsync(const Model::TestRenderEmailTemplateRequest& request, const TestRenderEmailTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Remove one or more tags (keys and values) from a specified
         * resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;

        /**
         * <p>Remove one or more tags (keys and values) from a specified
         * resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/UntagResource">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UntagResourceOutcomeCallable UntagResourceCallable(const Model::UntagResourceRequest& request) const;

        /**
         * <p>Remove one or more tags (keys and values) from a specified
         * resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/UntagResource">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UntagResourceAsync(const Model::UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Update the configuration of an event destination for a configuration set.</p>
         * <p> <i>Events</i> include message sends, deliveries, opens, clicks, bounces, and
         * complaints. <i>Event destinations</i> are places that you can send information
         * about these events to. For example, you can send event data to Amazon SNS to
         * receive notifications when you receive bounces or complaints, or you can use
         * Amazon Kinesis Data Firehose to stream data to Amazon S3 for long-term
         * storage.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/UpdateConfigurationSetEventDestination">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateConfigurationSetEventDestinationOutcome UpdateConfigurationSetEventDestination(const Model::UpdateConfigurationSetEventDestinationRequest& request) const;

        /**
         * <p>Update the configuration of an event destination for a configuration set.</p>
         * <p> <i>Events</i> include message sends, deliveries, opens, clicks, bounces, and
         * complaints. <i>Event destinations</i> are places that you can send information
         * about these events to. For example, you can send event data to Amazon SNS to
         * receive notifications when you receive bounces or complaints, or you can use
         * Amazon Kinesis Data Firehose to stream data to Amazon S3 for long-term
         * storage.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/UpdateConfigurationSetEventDestination">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateConfigurationSetEventDestinationOutcomeCallable UpdateConfigurationSetEventDestinationCallable(const Model::UpdateConfigurationSetEventDestinationRequest& request) const;

        /**
         * <p>Update the configuration of an event destination for a configuration set.</p>
         * <p> <i>Events</i> include message sends, deliveries, opens, clicks, bounces, and
         * complaints. <i>Event destinations</i> are places that you can send information
         * about these events to. For example, you can send event data to Amazon SNS to
         * receive notifications when you receive bounces or complaints, or you can use
         * Amazon Kinesis Data Firehose to stream data to Amazon S3 for long-term
         * storage.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/UpdateConfigurationSetEventDestination">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateConfigurationSetEventDestinationAsync(const Model::UpdateConfigurationSetEventDestinationRequest& request, const UpdateConfigurationSetEventDestinationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates a contact's preferences for a list. It is not necessary to specify
         * all existing topic preferences in the TopicPreferences object, just the ones
         * that need updating.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/UpdateContact">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateContactOutcome UpdateContact(const Model::UpdateContactRequest& request) const;

        /**
         * <p>Updates a contact's preferences for a list. It is not necessary to specify
         * all existing topic preferences in the TopicPreferences object, just the ones
         * that need updating.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/UpdateContact">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateContactOutcomeCallable UpdateContactCallable(const Model::UpdateContactRequest& request) const;

        /**
         * <p>Updates a contact's preferences for a list. It is not necessary to specify
         * all existing topic preferences in the TopicPreferences object, just the ones
         * that need updating.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/UpdateContact">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateContactAsync(const Model::UpdateContactRequest& request, const UpdateContactResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates contact list metadata. This operation does a complete
         * replacement.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/UpdateContactList">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateContactListOutcome UpdateContactList(const Model::UpdateContactListRequest& request) const;

        /**
         * <p>Updates contact list metadata. This operation does a complete
         * replacement.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/UpdateContactList">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateContactListOutcomeCallable UpdateContactListCallable(const Model::UpdateContactListRequest& request) const;

        /**
         * <p>Updates contact list metadata. This operation does a complete
         * replacement.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/UpdateContactList">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateContactListAsync(const Model::UpdateContactListRequest& request, const UpdateContactListResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates an existing custom verification email template.</p> <p>For more
         * information about custom verification email templates, see <a
         * href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/send-email-verify-address-custom.html">Using
         * Custom Verification Email Templates</a> in the <i>Amazon SES Developer
         * Guide</i>.</p> <p>You can execute this operation no more than once per
         * second.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/UpdateCustomVerificationEmailTemplate">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateCustomVerificationEmailTemplateOutcome UpdateCustomVerificationEmailTemplate(const Model::UpdateCustomVerificationEmailTemplateRequest& request) const;

        /**
         * <p>Updates an existing custom verification email template.</p> <p>For more
         * information about custom verification email templates, see <a
         * href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/send-email-verify-address-custom.html">Using
         * Custom Verification Email Templates</a> in the <i>Amazon SES Developer
         * Guide</i>.</p> <p>You can execute this operation no more than once per
         * second.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/UpdateCustomVerificationEmailTemplate">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateCustomVerificationEmailTemplateOutcomeCallable UpdateCustomVerificationEmailTemplateCallable(const Model::UpdateCustomVerificationEmailTemplateRequest& request) const;

        /**
         * <p>Updates an existing custom verification email template.</p> <p>For more
         * information about custom verification email templates, see <a
         * href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/send-email-verify-address-custom.html">Using
         * Custom Verification Email Templates</a> in the <i>Amazon SES Developer
         * Guide</i>.</p> <p>You can execute this operation no more than once per
         * second.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/UpdateCustomVerificationEmailTemplate">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateCustomVerificationEmailTemplateAsync(const Model::UpdateCustomVerificationEmailTemplateRequest& request, const UpdateCustomVerificationEmailTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates the specified sending authorization policy for the given identity (an
         * email address or a domain). This API returns successfully even if a policy with
         * the specified name does not exist.</p>  <p>This API is for the identity
         * owner only. If you have not verified the identity, this API will return an
         * error.</p>  <p>Sending authorization is a feature that enables an
         * identity owner to authorize other senders to use its identities. For information
         * about using sending authorization, see the <a
         * href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/sending-authorization.html">Amazon
         * SES Developer Guide</a>.</p> <p>You can execute this operation no more than once
         * per second.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/UpdateEmailIdentityPolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateEmailIdentityPolicyOutcome UpdateEmailIdentityPolicy(const Model::UpdateEmailIdentityPolicyRequest& request) const;

        /**
         * <p>Updates the specified sending authorization policy for the given identity (an
         * email address or a domain). This API returns successfully even if a policy with
         * the specified name does not exist.</p>  <p>This API is for the identity
         * owner only. If you have not verified the identity, this API will return an
         * error.</p>  <p>Sending authorization is a feature that enables an
         * identity owner to authorize other senders to use its identities. For information
         * about using sending authorization, see the <a
         * href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/sending-authorization.html">Amazon
         * SES Developer Guide</a>.</p> <p>You can execute this operation no more than once
         * per second.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/UpdateEmailIdentityPolicy">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateEmailIdentityPolicyOutcomeCallable UpdateEmailIdentityPolicyCallable(const Model::UpdateEmailIdentityPolicyRequest& request) const;

        /**
         * <p>Updates the specified sending authorization policy for the given identity (an
         * email address or a domain). This API returns successfully even if a policy with
         * the specified name does not exist.</p>  <p>This API is for the identity
         * owner only. If you have not verified the identity, this API will return an
         * error.</p>  <p>Sending authorization is a feature that enables an
         * identity owner to authorize other senders to use its identities. For information
         * about using sending authorization, see the <a
         * href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/sending-authorization.html">Amazon
         * SES Developer Guide</a>.</p> <p>You can execute this operation no more than once
         * per second.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/UpdateEmailIdentityPolicy">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateEmailIdentityPolicyAsync(const Model::UpdateEmailIdentityPolicyRequest& request, const UpdateEmailIdentityPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates an email template. Email templates enable you to send personalized
         * email to one or more destinations in a single API operation. For more
         * information, see the <a
         * href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/send-personalized-email-api.html">Amazon
         * SES Developer Guide</a>.</p> <p>You can execute this operation no more than once
         * per second.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/UpdateEmailTemplate">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateEmailTemplateOutcome UpdateEmailTemplate(const Model::UpdateEmailTemplateRequest& request) const;

        /**
         * <p>Updates an email template. Email templates enable you to send personalized
         * email to one or more destinations in a single API operation. For more
         * information, see the <a
         * href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/send-personalized-email-api.html">Amazon
         * SES Developer Guide</a>.</p> <p>You can execute this operation no more than once
         * per second.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/UpdateEmailTemplate">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateEmailTemplateOutcomeCallable UpdateEmailTemplateCallable(const Model::UpdateEmailTemplateRequest& request) const;

        /**
         * <p>Updates an email template. Email templates enable you to send personalized
         * email to one or more destinations in a single API operation. For more
         * information, see the <a
         * href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/send-personalized-email-api.html">Amazon
         * SES Developer Guide</a>.</p> <p>You can execute this operation no more than once
         * per second.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/UpdateEmailTemplate">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateEmailTemplateAsync(const Model::UpdateEmailTemplateRequest& request, const UpdateEmailTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


      void OverrideEndpoint(const Aws::String& endpoint);
    private:
      void init(const Aws::Client::ClientConfiguration& clientConfiguration);
        void CreateConfigurationSetAsyncHelper(const Model::CreateConfigurationSetRequest& request, const CreateConfigurationSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateConfigurationSetEventDestinationAsyncHelper(const Model::CreateConfigurationSetEventDestinationRequest& request, const CreateConfigurationSetEventDestinationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateContactAsyncHelper(const Model::CreateContactRequest& request, const CreateContactResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateContactListAsyncHelper(const Model::CreateContactListRequest& request, const CreateContactListResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateCustomVerificationEmailTemplateAsyncHelper(const Model::CreateCustomVerificationEmailTemplateRequest& request, const CreateCustomVerificationEmailTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateDedicatedIpPoolAsyncHelper(const Model::CreateDedicatedIpPoolRequest& request, const CreateDedicatedIpPoolResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateDeliverabilityTestReportAsyncHelper(const Model::CreateDeliverabilityTestReportRequest& request, const CreateDeliverabilityTestReportResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateEmailIdentityAsyncHelper(const Model::CreateEmailIdentityRequest& request, const CreateEmailIdentityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateEmailIdentityPolicyAsyncHelper(const Model::CreateEmailIdentityPolicyRequest& request, const CreateEmailIdentityPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateEmailTemplateAsyncHelper(const Model::CreateEmailTemplateRequest& request, const CreateEmailTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateImportJobAsyncHelper(const Model::CreateImportJobRequest& request, const CreateImportJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteConfigurationSetAsyncHelper(const Model::DeleteConfigurationSetRequest& request, const DeleteConfigurationSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteConfigurationSetEventDestinationAsyncHelper(const Model::DeleteConfigurationSetEventDestinationRequest& request, const DeleteConfigurationSetEventDestinationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteContactAsyncHelper(const Model::DeleteContactRequest& request, const DeleteContactResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteContactListAsyncHelper(const Model::DeleteContactListRequest& request, const DeleteContactListResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteCustomVerificationEmailTemplateAsyncHelper(const Model::DeleteCustomVerificationEmailTemplateRequest& request, const DeleteCustomVerificationEmailTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteDedicatedIpPoolAsyncHelper(const Model::DeleteDedicatedIpPoolRequest& request, const DeleteDedicatedIpPoolResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteEmailIdentityAsyncHelper(const Model::DeleteEmailIdentityRequest& request, const DeleteEmailIdentityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteEmailIdentityPolicyAsyncHelper(const Model::DeleteEmailIdentityPolicyRequest& request, const DeleteEmailIdentityPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteEmailTemplateAsyncHelper(const Model::DeleteEmailTemplateRequest& request, const DeleteEmailTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteSuppressedDestinationAsyncHelper(const Model::DeleteSuppressedDestinationRequest& request, const DeleteSuppressedDestinationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetAccountAsyncHelper(const Model::GetAccountRequest& request, const GetAccountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetBlacklistReportsAsyncHelper(const Model::GetBlacklistReportsRequest& request, const GetBlacklistReportsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetConfigurationSetAsyncHelper(const Model::GetConfigurationSetRequest& request, const GetConfigurationSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetConfigurationSetEventDestinationsAsyncHelper(const Model::GetConfigurationSetEventDestinationsRequest& request, const GetConfigurationSetEventDestinationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetContactAsyncHelper(const Model::GetContactRequest& request, const GetContactResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetContactListAsyncHelper(const Model::GetContactListRequest& request, const GetContactListResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetCustomVerificationEmailTemplateAsyncHelper(const Model::GetCustomVerificationEmailTemplateRequest& request, const GetCustomVerificationEmailTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetDedicatedIpAsyncHelper(const Model::GetDedicatedIpRequest& request, const GetDedicatedIpResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetDedicatedIpsAsyncHelper(const Model::GetDedicatedIpsRequest& request, const GetDedicatedIpsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetDeliverabilityDashboardOptionsAsyncHelper(const Model::GetDeliverabilityDashboardOptionsRequest& request, const GetDeliverabilityDashboardOptionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetDeliverabilityTestReportAsyncHelper(const Model::GetDeliverabilityTestReportRequest& request, const GetDeliverabilityTestReportResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetDomainDeliverabilityCampaignAsyncHelper(const Model::GetDomainDeliverabilityCampaignRequest& request, const GetDomainDeliverabilityCampaignResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetDomainStatisticsReportAsyncHelper(const Model::GetDomainStatisticsReportRequest& request, const GetDomainStatisticsReportResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetEmailIdentityAsyncHelper(const Model::GetEmailIdentityRequest& request, const GetEmailIdentityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetEmailIdentityPoliciesAsyncHelper(const Model::GetEmailIdentityPoliciesRequest& request, const GetEmailIdentityPoliciesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetEmailTemplateAsyncHelper(const Model::GetEmailTemplateRequest& request, const GetEmailTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetImportJobAsyncHelper(const Model::GetImportJobRequest& request, const GetImportJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetSuppressedDestinationAsyncHelper(const Model::GetSuppressedDestinationRequest& request, const GetSuppressedDestinationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListConfigurationSetsAsyncHelper(const Model::ListConfigurationSetsRequest& request, const ListConfigurationSetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListContactListsAsyncHelper(const Model::ListContactListsRequest& request, const ListContactListsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListContactsAsyncHelper(const Model::ListContactsRequest& request, const ListContactsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListCustomVerificationEmailTemplatesAsyncHelper(const Model::ListCustomVerificationEmailTemplatesRequest& request, const ListCustomVerificationEmailTemplatesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListDedicatedIpPoolsAsyncHelper(const Model::ListDedicatedIpPoolsRequest& request, const ListDedicatedIpPoolsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListDeliverabilityTestReportsAsyncHelper(const Model::ListDeliverabilityTestReportsRequest& request, const ListDeliverabilityTestReportsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListDomainDeliverabilityCampaignsAsyncHelper(const Model::ListDomainDeliverabilityCampaignsRequest& request, const ListDomainDeliverabilityCampaignsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListEmailIdentitiesAsyncHelper(const Model::ListEmailIdentitiesRequest& request, const ListEmailIdentitiesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListEmailTemplatesAsyncHelper(const Model::ListEmailTemplatesRequest& request, const ListEmailTemplatesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListImportJobsAsyncHelper(const Model::ListImportJobsRequest& request, const ListImportJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListSuppressedDestinationsAsyncHelper(const Model::ListSuppressedDestinationsRequest& request, const ListSuppressedDestinationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListTagsForResourceAsyncHelper(const Model::ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void PutAccountDedicatedIpWarmupAttributesAsyncHelper(const Model::PutAccountDedicatedIpWarmupAttributesRequest& request, const PutAccountDedicatedIpWarmupAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void PutAccountDetailsAsyncHelper(const Model::PutAccountDetailsRequest& request, const PutAccountDetailsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void PutAccountSendingAttributesAsyncHelper(const Model::PutAccountSendingAttributesRequest& request, const PutAccountSendingAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void PutAccountSuppressionAttributesAsyncHelper(const Model::PutAccountSuppressionAttributesRequest& request, const PutAccountSuppressionAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void PutConfigurationSetDeliveryOptionsAsyncHelper(const Model::PutConfigurationSetDeliveryOptionsRequest& request, const PutConfigurationSetDeliveryOptionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void PutConfigurationSetReputationOptionsAsyncHelper(const Model::PutConfigurationSetReputationOptionsRequest& request, const PutConfigurationSetReputationOptionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void PutConfigurationSetSendingOptionsAsyncHelper(const Model::PutConfigurationSetSendingOptionsRequest& request, const PutConfigurationSetSendingOptionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void PutConfigurationSetSuppressionOptionsAsyncHelper(const Model::PutConfigurationSetSuppressionOptionsRequest& request, const PutConfigurationSetSuppressionOptionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void PutConfigurationSetTrackingOptionsAsyncHelper(const Model::PutConfigurationSetTrackingOptionsRequest& request, const PutConfigurationSetTrackingOptionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void PutDedicatedIpInPoolAsyncHelper(const Model::PutDedicatedIpInPoolRequest& request, const PutDedicatedIpInPoolResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void PutDedicatedIpWarmupAttributesAsyncHelper(const Model::PutDedicatedIpWarmupAttributesRequest& request, const PutDedicatedIpWarmupAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void PutDeliverabilityDashboardOptionAsyncHelper(const Model::PutDeliverabilityDashboardOptionRequest& request, const PutDeliverabilityDashboardOptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void PutEmailIdentityDkimAttributesAsyncHelper(const Model::PutEmailIdentityDkimAttributesRequest& request, const PutEmailIdentityDkimAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void PutEmailIdentityDkimSigningAttributesAsyncHelper(const Model::PutEmailIdentityDkimSigningAttributesRequest& request, const PutEmailIdentityDkimSigningAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void PutEmailIdentityFeedbackAttributesAsyncHelper(const Model::PutEmailIdentityFeedbackAttributesRequest& request, const PutEmailIdentityFeedbackAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void PutEmailIdentityMailFromAttributesAsyncHelper(const Model::PutEmailIdentityMailFromAttributesRequest& request, const PutEmailIdentityMailFromAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void PutSuppressedDestinationAsyncHelper(const Model::PutSuppressedDestinationRequest& request, const PutSuppressedDestinationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void SendBulkEmailAsyncHelper(const Model::SendBulkEmailRequest& request, const SendBulkEmailResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void SendCustomVerificationEmailAsyncHelper(const Model::SendCustomVerificationEmailRequest& request, const SendCustomVerificationEmailResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void SendEmailAsyncHelper(const Model::SendEmailRequest& request, const SendEmailResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void TagResourceAsyncHelper(const Model::TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void TestRenderEmailTemplateAsyncHelper(const Model::TestRenderEmailTemplateRequest& request, const TestRenderEmailTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UntagResourceAsyncHelper(const Model::UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateConfigurationSetEventDestinationAsyncHelper(const Model::UpdateConfigurationSetEventDestinationRequest& request, const UpdateConfigurationSetEventDestinationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateContactAsyncHelper(const Model::UpdateContactRequest& request, const UpdateContactResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateContactListAsyncHelper(const Model::UpdateContactListRequest& request, const UpdateContactListResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateCustomVerificationEmailTemplateAsyncHelper(const Model::UpdateCustomVerificationEmailTemplateRequest& request, const UpdateCustomVerificationEmailTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateEmailIdentityPolicyAsyncHelper(const Model::UpdateEmailIdentityPolicyRequest& request, const UpdateEmailIdentityPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateEmailTemplateAsyncHelper(const Model::UpdateEmailTemplateRequest& request, const UpdateEmailTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;

      Aws::String m_uri;
      Aws::String m_configScheme;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
  };

} // namespace SESV2
} // namespace Aws
