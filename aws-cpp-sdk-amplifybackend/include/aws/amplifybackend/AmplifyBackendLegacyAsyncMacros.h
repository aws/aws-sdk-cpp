/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#define CloneBackendAsync(...)  SubmitAsync(&AmplifyBackendClient::CloneBackend, __VA_ARGS__)
#define CloneBackendCallable(REQUEST)  SubmitCallable(&AmplifyBackendClient::CloneBackend, REQUEST)

#define CreateBackendAsync(...)  SubmitAsync(&AmplifyBackendClient::CreateBackend, __VA_ARGS__)
#define CreateBackendCallable(REQUEST)  SubmitCallable(&AmplifyBackendClient::CreateBackend, REQUEST)

#define CreateBackendAPIAsync(...)  SubmitAsync(&AmplifyBackendClient::CreateBackendAPI, __VA_ARGS__)
#define CreateBackendAPICallable(REQUEST)  SubmitCallable(&AmplifyBackendClient::CreateBackendAPI, REQUEST)

#define CreateBackendAuthAsync(...)  SubmitAsync(&AmplifyBackendClient::CreateBackendAuth, __VA_ARGS__)
#define CreateBackendAuthCallable(REQUEST)  SubmitCallable(&AmplifyBackendClient::CreateBackendAuth, REQUEST)

#define CreateBackendConfigAsync(...)  SubmitAsync(&AmplifyBackendClient::CreateBackendConfig, __VA_ARGS__)
#define CreateBackendConfigCallable(REQUEST)  SubmitCallable(&AmplifyBackendClient::CreateBackendConfig, REQUEST)

#define CreateBackendStorageAsync(...)  SubmitAsync(&AmplifyBackendClient::CreateBackendStorage, __VA_ARGS__)
#define CreateBackendStorageCallable(REQUEST)  SubmitCallable(&AmplifyBackendClient::CreateBackendStorage, REQUEST)

#define CreateTokenAsync(...)  SubmitAsync(&AmplifyBackendClient::CreateToken, __VA_ARGS__)
#define CreateTokenCallable(REQUEST)  SubmitCallable(&AmplifyBackendClient::CreateToken, REQUEST)

#define DeleteBackendAsync(...)  SubmitAsync(&AmplifyBackendClient::DeleteBackend, __VA_ARGS__)
#define DeleteBackendCallable(REQUEST)  SubmitCallable(&AmplifyBackendClient::DeleteBackend, REQUEST)

#define DeleteBackendAPIAsync(...)  SubmitAsync(&AmplifyBackendClient::DeleteBackendAPI, __VA_ARGS__)
#define DeleteBackendAPICallable(REQUEST)  SubmitCallable(&AmplifyBackendClient::DeleteBackendAPI, REQUEST)

#define DeleteBackendAuthAsync(...)  SubmitAsync(&AmplifyBackendClient::DeleteBackendAuth, __VA_ARGS__)
#define DeleteBackendAuthCallable(REQUEST)  SubmitCallable(&AmplifyBackendClient::DeleteBackendAuth, REQUEST)

#define DeleteBackendStorageAsync(...)  SubmitAsync(&AmplifyBackendClient::DeleteBackendStorage, __VA_ARGS__)
#define DeleteBackendStorageCallable(REQUEST)  SubmitCallable(&AmplifyBackendClient::DeleteBackendStorage, REQUEST)

#define DeleteTokenAsync(...)  SubmitAsync(&AmplifyBackendClient::DeleteToken, __VA_ARGS__)
#define DeleteTokenCallable(REQUEST)  SubmitCallable(&AmplifyBackendClient::DeleteToken, REQUEST)

#define GenerateBackendAPIModelsAsync(...)  SubmitAsync(&AmplifyBackendClient::GenerateBackendAPIModels, __VA_ARGS__)
#define GenerateBackendAPIModelsCallable(REQUEST)  SubmitCallable(&AmplifyBackendClient::GenerateBackendAPIModels, REQUEST)

#define GetBackendAsync(...)  SubmitAsync(&AmplifyBackendClient::GetBackend, __VA_ARGS__)
#define GetBackendCallable(REQUEST)  SubmitCallable(&AmplifyBackendClient::GetBackend, REQUEST)

#define GetBackendAPIAsync(...)  SubmitAsync(&AmplifyBackendClient::GetBackendAPI, __VA_ARGS__)
#define GetBackendAPICallable(REQUEST)  SubmitCallable(&AmplifyBackendClient::GetBackendAPI, REQUEST)

