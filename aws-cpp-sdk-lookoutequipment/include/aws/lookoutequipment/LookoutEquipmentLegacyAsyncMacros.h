/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#define CreateDatasetAsync(...)  SubmitAsync(&LookoutEquipmentClient::CreateDataset, __VA_ARGS__)
#define CreateDatasetCallable(REQUEST)  SubmitCallable(&LookoutEquipmentClient::CreateDataset, REQUEST)

#define CreateInferenceSchedulerAsync(...)  SubmitAsync(&LookoutEquipmentClient::CreateInferenceScheduler, __VA_ARGS__)
#define CreateInferenceSchedulerCallable(REQUEST)  SubmitCallable(&LookoutEquipmentClient::CreateInferenceScheduler, REQUEST)

#define CreateLabelAsync(...)  SubmitAsync(&LookoutEquipmentClient::CreateLabel, __VA_ARGS__)
#define CreateLabelCallable(REQUEST)  SubmitCallable(&LookoutEquipmentClient::CreateLabel, REQUEST)

#define CreateLabelGroupAsync(...)  SubmitAsync(&LookoutEquipmentClient::CreateLabelGroup, __VA_ARGS__)
#define CreateLabelGroupCallable(REQUEST)  SubmitCallable(&LookoutEquipmentClient::CreateLabelGroup, REQUEST)

#define CreateModelAsync(...)  SubmitAsync(&LookoutEquipmentClient::CreateModel, __VA_ARGS__)
#define CreateModelCallable(REQUEST)  SubmitCallable(&LookoutEquipmentClient::CreateModel, REQUEST)

#define DeleteDatasetAsync(...)  SubmitAsync(&LookoutEquipmentClient::DeleteDataset, __VA_ARGS__)
#define DeleteDatasetCallable(REQUEST)  SubmitCallable(&LookoutEquipmentClient::DeleteDataset, REQUEST)

#define DeleteInferenceSchedulerAsync(...)  SubmitAsync(&LookoutEquipmentClient::DeleteInferenceScheduler, __VA_ARGS__)
#define DeleteInferenceSchedulerCallable(REQUEST)  SubmitCallable(&LookoutEquipmentClient::DeleteInferenceScheduler, REQUEST)

#define DeleteLabelAsync(...)  SubmitAsync(&LookoutEquipmentClient::DeleteLabel, __VA_ARGS__)
#define DeleteLabelCallable(REQUEST)  SubmitCallable(&LookoutEquipmentClient::DeleteLabel, REQUEST)

#define DeleteLabelGroupAsync(...)  SubmitAsync(&LookoutEquipmentClient::DeleteLabelGroup, __VA_ARGS__)
#define DeleteLabelGroupCallable(REQUEST)  SubmitCallable(&LookoutEquipmentClient::DeleteLabelGroup, REQUEST)

#define DeleteModelAsync(...)  SubmitAsync(&LookoutEquipmentClient::DeleteModel, __VA_ARGS__)
#define DeleteModelCallable(REQUEST)  SubmitCallable(&LookoutEquipmentClient::DeleteModel, REQUEST)

#define DescribeDataIngestionJobAsync(...)  SubmitAsync(&LookoutEquipmentClient::DescribeDataIngestionJob, __VA_ARGS__)
#define DescribeDataIngestionJobCallable(REQUEST)  SubmitCallable(&LookoutEquipmentClient::DescribeDataIngestionJob, REQUEST)

#define DescribeDatasetAsync(...)  SubmitAsync(&LookoutEquipmentClient::DescribeDataset, __VA_ARGS__)
#define DescribeDatasetCallable(REQUEST)  SubmitCallable(&LookoutEquipmentClient::DescribeDataset, REQUEST)

#define DescribeInferenceSchedulerAsync(...)  SubmitAsync(&LookoutEquipmentClient::DescribeInferenceScheduler, __VA_ARGS__)
#define DescribeInferenceSchedulerCallable(REQUEST)  SubmitCallable(&LookoutEquipmentClient::DescribeInferenceScheduler, REQUEST)

#define DescribeLabelAsync(...)  SubmitAsync(&LookoutEquipmentClient::DescribeLabel, __VA_ARGS__)
#define DescribeLabelCallable(REQUEST)  SubmitCallable(&LookoutEquipmentClient::DescribeLabel, REQUEST)

#define DescribeLabelGroupAsync(...)  SubmitAsync(&LookoutEquipmentClient::DescribeLabelGroup, __VA_ARGS__)
#define DescribeLabelGroupCallable(REQUEST)  SubmitCallable(&LookoutEquipmentClient::DescribeLabelGroup, REQUEST)

#define DescribeModelAsync(...)  SubmitAsync(&LookoutEquipmentClient::DescribeModel, __VA_ARGS__)
#define DescribeModelCallable(REQUEST)  SubmitCallable(&LookoutEquipmentClient::DescribeModel, REQUEST)

