/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#define CloneReceiptRuleSetAsync(...)  SubmitAsync(&SESClient::CloneReceiptRuleSet, __VA_ARGS__)
#define CloneReceiptRuleSetCallable(REQUEST)  SubmitCallable(&SESClient::CloneReceiptRuleSet, REQUEST)

#define CreateConfigurationSetAsync(...)  SubmitAsync(&SESClient::CreateConfigurationSet, __VA_ARGS__)
#define CreateConfigurationSetCallable(REQUEST)  SubmitCallable(&SESClient::CreateConfigurationSet, REQUEST)

#define CreateConfigurationSetEventDestinationAsync(...)  SubmitAsync(&SESClient::CreateConfigurationSetEventDestination, __VA_ARGS__)
#define CreateConfigurationSetEventDestinationCallable(REQUEST)  SubmitCallable(&SESClient::CreateConfigurationSetEventDestination, REQUEST)

#define CreateConfigurationSetTrackingOptionsAsync(...)  SubmitAsync(&SESClient::CreateConfigurationSetTrackingOptions, __VA_ARGS__)
#define CreateConfigurationSetTrackingOptionsCallable(REQUEST)  SubmitCallable(&SESClient::CreateConfigurationSetTrackingOptions, REQUEST)

#define CreateCustomVerificationEmailTemplateAsync(...)  SubmitAsync(&SESClient::CreateCustomVerificationEmailTemplate, __VA_ARGS__)
#define CreateCustomVerificationEmailTemplateCallable(REQUEST)  SubmitCallable(&SESClient::CreateCustomVerificationEmailTemplate, REQUEST)

#define CreateReceiptFilterAsync(...)  SubmitAsync(&SESClient::CreateReceiptFilter, __VA_ARGS__)
#define CreateReceiptFilterCallable(REQUEST)  SubmitCallable(&SESClient::CreateReceiptFilter, REQUEST)

#define CreateReceiptRuleAsync(...)  SubmitAsync(&SESClient::CreateReceiptRule, __VA_ARGS__)
#define CreateReceiptRuleCallable(REQUEST)  SubmitCallable(&SESClient::CreateReceiptRule, REQUEST)

#define CreateReceiptRuleSetAsync(...)  SubmitAsync(&SESClient::CreateReceiptRuleSet, __VA_ARGS__)
#define CreateReceiptRuleSetCallable(REQUEST)  SubmitCallable(&SESClient::CreateReceiptRuleSet, REQUEST)

#define CreateTemplateAsync(...)  SubmitAsync(&SESClient::CreateTemplate, __VA_ARGS__)
#define CreateTemplateCallable(REQUEST)  SubmitCallable(&SESClient::CreateTemplate, REQUEST)

#define DeleteConfigurationSetAsync(...)  SubmitAsync(&SESClient::DeleteConfigurationSet, __VA_ARGS__)
#define DeleteConfigurationSetCallable(REQUEST)  SubmitCallable(&SESClient::DeleteConfigurationSet, REQUEST)

#define DeleteConfigurationSetEventDestinationAsync(...)  SubmitAsync(&SESClient::DeleteConfigurationSetEventDestination, __VA_ARGS__)
#define DeleteConfigurationSetEventDestinationCallable(REQUEST)  SubmitCallable(&SESClient::DeleteConfigurationSetEventDestination, REQUEST)

#define DeleteConfigurationSetTrackingOptionsAsync(...)  SubmitAsync(&SESClient::DeleteConfigurationSetTrackingOptions, __VA_ARGS__)
#define DeleteConfigurationSetTrackingOptionsCallable(REQUEST)  SubmitCallable(&SESClient::DeleteConfigurationSetTrackingOptions, REQUEST)

#define DeleteCustomVerificationEmailTemplateAsync(...)  SubmitAsync(&SESClient::DeleteCustomVerificationEmailTemplate, __VA_ARGS__)
#define DeleteCustomVerificationEmailTemplateCallable(REQUEST)  SubmitCallable(&SESClient::DeleteCustomVerificationEmailTemplate, REQUEST)

#define DeleteIdentityAsync(...)  SubmitAsync(&SESClient::DeleteIdentity, __VA_ARGS__)
#define DeleteIdentityCallable(REQUEST)  SubmitCallable(&SESClient::DeleteIdentity, REQUEST)

