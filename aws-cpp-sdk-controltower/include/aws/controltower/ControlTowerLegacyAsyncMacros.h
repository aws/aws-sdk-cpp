/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#define DisableControlAsync(...)  SubmitAsync(&ControlTowerClient::DisableControl, __VA_ARGS__)
#define DisableControlCallable(REQUEST)  SubmitCallable(&ControlTowerClient::DisableControl, REQUEST)

#define EnableControlAsync(...)  SubmitAsync(&ControlTowerClient::EnableControl, __VA_ARGS__)
#define EnableControlCallable(REQUEST)  SubmitCallable(&ControlTowerClient::EnableControl, REQUEST)

#define GetControlOperationAsync(...)  SubmitAsync(&ControlTowerClient::GetControlOperation, __VA_ARGS__)
#define GetControlOperationCallable(REQUEST)  SubmitCallable(&ControlTowerClient::GetControlOperation, REQUEST)

#define ListEnabledControlsAsync(...)  SubmitAsync(&ControlTowerClient::ListEnabledControls, __VA_ARGS__)
#define ListEnabledControlsCallable(REQUEST)  SubmitCallable(&ControlTowerClient::ListEnabledControls, REQUEST)

