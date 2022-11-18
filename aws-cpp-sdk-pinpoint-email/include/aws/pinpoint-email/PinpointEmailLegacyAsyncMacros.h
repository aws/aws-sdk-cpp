/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#define CreateConfigurationSetAsync(...)  SubmitAsync(&PinpointEmailClient::CreateConfigurationSet, __VA_ARGS__)
#define CreateConfigurationSetCallable(REQUEST)  SubmitCallable(&PinpointEmailClient::CreateConfigurationSet, REQUEST)

#define CreateConfigurationSetEventDestinationAsync(...)  SubmitAsync(&PinpointEmailClient::CreateConfigurationSetEventDestination, __VA_ARGS__)
#define CreateConfigurationSetEventDestinationCallable(REQUEST)  SubmitCallable(&PinpointEmailClient::CreateConfigurationSetEventDestination, REQUEST)

#define CreateDedicatedIpPoolAsync(...)  SubmitAsync(&PinpointEmailClient::CreateDedicatedIpPool, __VA_ARGS__)
#define CreateDedicatedIpPoolCallable(REQUEST)  SubmitCallable(&PinpointEmailClient::CreateDedicatedIpPool, REQUEST)

#define CreateDeliverabilityTestReportAsync(...)  SubmitAsync(&PinpointEmailClient::CreateDeliverabilityTestReport, __VA_ARGS__)
#define CreateDeliverabilityTestReportCallable(REQUEST)  SubmitCallable(&PinpointEmailClient::CreateDeliverabilityTestReport, REQUEST)

#define CreateEmailIdentityAsync(...)  SubmitAsync(&PinpointEmailClient::CreateEmailIdentity, __VA_ARGS__)
#define CreateEmailIdentityCallable(REQUEST)  SubmitCallable(&PinpointEmailClient::CreateEmailIdentity, REQUEST)

#define DeleteConfigurationSetAsync(...)  SubmitAsync(&PinpointEmailClient::DeleteConfigurationSet, __VA_ARGS__)
#define DeleteConfigurationSetCallable(REQUEST)  SubmitCallable(&PinpointEmailClient::DeleteConfigurationSet, REQUEST)

#define DeleteConfigurationSetEventDestinationAsync(...)  SubmitAsync(&PinpointEmailClient::DeleteConfigurationSetEventDestination, __VA_ARGS__)
#define DeleteConfigurationSetEventDestinationCallable(REQUEST)  SubmitCallable(&PinpointEmailClient::DeleteConfigurationSetEventDestination, REQUEST)

#define DeleteDedicatedIpPoolAsync(...)  SubmitAsync(&PinpointEmailClient::DeleteDedicatedIpPool, __VA_ARGS__)
#define DeleteDedicatedIpPoolCallable(REQUEST)  SubmitCallable(&PinpointEmailClient::DeleteDedicatedIpPool, REQUEST)

#define DeleteEmailIdentityAsync(...)  SubmitAsync(&PinpointEmailClient::DeleteEmailIdentity, __VA_ARGS__)
#define DeleteEmailIdentityCallable(REQUEST)  SubmitCallable(&PinpointEmailClient::DeleteEmailIdentity, REQUEST)

#define GetAccountAsync(...)  SubmitAsync(&PinpointEmailClient::GetAccount, __VA_ARGS__)
#define GetAccountCallable(REQUEST)  SubmitCallable(&PinpointEmailClient::GetAccount, REQUEST)

#define GetBlacklistReportsAsync(...)  SubmitAsync(&PinpointEmailClient::GetBlacklistReports, __VA_ARGS__)
#define GetBlacklistReportsCallable(REQUEST)  SubmitCallable(&PinpointEmailClient::GetBlacklistReports, REQUEST)

#define GetConfigurationSetAsync(...)  SubmitAsync(&PinpointEmailClient::GetConfigurationSet, __VA_ARGS__)
#define GetConfigurationSetCallable(REQUEST)  SubmitCallable(&PinpointEmailClient::GetConfigurationSet, REQUEST)

#define GetConfigurationSetEventDestinationsAsync(...)  SubmitAsync(&PinpointEmailClient::GetConfigurationSetEventDestinations, __VA_ARGS__)
#define GetConfigurationSetEventDestinationsCallable(REQUEST)  SubmitCallable(&PinpointEmailClient::GetConfigurationSetEventDestinations, REQUEST)

#define GetDedicatedIpAsync(...)  SubmitAsync(&PinpointEmailClient::GetDedicatedIp, __VA_ARGS__)
#define GetDedicatedIpCallable(REQUEST)  SubmitCallable(&PinpointEmailClient::GetDedicatedIp, REQUEST)

