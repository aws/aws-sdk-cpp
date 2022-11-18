/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#define AssociateEntitiesToExperienceAsync(...)  SubmitAsync(&KendraClient::AssociateEntitiesToExperience, __VA_ARGS__)
#define AssociateEntitiesToExperienceCallable(REQUEST)  SubmitCallable(&KendraClient::AssociateEntitiesToExperience, REQUEST)

#define AssociatePersonasToEntitiesAsync(...)  SubmitAsync(&KendraClient::AssociatePersonasToEntities, __VA_ARGS__)
#define AssociatePersonasToEntitiesCallable(REQUEST)  SubmitCallable(&KendraClient::AssociatePersonasToEntities, REQUEST)

#define BatchDeleteDocumentAsync(...)  SubmitAsync(&KendraClient::BatchDeleteDocument, __VA_ARGS__)
#define BatchDeleteDocumentCallable(REQUEST)  SubmitCallable(&KendraClient::BatchDeleteDocument, REQUEST)

#define BatchGetDocumentStatusAsync(...)  SubmitAsync(&KendraClient::BatchGetDocumentStatus, __VA_ARGS__)
#define BatchGetDocumentStatusCallable(REQUEST)  SubmitCallable(&KendraClient::BatchGetDocumentStatus, REQUEST)

#define BatchPutDocumentAsync(...)  SubmitAsync(&KendraClient::BatchPutDocument, __VA_ARGS__)
#define BatchPutDocumentCallable(REQUEST)  SubmitCallable(&KendraClient::BatchPutDocument, REQUEST)

#define ClearQuerySuggestionsAsync(...)  SubmitAsync(&KendraClient::ClearQuerySuggestions, __VA_ARGS__)
#define ClearQuerySuggestionsCallable(REQUEST)  SubmitCallable(&KendraClient::ClearQuerySuggestions, REQUEST)

#define CreateAccessControlConfigurationAsync(...)  SubmitAsync(&KendraClient::CreateAccessControlConfiguration, __VA_ARGS__)
#define CreateAccessControlConfigurationCallable(REQUEST)  SubmitCallable(&KendraClient::CreateAccessControlConfiguration, REQUEST)

#define CreateDataSourceAsync(...)  SubmitAsync(&KendraClient::CreateDataSource, __VA_ARGS__)
#define CreateDataSourceCallable(REQUEST)  SubmitCallable(&KendraClient::CreateDataSource, REQUEST)

#define CreateExperienceAsync(...)  SubmitAsync(&KendraClient::CreateExperience, __VA_ARGS__)
#define CreateExperienceCallable(REQUEST)  SubmitCallable(&KendraClient::CreateExperience, REQUEST)

#define CreateFaqAsync(...)  SubmitAsync(&KendraClient::CreateFaq, __VA_ARGS__)
#define CreateFaqCallable(REQUEST)  SubmitCallable(&KendraClient::CreateFaq, REQUEST)

#define CreateIndexAsync(...)  SubmitAsync(&KendraClient::CreateIndex, __VA_ARGS__)
#define CreateIndexCallable(REQUEST)  SubmitCallable(&KendraClient::CreateIndex, REQUEST)

#define CreateQuerySuggestionsBlockListAsync(...)  SubmitAsync(&KendraClient::CreateQuerySuggestionsBlockList, __VA_ARGS__)
#define CreateQuerySuggestionsBlockListCallable(REQUEST)  SubmitCallable(&KendraClient::CreateQuerySuggestionsBlockList, REQUEST)

#define CreateThesaurusAsync(...)  SubmitAsync(&KendraClient::CreateThesaurus, __VA_ARGS__)
#define CreateThesaurusCallable(REQUEST)  SubmitCallable(&KendraClient::CreateThesaurus, REQUEST)

#define DeleteAccessControlConfigurationAsync(...)  SubmitAsync(&KendraClient::DeleteAccessControlConfiguration, __VA_ARGS__)
#define DeleteAccessControlConfigurationCallable(REQUEST)  SubmitCallable(&KendraClient::DeleteAccessControlConfiguration, REQUEST)

#define DeleteDataSourceAsync(...)  SubmitAsync(&KendraClient::DeleteDataSource, __VA_ARGS__)
#define DeleteDataSourceCallable(REQUEST)  SubmitCallable(&KendraClient::DeleteDataSource, REQUEST)

