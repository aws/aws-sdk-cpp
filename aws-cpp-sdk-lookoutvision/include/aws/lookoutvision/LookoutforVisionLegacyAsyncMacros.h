/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#define CreateDatasetAsync(...)  SubmitAsync(&LookoutforVisionClient::CreateDataset, __VA_ARGS__)
#define CreateDatasetCallable(REQUEST)  SubmitCallable(&LookoutforVisionClient::CreateDataset, REQUEST)

#define CreateModelAsync(...)  SubmitAsync(&LookoutforVisionClient::CreateModel, __VA_ARGS__)
#define CreateModelCallable(REQUEST)  SubmitCallable(&LookoutforVisionClient::CreateModel, REQUEST)

#define CreateProjectAsync(...)  SubmitAsync(&LookoutforVisionClient::CreateProject, __VA_ARGS__)
#define CreateProjectCallable(REQUEST)  SubmitCallable(&LookoutforVisionClient::CreateProject, REQUEST)

#define DeleteDatasetAsync(...)  SubmitAsync(&LookoutforVisionClient::DeleteDataset, __VA_ARGS__)
#define DeleteDatasetCallable(REQUEST)  SubmitCallable(&LookoutforVisionClient::DeleteDataset, REQUEST)

#define DeleteModelAsync(...)  SubmitAsync(&LookoutforVisionClient::DeleteModel, __VA_ARGS__)
#define DeleteModelCallable(REQUEST)  SubmitCallable(&LookoutforVisionClient::DeleteModel, REQUEST)

#define DeleteProjectAsync(...)  SubmitAsync(&LookoutforVisionClient::DeleteProject, __VA_ARGS__)
#define DeleteProjectCallable(REQUEST)  SubmitCallable(&LookoutforVisionClient::DeleteProject, REQUEST)

#define DescribeDatasetAsync(...)  SubmitAsync(&LookoutforVisionClient::DescribeDataset, __VA_ARGS__)
#define DescribeDatasetCallable(REQUEST)  SubmitCallable(&LookoutforVisionClient::DescribeDataset, REQUEST)

#define DescribeModelAsync(...)  SubmitAsync(&LookoutforVisionClient::DescribeModel, __VA_ARGS__)
#define DescribeModelCallable(REQUEST)  SubmitCallable(&LookoutforVisionClient::DescribeModel, REQUEST)

#define DescribeModelPackagingJobAsync(...)  SubmitAsync(&LookoutforVisionClient::DescribeModelPackagingJob, __VA_ARGS__)
#define DescribeModelPackagingJobCallable(REQUEST)  SubmitCallable(&LookoutforVisionClient::DescribeModelPackagingJob, REQUEST)

#define DescribeProjectAsync(...)  SubmitAsync(&LookoutforVisionClient::DescribeProject, __VA_ARGS__)
#define DescribeProjectCallable(REQUEST)  SubmitCallable(&LookoutforVisionClient::DescribeProject, REQUEST)

#define DetectAnomaliesAsync(...)  SubmitAsync(&LookoutforVisionClient::DetectAnomalies, __VA_ARGS__)
#define DetectAnomaliesCallable(REQUEST)  SubmitCallable(&LookoutforVisionClient::DetectAnomalies, REQUEST)

#define ListDatasetEntriesAsync(...)  SubmitAsync(&LookoutforVisionClient::ListDatasetEntries, __VA_ARGS__)
#define ListDatasetEntriesCallable(REQUEST)  SubmitCallable(&LookoutforVisionClient::ListDatasetEntries, REQUEST)

#define ListModelPackagingJobsAsync(...)  SubmitAsync(&LookoutforVisionClient::ListModelPackagingJobs, __VA_ARGS__)
#define ListModelPackagingJobsCallable(REQUEST)  SubmitCallable(&LookoutforVisionClient::ListModelPackagingJobs, REQUEST)

#define ListModelsAsync(...)  SubmitAsync(&LookoutforVisionClient::ListModels, __VA_ARGS__)
#define ListModelsCallable(REQUEST)  SubmitCallable(&LookoutforVisionClient::ListModels, REQUEST)

#define ListProjectsAsync(...)  SubmitAsync(&LookoutforVisionClient::ListProjects, __VA_ARGS__)
#define ListProjectsCallable(REQUEST)  SubmitCallable(&LookoutforVisionClient::ListProjects, REQUEST)

#define ListTagsForResourceAsync(...)  SubmitAsync(&LookoutforVisionClient::ListTagsForResource, __VA_ARGS__)
#define ListTagsForResourceCallable(REQUEST)  SubmitCallable(&LookoutforVisionClient::ListTagsForResource, REQUEST)

#define StartModelAsync(...)  SubmitAsync(&LookoutforVisionClient::StartModel, __VA_ARGS__)
#define StartModelCallable(REQUEST)  SubmitCallable(&LookoutforVisionClient::StartModel, REQUEST)

#define StartModelPackagingJobAsync(...)  SubmitAsync(&LookoutforVisionClient::StartModelPackagingJob, __VA_ARGS__)
#define StartModelPackagingJobCallable(REQUEST)  SubmitCallable(&LookoutforVisionClient::StartModelPackagingJob, REQUEST)

#define StopModelAsync(...)  SubmitAsync(&LookoutforVisionClient::StopModel, __VA_ARGS__)
#define StopModelCallable(REQUEST)  SubmitCallable(&LookoutforVisionClient::StopModel, REQUEST)

#define TagResourceAsync(...)  SubmitAsync(&LookoutforVisionClient::TagResource, __VA_ARGS__)
#define TagResourceCallable(REQUEST)  SubmitCallable(&LookoutforVisionClient::TagResource, REQUEST)

#define UntagResourceAsync(...)  SubmitAsync(&LookoutforVisionClient::UntagResource, __VA_ARGS__)
#define UntagResourceCallable(REQUEST)  SubmitCallable(&LookoutforVisionClient::UntagResource, REQUEST)

#define UpdateDatasetEntriesAsync(...)  SubmitAsync(&LookoutforVisionClient::UpdateDatasetEntries, __VA_ARGS__)
#define UpdateDatasetEntriesCallable(REQUEST)  SubmitCallable(&LookoutforVisionClient::UpdateDatasetEntries, REQUEST)

