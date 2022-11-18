/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#define CreateCallAnalyticsCategoryAsync(...)  SubmitAsync(&TranscribeServiceClient::CreateCallAnalyticsCategory, __VA_ARGS__)
#define CreateCallAnalyticsCategoryCallable(REQUEST)  SubmitCallable(&TranscribeServiceClient::CreateCallAnalyticsCategory, REQUEST)

#define CreateLanguageModelAsync(...)  SubmitAsync(&TranscribeServiceClient::CreateLanguageModel, __VA_ARGS__)
#define CreateLanguageModelCallable(REQUEST)  SubmitCallable(&TranscribeServiceClient::CreateLanguageModel, REQUEST)

#define CreateMedicalVocabularyAsync(...)  SubmitAsync(&TranscribeServiceClient::CreateMedicalVocabulary, __VA_ARGS__)
#define CreateMedicalVocabularyCallable(REQUEST)  SubmitCallable(&TranscribeServiceClient::CreateMedicalVocabulary, REQUEST)

#define CreateVocabularyAsync(...)  SubmitAsync(&TranscribeServiceClient::CreateVocabulary, __VA_ARGS__)
#define CreateVocabularyCallable(REQUEST)  SubmitCallable(&TranscribeServiceClient::CreateVocabulary, REQUEST)

#define CreateVocabularyFilterAsync(...)  SubmitAsync(&TranscribeServiceClient::CreateVocabularyFilter, __VA_ARGS__)
#define CreateVocabularyFilterCallable(REQUEST)  SubmitCallable(&TranscribeServiceClient::CreateVocabularyFilter, REQUEST)

#define DeleteCallAnalyticsCategoryAsync(...)  SubmitAsync(&TranscribeServiceClient::DeleteCallAnalyticsCategory, __VA_ARGS__)
#define DeleteCallAnalyticsCategoryCallable(REQUEST)  SubmitCallable(&TranscribeServiceClient::DeleteCallAnalyticsCategory, REQUEST)

#define DeleteCallAnalyticsJobAsync(...)  SubmitAsync(&TranscribeServiceClient::DeleteCallAnalyticsJob, __VA_ARGS__)
#define DeleteCallAnalyticsJobCallable(REQUEST)  SubmitCallable(&TranscribeServiceClient::DeleteCallAnalyticsJob, REQUEST)

#define DeleteLanguageModelAsync(...)  SubmitAsync(&TranscribeServiceClient::DeleteLanguageModel, __VA_ARGS__)
#define DeleteLanguageModelCallable(REQUEST)  SubmitCallable(&TranscribeServiceClient::DeleteLanguageModel, REQUEST)

#define DeleteMedicalTranscriptionJobAsync(...)  SubmitAsync(&TranscribeServiceClient::DeleteMedicalTranscriptionJob, __VA_ARGS__)
#define DeleteMedicalTranscriptionJobCallable(REQUEST)  SubmitCallable(&TranscribeServiceClient::DeleteMedicalTranscriptionJob, REQUEST)

#define DeleteMedicalVocabularyAsync(...)  SubmitAsync(&TranscribeServiceClient::DeleteMedicalVocabulary, __VA_ARGS__)
#define DeleteMedicalVocabularyCallable(REQUEST)  SubmitCallable(&TranscribeServiceClient::DeleteMedicalVocabulary, REQUEST)

#define DeleteTranscriptionJobAsync(...)  SubmitAsync(&TranscribeServiceClient::DeleteTranscriptionJob, __VA_ARGS__)
#define DeleteTranscriptionJobCallable(REQUEST)  SubmitCallable(&TranscribeServiceClient::DeleteTranscriptionJob, REQUEST)

#define DeleteVocabularyAsync(...)  SubmitAsync(&TranscribeServiceClient::DeleteVocabulary, __VA_ARGS__)
#define DeleteVocabularyCallable(REQUEST)  SubmitCallable(&TranscribeServiceClient::DeleteVocabulary, REQUEST)

#define DeleteVocabularyFilterAsync(...)  SubmitAsync(&TranscribeServiceClient::DeleteVocabularyFilter, __VA_ARGS__)
#define DeleteVocabularyFilterCallable(REQUEST)  SubmitCallable(&TranscribeServiceClient::DeleteVocabularyFilter, REQUEST)

