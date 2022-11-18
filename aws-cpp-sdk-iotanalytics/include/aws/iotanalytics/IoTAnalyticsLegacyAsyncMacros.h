/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#define BatchPutMessageAsync(...)  SubmitAsync(&IoTAnalyticsClient::BatchPutMessage, __VA_ARGS__)
#define BatchPutMessageCallable(REQUEST)  SubmitCallable(&IoTAnalyticsClient::BatchPutMessage, REQUEST)

#define CancelPipelineReprocessingAsync(...)  SubmitAsync(&IoTAnalyticsClient::CancelPipelineReprocessing, __VA_ARGS__)
#define CancelPipelineReprocessingCallable(REQUEST)  SubmitCallable(&IoTAnalyticsClient::CancelPipelineReprocessing, REQUEST)

#define CreateChannelAsync(...)  SubmitAsync(&IoTAnalyticsClient::CreateChannel, __VA_ARGS__)
#define CreateChannelCallable(REQUEST)  SubmitCallable(&IoTAnalyticsClient::CreateChannel, REQUEST)

#define CreateDatasetAsync(...)  SubmitAsync(&IoTAnalyticsClient::CreateDataset, __VA_ARGS__)
#define CreateDatasetCallable(REQUEST)  SubmitCallable(&IoTAnalyticsClient::CreateDataset, REQUEST)

#define CreateDatasetContentAsync(...)  SubmitAsync(&IoTAnalyticsClient::CreateDatasetContent, __VA_ARGS__)
#define CreateDatasetContentCallable(REQUEST)  SubmitCallable(&IoTAnalyticsClient::CreateDatasetContent, REQUEST)

#define CreateDatastoreAsync(...)  SubmitAsync(&IoTAnalyticsClient::CreateDatastore, __VA_ARGS__)
#define CreateDatastoreCallable(REQUEST)  SubmitCallable(&IoTAnalyticsClient::CreateDatastore, REQUEST)

#define CreatePipelineAsync(...)  SubmitAsync(&IoTAnalyticsClient::CreatePipeline, __VA_ARGS__)
#define CreatePipelineCallable(REQUEST)  SubmitCallable(&IoTAnalyticsClient::CreatePipeline, REQUEST)

#define DeleteChannelAsync(...)  SubmitAsync(&IoTAnalyticsClient::DeleteChannel, __VA_ARGS__)
#define DeleteChannelCallable(REQUEST)  SubmitCallable(&IoTAnalyticsClient::DeleteChannel, REQUEST)

#define DeleteDatasetAsync(...)  SubmitAsync(&IoTAnalyticsClient::DeleteDataset, __VA_ARGS__)
#define DeleteDatasetCallable(REQUEST)  SubmitCallable(&IoTAnalyticsClient::DeleteDataset, REQUEST)

#define DeleteDatasetContentAsync(...)  SubmitAsync(&IoTAnalyticsClient::DeleteDatasetContent, __VA_ARGS__)
#define DeleteDatasetContentCallable(REQUEST)  SubmitCallable(&IoTAnalyticsClient::DeleteDatasetContent, REQUEST)

#define DeleteDatastoreAsync(...)  SubmitAsync(&IoTAnalyticsClient::DeleteDatastore, __VA_ARGS__)
#define DeleteDatastoreCallable(REQUEST)  SubmitCallable(&IoTAnalyticsClient::DeleteDatastore, REQUEST)

#define DeletePipelineAsync(...)  SubmitAsync(&IoTAnalyticsClient::DeletePipeline, __VA_ARGS__)
#define DeletePipelineCallable(REQUEST)  SubmitCallable(&IoTAnalyticsClient::DeletePipeline, REQUEST)

#define DescribeChannelAsync(...)  SubmitAsync(&IoTAnalyticsClient::DescribeChannel, __VA_ARGS__)
#define DescribeChannelCallable(REQUEST)  SubmitCallable(&IoTAnalyticsClient::DescribeChannel, REQUEST)

#define DescribeDatasetAsync(...)  SubmitAsync(&IoTAnalyticsClient::DescribeDataset, __VA_ARGS__)
#define DescribeDatasetCallable(REQUEST)  SubmitCallable(&IoTAnalyticsClient::DescribeDataset, REQUEST)

#define DescribeDatastoreAsync(...)  SubmitAsync(&IoTAnalyticsClient::DescribeDatastore, __VA_ARGS__)
#define DescribeDatastoreCallable(REQUEST)  SubmitCallable(&IoTAnalyticsClient::DescribeDatastore, REQUEST)

#define DescribeLoggingOptionsAsync(...)  SubmitAsync(&IoTAnalyticsClient::DescribeLoggingOptions, __VA_ARGS__)
#define DescribeLoggingOptionsCallable(REQUEST)  SubmitCallable(&IoTAnalyticsClient::DescribeLoggingOptions, REQUEST)

#define DescribePipelineAsync(...)  SubmitAsync(&IoTAnalyticsClient::DescribePipeline, __VA_ARGS__)
#define DescribePipelineCallable(REQUEST)  SubmitCallable(&IoTAnalyticsClient::DescribePipeline, REQUEST)

