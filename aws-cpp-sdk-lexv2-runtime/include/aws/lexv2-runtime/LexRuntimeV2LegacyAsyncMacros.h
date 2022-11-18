/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#define DeleteSessionAsync(...)  SubmitAsync(&LexRuntimeV2Client::DeleteSession, __VA_ARGS__)
#define DeleteSessionCallable(REQUEST)  SubmitCallable(&LexRuntimeV2Client::DeleteSession, REQUEST)

#define GetSessionAsync(...)  SubmitAsync(&LexRuntimeV2Client::GetSession, __VA_ARGS__)
#define GetSessionCallable(REQUEST)  SubmitCallable(&LexRuntimeV2Client::GetSession, REQUEST)

#define PutSessionAsync(...)  SubmitAsync(&LexRuntimeV2Client::PutSession, __VA_ARGS__)
#define PutSessionCallable(REQUEST)  SubmitCallable(&LexRuntimeV2Client::PutSession, REQUEST)

#define RecognizeTextAsync(...)  SubmitAsync(&LexRuntimeV2Client::RecognizeText, __VA_ARGS__)
#define RecognizeTextCallable(REQUEST)  SubmitCallable(&LexRuntimeV2Client::RecognizeText, REQUEST)

#define RecognizeUtteranceAsync(...)  SubmitAsync(&LexRuntimeV2Client::RecognizeUtterance, __VA_ARGS__)
#define RecognizeUtteranceCallable(REQUEST)  SubmitCallable(&LexRuntimeV2Client::RecognizeUtterance, REQUEST)

#define StartConversationAsync(...)  SubmitAsync(&LexRuntimeV2Client::StartConversation, __VA_ARGS__)
#define StartConversationCallable(REQUEST)  SubmitCallable(&LexRuntimeV2Client::StartConversation, REQUEST)