#define DeleteIdentityPolicyAsync(...)  SubmitAsync(&SESClient::DeleteIdentityPolicy, __VA_ARGS__)
#define DeleteIdentityPolicyCallable(REQUEST)  SubmitCallable(&SESClient::DeleteIdentityPolicy, REQUEST)

#define DeleteReceiptFilterAsync(...)  SubmitAsync(&SESClient::DeleteReceiptFilter, __VA_ARGS__)
#define DeleteReceiptFilterCallable(REQUEST)  SubmitCallable(&SESClient::DeleteReceiptFilter, REQUEST)

#define DeleteReceiptRuleAsync(...)  SubmitAsync(&SESClient::DeleteReceiptRule, __VA_ARGS__)
#define DeleteReceiptRuleCallable(REQUEST)  SubmitCallable(&SESClient::DeleteReceiptRule, REQUEST)

#define DeleteReceiptRuleSetAsync(...)  SubmitAsync(&SESClient::DeleteReceiptRuleSet, __VA_ARGS__)
#define DeleteReceiptRuleSetCallable(REQUEST)  SubmitCallable(&SESClient::DeleteReceiptRuleSet, REQUEST)

#define DeleteTemplateAsync(...)  SubmitAsync(&SESClient::DeleteTemplate, __VA_ARGS__)
#define DeleteTemplateCallable(REQUEST)  SubmitCallable(&SESClient::DeleteTemplate, REQUEST)

#define DeleteVerifiedEmailAddressAsync(...)  SubmitAsync(&SESClient::DeleteVerifiedEmailAddress, __VA_ARGS__)
#define DeleteVerifiedEmailAddressCallable(REQUEST)  SubmitCallable(&SESClient::DeleteVerifiedEmailAddress, REQUEST)

#define DescribeActiveReceiptRuleSetAsync(...)  SubmitAsync(&SESClient::DescribeActiveReceiptRuleSet, __VA_ARGS__)
#define DescribeActiveReceiptRuleSetCallable(REQUEST)  SubmitCallable(&SESClient::DescribeActiveReceiptRuleSet, REQUEST)

#define DescribeConfigurationSetAsync(...)  SubmitAsync(&SESClient::DescribeConfigurationSet, __VA_ARGS__)
#define DescribeConfigurationSetCallable(REQUEST)  SubmitCallable(&SESClient::DescribeConfigurationSet, REQUEST)

#define DescribeReceiptRuleAsync(...)  SubmitAsync(&SESClient::DescribeReceiptRule, __VA_ARGS__)
#define DescribeReceiptRuleCallable(REQUEST)  SubmitCallable(&SESClient::DescribeReceiptRule, REQUEST)

#define DescribeReceiptRuleSetAsync(...)  SubmitAsync(&SESClient::DescribeReceiptRuleSet, __VA_ARGS__)
#define DescribeReceiptRuleSetCallable(REQUEST)  SubmitCallable(&SESClient::DescribeReceiptRuleSet, REQUEST)

#define GetAccountSendingEnabledAsync(...)  SubmitAsync(&SESClient::GetAccountSendingEnabled, __VA_ARGS__)
#define GetAccountSendingEnabledCallable(REQUEST)  SubmitCallable(&SESClient::GetAccountSendingEnabled, REQUEST)

#define GetCustomVerificationEmailTemplateAsync(...)  SubmitAsync(&SESClient::GetCustomVerificationEmailTemplate, __VA_ARGS__)
#define GetCustomVerificationEmailTemplateCallable(REQUEST)  SubmitCallable(&SESClient::GetCustomVerificationEmailTemplate, REQUEST)

#define GetIdentityDkimAttributesAsync(...)  SubmitAsync(&SESClient::GetIdentityDkimAttributes, __VA_ARGS__)
#define GetIdentityDkimAttributesCallable(REQUEST)  SubmitCallable(&SESClient::GetIdentityDkimAttributes, REQUEST)

#define GetIdentityMailFromDomainAttributesAsync(...)  SubmitAsync(&SESClient::GetIdentityMailFromDomainAttributes, __VA_ARGS__)
#define GetIdentityMailFromDomainAttributesCallable(REQUEST)  SubmitCallable(&SESClient::GetIdentityMailFromDomainAttributes, REQUEST)

