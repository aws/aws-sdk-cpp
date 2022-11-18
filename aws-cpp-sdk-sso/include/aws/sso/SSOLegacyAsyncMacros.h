/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#define GetRoleCredentialsAsync(...)  SubmitAsync(&SSOClient::GetRoleCredentials, __VA_ARGS__)
#define GetRoleCredentialsCallable(REQUEST)  SubmitCallable(&SSOClient::GetRoleCredentials, REQUEST)

#define ListAccountRolesAsync(...)  SubmitAsync(&SSOClient::ListAccountRoles, __VA_ARGS__)
#define ListAccountRolesCallable(REQUEST)  SubmitCallable(&SSOClient::ListAccountRoles, REQUEST)

#define ListAccountsAsync(...)  SubmitAsync(&SSOClient::ListAccounts, __VA_ARGS__)
#define ListAccountsCallable(REQUEST)  SubmitCallable(&SSOClient::ListAccounts, REQUEST)

#define LogoutAsync(...)  SubmitAsync(&SSOClient::Logout, __VA_ARGS__)
#define LogoutCallable(REQUEST)  SubmitCallable(&SSOClient::Logout, REQUEST)

