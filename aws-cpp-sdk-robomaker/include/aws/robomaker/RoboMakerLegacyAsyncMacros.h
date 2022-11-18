/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#define BatchDeleteWorldsAsync(...)  SubmitAsync(&RoboMakerClient::BatchDeleteWorlds, __VA_ARGS__)
#define BatchDeleteWorldsCallable(REQUEST)  SubmitCallable(&RoboMakerClient::BatchDeleteWorlds, REQUEST)

#define BatchDescribeSimulationJobAsync(...)  SubmitAsync(&RoboMakerClient::BatchDescribeSimulationJob, __VA_ARGS__)
#define BatchDescribeSimulationJobCallable(REQUEST)  SubmitCallable(&RoboMakerClient::BatchDescribeSimulationJob, REQUEST)

#define CancelSimulationJobAsync(...)  SubmitAsync(&RoboMakerClient::CancelSimulationJob, __VA_ARGS__)
#define CancelSimulationJobCallable(REQUEST)  SubmitCallable(&RoboMakerClient::CancelSimulationJob, REQUEST)

#define CancelSimulationJobBatchAsync(...)  SubmitAsync(&RoboMakerClient::CancelSimulationJobBatch, __VA_ARGS__)
#define CancelSimulationJobBatchCallable(REQUEST)  SubmitCallable(&RoboMakerClient::CancelSimulationJobBatch, REQUEST)

#define CancelWorldExportJobAsync(...)  SubmitAsync(&RoboMakerClient::CancelWorldExportJob, __VA_ARGS__)
#define CancelWorldExportJobCallable(REQUEST)  SubmitCallable(&RoboMakerClient::CancelWorldExportJob, REQUEST)

#define CancelWorldGenerationJobAsync(...)  SubmitAsync(&RoboMakerClient::CancelWorldGenerationJob, __VA_ARGS__)
#define CancelWorldGenerationJobCallable(REQUEST)  SubmitCallable(&RoboMakerClient::CancelWorldGenerationJob, REQUEST)

#define CreateRobotApplicationAsync(...)  SubmitAsync(&RoboMakerClient::CreateRobotApplication, __VA_ARGS__)
#define CreateRobotApplicationCallable(REQUEST)  SubmitCallable(&RoboMakerClient::CreateRobotApplication, REQUEST)

#define CreateRobotApplicationVersionAsync(...)  SubmitAsync(&RoboMakerClient::CreateRobotApplicationVersion, __VA_ARGS__)
#define CreateRobotApplicationVersionCallable(REQUEST)  SubmitCallable(&RoboMakerClient::CreateRobotApplicationVersion, REQUEST)

#define CreateSimulationApplicationAsync(...)  SubmitAsync(&RoboMakerClient::CreateSimulationApplication, __VA_ARGS__)
#define CreateSimulationApplicationCallable(REQUEST)  SubmitCallable(&RoboMakerClient::CreateSimulationApplication, REQUEST)

#define CreateSimulationApplicationVersionAsync(...)  SubmitAsync(&RoboMakerClient::CreateSimulationApplicationVersion, __VA_ARGS__)
#define CreateSimulationApplicationVersionCallable(REQUEST)  SubmitCallable(&RoboMakerClient::CreateSimulationApplicationVersion, REQUEST)

#define CreateSimulationJobAsync(...)  SubmitAsync(&RoboMakerClient::CreateSimulationJob, __VA_ARGS__)
#define CreateSimulationJobCallable(REQUEST)  SubmitCallable(&RoboMakerClient::CreateSimulationJob, REQUEST)

#define CreateWorldExportJobAsync(...)  SubmitAsync(&RoboMakerClient::CreateWorldExportJob, __VA_ARGS__)
#define CreateWorldExportJobCallable(REQUEST)  SubmitCallable(&RoboMakerClient::CreateWorldExportJob, REQUEST)

#define CreateWorldGenerationJobAsync(...)  SubmitAsync(&RoboMakerClient::CreateWorldGenerationJob, __VA_ARGS__)
#define CreateWorldGenerationJobCallable(REQUEST)  SubmitCallable(&RoboMakerClient::CreateWorldGenerationJob, REQUEST)

