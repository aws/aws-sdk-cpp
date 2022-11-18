/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#define CreateTokenAsync(...)  SubmitAsync(&SSOOIDCClient::CreateToken, __VA_ARGS__)
#define CreateTokenCallable(REQUEST)  SubmitCallable(&SSOOIDCClient::CreateToken, REQUEST)

#define RegisterClientAsync(...)  SubmitAsync(&SSOOIDCClient::RegisterClient, __VA_ARGS__)
#define RegisterClientCallable(REQUEST)  SubmitCallable(&SSOOIDCClient::RegisterClient, REQUEST)

#define StartDeviceAuthorizationAsync(...)  SubmitAsync(&SSOOIDCClient::StartDeviceAuthorization, __VA_ARGS__)
#define StartDeviceAuthorizationCallable(REQUEST)  SubmitCallable(&SSOOIDCClient::StartDeviceAuthorization, REQUEST)

