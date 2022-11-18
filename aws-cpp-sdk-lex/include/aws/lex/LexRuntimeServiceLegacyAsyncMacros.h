/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#define DeleteSessionAsync(...)  SubmitAsync(&LexRuntimeServiceClient::DeleteSession, __VA_ARGS__)
#define DeleteSessionCallable(REQUEST)  SubmitCallable(&LexRuntimeServiceClient::DeleteSession, REQUEST)

#define GetSessionAsync(...)  SubmitAsync(&LexRuntimeServiceClient::GetSession, __VA_ARGS__)
#define GetSessionCallable(REQUEST)  SubmitCallable(&LexRuntimeServiceClient::GetSession, REQUEST)

#define PostContentAsync(...)  SubmitAsync(&LexRuntimeServiceClient::PostContent, __VA_ARGS__)
#define PostContentCallable(REQUEST)  SubmitCallable(&LexRuntimeServiceClient::PostContent, REQUEST)

#define PostTextAsync(...)  SubmitAsync(&LexRuntimeServiceClient::PostText, __VA_ARGS__)
#define PostTextCallable(REQUEST)  SubmitCallable(&LexRuntimeServiceClient::PostText, REQUEST)

#define PutSessionAsync(...)  SubmitAsync(&LexRuntimeServiceClient::PutSession, __VA_ARGS__)
#define PutSessionCallable(REQUEST)  SubmitCallable(&LexRuntimeServiceClient::PutSession, REQUEST)

