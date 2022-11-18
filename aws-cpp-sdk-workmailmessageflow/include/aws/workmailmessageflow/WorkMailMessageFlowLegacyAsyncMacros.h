/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#define GetRawMessageContentAsync(...)  SubmitAsync(&WorkMailMessageFlowClient::GetRawMessageContent, __VA_ARGS__)
#define GetRawMessageContentCallable(REQUEST)  SubmitCallable(&WorkMailMessageFlowClient::GetRawMessageContent, REQUEST)

#define PutRawMessageContentAsync(...)  SubmitAsync(&WorkMailMessageFlowClient::PutRawMessageContent, __VA_ARGS__)
#define PutRawMessageContentCallable(REQUEST)  SubmitCallable(&WorkMailMessageFlowClient::PutRawMessageContent, REQUEST)

