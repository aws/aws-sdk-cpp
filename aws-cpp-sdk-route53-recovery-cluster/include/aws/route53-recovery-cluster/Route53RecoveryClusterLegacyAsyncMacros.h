/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#define GetRoutingControlStateAsync(...)  SubmitAsync(&Route53RecoveryClusterClient::GetRoutingControlState, __VA_ARGS__)
#define GetRoutingControlStateCallable(REQUEST)  SubmitCallable(&Route53RecoveryClusterClient::GetRoutingControlState, REQUEST)

#define ListRoutingControlsAsync(...)  SubmitAsync(&Route53RecoveryClusterClient::ListRoutingControls, __VA_ARGS__)
#define ListRoutingControlsCallable(REQUEST)  SubmitCallable(&Route53RecoveryClusterClient::ListRoutingControls, REQUEST)

#define UpdateRoutingControlStateAsync(...)  SubmitAsync(&Route53RecoveryClusterClient::UpdateRoutingControlState, __VA_ARGS__)
#define UpdateRoutingControlStateCallable(REQUEST)  SubmitCallable(&Route53RecoveryClusterClient::UpdateRoutingControlState, REQUEST)

#define UpdateRoutingControlStatesAsync(...)  SubmitAsync(&Route53RecoveryClusterClient::UpdateRoutingControlStates, __VA_ARGS__)
#define UpdateRoutingControlStatesCallable(REQUEST)  SubmitCallable(&Route53RecoveryClusterClient::UpdateRoutingControlStates, REQUEST)

