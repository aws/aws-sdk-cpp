/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#define DescribeDimensionKeysAsync(...)  SubmitAsync(&PIClient::DescribeDimensionKeys, __VA_ARGS__)
#define DescribeDimensionKeysCallable(REQUEST)  SubmitCallable(&PIClient::DescribeDimensionKeys, REQUEST)

#define GetDimensionKeyDetailsAsync(...)  SubmitAsync(&PIClient::GetDimensionKeyDetails, __VA_ARGS__)
#define GetDimensionKeyDetailsCallable(REQUEST)  SubmitCallable(&PIClient::GetDimensionKeyDetails, REQUEST)

#define GetResourceMetadataAsync(...)  SubmitAsync(&PIClient::GetResourceMetadata, __VA_ARGS__)
#define GetResourceMetadataCallable(REQUEST)  SubmitCallable(&PIClient::GetResourceMetadata, REQUEST)

#define GetResourceMetricsAsync(...)  SubmitAsync(&PIClient::GetResourceMetrics, __VA_ARGS__)
#define GetResourceMetricsCallable(REQUEST)  SubmitCallable(&PIClient::GetResourceMetrics, REQUEST)

#define ListAvailableResourceDimensionsAsync(...)  SubmitAsync(&PIClient::ListAvailableResourceDimensions, __VA_ARGS__)
#define ListAvailableResourceDimensionsCallable(REQUEST)  SubmitCallable(&PIClient::ListAvailableResourceDimensions, REQUEST)

#define ListAvailableResourceMetricsAsync(...)  SubmitAsync(&PIClient::ListAvailableResourceMetrics, __VA_ARGS__)
#define ListAvailableResourceMetricsCallable(REQUEST)  SubmitCallable(&PIClient::ListAvailableResourceMetrics, REQUEST)

