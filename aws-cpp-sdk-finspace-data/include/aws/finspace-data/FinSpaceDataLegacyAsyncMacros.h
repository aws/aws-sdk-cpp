/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#define AssociateUserToPermissionGroupAsync(...)  SubmitAsync(&FinSpaceDataClient::AssociateUserToPermissionGroup, __VA_ARGS__)
#define AssociateUserToPermissionGroupCallable(REQUEST)  SubmitCallable(&FinSpaceDataClient::AssociateUserToPermissionGroup, REQUEST)

#define CreateChangesetAsync(...)  SubmitAsync(&FinSpaceDataClient::CreateChangeset, __VA_ARGS__)
#define CreateChangesetCallable(REQUEST)  SubmitCallable(&FinSpaceDataClient::CreateChangeset, REQUEST)

#define CreateDataViewAsync(...)  SubmitAsync(&FinSpaceDataClient::CreateDataView, __VA_ARGS__)
#define CreateDataViewCallable(REQUEST)  SubmitCallable(&FinSpaceDataClient::CreateDataView, REQUEST)

#define CreateDatasetAsync(...)  SubmitAsync(&FinSpaceDataClient::CreateDataset, __VA_ARGS__)
#define CreateDatasetCallable(REQUEST)  SubmitCallable(&FinSpaceDataClient::CreateDataset, REQUEST)

#define CreatePermissionGroupAsync(...)  SubmitAsync(&FinSpaceDataClient::CreatePermissionGroup, __VA_ARGS__)
#define CreatePermissionGroupCallable(REQUEST)  SubmitCallable(&FinSpaceDataClient::CreatePermissionGroup, REQUEST)

#define CreateUserAsync(...)  SubmitAsync(&FinSpaceDataClient::CreateUser, __VA_ARGS__)
#define CreateUserCallable(REQUEST)  SubmitCallable(&FinSpaceDataClient::CreateUser, REQUEST)

#define DeleteDatasetAsync(...)  SubmitAsync(&FinSpaceDataClient::DeleteDataset, __VA_ARGS__)
#define DeleteDatasetCallable(REQUEST)  SubmitCallable(&FinSpaceDataClient::DeleteDataset, REQUEST)

#define DeletePermissionGroupAsync(...)  SubmitAsync(&FinSpaceDataClient::DeletePermissionGroup, __VA_ARGS__)
#define DeletePermissionGroupCallable(REQUEST)  SubmitCallable(&FinSpaceDataClient::DeletePermissionGroup, REQUEST)

#define DisableUserAsync(...)  SubmitAsync(&FinSpaceDataClient::DisableUser, __VA_ARGS__)
#define DisableUserCallable(REQUEST)  SubmitCallable(&FinSpaceDataClient::DisableUser, REQUEST)

#define DisassociateUserFromPermissionGroupAsync(...)  SubmitAsync(&FinSpaceDataClient::DisassociateUserFromPermissionGroup, __VA_ARGS__)
#define DisassociateUserFromPermissionGroupCallable(REQUEST)  SubmitCallable(&FinSpaceDataClient::DisassociateUserFromPermissionGroup, REQUEST)

#define EnableUserAsync(...)  SubmitAsync(&FinSpaceDataClient::EnableUser, __VA_ARGS__)
#define EnableUserCallable(REQUEST)  SubmitCallable(&FinSpaceDataClient::EnableUser, REQUEST)

#define GetChangesetAsync(...)  SubmitAsync(&FinSpaceDataClient::GetChangeset, __VA_ARGS__)
#define GetChangesetCallable(REQUEST)  SubmitCallable(&FinSpaceDataClient::GetChangeset, REQUEST)

#define GetDataViewAsync(...)  SubmitAsync(&FinSpaceDataClient::GetDataView, __VA_ARGS__)
#define GetDataViewCallable(REQUEST)  SubmitCallable(&FinSpaceDataClient::GetDataView, REQUEST)

#define GetDatasetAsync(...)  SubmitAsync(&FinSpaceDataClient::GetDataset, __VA_ARGS__)
#define GetDatasetCallable(REQUEST)  SubmitCallable(&FinSpaceDataClient::GetDataset, REQUEST)

#define GetExternalDataViewAccessDetailsAsync(...)  SubmitAsync(&FinSpaceDataClient::GetExternalDataViewAccessDetails, __VA_ARGS__)
#define GetExternalDataViewAccessDetailsCallable(REQUEST)  SubmitCallable(&FinSpaceDataClient::GetExternalDataViewAccessDetails, REQUEST)

