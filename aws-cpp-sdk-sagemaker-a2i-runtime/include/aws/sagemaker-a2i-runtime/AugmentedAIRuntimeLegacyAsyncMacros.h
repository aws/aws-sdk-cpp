/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#define DeleteHumanLoopAsync(...)  SubmitAsync(&AugmentedAIRuntimeClient::DeleteHumanLoop, __VA_ARGS__)
#define DeleteHumanLoopCallable(REQUEST)  SubmitCallable(&AugmentedAIRuntimeClient::DeleteHumanLoop, REQUEST)

#define DescribeHumanLoopAsync(...)  SubmitAsync(&AugmentedAIRuntimeClient::DescribeHumanLoop, __VA_ARGS__)
#define DescribeHumanLoopCallable(REQUEST)  SubmitCallable(&AugmentedAIRuntimeClient::DescribeHumanLoop, REQUEST)

#define ListHumanLoopsAsync(...)  SubmitAsync(&AugmentedAIRuntimeClient::ListHumanLoops, __VA_ARGS__)
#define ListHumanLoopsCallable(REQUEST)  SubmitCallable(&AugmentedAIRuntimeClient::ListHumanLoops, REQUEST)

#define StartHumanLoopAsync(...)  SubmitAsync(&AugmentedAIRuntimeClient::StartHumanLoop, __VA_ARGS__)
#define StartHumanLoopCallable(REQUEST)  SubmitCallable(&AugmentedAIRuntimeClient::StartHumanLoop, REQUEST)

#define StopHumanLoopAsync(...)  SubmitAsync(&AugmentedAIRuntimeClient::StopHumanLoop, __VA_ARGS__)
#define StopHumanLoopCallable(REQUEST)  SubmitCallable(&AugmentedAIRuntimeClient::StopHumanLoop, REQUEST)

