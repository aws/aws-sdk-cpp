/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#define SendCommandAsync(...)  SubmitAsync(&QLDBSessionClient::SendCommand, __VA_ARGS__)
#define SendCommandCallable(REQUEST)  SubmitCallable(&QLDBSessionClient::SendCommand, REQUEST)

