/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#define BatchDetectDominantLanguageAsync(...)  SubmitAsync(&ComprehendClient::BatchDetectDominantLanguage, __VA_ARGS__)
#define BatchDetectDominantLanguageCallable(REQUEST)  SubmitCallable(&ComprehendClient::BatchDetectDominantLanguage, REQUEST)

#define BatchDetectEntitiesAsync(...)  SubmitAsync(&ComprehendClient::BatchDetectEntities, __VA_ARGS__)
#define BatchDetectEntitiesCallable(REQUEST)  SubmitCallable(&ComprehendClient::BatchDetectEntities, REQUEST)

#define BatchDetectKeyPhrasesAsync(...)  SubmitAsync(&ComprehendClient::BatchDetectKeyPhrases, __VA_ARGS__)
#define BatchDetectKeyPhrasesCallable(REQUEST)  SubmitCallable(&ComprehendClient::BatchDetectKeyPhrases, REQUEST)

#define BatchDetectSentimentAsync(...)  SubmitAsync(&ComprehendClient::BatchDetectSentiment, __VA_ARGS__)
#define BatchDetectSentimentCallable(REQUEST)  SubmitCallable(&ComprehendClient::BatchDetectSentiment, REQUEST)

#define BatchDetectSyntaxAsync(...)  SubmitAsync(&ComprehendClient::BatchDetectSyntax, __VA_ARGS__)
#define BatchDetectSyntaxCallable(REQUEST)  SubmitCallable(&ComprehendClient::BatchDetectSyntax, REQUEST)

#define BatchDetectTargetedSentimentAsync(...)  SubmitAsync(&ComprehendClient::BatchDetectTargetedSentiment, __VA_ARGS__)
#define BatchDetectTargetedSentimentCallable(REQUEST)  SubmitCallable(&ComprehendClient::BatchDetectTargetedSentiment, REQUEST)

#define ClassifyDocumentAsync(...)  SubmitAsync(&ComprehendClient::ClassifyDocument, __VA_ARGS__)
#define ClassifyDocumentCallable(REQUEST)  SubmitCallable(&ComprehendClient::ClassifyDocument, REQUEST)

#define ContainsPiiEntitiesAsync(...)  SubmitAsync(&ComprehendClient::ContainsPiiEntities, __VA_ARGS__)
#define ContainsPiiEntitiesCallable(REQUEST)  SubmitCallable(&ComprehendClient::ContainsPiiEntities, REQUEST)

#define CreateDocumentClassifierAsync(...)  SubmitAsync(&ComprehendClient::CreateDocumentClassifier, __VA_ARGS__)
#define CreateDocumentClassifierCallable(REQUEST)  SubmitCallable(&ComprehendClient::CreateDocumentClassifier, REQUEST)

#define CreateEndpointAsync(...)  SubmitAsync(&ComprehendClient::CreateEndpoint, __VA_ARGS__)
#define CreateEndpointCallable(REQUEST)  SubmitCallable(&ComprehendClient::CreateEndpoint, REQUEST)

#define CreateEntityRecognizerAsync(...)  SubmitAsync(&ComprehendClient::CreateEntityRecognizer, __VA_ARGS__)
#define CreateEntityRecognizerCallable(REQUEST)  SubmitCallable(&ComprehendClient::CreateEntityRecognizer, REQUEST)

#define DeleteDocumentClassifierAsync(...)  SubmitAsync(&ComprehendClient::DeleteDocumentClassifier, __VA_ARGS__)
#define DeleteDocumentClassifierCallable(REQUEST)  SubmitCallable(&ComprehendClient::DeleteDocumentClassifier, REQUEST)

#define DeleteEndpointAsync(...)  SubmitAsync(&ComprehendClient::DeleteEndpoint, __VA_ARGS__)
#define DeleteEndpointCallable(REQUEST)  SubmitCallable(&ComprehendClient::DeleteEndpoint, REQUEST)

#define DeleteEntityRecognizerAsync(...)  SubmitAsync(&ComprehendClient::DeleteEntityRecognizer, __VA_ARGS__)
#define DeleteEntityRecognizerCallable(REQUEST)  SubmitCallable(&ComprehendClient::DeleteEntityRecognizer, REQUEST)

#define DeleteResourcePolicyAsync(...)  SubmitAsync(&ComprehendClient::DeleteResourcePolicy, __VA_ARGS__)
#define DeleteResourcePolicyCallable(REQUEST)  SubmitCallable(&ComprehendClient::DeleteResourcePolicy, REQUEST)

