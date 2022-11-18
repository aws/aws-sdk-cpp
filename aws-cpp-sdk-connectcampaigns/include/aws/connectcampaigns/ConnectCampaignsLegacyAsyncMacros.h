/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#define CreateCampaignAsync(...)  SubmitAsync(&ConnectCampaignsClient::CreateCampaign, __VA_ARGS__)
#define CreateCampaignCallable(REQUEST)  SubmitCallable(&ConnectCampaignsClient::CreateCampaign, REQUEST)

#define DeleteCampaignAsync(...)  SubmitAsync(&ConnectCampaignsClient::DeleteCampaign, __VA_ARGS__)
#define DeleteCampaignCallable(REQUEST)  SubmitCallable(&ConnectCampaignsClient::DeleteCampaign, REQUEST)

#define DeleteConnectInstanceConfigAsync(...)  SubmitAsync(&ConnectCampaignsClient::DeleteConnectInstanceConfig, __VA_ARGS__)
#define DeleteConnectInstanceConfigCallable(REQUEST)  SubmitCallable(&ConnectCampaignsClient::DeleteConnectInstanceConfig, REQUEST)

#define DeleteInstanceOnboardingJobAsync(...)  SubmitAsync(&ConnectCampaignsClient::DeleteInstanceOnboardingJob, __VA_ARGS__)
#define DeleteInstanceOnboardingJobCallable(REQUEST)  SubmitCallable(&ConnectCampaignsClient::DeleteInstanceOnboardingJob, REQUEST)

#define DescribeCampaignAsync(...)  SubmitAsync(&ConnectCampaignsClient::DescribeCampaign, __VA_ARGS__)
#define DescribeCampaignCallable(REQUEST)  SubmitCallable(&ConnectCampaignsClient::DescribeCampaign, REQUEST)

#define GetCampaignStateAsync(...)  SubmitAsync(&ConnectCampaignsClient::GetCampaignState, __VA_ARGS__)
#define GetCampaignStateCallable(REQUEST)  SubmitCallable(&ConnectCampaignsClient::GetCampaignState, REQUEST)

#define GetCampaignStateBatchAsync(...)  SubmitAsync(&ConnectCampaignsClient::GetCampaignStateBatch, __VA_ARGS__)
#define GetCampaignStateBatchCallable(REQUEST)  SubmitCallable(&ConnectCampaignsClient::GetCampaignStateBatch, REQUEST)

#define GetConnectInstanceConfigAsync(...)  SubmitAsync(&ConnectCampaignsClient::GetConnectInstanceConfig, __VA_ARGS__)
#define GetConnectInstanceConfigCallable(REQUEST)  SubmitCallable(&ConnectCampaignsClient::GetConnectInstanceConfig, REQUEST)

#define GetInstanceOnboardingJobStatusAsync(...)  SubmitAsync(&ConnectCampaignsClient::GetInstanceOnboardingJobStatus, __VA_ARGS__)
#define GetInstanceOnboardingJobStatusCallable(REQUEST)  SubmitCallable(&ConnectCampaignsClient::GetInstanceOnboardingJobStatus, REQUEST)

#define ListCampaignsAsync(...)  SubmitAsync(&ConnectCampaignsClient::ListCampaigns, __VA_ARGS__)
#define ListCampaignsCallable(REQUEST)  SubmitCallable(&ConnectCampaignsClient::ListCampaigns, REQUEST)

#define ListTagsForResourceAsync(...)  SubmitAsync(&ConnectCampaignsClient::ListTagsForResource, __VA_ARGS__)
#define ListTagsForResourceCallable(REQUEST)  SubmitCallable(&ConnectCampaignsClient::ListTagsForResource, REQUEST)

#define PauseCampaignAsync(...)  SubmitAsync(&ConnectCampaignsClient::PauseCampaign, __VA_ARGS__)
#define PauseCampaignCallable(REQUEST)  SubmitCallable(&ConnectCampaignsClient::PauseCampaign, REQUEST)

#define PutDialRequestBatchAsync(...)  SubmitAsync(&ConnectCampaignsClient::PutDialRequestBatch, __VA_ARGS__)
#define PutDialRequestBatchCallable(REQUEST)  SubmitCallable(&ConnectCampaignsClient::PutDialRequestBatch, REQUEST)

#define ResumeCampaignAsync(...)  SubmitAsync(&ConnectCampaignsClient::ResumeCampaign, __VA_ARGS__)
#define ResumeCampaignCallable(REQUEST)  SubmitCallable(&ConnectCampaignsClient::ResumeCampaign, REQUEST)

#define StartCampaignAsync(...)  SubmitAsync(&ConnectCampaignsClient::StartCampaign, __VA_ARGS__)
#define StartCampaignCallable(REQUEST)  SubmitCallable(&ConnectCampaignsClient::StartCampaign, REQUEST)

#define StartInstanceOnboardingJobAsync(...)  SubmitAsync(&ConnectCampaignsClient::StartInstanceOnboardingJob, __VA_ARGS__)
#define StartInstanceOnboardingJobCallable(REQUEST)  SubmitCallable(&ConnectCampaignsClient::StartInstanceOnboardingJob, REQUEST)

#define StopCampaignAsync(...)  SubmitAsync(&ConnectCampaignsClient::StopCampaign, __VA_ARGS__)
#define StopCampaignCallable(REQUEST)  SubmitCallable(&ConnectCampaignsClient::StopCampaign, REQUEST)

#define TagResourceAsync(...)  SubmitAsync(&ConnectCampaignsClient::TagResource, __VA_ARGS__)
#define TagResourceCallable(REQUEST)  SubmitCallable(&ConnectCampaignsClient::TagResource, REQUEST)

#define UntagResourceAsync(...)  SubmitAsync(&ConnectCampaignsClient::UntagResource, __VA_ARGS__)
#define UntagResourceCallable(REQUEST)  SubmitCallable(&ConnectCampaignsClient::UntagResource, REQUEST)

#define UpdateCampaignDialerConfigAsync(...)  SubmitAsync(&ConnectCampaignsClient::UpdateCampaignDialerConfig, __VA_ARGS__)
#define UpdateCampaignDialerConfigCallable(REQUEST)  SubmitCallable(&ConnectCampaignsClient::UpdateCampaignDialerConfig, REQUEST)

#define UpdateCampaignNameAsync(...)  SubmitAsync(&ConnectCampaignsClient::UpdateCampaignName, __VA_ARGS__)
#define UpdateCampaignNameCallable(REQUEST)  SubmitCallable(&ConnectCampaignsClient::UpdateCampaignName, REQUEST)

#define UpdateCampaignOutboundCallConfigAsync(...)  SubmitAsync(&ConnectCampaignsClient::UpdateCampaignOutboundCallConfig, __VA_ARGS__)
#define UpdateCampaignOutboundCallConfigCallable(REQUEST)  SubmitCallable(&ConnectCampaignsClient::UpdateCampaignOutboundCallConfig, REQUEST)

