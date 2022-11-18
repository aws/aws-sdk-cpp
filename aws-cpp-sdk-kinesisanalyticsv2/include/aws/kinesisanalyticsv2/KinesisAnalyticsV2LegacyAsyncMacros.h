/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#define AddApplicationCloudWatchLoggingOptionAsync(...)  SubmitAsync(&KinesisAnalyticsV2Client::AddApplicationCloudWatchLoggingOption, __VA_ARGS__)
#define AddApplicationCloudWatchLoggingOptionCallable(REQUEST)  SubmitCallable(&KinesisAnalyticsV2Client::AddApplicationCloudWatchLoggingOption, REQUEST)

#define AddApplicationInputAsync(...)  SubmitAsync(&KinesisAnalyticsV2Client::AddApplicationInput, __VA_ARGS__)
#define AddApplicationInputCallable(REQUEST)  SubmitCallable(&KinesisAnalyticsV2Client::AddApplicationInput, REQUEST)

#define AddApplicationInputProcessingConfigurationAsync(...)  SubmitAsync(&KinesisAnalyticsV2Client::AddApplicationInputProcessingConfiguration, __VA_ARGS__)
#define AddApplicationInputProcessingConfigurationCallable(REQUEST)  SubmitCallable(&KinesisAnalyticsV2Client::AddApplicationInputProcessingConfiguration, REQUEST)

#define AddApplicationOutputAsync(...)  SubmitAsync(&KinesisAnalyticsV2Client::AddApplicationOutput, __VA_ARGS__)
#define AddApplicationOutputCallable(REQUEST)  SubmitCallable(&KinesisAnalyticsV2Client::AddApplicationOutput, REQUEST)

#define AddApplicationReferenceDataSourceAsync(...)  SubmitAsync(&KinesisAnalyticsV2Client::AddApplicationReferenceDataSource, __VA_ARGS__)
#define AddApplicationReferenceDataSourceCallable(REQUEST)  SubmitCallable(&KinesisAnalyticsV2Client::AddApplicationReferenceDataSource, REQUEST)

#define AddApplicationVpcConfigurationAsync(...)  SubmitAsync(&KinesisAnalyticsV2Client::AddApplicationVpcConfiguration, __VA_ARGS__)
#define AddApplicationVpcConfigurationCallable(REQUEST)  SubmitCallable(&KinesisAnalyticsV2Client::AddApplicationVpcConfiguration, REQUEST)

#define CreateApplicationAsync(...)  SubmitAsync(&KinesisAnalyticsV2Client::CreateApplication, __VA_ARGS__)
#define CreateApplicationCallable(REQUEST)  SubmitCallable(&KinesisAnalyticsV2Client::CreateApplication, REQUEST)

#define CreateApplicationPresignedUrlAsync(...)  SubmitAsync(&KinesisAnalyticsV2Client::CreateApplicationPresignedUrl, __VA_ARGS__)
#define CreateApplicationPresignedUrlCallable(REQUEST)  SubmitCallable(&KinesisAnalyticsV2Client::CreateApplicationPresignedUrl, REQUEST)

#define CreateApplicationSnapshotAsync(...)  SubmitAsync(&KinesisAnalyticsV2Client::CreateApplicationSnapshot, __VA_ARGS__)
#define CreateApplicationSnapshotCallable(REQUEST)  SubmitCallable(&KinesisAnalyticsV2Client::CreateApplicationSnapshot, REQUEST)

#define DeleteApplicationAsync(...)  SubmitAsync(&KinesisAnalyticsV2Client::DeleteApplication, __VA_ARGS__)
#define DeleteApplicationCallable(REQUEST)  SubmitCallable(&KinesisAnalyticsV2Client::DeleteApplication, REQUEST)

#define DeleteApplicationCloudWatchLoggingOptionAsync(...)  SubmitAsync(&KinesisAnalyticsV2Client::DeleteApplicationCloudWatchLoggingOption, __VA_ARGS__)
#define DeleteApplicationCloudWatchLoggingOptionCallable(REQUEST)  SubmitCallable(&KinesisAnalyticsV2Client::DeleteApplicationCloudWatchLoggingOption, REQUEST)

#define DeleteApplicationInputProcessingConfigurationAsync(...)  SubmitAsync(&KinesisAnalyticsV2Client::DeleteApplicationInputProcessingConfiguration, __VA_ARGS__)
#define DeleteApplicationInputProcessingConfigurationCallable(REQUEST)  SubmitCallable(&KinesisAnalyticsV2Client::DeleteApplicationInputProcessingConfiguration, REQUEST)

#define DeleteApplicationOutputAsync(...)  SubmitAsync(&KinesisAnalyticsV2Client::DeleteApplicationOutput, __VA_ARGS__)
#define DeleteApplicationOutputCallable(REQUEST)  SubmitCallable(&KinesisAnalyticsV2Client::DeleteApplicationOutput, REQUEST)

#define DeleteApplicationReferenceDataSourceAsync(...)  SubmitAsync(&KinesisAnalyticsV2Client::DeleteApplicationReferenceDataSource, __VA_ARGS__)
#define DeleteApplicationReferenceDataSourceCallable(REQUEST)  SubmitCallable(&KinesisAnalyticsV2Client::DeleteApplicationReferenceDataSource, REQUEST)

