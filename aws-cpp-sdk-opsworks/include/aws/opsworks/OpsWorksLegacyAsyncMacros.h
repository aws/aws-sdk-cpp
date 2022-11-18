/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#define AssignInstanceAsync(...)  SubmitAsync(&OpsWorksClient::AssignInstance, __VA_ARGS__)
#define AssignInstanceCallable(REQUEST)  SubmitCallable(&OpsWorksClient::AssignInstance, REQUEST)

#define AssignVolumeAsync(...)  SubmitAsync(&OpsWorksClient::AssignVolume, __VA_ARGS__)
#define AssignVolumeCallable(REQUEST)  SubmitCallable(&OpsWorksClient::AssignVolume, REQUEST)

#define AssociateElasticIpAsync(...)  SubmitAsync(&OpsWorksClient::AssociateElasticIp, __VA_ARGS__)
#define AssociateElasticIpCallable(REQUEST)  SubmitCallable(&OpsWorksClient::AssociateElasticIp, REQUEST)

#define AttachElasticLoadBalancerAsync(...)  SubmitAsync(&OpsWorksClient::AttachElasticLoadBalancer, __VA_ARGS__)
#define AttachElasticLoadBalancerCallable(REQUEST)  SubmitCallable(&OpsWorksClient::AttachElasticLoadBalancer, REQUEST)

#define CloneStackAsync(...)  SubmitAsync(&OpsWorksClient::CloneStack, __VA_ARGS__)
#define CloneStackCallable(REQUEST)  SubmitCallable(&OpsWorksClient::CloneStack, REQUEST)

#define CreateAppAsync(...)  SubmitAsync(&OpsWorksClient::CreateApp, __VA_ARGS__)
#define CreateAppCallable(REQUEST)  SubmitCallable(&OpsWorksClient::CreateApp, REQUEST)

#define CreateDeploymentAsync(...)  SubmitAsync(&OpsWorksClient::CreateDeployment, __VA_ARGS__)
#define CreateDeploymentCallable(REQUEST)  SubmitCallable(&OpsWorksClient::CreateDeployment, REQUEST)

#define CreateInstanceAsync(...)  SubmitAsync(&OpsWorksClient::CreateInstance, __VA_ARGS__)
#define CreateInstanceCallable(REQUEST)  SubmitCallable(&OpsWorksClient::CreateInstance, REQUEST)

#define CreateLayerAsync(...)  SubmitAsync(&OpsWorksClient::CreateLayer, __VA_ARGS__)
#define CreateLayerCallable(REQUEST)  SubmitCallable(&OpsWorksClient::CreateLayer, REQUEST)

#define CreateStackAsync(...)  SubmitAsync(&OpsWorksClient::CreateStack, __VA_ARGS__)
#define CreateStackCallable(REQUEST)  SubmitCallable(&OpsWorksClient::CreateStack, REQUEST)

#define CreateUserProfileAsync(...)  SubmitAsync(&OpsWorksClient::CreateUserProfile, __VA_ARGS__)
#define CreateUserProfileCallable(REQUEST)  SubmitCallable(&OpsWorksClient::CreateUserProfile, REQUEST)

#define DeleteAppAsync(...)  SubmitAsync(&OpsWorksClient::DeleteApp, __VA_ARGS__)
#define DeleteAppCallable(REQUEST)  SubmitCallable(&OpsWorksClient::DeleteApp, REQUEST)

#define DeleteInstanceAsync(...)  SubmitAsync(&OpsWorksClient::DeleteInstance, __VA_ARGS__)
#define DeleteInstanceCallable(REQUEST)  SubmitCallable(&OpsWorksClient::DeleteInstance, REQUEST)

#define DeleteLayerAsync(...)  SubmitAsync(&OpsWorksClient::DeleteLayer, __VA_ARGS__)
#define DeleteLayerCallable(REQUEST)  SubmitCallable(&OpsWorksClient::DeleteLayer, REQUEST)

#define DeleteStackAsync(...)  SubmitAsync(&OpsWorksClient::DeleteStack, __VA_ARGS__)
#define DeleteStackCallable(REQUEST)  SubmitCallable(&OpsWorksClient::DeleteStack, REQUEST)

