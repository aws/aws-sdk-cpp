/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#define CreateAlarmModelAsync(...)  SubmitAsync(&IoTEventsClient::CreateAlarmModel, __VA_ARGS__)
#define CreateAlarmModelCallable(REQUEST)  SubmitCallable(&IoTEventsClient::CreateAlarmModel, REQUEST)

#define CreateDetectorModelAsync(...)  SubmitAsync(&IoTEventsClient::CreateDetectorModel, __VA_ARGS__)
#define CreateDetectorModelCallable(REQUEST)  SubmitCallable(&IoTEventsClient::CreateDetectorModel, REQUEST)

#define CreateInputAsync(...)  SubmitAsync(&IoTEventsClient::CreateInput, __VA_ARGS__)
#define CreateInputCallable(REQUEST)  SubmitCallable(&IoTEventsClient::CreateInput, REQUEST)

#define DeleteAlarmModelAsync(...)  SubmitAsync(&IoTEventsClient::DeleteAlarmModel, __VA_ARGS__)
#define DeleteAlarmModelCallable(REQUEST)  SubmitCallable(&IoTEventsClient::DeleteAlarmModel, REQUEST)

#define DeleteDetectorModelAsync(...)  SubmitAsync(&IoTEventsClient::DeleteDetectorModel, __VA_ARGS__)
#define DeleteDetectorModelCallable(REQUEST)  SubmitCallable(&IoTEventsClient::DeleteDetectorModel, REQUEST)

#define DeleteInputAsync(...)  SubmitAsync(&IoTEventsClient::DeleteInput, __VA_ARGS__)
#define DeleteInputCallable(REQUEST)  SubmitCallable(&IoTEventsClient::DeleteInput, REQUEST)

#define DescribeAlarmModelAsync(...)  SubmitAsync(&IoTEventsClient::DescribeAlarmModel, __VA_ARGS__)
#define DescribeAlarmModelCallable(REQUEST)  SubmitCallable(&IoTEventsClient::DescribeAlarmModel, REQUEST)

#define DescribeDetectorModelAsync(...)  SubmitAsync(&IoTEventsClient::DescribeDetectorModel, __VA_ARGS__)
#define DescribeDetectorModelCallable(REQUEST)  SubmitCallable(&IoTEventsClient::DescribeDetectorModel, REQUEST)

#define DescribeDetectorModelAnalysisAsync(...)  SubmitAsync(&IoTEventsClient::DescribeDetectorModelAnalysis, __VA_ARGS__)
#define DescribeDetectorModelAnalysisCallable(REQUEST)  SubmitCallable(&IoTEventsClient::DescribeDetectorModelAnalysis, REQUEST)

#define DescribeInputAsync(...)  SubmitAsync(&IoTEventsClient::DescribeInput, __VA_ARGS__)
#define DescribeInputCallable(REQUEST)  SubmitCallable(&IoTEventsClient::DescribeInput, REQUEST)

#define DescribeLoggingOptionsAsync(...)  SubmitAsync(&IoTEventsClient::DescribeLoggingOptions, __VA_ARGS__)
#define DescribeLoggingOptionsCallable(REQUEST)  SubmitCallable(&IoTEventsClient::DescribeLoggingOptions, REQUEST)

#define GetDetectorModelAnalysisResultsAsync(...)  SubmitAsync(&IoTEventsClient::GetDetectorModelAnalysisResults, __VA_ARGS__)
#define GetDetectorModelAnalysisResultsCallable(REQUEST)  SubmitCallable(&IoTEventsClient::GetDetectorModelAnalysisResults, REQUEST)

#define ListAlarmModelVersionsAsync(...)  SubmitAsync(&IoTEventsClient::ListAlarmModelVersions, __VA_ARGS__)
#define ListAlarmModelVersionsCallable(REQUEST)  SubmitCallable(&IoTEventsClient::ListAlarmModelVersions, REQUEST)

#define ListAlarmModelsAsync(...)  SubmitAsync(&IoTEventsClient::ListAlarmModels, __VA_ARGS__)
#define ListAlarmModelsCallable(REQUEST)  SubmitCallable(&IoTEventsClient::ListAlarmModels, REQUEST)

#define ListDetectorModelVersionsAsync(...)  SubmitAsync(&IoTEventsClient::ListDetectorModelVersions, __VA_ARGS__)
#define ListDetectorModelVersionsCallable(REQUEST)  SubmitCallable(&IoTEventsClient::ListDetectorModelVersions, REQUEST)

#define ListDetectorModelsAsync(...)  SubmitAsync(&IoTEventsClient::ListDetectorModels, __VA_ARGS__)
#define ListDetectorModelsCallable(REQUEST)  SubmitCallable(&IoTEventsClient::ListDetectorModels, REQUEST)

#define ListInputRoutingsAsync(...)  SubmitAsync(&IoTEventsClient::ListInputRoutings, __VA_ARGS__)
#define ListInputRoutingsCallable(REQUEST)  SubmitCallable(&IoTEventsClient::ListInputRoutings, REQUEST)

#define ListInputsAsync(...)  SubmitAsync(&IoTEventsClient::ListInputs, __VA_ARGS__)
#define ListInputsCallable(REQUEST)  SubmitCallable(&IoTEventsClient::ListInputs, REQUEST)

#define ListTagsForResourceAsync(...)  SubmitAsync(&IoTEventsClient::ListTagsForResource, __VA_ARGS__)
#define ListTagsForResourceCallable(REQUEST)  SubmitCallable(&IoTEventsClient::ListTagsForResource, REQUEST)

#define PutLoggingOptionsAsync(...)  SubmitAsync(&IoTEventsClient::PutLoggingOptions, __VA_ARGS__)
#define PutLoggingOptionsCallable(REQUEST)  SubmitCallable(&IoTEventsClient::PutLoggingOptions, REQUEST)

#define StartDetectorModelAnalysisAsync(...)  SubmitAsync(&IoTEventsClient::StartDetectorModelAnalysis, __VA_ARGS__)
#define StartDetectorModelAnalysisCallable(REQUEST)  SubmitCallable(&IoTEventsClient::StartDetectorModelAnalysis, REQUEST)

#define TagResourceAsync(...)  SubmitAsync(&IoTEventsClient::TagResource, __VA_ARGS__)
#define TagResourceCallable(REQUEST)  SubmitCallable(&IoTEventsClient::TagResource, REQUEST)

#define UntagResourceAsync(...)  SubmitAsync(&IoTEventsClient::UntagResource, __VA_ARGS__)
#define UntagResourceCallable(REQUEST)  SubmitCallable(&IoTEventsClient::UntagResource, REQUEST)

#define UpdateAlarmModelAsync(...)  SubmitAsync(&IoTEventsClient::UpdateAlarmModel, __VA_ARGS__)
#define UpdateAlarmModelCallable(REQUEST)  SubmitCallable(&IoTEventsClient::UpdateAlarmModel, REQUEST)

#define UpdateDetectorModelAsync(...)  SubmitAsync(&IoTEventsClient::UpdateDetectorModel, __VA_ARGS__)
#define UpdateDetectorModelCallable(REQUEST)  SubmitCallable(&IoTEventsClient::UpdateDetectorModel, REQUEST)

#define UpdateInputAsync(...)  SubmitAsync(&IoTEventsClient::UpdateInput, __VA_ARGS__)
#define UpdateInputCallable(REQUEST)  SubmitCallable(&IoTEventsClient::UpdateInput, REQUEST)

