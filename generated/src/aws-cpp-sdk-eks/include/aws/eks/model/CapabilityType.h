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
enum class CapabilityType { NOT_SET, ACK, KRO, ARGOCD };

namespace CapabilityTypeMapper {
AWS_EKS_API CapabilityType GetCapabilityTypeForName(const Aws::String& name);

AWS_EKS_API Aws::String GetNameForCapabilityType(CapabilityType value);
}  // namespace CapabilityTypeMapper
}  // namespace Model
}  // namespace EKS
}  // namespace Aws
