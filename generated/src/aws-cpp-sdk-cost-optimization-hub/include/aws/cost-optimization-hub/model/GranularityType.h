/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/cost-optimization-hub/CostOptimizationHub_EXPORTS.h>

namespace Aws {
namespace CostOptimizationHub {
namespace Model {
enum class GranularityType { NOT_SET, Daily, Monthly };

namespace GranularityTypeMapper {
AWS_COSTOPTIMIZATIONHUB_API GranularityType GetGranularityTypeForName(const Aws::String& name);

AWS_COSTOPTIMIZATIONHUB_API Aws::String GetNameForGranularityType(GranularityType value);
}  // namespace GranularityTypeMapper
}  // namespace Model
}  // namespace CostOptimizationHub
}  // namespace Aws
