/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#define DeleteThingShadowAsync(...)  SubmitAsync(&IoTDataPlaneClient::DeleteThingShadow, __VA_ARGS__)
#define DeleteThingShadowCallable(REQUEST)  SubmitCallable(&IoTDataPlaneClient::DeleteThingShadow, REQUEST)

#define GetRetainedMessageAsync(...)  SubmitAsync(&IoTDataPlaneClient::GetRetainedMessage, __VA_ARGS__)
#define GetRetainedMessageCallable(REQUEST)  SubmitCallable(&IoTDataPlaneClient::GetRetainedMessage, REQUEST)

#define GetThingShadowAsync(...)  SubmitAsync(&IoTDataPlaneClient::GetThingShadow, __VA_ARGS__)
#define GetThingShadowCallable(REQUEST)  SubmitCallable(&IoTDataPlaneClient::GetThingShadow, REQUEST)

#define ListNamedShadowsForThingAsync(...)  SubmitAsync(&IoTDataPlaneClient::ListNamedShadowsForThing, __VA_ARGS__)
#define ListNamedShadowsForThingCallable(REQUEST)  SubmitCallable(&IoTDataPlaneClient::ListNamedShadowsForThing, REQUEST)

#define ListRetainedMessagesAsync(...)  SubmitAsync(&IoTDataPlaneClient::ListRetainedMessages, __VA_ARGS__)
#define ListRetainedMessagesCallable(REQUEST)  SubmitCallable(&IoTDataPlaneClient::ListRetainedMessages, REQUEST)

#define PublishAsync(...)  SubmitAsync(&IoTDataPlaneClient::Publish, __VA_ARGS__)
#define PublishCallable(REQUEST)  SubmitCallable(&IoTDataPlaneClient::Publish, REQUEST)

#define UpdateThingShadowAsync(...)  SubmitAsync(&IoTDataPlaneClient::UpdateThingShadow, __VA_ARGS__)
#define UpdateThingShadowCallable(REQUEST)  SubmitCallable(&IoTDataPlaneClient::UpdateThingShadow, REQUEST)

