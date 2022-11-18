/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#define BatchGetChannelAsync(...)  SubmitAsync(&IVSClient::BatchGetChannel, __VA_ARGS__)
#define BatchGetChannelCallable(REQUEST)  SubmitCallable(&IVSClient::BatchGetChannel, REQUEST)

#define BatchGetStreamKeyAsync(...)  SubmitAsync(&IVSClient::BatchGetStreamKey, __VA_ARGS__)
#define BatchGetStreamKeyCallable(REQUEST)  SubmitCallable(&IVSClient::BatchGetStreamKey, REQUEST)

#define CreateChannelAsync(...)  SubmitAsync(&IVSClient::CreateChannel, __VA_ARGS__)
#define CreateChannelCallable(REQUEST)  SubmitCallable(&IVSClient::CreateChannel, REQUEST)

#define CreateRecordingConfigurationAsync(...)  SubmitAsync(&IVSClient::CreateRecordingConfiguration, __VA_ARGS__)
#define CreateRecordingConfigurationCallable(REQUEST)  SubmitCallable(&IVSClient::CreateRecordingConfiguration, REQUEST)

#define CreateStreamKeyAsync(...)  SubmitAsync(&IVSClient::CreateStreamKey, __VA_ARGS__)
#define CreateStreamKeyCallable(REQUEST)  SubmitCallable(&IVSClient::CreateStreamKey, REQUEST)

#define DeleteChannelAsync(...)  SubmitAsync(&IVSClient::DeleteChannel, __VA_ARGS__)
#define DeleteChannelCallable(REQUEST)  SubmitCallable(&IVSClient::DeleteChannel, REQUEST)

#define DeletePlaybackKeyPairAsync(...)  SubmitAsync(&IVSClient::DeletePlaybackKeyPair, __VA_ARGS__)
#define DeletePlaybackKeyPairCallable(REQUEST)  SubmitCallable(&IVSClient::DeletePlaybackKeyPair, REQUEST)

#define DeleteRecordingConfigurationAsync(...)  SubmitAsync(&IVSClient::DeleteRecordingConfiguration, __VA_ARGS__)
#define DeleteRecordingConfigurationCallable(REQUEST)  SubmitCallable(&IVSClient::DeleteRecordingConfiguration, REQUEST)

#define DeleteStreamKeyAsync(...)  SubmitAsync(&IVSClient::DeleteStreamKey, __VA_ARGS__)
#define DeleteStreamKeyCallable(REQUEST)  SubmitCallable(&IVSClient::DeleteStreamKey, REQUEST)

#define GetChannelAsync(...)  SubmitAsync(&IVSClient::GetChannel, __VA_ARGS__)
#define GetChannelCallable(REQUEST)  SubmitCallable(&IVSClient::GetChannel, REQUEST)

#define GetPlaybackKeyPairAsync(...)  SubmitAsync(&IVSClient::GetPlaybackKeyPair, __VA_ARGS__)
#define GetPlaybackKeyPairCallable(REQUEST)  SubmitCallable(&IVSClient::GetPlaybackKeyPair, REQUEST)

#define GetRecordingConfigurationAsync(...)  SubmitAsync(&IVSClient::GetRecordingConfiguration, __VA_ARGS__)
#define GetRecordingConfigurationCallable(REQUEST)  SubmitCallable(&IVSClient::GetRecordingConfiguration, REQUEST)

#define GetStreamAsync(...)  SubmitAsync(&IVSClient::GetStream, __VA_ARGS__)
#define GetStreamCallable(REQUEST)  SubmitCallable(&IVSClient::GetStream, REQUEST)

#define GetStreamKeyAsync(...)  SubmitAsync(&IVSClient::GetStreamKey, __VA_ARGS__)
#define GetStreamKeyCallable(REQUEST)  SubmitCallable(&IVSClient::GetStreamKey, REQUEST)

#define GetStreamSessionAsync(...)  SubmitAsync(&IVSClient::GetStreamSession, __VA_ARGS__)
#define GetStreamSessionCallable(REQUEST)  SubmitCallable(&IVSClient::GetStreamSession, REQUEST)

#define ImportPlaybackKeyPairAsync(...)  SubmitAsync(&IVSClient::ImportPlaybackKeyPair, __VA_ARGS__)
#define ImportPlaybackKeyPairCallable(REQUEST)  SubmitCallable(&IVSClient::ImportPlaybackKeyPair, REQUEST)

#define ListChannelsAsync(...)  SubmitAsync(&IVSClient::ListChannels, __VA_ARGS__)
#define ListChannelsCallable(REQUEST)  SubmitCallable(&IVSClient::ListChannels, REQUEST)

#define ListPlaybackKeyPairsAsync(...)  SubmitAsync(&IVSClient::ListPlaybackKeyPairs, __VA_ARGS__)
#define ListPlaybackKeyPairsCallable(REQUEST)  SubmitCallable(&IVSClient::ListPlaybackKeyPairs, REQUEST)

#define ListRecordingConfigurationsAsync(...)  SubmitAsync(&IVSClient::ListRecordingConfigurations, __VA_ARGS__)
#define ListRecordingConfigurationsCallable(REQUEST)  SubmitCallable(&IVSClient::ListRecordingConfigurations, REQUEST)

#define ListStreamKeysAsync(...)  SubmitAsync(&IVSClient::ListStreamKeys, __VA_ARGS__)
#define ListStreamKeysCallable(REQUEST)  SubmitCallable(&IVSClient::ListStreamKeys, REQUEST)

#define ListStreamSessionsAsync(...)  SubmitAsync(&IVSClient::ListStreamSessions, __VA_ARGS__)
#define ListStreamSessionsCallable(REQUEST)  SubmitCallable(&IVSClient::ListStreamSessions, REQUEST)

#define ListStreamsAsync(...)  SubmitAsync(&IVSClient::ListStreams, __VA_ARGS__)
#define ListStreamsCallable(REQUEST)  SubmitCallable(&IVSClient::ListStreams, REQUEST)

#define ListTagsForResourceAsync(...)  SubmitAsync(&IVSClient::ListTagsForResource, __VA_ARGS__)
#define ListTagsForResourceCallable(REQUEST)  SubmitCallable(&IVSClient::ListTagsForResource, REQUEST)

#define PutMetadataAsync(...)  SubmitAsync(&IVSClient::PutMetadata, __VA_ARGS__)
#define PutMetadataCallable(REQUEST)  SubmitCallable(&IVSClient::PutMetadata, REQUEST)

#define StopStreamAsync(...)  SubmitAsync(&IVSClient::StopStream, __VA_ARGS__)
#define StopStreamCallable(REQUEST)  SubmitCallable(&IVSClient::StopStream, REQUEST)

#define TagResourceAsync(...)  SubmitAsync(&IVSClient::TagResource, __VA_ARGS__)
#define TagResourceCallable(REQUEST)  SubmitCallable(&IVSClient::TagResource, REQUEST)

#define UntagResourceAsync(...)  SubmitAsync(&IVSClient::UntagResource, __VA_ARGS__)
#define UntagResourceCallable(REQUEST)  SubmitCallable(&IVSClient::UntagResource, REQUEST)

#define UpdateChannelAsync(...)  SubmitAsync(&IVSClient::UpdateChannel, __VA_ARGS__)
#define UpdateChannelCallable(REQUEST)  SubmitCallable(&IVSClient::UpdateChannel, REQUEST)

