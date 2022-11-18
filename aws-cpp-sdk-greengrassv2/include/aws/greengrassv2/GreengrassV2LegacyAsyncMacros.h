/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#define AssociateServiceRoleToAccountAsync(...)  SubmitAsync(&GreengrassV2Client::AssociateServiceRoleToAccount, __VA_ARGS__)
#define AssociateServiceRoleToAccountCallable(REQUEST)  SubmitCallable(&GreengrassV2Client::AssociateServiceRoleToAccount, REQUEST)

#define BatchAssociateClientDeviceWithCoreDeviceAsync(...)  SubmitAsync(&GreengrassV2Client::BatchAssociateClientDeviceWithCoreDevice, __VA_ARGS__)
#define BatchAssociateClientDeviceWithCoreDeviceCallable(REQUEST)  SubmitCallable(&GreengrassV2Client::BatchAssociateClientDeviceWithCoreDevice, REQUEST)

#define BatchDisassociateClientDeviceFromCoreDeviceAsync(...)  SubmitAsync(&GreengrassV2Client::BatchDisassociateClientDeviceFromCoreDevice, __VA_ARGS__)
#define BatchDisassociateClientDeviceFromCoreDeviceCallable(REQUEST)  SubmitCallable(&GreengrassV2Client::BatchDisassociateClientDeviceFromCoreDevice, REQUEST)

#define CancelDeploymentAsync(...)  SubmitAsync(&GreengrassV2Client::CancelDeployment, __VA_ARGS__)
#define CancelDeploymentCallable(REQUEST)  SubmitCallable(&GreengrassV2Client::CancelDeployment, REQUEST)

#define CreateComponentVersionAsync(...)  SubmitAsync(&GreengrassV2Client::CreateComponentVersion, __VA_ARGS__)
#define CreateComponentVersionCallable(REQUEST)  SubmitCallable(&GreengrassV2Client::CreateComponentVersion, REQUEST)

#define CreateDeploymentAsync(...)  SubmitAsync(&GreengrassV2Client::CreateDeployment, __VA_ARGS__)
#define CreateDeploymentCallable(REQUEST)  SubmitCallable(&GreengrassV2Client::CreateDeployment, REQUEST)

#define DeleteComponentAsync(...)  SubmitAsync(&GreengrassV2Client::DeleteComponent, __VA_ARGS__)
#define DeleteComponentCallable(REQUEST)  SubmitCallable(&GreengrassV2Client::DeleteComponent, REQUEST)

#define DeleteCoreDeviceAsync(...)  SubmitAsync(&GreengrassV2Client::DeleteCoreDevice, __VA_ARGS__)
#define DeleteCoreDeviceCallable(REQUEST)  SubmitCallable(&GreengrassV2Client::DeleteCoreDevice, REQUEST)

#define DeleteDeploymentAsync(...)  SubmitAsync(&GreengrassV2Client::DeleteDeployment, __VA_ARGS__)
#define DeleteDeploymentCallable(REQUEST)  SubmitCallable(&GreengrassV2Client::DeleteDeployment, REQUEST)

#define DescribeComponentAsync(...)  SubmitAsync(&GreengrassV2Client::DescribeComponent, __VA_ARGS__)
#define DescribeComponentCallable(REQUEST)  SubmitCallable(&GreengrassV2Client::DescribeComponent, REQUEST)

#define DisassociateServiceRoleFromAccountAsync(...)  SubmitAsync(&GreengrassV2Client::DisassociateServiceRoleFromAccount, __VA_ARGS__)
#define DisassociateServiceRoleFromAccountCallable(REQUEST)  SubmitCallable(&GreengrassV2Client::DisassociateServiceRoleFromAccount, REQUEST)

#define GetComponentAsync(...)  SubmitAsync(&GreengrassV2Client::GetComponent, __VA_ARGS__)
#define GetComponentCallable(REQUEST)  SubmitCallable(&GreengrassV2Client::GetComponent, REQUEST)

#define GetComponentVersionArtifactAsync(...)  SubmitAsync(&GreengrassV2Client::GetComponentVersionArtifact, __VA_ARGS__)
#define GetComponentVersionArtifactCallable(REQUEST)  SubmitCallable(&GreengrassV2Client::GetComponentVersionArtifact, REQUEST)

#define GetConnectivityInfoAsync(...)  SubmitAsync(&GreengrassV2Client::GetConnectivityInfo, __VA_ARGS__)
#define GetConnectivityInfoCallable(REQUEST)  SubmitCallable(&GreengrassV2Client::GetConnectivityInfo, REQUEST)

