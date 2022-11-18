/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#define PutEventsAsync(...)  SubmitAsync(&PersonalizeEventsClient::PutEvents, __VA_ARGS__)
#define PutEventsCallable(REQUEST)  SubmitCallable(&PersonalizeEventsClient::PutEvents, REQUEST)

#define PutItemsAsync(...)  SubmitAsync(&PersonalizeEventsClient::PutItems, __VA_ARGS__)
#define PutItemsCallable(REQUEST)  SubmitCallable(&PersonalizeEventsClient::PutItems, REQUEST)

#define PutUsersAsync(...)  SubmitAsync(&PersonalizeEventsClient::PutUsers, __VA_ARGS__)
#define PutUsersCallable(REQUEST)  SubmitCallable(&PersonalizeEventsClient::PutUsers, REQUEST)