#define DeleteUserProfileAsync(...)  SubmitAsync(&OpsWorksClient::DeleteUserProfile, __VA_ARGS__)
#define DeleteUserProfileCallable(REQUEST)  SubmitCallable(&OpsWorksClient::DeleteUserProfile, REQUEST)

#define DeregisterEcsClusterAsync(...)  SubmitAsync(&OpsWorksClient::DeregisterEcsCluster, __VA_ARGS__)
#define DeregisterEcsClusterCallable(REQUEST)  SubmitCallable(&OpsWorksClient::DeregisterEcsCluster, REQUEST)

#define DeregisterElasticIpAsync(...)  SubmitAsync(&OpsWorksClient::DeregisterElasticIp, __VA_ARGS__)
#define DeregisterElasticIpCallable(REQUEST)  SubmitCallable(&OpsWorksClient::DeregisterElasticIp, REQUEST)

#define DeregisterInstanceAsync(...)  SubmitAsync(&OpsWorksClient::DeregisterInstance, __VA_ARGS__)
#define DeregisterInstanceCallable(REQUEST)  SubmitCallable(&OpsWorksClient::DeregisterInstance, REQUEST)

#define DeregisterRdsDbInstanceAsync(...)  SubmitAsync(&OpsWorksClient::DeregisterRdsDbInstance, __VA_ARGS__)
#define DeregisterRdsDbInstanceCallable(REQUEST)  SubmitCallable(&OpsWorksClient::DeregisterRdsDbInstance, REQUEST)

#define DeregisterVolumeAsync(...)  SubmitAsync(&OpsWorksClient::DeregisterVolume, __VA_ARGS__)
#define DeregisterVolumeCallable(REQUEST)  SubmitCallable(&OpsWorksClient::DeregisterVolume, REQUEST)

#define DescribeAgentVersionsAsync(...)  SubmitAsync(&OpsWorksClient::DescribeAgentVersions, __VA_ARGS__)
#define DescribeAgentVersionsCallable(REQUEST)  SubmitCallable(&OpsWorksClient::DescribeAgentVersions, REQUEST)

#define DescribeAppsAsync(...)  SubmitAsync(&OpsWorksClient::DescribeApps, __VA_ARGS__)
#define DescribeAppsCallable(REQUEST)  SubmitCallable(&OpsWorksClient::DescribeApps, REQUEST)

#define DescribeCommandsAsync(...)  SubmitAsync(&OpsWorksClient::DescribeCommands, __VA_ARGS__)
#define DescribeCommandsCallable(REQUEST)  SubmitCallable(&OpsWorksClient::DescribeCommands, REQUEST)

#define DescribeDeploymentsAsync(...)  SubmitAsync(&OpsWorksClient::DescribeDeployments, __VA_ARGS__)
#define DescribeDeploymentsCallable(REQUEST)  SubmitCallable(&OpsWorksClient::DescribeDeployments, REQUEST)

#define DescribeEcsClustersAsync(...)  SubmitAsync(&OpsWorksClient::DescribeEcsClusters, __VA_ARGS__)
#define DescribeEcsClustersCallable(REQUEST)  SubmitCallable(&OpsWorksClient::DescribeEcsClusters, REQUEST)

#define DescribeElasticIpsAsync(...)  SubmitAsync(&OpsWorksClient::DescribeElasticIps, __VA_ARGS__)
#define DescribeElasticIpsCallable(REQUEST)  SubmitCallable(&OpsWorksClient::DescribeElasticIps, REQUEST)

#define DescribeElasticLoadBalancersAsync(...)  SubmitAsync(&OpsWorksClient::DescribeElasticLoadBalancers, __VA_ARGS__)
#define DescribeElasticLoadBalancersCallable(REQUEST)  SubmitCallable(&OpsWorksClient::DescribeElasticLoadBalancers, REQUEST)

#define DescribeInstancesAsync(...)  SubmitAsync(&OpsWorksClient::DescribeInstances, __VA_ARGS__)
#define DescribeInstancesCallable(REQUEST)  SubmitCallable(&OpsWorksClient::DescribeInstances, REQUEST)