#define DeleteExperienceAsync(...)  SubmitAsync(&KendraClient::DeleteExperience, __VA_ARGS__)
#define DeleteExperienceCallable(REQUEST)  SubmitCallable(&KendraClient::DeleteExperience, REQUEST)

#define DeleteFaqAsync(...)  SubmitAsync(&KendraClient::DeleteFaq, __VA_ARGS__)
#define DeleteFaqCallable(REQUEST)  SubmitCallable(&KendraClient::DeleteFaq, REQUEST)

#define DeleteIndexAsync(...)  SubmitAsync(&KendraClient::DeleteIndex, __VA_ARGS__)
#define DeleteIndexCallable(REQUEST)  SubmitCallable(&KendraClient::DeleteIndex, REQUEST)

#define DeletePrincipalMappingAsync(...)  SubmitAsync(&KendraClient::DeletePrincipalMapping, __VA_ARGS__)
#define DeletePrincipalMappingCallable(REQUEST)  SubmitCallable(&KendraClient::DeletePrincipalMapping, REQUEST)

#define DeleteQuerySuggestionsBlockListAsync(...)  SubmitAsync(&KendraClient::DeleteQuerySuggestionsBlockList, __VA_ARGS__)
#define DeleteQuerySuggestionsBlockListCallable(REQUEST)  SubmitCallable(&KendraClient::DeleteQuerySuggestionsBlockList, REQUEST)

#define DeleteThesaurusAsync(...)  SubmitAsync(&KendraClient::DeleteThesaurus, __VA_ARGS__)
#define DeleteThesaurusCallable(REQUEST)  SubmitCallable(&KendraClient::DeleteThesaurus, REQUEST)

#define DescribeAccessControlConfigurationAsync(...)  SubmitAsync(&KendraClient::DescribeAccessControlConfiguration, __VA_ARGS__)
#define DescribeAccessControlConfigurationCallable(REQUEST)  SubmitCallable(&KendraClient::DescribeAccessControlConfiguration, REQUEST)

#define DescribeDataSourceAsync(...)  SubmitAsync(&KendraClient::DescribeDataSource, __VA_ARGS__)
#define DescribeDataSourceCallable(REQUEST)  SubmitCallable(&KendraClient::DescribeDataSource, REQUEST)

#define DescribeExperienceAsync(...)  SubmitAsync(&KendraClient::DescribeExperience, __VA_ARGS__)
#define DescribeExperienceCallable(REQUEST)  SubmitCallable(&KendraClient::DescribeExperience, REQUEST)

#define DescribeFaqAsync(...)  SubmitAsync(&KendraClient::DescribeFaq, __VA_ARGS__)
#define DescribeFaqCallable(REQUEST)  SubmitCallable(&KendraClient::DescribeFaq, REQUEST)

#define DescribeIndexAsync(...)  SubmitAsync(&KendraClient::DescribeIndex, __VA_ARGS__)
#define DescribeIndexCallable(REQUEST)  SubmitCallable(&KendraClient::DescribeIndex, REQUEST)

#define DescribePrincipalMappingAsync(...)  SubmitAsync(&KendraClient::DescribePrincipalMapping, __VA_ARGS__)
#define DescribePrincipalMappingCallable(REQUEST)  SubmitCallable(&KendraClient::DescribePrincipalMapping, REQUEST)

#define DescribeQuerySuggestionsBlockListAsync(...)  SubmitAsync(&KendraClient::DescribeQuerySuggestionsBlockList, __VA_ARGS__)
#define DescribeQuerySuggestionsBlockListCallable(REQUEST)  SubmitCallable(&KendraClient::DescribeQuerySuggestionsBlockList, REQUEST)

#define DescribeQuerySuggestionsConfigAsync(...)  SubmitAsync(&KendraClient::DescribeQuerySuggestionsConfig, __VA_ARGS__)
#define DescribeQuerySuggestionsConfigCallable(REQUEST)  SubmitCallable(&KendraClient::DescribeQuerySuggestionsConfig, REQUEST)

#define DescribeThesaurusAsync(...)  SubmitAsync(&KendraClient::DescribeThesaurus, __VA_ARGS__)
#define DescribeThesaurusCallable(REQUEST)  SubmitCallable(&KendraClient::DescribeThesaurus, REQUEST)

