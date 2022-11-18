/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#define CreateApplicationAsync(...)  SubmitAsync(&ApplicationInsightsClient::CreateApplication, __VA_ARGS__)
#define CreateApplicationCallable(REQUEST)  SubmitCallable(&ApplicationInsightsClient::CreateApplication, REQUEST)

#define CreateComponentAsync(...)  SubmitAsync(&ApplicationInsightsClient::CreateComponent, __VA_ARGS__)
#define CreateComponentCallable(REQUEST)  SubmitCallable(&ApplicationInsightsClient::CreateComponent, REQUEST)

#define CreateLogPatternAsync(...)  SubmitAsync(&ApplicationInsightsClient::CreateLogPattern, __VA_ARGS__)
#define CreateLogPatternCallable(REQUEST)  SubmitCallable(&ApplicationInsightsClient::CreateLogPattern, REQUEST)

#define DeleteApplicationAsync(...)  SubmitAsync(&ApplicationInsightsClient::DeleteApplication, __VA_ARGS__)
#define DeleteApplicationCallable(REQUEST)  SubmitCallable(&ApplicationInsightsClient::DeleteApplication, REQUEST)

#define DeleteComponentAsync(...)  SubmitAsync(&ApplicationInsightsClient::DeleteComponent, __VA_ARGS__)
#define DeleteComponentCallable(REQUEST)  SubmitCallable(&ApplicationInsightsClient::DeleteComponent, REQUEST)

#define DeleteLogPatternAsync(...)  SubmitAsync(&ApplicationInsightsClient::DeleteLogPattern, __VA_ARGS__)
#define DeleteLogPatternCallable(REQUEST)  SubmitCallable(&ApplicationInsightsClient::DeleteLogPattern, REQUEST)

#define DescribeApplicationAsync(...)  SubmitAsync(&ApplicationInsightsClient::DescribeApplication, __VA_ARGS__)
#define DescribeApplicationCallable(REQUEST)  SubmitCallable(&ApplicationInsightsClient::DescribeApplication, REQUEST)

#define DescribeComponentAsync(...)  SubmitAsync(&ApplicationInsightsClient::DescribeComponent, __VA_ARGS__)
#define DescribeComponentCallable(REQUEST)  SubmitCallable(&ApplicationInsightsClient::DescribeComponent, REQUEST)

#define DescribeComponentConfigurationAsync(...)  SubmitAsync(&ApplicationInsightsClient::DescribeComponentConfiguration, __VA_ARGS__)
#define DescribeComponentConfigurationCallable(REQUEST)  SubmitCallable(&ApplicationInsightsClient::DescribeComponentConfiguration, REQUEST)

#define DescribeComponentConfigurationRecommendationAsync(...)  SubmitAsync(&ApplicationInsightsClient::DescribeComponentConfigurationRecommendation, __VA_ARGS__)
#define DescribeComponentConfigurationRecommendationCallable(REQUEST)  SubmitCallable(&ApplicationInsightsClient::DescribeComponentConfigurationRecommendation, REQUEST)

#define DescribeLogPatternAsync(...)  SubmitAsync(&ApplicationInsightsClient::DescribeLogPattern, __VA_ARGS__)
#define DescribeLogPatternCallable(REQUEST)  SubmitCallable(&ApplicationInsightsClient::DescribeLogPattern, REQUEST)

#define DescribeObservationAsync(...)  SubmitAsync(&ApplicationInsightsClient::DescribeObservation, __VA_ARGS__)
#define DescribeObservationCallable(REQUEST)  SubmitCallable(&ApplicationInsightsClient::DescribeObservation, REQUEST)

#define DescribeProblemAsync(...)  SubmitAsync(&ApplicationInsightsClient::DescribeProblem, __VA_ARGS__)
#define DescribeProblemCallable(REQUEST)  SubmitCallable(&ApplicationInsightsClient::DescribeProblem, REQUEST)