#define CreateWorldTemplateAsync(...)  SubmitAsync(&RoboMakerClient::CreateWorldTemplate, __VA_ARGS__)
#define CreateWorldTemplateCallable(REQUEST)  SubmitCallable(&RoboMakerClient::CreateWorldTemplate, REQUEST)

#define DeleteRobotApplicationAsync(...)  SubmitAsync(&RoboMakerClient::DeleteRobotApplication, __VA_ARGS__)
#define DeleteRobotApplicationCallable(REQUEST)  SubmitCallable(&RoboMakerClient::DeleteRobotApplication, REQUEST)

#define DeleteSimulationApplicationAsync(...)  SubmitAsync(&RoboMakerClient::DeleteSimulationApplication, __VA_ARGS__)
#define DeleteSimulationApplicationCallable(REQUEST)  SubmitCallable(&RoboMakerClient::DeleteSimulationApplication, REQUEST)

#define DeleteWorldTemplateAsync(...)  SubmitAsync(&RoboMakerClient::DeleteWorldTemplate, __VA_ARGS__)
#define DeleteWorldTemplateCallable(REQUEST)  SubmitCallable(&RoboMakerClient::DeleteWorldTemplate, REQUEST)

#define DescribeRobotApplicationAsync(...)  SubmitAsync(&RoboMakerClient::DescribeRobotApplication, __VA_ARGS__)
#define DescribeRobotApplicationCallable(REQUEST)  SubmitCallable(&RoboMakerClient::DescribeRobotApplication, REQUEST)

#define DescribeSimulationApplicationAsync(...)  SubmitAsync(&RoboMakerClient::DescribeSimulationApplication, __VA_ARGS__)
#define DescribeSimulationApplicationCallable(REQUEST)  SubmitCallable(&RoboMakerClient::DescribeSimulationApplication, REQUEST)

#define DescribeSimulationJobAsync(...)  SubmitAsync(&RoboMakerClient::DescribeSimulationJob, __VA_ARGS__)
#define DescribeSimulationJobCallable(REQUEST)  SubmitCallable(&RoboMakerClient::DescribeSimulationJob, REQUEST)

#define DescribeSimulationJobBatchAsync(...)  SubmitAsync(&RoboMakerClient::DescribeSimulationJobBatch, __VA_ARGS__)
#define DescribeSimulationJobBatchCallable(REQUEST)  SubmitCallable(&RoboMakerClient::DescribeSimulationJobBatch, REQUEST)

#define DescribeWorldAsync(...)  SubmitAsync(&RoboMakerClient::DescribeWorld, __VA_ARGS__)
#define DescribeWorldCallable(REQUEST)  SubmitCallable(&RoboMakerClient::DescribeWorld, REQUEST)

#define DescribeWorldExportJobAsync(...)  SubmitAsync(&RoboMakerClient::DescribeWorldExportJob, __VA_ARGS__)
#define DescribeWorldExportJobCallable(REQUEST)  SubmitCallable(&RoboMakerClient::DescribeWorldExportJob, REQUEST)

#define DescribeWorldGenerationJobAsync(...)  SubmitAsync(&RoboMakerClient::DescribeWorldGenerationJob, __VA_ARGS__)
#define DescribeWorldGenerationJobCallable(REQUEST)  SubmitCallable(&RoboMakerClient::DescribeWorldGenerationJob, REQUEST)

#define DescribeWorldTemplateAsync(...)  SubmitAsync(&RoboMakerClient::DescribeWorldTemplate, __VA_ARGS__)
#define DescribeWorldTemplateCallable(REQUEST)  SubmitCallable(&RoboMakerClient::DescribeWorldTemplate, REQUEST)

#define GetWorldTemplateBodyAsync(...)  SubmitAsync(&RoboMakerClient::GetWorldTemplateBody, __VA_ARGS__)
#define GetWorldTemplateBodyCallable(REQUEST)  SubmitCallable(&RoboMakerClient::GetWorldTemplateBody, REQUEST)

#define ListRobotApplicationsAsync(...)  SubmitAsync(&RoboMakerClient::ListRobotApplications, __VA_ARGS__)
#define ListRobotApplicationsCallable(REQUEST)  SubmitCallable(&RoboMakerClient::ListRobotApplications, REQUEST)