#define DeleteApplicationSnapshotAsync(...)  SubmitAsync(&KinesisAnalyticsV2Client::DeleteApplicationSnapshot, __VA_ARGS__)
#define DeleteApplicationSnapshotCallable(REQUEST)  SubmitCallable(&KinesisAnalyticsV2Client::DeleteApplicationSnapshot, REQUEST)

#define DeleteApplicationVpcConfigurationAsync(...)  SubmitAsync(&KinesisAnalyticsV2Client::DeleteApplicationVpcConfiguration, __VA_ARGS__)
#define DeleteApplicationVpcConfigurationCallable(REQUEST)  SubmitCallable(&KinesisAnalyticsV2Client::DeleteApplicationVpcConfiguration, REQUEST)

#define DescribeApplicationAsync(...)  SubmitAsync(&KinesisAnalyticsV2Client::DescribeApplication, __VA_ARGS__)
#define DescribeApplicationCallable(REQUEST)  SubmitCallable(&KinesisAnalyticsV2Client::DescribeApplication, REQUEST)

#define DescribeApplicationSnapshotAsync(...)  SubmitAsync(&KinesisAnalyticsV2Client::DescribeApplicationSnapshot, __VA_ARGS__)
#define DescribeApplicationSnapshotCallable(REQUEST)  SubmitCallable(&KinesisAnalyticsV2Client::DescribeApplicationSnapshot, REQUEST)

#define DescribeApplicationVersionAsync(...)  SubmitAsync(&KinesisAnalyticsV2Client::DescribeApplicationVersion, __VA_ARGS__)
#define DescribeApplicationVersionCallable(REQUEST)  SubmitCallable(&KinesisAnalyticsV2Client::DescribeApplicationVersion, REQUEST)

#define DiscoverInputSchemaAsync(...)  SubmitAsync(&KinesisAnalyticsV2Client::DiscoverInputSchema, __VA_ARGS__)
#define DiscoverInputSchemaCallable(REQUEST)  SubmitCallable(&KinesisAnalyticsV2Client::DiscoverInputSchema, REQUEST)

#define ListApplicationSnapshotsAsync(...)  SubmitAsync(&KinesisAnalyticsV2Client::ListApplicationSnapshots, __VA_ARGS__)
#define ListApplicationSnapshotsCallable(REQUEST)  SubmitCallable(&KinesisAnalyticsV2Client::ListApplicationSnapshots, REQUEST)

#define ListApplicationVersionsAsync(...)  SubmitAsync(&KinesisAnalyticsV2Client::ListApplicationVersions, __VA_ARGS__)
#define ListApplicationVersionsCallable(REQUEST)  SubmitCallable(&KinesisAnalyticsV2Client::ListApplicationVersions, REQUEST)

#define ListApplicationsAsync(...)  SubmitAsync(&KinesisAnalyticsV2Client::ListApplications, __VA_ARGS__)
#define ListApplicationsCallable(REQUEST)  SubmitCallable(&KinesisAnalyticsV2Client::ListApplications, REQUEST)

#define ListTagsForResourceAsync(...)  SubmitAsync(&KinesisAnalyticsV2Client::ListTagsForResource, __VA_ARGS__)
#define ListTagsForResourceCallable(REQUEST)  SubmitCallable(&KinesisAnalyticsV2Client::ListTagsForResource, REQUEST)

#define RollbackApplicationAsync(...)  SubmitAsync(&KinesisAnalyticsV2Client::RollbackApplication, __VA_ARGS__)
#define RollbackApplicationCallable(REQUEST)  SubmitCallable(&KinesisAnalyticsV2Client::RollbackApplication, REQUEST)

#define StartApplicationAsync(...)  SubmitAsync(&KinesisAnalyticsV2Client::StartApplication, __VA_ARGS__)
#define StartApplicationCallable(REQUEST)  SubmitCallable(&KinesisAnalyticsV2Client::StartApplication, REQUEST)

#define StopApplicationAsync(...)  SubmitAsync(&KinesisAnalyticsV2Client::StopApplication, __VA_ARGS__)
#define StopApplicationCallable(REQUEST)  SubmitCallable(&KinesisAnalyticsV2Client::StopApplication, REQUEST)

#define TagResourceAsync(...)  SubmitAsync(&KinesisAnalyticsV2Client::TagResource, __VA_ARGS__)
#define TagResourceCallable(REQUEST)  SubmitCallable(&KinesisAnalyticsV2Client::TagResource, REQUEST)

#define UntagResourceAsync(...)  SubmitAsync(&KinesisAnalyticsV2Client::UntagResource, __VA_ARGS__)
#define UntagResourceCallable(REQUEST)  SubmitCallable(&KinesisAnalyticsV2Client::UntagResource, REQUEST)

#define UpdateApplicationAsync(...)  SubmitAsync(&KinesisAnalyticsV2Client::UpdateApplication, __VA_ARGS__)
#define UpdateApplicationCallable(REQUEST)  SubmitCallable(&KinesisAnalyticsV2Client::UpdateApplication, REQUEST)

#define UpdateApplicationMaintenanceConfigurationAsync(...)  SubmitAsync(&KinesisAnalyticsV2Client::UpdateApplicationMaintenanceConfiguration, __VA_ARGS__)
#define UpdateApplicationMaintenanceConfigurationCallable(REQUEST)  SubmitCallable(&KinesisAnalyticsV2Client::UpdateApplicationMaintenanceConfiguration, REQUEST)

