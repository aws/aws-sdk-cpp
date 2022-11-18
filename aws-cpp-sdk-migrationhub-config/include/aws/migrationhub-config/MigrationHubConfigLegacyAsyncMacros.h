/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#define CreateHomeRegionControlAsync(...)  SubmitAsync(&MigrationHubConfigClient::CreateHomeRegionControl, __VA_ARGS__)
#define CreateHomeRegionControlCallable(REQUEST)  SubmitCallable(&MigrationHubConfigClient::CreateHomeRegionControl, REQUEST)

#define DescribeHomeRegionControlsAsync(...)  SubmitAsync(&MigrationHubConfigClient::DescribeHomeRegionControls, __VA_ARGS__)
#define DescribeHomeRegionControlsCallable(REQUEST)  SubmitCallable(&MigrationHubConfigClient::DescribeHomeRegionControls, REQUEST)

#define GetHomeRegionAsync(...)  SubmitAsync(&MigrationHubConfigClient::GetHomeRegion, __VA_ARGS__)
#define GetHomeRegionCallable(REQUEST)  SubmitCallable(&MigrationHubConfigClient::GetHomeRegion, REQUEST)

