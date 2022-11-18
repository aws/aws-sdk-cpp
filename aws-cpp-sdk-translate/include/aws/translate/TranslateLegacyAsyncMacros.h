/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#define CreateParallelDataAsync(...)  SubmitAsync(&TranslateClient::CreateParallelData, __VA_ARGS__)
#define CreateParallelDataCallable(REQUEST)  SubmitCallable(&TranslateClient::CreateParallelData, REQUEST)

#define DeleteParallelDataAsync(...)  SubmitAsync(&TranslateClient::DeleteParallelData, __VA_ARGS__)
#define DeleteParallelDataCallable(REQUEST)  SubmitCallable(&TranslateClient::DeleteParallelData, REQUEST)

#define DeleteTerminologyAsync(...)  SubmitAsync(&TranslateClient::DeleteTerminology, __VA_ARGS__)
#define DeleteTerminologyCallable(REQUEST)  SubmitCallable(&TranslateClient::DeleteTerminology, REQUEST)

#define DescribeTextTranslationJobAsync(...)  SubmitAsync(&TranslateClient::DescribeTextTranslationJob, __VA_ARGS__)
#define DescribeTextTranslationJobCallable(REQUEST)  SubmitCallable(&TranslateClient::DescribeTextTranslationJob, REQUEST)

#define GetParallelDataAsync(...)  SubmitAsync(&TranslateClient::GetParallelData, __VA_ARGS__)
#define GetParallelDataCallable(REQUEST)  SubmitCallable(&TranslateClient::GetParallelData, REQUEST)

#define GetTerminologyAsync(...)  SubmitAsync(&TranslateClient::GetTerminology, __VA_ARGS__)
#define GetTerminologyCallable(REQUEST)  SubmitCallable(&TranslateClient::GetTerminology, REQUEST)

#define ImportTerminologyAsync(...)  SubmitAsync(&TranslateClient::ImportTerminology, __VA_ARGS__)
#define ImportTerminologyCallable(REQUEST)  SubmitCallable(&TranslateClient::ImportTerminology, REQUEST)

#define ListLanguagesAsync(...)  SubmitAsync(&TranslateClient::ListLanguages, __VA_ARGS__)
#define ListLanguagesCallable(REQUEST)  SubmitCallable(&TranslateClient::ListLanguages, REQUEST)

#define ListParallelDataAsync(...)  SubmitAsync(&TranslateClient::ListParallelData, __VA_ARGS__)
#define ListParallelDataCallable(REQUEST)  SubmitCallable(&TranslateClient::ListParallelData, REQUEST)

#define ListTagsForResourceAsync(...)  SubmitAsync(&TranslateClient::ListTagsForResource, __VA_ARGS__)
#define ListTagsForResourceCallable(REQUEST)  SubmitCallable(&TranslateClient::ListTagsForResource, REQUEST)

#define ListTerminologiesAsync(...)  SubmitAsync(&TranslateClient::ListTerminologies, __VA_ARGS__)
#define ListTerminologiesCallable(REQUEST)  SubmitCallable(&TranslateClient::ListTerminologies, REQUEST)

#define ListTextTranslationJobsAsync(...)  SubmitAsync(&TranslateClient::ListTextTranslationJobs, __VA_ARGS__)
#define ListTextTranslationJobsCallable(REQUEST)  SubmitCallable(&TranslateClient::ListTextTranslationJobs, REQUEST)

#define StartTextTranslationJobAsync(...)  SubmitAsync(&TranslateClient::StartTextTranslationJob, __VA_ARGS__)
#define StartTextTranslationJobCallable(REQUEST)  SubmitCallable(&TranslateClient::StartTextTranslationJob, REQUEST)

#define StopTextTranslationJobAsync(...)  SubmitAsync(&TranslateClient::StopTextTranslationJob, __VA_ARGS__)
#define StopTextTranslationJobCallable(REQUEST)  SubmitCallable(&TranslateClient::StopTextTranslationJob, REQUEST)

#define TagResourceAsync(...)  SubmitAsync(&TranslateClient::TagResource, __VA_ARGS__)
#define TagResourceCallable(REQUEST)  SubmitCallable(&TranslateClient::TagResource, REQUEST)

#define TranslateTextAsync(...)  SubmitAsync(&TranslateClient::TranslateText, __VA_ARGS__)
#define TranslateTextCallable(REQUEST)  SubmitCallable(&TranslateClient::TranslateText, REQUEST)

#define UntagResourceAsync(...)  SubmitAsync(&TranslateClient::UntagResource, __VA_ARGS__)
#define UntagResourceCallable(REQUEST)  SubmitCallable(&TranslateClient::UntagResource, REQUEST)

#define UpdateParallelDataAsync(...)  SubmitAsync(&TranslateClient::UpdateParallelData, __VA_ARGS__)
#define UpdateParallelDataCallable(REQUEST)  SubmitCallable(&TranslateClient::UpdateParallelData, REQUEST)

