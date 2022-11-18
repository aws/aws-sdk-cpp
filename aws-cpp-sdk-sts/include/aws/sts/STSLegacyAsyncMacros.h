/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#define AssumeRoleAsync(...)  SubmitAsync(&STSClient::AssumeRole, __VA_ARGS__)
#define AssumeRoleCallable(REQUEST)  SubmitCallable(&STSClient::AssumeRole, REQUEST)

#define AssumeRoleWithSAMLAsync(...)  SubmitAsync(&STSClient::AssumeRoleWithSAML, __VA_ARGS__)
#define AssumeRoleWithSAMLCallable(REQUEST)  SubmitCallable(&STSClient::AssumeRoleWithSAML, REQUEST)

#define AssumeRoleWithWebIdentityAsync(...)  SubmitAsync(&STSClient::AssumeRoleWithWebIdentity, __VA_ARGS__)
#define AssumeRoleWithWebIdentityCallable(REQUEST)  SubmitCallable(&STSClient::AssumeRoleWithWebIdentity, REQUEST)

#define DecodeAuthorizationMessageAsync(...)  SubmitAsync(&STSClient::DecodeAuthorizationMessage, __VA_ARGS__)
#define DecodeAuthorizationMessageCallable(REQUEST)  SubmitCallable(&STSClient::DecodeAuthorizationMessage, REQUEST)

#define GetAccessKeyInfoAsync(...)  SubmitAsync(&STSClient::GetAccessKeyInfo, __VA_ARGS__)
#define GetAccessKeyInfoCallable(REQUEST)  SubmitCallable(&STSClient::GetAccessKeyInfo, REQUEST)

#define GetCallerIdentityAsync(...)  SubmitAsync(&STSClient::GetCallerIdentity, __VA_ARGS__)
#define GetCallerIdentityCallable(REQUEST)  SubmitCallable(&STSClient::GetCallerIdentity, REQUEST)

#define GetFederationTokenAsync(...)  SubmitAsync(&STSClient::GetFederationToken, __VA_ARGS__)
#define GetFederationTokenCallable(REQUEST)  SubmitCallable(&STSClient::GetFederationToken, REQUEST)

#define GetSessionTokenAsync(...)  SubmitAsync(&STSClient::GetSessionToken, __VA_ARGS__)
#define GetSessionTokenCallable(REQUEST)  SubmitCallable(&STSClient::GetSessionToken, REQUEST)