#define DescribeLayersAsync(...)  SubmitAsync(&OpsWorksClient::DescribeLayers, __VA_ARGS__)
#define DescribeLayersCallable(REQUEST)  SubmitCallable(&OpsWorksClient::DescribeLayers, REQUEST)

#define DescribeLoadBasedAutoScalingAsync(...)  SubmitAsync(&OpsWorksClient::DescribeLoadBasedAutoScaling, __VA_ARGS__)
#define DescribeLoadBasedAutoScalingCallable(REQUEST)  SubmitCallable(&OpsWorksClient::DescribeLoadBasedAutoScaling, REQUEST)



#define DescribePermissionsAsync(...)  SubmitAsync(&OpsWorksClient::DescribePermissions, __VA_ARGS__)
#define DescribePermissionsCallable(REQUEST)  SubmitCallable(&OpsWorksClient::DescribePermissions, REQUEST)

#define DescribeRaidArraysAsync(...)  SubmitAsync(&OpsWorksClient::DescribeRaidArrays, __VA_ARGS__)
#define DescribeRaidArraysCallable(REQUEST)  SubmitCallable(&OpsWorksClient::DescribeRaidArrays, REQUEST)

#define DescribeRdsDbInstancesAsync(...)  SubmitAsync(&OpsWorksClient::DescribeRdsDbInstances, __VA_ARGS__)
#define DescribeRdsDbInstancesCallable(REQUEST)  SubmitCallable(&OpsWorksClient::DescribeRdsDbInstances, REQUEST)

#define DescribeServiceErrorsAsync(...)  SubmitAsync(&OpsWorksClient::DescribeServiceErrors, __VA_ARGS__)
#define DescribeServiceErrorsCallable(REQUEST)  SubmitCallable(&OpsWorksClient::DescribeServiceErrors, REQUEST)

#define DescribeStackProvisioningParametersAsync(...)  SubmitAsync(&OpsWorksClient::DescribeStackProvisioningParameters, __VA_ARGS__)
#define DescribeStackProvisioningParametersCallable(REQUEST)  SubmitCallable(&OpsWorksClient::DescribeStackProvisioningParameters, REQUEST)

#define DescribeStackSummaryAsync(...)  SubmitAsync(&OpsWorksClient::DescribeStackSummary, __VA_ARGS__)
#define DescribeStackSummaryCallable(REQUEST)  SubmitCallable(&OpsWorksClient::DescribeStackSummary, REQUEST)

#define DescribeStacksAsync(...)  SubmitAsync(&OpsWorksClient::DescribeStacks, __VA_ARGS__)
#define DescribeStacksCallable(REQUEST)  SubmitCallable(&OpsWorksClient::DescribeStacks, REQUEST)

#define DescribeTimeBasedAutoScalingAsync(...)  SubmitAsync(&OpsWorksClient::DescribeTimeBasedAutoScaling, __VA_ARGS__)
#define DescribeTimeBasedAutoScalingCallable(REQUEST)  SubmitCallable(&OpsWorksClient::DescribeTimeBasedAutoScaling, REQUEST)

#define DescribeUserProfilesAsync(...)  SubmitAsync(&OpsWorksClient::DescribeUserProfiles, __VA_ARGS__)
#define DescribeUserProfilesCallable(REQUEST)  SubmitCallable(&OpsWorksClient::DescribeUserProfiles, REQUEST)

#define DescribeVolumesAsync(...)  SubmitAsync(&OpsWorksClient::DescribeVolumes, __VA_ARGS__)
#define DescribeVolumesCallable(REQUEST)  SubmitCallable(&OpsWorksClient::DescribeVolumes, REQUEST)

#define DetachElasticLoadBalancerAsync(...)  SubmitAsync(&OpsWorksClient::DetachElasticLoadBalancer, __VA_ARGS__)
#define DetachElasticLoadBalancerCallable(REQUEST)  SubmitCallable(&OpsWorksClient::DetachElasticLoadBalancer, REQUEST)

