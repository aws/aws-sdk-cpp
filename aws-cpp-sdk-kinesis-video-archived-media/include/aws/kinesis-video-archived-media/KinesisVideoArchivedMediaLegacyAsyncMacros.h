/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#define GetClipAsync(...)  SubmitAsync(&KinesisVideoArchivedMediaClient::GetClip, __VA_ARGS__)
#define GetClipCallable(REQUEST)  SubmitCallable(&KinesisVideoArchivedMediaClient::GetClip, REQUEST)

#define GetDASHStreamingSessionURLAsync(...)  SubmitAsync(&KinesisVideoArchivedMediaClient::GetDASHStreamingSessionURL, __VA_ARGS__)
#define GetDASHStreamingSessionURLCallable(REQUEST)  SubmitCallable(&KinesisVideoArchivedMediaClient::GetDASHStreamingSessionURL, REQUEST)

#define GetHLSStreamingSessionURLAsync(...)  SubmitAsync(&KinesisVideoArchivedMediaClient::GetHLSStreamingSessionURL, __VA_ARGS__)
#define GetHLSStreamingSessionURLCallable(REQUEST)  SubmitCallable(&KinesisVideoArchivedMediaClient::GetHLSStreamingSessionURL, REQUEST)

#define GetImagesAsync(...)  SubmitAsync(&KinesisVideoArchivedMediaClient::GetImages, __VA_ARGS__)
#define GetImagesCallable(REQUEST)  SubmitCallable(&KinesisVideoArchivedMediaClient::GetImages, REQUEST)

#define GetMediaForFragmentListAsync(...)  SubmitAsync(&KinesisVideoArchivedMediaClient::GetMediaForFragmentList, __VA_ARGS__)
#define GetMediaForFragmentListCallable(REQUEST)  SubmitCallable(&KinesisVideoArchivedMediaClient::GetMediaForFragmentList, REQUEST)

#define ListFragmentsAsync(...)  SubmitAsync(&KinesisVideoArchivedMediaClient::ListFragments, __VA_ARGS__)
#define ListFragmentsCallable(REQUEST)  SubmitCallable(&KinesisVideoArchivedMediaClient::ListFragments, REQUEST)