#define ListSimulationApplicationsAsync(...)  SubmitAsync(&RoboMakerClient::ListSimulationApplications, __VA_ARGS__)
#define ListSimulationApplicationsCallable(REQUEST)  SubmitCallable(&RoboMakerClient::ListSimulationApplications, REQUEST)

#define ListSimulationJobBatchesAsync(...)  SubmitAsync(&RoboMakerClient::ListSimulationJobBatches, __VA_ARGS__)
#define ListSimulationJobBatchesCallable(REQUEST)  SubmitCallable(&RoboMakerClient::ListSimulationJobBatches, REQUEST)

#define ListSimulationJobsAsync(...)  SubmitAsync(&RoboMakerClient::ListSimulationJobs, __VA_ARGS__)
#define ListSimulationJobsCallable(REQUEST)  SubmitCallable(&RoboMakerClient::ListSimulationJobs, REQUEST)

#define ListTagsForResourceAsync(...)  SubmitAsync(&RoboMakerClient::ListTagsForResource, __VA_ARGS__)
#define ListTagsForResourceCallable(REQUEST)  SubmitCallable(&RoboMakerClient::ListTagsForResource, REQUEST)

#define ListWorldExportJobsAsync(...)  SubmitAsync(&RoboMakerClient::ListWorldExportJobs, __VA_ARGS__)
#define ListWorldExportJobsCallable(REQUEST)  SubmitCallable(&RoboMakerClient::ListWorldExportJobs, REQUEST)

#define ListWorldGenerationJobsAsync(...)  SubmitAsync(&RoboMakerClient::ListWorldGenerationJobs, __VA_ARGS__)
#define ListWorldGenerationJobsCallable(REQUEST)  SubmitCallable(&RoboMakerClient::ListWorldGenerationJobs, REQUEST)

#define ListWorldTemplatesAsync(...)  SubmitAsync(&RoboMakerClient::ListWorldTemplates, __VA_ARGS__)
#define ListWorldTemplatesCallable(REQUEST)  SubmitCallable(&RoboMakerClient::ListWorldTemplates, REQUEST)

#define ListWorldsAsync(...)  SubmitAsync(&RoboMakerClient::ListWorlds, __VA_ARGS__)
#define ListWorldsCallable(REQUEST)  SubmitCallable(&RoboMakerClient::ListWorlds, REQUEST)

#define RestartSimulationJobAsync(...)  SubmitAsync(&RoboMakerClient::RestartSimulationJob, __VA_ARGS__)
#define RestartSimulationJobCallable(REQUEST)  SubmitCallable(&RoboMakerClient::RestartSimulationJob, REQUEST)

#define StartSimulationJobBatchAsync(...)  SubmitAsync(&RoboMakerClient::StartSimulationJobBatch, __VA_ARGS__)
#define StartSimulationJobBatchCallable(REQUEST)  SubmitCallable(&RoboMakerClient::StartSimulationJobBatch, REQUEST)

#define TagResourceAsync(...)  SubmitAsync(&RoboMakerClient::TagResource, __VA_ARGS__)
#define TagResourceCallable(REQUEST)  SubmitCallable(&RoboMakerClient::TagResource, REQUEST)

#define UntagResourceAsync(...)  SubmitAsync(&RoboMakerClient::UntagResource, __VA_ARGS__)
#define UntagResourceCallable(REQUEST)  SubmitCallable(&RoboMakerClient::UntagResource, REQUEST)

#define UpdateRobotApplicationAsync(...)  SubmitAsync(&RoboMakerClient::UpdateRobotApplication, __VA_ARGS__)
#define UpdateRobotApplicationCallable(REQUEST)  SubmitCallable(&RoboMakerClient::UpdateRobotApplication, REQUEST)

#define UpdateSimulationApplicationAsync(...)  SubmitAsync(&RoboMakerClient::UpdateSimulationApplication, __VA_ARGS__)
#define UpdateSimulationApplicationCallable(REQUEST)  SubmitCallable(&RoboMakerClient::UpdateSimulationApplication, REQUEST)

#define UpdateWorldTemplateAsync(...)  SubmitAsync(&RoboMakerClient::UpdateWorldTemplate, __VA_ARGS__)
#define UpdateWorldTemplateCallable(REQUEST)  SubmitCallable(&RoboMakerClient::UpdateWorldTemplate, REQUEST)

