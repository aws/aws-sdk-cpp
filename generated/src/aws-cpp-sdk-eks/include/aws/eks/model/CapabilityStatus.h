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
enum class CapabilityStatus { NOT_SET, CREATING, CREATE_FAILED, UPDATING, DELETING, DELETE_FAILED, ACTIVE, DEGRADED };

namespace CapabilityStatusMapper {
AWS_EKS_API CapabilityStatus GetCapabilityStatusForName(const Aws::String& name);

AWS_EKS_API Aws::String GetNameForCapabilityStatus(CapabilityStatus value);
}  // namespace CapabilityStatusMapper
}  // namespace Model
}  // namespace EKS
}  // namespace Aws
