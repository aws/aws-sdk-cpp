/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#define ClaimDevicesByClaimCodeAsync(...)  SubmitAsync(&IoT1ClickDevicesServiceClient::ClaimDevicesByClaimCode, __VA_ARGS__)
#define ClaimDevicesByClaimCodeCallable(REQUEST)  SubmitCallable(&IoT1ClickDevicesServiceClient::ClaimDevicesByClaimCode, REQUEST)

#define DescribeDeviceAsync(...)  SubmitAsync(&IoT1ClickDevicesServiceClient::DescribeDevice, __VA_ARGS__)
#define DescribeDeviceCallable(REQUEST)  SubmitCallable(&IoT1ClickDevicesServiceClient::DescribeDevice, REQUEST)

#define FinalizeDeviceClaimAsync(...)  SubmitAsync(&IoT1ClickDevicesServiceClient::FinalizeDeviceClaim, __VA_ARGS__)
#define FinalizeDeviceClaimCallable(REQUEST)  SubmitCallable(&IoT1ClickDevicesServiceClient::FinalizeDeviceClaim, REQUEST)

#define GetDeviceMethodsAsync(...)  SubmitAsync(&IoT1ClickDevicesServiceClient::GetDeviceMethods, __VA_ARGS__)
#define GetDeviceMethodsCallable(REQUEST)  SubmitCallable(&IoT1ClickDevicesServiceClient::GetDeviceMethods, REQUEST)

#define InitiateDeviceClaimAsync(...)  SubmitAsync(&IoT1ClickDevicesServiceClient::InitiateDeviceClaim, __VA_ARGS__)
#define InitiateDeviceClaimCallable(REQUEST)  SubmitCallable(&IoT1ClickDevicesServiceClient::InitiateDeviceClaim, REQUEST)

#define InvokeDeviceMethodAsync(...)  SubmitAsync(&IoT1ClickDevicesServiceClient::InvokeDeviceMethod, __VA_ARGS__)
#define InvokeDeviceMethodCallable(REQUEST)  SubmitCallable(&IoT1ClickDevicesServiceClient::InvokeDeviceMethod, REQUEST)

#define ListDeviceEventsAsync(...)  SubmitAsync(&IoT1ClickDevicesServiceClient::ListDeviceEvents, __VA_ARGS__)
#define ListDeviceEventsCallable(REQUEST)  SubmitCallable(&IoT1ClickDevicesServiceClient::ListDeviceEvents, REQUEST)

#define ListDevicesAsync(...)  SubmitAsync(&IoT1ClickDevicesServiceClient::ListDevices, __VA_ARGS__)
#define ListDevicesCallable(REQUEST)  SubmitCallable(&IoT1ClickDevicesServiceClient::ListDevices, REQUEST)

#define ListTagsForResourceAsync(...)  SubmitAsync(&IoT1ClickDevicesServiceClient::ListTagsForResource, __VA_ARGS__)
#define ListTagsForResourceCallable(REQUEST)  SubmitCallable(&IoT1ClickDevicesServiceClient::ListTagsForResource, REQUEST)

#define TagResourceAsync(...)  SubmitAsync(&IoT1ClickDevicesServiceClient::TagResource, __VA_ARGS__)
#define TagResourceCallable(REQUEST)  SubmitCallable(&IoT1ClickDevicesServiceClient::TagResource, REQUEST)

#define UnclaimDeviceAsync(...)  SubmitAsync(&IoT1ClickDevicesServiceClient::UnclaimDevice, __VA_ARGS__)
#define UnclaimDeviceCallable(REQUEST)  SubmitCallable(&IoT1ClickDevicesServiceClient::UnclaimDevice, REQUEST)

#define UntagResourceAsync(...)  SubmitAsync(&IoT1ClickDevicesServiceClient::UntagResource, __VA_ARGS__)
#define UntagResourceCallable(REQUEST)  SubmitCallable(&IoT1ClickDevicesServiceClient::UntagResource, REQUEST)

#define UpdateDeviceStateAsync(...)  SubmitAsync(&IoT1ClickDevicesServiceClient::UpdateDeviceState, __VA_ARGS__)
#define UpdateDeviceStateCallable(REQUEST)  SubmitCallable(&IoT1ClickDevicesServiceClient::UpdateDeviceState, REQUEST)