#define ListDataIngestionJobsAsync(...)  SubmitAsync(&LookoutEquipmentClient::ListDataIngestionJobs, __VA_ARGS__)
#define ListDataIngestionJobsCallable(REQUEST)  SubmitCallable(&LookoutEquipmentClient::ListDataIngestionJobs, REQUEST)

#define ListDatasetsAsync(...)  SubmitAsync(&LookoutEquipmentClient::ListDatasets, __VA_ARGS__)
#define ListDatasetsCallable(REQUEST)  SubmitCallable(&LookoutEquipmentClient::ListDatasets, REQUEST)

#define ListInferenceEventsAsync(...)  SubmitAsync(&LookoutEquipmentClient::ListInferenceEvents, __VA_ARGS__)
#define ListInferenceEventsCallable(REQUEST)  SubmitCallable(&LookoutEquipmentClient::ListInferenceEvents, REQUEST)

#define ListInferenceExecutionsAsync(...)  SubmitAsync(&LookoutEquipmentClient::ListInferenceExecutions, __VA_ARGS__)
#define ListInferenceExecutionsCallable(REQUEST)  SubmitCallable(&LookoutEquipmentClient::ListInferenceExecutions, REQUEST)

#define ListInferenceSchedulersAsync(...)  SubmitAsync(&LookoutEquipmentClient::ListInferenceSchedulers, __VA_ARGS__)
#define ListInferenceSchedulersCallable(REQUEST)  SubmitCallable(&LookoutEquipmentClient::ListInferenceSchedulers, REQUEST)

#define ListLabelGroupsAsync(...)  SubmitAsync(&LookoutEquipmentClient::ListLabelGroups, __VA_ARGS__)
#define ListLabelGroupsCallable(REQUEST)  SubmitCallable(&LookoutEquipmentClient::ListLabelGroups, REQUEST)

#define ListLabelsAsync(...)  SubmitAsync(&LookoutEquipmentClient::ListLabels, __VA_ARGS__)
#define ListLabelsCallable(REQUEST)  SubmitCallable(&LookoutEquipmentClient::ListLabels, REQUEST)

#define ListModelsAsync(...)  SubmitAsync(&LookoutEquipmentClient::ListModels, __VA_ARGS__)
#define ListModelsCallable(REQUEST)  SubmitCallable(&LookoutEquipmentClient::ListModels, REQUEST)

#define ListSensorStatisticsAsync(...)  SubmitAsync(&LookoutEquipmentClient::ListSensorStatistics, __VA_ARGS__)
#define ListSensorStatisticsCallable(REQUEST)  SubmitCallable(&LookoutEquipmentClient::ListSensorStatistics, REQUEST)

#define ListTagsForResourceAsync(...)  SubmitAsync(&LookoutEquipmentClient::ListTagsForResource, __VA_ARGS__)
#define ListTagsForResourceCallable(REQUEST)  SubmitCallable(&LookoutEquipmentClient::ListTagsForResource, REQUEST)

#define StartDataIngestionJobAsync(...)  SubmitAsync(&LookoutEquipmentClient::StartDataIngestionJob, __VA_ARGS__)
#define StartDataIngestionJobCallable(REQUEST)  SubmitCallable(&LookoutEquipmentClient::StartDataIngestionJob, REQUEST)

#define StartInferenceSchedulerAsync(...)  SubmitAsync(&LookoutEquipmentClient::StartInferenceScheduler, __VA_ARGS__)
#define StartInferenceSchedulerCallable(REQUEST)  SubmitCallable(&LookoutEquipmentClient::StartInferenceScheduler, REQUEST)

#define StopInferenceSchedulerAsync(...)  SubmitAsync(&LookoutEquipmentClient::StopInferenceScheduler, __VA_ARGS__)
#define StopInferenceSchedulerCallable(REQUEST)  SubmitCallable(&LookoutEquipmentClient::StopInferenceScheduler, REQUEST)

#define TagResourceAsync(...)  SubmitAsync(&LookoutEquipmentClient::TagResource, __VA_ARGS__)
#define TagResourceCallable(REQUEST)  SubmitCallable(&LookoutEquipmentClient::TagResource, REQUEST)

#define UntagResourceAsync(...)  SubmitAsync(&LookoutEquipmentClient::UntagResource, __VA_ARGS__)
#define UntagResourceCallable(REQUEST)  SubmitCallable(&LookoutEquipmentClient::UntagResource, REQUEST)

#define UpdateInferenceSchedulerAsync(...)  SubmitAsync(&LookoutEquipmentClient::UpdateInferenceScheduler, __VA_ARGS__)
#define UpdateInferenceSchedulerCallable(REQUEST)  SubmitCallable(&LookoutEquipmentClient::UpdateInferenceScheduler, REQUEST)

#define UpdateLabelGroupAsync(...)  SubmitAsync(&LookoutEquipmentClient::UpdateLabelGroup, __VA_ARGS__)
#define UpdateLabelGroupCallable(REQUEST)  SubmitCallable(&LookoutEquipmentClient::UpdateLabelGroup, REQUEST)

