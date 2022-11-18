/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#define GetEntitlementsAsync(...)  SubmitAsync(&MarketplaceEntitlementServiceClient::GetEntitlements, __VA_ARGS__)
#define GetEntitlementsCallable(REQUEST)  SubmitCallable(&MarketplaceEntitlementServiceClient::GetEntitlements, REQUEST)

