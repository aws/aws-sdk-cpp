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
  enum class NodegroupStatus
  {
    NOT_SET,
    CREATING,
    ACTIVE,
    UPDATING,
    DELETING,
    CREATE_FAILED,
    DELETE_FAILED,
    DEGRADED
  };

namespace NodegroupStatusMapper
{
AWS_EKS_API NodegroupStatus GetNodegroupStatusForName(const Aws::String& name);

AWS_EKS_API Aws::String GetNameForNodegroupStatus(NodegroupStatus value);
} // namespace NodegroupStatusMapper
} // namespace Model
} // namespace EKS
} // namespace Aws
