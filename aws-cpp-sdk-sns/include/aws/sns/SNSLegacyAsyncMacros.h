/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#define AddPermissionAsync(...)  SubmitAsync(&SNSClient::AddPermission, __VA_ARGS__)
#define AddPermissionCallable(REQUEST)  SubmitCallable(&SNSClient::AddPermission, REQUEST)

#define CheckIfPhoneNumberIsOptedOutAsync(...)  SubmitAsync(&SNSClient::CheckIfPhoneNumberIsOptedOut, __VA_ARGS__)
#define CheckIfPhoneNumberIsOptedOutCallable(REQUEST)  SubmitCallable(&SNSClient::CheckIfPhoneNumberIsOptedOut, REQUEST)

#define ConfirmSubscriptionAsync(...)  SubmitAsync(&SNSClient::ConfirmSubscription, __VA_ARGS__)
#define ConfirmSubscriptionCallable(REQUEST)  SubmitCallable(&SNSClient::ConfirmSubscription, REQUEST)

#define CreatePlatformApplicationAsync(...)  SubmitAsync(&SNSClient::CreatePlatformApplication, __VA_ARGS__)
#define CreatePlatformApplicationCallable(REQUEST)  SubmitCallable(&SNSClient::CreatePlatformApplication, REQUEST)

#define CreatePlatformEndpointAsync(...)  SubmitAsync(&SNSClient::CreatePlatformEndpoint, __VA_ARGS__)
#define CreatePlatformEndpointCallable(REQUEST)  SubmitCallable(&SNSClient::CreatePlatformEndpoint, REQUEST)

#define CreateSMSSandboxPhoneNumberAsync(...)  SubmitAsync(&SNSClient::CreateSMSSandboxPhoneNumber, __VA_ARGS__)
#define CreateSMSSandboxPhoneNumberCallable(REQUEST)  SubmitCallable(&SNSClient::CreateSMSSandboxPhoneNumber, REQUEST)

#define CreateTopicAsync(...)  SubmitAsync(&SNSClient::CreateTopic, __VA_ARGS__)
#define CreateTopicCallable(REQUEST)  SubmitCallable(&SNSClient::CreateTopic, REQUEST)

#define DeleteEndpointAsync(...)  SubmitAsync(&SNSClient::DeleteEndpoint, __VA_ARGS__)
#define DeleteEndpointCallable(REQUEST)  SubmitCallable(&SNSClient::DeleteEndpoint, REQUEST)

#define DeletePlatformApplicationAsync(...)  SubmitAsync(&SNSClient::DeletePlatformApplication, __VA_ARGS__)
#define DeletePlatformApplicationCallable(REQUEST)  SubmitCallable(&SNSClient::DeletePlatformApplication, REQUEST)

#define DeleteSMSSandboxPhoneNumberAsync(...)  SubmitAsync(&SNSClient::DeleteSMSSandboxPhoneNumber, __VA_ARGS__)
#define DeleteSMSSandboxPhoneNumberCallable(REQUEST)  SubmitCallable(&SNSClient::DeleteSMSSandboxPhoneNumber, REQUEST)

#define DeleteTopicAsync(...)  SubmitAsync(&SNSClient::DeleteTopic, __VA_ARGS__)
#define DeleteTopicCallable(REQUEST)  SubmitCallable(&SNSClient::DeleteTopic, REQUEST)

#define GetDataProtectionPolicyAsync(...)  SubmitAsync(&SNSClient::GetDataProtectionPolicy, __VA_ARGS__)
#define GetDataProtectionPolicyCallable(REQUEST)  SubmitCallable(&SNSClient::GetDataProtectionPolicy, REQUEST)

#define GetEndpointAttributesAsync(...)  SubmitAsync(&SNSClient::GetEndpointAttributes, __VA_ARGS__)
#define GetEndpointAttributesCallable(REQUEST)  SubmitCallable(&SNSClient::GetEndpointAttributes, REQUEST)