#define GetCoreDeviceAsync(...)  SubmitAsync(&GreengrassV2Client::GetCoreDevice, __VA_ARGS__)
#define GetCoreDeviceCallable(REQUEST)  SubmitCallable(&GreengrassV2Client::GetCoreDevice, REQUEST)

#define GetDeploymentAsync(...)  SubmitAsync(&GreengrassV2Client::GetDeployment, __VA_ARGS__)
#define GetDeploymentCallable(REQUEST)  SubmitCallable(&GreengrassV2Client::GetDeployment, REQUEST)

#define GetServiceRoleForAccountAsync(...)  SubmitAsync(&GreengrassV2Client::GetServiceRoleForAccount, __VA_ARGS__)
#define GetServiceRoleForAccountCallable(REQUEST)  SubmitCallable(&GreengrassV2Client::GetServiceRoleForAccount, REQUEST)

#define ListClientDevicesAssociatedWithCoreDeviceAsync(...)  SubmitAsync(&GreengrassV2Client::ListClientDevicesAssociatedWithCoreDevice, __VA_ARGS__)
#define ListClientDevicesAssociatedWithCoreDeviceCallable(REQUEST)  SubmitCallable(&GreengrassV2Client::ListClientDevicesAssociatedWithCoreDevice, REQUEST)

#define ListComponentVersionsAsync(...)  SubmitAsync(&GreengrassV2Client::ListComponentVersions, __VA_ARGS__)
#define ListComponentVersionsCallable(REQUEST)  SubmitCallable(&GreengrassV2Client::ListComponentVersions, REQUEST)

#define ListComponentsAsync(...)  SubmitAsync(&GreengrassV2Client::ListComponents, __VA_ARGS__)
#define ListComponentsCallable(REQUEST)  SubmitCallable(&GreengrassV2Client::ListComponents, REQUEST)

#define ListCoreDevicesAsync(...)  SubmitAsync(&GreengrassV2Client::ListCoreDevices, __VA_ARGS__)
#define ListCoreDevicesCallable(REQUEST)  SubmitCallable(&GreengrassV2Client::ListCoreDevices, REQUEST)

#define ListDeploymentsAsync(...)  SubmitAsync(&GreengrassV2Client::ListDeployments, __VA_ARGS__)
#define ListDeploymentsCallable(REQUEST)  SubmitCallable(&GreengrassV2Client::ListDeployments, REQUEST)

#define ListEffectiveDeploymentsAsync(...)  SubmitAsync(&GreengrassV2Client::ListEffectiveDeployments, __VA_ARGS__)
#define ListEffectiveDeploymentsCallable(REQUEST)  SubmitCallable(&GreengrassV2Client::ListEffectiveDeployments, REQUEST)

#define ListInstalledComponentsAsync(...)  SubmitAsync(&GreengrassV2Client::ListInstalledComponents, __VA_ARGS__)
#define ListInstalledComponentsCallable(REQUEST)  SubmitCallable(&GreengrassV2Client::ListInstalledComponents, REQUEST)

#define ListTagsForResourceAsync(...)  SubmitAsync(&GreengrassV2Client::ListTagsForResource, __VA_ARGS__)
#define ListTagsForResourceCallable(REQUEST)  SubmitCallable(&GreengrassV2Client::ListTagsForResource, REQUEST)

#define ResolveComponentCandidatesAsync(...)  SubmitAsync(&GreengrassV2Client::ResolveComponentCandidates, __VA_ARGS__)
#define ResolveComponentCandidatesCallable(REQUEST)  SubmitCallable(&GreengrassV2Client::ResolveComponentCandidates, REQUEST)

#define TagResourceAsync(...)  SubmitAsync(&GreengrassV2Client::TagResource, __VA_ARGS__)
#define TagResourceCallable(REQUEST)  SubmitCallable(&GreengrassV2Client::TagResource, REQUEST)

#define UntagResourceAsync(...)  SubmitAsync(&GreengrassV2Client::UntagResource, __VA_ARGS__)
#define UntagResourceCallable(REQUEST)  SubmitCallable(&GreengrassV2Client::UntagResource, REQUEST)

#define UpdateConnectivityInfoAsync(...)  SubmitAsync(&GreengrassV2Client::UpdateConnectivityInfo, __VA_ARGS__)
#define UpdateConnectivityInfoCallable(REQUEST)  SubmitCallable(&GreengrassV2Client::UpdateConnectivityInfo, REQUEST)