#define DescribeProblemObservationsAsync(...)  SubmitAsync(&ApplicationInsightsClient::DescribeProblemObservations, __VA_ARGS__)
#define DescribeProblemObservationsCallable(REQUEST)  SubmitCallable(&ApplicationInsightsClient::DescribeProblemObservations, REQUEST)

#define ListApplicationsAsync(...)  SubmitAsync(&ApplicationInsightsClient::ListApplications, __VA_ARGS__)
#define ListApplicationsCallable(REQUEST)  SubmitCallable(&ApplicationInsightsClient::ListApplications, REQUEST)

#define ListComponentsAsync(...)  SubmitAsync(&ApplicationInsightsClient::ListComponents, __VA_ARGS__)
#define ListComponentsCallable(REQUEST)  SubmitCallable(&ApplicationInsightsClient::ListComponents, REQUEST)

#define ListConfigurationHistoryAsync(...)  SubmitAsync(&ApplicationInsightsClient::ListConfigurationHistory, __VA_ARGS__)
#define ListConfigurationHistoryCallable(REQUEST)  SubmitCallable(&ApplicationInsightsClient::ListConfigurationHistory, REQUEST)

#define ListLogPatternSetsAsync(...)  SubmitAsync(&ApplicationInsightsClient::ListLogPatternSets, __VA_ARGS__)
#define ListLogPatternSetsCallable(REQUEST)  SubmitCallable(&ApplicationInsightsClient::ListLogPatternSets, REQUEST)

#define ListLogPatternsAsync(...)  SubmitAsync(&ApplicationInsightsClient::ListLogPatterns, __VA_ARGS__)
#define ListLogPatternsCallable(REQUEST)  SubmitCallable(&ApplicationInsightsClient::ListLogPatterns, REQUEST)

#define ListProblemsAsync(...)  SubmitAsync(&ApplicationInsightsClient::ListProblems, __VA_ARGS__)
#define ListProblemsCallable(REQUEST)  SubmitCallable(&ApplicationInsightsClient::ListProblems, REQUEST)

#define ListTagsForResourceAsync(...)  SubmitAsync(&ApplicationInsightsClient::ListTagsForResource, __VA_ARGS__)
#define ListTagsForResourceCallable(REQUEST)  SubmitCallable(&ApplicationInsightsClient::ListTagsForResource, REQUEST)

#define TagResourceAsync(...)  SubmitAsync(&ApplicationInsightsClient::TagResource, __VA_ARGS__)
#define TagResourceCallable(REQUEST)  SubmitCallable(&ApplicationInsightsClient::TagResource, REQUEST)

#define UntagResourceAsync(...)  SubmitAsync(&ApplicationInsightsClient::UntagResource, __VA_ARGS__)
#define UntagResourceCallable(REQUEST)  SubmitCallable(&ApplicationInsightsClient::UntagResource, REQUEST)

#define UpdateApplicationAsync(...)  SubmitAsync(&ApplicationInsightsClient::UpdateApplication, __VA_ARGS__)
#define UpdateApplicationCallable(REQUEST)  SubmitCallable(&ApplicationInsightsClient::UpdateApplication, REQUEST)

#define UpdateComponentAsync(...)  SubmitAsync(&ApplicationInsightsClient::UpdateComponent, __VA_ARGS__)
#define UpdateComponentCallable(REQUEST)  SubmitCallable(&ApplicationInsightsClient::UpdateComponent, REQUEST)

#define UpdateComponentConfigurationAsync(...)  SubmitAsync(&ApplicationInsightsClient::UpdateComponentConfiguration, __VA_ARGS__)
#define UpdateComponentConfigurationCallable(REQUEST)  SubmitCallable(&ApplicationInsightsClient::UpdateComponentConfiguration, REQUEST)

#define UpdateLogPatternAsync(...)  SubmitAsync(&ApplicationInsightsClient::UpdateLogPattern, __VA_ARGS__)
#define UpdateLogPatternCallable(REQUEST)  SubmitCallable(&ApplicationInsightsClient::UpdateLogPattern, REQUEST)