#define DescribeDocumentClassificationJobAsync(...)  SubmitAsync(&ComprehendClient::DescribeDocumentClassificationJob, __VA_ARGS__)
#define DescribeDocumentClassificationJobCallable(REQUEST)  SubmitCallable(&ComprehendClient::DescribeDocumentClassificationJob, REQUEST)

#define DescribeDocumentClassifierAsync(...)  SubmitAsync(&ComprehendClient::DescribeDocumentClassifier, __VA_ARGS__)
#define DescribeDocumentClassifierCallable(REQUEST)  SubmitCallable(&ComprehendClient::DescribeDocumentClassifier, REQUEST)

#define DescribeDominantLanguageDetectionJobAsync(...)  SubmitAsync(&ComprehendClient::DescribeDominantLanguageDetectionJob, __VA_ARGS__)
#define DescribeDominantLanguageDetectionJobCallable(REQUEST)  SubmitCallable(&ComprehendClient::DescribeDominantLanguageDetectionJob, REQUEST)

#define DescribeEndpointAsync(...)  SubmitAsync(&ComprehendClient::DescribeEndpoint, __VA_ARGS__)
#define DescribeEndpointCallable(REQUEST)  SubmitCallable(&ComprehendClient::DescribeEndpoint, REQUEST)

#define DescribeEntitiesDetectionJobAsync(...)  SubmitAsync(&ComprehendClient::DescribeEntitiesDetectionJob, __VA_ARGS__)
#define DescribeEntitiesDetectionJobCallable(REQUEST)  SubmitCallable(&ComprehendClient::DescribeEntitiesDetectionJob, REQUEST)

#define DescribeEntityRecognizerAsync(...)  SubmitAsync(&ComprehendClient::DescribeEntityRecognizer, __VA_ARGS__)
#define DescribeEntityRecognizerCallable(REQUEST)  SubmitCallable(&ComprehendClient::DescribeEntityRecognizer, REQUEST)

#define DescribeEventsDetectionJobAsync(...)  SubmitAsync(&ComprehendClient::DescribeEventsDetectionJob, __VA_ARGS__)
#define DescribeEventsDetectionJobCallable(REQUEST)  SubmitCallable(&ComprehendClient::DescribeEventsDetectionJob, REQUEST)

#define DescribeKeyPhrasesDetectionJobAsync(...)  SubmitAsync(&ComprehendClient::DescribeKeyPhrasesDetectionJob, __VA_ARGS__)
#define DescribeKeyPhrasesDetectionJobCallable(REQUEST)  SubmitCallable(&ComprehendClient::DescribeKeyPhrasesDetectionJob, REQUEST)

#define DescribePiiEntitiesDetectionJobAsync(...)  SubmitAsync(&ComprehendClient::DescribePiiEntitiesDetectionJob, __VA_ARGS__)
#define DescribePiiEntitiesDetectionJobCallable(REQUEST)  SubmitCallable(&ComprehendClient::DescribePiiEntitiesDetectionJob, REQUEST)

#define DescribeResourcePolicyAsync(...)  SubmitAsync(&ComprehendClient::DescribeResourcePolicy, __VA_ARGS__)
#define DescribeResourcePolicyCallable(REQUEST)  SubmitCallable(&ComprehendClient::DescribeResourcePolicy, REQUEST)

#define DescribeSentimentDetectionJobAsync(...)  SubmitAsync(&ComprehendClient::DescribeSentimentDetectionJob, __VA_ARGS__)
#define DescribeSentimentDetectionJobCallable(REQUEST)  SubmitCallable(&ComprehendClient::DescribeSentimentDetectionJob, REQUEST)

#define DescribeTargetedSentimentDetectionJobAsync(...)  SubmitAsync(&ComprehendClient::DescribeTargetedSentimentDetectionJob, __VA_ARGS__)
#define DescribeTargetedSentimentDetectionJobCallable(REQUEST)  SubmitCallable(&ComprehendClient::DescribeTargetedSentimentDetectionJob, REQUEST)

#define DescribeTopicsDetectionJobAsync(...)  SubmitAsync(&ComprehendClient::DescribeTopicsDetectionJob, __VA_ARGS__)
#define DescribeTopicsDetectionJobCallable(REQUEST)  SubmitCallable(&ComprehendClient::DescribeTopicsDetectionJob, REQUEST)

#define DetectDominantLanguageAsync(...)  SubmitAsync(&ComprehendClient::DetectDominantLanguage, __VA_ARGS__)
#define DetectDominantLanguageCallable(REQUEST)  SubmitCallable(&ComprehendClient::DetectDominantLanguage, REQUEST)

