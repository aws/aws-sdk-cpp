/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#define BatchGetMetricDataAsync(...)  SubmitAsync(&SESV2Client::BatchGetMetricData, __VA_ARGS__)
#define BatchGetMetricDataCallable(REQUEST)  SubmitCallable(&SESV2Client::BatchGetMetricData, REQUEST)

#define CreateConfigurationSetAsync(...)  SubmitAsync(&SESV2Client::CreateConfigurationSet, __VA_ARGS__)
#define CreateConfigurationSetCallable(REQUEST)  SubmitCallable(&SESV2Client::CreateConfigurationSet, REQUEST)

#define CreateConfigurationSetEventDestinationAsync(...)  SubmitAsync(&SESV2Client::CreateConfigurationSetEventDestination, __VA_ARGS__)
#define CreateConfigurationSetEventDestinationCallable(REQUEST)  SubmitCallable(&SESV2Client::CreateConfigurationSetEventDestination, REQUEST)

#define CreateContactAsync(...)  SubmitAsync(&SESV2Client::CreateContact, __VA_ARGS__)
#define CreateContactCallable(REQUEST)  SubmitCallable(&SESV2Client::CreateContact, REQUEST)

#define CreateContactListAsync(...)  SubmitAsync(&SESV2Client::CreateContactList, __VA_ARGS__)
#define CreateContactListCallable(REQUEST)  SubmitCallable(&SESV2Client::CreateContactList, REQUEST)

#define CreateCustomVerificationEmailTemplateAsync(...)  SubmitAsync(&SESV2Client::CreateCustomVerificationEmailTemplate, __VA_ARGS__)
#define CreateCustomVerificationEmailTemplateCallable(REQUEST)  SubmitCallable(&SESV2Client::CreateCustomVerificationEmailTemplate, REQUEST)

#define CreateDedicatedIpPoolAsync(...)  SubmitAsync(&SESV2Client::CreateDedicatedIpPool, __VA_ARGS__)
#define CreateDedicatedIpPoolCallable(REQUEST)  SubmitCallable(&SESV2Client::CreateDedicatedIpPool, REQUEST)

#define CreateDeliverabilityTestReportAsync(...)  SubmitAsync(&SESV2Client::CreateDeliverabilityTestReport, __VA_ARGS__)
#define CreateDeliverabilityTestReportCallable(REQUEST)  SubmitCallable(&SESV2Client::CreateDeliverabilityTestReport, REQUEST)

#define CreateEmailIdentityAsync(...)  SubmitAsync(&SESV2Client::CreateEmailIdentity, __VA_ARGS__)
#define CreateEmailIdentityCallable(REQUEST)  SubmitCallable(&SESV2Client::CreateEmailIdentity, REQUEST)

#define CreateEmailIdentityPolicyAsync(...)  SubmitAsync(&SESV2Client::CreateEmailIdentityPolicy, __VA_ARGS__)
#define CreateEmailIdentityPolicyCallable(REQUEST)  SubmitCallable(&SESV2Client::CreateEmailIdentityPolicy, REQUEST)

#define CreateEmailTemplateAsync(...)  SubmitAsync(&SESV2Client::CreateEmailTemplate, __VA_ARGS__)
#define CreateEmailTemplateCallable(REQUEST)  SubmitCallable(&SESV2Client::CreateEmailTemplate, REQUEST)

#define CreateImportJobAsync(...)  SubmitAsync(&SESV2Client::CreateImportJob, __VA_ARGS__)
#define CreateImportJobCallable(REQUEST)  SubmitCallable(&SESV2Client::CreateImportJob, REQUEST)

#define DeleteConfigurationSetAsync(...)  SubmitAsync(&SESV2Client::DeleteConfigurationSet, __VA_ARGS__)
#define DeleteConfigurationSetCallable(REQUEST)  SubmitCallable(&SESV2Client::DeleteConfigurationSet, REQUEST)

#define DeleteConfigurationSetEventDestinationAsync(...)  SubmitAsync(&SESV2Client::DeleteConfigurationSetEventDestination, __VA_ARGS__)
#define DeleteConfigurationSetEventDestinationCallable(REQUEST)  SubmitCallable(&SESV2Client::DeleteConfigurationSetEventDestination, REQUEST)

#define DeleteContactAsync(...)  SubmitAsync(&SESV2Client::DeleteContact, __VA_ARGS__)
#define DeleteContactCallable(REQUEST)  SubmitCallable(&SESV2Client::DeleteContact, REQUEST)

