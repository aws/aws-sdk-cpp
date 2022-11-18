/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#define QueryForecastAsync(...)  SubmitAsync(&ForecastQueryServiceClient::QueryForecast, __VA_ARGS__)
#define QueryForecastCallable(REQUEST)  SubmitCallable(&ForecastQueryServiceClient::QueryForecast, REQUEST)

#define QueryWhatIfForecastAsync(...)  SubmitAsync(&ForecastQueryServiceClient::QueryWhatIfForecast, __VA_ARGS__)
#define QueryWhatIfForecastCallable(REQUEST)  SubmitCallable(&ForecastQueryServiceClient::QueryWhatIfForecast, REQUEST)

