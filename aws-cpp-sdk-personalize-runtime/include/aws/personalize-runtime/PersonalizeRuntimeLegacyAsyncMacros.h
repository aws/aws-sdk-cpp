/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#define GetPersonalizedRankingAsync(...)  SubmitAsync(&PersonalizeRuntimeClient::GetPersonalizedRanking, __VA_ARGS__)
#define GetPersonalizedRankingCallable(REQUEST)  SubmitCallable(&PersonalizeRuntimeClient::GetPersonalizedRanking, REQUEST)

#define GetRecommendationsAsync(...)  SubmitAsync(&PersonalizeRuntimeClient::GetRecommendations, __VA_ARGS__)
#define GetRecommendationsCallable(REQUEST)  SubmitCallable(&PersonalizeRuntimeClient::GetRecommendations, REQUEST)

