/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#define DeleteResourcePermissionAsync(...)  SubmitAsync(&SsmSapClient::DeleteResourcePermission, __VA_ARGS__)
#define DeleteResourcePermissionCallable(REQUEST)  SubmitCallable(&SsmSapClient::DeleteResourcePermission, REQUEST)

#define DeregisterApplicationAsync(...)  SubmitAsync(&SsmSapClient::DeregisterApplication, __VA_ARGS__)
#define DeregisterApplicationCallable(REQUEST)  SubmitCallable(&SsmSapClient::DeregisterApplication, REQUEST)

#define GetApplicationAsync(...)  SubmitAsync(&SsmSapClient::GetApplication, __VA_ARGS__)
#define GetApplicationCallable(REQUEST)  SubmitCallable(&SsmSapClient::GetApplication, REQUEST)

#define GetComponentAsync(...)  SubmitAsync(&SsmSapClient::GetComponent, __VA_ARGS__)
#define GetComponentCallable(REQUEST)  SubmitCallable(&SsmSapClient::GetComponent, REQUEST)

#define GetDatabaseAsync(...)  SubmitAsync(&SsmSapClient::GetDatabase, __VA_ARGS__)
#define GetDatabaseCallable(REQUEST)  SubmitCallable(&SsmSapClient::GetDatabase, REQUEST)

#define GetOperationAsync(...)  SubmitAsync(&SsmSapClient::GetOperation, __VA_ARGS__)
#define GetOperationCallable(REQUEST)  SubmitCallable(&SsmSapClient::GetOperation, REQUEST)

#define GetResourcePermissionAsync(...)  SubmitAsync(&SsmSapClient::GetResourcePermission, __VA_ARGS__)
#define GetResourcePermissionCallable(REQUEST)  SubmitCallable(&SsmSapClient::GetResourcePermission, REQUEST)

#define ListApplicationsAsync(...)  SubmitAsync(&SsmSapClient::ListApplications, __VA_ARGS__)
#define ListApplicationsCallable(REQUEST)  SubmitCallable(&SsmSapClient::ListApplications, REQUEST)

#define ListComponentsAsync(...)  SubmitAsync(&SsmSapClient::ListComponents, __VA_ARGS__)
#define ListComponentsCallable(REQUEST)  SubmitCallable(&SsmSapClient::ListComponents, REQUEST)

#define ListDatabasesAsync(...)  SubmitAsync(&SsmSapClient::ListDatabases, __VA_ARGS__)
#define ListDatabasesCallable(REQUEST)  SubmitCallable(&SsmSapClient::ListDatabases, REQUEST)

#define ListTagsForResourceAsync(...)  SubmitAsync(&SsmSapClient::ListTagsForResource, __VA_ARGS__)
#define ListTagsForResourceCallable(REQUEST)  SubmitCallable(&SsmSapClient::ListTagsForResource, REQUEST)

#define PutResourcePermissionAsync(...)  SubmitAsync(&SsmSapClient::PutResourcePermission, __VA_ARGS__)
#define PutResourcePermissionCallable(REQUEST)  SubmitCallable(&SsmSapClient::PutResourcePermission, REQUEST)

#define RegisterApplicationAsync(...)  SubmitAsync(&SsmSapClient::RegisterApplication, __VA_ARGS__)
#define RegisterApplicationCallable(REQUEST)  SubmitCallable(&SsmSapClient::RegisterApplication, REQUEST)

#define TagResourceAsync(...)  SubmitAsync(&SsmSapClient::TagResource, __VA_ARGS__)
#define TagResourceCallable(REQUEST)  SubmitCallable(&SsmSapClient::TagResource, REQUEST)

#define UntagResourceAsync(...)  SubmitAsync(&SsmSapClient::UntagResource, __VA_ARGS__)
#define UntagResourceCallable(REQUEST)  SubmitCallable(&SsmSapClient::UntagResource, REQUEST)

#define UpdateApplicationSettingsAsync(...)  SubmitAsync(&SsmSapClient::UpdateApplicationSettings, __VA_ARGS__)
#define UpdateApplicationSettingsCallable(REQUEST)  SubmitCallable(&SsmSapClient::UpdateApplicationSettings, REQUEST)

