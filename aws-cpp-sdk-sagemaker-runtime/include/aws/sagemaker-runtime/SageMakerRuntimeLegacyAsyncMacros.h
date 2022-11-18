/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#define InvokeEndpointAsync(...)  SubmitAsync(&SageMakerRuntimeClient::InvokeEndpoint, __VA_ARGS__)
#define InvokeEndpointCallable(REQUEST)  SubmitCallable(&SageMakerRuntimeClient::InvokeEndpoint, REQUEST)

#define InvokeEndpointAsyncAsync(...)  SubmitAsync(&SageMakerRuntimeClient::InvokeEndpointAsync, __VA_ARGS__)
#define InvokeEndpointAsyncCallable(REQUEST)  SubmitCallable(&SageMakerRuntimeClient::InvokeEndpointAsync, REQUEST)

