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
  enum class ClusterVersionStatus
  {
    NOT_SET,
    unsupported,
    standard_support,
    extended_support
  };

namespace ClusterVersionStatusMapper
{
AWS_EKS_API ClusterVersionStatus GetClusterVersionStatusForName(const Aws::String& name);

AWS_EKS_API Aws::String GetNameForClusterVersionStatus(ClusterVersionStatus value);
} // namespace ClusterVersionStatusMapper
} // namespace Model
} // namespace EKS
} // namespace Aws
