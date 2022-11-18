/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#define CancelClusterAsync(...)  SubmitAsync(&SnowballClient::CancelCluster, __VA_ARGS__)
#define CancelClusterCallable(REQUEST)  SubmitCallable(&SnowballClient::CancelCluster, REQUEST)

#define CancelJobAsync(...)  SubmitAsync(&SnowballClient::CancelJob, __VA_ARGS__)
#define CancelJobCallable(REQUEST)  SubmitCallable(&SnowballClient::CancelJob, REQUEST)

#define CreateAddressAsync(...)  SubmitAsync(&SnowballClient::CreateAddress, __VA_ARGS__)
#define CreateAddressCallable(REQUEST)  SubmitCallable(&SnowballClient::CreateAddress, REQUEST)

#define CreateClusterAsync(...)  SubmitAsync(&SnowballClient::CreateCluster, __VA_ARGS__)
#define CreateClusterCallable(REQUEST)  SubmitCallable(&SnowballClient::CreateCluster, REQUEST)

#define CreateJobAsync(...)  SubmitAsync(&SnowballClient::CreateJob, __VA_ARGS__)
#define CreateJobCallable(REQUEST)  SubmitCallable(&SnowballClient::CreateJob, REQUEST)

#define CreateLongTermPricingAsync(...)  SubmitAsync(&SnowballClient::CreateLongTermPricing, __VA_ARGS__)
#define CreateLongTermPricingCallable(REQUEST)  SubmitCallable(&SnowballClient::CreateLongTermPricing, REQUEST)

#define CreateReturnShippingLabelAsync(...)  SubmitAsync(&SnowballClient::CreateReturnShippingLabel, __VA_ARGS__)
#define CreateReturnShippingLabelCallable(REQUEST)  SubmitCallable(&SnowballClient::CreateReturnShippingLabel, REQUEST)

#define DescribeAddressAsync(...)  SubmitAsync(&SnowballClient::DescribeAddress, __VA_ARGS__)
#define DescribeAddressCallable(REQUEST)  SubmitCallable(&SnowballClient::DescribeAddress, REQUEST)

#define DescribeAddressesAsync(...)  SubmitAsync(&SnowballClient::DescribeAddresses, __VA_ARGS__)
#define DescribeAddressesCallable(REQUEST)  SubmitCallable(&SnowballClient::DescribeAddresses, REQUEST)

#define DescribeClusterAsync(...)  SubmitAsync(&SnowballClient::DescribeCluster, __VA_ARGS__)
#define DescribeClusterCallable(REQUEST)  SubmitCallable(&SnowballClient::DescribeCluster, REQUEST)

#define DescribeJobAsync(...)  SubmitAsync(&SnowballClient::DescribeJob, __VA_ARGS__)
#define DescribeJobCallable(REQUEST)  SubmitCallable(&SnowballClient::DescribeJob, REQUEST)

#define DescribeReturnShippingLabelAsync(...)  SubmitAsync(&SnowballClient::DescribeReturnShippingLabel, __VA_ARGS__)
#define DescribeReturnShippingLabelCallable(REQUEST)  SubmitCallable(&SnowballClient::DescribeReturnShippingLabel, REQUEST)

#define GetJobManifestAsync(...)  SubmitAsync(&SnowballClient::GetJobManifest, __VA_ARGS__)
#define GetJobManifestCallable(REQUEST)  SubmitCallable(&SnowballClient::GetJobManifest, REQUEST)

#define GetJobUnlockCodeAsync(...)  SubmitAsync(&SnowballClient::GetJobUnlockCode, __VA_ARGS__)
#define GetJobUnlockCodeCallable(REQUEST)  SubmitCallable(&SnowballClient::GetJobUnlockCode, REQUEST)

#define GetSnowballUsageAsync(...)  SubmitAsync(&SnowballClient::GetSnowballUsage, __VA_ARGS__)
#define GetSnowballUsageCallable(REQUEST)  SubmitCallable(&SnowballClient::GetSnowballUsage, REQUEST)

#define GetSoftwareUpdatesAsync(...)  SubmitAsync(&SnowballClient::GetSoftwareUpdates, __VA_ARGS__)
#define GetSoftwareUpdatesCallable(REQUEST)  SubmitCallable(&SnowballClient::GetSoftwareUpdates, REQUEST)

#define ListClusterJobsAsync(...)  SubmitAsync(&SnowballClient::ListClusterJobs, __VA_ARGS__)
#define ListClusterJobsCallable(REQUEST)  SubmitCallable(&SnowballClient::ListClusterJobs, REQUEST)

#define ListClustersAsync(...)  SubmitAsync(&SnowballClient::ListClusters, __VA_ARGS__)
#define ListClustersCallable(REQUEST)  SubmitCallable(&SnowballClient::ListClusters, REQUEST)

#define ListCompatibleImagesAsync(...)  SubmitAsync(&SnowballClient::ListCompatibleImages, __VA_ARGS__)
#define ListCompatibleImagesCallable(REQUEST)  SubmitCallable(&SnowballClient::ListCompatibleImages, REQUEST)

#define ListJobsAsync(...)  SubmitAsync(&SnowballClient::ListJobs, __VA_ARGS__)
#define ListJobsCallable(REQUEST)  SubmitCallable(&SnowballClient::ListJobs, REQUEST)

#define ListLongTermPricingAsync(...)  SubmitAsync(&SnowballClient::ListLongTermPricing, __VA_ARGS__)
#define ListLongTermPricingCallable(REQUEST)  SubmitCallable(&SnowballClient::ListLongTermPricing, REQUEST)

#define UpdateClusterAsync(...)  SubmitAsync(&SnowballClient::UpdateCluster, __VA_ARGS__)
#define UpdateClusterCallable(REQUEST)  SubmitCallable(&SnowballClient::UpdateCluster, REQUEST)

#define UpdateJobAsync(...)  SubmitAsync(&SnowballClient::UpdateJob, __VA_ARGS__)
#define UpdateJobCallable(REQUEST)  SubmitCallable(&SnowballClient::UpdateJob, REQUEST)

#define UpdateJobShipmentStateAsync(...)  SubmitAsync(&SnowballClient::UpdateJobShipmentState, __VA_ARGS__)
#define UpdateJobShipmentStateCallable(REQUEST)  SubmitCallable(&SnowballClient::UpdateJobShipmentState, REQUEST)

#define UpdateLongTermPricingAsync(...)  SubmitAsync(&SnowballClient::UpdateLongTermPricing, __VA_ARGS__)
#define UpdateLongTermPricingCallable(REQUEST)  SubmitCallable(&SnowballClient::UpdateLongTermPricing, REQUEST)