#define GetIdentityNotificationAttributesAsync(...)  SubmitAsync(&SESClient::GetIdentityNotificationAttributes, __VA_ARGS__)
#define GetIdentityNotificationAttributesCallable(REQUEST)  SubmitCallable(&SESClient::GetIdentityNotificationAttributes, REQUEST)

#define GetIdentityPoliciesAsync(...)  SubmitAsync(&SESClient::GetIdentityPolicies, __VA_ARGS__)
#define GetIdentityPoliciesCallable(REQUEST)  SubmitCallable(&SESClient::GetIdentityPolicies, REQUEST)

#define GetIdentityVerificationAttributesAsync(...)  SubmitAsync(&SESClient::GetIdentityVerificationAttributes, __VA_ARGS__)
#define GetIdentityVerificationAttributesCallable(REQUEST)  SubmitCallable(&SESClient::GetIdentityVerificationAttributes, REQUEST)

#define GetSendQuotaAsync(...)  SubmitAsync(&SESClient::GetSendQuota, __VA_ARGS__)
#define GetSendQuotaCallable(REQUEST)  SubmitCallable(&SESClient::GetSendQuota, REQUEST)

#define GetSendStatisticsAsync(...)  SubmitAsync(&SESClient::GetSendStatistics, __VA_ARGS__)
#define GetSendStatisticsCallable(REQUEST)  SubmitCallable(&SESClient::GetSendStatistics, REQUEST)

#define GetTemplateAsync(...)  SubmitAsync(&SESClient::GetTemplate, __VA_ARGS__)
#define GetTemplateCallable(REQUEST)  SubmitCallable(&SESClient::GetTemplate, REQUEST)

#define ListConfigurationSetsAsync(...)  SubmitAsync(&SESClient::ListConfigurationSets, __VA_ARGS__)
#define ListConfigurationSetsCallable(REQUEST)  SubmitCallable(&SESClient::ListConfigurationSets, REQUEST)

#define ListCustomVerificationEmailTemplatesAsync(...)  SubmitAsync(&SESClient::ListCustomVerificationEmailTemplates, __VA_ARGS__)
#define ListCustomVerificationEmailTemplatesCallable(REQUEST)  SubmitCallable(&SESClient::ListCustomVerificationEmailTemplates, REQUEST)

#define ListIdentitiesAsync(...)  SubmitAsync(&SESClient::ListIdentities, __VA_ARGS__)
#define ListIdentitiesCallable(REQUEST)  SubmitCallable(&SESClient::ListIdentities, REQUEST)

#define ListIdentityPoliciesAsync(...)  SubmitAsync(&SESClient::ListIdentityPolicies, __VA_ARGS__)
#define ListIdentityPoliciesCallable(REQUEST)  SubmitCallable(&SESClient::ListIdentityPolicies, REQUEST)

#define ListReceiptFiltersAsync(...)  SubmitAsync(&SESClient::ListReceiptFilters, __VA_ARGS__)
#define ListReceiptFiltersCallable(REQUEST)  SubmitCallable(&SESClient::ListReceiptFilters, REQUEST)

#define ListReceiptRuleSetsAsync(...)  SubmitAsync(&SESClient::ListReceiptRuleSets, __VA_ARGS__)
#define ListReceiptRuleSetsCallable(REQUEST)  SubmitCallable(&SESClient::ListReceiptRuleSets, REQUEST)

#define ListTemplatesAsync(...)  SubmitAsync(&SESClient::ListTemplates, __VA_ARGS__)
#define ListTemplatesCallable(REQUEST)  SubmitCallable(&SESClient::ListTemplates, REQUEST)

#define ListVerifiedEmailAddressesAsync(...)  SubmitAsync(&SESClient::ListVerifiedEmailAddresses, __VA_ARGS__)
#define ListVerifiedEmailAddressesCallable(REQUEST)  SubmitCallable(&SESClient::ListVerifiedEmailAddresses, REQUEST)

#define PutConfigurationSetDeliveryOptionsAsync(...)  SubmitAsync(&SESClient::PutConfigurationSetDeliveryOptions, __VA_ARGS__)
#define PutConfigurationSetDeliveryOptionsCallable(REQUEST)  SubmitCallable(&SESClient::PutConfigurationSetDeliveryOptions, REQUEST)

