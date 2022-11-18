/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#define StartMedicalStreamTranscriptionAsync(...)  SubmitAsync(&TranscribeStreamingServiceClient::StartMedicalStreamTranscription, __VA_ARGS__)
#define StartMedicalStreamTranscriptionCallable(REQUEST)  SubmitCallable(&TranscribeStreamingServiceClient::StartMedicalStreamTranscription, REQUEST)

#define StartStreamTranscriptionAsync(...)  SubmitAsync(&TranscribeStreamingServiceClient::StartStreamTranscription, __VA_ARGS__)
#define StartStreamTranscriptionCallable(REQUEST)  SubmitCallable(&TranscribeStreamingServiceClient::StartStreamTranscription, REQUEST)

