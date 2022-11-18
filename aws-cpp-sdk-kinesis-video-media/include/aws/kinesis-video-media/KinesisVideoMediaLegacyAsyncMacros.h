/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#define GetMediaAsync(...)  SubmitAsync(&KinesisVideoMediaClient::GetMedia, __VA_ARGS__)
#define GetMediaCallable(REQUEST)  SubmitCallable(&KinesisVideoMediaClient::GetMedia, REQUEST)

