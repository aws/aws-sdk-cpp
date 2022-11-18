/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#define CreateKeyspaceAsync(...)  SubmitAsync(&KeyspacesClient::CreateKeyspace, __VA_ARGS__)
#define CreateKeyspaceCallable(REQUEST)  SubmitCallable(&KeyspacesClient::CreateKeyspace, REQUEST)

#define CreateTableAsync(...)  SubmitAsync(&KeyspacesClient::CreateTable, __VA_ARGS__)
#define CreateTableCallable(REQUEST)  SubmitCallable(&KeyspacesClient::CreateTable, REQUEST)

#define DeleteKeyspaceAsync(...)  SubmitAsync(&KeyspacesClient::DeleteKeyspace, __VA_ARGS__)
#define DeleteKeyspaceCallable(REQUEST)  SubmitCallable(&KeyspacesClient::DeleteKeyspace, REQUEST)

#define DeleteTableAsync(...)  SubmitAsync(&KeyspacesClient::DeleteTable, __VA_ARGS__)
#define DeleteTableCallable(REQUEST)  SubmitCallable(&KeyspacesClient::DeleteTable, REQUEST)

#define GetKeyspaceAsync(...)  SubmitAsync(&KeyspacesClient::GetKeyspace, __VA_ARGS__)
#define GetKeyspaceCallable(REQUEST)  SubmitCallable(&KeyspacesClient::GetKeyspace, REQUEST)

#define GetTableAsync(...)  SubmitAsync(&KeyspacesClient::GetTable, __VA_ARGS__)
#define GetTableCallable(REQUEST)  SubmitCallable(&KeyspacesClient::GetTable, REQUEST)

#define ListKeyspacesAsync(...)  SubmitAsync(&KeyspacesClient::ListKeyspaces, __VA_ARGS__)
#define ListKeyspacesCallable(REQUEST)  SubmitCallable(&KeyspacesClient::ListKeyspaces, REQUEST)

#define ListTablesAsync(...)  SubmitAsync(&KeyspacesClient::ListTables, __VA_ARGS__)
#define ListTablesCallable(REQUEST)  SubmitCallable(&KeyspacesClient::ListTables, REQUEST)

#define ListTagsForResourceAsync(...)  SubmitAsync(&KeyspacesClient::ListTagsForResource, __VA_ARGS__)
#define ListTagsForResourceCallable(REQUEST)  SubmitCallable(&KeyspacesClient::ListTagsForResource, REQUEST)

#define RestoreTableAsync(...)  SubmitAsync(&KeyspacesClient::RestoreTable, __VA_ARGS__)
#define RestoreTableCallable(REQUEST)  SubmitCallable(&KeyspacesClient::RestoreTable, REQUEST)

#define TagResourceAsync(...)  SubmitAsync(&KeyspacesClient::TagResource, __VA_ARGS__)
#define TagResourceCallable(REQUEST)  SubmitCallable(&KeyspacesClient::TagResource, REQUEST)

#define UntagResourceAsync(...)  SubmitAsync(&KeyspacesClient::UntagResource, __VA_ARGS__)
#define UntagResourceCallable(REQUEST)  SubmitCallable(&KeyspacesClient::UntagResource, REQUEST)

#define UpdateTableAsync(...)  SubmitAsync(&KeyspacesClient::UpdateTable, __VA_ARGS__)
#define UpdateTableCallable(REQUEST)  SubmitCallable(&KeyspacesClient::UpdateTable, REQUEST)