#define DisassociateEntitiesFromExperienceAsync(...)  SubmitAsync(&KendraClient::DisassociateEntitiesFromExperience, __VA_ARGS__)
#define DisassociateEntitiesFromExperienceCallable(REQUEST)  SubmitCallable(&KendraClient::DisassociateEntitiesFromExperience, REQUEST)

#define DisassociatePersonasFromEntitiesAsync(...)  SubmitAsync(&KendraClient::DisassociatePersonasFromEntities, __VA_ARGS__)
#define DisassociatePersonasFromEntitiesCallable(REQUEST)  SubmitCallable(&KendraClient::DisassociatePersonasFromEntities, REQUEST)

#define GetQuerySuggestionsAsync(...)  SubmitAsync(&KendraClient::GetQuerySuggestions, __VA_ARGS__)
#define GetQuerySuggestionsCallable(REQUEST)  SubmitCallable(&KendraClient::GetQuerySuggestions, REQUEST)

#define GetSnapshotsAsync(...)  SubmitAsync(&KendraClient::GetSnapshots, __VA_ARGS__)
#define GetSnapshotsCallable(REQUEST)  SubmitCallable(&KendraClient::GetSnapshots, REQUEST)

#define ListAccessControlConfigurationsAsync(...)  SubmitAsync(&KendraClient::ListAccessControlConfigurations, __VA_ARGS__)
#define ListAccessControlConfigurationsCallable(REQUEST)  SubmitCallable(&KendraClient::ListAccessControlConfigurations, REQUEST)

#define ListDataSourceSyncJobsAsync(...)  SubmitAsync(&KendraClient::ListDataSourceSyncJobs, __VA_ARGS__)
#define ListDataSourceSyncJobsCallable(REQUEST)  SubmitCallable(&KendraClient::ListDataSourceSyncJobs, REQUEST)

#define ListDataSourcesAsync(...)  SubmitAsync(&KendraClient::ListDataSources, __VA_ARGS__)
#define ListDataSourcesCallable(REQUEST)  SubmitCallable(&KendraClient::ListDataSources, REQUEST)

#define ListEntityPersonasAsync(...)  SubmitAsync(&KendraClient::ListEntityPersonas, __VA_ARGS__)
#define ListEntityPersonasCallable(REQUEST)  SubmitCallable(&KendraClient::ListEntityPersonas, REQUEST)

#define ListExperienceEntitiesAsync(...)  SubmitAsync(&KendraClient::ListExperienceEntities, __VA_ARGS__)
#define ListExperienceEntitiesCallable(REQUEST)  SubmitCallable(&KendraClient::ListExperienceEntities, REQUEST)

#define ListExperiencesAsync(...)  SubmitAsync(&KendraClient::ListExperiences, __VA_ARGS__)
#define ListExperiencesCallable(REQUEST)  SubmitCallable(&KendraClient::ListExperiences, REQUEST)

#define ListFaqsAsync(...)  SubmitAsync(&KendraClient::ListFaqs, __VA_ARGS__)
#define ListFaqsCallable(REQUEST)  SubmitCallable(&KendraClient::ListFaqs, REQUEST)

#define ListGroupsOlderThanOrderingIdAsync(...)  SubmitAsync(&KendraClient::ListGroupsOlderThanOrderingId, __VA_ARGS__)
#define ListGroupsOlderThanOrderingIdCallable(REQUEST)  SubmitCallable(&KendraClient::ListGroupsOlderThanOrderingId, REQUEST)

#define ListIndicesAsync(...)  SubmitAsync(&KendraClient::ListIndices, __VA_ARGS__)
#define ListIndicesCallable(REQUEST)  SubmitCallable(&KendraClient::ListIndices, REQUEST)

#define ListQuerySuggestionsBlockListsAsync(...)  SubmitAsync(&KendraClient::ListQuerySuggestionsBlockLists, __VA_ARGS__)
#define ListQuerySuggestionsBlockListsCallable(REQUEST)  SubmitCallable(&KendraClient::ListQuerySuggestionsBlockLists, REQUEST)