#define GetPlatformApplicationAttributesAsync(...)  SubmitAsync(&SNSClient::GetPlatformApplicationAttributes, __VA_ARGS__)
#define GetPlatformApplicationAttributesCallable(REQUEST)  SubmitCallable(&SNSClient::GetPlatformApplicationAttributes, REQUEST)

#define GetSMSAttributesAsync(...)  SubmitAsync(&SNSClient::GetSMSAttributes, __VA_ARGS__)
#define GetSMSAttributesCallable(REQUEST)  SubmitCallable(&SNSClient::GetSMSAttributes, REQUEST)

#define GetSMSSandboxAccountStatusAsync(...)  SubmitAsync(&SNSClient::GetSMSSandboxAccountStatus, __VA_ARGS__)
#define GetSMSSandboxAccountStatusCallable(REQUEST)  SubmitCallable(&SNSClient::GetSMSSandboxAccountStatus, REQUEST)

#define GetSubscriptionAttributesAsync(...)  SubmitAsync(&SNSClient::GetSubscriptionAttributes, __VA_ARGS__)
#define GetSubscriptionAttributesCallable(REQUEST)  SubmitCallable(&SNSClient::GetSubscriptionAttributes, REQUEST)

#define GetTopicAttributesAsync(...)  SubmitAsync(&SNSClient::GetTopicAttributes, __VA_ARGS__)
#define GetTopicAttributesCallable(REQUEST)  SubmitCallable(&SNSClient::GetTopicAttributes, REQUEST)

#define ListEndpointsByPlatformApplicationAsync(...)  SubmitAsync(&SNSClient::ListEndpointsByPlatformApplication, __VA_ARGS__)
#define ListEndpointsByPlatformApplicationCallable(REQUEST)  SubmitCallable(&SNSClient::ListEndpointsByPlatformApplication, REQUEST)

#define ListOriginationNumbersAsync(...)  SubmitAsync(&SNSClient::ListOriginationNumbers, __VA_ARGS__)
#define ListOriginationNumbersCallable(REQUEST)  SubmitCallable(&SNSClient::ListOriginationNumbers, REQUEST)

#define ListPhoneNumbersOptedOutAsync(...)  SubmitAsync(&SNSClient::ListPhoneNumbersOptedOut, __VA_ARGS__)
#define ListPhoneNumbersOptedOutCallable(REQUEST)  SubmitCallable(&SNSClient::ListPhoneNumbersOptedOut, REQUEST)

#define ListPlatformApplicationsAsync(...)  SubmitAsync(&SNSClient::ListPlatformApplications, __VA_ARGS__)
#define ListPlatformApplicationsCallable(REQUEST)  SubmitCallable(&SNSClient::ListPlatformApplications, REQUEST)

#define ListSMSSandboxPhoneNumbersAsync(...)  SubmitAsync(&SNSClient::ListSMSSandboxPhoneNumbers, __VA_ARGS__)
#define ListSMSSandboxPhoneNumbersCallable(REQUEST)  SubmitCallable(&SNSClient::ListSMSSandboxPhoneNumbers, REQUEST)

#define ListSubscriptionsAsync(...)  SubmitAsync(&SNSClient::ListSubscriptions, __VA_ARGS__)
#define ListSubscriptionsCallable(REQUEST)  SubmitCallable(&SNSClient::ListSubscriptions, REQUEST)

#define ListSubscriptionsByTopicAsync(...)  SubmitAsync(&SNSClient::ListSubscriptionsByTopic, __VA_ARGS__)
#define ListSubscriptionsByTopicCallable(REQUEST)  SubmitCallable(&SNSClient::ListSubscriptionsByTopic, REQUEST)

#define ListTagsForResourceAsync(...)  SubmitAsync(&SNSClient::ListTagsForResource, __VA_ARGS__)
#define ListTagsForResourceCallable(REQUEST)  SubmitCallable(&SNSClient::ListTagsForResource, REQUEST)

#define ListTopicsAsync(...)  SubmitAsync(&SNSClient::ListTopics, __VA_ARGS__)
#define ListTopicsCallable(REQUEST)  SubmitCallable(&SNSClient::ListTopics, REQUEST)