#define DetectEntitiesAsync(...)  SubmitAsync(&ComprehendClient::DetectEntities, __VA_ARGS__)
#define DetectEntitiesCallable(REQUEST)  SubmitCallable(&ComprehendClient::DetectEntities, REQUEST)

#define DetectKeyPhrasesAsync(...)  SubmitAsync(&ComprehendClient::DetectKeyPhrases, __VA_ARGS__)
#define DetectKeyPhrasesCallable(REQUEST)  SubmitCallable(&ComprehendClient::DetectKeyPhrases, REQUEST)

#define DetectPiiEntitiesAsync(...)  SubmitAsync(&ComprehendClient::DetectPiiEntities, __VA_ARGS__)
#define DetectPiiEntitiesCallable(REQUEST)  SubmitCallable(&ComprehendClient::DetectPiiEntities, REQUEST)

#define DetectSentimentAsync(...)  SubmitAsync(&ComprehendClient::DetectSentiment, __VA_ARGS__)
#define DetectSentimentCallable(REQUEST)  SubmitCallable(&ComprehendClient::DetectSentiment, REQUEST)

#define DetectSyntaxAsync(...)  SubmitAsync(&ComprehendClient::DetectSyntax, __VA_ARGS__)
#define DetectSyntaxCallable(REQUEST)  SubmitCallable(&ComprehendClient::DetectSyntax, REQUEST)

#define DetectTargetedSentimentAsync(...)  SubmitAsync(&ComprehendClient::DetectTargetedSentiment, __VA_ARGS__)
#define DetectTargetedSentimentCallable(REQUEST)  SubmitCallable(&ComprehendClient::DetectTargetedSentiment, REQUEST)

#define ImportModelAsync(...)  SubmitAsync(&ComprehendClient::ImportModel, __VA_ARGS__)
#define ImportModelCallable(REQUEST)  SubmitCallable(&ComprehendClient::ImportModel, REQUEST)

#define ListDocumentClassificationJobsAsync(...)  SubmitAsync(&ComprehendClient::ListDocumentClassificationJobs, __VA_ARGS__)
#define ListDocumentClassificationJobsCallable(REQUEST)  SubmitCallable(&ComprehendClient::ListDocumentClassificationJobs, REQUEST)

#define ListDocumentClassifierSummariesAsync(...)  SubmitAsync(&ComprehendClient::ListDocumentClassifierSummaries, __VA_ARGS__)
#define ListDocumentClassifierSummariesCallable(REQUEST)  SubmitCallable(&ComprehendClient::ListDocumentClassifierSummaries, REQUEST)

#define ListDocumentClassifiersAsync(...)  SubmitAsync(&ComprehendClient::ListDocumentClassifiers, __VA_ARGS__)
#define ListDocumentClassifiersCallable(REQUEST)  SubmitCallable(&ComprehendClient::ListDocumentClassifiers, REQUEST)

#define ListDominantLanguageDetectionJobsAsync(...)  SubmitAsync(&ComprehendClient::ListDominantLanguageDetectionJobs, __VA_ARGS__)
#define ListDominantLanguageDetectionJobsCallable(REQUEST)  SubmitCallable(&ComprehendClient::ListDominantLanguageDetectionJobs, REQUEST)

#define ListEndpointsAsync(...)  SubmitAsync(&ComprehendClient::ListEndpoints, __VA_ARGS__)
#define ListEndpointsCallable(REQUEST)  SubmitCallable(&ComprehendClient::ListEndpoints, REQUEST)

#define ListEntitiesDetectionJobsAsync(...)  SubmitAsync(&ComprehendClient::ListEntitiesDetectionJobs, __VA_ARGS__)
#define ListEntitiesDetectionJobsCallable(REQUEST)  SubmitCallable(&ComprehendClient::ListEntitiesDetectionJobs, REQUEST)

#define ListEntityRecognizerSummariesAsync(...)  SubmitAsync(&ComprehendClient::ListEntityRecognizerSummaries, __VA_ARGS__)
#define ListEntityRecognizerSummariesCallable(REQUEST)  SubmitCallable(&ComprehendClient::ListEntityRecognizerSummaries, REQUEST)

#define ListEntityRecognizersAsync(...)  SubmitAsync(&ComprehendClient::ListEntityRecognizers, __VA_ARGS__)
#define ListEntityRecognizersCallable(REQUEST)  SubmitCallable(&ComprehendClient::ListEntityRecognizers, REQUEST)

