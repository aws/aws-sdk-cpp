/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#define BatchMeterUsageAsync(...)  SubmitAsync(&MarketplaceMeteringClient::BatchMeterUsage, __VA_ARGS__)
#define BatchMeterUsageCallable(REQUEST)  SubmitCallable(&MarketplaceMeteringClient::BatchMeterUsage, REQUEST)

#define MeterUsageAsync(...)  SubmitAsync(&MarketplaceMeteringClient::MeterUsage, __VA_ARGS__)
#define MeterUsageCallable(REQUEST)  SubmitCallable(&MarketplaceMeteringClient::MeterUsage, REQUEST)

#define RegisterUsageAsync(...)  SubmitAsync(&MarketplaceMeteringClient::RegisterUsage, __VA_ARGS__)
#define RegisterUsageCallable(REQUEST)  SubmitCallable(&MarketplaceMeteringClient::RegisterUsage, REQUEST)

#define ResolveCustomerAsync(...)  SubmitAsync(&MarketplaceMeteringClient::ResolveCustomer, __VA_ARGS__)
#define ResolveCustomerCallable(REQUEST)  SubmitCallable(&MarketplaceMeteringClient::ResolveCustomer, REQUEST)

