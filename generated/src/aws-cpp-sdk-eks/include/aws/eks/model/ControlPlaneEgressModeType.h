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
enum class ControlPlaneEgressModeType { NOT_SET, AWS_MANAGED, CUSTOMER_ROUTED, CUSTOMER_ISOLATED };

namespace ControlPlaneEgressModeTypeMapper {
AWS_EKS_API ControlPlaneEgressModeType GetControlPlaneEgressModeTypeForName(const Aws::String& name);

AWS_EKS_API Aws::String GetNameForControlPlaneEgressModeType(ControlPlaneEgressModeType value);
}  // namespace ControlPlaneEgressModeTypeMapper
}  // namespace Model
}  // namespace EKS
}  // namespace Aws
