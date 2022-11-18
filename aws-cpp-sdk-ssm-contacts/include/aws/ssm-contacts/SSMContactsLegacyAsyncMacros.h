/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#define AcceptPageAsync(...)  SubmitAsync(&SSMContactsClient::AcceptPage, __VA_ARGS__)
#define AcceptPageCallable(REQUEST)  SubmitCallable(&SSMContactsClient::AcceptPage, REQUEST)

#define ActivateContactChannelAsync(...)  SubmitAsync(&SSMContactsClient::ActivateContactChannel, __VA_ARGS__)
#define ActivateContactChannelCallable(REQUEST)  SubmitCallable(&SSMContactsClient::ActivateContactChannel, REQUEST)

#define CreateContactAsync(...)  SubmitAsync(&SSMContactsClient::CreateContact, __VA_ARGS__)
#define CreateContactCallable(REQUEST)  SubmitCallable(&SSMContactsClient::CreateContact, REQUEST)

#define CreateContactChannelAsync(...)  SubmitAsync(&SSMContactsClient::CreateContactChannel, __VA_ARGS__)
#define CreateContactChannelCallable(REQUEST)  SubmitCallable(&SSMContactsClient::CreateContactChannel, REQUEST)

#define DeactivateContactChannelAsync(...)  SubmitAsync(&SSMContactsClient::DeactivateContactChannel, __VA_ARGS__)
#define DeactivateContactChannelCallable(REQUEST)  SubmitCallable(&SSMContactsClient::DeactivateContactChannel, REQUEST)

#define DeleteContactAsync(...)  SubmitAsync(&SSMContactsClient::DeleteContact, __VA_ARGS__)
#define DeleteContactCallable(REQUEST)  SubmitCallable(&SSMContactsClient::DeleteContact, REQUEST)

#define DeleteContactChannelAsync(...)  SubmitAsync(&SSMContactsClient::DeleteContactChannel, __VA_ARGS__)
#define DeleteContactChannelCallable(REQUEST)  SubmitCallable(&SSMContactsClient::DeleteContactChannel, REQUEST)

#define DescribeEngagementAsync(...)  SubmitAsync(&SSMContactsClient::DescribeEngagement, __VA_ARGS__)
#define DescribeEngagementCallable(REQUEST)  SubmitCallable(&SSMContactsClient::DescribeEngagement, REQUEST)

#define DescribePageAsync(...)  SubmitAsync(&SSMContactsClient::DescribePage, __VA_ARGS__)
#define DescribePageCallable(REQUEST)  SubmitCallable(&SSMContactsClient::DescribePage, REQUEST)

#define GetContactAsync(...)  SubmitAsync(&SSMContactsClient::GetContact, __VA_ARGS__)
#define GetContactCallable(REQUEST)  SubmitCallable(&SSMContactsClient::GetContact, REQUEST)

#define GetContactChannelAsync(...)  SubmitAsync(&SSMContactsClient::GetContactChannel, __VA_ARGS__)
#define GetContactChannelCallable(REQUEST)  SubmitCallable(&SSMContactsClient::GetContactChannel, REQUEST)

#define GetContactPolicyAsync(...)  SubmitAsync(&SSMContactsClient::GetContactPolicy, __VA_ARGS__)
#define GetContactPolicyCallable(REQUEST)  SubmitCallable(&SSMContactsClient::GetContactPolicy, REQUEST)

#define ListContactChannelsAsync(...)  SubmitAsync(&SSMContactsClient::ListContactChannels, __VA_ARGS__)
#define ListContactChannelsCallable(REQUEST)  SubmitCallable(&SSMContactsClient::ListContactChannels, REQUEST)

#define ListContactsAsync(...)  SubmitAsync(&SSMContactsClient::ListContacts, __VA_ARGS__)
#define ListContactsCallable(REQUEST)  SubmitCallable(&SSMContactsClient::ListContacts, REQUEST)

#define ListEngagementsAsync(...)  SubmitAsync(&SSMContactsClient::ListEngagements, __VA_ARGS__)
#define ListEngagementsCallable(REQUEST)  SubmitCallable(&SSMContactsClient::ListEngagements, REQUEST)

#define ListPageReceiptsAsync(...)  SubmitAsync(&SSMContactsClient::ListPageReceipts, __VA_ARGS__)
#define ListPageReceiptsCallable(REQUEST)  SubmitCallable(&SSMContactsClient::ListPageReceipts, REQUEST)

#define ListPagesByContactAsync(...)  SubmitAsync(&SSMContactsClient::ListPagesByContact, __VA_ARGS__)
#define ListPagesByContactCallable(REQUEST)  SubmitCallable(&SSMContactsClient::ListPagesByContact, REQUEST)

#define ListPagesByEngagementAsync(...)  SubmitAsync(&SSMContactsClient::ListPagesByEngagement, __VA_ARGS__)
#define ListPagesByEngagementCallable(REQUEST)  SubmitCallable(&SSMContactsClient::ListPagesByEngagement, REQUEST)

#define ListTagsForResourceAsync(...)  SubmitAsync(&SSMContactsClient::ListTagsForResource, __VA_ARGS__)
#define ListTagsForResourceCallable(REQUEST)  SubmitCallable(&SSMContactsClient::ListTagsForResource, REQUEST)

#define PutContactPolicyAsync(...)  SubmitAsync(&SSMContactsClient::PutContactPolicy, __VA_ARGS__)
#define PutContactPolicyCallable(REQUEST)  SubmitCallable(&SSMContactsClient::PutContactPolicy, REQUEST)

#define SendActivationCodeAsync(...)  SubmitAsync(&SSMContactsClient::SendActivationCode, __VA_ARGS__)
#define SendActivationCodeCallable(REQUEST)  SubmitCallable(&SSMContactsClient::SendActivationCode, REQUEST)

#define StartEngagementAsync(...)  SubmitAsync(&SSMContactsClient::StartEngagement, __VA_ARGS__)
#define StartEngagementCallable(REQUEST)  SubmitCallable(&SSMContactsClient::StartEngagement, REQUEST)

#define StopEngagementAsync(...)  SubmitAsync(&SSMContactsClient::StopEngagement, __VA_ARGS__)
#define StopEngagementCallable(REQUEST)  SubmitCallable(&SSMContactsClient::StopEngagement, REQUEST)

#define TagResourceAsync(...)  SubmitAsync(&SSMContactsClient::TagResource, __VA_ARGS__)
#define TagResourceCallable(REQUEST)  SubmitCallable(&SSMContactsClient::TagResource, REQUEST)

#define UntagResourceAsync(...)  SubmitAsync(&SSMContactsClient::UntagResource, __VA_ARGS__)
#define UntagResourceCallable(REQUEST)  SubmitCallable(&SSMContactsClient::UntagResource, REQUEST)

#define UpdateContactAsync(...)  SubmitAsync(&SSMContactsClient::UpdateContact, __VA_ARGS__)
#define UpdateContactCallable(REQUEST)  SubmitCallable(&SSMContactsClient::UpdateContact, REQUEST)

#define UpdateContactChannelAsync(...)  SubmitAsync(&SSMContactsClient::UpdateContactChannel, __VA_ARGS__)
#define UpdateContactChannelCallable(REQUEST)  SubmitCallable(&SSMContactsClient::UpdateContactChannel, REQUEST)

