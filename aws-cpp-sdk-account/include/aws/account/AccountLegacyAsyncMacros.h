/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#define DeleteAlternateContactAsync(...)  SubmitAsync(&AccountClient::DeleteAlternateContact, __VA_ARGS__)
#define DeleteAlternateContactCallable(REQUEST)  SubmitCallable(&AccountClient::DeleteAlternateContact, REQUEST)

#define GetAlternateContactAsync(...)  SubmitAsync(&AccountClient::GetAlternateContact, __VA_ARGS__)
#define GetAlternateContactCallable(REQUEST)  SubmitCallable(&AccountClient::GetAlternateContact, REQUEST)

#define GetContactInformationAsync(...)  SubmitAsync(&AccountClient::GetContactInformation, __VA_ARGS__)
#define GetContactInformationCallable(REQUEST)  SubmitCallable(&AccountClient::GetContactInformation, REQUEST)

#define PutAlternateContactAsync(...)  SubmitAsync(&AccountClient::PutAlternateContact, __VA_ARGS__)
#define PutAlternateContactCallable(REQUEST)  SubmitCallable(&AccountClient::PutAlternateContact, REQUEST)

#define PutContactInformationAsync(...)  SubmitAsync(&AccountClient::PutContactInformation, __VA_ARGS__)
#define PutContactInformationCallable(REQUEST)  SubmitCallable(&AccountClient::PutContactInformation, REQUEST)