#define GetDatasetContentAsync(...)  SubmitAsync(&IoTAnalyticsClient::GetDatasetContent, __VA_ARGS__)
#define GetDatasetContentCallable(REQUEST)  SubmitCallable(&IoTAnalyticsClient::GetDatasetContent, REQUEST)

#define ListChannelsAsync(...)  SubmitAsync(&IoTAnalyticsClient::ListChannels, __VA_ARGS__)
#define ListChannelsCallable(REQUEST)  SubmitCallable(&IoTAnalyticsClient::ListChannels, REQUEST)

#define ListDatasetContentsAsync(...)  SubmitAsync(&IoTAnalyticsClient::ListDatasetContents, __VA_ARGS__)
#define ListDatasetContentsCallable(REQUEST)  SubmitCallable(&IoTAnalyticsClient::ListDatasetContents, REQUEST)

#define ListDatasetsAsync(...)  SubmitAsync(&IoTAnalyticsClient::ListDatasets, __VA_ARGS__)
#define ListDatasetsCallable(REQUEST)  SubmitCallable(&IoTAnalyticsClient::ListDatasets, REQUEST)

#define ListDatastoresAsync(...)  SubmitAsync(&IoTAnalyticsClient::ListDatastores, __VA_ARGS__)
#define ListDatastoresCallable(REQUEST)  SubmitCallable(&IoTAnalyticsClient::ListDatastores, REQUEST)

#define ListPipelinesAsync(...)  SubmitAsync(&IoTAnalyticsClient::ListPipelines, __VA_ARGS__)
#define ListPipelinesCallable(REQUEST)  SubmitCallable(&IoTAnalyticsClient::ListPipelines, REQUEST)

#define ListTagsForResourceAsync(...)  SubmitAsync(&IoTAnalyticsClient::ListTagsForResource, __VA_ARGS__)
#define ListTagsForResourceCallable(REQUEST)  SubmitCallable(&IoTAnalyticsClient::ListTagsForResource, REQUEST)

#define PutLoggingOptionsAsync(...)  SubmitAsync(&IoTAnalyticsClient::PutLoggingOptions, __VA_ARGS__)
#define PutLoggingOptionsCallable(REQUEST)  SubmitCallable(&IoTAnalyticsClient::PutLoggingOptions, REQUEST)

#define RunPipelineActivityAsync(...)  SubmitAsync(&IoTAnalyticsClient::RunPipelineActivity, __VA_ARGS__)
#define RunPipelineActivityCallable(REQUEST)  SubmitCallable(&IoTAnalyticsClient::RunPipelineActivity, REQUEST)

#define SampleChannelDataAsync(...)  SubmitAsync(&IoTAnalyticsClient::SampleChannelData, __VA_ARGS__)
#define SampleChannelDataCallable(REQUEST)  SubmitCallable(&IoTAnalyticsClient::SampleChannelData, REQUEST)

#define StartPipelineReprocessingAsync(...)  SubmitAsync(&IoTAnalyticsClient::StartPipelineReprocessing, __VA_ARGS__)
#define StartPipelineReprocessingCallable(REQUEST)  SubmitCallable(&IoTAnalyticsClient::StartPipelineReprocessing, REQUEST)

#define TagResourceAsync(...)  SubmitAsync(&IoTAnalyticsClient::TagResource, __VA_ARGS__)
#define TagResourceCallable(REQUEST)  SubmitCallable(&IoTAnalyticsClient::TagResource, REQUEST)

#define UntagResourceAsync(...)  SubmitAsync(&IoTAnalyticsClient::UntagResource, __VA_ARGS__)
#define UntagResourceCallable(REQUEST)  SubmitCallable(&IoTAnalyticsClient::UntagResource, REQUEST)

#define UpdateChannelAsync(...)  SubmitAsync(&IoTAnalyticsClient::UpdateChannel, __VA_ARGS__)
#define UpdateChannelCallable(REQUEST)  SubmitCallable(&IoTAnalyticsClient::UpdateChannel, REQUEST)

#define UpdateDatasetAsync(...)  SubmitAsync(&IoTAnalyticsClient::UpdateDataset, __VA_ARGS__)
#define UpdateDatasetCallable(REQUEST)  SubmitCallable(&IoTAnalyticsClient::UpdateDataset, REQUEST)

#define UpdateDatastoreAsync(...)  SubmitAsync(&IoTAnalyticsClient::UpdateDatastore, __VA_ARGS__)
#define UpdateDatastoreCallable(REQUEST)  SubmitCallable(&IoTAnalyticsClient::UpdateDatastore, REQUEST)

#define UpdatePipelineAsync(...)  SubmitAsync(&IoTAnalyticsClient::UpdatePipeline, __VA_ARGS__)
#define UpdatePipelineCallable(REQUEST)  SubmitCallable(&IoTAnalyticsClient::UpdatePipeline, REQUEST)