#define DisassociateElasticIpAsync(...)  SubmitAsync(&OpsWorksClient::DisassociateElasticIp, __VA_ARGS__)
#define DisassociateElasticIpCallable(REQUEST)  SubmitCallable(&OpsWorksClient::DisassociateElasticIp, REQUEST)

#define GetHostnameSuggestionAsync(...)  SubmitAsync(&OpsWorksClient::GetHostnameSuggestion, __VA_ARGS__)
#define GetHostnameSuggestionCallable(REQUEST)  SubmitCallable(&OpsWorksClient::GetHostnameSuggestion, REQUEST)

#define GrantAccessAsync(...)  SubmitAsync(&OpsWorksClient::GrantAccess, __VA_ARGS__)
#define GrantAccessCallable(REQUEST)  SubmitCallable(&OpsWorksClient::GrantAccess, REQUEST)

#define ListTagsAsync(...)  SubmitAsync(&OpsWorksClient::ListTags, __VA_ARGS__)
#define ListTagsCallable(REQUEST)  SubmitCallable(&OpsWorksClient::ListTags, REQUEST)

#define RebootInstanceAsync(...)  SubmitAsync(&OpsWorksClient::RebootInstance, __VA_ARGS__)
#define RebootInstanceCallable(REQUEST)  SubmitCallable(&OpsWorksClient::RebootInstance, REQUEST)

#define RegisterEcsClusterAsync(...)  SubmitAsync(&OpsWorksClient::RegisterEcsCluster, __VA_ARGS__)
#define RegisterEcsClusterCallable(REQUEST)  SubmitCallable(&OpsWorksClient::RegisterEcsCluster, REQUEST)

#define RegisterElasticIpAsync(...)  SubmitAsync(&OpsWorksClient::RegisterElasticIp, __VA_ARGS__)
#define RegisterElasticIpCallable(REQUEST)  SubmitCallable(&OpsWorksClient::RegisterElasticIp, REQUEST)

#define RegisterInstanceAsync(...)  SubmitAsync(&OpsWorksClient::RegisterInstance, __VA_ARGS__)
#define RegisterInstanceCallable(REQUEST)  SubmitCallable(&OpsWorksClient::RegisterInstance, REQUEST)

#define RegisterRdsDbInstanceAsync(...)  SubmitAsync(&OpsWorksClient::RegisterRdsDbInstance, __VA_ARGS__)
#define RegisterRdsDbInstanceCallable(REQUEST)  SubmitCallable(&OpsWorksClient::RegisterRdsDbInstance, REQUEST)

#define RegisterVolumeAsync(...)  SubmitAsync(&OpsWorksClient::RegisterVolume, __VA_ARGS__)
#define RegisterVolumeCallable(REQUEST)  SubmitCallable(&OpsWorksClient::RegisterVolume, REQUEST)

#define SetLoadBasedAutoScalingAsync(...)  SubmitAsync(&OpsWorksClient::SetLoadBasedAutoScaling, __VA_ARGS__)
#define SetLoadBasedAutoScalingCallable(REQUEST)  SubmitCallable(&OpsWorksClient::SetLoadBasedAutoScaling, REQUEST)

#define SetPermissionAsync(...)  SubmitAsync(&OpsWorksClient::SetPermission, __VA_ARGS__)
#define SetPermissionCallable(REQUEST)  SubmitCallable(&OpsWorksClient::SetPermission, REQUEST)

#define SetTimeBasedAutoScalingAsync(...)  SubmitAsync(&OpsWorksClient::SetTimeBasedAutoScaling, __VA_ARGS__)
#define SetTimeBasedAutoScalingCallable(REQUEST)  SubmitCallable(&OpsWorksClient::SetTimeBasedAutoScaling, REQUEST)

#define StartInstanceAsync(...)  SubmitAsync(&OpsWorksClient::StartInstance, __VA_ARGS__)
#define StartInstanceCallable(REQUEST)  SubmitCallable(&OpsWorksClient::StartInstance, REQUEST)

#define StartStackAsync(...)  SubmitAsync(&OpsWorksClient::StartStack, __VA_ARGS__)
#define StartStackCallable(REQUEST)  SubmitCallable(&OpsWorksClient::StartStack, REQUEST)

