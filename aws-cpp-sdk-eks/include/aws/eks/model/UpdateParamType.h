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
    MaxSize,
    MinSize,
    ReleaseVersion,
    PublicAccessCidrs
  };

namespace UpdateParamTypeMapper
{
AWS_EKS_API UpdateParamType GetUpdateParamTypeForName(const Aws::String& name);

AWS_EKS_API Aws::String GetNameForUpdateParamType(UpdateParamType value);
} // namespace UpdateParamTypeMapper
} // namespace Model
} // namespace EKS
} // namespace Aws