#define DeleteContactListAsync(...)  SubmitAsync(&SESV2Client::DeleteContactList, __VA_ARGS__)
#define DeleteContactListCallable(REQUEST)  SubmitCallable(&SESV2Client::DeleteContactList, REQUEST)

#define DeleteCustomVerificationEmailTemplateAsync(...)  SubmitAsync(&SESV2Client::DeleteCustomVerificationEmailTemplate, __VA_ARGS__)
#define DeleteCustomVerificationEmailTemplateCallable(REQUEST)  SubmitCallable(&SESV2Client::DeleteCustomVerificationEmailTemplate, REQUEST)

#define DeleteDedicatedIpPoolAsync(...)  SubmitAsync(&SESV2Client::DeleteDedicatedIpPool, __VA_ARGS__)
#define DeleteDedicatedIpPoolCallable(REQUEST)  SubmitCallable(&SESV2Client::DeleteDedicatedIpPool, REQUEST)

#define DeleteEmailIdentityAsync(...)  SubmitAsync(&SESV2Client::DeleteEmailIdentity, __VA_ARGS__)
#define DeleteEmailIdentityCallable(REQUEST)  SubmitCallable(&SESV2Client::DeleteEmailIdentity, REQUEST)

#define DeleteEmailIdentityPolicyAsync(...)  SubmitAsync(&SESV2Client::DeleteEmailIdentityPolicy, __VA_ARGS__)
#define DeleteEmailIdentityPolicyCallable(REQUEST)  SubmitCallable(&SESV2Client::DeleteEmailIdentityPolicy, REQUEST)

#define DeleteEmailTemplateAsync(...)  SubmitAsync(&SESV2Client::DeleteEmailTemplate, __VA_ARGS__)
#define DeleteEmailTemplateCallable(REQUEST)  SubmitCallable(&SESV2Client::DeleteEmailTemplate, REQUEST)

#define DeleteSuppressedDestinationAsync(...)  SubmitAsync(&SESV2Client::DeleteSuppressedDestination, __VA_ARGS__)
#define DeleteSuppressedDestinationCallable(REQUEST)  SubmitCallable(&SESV2Client::DeleteSuppressedDestination, REQUEST)

#define GetAccountAsync(...)  SubmitAsync(&SESV2Client::GetAccount, __VA_ARGS__)
#define GetAccountCallable(REQUEST)  SubmitCallable(&SESV2Client::GetAccount, REQUEST)

#define GetBlacklistReportsAsync(...)  SubmitAsync(&SESV2Client::GetBlacklistReports, __VA_ARGS__)
#define GetBlacklistReportsCallable(REQUEST)  SubmitCallable(&SESV2Client::GetBlacklistReports, REQUEST)

#define GetConfigurationSetAsync(...)  SubmitAsync(&SESV2Client::GetConfigurationSet, __VA_ARGS__)
#define GetConfigurationSetCallable(REQUEST)  SubmitCallable(&SESV2Client::GetConfigurationSet, REQUEST)

#define GetConfigurationSetEventDestinationsAsync(...)  SubmitAsync(&SESV2Client::GetConfigurationSetEventDestinations, __VA_ARGS__)
#define GetConfigurationSetEventDestinationsCallable(REQUEST)  SubmitCallable(&SESV2Client::GetConfigurationSetEventDestinations, REQUEST)

#define GetContactAsync(...)  SubmitAsync(&SESV2Client::GetContact, __VA_ARGS__)
#define GetContactCallable(REQUEST)  SubmitCallable(&SESV2Client::GetContact, REQUEST)

#define GetContactListAsync(...)  SubmitAsync(&SESV2Client::GetContactList, __VA_ARGS__)
#define GetContactListCallable(REQUEST)  SubmitCallable(&SESV2Client::GetContactList, REQUEST)

#define GetCustomVerificationEmailTemplateAsync(...)  SubmitAsync(&SESV2Client::GetCustomVerificationEmailTemplate, __VA_ARGS__)
#define GetCustomVerificationEmailTemplateCallable(REQUEST)  SubmitCallable(&SESV2Client::GetCustomVerificationEmailTemplate, REQUEST)