#define DescribeLanguageModelAsync(...)  SubmitAsync(&TranscribeServiceClient::DescribeLanguageModel, __VA_ARGS__)
#define DescribeLanguageModelCallable(REQUEST)  SubmitCallable(&TranscribeServiceClient::DescribeLanguageModel, REQUEST)

#define GetCallAnalyticsCategoryAsync(...)  SubmitAsync(&TranscribeServiceClient::GetCallAnalyticsCategory, __VA_ARGS__)
#define GetCallAnalyticsCategoryCallable(REQUEST)  SubmitCallable(&TranscribeServiceClient::GetCallAnalyticsCategory, REQUEST)

#define GetCallAnalyticsJobAsync(...)  SubmitAsync(&TranscribeServiceClient::GetCallAnalyticsJob, __VA_ARGS__)
#define GetCallAnalyticsJobCallable(REQUEST)  SubmitCallable(&TranscribeServiceClient::GetCallAnalyticsJob, REQUEST)

#define GetMedicalTranscriptionJobAsync(...)  SubmitAsync(&TranscribeServiceClient::GetMedicalTranscriptionJob, __VA_ARGS__)
#define GetMedicalTranscriptionJobCallable(REQUEST)  SubmitCallable(&TranscribeServiceClient::GetMedicalTranscriptionJob, REQUEST)

#define GetMedicalVocabularyAsync(...)  SubmitAsync(&TranscribeServiceClient::GetMedicalVocabulary, __VA_ARGS__)
#define GetMedicalVocabularyCallable(REQUEST)  SubmitCallable(&TranscribeServiceClient::GetMedicalVocabulary, REQUEST)

#define GetTranscriptionJobAsync(...)  SubmitAsync(&TranscribeServiceClient::GetTranscriptionJob, __VA_ARGS__)
#define GetTranscriptionJobCallable(REQUEST)  SubmitCallable(&TranscribeServiceClient::GetTranscriptionJob, REQUEST)

#define GetVocabularyAsync(...)  SubmitAsync(&TranscribeServiceClient::GetVocabulary, __VA_ARGS__)
#define GetVocabularyCallable(REQUEST)  SubmitCallable(&TranscribeServiceClient::GetVocabulary, REQUEST)

#define GetVocabularyFilterAsync(...)  SubmitAsync(&TranscribeServiceClient::GetVocabularyFilter, __VA_ARGS__)
#define GetVocabularyFilterCallable(REQUEST)  SubmitCallable(&TranscribeServiceClient::GetVocabularyFilter, REQUEST)

#define ListCallAnalyticsCategoriesAsync(...)  SubmitAsync(&TranscribeServiceClient::ListCallAnalyticsCategories, __VA_ARGS__)
#define ListCallAnalyticsCategoriesCallable(REQUEST)  SubmitCallable(&TranscribeServiceClient::ListCallAnalyticsCategories, REQUEST)

#define ListCallAnalyticsJobsAsync(...)  SubmitAsync(&TranscribeServiceClient::ListCallAnalyticsJobs, __VA_ARGS__)
#define ListCallAnalyticsJobsCallable(REQUEST)  SubmitCallable(&TranscribeServiceClient::ListCallAnalyticsJobs, REQUEST)

#define ListLanguageModelsAsync(...)  SubmitAsync(&TranscribeServiceClient::ListLanguageModels, __VA_ARGS__)
#define ListLanguageModelsCallable(REQUEST)  SubmitCallable(&TranscribeServiceClient::ListLanguageModels, REQUEST)

#define ListMedicalTranscriptionJobsAsync(...)  SubmitAsync(&TranscribeServiceClient::ListMedicalTranscriptionJobs, __VA_ARGS__)
#define ListMedicalTranscriptionJobsCallable(REQUEST)  SubmitCallable(&TranscribeServiceClient::ListMedicalTranscriptionJobs, REQUEST)

#define ListMedicalVocabulariesAsync(...)  SubmitAsync(&TranscribeServiceClient::ListMedicalVocabularies, __VA_ARGS__)
#define ListMedicalVocabulariesCallable(REQUEST)  SubmitCallable(&TranscribeServiceClient::ListMedicalVocabularies, REQUEST)

