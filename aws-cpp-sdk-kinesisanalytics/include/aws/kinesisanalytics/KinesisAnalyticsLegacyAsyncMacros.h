/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#define AddApplicationCloudWatchLoggingOptionAsync(...)  SubmitAsync(&KinesisAnalyticsClient::AddApplicationCloudWatchLoggingOption, __VA_ARGS__)
#define AddApplicationCloudWatchLoggingOptionCallable(REQUEST)  SubmitCallable(&KinesisAnalyticsClient::AddApplicationCloudWatchLoggingOption, REQUEST)

#define AddApplicationInputAsync(...)  SubmitAsync(&KinesisAnalyticsClient::AddApplicationInput, __VA_ARGS__)
#define AddApplicationInputCallable(REQUEST)  SubmitCallable(&KinesisAnalyticsClient::AddApplicationInput, REQUEST)

#define AddApplicationInputProcessingConfigurationAsync(...)  SubmitAsync(&KinesisAnalyticsClient::AddApplicationInputProcessingConfiguration, __VA_ARGS__)
#define AddApplicationInputProcessingConfigurationCallable(REQUEST)  SubmitCallable(&KinesisAnalyticsClient::AddApplicationInputProcessingConfiguration, REQUEST)

#define AddApplicationOutputAsync(...)  SubmitAsync(&KinesisAnalyticsClient::AddApplicationOutput, __VA_ARGS__)
#define AddApplicationOutputCallable(REQUEST)  SubmitCallable(&KinesisAnalyticsClient::AddApplicationOutput, REQUEST)

#define AddApplicationReferenceDataSourceAsync(...)  SubmitAsync(&KinesisAnalyticsClient::AddApplicationReferenceDataSource, __VA_ARGS__)
#define AddApplicationReferenceDataSourceCallable(REQUEST)  SubmitCallable(&KinesisAnalyticsClient::AddApplicationReferenceDataSource, REQUEST)

#define CreateApplicationAsync(...)  SubmitAsync(&KinesisAnalyticsClient::CreateApplication, __VA_ARGS__)
#define CreateApplicationCallable(REQUEST)  SubmitCallable(&KinesisAnalyticsClient::CreateApplication, REQUEST)

#define DeleteApplicationAsync(...)  SubmitAsync(&KinesisAnalyticsClient::DeleteApplication, __VA_ARGS__)
#define DeleteApplicationCallable(REQUEST)  SubmitCallable(&KinesisAnalyticsClient::DeleteApplication, REQUEST)

#define DeleteApplicationCloudWatchLoggingOptionAsync(...)  SubmitAsync(&KinesisAnalyticsClient::DeleteApplicationCloudWatchLoggingOption, __VA_ARGS__)
#define DeleteApplicationCloudWatchLoggingOptionCallable(REQUEST)  SubmitCallable(&KinesisAnalyticsClient::DeleteApplicationCloudWatchLoggingOption, REQUEST)

#define DeleteApplicationInputProcessingConfigurationAsync(...)  SubmitAsync(&KinesisAnalyticsClient::DeleteApplicationInputProcessingConfiguration, __VA_ARGS__)
#define DeleteApplicationInputProcessingConfigurationCallable(REQUEST)  SubmitCallable(&KinesisAnalyticsClient::DeleteApplicationInputProcessingConfiguration, REQUEST)

#define DeleteApplicationOutputAsync(...)  SubmitAsync(&KinesisAnalyticsClient::DeleteApplicationOutput, __VA_ARGS__)
#define DeleteApplicationOutputCallable(REQUEST)  SubmitCallable(&KinesisAnalyticsClient::DeleteApplicationOutput, REQUEST)

#define DeleteApplicationReferenceDataSourceAsync(...)  SubmitAsync(&KinesisAnalyticsClient::DeleteApplicationReferenceDataSource, __VA_ARGS__)
#define DeleteApplicationReferenceDataSourceCallable(REQUEST)  SubmitCallable(&KinesisAnalyticsClient::DeleteApplicationReferenceDataSource, REQUEST)

#define DescribeApplicationAsync(...)  SubmitAsync(&KinesisAnalyticsClient::DescribeApplication, __VA_ARGS__)
#define DescribeApplicationCallable(REQUEST)  SubmitCallable(&KinesisAnalyticsClient::DescribeApplication, REQUEST)

#define DiscoverInputSchemaAsync(...)  SubmitAsync(&KinesisAnalyticsClient::DiscoverInputSchema, __VA_ARGS__)
#define DiscoverInputSchemaCallable(REQUEST)  SubmitCallable(&KinesisAnalyticsClient::DiscoverInputSchema, REQUEST)

#define ListApplicationsAsync(...)  SubmitAsync(&KinesisAnalyticsClient::ListApplications, __VA_ARGS__)
#define ListApplicationsCallable(REQUEST)  SubmitCallable(&KinesisAnalyticsClient::ListApplications, REQUEST)

#define ListTagsForResourceAsync(...)  SubmitAsync(&KinesisAnalyticsClient::ListTagsForResource, __VA_ARGS__)
#define ListTagsForResourceCallable(REQUEST)  SubmitCallable(&KinesisAnalyticsClient::ListTagsForResource, REQUEST)

#define StartApplicationAsync(...)  SubmitAsync(&KinesisAnalyticsClient::StartApplication, __VA_ARGS__)
#define StartApplicationCallable(REQUEST)  SubmitCallable(&KinesisAnalyticsClient::StartApplication, REQUEST)

#define StopApplicationAsync(...)  SubmitAsync(&KinesisAnalyticsClient::StopApplication, __VA_ARGS__)
#define StopApplicationCallable(REQUEST)  SubmitCallable(&KinesisAnalyticsClient::StopApplication, REQUEST)

#define TagResourceAsync(...)  SubmitAsync(&KinesisAnalyticsClient::TagResource, __VA_ARGS__)
#define TagResourceCallable(REQUEST)  SubmitCallable(&KinesisAnalyticsClient::TagResource, REQUEST)

#define UntagResourceAsync(...)  SubmitAsync(&KinesisAnalyticsClient::UntagResource, __VA_ARGS__)
#define UntagResourceCallable(REQUEST)  SubmitCallable(&KinesisAnalyticsClient::UntagResource, REQUEST)

#define UpdateApplicationAsync(...)  SubmitAsync(&KinesisAnalyticsClient::UpdateApplication, __VA_ARGS__)
#define UpdateApplicationCallable(REQUEST)  SubmitCallable(&KinesisAnalyticsClient::UpdateApplication, REQUEST)