#define PutIdentityPolicyAsync(...)  SubmitAsync(&SESClient::PutIdentityPolicy, __VA_ARGS__)
#define PutIdentityPolicyCallable(REQUEST)  SubmitCallable(&SESClient::PutIdentityPolicy, REQUEST)

#define ReorderReceiptRuleSetAsync(...)  SubmitAsync(&SESClient::ReorderReceiptRuleSet, __VA_ARGS__)
#define ReorderReceiptRuleSetCallable(REQUEST)  SubmitCallable(&SESClient::ReorderReceiptRuleSet, REQUEST)

#define SendBounceAsync(...)  SubmitAsync(&SESClient::SendBounce, __VA_ARGS__)
#define SendBounceCallable(REQUEST)  SubmitCallable(&SESClient::SendBounce, REQUEST)

#define SendBulkTemplatedEmailAsync(...)  SubmitAsync(&SESClient::SendBulkTemplatedEmail, __VA_ARGS__)
#define SendBulkTemplatedEmailCallable(REQUEST)  SubmitCallable(&SESClient::SendBulkTemplatedEmail, REQUEST)

#define SendCustomVerificationEmailAsync(...)  SubmitAsync(&SESClient::SendCustomVerificationEmail, __VA_ARGS__)
#define SendCustomVerificationEmailCallable(REQUEST)  SubmitCallable(&SESClient::SendCustomVerificationEmail, REQUEST)

#define SendEmailAsync(...)  SubmitAsync(&SESClient::SendEmail, __VA_ARGS__)
#define SendEmailCallable(REQUEST)  SubmitCallable(&SESClient::SendEmail, REQUEST)

#define SendRawEmailAsync(...)  SubmitAsync(&SESClient::SendRawEmail, __VA_ARGS__)
#define SendRawEmailCallable(REQUEST)  SubmitCallable(&SESClient::SendRawEmail, REQUEST)

#define SendTemplatedEmailAsync(...)  SubmitAsync(&SESClient::SendTemplatedEmail, __VA_ARGS__)
#define SendTemplatedEmailCallable(REQUEST)  SubmitCallable(&SESClient::SendTemplatedEmail, REQUEST)

#define SetActiveReceiptRuleSetAsync(...)  SubmitAsync(&SESClient::SetActiveReceiptRuleSet, __VA_ARGS__)
#define SetActiveReceiptRuleSetCallable(REQUEST)  SubmitCallable(&SESClient::SetActiveReceiptRuleSet, REQUEST)

#define SetIdentityDkimEnabledAsync(...)  SubmitAsync(&SESClient::SetIdentityDkimEnabled, __VA_ARGS__)
#define SetIdentityDkimEnabledCallable(REQUEST)  SubmitCallable(&SESClient::SetIdentityDkimEnabled, REQUEST)

#define SetIdentityFeedbackForwardingEnabledAsync(...)  SubmitAsync(&SESClient::SetIdentityFeedbackForwardingEnabled, __VA_ARGS__)
#define SetIdentityFeedbackForwardingEnabledCallable(REQUEST)  SubmitCallable(&SESClient::SetIdentityFeedbackForwardingEnabled, REQUEST)

#define SetIdentityHeadersInNotificationsEnabledAsync(...)  SubmitAsync(&SESClient::SetIdentityHeadersInNotificationsEnabled, __VA_ARGS__)
#define SetIdentityHeadersInNotificationsEnabledCallable(REQUEST)  SubmitCallable(&SESClient::SetIdentityHeadersInNotificationsEnabled, REQUEST)

#define SetIdentityMailFromDomainAsync(...)  SubmitAsync(&SESClient::SetIdentityMailFromDomain, __VA_ARGS__)
#define SetIdentityMailFromDomainCallable(REQUEST)  SubmitCallable(&SESClient::SetIdentityMailFromDomain, REQUEST)

#define SetIdentityNotificationTopicAsync(...)  SubmitAsync(&SESClient::SetIdentityNotificationTopic, __VA_ARGS__)
#define SetIdentityNotificationTopicCallable(REQUEST)  SubmitCallable(&SESClient::SetIdentityNotificationTopic, REQUEST)