#define ListTagsForResourceAsync(...)  SubmitAsync(&TranscribeServiceClient::ListTagsForResource, __VA_ARGS__)
#define ListTagsForResourceCallable(REQUEST)  SubmitCallable(&TranscribeServiceClient::ListTagsForResource, REQUEST)

#define ListTranscriptionJobsAsync(...)  SubmitAsync(&TranscribeServiceClient::ListTranscriptionJobs, __VA_ARGS__)
#define ListTranscriptionJobsCallable(REQUEST)  SubmitCallable(&TranscribeServiceClient::ListTranscriptionJobs, REQUEST)

#define ListVocabulariesAsync(...)  SubmitAsync(&TranscribeServiceClient::ListVocabularies, __VA_ARGS__)
#define ListVocabulariesCallable(REQUEST)  SubmitCallable(&TranscribeServiceClient::ListVocabularies, REQUEST)

#define ListVocabularyFiltersAsync(...)  SubmitAsync(&TranscribeServiceClient::ListVocabularyFilters, __VA_ARGS__)
#define ListVocabularyFiltersCallable(REQUEST)  SubmitCallable(&TranscribeServiceClient::ListVocabularyFilters, REQUEST)

#define StartCallAnalyticsJobAsync(...)  SubmitAsync(&TranscribeServiceClient::StartCallAnalyticsJob, __VA_ARGS__)
#define StartCallAnalyticsJobCallable(REQUEST)  SubmitCallable(&TranscribeServiceClient::StartCallAnalyticsJob, REQUEST)

#define StartMedicalTranscriptionJobAsync(...)  SubmitAsync(&TranscribeServiceClient::StartMedicalTranscriptionJob, __VA_ARGS__)
#define StartMedicalTranscriptionJobCallable(REQUEST)  SubmitCallable(&TranscribeServiceClient::StartMedicalTranscriptionJob, REQUEST)

#define StartTranscriptionJobAsync(...)  SubmitAsync(&TranscribeServiceClient::StartTranscriptionJob, __VA_ARGS__)
#define StartTranscriptionJobCallable(REQUEST)  SubmitCallable(&TranscribeServiceClient::StartTranscriptionJob, REQUEST)

#define TagResourceAsync(...)  SubmitAsync(&TranscribeServiceClient::TagResource, __VA_ARGS__)
#define TagResourceCallable(REQUEST)  SubmitCallable(&TranscribeServiceClient::TagResource, REQUEST)

#define UntagResourceAsync(...)  SubmitAsync(&TranscribeServiceClient::UntagResource, __VA_ARGS__)
#define UntagResourceCallable(REQUEST)  SubmitCallable(&TranscribeServiceClient::UntagResource, REQUEST)

#define UpdateCallAnalyticsCategoryAsync(...)  SubmitAsync(&TranscribeServiceClient::UpdateCallAnalyticsCategory, __VA_ARGS__)
#define UpdateCallAnalyticsCategoryCallable(REQUEST)  SubmitCallable(&TranscribeServiceClient::UpdateCallAnalyticsCategory, REQUEST)

#define UpdateMedicalVocabularyAsync(...)  SubmitAsync(&TranscribeServiceClient::UpdateMedicalVocabulary, __VA_ARGS__)
#define UpdateMedicalVocabularyCallable(REQUEST)  SubmitCallable(&TranscribeServiceClient::UpdateMedicalVocabulary, REQUEST)

#define UpdateVocabularyAsync(...)  SubmitAsync(&TranscribeServiceClient::UpdateVocabulary, __VA_ARGS__)
#define UpdateVocabularyCallable(REQUEST)  SubmitCallable(&TranscribeServiceClient::UpdateVocabulary, REQUEST)

#define UpdateVocabularyFilterAsync(...)  SubmitAsync(&TranscribeServiceClient::UpdateVocabularyFilter, __VA_ARGS__)
#define UpdateVocabularyFilterCallable(REQUEST)  SubmitCallable(&TranscribeServiceClient::UpdateVocabularyFilter, REQUEST)