#define GetDedicatedIpsAsync(...)  SubmitAsync(&PinpointEmailClient::GetDedicatedIps, __VA_ARGS__)
#define GetDedicatedIpsCallable(REQUEST)  SubmitCallable(&PinpointEmailClient::GetDedicatedIps, REQUEST)

#define GetDeliverabilityDashboardOptionsAsync(...)  SubmitAsync(&PinpointEmailClient::GetDeliverabilityDashboardOptions, __VA_ARGS__)
#define GetDeliverabilityDashboardOptionsCallable(REQUEST)  SubmitCallable(&PinpointEmailClient::GetDeliverabilityDashboardOptions, REQUEST)

#define GetDeliverabilityTestReportAsync(...)  SubmitAsync(&PinpointEmailClient::GetDeliverabilityTestReport, __VA_ARGS__)
#define GetDeliverabilityTestReportCallable(REQUEST)  SubmitCallable(&PinpointEmailClient::GetDeliverabilityTestReport, REQUEST)

#define GetDomainDeliverabilityCampaignAsync(...)  SubmitAsync(&PinpointEmailClient::GetDomainDeliverabilityCampaign, __VA_ARGS__)
#define GetDomainDeliverabilityCampaignCallable(REQUEST)  SubmitCallable(&PinpointEmailClient::GetDomainDeliverabilityCampaign, REQUEST)

#define GetDomainStatisticsReportAsync(...)  SubmitAsync(&PinpointEmailClient::GetDomainStatisticsReport, __VA_ARGS__)
#define GetDomainStatisticsReportCallable(REQUEST)  SubmitCallable(&PinpointEmailClient::GetDomainStatisticsReport, REQUEST)

#define GetEmailIdentityAsync(...)  SubmitAsync(&PinpointEmailClient::GetEmailIdentity, __VA_ARGS__)
#define GetEmailIdentityCallable(REQUEST)  SubmitCallable(&PinpointEmailClient::GetEmailIdentity, REQUEST)

#define ListConfigurationSetsAsync(...)  SubmitAsync(&PinpointEmailClient::ListConfigurationSets, __VA_ARGS__)
#define ListConfigurationSetsCallable(REQUEST)  SubmitCallable(&PinpointEmailClient::ListConfigurationSets, REQUEST)

#define ListDedicatedIpPoolsAsync(...)  SubmitAsync(&PinpointEmailClient::ListDedicatedIpPools, __VA_ARGS__)
#define ListDedicatedIpPoolsCallable(REQUEST)  SubmitCallable(&PinpointEmailClient::ListDedicatedIpPools, REQUEST)

#define ListDeliverabilityTestReportsAsync(...)  SubmitAsync(&PinpointEmailClient::ListDeliverabilityTestReports, __VA_ARGS__)
#define ListDeliverabilityTestReportsCallable(REQUEST)  SubmitCallable(&PinpointEmailClient::ListDeliverabilityTestReports, REQUEST)

#define ListDomainDeliverabilityCampaignsAsync(...)  SubmitAsync(&PinpointEmailClient::ListDomainDeliverabilityCampaigns, __VA_ARGS__)
#define ListDomainDeliverabilityCampaignsCallable(REQUEST)  SubmitCallable(&PinpointEmailClient::ListDomainDeliverabilityCampaigns, REQUEST)

#define ListEmailIdentitiesAsync(...)  SubmitAsync(&PinpointEmailClient::ListEmailIdentities, __VA_ARGS__)
#define ListEmailIdentitiesCallable(REQUEST)  SubmitCallable(&PinpointEmailClient::ListEmailIdentities, REQUEST)

#define ListTagsForResourceAsync(...)  SubmitAsync(&PinpointEmailClient::ListTagsForResource, __VA_ARGS__)
#define ListTagsForResourceCallable(REQUEST)  SubmitCallable(&PinpointEmailClient::ListTagsForResource, REQUEST)

#define PutAccountDedicatedIpWarmupAttributesAsync(...)  SubmitAsync(&PinpointEmailClient::PutAccountDedicatedIpWarmupAttributes, __VA_ARGS__)
#define PutAccountDedicatedIpWarmupAttributesCallable(REQUEST)  SubmitCallable(&PinpointEmailClient::PutAccountDedicatedIpWarmupAttributes, REQUEST)

#define PutAccountSendingAttributesAsync(...)  SubmitAsync(&PinpointEmailClient::PutAccountSendingAttributes, __VA_ARGS__)
#define PutAccountSendingAttributesCallable(REQUEST)  SubmitCallable(&PinpointEmailClient::PutAccountSendingAttributes, REQUEST)

