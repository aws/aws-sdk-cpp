/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#define CancelJobAsync(...)  SubmitAsync(&ElasticTranscoderClient::CancelJob, __VA_ARGS__)
#define CancelJobCallable(REQUEST)  SubmitCallable(&ElasticTranscoderClient::CancelJob, REQUEST)

#define CreateJobAsync(...)  SubmitAsync(&ElasticTranscoderClient::CreateJob, __VA_ARGS__)
#define CreateJobCallable(REQUEST)  SubmitCallable(&ElasticTranscoderClient::CreateJob, REQUEST)

#define CreatePipelineAsync(...)  SubmitAsync(&ElasticTranscoderClient::CreatePipeline, __VA_ARGS__)
#define CreatePipelineCallable(REQUEST)  SubmitCallable(&ElasticTranscoderClient::CreatePipeline, REQUEST)

#define CreatePresetAsync(...)  SubmitAsync(&ElasticTranscoderClient::CreatePreset, __VA_ARGS__)
#define CreatePresetCallable(REQUEST)  SubmitCallable(&ElasticTranscoderClient::CreatePreset, REQUEST)

#define DeletePipelineAsync(...)  SubmitAsync(&ElasticTranscoderClient::DeletePipeline, __VA_ARGS__)
#define DeletePipelineCallable(REQUEST)  SubmitCallable(&ElasticTranscoderClient::DeletePipeline, REQUEST)

#define DeletePresetAsync(...)  SubmitAsync(&ElasticTranscoderClient::DeletePreset, __VA_ARGS__)
#define DeletePresetCallable(REQUEST)  SubmitCallable(&ElasticTranscoderClient::DeletePreset, REQUEST)

#define ListJobsByPipelineAsync(...)  SubmitAsync(&ElasticTranscoderClient::ListJobsByPipeline, __VA_ARGS__)
#define ListJobsByPipelineCallable(REQUEST)  SubmitCallable(&ElasticTranscoderClient::ListJobsByPipeline, REQUEST)

#define ListJobsByStatusAsync(...)  SubmitAsync(&ElasticTranscoderClient::ListJobsByStatus, __VA_ARGS__)
#define ListJobsByStatusCallable(REQUEST)  SubmitCallable(&ElasticTranscoderClient::ListJobsByStatus, REQUEST)

#define ListPipelinesAsync(...)  SubmitAsync(&ElasticTranscoderClient::ListPipelines, __VA_ARGS__)
#define ListPipelinesCallable(REQUEST)  SubmitCallable(&ElasticTranscoderClient::ListPipelines, REQUEST)

#define ListPresetsAsync(...)  SubmitAsync(&ElasticTranscoderClient::ListPresets, __VA_ARGS__)
#define ListPresetsCallable(REQUEST)  SubmitCallable(&ElasticTranscoderClient::ListPresets, REQUEST)

#define ReadJobAsync(...)  SubmitAsync(&ElasticTranscoderClient::ReadJob, __VA_ARGS__)
#define ReadJobCallable(REQUEST)  SubmitCallable(&ElasticTranscoderClient::ReadJob, REQUEST)

#define ReadPipelineAsync(...)  SubmitAsync(&ElasticTranscoderClient::ReadPipeline, __VA_ARGS__)
#define ReadPipelineCallable(REQUEST)  SubmitCallable(&ElasticTranscoderClient::ReadPipeline, REQUEST)

#define ReadPresetAsync(...)  SubmitAsync(&ElasticTranscoderClient::ReadPreset, __VA_ARGS__)
#define ReadPresetCallable(REQUEST)  SubmitCallable(&ElasticTranscoderClient::ReadPreset, REQUEST)

#define UpdatePipelineAsync(...)  SubmitAsync(&ElasticTranscoderClient::UpdatePipeline, __VA_ARGS__)
#define UpdatePipelineCallable(REQUEST)  SubmitCallable(&ElasticTranscoderClient::UpdatePipeline, REQUEST)

#define UpdatePipelineNotificationsAsync(...)  SubmitAsync(&ElasticTranscoderClient::UpdatePipelineNotifications, __VA_ARGS__)
#define UpdatePipelineNotificationsCallable(REQUEST)  SubmitCallable(&ElasticTranscoderClient::UpdatePipelineNotifications, REQUEST)

#define UpdatePipelineStatusAsync(...)  SubmitAsync(&ElasticTranscoderClient::UpdatePipelineStatus, __VA_ARGS__)
#define UpdatePipelineStatusCallable(REQUEST)  SubmitCallable(&ElasticTranscoderClient::UpdatePipelineStatus, REQUEST)

