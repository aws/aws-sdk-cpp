/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#define DescribeServicesAsync(...)  SubmitAsync(&PricingClient::DescribeServices, __VA_ARGS__)
#define DescribeServicesCallable(REQUEST)  SubmitCallable(&PricingClient::DescribeServices, REQUEST)

#define GetAttributeValuesAsync(...)  SubmitAsync(&PricingClient::GetAttributeValues, __VA_ARGS__)
#define GetAttributeValuesCallable(REQUEST)  SubmitCallable(&PricingClient::GetAttributeValues, REQUEST)

#define GetProductsAsync(...)  SubmitAsync(&PricingClient::GetProducts, __VA_ARGS__)
#define GetProductsCallable(REQUEST)  SubmitCallable(&PricingClient::GetProducts, REQUEST)