#define GetDedicatedIpAsync(...)  SubmitAsync(&SESV2Client::GetDedicatedIp, __VA_ARGS__)
#define GetDedicatedIpCallable(REQUEST)  SubmitCallable(&SESV2Client::GetDedicatedIp, REQUEST)

#define GetDedicatedIpPoolAsync(...)  SubmitAsync(&SESV2Client::GetDedicatedIpPool, __VA_ARGS__)
#define GetDedicatedIpPoolCallable(REQUEST)  SubmitCallable(&SESV2Client::GetDedicatedIpPool, REQUEST)

#define GetDedicatedIpsAsync(...)  SubmitAsync(&SESV2Client::GetDedicatedIps, __VA_ARGS__)
#define GetDedicatedIpsCallable(REQUEST)  SubmitCallable(&SESV2Client::GetDedicatedIps, REQUEST)

#define GetDeliverabilityDashboardOptionsAsync(...)  SubmitAsync(&SESV2Client::GetDeliverabilityDashboardOptions, __VA_ARGS__)
#define GetDeliverabilityDashboardOptionsCallable(REQUEST)  SubmitCallable(&SESV2Client::GetDeliverabilityDashboardOptions, REQUEST)

#define GetDeliverabilityTestReportAsync(...)  SubmitAsync(&SESV2Client::GetDeliverabilityTestReport, __VA_ARGS__)
#define GetDeliverabilityTestReportCallable(REQUEST)  SubmitCallable(&SESV2Client::GetDeliverabilityTestReport, REQUEST)

#define GetDomainDeliverabilityCampaignAsync(...)  SubmitAsync(&SESV2Client::GetDomainDeliverabilityCampaign, __VA_ARGS__)
#define GetDomainDeliverabilityCampaignCallable(REQUEST)  SubmitCallable(&SESV2Client::GetDomainDeliverabilityCampaign, REQUEST)

#define GetDomainStatisticsReportAsync(...)  SubmitAsync(&SESV2Client::GetDomainStatisticsReport, __VA_ARGS__)
#define GetDomainStatisticsReportCallable(REQUEST)  SubmitCallable(&SESV2Client::GetDomainStatisticsReport, REQUEST)

#define GetEmailIdentityAsync(...)  SubmitAsync(&SESV2Client::GetEmailIdentity, __VA_ARGS__)
#define GetEmailIdentityCallable(REQUEST)  SubmitCallable(&SESV2Client::GetEmailIdentity, REQUEST)

#define GetEmailIdentityPoliciesAsync(...)  SubmitAsync(&SESV2Client::GetEmailIdentityPolicies, __VA_ARGS__)
#define GetEmailIdentityPoliciesCallable(REQUEST)  SubmitCallable(&SESV2Client::GetEmailIdentityPolicies, REQUEST)

#define GetEmailTemplateAsync(...)  SubmitAsync(&SESV2Client::GetEmailTemplate, __VA_ARGS__)
#define GetEmailTemplateCallable(REQUEST)  SubmitCallable(&SESV2Client::GetEmailTemplate, REQUEST)

#define GetImportJobAsync(...)  SubmitAsync(&SESV2Client::GetImportJob, __VA_ARGS__)
#define GetImportJobCallable(REQUEST)  SubmitCallable(&SESV2Client::GetImportJob, REQUEST)

#define GetSuppressedDestinationAsync(...)  SubmitAsync(&SESV2Client::GetSuppressedDestination, __VA_ARGS__)
#define GetSuppressedDestinationCallable(REQUEST)  SubmitCallable(&SESV2Client::GetSuppressedDestination, REQUEST)

#define ListConfigurationSetsAsync(...)  SubmitAsync(&SESV2Client::ListConfigurationSets, __VA_ARGS__)
#define ListConfigurationSetsCallable(REQUEST)  SubmitCallable(&SESV2Client::ListConfigurationSets, REQUEST)

#define ListContactListsAsync(...)  SubmitAsync(&SESV2Client::ListContactLists, __VA_ARGS__)
#define ListContactListsCallable(REQUEST)  SubmitCallable(&SESV2Client::ListContactLists, REQUEST)

#define ListContactsAsync(...)  SubmitAsync(&SESV2Client::ListContacts, __VA_ARGS__)
#define ListContactsCallable(REQUEST)  SubmitCallable(&SESV2Client::ListContacts, REQUEST)