#define ListEventsDetectionJobsAsync(...)  SubmitAsync(&ComprehendClient::ListEventsDetectionJobs, __VA_ARGS__)
#define ListEventsDetectionJobsCallable(REQUEST)  SubmitCallable(&ComprehendClient::ListEventsDetectionJobs, REQUEST)

#define ListKeyPhrasesDetectionJobsAsync(...)  SubmitAsync(&ComprehendClient::ListKeyPhrasesDetectionJobs, __VA_ARGS__)
#define ListKeyPhrasesDetectionJobsCallable(REQUEST)  SubmitCallable(&ComprehendClient::ListKeyPhrasesDetectionJobs, REQUEST)

#define ListPiiEntitiesDetectionJobsAsync(...)  SubmitAsync(&ComprehendClient::ListPiiEntitiesDetectionJobs, __VA_ARGS__)
#define ListPiiEntitiesDetectionJobsCallable(REQUEST)  SubmitCallable(&ComprehendClient::ListPiiEntitiesDetectionJobs, REQUEST)

#define ListSentimentDetectionJobsAsync(...)  SubmitAsync(&ComprehendClient::ListSentimentDetectionJobs, __VA_ARGS__)
#define ListSentimentDetectionJobsCallable(REQUEST)  SubmitCallable(&ComprehendClient::ListSentimentDetectionJobs, REQUEST)

#define ListTagsForResourceAsync(...)  SubmitAsync(&ComprehendClient::ListTagsForResource, __VA_ARGS__)
#define ListTagsForResourceCallable(REQUEST)  SubmitCallable(&ComprehendClient::ListTagsForResource, REQUEST)

#define ListTargetedSentimentDetectionJobsAsync(...)  SubmitAsync(&ComprehendClient::ListTargetedSentimentDetectionJobs, __VA_ARGS__)
#define ListTargetedSentimentDetectionJobsCallable(REQUEST)  SubmitCallable(&ComprehendClient::ListTargetedSentimentDetectionJobs, REQUEST)

#define ListTopicsDetectionJobsAsync(...)  SubmitAsync(&ComprehendClient::ListTopicsDetectionJobs, __VA_ARGS__)
#define ListTopicsDetectionJobsCallable(REQUEST)  SubmitCallable(&ComprehendClient::ListTopicsDetectionJobs, REQUEST)

#define PutResourcePolicyAsync(...)  SubmitAsync(&ComprehendClient::PutResourcePolicy, __VA_ARGS__)
#define PutResourcePolicyCallable(REQUEST)  SubmitCallable(&ComprehendClient::PutResourcePolicy, REQUEST)

#define StartDocumentClassificationJobAsync(...)  SubmitAsync(&ComprehendClient::StartDocumentClassificationJob, __VA_ARGS__)
#define StartDocumentClassificationJobCallable(REQUEST)  SubmitCallable(&ComprehendClient::StartDocumentClassificationJob, REQUEST)

#define StartDominantLanguageDetectionJobAsync(...)  SubmitAsync(&ComprehendClient::StartDominantLanguageDetectionJob, __VA_ARGS__)
#define StartDominantLanguageDetectionJobCallable(REQUEST)  SubmitCallable(&ComprehendClient::StartDominantLanguageDetectionJob, REQUEST)

#define StartEntitiesDetectionJobAsync(...)  SubmitAsync(&ComprehendClient::StartEntitiesDetectionJob, __VA_ARGS__)
#define StartEntitiesDetectionJobCallable(REQUEST)  SubmitCallable(&ComprehendClient::StartEntitiesDetectionJob, REQUEST)

#define StartEventsDetectionJobAsync(...)  SubmitAsync(&ComprehendClient::StartEventsDetectionJob, __VA_ARGS__)
#define StartEventsDetectionJobCallable(REQUEST)  SubmitCallable(&ComprehendClient::StartEventsDetectionJob, REQUEST)

#define StartKeyPhrasesDetectionJobAsync(...)  SubmitAsync(&ComprehendClient::StartKeyPhrasesDetectionJob, __VA_ARGS__)
#define StartKeyPhrasesDetectionJobCallable(REQUEST)  SubmitCallable(&ComprehendClient::StartKeyPhrasesDetectionJob, REQUEST)

#define StartPiiEntitiesDetectionJobAsync(...)  SubmitAsync(&ComprehendClient::StartPiiEntitiesDetectionJob, __VA_ARGS__)
#define StartPiiEntitiesDetectionJobCallable(REQUEST)  SubmitCallable(&ComprehendClient::StartPiiEntitiesDetectionJob, REQUEST)