#define StopInstanceAsync(...)  SubmitAsync(&OpsWorksClient::StopInstance, __VA_ARGS__)
#define StopInstanceCallable(REQUEST)  SubmitCallable(&OpsWorksClient::StopInstance, REQUEST)

#define StopStackAsync(...)  SubmitAsync(&OpsWorksClient::StopStack, __VA_ARGS__)
#define StopStackCallable(REQUEST)  SubmitCallable(&OpsWorksClient::StopStack, REQUEST)

#define TagResourceAsync(...)  SubmitAsync(&OpsWorksClient::TagResource, __VA_ARGS__)
#define TagResourceCallable(REQUEST)  SubmitCallable(&OpsWorksClient::TagResource, REQUEST)

#define UnassignInstanceAsync(...)  SubmitAsync(&OpsWorksClient::UnassignInstance, __VA_ARGS__)
#define UnassignInstanceCallable(REQUEST)  SubmitCallable(&OpsWorksClient::UnassignInstance, REQUEST)

#define UnassignVolumeAsync(...)  SubmitAsync(&OpsWorksClient::UnassignVolume, __VA_ARGS__)
#define UnassignVolumeCallable(REQUEST)  SubmitCallable(&OpsWorksClient::UnassignVolume, REQUEST)

#define UntagResourceAsync(...)  SubmitAsync(&OpsWorksClient::UntagResource, __VA_ARGS__)
#define UntagResourceCallable(REQUEST)  SubmitCallable(&OpsWorksClient::UntagResource, REQUEST)

#define UpdateAppAsync(...)  SubmitAsync(&OpsWorksClient::UpdateApp, __VA_ARGS__)
#define UpdateAppCallable(REQUEST)  SubmitCallable(&OpsWorksClient::UpdateApp, REQUEST)

#define UpdateElasticIpAsync(...)  SubmitAsync(&OpsWorksClient::UpdateElasticIp, __VA_ARGS__)
#define UpdateElasticIpCallable(REQUEST)  SubmitCallable(&OpsWorksClient::UpdateElasticIp, REQUEST)

#define UpdateInstanceAsync(...)  SubmitAsync(&OpsWorksClient::UpdateInstance, __VA_ARGS__)
#define UpdateInstanceCallable(REQUEST)  SubmitCallable(&OpsWorksClient::UpdateInstance, REQUEST)

#define UpdateLayerAsync(...)  SubmitAsync(&OpsWorksClient::UpdateLayer, __VA_ARGS__)
#define UpdateLayerCallable(REQUEST)  SubmitCallable(&OpsWorksClient::UpdateLayer, REQUEST)

#define UpdateMyUserProfileAsync(...)  SubmitAsync(&OpsWorksClient::UpdateMyUserProfile, __VA_ARGS__)
#define UpdateMyUserProfileCallable(REQUEST)  SubmitCallable(&OpsWorksClient::UpdateMyUserProfile, REQUEST)

#define UpdateRdsDbInstanceAsync(...)  SubmitAsync(&OpsWorksClient::UpdateRdsDbInstance, __VA_ARGS__)
#define UpdateRdsDbInstanceCallable(REQUEST)  SubmitCallable(&OpsWorksClient::UpdateRdsDbInstance, REQUEST)

#define UpdateStackAsync(...)  SubmitAsync(&OpsWorksClient::UpdateStack, __VA_ARGS__)
#define UpdateStackCallable(REQUEST)  SubmitCallable(&OpsWorksClient::UpdateStack, REQUEST)

#define UpdateUserProfileAsync(...)  SubmitAsync(&OpsWorksClient::UpdateUserProfile, __VA_ARGS__)
#define UpdateUserProfileCallable(REQUEST)  SubmitCallable(&OpsWorksClient::UpdateUserProfile, REQUEST)

#define UpdateVolumeAsync(...)  SubmitAsync(&OpsWorksClient::UpdateVolume, __VA_ARGS__)
#define UpdateVolumeCallable(REQUEST)  SubmitCallable(&OpsWorksClient::UpdateVolume, REQUEST)