#define ListCustomVerificationEmailTemplatesAsync(...)  SubmitAsync(&SESV2Client::ListCustomVerificationEmailTemplates, __VA_ARGS__)
#define ListCustomVerificationEmailTemplatesCallable(REQUEST)  SubmitCallable(&SESV2Client::ListCustomVerificationEmailTemplates, REQUEST)

#define ListDedicatedIpPoolsAsync(...)  SubmitAsync(&SESV2Client::ListDedicatedIpPools, __VA_ARGS__)
#define ListDedicatedIpPoolsCallable(REQUEST)  SubmitCallable(&SESV2Client::ListDedicatedIpPools, REQUEST)

#define ListDeliverabilityTestReportsAsync(...)  SubmitAsync(&SESV2Client::ListDeliverabilityTestReports, __VA_ARGS__)
#define ListDeliverabilityTestReportsCallable(REQUEST)  SubmitCallable(&SESV2Client::ListDeliverabilityTestReports, REQUEST)

#define ListDomainDeliverabilityCampaignsAsync(...)  SubmitAsync(&SESV2Client::ListDomainDeliverabilityCampaigns, __VA_ARGS__)
#define ListDomainDeliverabilityCampaignsCallable(REQUEST)  SubmitCallable(&SESV2Client::ListDomainDeliverabilityCampaigns, REQUEST)

#define ListEmailIdentitiesAsync(...)  SubmitAsync(&SESV2Client::ListEmailIdentities, __VA_ARGS__)
#define ListEmailIdentitiesCallable(REQUEST)  SubmitCallable(&SESV2Client::ListEmailIdentities, REQUEST)

#define ListEmailTemplatesAsync(...)  SubmitAsync(&SESV2Client::ListEmailTemplates, __VA_ARGS__)
#define ListEmailTemplatesCallable(REQUEST)  SubmitCallable(&SESV2Client::ListEmailTemplates, REQUEST)

#define ListImportJobsAsync(...)  SubmitAsync(&SESV2Client::ListImportJobs, __VA_ARGS__)
#define ListImportJobsCallable(REQUEST)  SubmitCallable(&SESV2Client::ListImportJobs, REQUEST)

#define ListRecommendationsAsync(...)  SubmitAsync(&SESV2Client::ListRecommendations, __VA_ARGS__)
#define ListRecommendationsCallable(REQUEST)  SubmitCallable(&SESV2Client::ListRecommendations, REQUEST)

#define ListSuppressedDestinationsAsync(...)  SubmitAsync(&SESV2Client::ListSuppressedDestinations, __VA_ARGS__)
#define ListSuppressedDestinationsCallable(REQUEST)  SubmitCallable(&SESV2Client::ListSuppressedDestinations, REQUEST)

#define ListTagsForResourceAsync(...)  SubmitAsync(&SESV2Client::ListTagsForResource, __VA_ARGS__)
#define ListTagsForResourceCallable(REQUEST)  SubmitCallable(&SESV2Client::ListTagsForResource, REQUEST)

#define PutAccountDedicatedIpWarmupAttributesAsync(...)  SubmitAsync(&SESV2Client::PutAccountDedicatedIpWarmupAttributes, __VA_ARGS__)
#define PutAccountDedicatedIpWarmupAttributesCallable(REQUEST)  SubmitCallable(&SESV2Client::PutAccountDedicatedIpWarmupAttributes, REQUEST)

#define PutAccountDetailsAsync(...)  SubmitAsync(&SESV2Client::PutAccountDetails, __VA_ARGS__)
#define PutAccountDetailsCallable(REQUEST)  SubmitCallable(&SESV2Client::PutAccountDetails, REQUEST)

#define PutAccountSendingAttributesAsync(...)  SubmitAsync(&SESV2Client::PutAccountSendingAttributes, __VA_ARGS__)
#define PutAccountSendingAttributesCallable(REQUEST)  SubmitCallable(&SESV2Client::PutAccountSendingAttributes, REQUEST)

#define PutAccountSuppressionAttributesAsync(...)  SubmitAsync(&SESV2Client::PutAccountSuppressionAttributes, __VA_ARGS__)
#define PutAccountSuppressionAttributesCallable(REQUEST)  SubmitCallable(&SESV2Client::PutAccountSuppressionAttributes, REQUEST)

#define PutAccountVdmAttributesAsync(...)  SubmitAsync(&SESV2Client::PutAccountVdmAttributes, __VA_ARGS__)
#define PutAccountVdmAttributesCallable(REQUEST)  SubmitCallable(&SESV2Client::PutAccountVdmAttributes, REQUEST)

