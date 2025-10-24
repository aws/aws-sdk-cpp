/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/eks/EKS_EXPORTS.h>

namespace Aws {
namespace EKS {
namespace Model {
enum class ClusterStatus { NOT_SET, CREATING, ACTIVE, DELETING, FAILED, UPDATING, PENDING };

namespace ClusterStatusMapper {
AWS_EKS_API ClusterStatus GetClusterStatusForName(const Aws::String& name);

AWS_EKS_API Aws::String GetNameForClusterStatus(ClusterStatus value);
}  // namespace ClusterStatusMapper
}  // namespace Model
}  // namespace EKS
}  // namespace Aws
