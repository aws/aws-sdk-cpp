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
enum class CapabilityDeletePropagationPolicy { NOT_SET, RETAIN };

namespace CapabilityDeletePropagationPolicyMapper {
AWS_EKS_API CapabilityDeletePropagationPolicy GetCapabilityDeletePropagationPolicyForName(const Aws::String& name);

AWS_EKS_API Aws::String GetNameForCapabilityDeletePropagationPolicy(CapabilityDeletePropagationPolicy value);
}  // namespace CapabilityDeletePropagationPolicyMapper
}  // namespace Model
}  // namespace EKS
}  // namespace Aws