#define PutConfigurationSetDeliveryOptionsAsync(...)  SubmitAsync(&SESV2Client::PutConfigurationSetDeliveryOptions, __VA_ARGS__)
#define PutConfigurationSetDeliveryOptionsCallable(REQUEST)  SubmitCallable(&SESV2Client::PutConfigurationSetDeliveryOptions, REQUEST)

#define PutConfigurationSetReputationOptionsAsync(...)  SubmitAsync(&SESV2Client::PutConfigurationSetReputationOptions, __VA_ARGS__)
#define PutConfigurationSetReputationOptionsCallable(REQUEST)  SubmitCallable(&SESV2Client::PutConfigurationSetReputationOptions, REQUEST)

#define PutConfigurationSetSendingOptionsAsync(...)  SubmitAsync(&SESV2Client::PutConfigurationSetSendingOptions, __VA_ARGS__)
#define PutConfigurationSetSendingOptionsCallable(REQUEST)  SubmitCallable(&SESV2Client::PutConfigurationSetSendingOptions, REQUEST)

#define PutConfigurationSetSuppressionOptionsAsync(...)  SubmitAsync(&SESV2Client::PutConfigurationSetSuppressionOptions, __VA_ARGS__)
#define PutConfigurationSetSuppressionOptionsCallable(REQUEST)  SubmitCallable(&SESV2Client::PutConfigurationSetSuppressionOptions, REQUEST)

#define PutConfigurationSetTrackingOptionsAsync(...)  SubmitAsync(&SESV2Client::PutConfigurationSetTrackingOptions, __VA_ARGS__)
#define PutConfigurationSetTrackingOptionsCallable(REQUEST)  SubmitCallable(&SESV2Client::PutConfigurationSetTrackingOptions, REQUEST)

#define PutConfigurationSetVdmOptionsAsync(...)  SubmitAsync(&SESV2Client::PutConfigurationSetVdmOptions, __VA_ARGS__)
#define PutConfigurationSetVdmOptionsCallable(REQUEST)  SubmitCallable(&SESV2Client::PutConfigurationSetVdmOptions, REQUEST)

#define PutDedicatedIpInPoolAsync(...)  SubmitAsync(&SESV2Client::PutDedicatedIpInPool, __VA_ARGS__)
#define PutDedicatedIpInPoolCallable(REQUEST)  SubmitCallable(&SESV2Client::PutDedicatedIpInPool, REQUEST)

#define PutDedicatedIpWarmupAttributesAsync(...)  SubmitAsync(&SESV2Client::PutDedicatedIpWarmupAttributes, __VA_ARGS__)
#define PutDedicatedIpWarmupAttributesCallable(REQUEST)  SubmitCallable(&SESV2Client::PutDedicatedIpWarmupAttributes, REQUEST)

#define PutDeliverabilityDashboardOptionAsync(...)  SubmitAsync(&SESV2Client::PutDeliverabilityDashboardOption, __VA_ARGS__)
#define PutDeliverabilityDashboardOptionCallable(REQUEST)  SubmitCallable(&SESV2Client::PutDeliverabilityDashboardOption, REQUEST)

#define PutEmailIdentityConfigurationSetAttributesAsync(...)  SubmitAsync(&SESV2Client::PutEmailIdentityConfigurationSetAttributes, __VA_ARGS__)
#define PutEmailIdentityConfigurationSetAttributesCallable(REQUEST)  SubmitCallable(&SESV2Client::PutEmailIdentityConfigurationSetAttributes, REQUEST)

#define PutEmailIdentityDkimAttributesAsync(...)  SubmitAsync(&SESV2Client::PutEmailIdentityDkimAttributes, __VA_ARGS__)
#define PutEmailIdentityDkimAttributesCallable(REQUEST)  SubmitCallable(&SESV2Client::PutEmailIdentityDkimAttributes, REQUEST)

#define PutEmailIdentityDkimSigningAttributesAsync(...)  SubmitAsync(&SESV2Client::PutEmailIdentityDkimSigningAttributes, __VA_ARGS__)
#define PutEmailIdentityDkimSigningAttributesCallable(REQUEST)  SubmitCallable(&SESV2Client::PutEmailIdentityDkimSigningAttributes, REQUEST)

