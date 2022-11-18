/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#define BatchEvaluateFeatureAsync(...)  SubmitAsync(&CloudWatchEvidentlyClient::BatchEvaluateFeature, __VA_ARGS__)
#define BatchEvaluateFeatureCallable(REQUEST)  SubmitCallable(&CloudWatchEvidentlyClient::BatchEvaluateFeature, REQUEST)

#define CreateExperimentAsync(...)  SubmitAsync(&CloudWatchEvidentlyClient::CreateExperiment, __VA_ARGS__)
#define CreateExperimentCallable(REQUEST)  SubmitCallable(&CloudWatchEvidentlyClient::CreateExperiment, REQUEST)

#define CreateFeatureAsync(...)  SubmitAsync(&CloudWatchEvidentlyClient::CreateFeature, __VA_ARGS__)
#define CreateFeatureCallable(REQUEST)  SubmitCallable(&CloudWatchEvidentlyClient::CreateFeature, REQUEST)

#define CreateLaunchAsync(...)  SubmitAsync(&CloudWatchEvidentlyClient::CreateLaunch, __VA_ARGS__)
#define CreateLaunchCallable(REQUEST)  SubmitCallable(&CloudWatchEvidentlyClient::CreateLaunch, REQUEST)

#define CreateProjectAsync(...)  SubmitAsync(&CloudWatchEvidentlyClient::CreateProject, __VA_ARGS__)
#define CreateProjectCallable(REQUEST)  SubmitCallable(&CloudWatchEvidentlyClient::CreateProject, REQUEST)

#define CreateSegmentAsync(...)  SubmitAsync(&CloudWatchEvidentlyClient::CreateSegment, __VA_ARGS__)
#define CreateSegmentCallable(REQUEST)  SubmitCallable(&CloudWatchEvidentlyClient::CreateSegment, REQUEST)

#define DeleteExperimentAsync(...)  SubmitAsync(&CloudWatchEvidentlyClient::DeleteExperiment, __VA_ARGS__)
#define DeleteExperimentCallable(REQUEST)  SubmitCallable(&CloudWatchEvidentlyClient::DeleteExperiment, REQUEST)

#define DeleteFeatureAsync(...)  SubmitAsync(&CloudWatchEvidentlyClient::DeleteFeature, __VA_ARGS__)
#define DeleteFeatureCallable(REQUEST)  SubmitCallable(&CloudWatchEvidentlyClient::DeleteFeature, REQUEST)

#define DeleteLaunchAsync(...)  SubmitAsync(&CloudWatchEvidentlyClient::DeleteLaunch, __VA_ARGS__)
#define DeleteLaunchCallable(REQUEST)  SubmitCallable(&CloudWatchEvidentlyClient::DeleteLaunch, REQUEST)

#define DeleteProjectAsync(...)  SubmitAsync(&CloudWatchEvidentlyClient::DeleteProject, __VA_ARGS__)
#define DeleteProjectCallable(REQUEST)  SubmitCallable(&CloudWatchEvidentlyClient::DeleteProject, REQUEST)

#define DeleteSegmentAsync(...)  SubmitAsync(&CloudWatchEvidentlyClient::DeleteSegment, __VA_ARGS__)
#define DeleteSegmentCallable(REQUEST)  SubmitCallable(&CloudWatchEvidentlyClient::DeleteSegment, REQUEST)

#define EvaluateFeatureAsync(...)  SubmitAsync(&CloudWatchEvidentlyClient::EvaluateFeature, __VA_ARGS__)
#define EvaluateFeatureCallable(REQUEST)  SubmitCallable(&CloudWatchEvidentlyClient::EvaluateFeature, REQUEST)

#define GetExperimentAsync(...)  SubmitAsync(&CloudWatchEvidentlyClient::GetExperiment, __VA_ARGS__)
#define GetExperimentCallable(REQUEST)  SubmitCallable(&CloudWatchEvidentlyClient::GetExperiment, REQUEST)

#define GetExperimentResultsAsync(...)  SubmitAsync(&CloudWatchEvidentlyClient::GetExperimentResults, __VA_ARGS__)
#define GetExperimentResultsCallable(REQUEST)  SubmitCallable(&CloudWatchEvidentlyClient::GetExperimentResults, REQUEST)

#define GetFeatureAsync(...)  SubmitAsync(&CloudWatchEvidentlyClient::GetFeature, __VA_ARGS__)
#define GetFeatureCallable(REQUEST)  SubmitCallable(&CloudWatchEvidentlyClient::GetFeature, REQUEST)

#define GetLaunchAsync(...)  SubmitAsync(&CloudWatchEvidentlyClient::GetLaunch, __VA_ARGS__)
#define GetLaunchCallable(REQUEST)  SubmitCallable(&CloudWatchEvidentlyClient::GetLaunch, REQUEST)

#define GetProjectAsync(...)  SubmitAsync(&CloudWatchEvidentlyClient::GetProject, __VA_ARGS__)
#define GetProjectCallable(REQUEST)  SubmitCallable(&CloudWatchEvidentlyClient::GetProject, REQUEST)

#define GetSegmentAsync(...)  SubmitAsync(&CloudWatchEvidentlyClient::GetSegment, __VA_ARGS__)
#define GetSegmentCallable(REQUEST)  SubmitCallable(&CloudWatchEvidentlyClient::GetSegment, REQUEST)

#define ListExperimentsAsync(...)  SubmitAsync(&CloudWatchEvidentlyClient::ListExperiments, __VA_ARGS__)
#define ListExperimentsCallable(REQUEST)  SubmitCallable(&CloudWatchEvidentlyClient::ListExperiments, REQUEST)

