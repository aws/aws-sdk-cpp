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
enum class ProvisionedControlPlaneTier { NOT_SET, standard, tier_xl, tier_2xl, tier_4xl };

namespace ProvisionedControlPlaneTierMapper {
AWS_EKS_API ProvisionedControlPlaneTier GetProvisionedControlPlaneTierForName(const Aws::String& name);

AWS_EKS_API Aws::String GetNameForProvisionedControlPlaneTier(ProvisionedControlPlaneTier value);
}  // namespace ProvisionedControlPlaneTierMapper
}  // namespace Model
}  // namespace EKS
}  // namespace Aws