#define PutEmailIdentityFeedbackAttributesAsync(...)  SubmitAsync(&SESV2Client::PutEmailIdentityFeedbackAttributes, __VA_ARGS__)
#define PutEmailIdentityFeedbackAttributesCallable(REQUEST)  SubmitCallable(&SESV2Client::PutEmailIdentityFeedbackAttributes, REQUEST)

#define PutEmailIdentityMailFromAttributesAsync(...)  SubmitAsync(&SESV2Client::PutEmailIdentityMailFromAttributes, __VA_ARGS__)
#define PutEmailIdentityMailFromAttributesCallable(REQUEST)  SubmitCallable(&SESV2Client::PutEmailIdentityMailFromAttributes, REQUEST)

#define PutSuppressedDestinationAsync(...)  SubmitAsync(&SESV2Client::PutSuppressedDestination, __VA_ARGS__)
#define PutSuppressedDestinationCallable(REQUEST)  SubmitCallable(&SESV2Client::PutSuppressedDestination, REQUEST)

#define SendBulkEmailAsync(...)  SubmitAsync(&SESV2Client::SendBulkEmail, __VA_ARGS__)
#define SendBulkEmailCallable(REQUEST)  SubmitCallable(&SESV2Client::SendBulkEmail, REQUEST)

#define SendCustomVerificationEmailAsync(...)  SubmitAsync(&SESV2Client::SendCustomVerificationEmail, __VA_ARGS__)
#define SendCustomVerificationEmailCallable(REQUEST)  SubmitCallable(&SESV2Client::SendCustomVerificationEmail, REQUEST)

#define SendEmailAsync(...)  SubmitAsync(&SESV2Client::SendEmail, __VA_ARGS__)
#define SendEmailCallable(REQUEST)  SubmitCallable(&SESV2Client::SendEmail, REQUEST)

#define TagResourceAsync(...)  SubmitAsync(&SESV2Client::TagResource, __VA_ARGS__)
#define TagResourceCallable(REQUEST)  SubmitCallable(&SESV2Client::TagResource, REQUEST)

#define TestRenderEmailTemplateAsync(...)  SubmitAsync(&SESV2Client::TestRenderEmailTemplate, __VA_ARGS__)
#define TestRenderEmailTemplateCallable(REQUEST)  SubmitCallable(&SESV2Client::TestRenderEmailTemplate, REQUEST)

#define UntagResourceAsync(...)  SubmitAsync(&SESV2Client::UntagResource, __VA_ARGS__)
#define UntagResourceCallable(REQUEST)  SubmitCallable(&SESV2Client::UntagResource, REQUEST)

#define UpdateConfigurationSetEventDestinationAsync(...)  SubmitAsync(&SESV2Client::UpdateConfigurationSetEventDestination, __VA_ARGS__)
#define UpdateConfigurationSetEventDestinationCallable(REQUEST)  SubmitCallable(&SESV2Client::UpdateConfigurationSetEventDestination, REQUEST)

#define UpdateContactAsync(...)  SubmitAsync(&SESV2Client::UpdateContact, __VA_ARGS__)
#define UpdateContactCallable(REQUEST)  SubmitCallable(&SESV2Client::UpdateContact, REQUEST)

#define UpdateContactListAsync(...)  SubmitAsync(&SESV2Client::UpdateContactList, __VA_ARGS__)
#define UpdateContactListCallable(REQUEST)  SubmitCallable(&SESV2Client::UpdateContactList, REQUEST)

#define UpdateCustomVerificationEmailTemplateAsync(...)  SubmitAsync(&SESV2Client::UpdateCustomVerificationEmailTemplate, __VA_ARGS__)
#define UpdateCustomVerificationEmailTemplateCallable(REQUEST)  SubmitCallable(&SESV2Client::UpdateCustomVerificationEmailTemplate, REQUEST)

#define UpdateEmailIdentityPolicyAsync(...)  SubmitAsync(&SESV2Client::UpdateEmailIdentityPolicy, __VA_ARGS__)
#define UpdateEmailIdentityPolicyCallable(REQUEST)  SubmitCallable(&SESV2Client::UpdateEmailIdentityPolicy, REQUEST)

#define UpdateEmailTemplateAsync(...)  SubmitAsync(&SESV2Client::UpdateEmailTemplate, __VA_ARGS__)
#define UpdateEmailTemplateCallable(REQUEST)  SubmitCallable(&SESV2Client::UpdateEmailTemplate, REQUEST)