#define SetReceiptRulePositionAsync(...)  SubmitAsync(&SESClient::SetReceiptRulePosition, __VA_ARGS__)
#define SetReceiptRulePositionCallable(REQUEST)  SubmitCallable(&SESClient::SetReceiptRulePosition, REQUEST)

#define TestRenderTemplateAsync(...)  SubmitAsync(&SESClient::TestRenderTemplate, __VA_ARGS__)
#define TestRenderTemplateCallable(REQUEST)  SubmitCallable(&SESClient::TestRenderTemplate, REQUEST)

#define UpdateAccountSendingEnabledAsync(...)  SubmitAsync(&SESClient::UpdateAccountSendingEnabled, __VA_ARGS__)
#define UpdateAccountSendingEnabledCallable(REQUEST)  SubmitCallable(&SESClient::UpdateAccountSendingEnabled, REQUEST)

#define UpdateConfigurationSetEventDestinationAsync(...)  SubmitAsync(&SESClient::UpdateConfigurationSetEventDestination, __VA_ARGS__)
#define UpdateConfigurationSetEventDestinationCallable(REQUEST)  SubmitCallable(&SESClient::UpdateConfigurationSetEventDestination, REQUEST)

#define UpdateConfigurationSetReputationMetricsEnabledAsync(...)  SubmitAsync(&SESClient::UpdateConfigurationSetReputationMetricsEnabled, __VA_ARGS__)
#define UpdateConfigurationSetReputationMetricsEnabledCallable(REQUEST)  SubmitCallable(&SESClient::UpdateConfigurationSetReputationMetricsEnabled, REQUEST)

#define UpdateConfigurationSetSendingEnabledAsync(...)  SubmitAsync(&SESClient::UpdateConfigurationSetSendingEnabled, __VA_ARGS__)
#define UpdateConfigurationSetSendingEnabledCallable(REQUEST)  SubmitCallable(&SESClient::UpdateConfigurationSetSendingEnabled, REQUEST)

#define UpdateConfigurationSetTrackingOptionsAsync(...)  SubmitAsync(&SESClient::UpdateConfigurationSetTrackingOptions, __VA_ARGS__)
#define UpdateConfigurationSetTrackingOptionsCallable(REQUEST)  SubmitCallable(&SESClient::UpdateConfigurationSetTrackingOptions, REQUEST)

#define UpdateCustomVerificationEmailTemplateAsync(...)  SubmitAsync(&SESClient::UpdateCustomVerificationEmailTemplate, __VA_ARGS__)
#define UpdateCustomVerificationEmailTemplateCallable(REQUEST)  SubmitCallable(&SESClient::UpdateCustomVerificationEmailTemplate, REQUEST)

#define UpdateReceiptRuleAsync(...)  SubmitAsync(&SESClient::UpdateReceiptRule, __VA_ARGS__)
#define UpdateReceiptRuleCallable(REQUEST)  SubmitCallable(&SESClient::UpdateReceiptRule, REQUEST)

#define UpdateTemplateAsync(...)  SubmitAsync(&SESClient::UpdateTemplate, __VA_ARGS__)
#define UpdateTemplateCallable(REQUEST)  SubmitCallable(&SESClient::UpdateTemplate, REQUEST)

#define VerifyDomainDkimAsync(...)  SubmitAsync(&SESClient::VerifyDomainDkim, __VA_ARGS__)
#define VerifyDomainDkimCallable(REQUEST)  SubmitCallable(&SESClient::VerifyDomainDkim, REQUEST)

#define VerifyDomainIdentityAsync(...)  SubmitAsync(&SESClient::VerifyDomainIdentity, __VA_ARGS__)
#define VerifyDomainIdentityCallable(REQUEST)  SubmitCallable(&SESClient::VerifyDomainIdentity, REQUEST)

#define VerifyEmailAddressAsync(...)  SubmitAsync(&SESClient::VerifyEmailAddress, __VA_ARGS__)
#define VerifyEmailAddressCallable(REQUEST)  SubmitCallable(&SESClient::VerifyEmailAddress, REQUEST)

#define VerifyEmailIdentityAsync(...)  SubmitAsync(&SESClient::VerifyEmailIdentity, __VA_ARGS__)
#define VerifyEmailIdentityCallable(REQUEST)  SubmitCallable(&SESClient::VerifyEmailIdentity, REQUEST)

