/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#define CreateSignalingChannelAsync(...)  SubmitAsync(&KinesisVideoClient::CreateSignalingChannel, __VA_ARGS__)
#define CreateSignalingChannelCallable(REQUEST)  SubmitCallable(&KinesisVideoClient::CreateSignalingChannel, REQUEST)

#define CreateStreamAsync(...)  SubmitAsync(&KinesisVideoClient::CreateStream, __VA_ARGS__)
#define CreateStreamCallable(REQUEST)  SubmitCallable(&KinesisVideoClient::CreateStream, REQUEST)

#define DeleteSignalingChannelAsync(...)  SubmitAsync(&KinesisVideoClient::DeleteSignalingChannel, __VA_ARGS__)
#define DeleteSignalingChannelCallable(REQUEST)  SubmitCallable(&KinesisVideoClient::DeleteSignalingChannel, REQUEST)

#define DeleteStreamAsync(...)  SubmitAsync(&KinesisVideoClient::DeleteStream, __VA_ARGS__)
#define DeleteStreamCallable(REQUEST)  SubmitCallable(&KinesisVideoClient::DeleteStream, REQUEST)

#define DescribeImageGenerationConfigurationAsync(...)  SubmitAsync(&KinesisVideoClient::DescribeImageGenerationConfiguration, __VA_ARGS__)
#define DescribeImageGenerationConfigurationCallable(REQUEST)  SubmitCallable(&KinesisVideoClient::DescribeImageGenerationConfiguration, REQUEST)

#define DescribeNotificationConfigurationAsync(...)  SubmitAsync(&KinesisVideoClient::DescribeNotificationConfiguration, __VA_ARGS__)
#define DescribeNotificationConfigurationCallable(REQUEST)  SubmitCallable(&KinesisVideoClient::DescribeNotificationConfiguration, REQUEST)

#define DescribeSignalingChannelAsync(...)  SubmitAsync(&KinesisVideoClient::DescribeSignalingChannel, __VA_ARGS__)
#define DescribeSignalingChannelCallable(REQUEST)  SubmitCallable(&KinesisVideoClient::DescribeSignalingChannel, REQUEST)

#define DescribeStreamAsync(...)  SubmitAsync(&KinesisVideoClient::DescribeStream, __VA_ARGS__)
#define DescribeStreamCallable(REQUEST)  SubmitCallable(&KinesisVideoClient::DescribeStream, REQUEST)

#define GetDataEndpointAsync(...)  SubmitAsync(&KinesisVideoClient::GetDataEndpoint, __VA_ARGS__)
#define GetDataEndpointCallable(REQUEST)  SubmitCallable(&KinesisVideoClient::GetDataEndpoint, REQUEST)

#define GetSignalingChannelEndpointAsync(...)  SubmitAsync(&KinesisVideoClient::GetSignalingChannelEndpoint, __VA_ARGS__)
#define GetSignalingChannelEndpointCallable(REQUEST)  SubmitCallable(&KinesisVideoClient::GetSignalingChannelEndpoint, REQUEST)

#define ListSignalingChannelsAsync(...)  SubmitAsync(&KinesisVideoClient::ListSignalingChannels, __VA_ARGS__)
#define ListSignalingChannelsCallable(REQUEST)  SubmitCallable(&KinesisVideoClient::ListSignalingChannels, REQUEST)

#define ListStreamsAsync(...)  SubmitAsync(&KinesisVideoClient::ListStreams, __VA_ARGS__)
#define ListStreamsCallable(REQUEST)  SubmitCallable(&KinesisVideoClient::ListStreams, REQUEST)

#define ListTagsForResourceAsync(...)  SubmitAsync(&KinesisVideoClient::ListTagsForResource, __VA_ARGS__)
#define ListTagsForResourceCallable(REQUEST)  SubmitCallable(&KinesisVideoClient::ListTagsForResource, REQUEST)

#define ListTagsForStreamAsync(...)  SubmitAsync(&KinesisVideoClient::ListTagsForStream, __VA_ARGS__)
#define ListTagsForStreamCallable(REQUEST)  SubmitCallable(&KinesisVideoClient::ListTagsForStream, REQUEST)

#define TagResourceAsync(...)  SubmitAsync(&KinesisVideoClient::TagResource, __VA_ARGS__)
#define TagResourceCallable(REQUEST)  SubmitCallable(&KinesisVideoClient::TagResource, REQUEST)

#define TagStreamAsync(...)  SubmitAsync(&KinesisVideoClient::TagStream, __VA_ARGS__)
#define TagStreamCallable(REQUEST)  SubmitCallable(&KinesisVideoClient::TagStream, REQUEST)

#define UntagResourceAsync(...)  SubmitAsync(&KinesisVideoClient::UntagResource, __VA_ARGS__)
#define UntagResourceCallable(REQUEST)  SubmitCallable(&KinesisVideoClient::UntagResource, REQUEST)

#define UntagStreamAsync(...)  SubmitAsync(&KinesisVideoClient::UntagStream, __VA_ARGS__)
#define UntagStreamCallable(REQUEST)  SubmitCallable(&KinesisVideoClient::UntagStream, REQUEST)

#define UpdateDataRetentionAsync(...)  SubmitAsync(&KinesisVideoClient::UpdateDataRetention, __VA_ARGS__)
#define UpdateDataRetentionCallable(REQUEST)  SubmitCallable(&KinesisVideoClient::UpdateDataRetention, REQUEST)

#define UpdateImageGenerationConfigurationAsync(...)  SubmitAsync(&KinesisVideoClient::UpdateImageGenerationConfiguration, __VA_ARGS__)
#define UpdateImageGenerationConfigurationCallable(REQUEST)  SubmitCallable(&KinesisVideoClient::UpdateImageGenerationConfiguration, REQUEST)

#define UpdateNotificationConfigurationAsync(...)  SubmitAsync(&KinesisVideoClient::UpdateNotificationConfiguration, __VA_ARGS__)
#define UpdateNotificationConfigurationCallable(REQUEST)  SubmitCallable(&KinesisVideoClient::UpdateNotificationConfiguration, REQUEST)

#define UpdateSignalingChannelAsync(...)  SubmitAsync(&KinesisVideoClient::UpdateSignalingChannel, __VA_ARGS__)
#define UpdateSignalingChannelCallable(REQUEST)  SubmitCallable(&KinesisVideoClient::UpdateSignalingChannel, REQUEST)

#define UpdateStreamAsync(...)  SubmitAsync(&KinesisVideoClient::UpdateStream, __VA_ARGS__)
#define UpdateStreamCallable(REQUEST)  SubmitCallable(&KinesisVideoClient::UpdateStream, REQUEST)

