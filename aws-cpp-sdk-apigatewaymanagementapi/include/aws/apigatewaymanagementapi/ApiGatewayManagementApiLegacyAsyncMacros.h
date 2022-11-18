/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#define DeleteConnectionAsync(...)  SubmitAsync(&ApiGatewayManagementApiClient::DeleteConnection, __VA_ARGS__)
#define DeleteConnectionCallable(REQUEST)  SubmitCallable(&ApiGatewayManagementApiClient::DeleteConnection, REQUEST)

#define GetConnectionAsync(...)  SubmitAsync(&ApiGatewayManagementApiClient::GetConnection, __VA_ARGS__)
#define GetConnectionCallable(REQUEST)  SubmitCallable(&ApiGatewayManagementApiClient::GetConnection, REQUEST)

#define PostToConnectionAsync(...)  SubmitAsync(&ApiGatewayManagementApiClient::PostToConnection, __VA_ARGS__)
#define PostToConnectionCallable(REQUEST)  SubmitCallable(&ApiGatewayManagementApiClient::PostToConnection, REQUEST)

