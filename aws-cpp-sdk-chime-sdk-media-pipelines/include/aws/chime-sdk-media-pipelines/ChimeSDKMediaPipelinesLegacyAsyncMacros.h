/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#define CreateMediaCapturePipelineAsync(...)  SubmitAsync(&ChimeSDKMediaPipelinesClient::CreateMediaCapturePipeline, __VA_ARGS__)
#define CreateMediaCapturePipelineCallable(REQUEST)  SubmitCallable(&ChimeSDKMediaPipelinesClient::CreateMediaCapturePipeline, REQUEST)

#define CreateMediaConcatenationPipelineAsync(...)  SubmitAsync(&ChimeSDKMediaPipelinesClient::CreateMediaConcatenationPipeline, __VA_ARGS__)
#define CreateMediaConcatenationPipelineCallable(REQUEST)  SubmitCallable(&ChimeSDKMediaPipelinesClient::CreateMediaConcatenationPipeline, REQUEST)

#define CreateMediaLiveConnectorPipelineAsync(...)  SubmitAsync(&ChimeSDKMediaPipelinesClient::CreateMediaLiveConnectorPipeline, __VA_ARGS__)
#define CreateMediaLiveConnectorPipelineCallable(REQUEST)  SubmitCallable(&ChimeSDKMediaPipelinesClient::CreateMediaLiveConnectorPipeline, REQUEST)

#define DeleteMediaCapturePipelineAsync(...)  SubmitAsync(&ChimeSDKMediaPipelinesClient::DeleteMediaCapturePipeline, __VA_ARGS__)
#define DeleteMediaCapturePipelineCallable(REQUEST)  SubmitCallable(&ChimeSDKMediaPipelinesClient::DeleteMediaCapturePipeline, REQUEST)

#define DeleteMediaPipelineAsync(...)  SubmitAsync(&ChimeSDKMediaPipelinesClient::DeleteMediaPipeline, __VA_ARGS__)
#define DeleteMediaPipelineCallable(REQUEST)  SubmitCallable(&ChimeSDKMediaPipelinesClient::DeleteMediaPipeline, REQUEST)

#define GetMediaCapturePipelineAsync(...)  SubmitAsync(&ChimeSDKMediaPipelinesClient::GetMediaCapturePipeline, __VA_ARGS__)
#define GetMediaCapturePipelineCallable(REQUEST)  SubmitCallable(&ChimeSDKMediaPipelinesClient::GetMediaCapturePipeline, REQUEST)

#define GetMediaPipelineAsync(...)  SubmitAsync(&ChimeSDKMediaPipelinesClient::GetMediaPipeline, __VA_ARGS__)
#define GetMediaPipelineCallable(REQUEST)  SubmitCallable(&ChimeSDKMediaPipelinesClient::GetMediaPipeline, REQUEST)

#define ListMediaCapturePipelinesAsync(...)  SubmitAsync(&ChimeSDKMediaPipelinesClient::ListMediaCapturePipelines, __VA_ARGS__)
#define ListMediaCapturePipelinesCallable(REQUEST)  SubmitCallable(&ChimeSDKMediaPipelinesClient::ListMediaCapturePipelines, REQUEST)

#define ListMediaPipelinesAsync(...)  SubmitAsync(&ChimeSDKMediaPipelinesClient::ListMediaPipelines, __VA_ARGS__)
#define ListMediaPipelinesCallable(REQUEST)  SubmitCallable(&ChimeSDKMediaPipelinesClient::ListMediaPipelines, REQUEST)

#define ListTagsForResourceAsync(...)  SubmitAsync(&ChimeSDKMediaPipelinesClient::ListTagsForResource, __VA_ARGS__)
#define ListTagsForResourceCallable(REQUEST)  SubmitCallable(&ChimeSDKMediaPipelinesClient::ListTagsForResource, REQUEST)

#define TagResourceAsync(...)  SubmitAsync(&ChimeSDKMediaPipelinesClient::TagResource, __VA_ARGS__)
#define TagResourceCallable(REQUEST)  SubmitCallable(&ChimeSDKMediaPipelinesClient::TagResource, REQUEST)

#define UntagResourceAsync(...)  SubmitAsync(&ChimeSDKMediaPipelinesClient::UntagResource, __VA_ARGS__)
#define UntagResourceCallable(REQUEST)  SubmitCallable(&ChimeSDKMediaPipelinesClient::UntagResource, REQUEST)