#define GetPermissionGroupAsync(...)  SubmitAsync(&FinSpaceDataClient::GetPermissionGroup, __VA_ARGS__)
#define GetPermissionGroupCallable(REQUEST)  SubmitCallable(&FinSpaceDataClient::GetPermissionGroup, REQUEST)

#define GetProgrammaticAccessCredentialsAsync(...)  SubmitAsync(&FinSpaceDataClient::GetProgrammaticAccessCredentials, __VA_ARGS__)
#define GetProgrammaticAccessCredentialsCallable(REQUEST)  SubmitCallable(&FinSpaceDataClient::GetProgrammaticAccessCredentials, REQUEST)

#define GetUserAsync(...)  SubmitAsync(&FinSpaceDataClient::GetUser, __VA_ARGS__)
#define GetUserCallable(REQUEST)  SubmitCallable(&FinSpaceDataClient::GetUser, REQUEST)

#define GetWorkingLocationAsync(...)  SubmitAsync(&FinSpaceDataClient::GetWorkingLocation, __VA_ARGS__)
#define GetWorkingLocationCallable(REQUEST)  SubmitCallable(&FinSpaceDataClient::GetWorkingLocation, REQUEST)

#define ListChangesetsAsync(...)  SubmitAsync(&FinSpaceDataClient::ListChangesets, __VA_ARGS__)
#define ListChangesetsCallable(REQUEST)  SubmitCallable(&FinSpaceDataClient::ListChangesets, REQUEST)

#define ListDataViewsAsync(...)  SubmitAsync(&FinSpaceDataClient::ListDataViews, __VA_ARGS__)
#define ListDataViewsCallable(REQUEST)  SubmitCallable(&FinSpaceDataClient::ListDataViews, REQUEST)

#define ListDatasetsAsync(...)  SubmitAsync(&FinSpaceDataClient::ListDatasets, __VA_ARGS__)
#define ListDatasetsCallable(REQUEST)  SubmitCallable(&FinSpaceDataClient::ListDatasets, REQUEST)

#define ListPermissionGroupsAsync(...)  SubmitAsync(&FinSpaceDataClient::ListPermissionGroups, __VA_ARGS__)
#define ListPermissionGroupsCallable(REQUEST)  SubmitCallable(&FinSpaceDataClient::ListPermissionGroups, REQUEST)

#define ListPermissionGroupsByUserAsync(...)  SubmitAsync(&FinSpaceDataClient::ListPermissionGroupsByUser, __VA_ARGS__)
#define ListPermissionGroupsByUserCallable(REQUEST)  SubmitCallable(&FinSpaceDataClient::ListPermissionGroupsByUser, REQUEST)

#define ListUsersAsync(...)  SubmitAsync(&FinSpaceDataClient::ListUsers, __VA_ARGS__)
#define ListUsersCallable(REQUEST)  SubmitCallable(&FinSpaceDataClient::ListUsers, REQUEST)

#define ListUsersByPermissionGroupAsync(...)  SubmitAsync(&FinSpaceDataClient::ListUsersByPermissionGroup, __VA_ARGS__)
#define ListUsersByPermissionGroupCallable(REQUEST)  SubmitCallable(&FinSpaceDataClient::ListUsersByPermissionGroup, REQUEST)

#define ResetUserPasswordAsync(...)  SubmitAsync(&FinSpaceDataClient::ResetUserPassword, __VA_ARGS__)
#define ResetUserPasswordCallable(REQUEST)  SubmitCallable(&FinSpaceDataClient::ResetUserPassword, REQUEST)

#define UpdateChangesetAsync(...)  SubmitAsync(&FinSpaceDataClient::UpdateChangeset, __VA_ARGS__)
#define UpdateChangesetCallable(REQUEST)  SubmitCallable(&FinSpaceDataClient::UpdateChangeset, REQUEST)

#define UpdateDatasetAsync(...)  SubmitAsync(&FinSpaceDataClient::UpdateDataset, __VA_ARGS__)
#define UpdateDatasetCallable(REQUEST)  SubmitCallable(&FinSpaceDataClient::UpdateDataset, REQUEST)

#define UpdatePermissionGroupAsync(...)  SubmitAsync(&FinSpaceDataClient::UpdatePermissionGroup, __VA_ARGS__)
#define UpdatePermissionGroupCallable(REQUEST)  SubmitCallable(&FinSpaceDataClient::UpdatePermissionGroup, REQUEST)

#define UpdateUserAsync(...)  SubmitAsync(&FinSpaceDataClient::UpdateUser, __VA_ARGS__)
#define UpdateUserCallable(REQUEST)  SubmitCallable(&FinSpaceDataClient::UpdateUser, REQUEST)

