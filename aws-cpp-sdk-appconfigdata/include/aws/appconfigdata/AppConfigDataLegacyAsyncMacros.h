/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#define GetLatestConfigurationAsync(...)  SubmitAsync(&AppConfigDataClient::GetLatestConfiguration, __VA_ARGS__)
#define GetLatestConfigurationCallable(REQUEST)  SubmitCallable(&AppConfigDataClient::GetLatestConfiguration, REQUEST)

#define StartConfigurationSessionAsync(...)  SubmitAsync(&AppConfigDataClient::StartConfigurationSession, __VA_ARGS__)
#define StartConfigurationSessionCallable(REQUEST)  SubmitCallable(&AppConfigDataClient::StartConfigurationSession, REQUEST)

