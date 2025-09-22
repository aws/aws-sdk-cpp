/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/eks/EKS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace EKS
{
namespace Model
{
  enum class UpdateParamType
  {
    NOT_SET,
    Version,
    PlatformVersion,
    EndpointPrivateAccess,
    EndpointPublicAccess,
    ClusterLogging,
    DesiredSize,
    LabelsToAdd,
    LabelsToRemove,
    TaintsToAdd,
    TaintsToRemove,
    MaxSize,
    MinSize,
    ReleaseVersion,
    PublicAccessCidrs,
    LaunchTemplateName,
    LaunchTemplateVersion,
    IdentityProviderConfig,
    EncryptionConfig,
    AddonVersion,
    ServiceAccountRoleArn,
    ResolveConflicts,
    MaxUnavailable,
    MaxUnavailablePercentage,
    NodeRepairEnabled,
    UpdateStrategy,
    ConfigurationValues,
    SecurityGroups,
    Subnets,
    AuthenticationMode,
    PodIdentityAssociations,
    UpgradePolicy,
    ZonalShiftConfig,
    ComputeConfig,
    StorageConfig,
    KubernetesNetworkConfig,
    RemoteNetworkConfig,
    DeletionProtection,
    NodeRepairConfig
  };

namespace UpdateParamTypeMapper
{
AWS_EKS_API UpdateParamType GetUpdateParamTypeForName(const Aws::String& name);

AWS_EKS_API Aws::String GetNameForUpdateParamType(UpdateParamType value);
} // namespace UpdateParamTypeMapper
} // namespace Model
} // namespace EKS
} // namespace Aws
