/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#define GenerateDataSetAsync(...)  SubmitAsync(&MarketplaceCommerceAnalyticsClient::GenerateDataSet, __VA_ARGS__)
#define GenerateDataSetCallable(REQUEST)  SubmitCallable(&MarketplaceCommerceAnalyticsClient::GenerateDataSet, REQUEST)

#define StartSupportDataExportAsync(...)  SubmitAsync(&MarketplaceCommerceAnalyticsClient::StartSupportDataExport, __VA_ARGS__)
#define StartSupportDataExportCallable(REQUEST)  SubmitCallable(&MarketplaceCommerceAnalyticsClient::StartSupportDataExport, REQUEST)