#define ListFeaturesAsync(...)  SubmitAsync(&CloudWatchEvidentlyClient::ListFeatures, __VA_ARGS__)
#define ListFeaturesCallable(REQUEST)  SubmitCallable(&CloudWatchEvidentlyClient::ListFeatures, REQUEST)

#define ListLaunchesAsync(...)  SubmitAsync(&CloudWatchEvidentlyClient::ListLaunches, __VA_ARGS__)
#define ListLaunchesCallable(REQUEST)  SubmitCallable(&CloudWatchEvidentlyClient::ListLaunches, REQUEST)

#define ListProjectsAsync(...)  SubmitAsync(&CloudWatchEvidentlyClient::ListProjects, __VA_ARGS__)
#define ListProjectsCallable(REQUEST)  SubmitCallable(&CloudWatchEvidentlyClient::ListProjects, REQUEST)

#define ListSegmentReferencesAsync(...)  SubmitAsync(&CloudWatchEvidentlyClient::ListSegmentReferences, __VA_ARGS__)
#define ListSegmentReferencesCallable(REQUEST)  SubmitCallable(&CloudWatchEvidentlyClient::ListSegmentReferences, REQUEST)

#define ListSegmentsAsync(...)  SubmitAsync(&CloudWatchEvidentlyClient::ListSegments, __VA_ARGS__)
#define ListSegmentsCallable(REQUEST)  SubmitCallable(&CloudWatchEvidentlyClient::ListSegments, REQUEST)

#define ListTagsForResourceAsync(...)  SubmitAsync(&CloudWatchEvidentlyClient::ListTagsForResource, __VA_ARGS__)
#define ListTagsForResourceCallable(REQUEST)  SubmitCallable(&CloudWatchEvidentlyClient::ListTagsForResource, REQUEST)

#define PutProjectEventsAsync(...)  SubmitAsync(&CloudWatchEvidentlyClient::PutProjectEvents, __VA_ARGS__)
#define PutProjectEventsCallable(REQUEST)  SubmitCallable(&CloudWatchEvidentlyClient::PutProjectEvents, REQUEST)

#define StartExperimentAsync(...)  SubmitAsync(&CloudWatchEvidentlyClient::StartExperiment, __VA_ARGS__)
#define StartExperimentCallable(REQUEST)  SubmitCallable(&CloudWatchEvidentlyClient::StartExperiment, REQUEST)

#define StartLaunchAsync(...)  SubmitAsync(&CloudWatchEvidentlyClient::StartLaunch, __VA_ARGS__)
#define StartLaunchCallable(REQUEST)  SubmitCallable(&CloudWatchEvidentlyClient::StartLaunch, REQUEST)

#define StopExperimentAsync(...)  SubmitAsync(&CloudWatchEvidentlyClient::StopExperiment, __VA_ARGS__)
#define StopExperimentCallable(REQUEST)  SubmitCallable(&CloudWatchEvidentlyClient::StopExperiment, REQUEST)

#define StopLaunchAsync(...)  SubmitAsync(&CloudWatchEvidentlyClient::StopLaunch, __VA_ARGS__)
#define StopLaunchCallable(REQUEST)  SubmitCallable(&CloudWatchEvidentlyClient::StopLaunch, REQUEST)

#define TagResourceAsync(...)  SubmitAsync(&CloudWatchEvidentlyClient::TagResource, __VA_ARGS__)
#define TagResourceCallable(REQUEST)  SubmitCallable(&CloudWatchEvidentlyClient::TagResource, REQUEST)

#define TestSegmentPatternAsync(...)  SubmitAsync(&CloudWatchEvidentlyClient::TestSegmentPattern, __VA_ARGS__)
#define TestSegmentPatternCallable(REQUEST)  SubmitCallable(&CloudWatchEvidentlyClient::TestSegmentPattern, REQUEST)

#define UntagResourceAsync(...)  SubmitAsync(&CloudWatchEvidentlyClient::UntagResource, __VA_ARGS__)
#define UntagResourceCallable(REQUEST)  SubmitCallable(&CloudWatchEvidentlyClient::UntagResource, REQUEST)

#define UpdateExperimentAsync(...)  SubmitAsync(&CloudWatchEvidentlyClient::UpdateExperiment, __VA_ARGS__)
#define UpdateExperimentCallable(REQUEST)  SubmitCallable(&CloudWatchEvidentlyClient::UpdateExperiment, REQUEST)

#define UpdateFeatureAsync(...)  SubmitAsync(&CloudWatchEvidentlyClient::UpdateFeature, __VA_ARGS__)
#define UpdateFeatureCallable(REQUEST)  SubmitCallable(&CloudWatchEvidentlyClient::UpdateFeature, REQUEST)

#define UpdateLaunchAsync(...)  SubmitAsync(&CloudWatchEvidentlyClient::UpdateLaunch, __VA_ARGS__)
#define UpdateLaunchCallable(REQUEST)  SubmitCallable(&CloudWatchEvidentlyClient::UpdateLaunch, REQUEST)

#define UpdateProjectAsync(...)  SubmitAsync(&CloudWatchEvidentlyClient::UpdateProject, __VA_ARGS__)
#define UpdateProjectCallable(REQUEST)  SubmitCallable(&CloudWatchEvidentlyClient::UpdateProject, REQUEST)

#define UpdateProjectDataDeliveryAsync(...)  SubmitAsync(&CloudWatchEvidentlyClient::UpdateProjectDataDelivery, __VA_ARGS__)
#define UpdateProjectDataDeliveryCallable(REQUEST)  SubmitCallable(&CloudWatchEvidentlyClient::UpdateProjectDataDelivery, REQUEST)