#define StartSentimentDetectionJobAsync(...)  SubmitAsync(&ComprehendClient::StartSentimentDetectionJob, __VA_ARGS__)
#define StartSentimentDetectionJobCallable(REQUEST)  SubmitCallable(&ComprehendClient::StartSentimentDetectionJob, REQUEST)

#define StartTargetedSentimentDetectionJobAsync(...)  SubmitAsync(&ComprehendClient::StartTargetedSentimentDetectionJob, __VA_ARGS__)
#define StartTargetedSentimentDetectionJobCallable(REQUEST)  SubmitCallable(&ComprehendClient::StartTargetedSentimentDetectionJob, REQUEST)

#define StartTopicsDetectionJobAsync(...)  SubmitAsync(&ComprehendClient::StartTopicsDetectionJob, __VA_ARGS__)
#define StartTopicsDetectionJobCallable(REQUEST)  SubmitCallable(&ComprehendClient::StartTopicsDetectionJob, REQUEST)

#define StopDominantLanguageDetectionJobAsync(...)  SubmitAsync(&ComprehendClient::StopDominantLanguageDetectionJob, __VA_ARGS__)
#define StopDominantLanguageDetectionJobCallable(REQUEST)  SubmitCallable(&ComprehendClient::StopDominantLanguageDetectionJob, REQUEST)

#define StopEntitiesDetectionJobAsync(...)  SubmitAsync(&ComprehendClient::StopEntitiesDetectionJob, __VA_ARGS__)
#define StopEntitiesDetectionJobCallable(REQUEST)  SubmitCallable(&ComprehendClient::StopEntitiesDetectionJob, REQUEST)

#define StopEventsDetectionJobAsync(...)  SubmitAsync(&ComprehendClient::StopEventsDetectionJob, __VA_ARGS__)
#define StopEventsDetectionJobCallable(REQUEST)  SubmitCallable(&ComprehendClient::StopEventsDetectionJob, REQUEST)

#define StopKeyPhrasesDetectionJobAsync(...)  SubmitAsync(&ComprehendClient::StopKeyPhrasesDetectionJob, __VA_ARGS__)
#define StopKeyPhrasesDetectionJobCallable(REQUEST)  SubmitCallable(&ComprehendClient::StopKeyPhrasesDetectionJob, REQUEST)

#define StopPiiEntitiesDetectionJobAsync(...)  SubmitAsync(&ComprehendClient::StopPiiEntitiesDetectionJob, __VA_ARGS__)
#define StopPiiEntitiesDetectionJobCallable(REQUEST)  SubmitCallable(&ComprehendClient::StopPiiEntitiesDetectionJob, REQUEST)

#define StopSentimentDetectionJobAsync(...)  SubmitAsync(&ComprehendClient::StopSentimentDetectionJob, __VA_ARGS__)
#define StopSentimentDetectionJobCallable(REQUEST)  SubmitCallable(&ComprehendClient::StopSentimentDetectionJob, REQUEST)

#define StopTargetedSentimentDetectionJobAsync(...)  SubmitAsync(&ComprehendClient::StopTargetedSentimentDetectionJob, __VA_ARGS__)
#define StopTargetedSentimentDetectionJobCallable(REQUEST)  SubmitCallable(&ComprehendClient::StopTargetedSentimentDetectionJob, REQUEST)

#define StopTrainingDocumentClassifierAsync(...)  SubmitAsync(&ComprehendClient::StopTrainingDocumentClassifier, __VA_ARGS__)
#define StopTrainingDocumentClassifierCallable(REQUEST)  SubmitCallable(&ComprehendClient::StopTrainingDocumentClassifier, REQUEST)

#define StopTrainingEntityRecognizerAsync(...)  SubmitAsync(&ComprehendClient::StopTrainingEntityRecognizer, __VA_ARGS__)
#define StopTrainingEntityRecognizerCallable(REQUEST)  SubmitCallable(&ComprehendClient::StopTrainingEntityRecognizer, REQUEST)

#define TagResourceAsync(...)  SubmitAsync(&ComprehendClient::TagResource, __VA_ARGS__)
#define TagResourceCallable(REQUEST)  SubmitCallable(&ComprehendClient::TagResource, REQUEST)

#define UntagResourceAsync(...)  SubmitAsync(&ComprehendClient::UntagResource, __VA_ARGS__)
#define UntagResourceCallable(REQUEST)  SubmitCallable(&ComprehendClient::UntagResource, REQUEST)

#define UpdateEndpointAsync(...)  SubmitAsync(&ComprehendClient::UpdateEndpoint, __VA_ARGS__)
#define UpdateEndpointCallable(REQUEST)  SubmitCallable(&ComprehendClient::UpdateEndpoint, REQUEST)

