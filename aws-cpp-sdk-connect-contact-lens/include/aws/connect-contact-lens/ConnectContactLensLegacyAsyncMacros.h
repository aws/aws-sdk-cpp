/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#define ListRealtimeContactAnalysisSegmentsAsync(...)  SubmitAsync(&ConnectContactLensClient::ListRealtimeContactAnalysisSegments, __VA_ARGS__)
#define ListRealtimeContactAnalysisSegmentsCallable(REQUEST)  SubmitCallable(&ConnectContactLensClient::ListRealtimeContactAnalysisSegments, REQUEST)