#define GetBackendAPIModelsAsync(...)  SubmitAsync(&AmplifyBackendClient::GetBackendAPIModels, __VA_ARGS__)
#define GetBackendAPIModelsCallable(REQUEST)  SubmitCallable(&AmplifyBackendClient::GetBackendAPIModels, REQUEST)

#define GetBackendAuthAsync(...)  SubmitAsync(&AmplifyBackendClient::GetBackendAuth, __VA_ARGS__)
#define GetBackendAuthCallable(REQUEST)  SubmitCallable(&AmplifyBackendClient::GetBackendAuth, REQUEST)

#define GetBackendJobAsync(...)  SubmitAsync(&AmplifyBackendClient::GetBackendJob, __VA_ARGS__)
#define GetBackendJobCallable(REQUEST)  SubmitCallable(&AmplifyBackendClient::GetBackendJob, REQUEST)

#define GetBackendStorageAsync(...)  SubmitAsync(&AmplifyBackendClient::GetBackendStorage, __VA_ARGS__)
#define GetBackendStorageCallable(REQUEST)  SubmitCallable(&AmplifyBackendClient::GetBackendStorage, REQUEST)

#define GetTokenAsync(...)  SubmitAsync(&AmplifyBackendClient::GetToken, __VA_ARGS__)
#define GetTokenCallable(REQUEST)  SubmitCallable(&AmplifyBackendClient::GetToken, REQUEST)

#define ImportBackendAuthAsync(...)  SubmitAsync(&AmplifyBackendClient::ImportBackendAuth, __VA_ARGS__)
#define ImportBackendAuthCallable(REQUEST)  SubmitCallable(&AmplifyBackendClient::ImportBackendAuth, REQUEST)

#define ImportBackendStorageAsync(...)  SubmitAsync(&AmplifyBackendClient::ImportBackendStorage, __VA_ARGS__)
#define ImportBackendStorageCallable(REQUEST)  SubmitCallable(&AmplifyBackendClient::ImportBackendStorage, REQUEST)

#define ListBackendJobsAsync(...)  SubmitAsync(&AmplifyBackendClient::ListBackendJobs, __VA_ARGS__)
#define ListBackendJobsCallable(REQUEST)  SubmitCallable(&AmplifyBackendClient::ListBackendJobs, REQUEST)

#define ListS3BucketsAsync(...)  SubmitAsync(&AmplifyBackendClient::ListS3Buckets, __VA_ARGS__)
#define ListS3BucketsCallable(REQUEST)  SubmitCallable(&AmplifyBackendClient::ListS3Buckets, REQUEST)

#define RemoveAllBackendsAsync(...)  SubmitAsync(&AmplifyBackendClient::RemoveAllBackends, __VA_ARGS__)
#define RemoveAllBackendsCallable(REQUEST)  SubmitCallable(&AmplifyBackendClient::RemoveAllBackends, REQUEST)

#define RemoveBackendConfigAsync(...)  SubmitAsync(&AmplifyBackendClient::RemoveBackendConfig, __VA_ARGS__)
#define RemoveBackendConfigCallable(REQUEST)  SubmitCallable(&AmplifyBackendClient::RemoveBackendConfig, REQUEST)

#define UpdateBackendAPIAsync(...)  SubmitAsync(&AmplifyBackendClient::UpdateBackendAPI, __VA_ARGS__)
#define UpdateBackendAPICallable(REQUEST)  SubmitCallable(&AmplifyBackendClient::UpdateBackendAPI, REQUEST)

#define UpdateBackendAuthAsync(...)  SubmitAsync(&AmplifyBackendClient::UpdateBackendAuth, __VA_ARGS__)
#define UpdateBackendAuthCallable(REQUEST)  SubmitCallable(&AmplifyBackendClient::UpdateBackendAuth, REQUEST)

#define UpdateBackendConfigAsync(...)  SubmitAsync(&AmplifyBackendClient::UpdateBackendConfig, __VA_ARGS__)
#define UpdateBackendConfigCallable(REQUEST)  SubmitCallable(&AmplifyBackendClient::UpdateBackendConfig, REQUEST)

#define UpdateBackendJobAsync(...)  SubmitAsync(&AmplifyBackendClient::UpdateBackendJob, __VA_ARGS__)
#define UpdateBackendJobCallable(REQUEST)  SubmitCallable(&AmplifyBackendClient::UpdateBackendJob, REQUEST)

#define UpdateBackendStorageAsync(...)  SubmitAsync(&AmplifyBackendClient::UpdateBackendStorage, __VA_ARGS__)
#define UpdateBackendStorageCallable(REQUEST)  SubmitCallable(&AmplifyBackendClient::UpdateBackendStorage, REQUEST)