#define PutConfigurationSetDeliveryOptionsAsync(...)  SubmitAsync(&PinpointEmailClient::PutConfigurationSetDeliveryOptions, __VA_ARGS__)
#define PutConfigurationSetDeliveryOptionsCallable(REQUEST)  SubmitCallable(&PinpointEmailClient::PutConfigurationSetDeliveryOptions, REQUEST)

#define PutConfigurationSetReputationOptionsAsync(...)  SubmitAsync(&PinpointEmailClient::PutConfigurationSetReputationOptions, __VA_ARGS__)
#define PutConfigurationSetReputationOptionsCallable(REQUEST)  SubmitCallable(&PinpointEmailClient::PutConfigurationSetReputationOptions, REQUEST)

#define PutConfigurationSetSendingOptionsAsync(...)  SubmitAsync(&PinpointEmailClient::PutConfigurationSetSendingOptions, __VA_ARGS__)
#define PutConfigurationSetSendingOptionsCallable(REQUEST)  SubmitCallable(&PinpointEmailClient::PutConfigurationSetSendingOptions, REQUEST)

#define PutConfigurationSetTrackingOptionsAsync(...)  SubmitAsync(&PinpointEmailClient::PutConfigurationSetTrackingOptions, __VA_ARGS__)
#define PutConfigurationSetTrackingOptionsCallable(REQUEST)  SubmitCallable(&PinpointEmailClient::PutConfigurationSetTrackingOptions, REQUEST)

#define PutDedicatedIpInPoolAsync(...)  SubmitAsync(&PinpointEmailClient::PutDedicatedIpInPool, __VA_ARGS__)
#define PutDedicatedIpInPoolCallable(REQUEST)  SubmitCallable(&PinpointEmailClient::PutDedicatedIpInPool, REQUEST)

#define PutDedicatedIpWarmupAttributesAsync(...)  SubmitAsync(&PinpointEmailClient::PutDedicatedIpWarmupAttributes, __VA_ARGS__)
#define PutDedicatedIpWarmupAttributesCallable(REQUEST)  SubmitCallable(&PinpointEmailClient::PutDedicatedIpWarmupAttributes, REQUEST)

#define PutDeliverabilityDashboardOptionAsync(...)  SubmitAsync(&PinpointEmailClient::PutDeliverabilityDashboardOption, __VA_ARGS__)
#define PutDeliverabilityDashboardOptionCallable(REQUEST)  SubmitCallable(&PinpointEmailClient::PutDeliverabilityDashboardOption, REQUEST)

#define PutEmailIdentityDkimAttributesAsync(...)  SubmitAsync(&PinpointEmailClient::PutEmailIdentityDkimAttributes, __VA_ARGS__)
#define PutEmailIdentityDkimAttributesCallable(REQUEST)  SubmitCallable(&PinpointEmailClient::PutEmailIdentityDkimAttributes, REQUEST)

#define PutEmailIdentityFeedbackAttributesAsync(...)  SubmitAsync(&PinpointEmailClient::PutEmailIdentityFeedbackAttributes, __VA_ARGS__)
#define PutEmailIdentityFeedbackAttributesCallable(REQUEST)  SubmitCallable(&PinpointEmailClient::PutEmailIdentityFeedbackAttributes, REQUEST)

#define PutEmailIdentityMailFromAttributesAsync(...)  SubmitAsync(&PinpointEmailClient::PutEmailIdentityMailFromAttributes, __VA_ARGS__)
#define PutEmailIdentityMailFromAttributesCallable(REQUEST)  SubmitCallable(&PinpointEmailClient::PutEmailIdentityMailFromAttributes, REQUEST)

#define SendEmailAsync(...)  SubmitAsync(&PinpointEmailClient::SendEmail, __VA_ARGS__)
#define SendEmailCallable(REQUEST)  SubmitCallable(&PinpointEmailClient::SendEmail, REQUEST)

#define TagResourceAsync(...)  SubmitAsync(&PinpointEmailClient::TagResource, __VA_ARGS__)
#define TagResourceCallable(REQUEST)  SubmitCallable(&PinpointEmailClient::TagResource, REQUEST)

#define UntagResourceAsync(...)  SubmitAsync(&PinpointEmailClient::UntagResource, __VA_ARGS__)
#define UntagResourceCallable(REQUEST)  SubmitCallable(&PinpointEmailClient::UntagResource, REQUEST)

#define UpdateConfigurationSetEventDestinationAsync(...)  SubmitAsync(&PinpointEmailClient::UpdateConfigurationSetEventDestination, __VA_ARGS__)
#define UpdateConfigurationSetEventDestinationCallable(REQUEST)  SubmitCallable(&PinpointEmailClient::UpdateConfigurationSetEventDestination, REQUEST)