#define ListTagsForResourceAsync(...)  SubmitAsync(&KendraClient::ListTagsForResource, __VA_ARGS__)
#define ListTagsForResourceCallable(REQUEST)  SubmitCallable(&KendraClient::ListTagsForResource, REQUEST)

#define ListThesauriAsync(...)  SubmitAsync(&KendraClient::ListThesauri, __VA_ARGS__)
#define ListThesauriCallable(REQUEST)  SubmitCallable(&KendraClient::ListThesauri, REQUEST)

#define PutPrincipalMappingAsync(...)  SubmitAsync(&KendraClient::PutPrincipalMapping, __VA_ARGS__)
#define PutPrincipalMappingCallable(REQUEST)  SubmitCallable(&KendraClient::PutPrincipalMapping, REQUEST)

#define QueryAsync(...)  SubmitAsync(&KendraClient::Query, __VA_ARGS__)
#define QueryCallable(REQUEST)  SubmitCallable(&KendraClient::Query, REQUEST)

#define StartDataSourceSyncJobAsync(...)  SubmitAsync(&KendraClient::StartDataSourceSyncJob, __VA_ARGS__)
#define StartDataSourceSyncJobCallable(REQUEST)  SubmitCallable(&KendraClient::StartDataSourceSyncJob, REQUEST)

#define StopDataSourceSyncJobAsync(...)  SubmitAsync(&KendraClient::StopDataSourceSyncJob, __VA_ARGS__)
#define StopDataSourceSyncJobCallable(REQUEST)  SubmitCallable(&KendraClient::StopDataSourceSyncJob, REQUEST)

#define SubmitFeedbackAsync(...)  SubmitAsync(&KendraClient::SubmitFeedback, __VA_ARGS__)
#define SubmitFeedbackCallable(REQUEST)  SubmitCallable(&KendraClient::SubmitFeedback, REQUEST)

#define TagResourceAsync(...)  SubmitAsync(&KendraClient::TagResource, __VA_ARGS__)
#define TagResourceCallable(REQUEST)  SubmitCallable(&KendraClient::TagResource, REQUEST)

#define UntagResourceAsync(...)  SubmitAsync(&KendraClient::UntagResource, __VA_ARGS__)
#define UntagResourceCallable(REQUEST)  SubmitCallable(&KendraClient::UntagResource, REQUEST)

#define UpdateAccessControlConfigurationAsync(...)  SubmitAsync(&KendraClient::UpdateAccessControlConfiguration, __VA_ARGS__)
#define UpdateAccessControlConfigurationCallable(REQUEST)  SubmitCallable(&KendraClient::UpdateAccessControlConfiguration, REQUEST)

#define UpdateDataSourceAsync(...)  SubmitAsync(&KendraClient::UpdateDataSource, __VA_ARGS__)
#define UpdateDataSourceCallable(REQUEST)  SubmitCallable(&KendraClient::UpdateDataSource, REQUEST)

#define UpdateExperienceAsync(...)  SubmitAsync(&KendraClient::UpdateExperience, __VA_ARGS__)
#define UpdateExperienceCallable(REQUEST)  SubmitCallable(&KendraClient::UpdateExperience, REQUEST)

#define UpdateIndexAsync(...)  SubmitAsync(&KendraClient::UpdateIndex, __VA_ARGS__)
#define UpdateIndexCallable(REQUEST)  SubmitCallable(&KendraClient::UpdateIndex, REQUEST)

#define UpdateQuerySuggestionsBlockListAsync(...)  SubmitAsync(&KendraClient::UpdateQuerySuggestionsBlockList, __VA_ARGS__)
#define UpdateQuerySuggestionsBlockListCallable(REQUEST)  SubmitCallable(&KendraClient::UpdateQuerySuggestionsBlockList, REQUEST)

#define UpdateQuerySuggestionsConfigAsync(...)  SubmitAsync(&KendraClient::UpdateQuerySuggestionsConfig, __VA_ARGS__)
#define UpdateQuerySuggestionsConfigCallable(REQUEST)  SubmitCallable(&KendraClient::UpdateQuerySuggestionsConfig, REQUEST)

#define UpdateThesaurusAsync(...)  SubmitAsync(&KendraClient::UpdateThesaurus, __VA_ARGS__)
#define UpdateThesaurusCallable(REQUEST)  SubmitCallable(&KendraClient::UpdateThesaurus, REQUEST)

