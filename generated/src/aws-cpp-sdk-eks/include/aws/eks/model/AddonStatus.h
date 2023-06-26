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
  enum class AddonStatus
  {
    NOT_SET,
    CREATING,
    ACTIVE,
    CREATE_FAILED,
    UPDATING,
    DELETING,
    DELETE_FAILED,
    DEGRADED,
    UPDATE_FAILED
  };

namespace AddonStatusMapper
{
AWS_EKS_API AddonStatus GetAddonStatusForName(const Aws::String& name);

AWS_EKS_API Aws::String GetNameForAddonStatus(AddonStatus value);
} // namespace AddonStatusMapper
} // namespace Model
} // namespace EKS
} // namespace Aws