#define OptInPhoneNumberAsync(...)  SubmitAsync(&SNSClient::OptInPhoneNumber, __VA_ARGS__)
#define OptInPhoneNumberCallable(REQUEST)  SubmitCallable(&SNSClient::OptInPhoneNumber, REQUEST)

#define PublishAsync(...)  SubmitAsync(&SNSClient::Publish, __VA_ARGS__)
#define PublishCallable(REQUEST)  SubmitCallable(&SNSClient::Publish, REQUEST)

#define PublishBatchAsync(...)  SubmitAsync(&SNSClient::PublishBatch, __VA_ARGS__)
#define PublishBatchCallable(REQUEST)  SubmitCallable(&SNSClient::PublishBatch, REQUEST)

#define PutDataProtectionPolicyAsync(...)  SubmitAsync(&SNSClient::PutDataProtectionPolicy, __VA_ARGS__)
#define PutDataProtectionPolicyCallable(REQUEST)  SubmitCallable(&SNSClient::PutDataProtectionPolicy, REQUEST)

#define RemovePermissionAsync(...)  SubmitAsync(&SNSClient::RemovePermission, __VA_ARGS__)
#define RemovePermissionCallable(REQUEST)  SubmitCallable(&SNSClient::RemovePermission, REQUEST)

#define SetEndpointAttributesAsync(...)  SubmitAsync(&SNSClient::SetEndpointAttributes, __VA_ARGS__)
#define SetEndpointAttributesCallable(REQUEST)  SubmitCallable(&SNSClient::SetEndpointAttributes, REQUEST)

#define SetPlatformApplicationAttributesAsync(...)  SubmitAsync(&SNSClient::SetPlatformApplicationAttributes, __VA_ARGS__)
#define SetPlatformApplicationAttributesCallable(REQUEST)  SubmitCallable(&SNSClient::SetPlatformApplicationAttributes, REQUEST)

#define SetSMSAttributesAsync(...)  SubmitAsync(&SNSClient::SetSMSAttributes, __VA_ARGS__)
#define SetSMSAttributesCallable(REQUEST)  SubmitCallable(&SNSClient::SetSMSAttributes, REQUEST)

#define SetSubscriptionAttributesAsync(...)  SubmitAsync(&SNSClient::SetSubscriptionAttributes, __VA_ARGS__)
#define SetSubscriptionAttributesCallable(REQUEST)  SubmitCallable(&SNSClient::SetSubscriptionAttributes, REQUEST)

#define SetTopicAttributesAsync(...)  SubmitAsync(&SNSClient::SetTopicAttributes, __VA_ARGS__)
#define SetTopicAttributesCallable(REQUEST)  SubmitCallable(&SNSClient::SetTopicAttributes, REQUEST)

#define SubscribeAsync(...)  SubmitAsync(&SNSClient::Subscribe, __VA_ARGS__)
#define SubscribeCallable(REQUEST)  SubmitCallable(&SNSClient::Subscribe, REQUEST)

#define TagResourceAsync(...)  SubmitAsync(&SNSClient::TagResource, __VA_ARGS__)
#define TagResourceCallable(REQUEST)  SubmitCallable(&SNSClient::TagResource, REQUEST)

#define UnsubscribeAsync(...)  SubmitAsync(&SNSClient::Unsubscribe, __VA_ARGS__)
#define UnsubscribeCallable(REQUEST)  SubmitCallable(&SNSClient::Unsubscribe, REQUEST)

#define UntagResourceAsync(...)  SubmitAsync(&SNSClient::UntagResource, __VA_ARGS__)
#define UntagResourceCallable(REQUEST)  SubmitCallable(&SNSClient::UntagResource, REQUEST)

#define VerifySMSSandboxPhoneNumberAsync(...)  SubmitAsync(&SNSClient::VerifySMSSandboxPhoneNumber, __VA_ARGS__)
#define VerifySMSSandboxPhoneNumberCallable(REQUEST)  SubmitCallable(&SNSClient::VerifySMSSandboxPhoneNumber, REQUEST)

