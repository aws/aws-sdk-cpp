/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#define CancelJobAsync(...)  SubmitAsync(&DataExchangeClient::CancelJob, __VA_ARGS__)
#define CancelJobCallable(REQUEST)  SubmitCallable(&DataExchangeClient::CancelJob, REQUEST)

#define CreateDataSetAsync(...)  SubmitAsync(&DataExchangeClient::CreateDataSet, __VA_ARGS__)
#define CreateDataSetCallable(REQUEST)  SubmitCallable(&DataExchangeClient::CreateDataSet, REQUEST)

#define CreateEventActionAsync(...)  SubmitAsync(&DataExchangeClient::CreateEventAction, __VA_ARGS__)
#define CreateEventActionCallable(REQUEST)  SubmitCallable(&DataExchangeClient::CreateEventAction, REQUEST)

#define CreateJobAsync(...)  SubmitAsync(&DataExchangeClient::CreateJob, __VA_ARGS__)
#define CreateJobCallable(REQUEST)  SubmitCallable(&DataExchangeClient::CreateJob, REQUEST)

#define CreateRevisionAsync(...)  SubmitAsync(&DataExchangeClient::CreateRevision, __VA_ARGS__)
#define CreateRevisionCallable(REQUEST)  SubmitCallable(&DataExchangeClient::CreateRevision, REQUEST)

#define DeleteAssetAsync(...)  SubmitAsync(&DataExchangeClient::DeleteAsset, __VA_ARGS__)
#define DeleteAssetCallable(REQUEST)  SubmitCallable(&DataExchangeClient::DeleteAsset, REQUEST)

#define DeleteDataSetAsync(...)  SubmitAsync(&DataExchangeClient::DeleteDataSet, __VA_ARGS__)
#define DeleteDataSetCallable(REQUEST)  SubmitCallable(&DataExchangeClient::DeleteDataSet, REQUEST)

#define DeleteEventActionAsync(...)  SubmitAsync(&DataExchangeClient::DeleteEventAction, __VA_ARGS__)
#define DeleteEventActionCallable(REQUEST)  SubmitCallable(&DataExchangeClient::DeleteEventAction, REQUEST)

#define DeleteRevisionAsync(...)  SubmitAsync(&DataExchangeClient::DeleteRevision, __VA_ARGS__)
#define DeleteRevisionCallable(REQUEST)  SubmitCallable(&DataExchangeClient::DeleteRevision, REQUEST)

#define GetAssetAsync(...)  SubmitAsync(&DataExchangeClient::GetAsset, __VA_ARGS__)
#define GetAssetCallable(REQUEST)  SubmitCallable(&DataExchangeClient::GetAsset, REQUEST)

#define GetDataSetAsync(...)  SubmitAsync(&DataExchangeClient::GetDataSet, __VA_ARGS__)
#define GetDataSetCallable(REQUEST)  SubmitCallable(&DataExchangeClient::GetDataSet, REQUEST)

#define GetEventActionAsync(...)  SubmitAsync(&DataExchangeClient::GetEventAction, __VA_ARGS__)
#define GetEventActionCallable(REQUEST)  SubmitCallable(&DataExchangeClient::GetEventAction, REQUEST)

#define GetJobAsync(...)  SubmitAsync(&DataExchangeClient::GetJob, __VA_ARGS__)
#define GetJobCallable(REQUEST)  SubmitCallable(&DataExchangeClient::GetJob, REQUEST)

#define GetRevisionAsync(...)  SubmitAsync(&DataExchangeClient::GetRevision, __VA_ARGS__)
#define GetRevisionCallable(REQUEST)  SubmitCallable(&DataExchangeClient::GetRevision, REQUEST)

#define ListDataSetRevisionsAsync(...)  SubmitAsync(&DataExchangeClient::ListDataSetRevisions, __VA_ARGS__)
#define ListDataSetRevisionsCallable(REQUEST)  SubmitCallable(&DataExchangeClient::ListDataSetRevisions, REQUEST)

#define ListDataSetsAsync(...)  SubmitAsync(&DataExchangeClient::ListDataSets, __VA_ARGS__)
#define ListDataSetsCallable(REQUEST)  SubmitCallable(&DataExchangeClient::ListDataSets, REQUEST)

#define ListEventActionsAsync(...)  SubmitAsync(&DataExchangeClient::ListEventActions, __VA_ARGS__)
#define ListEventActionsCallable(REQUEST)  SubmitCallable(&DataExchangeClient::ListEventActions, REQUEST)

#define ListJobsAsync(...)  SubmitAsync(&DataExchangeClient::ListJobs, __VA_ARGS__)
#define ListJobsCallable(REQUEST)  SubmitCallable(&DataExchangeClient::ListJobs, REQUEST)

#define ListRevisionAssetsAsync(...)  SubmitAsync(&DataExchangeClient::ListRevisionAssets, __VA_ARGS__)
#define ListRevisionAssetsCallable(REQUEST)  SubmitCallable(&DataExchangeClient::ListRevisionAssets, REQUEST)

#define ListTagsForResourceAsync(...)  SubmitAsync(&DataExchangeClient::ListTagsForResource, __VA_ARGS__)
#define ListTagsForResourceCallable(REQUEST)  SubmitCallable(&DataExchangeClient::ListTagsForResource, REQUEST)

#define RevokeRevisionAsync(...)  SubmitAsync(&DataExchangeClient::RevokeRevision, __VA_ARGS__)
#define RevokeRevisionCallable(REQUEST)  SubmitCallable(&DataExchangeClient::RevokeRevision, REQUEST)

#define SendApiAssetAsync(...)  SubmitAsync(&DataExchangeClient::SendApiAsset, __VA_ARGS__)
#define SendApiAssetCallable(REQUEST)  SubmitCallable(&DataExchangeClient::SendApiAsset, REQUEST)

#define StartJobAsync(...)  SubmitAsync(&DataExchangeClient::StartJob, __VA_ARGS__)
#define StartJobCallable(REQUEST)  SubmitCallable(&DataExchangeClient::StartJob, REQUEST)

#define TagResourceAsync(...)  SubmitAsync(&DataExchangeClient::TagResource, __VA_ARGS__)
#define TagResourceCallable(REQUEST)  SubmitCallable(&DataExchangeClient::TagResource, REQUEST)

#define UntagResourceAsync(...)  SubmitAsync(&DataExchangeClient::UntagResource, __VA_ARGS__)
#define UntagResourceCallable(REQUEST)  SubmitCallable(&DataExchangeClient::UntagResource, REQUEST)

#define UpdateAssetAsync(...)  SubmitAsync(&DataExchangeClient::UpdateAsset, __VA_ARGS__)
#define UpdateAssetCallable(REQUEST)  SubmitCallable(&DataExchangeClient::UpdateAsset, REQUEST)

#define UpdateDataSetAsync(...)  SubmitAsync(&DataExchangeClient::UpdateDataSet, __VA_ARGS__)
#define UpdateDataSetCallable(REQUEST)  SubmitCallable(&DataExchangeClient::UpdateDataSet, REQUEST)

#define UpdateEventActionAsync(...)  SubmitAsync(&DataExchangeClient::UpdateEventAction, __VA_ARGS__)
#define UpdateEventActionCallable(REQUEST)  SubmitCallable(&DataExchangeClient::UpdateEventAction, REQUEST)

#define UpdateRevisionAsync(...)  SubmitAsync(&DataExchangeClient::UpdateRevision, __VA_ARGS__)
#define UpdateRevisionCallable(REQUEST)  SubmitCallable(&DataExchangeClient::UpdateRevision, REQUEST)

