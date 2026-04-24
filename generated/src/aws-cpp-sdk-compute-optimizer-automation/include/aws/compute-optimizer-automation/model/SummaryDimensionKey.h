/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/compute-optimizer-automation/ComputeOptimizerAutomation_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws {
namespace ComputeOptimizerAutomation {
namespace Model {
enum class SummaryDimensionKey { NOT_SET, EventStatus };

namespace SummaryDimensionKeyMapper {
AWS_COMPUTEOPTIMIZERAUTOMATION_API SummaryDimensionKey GetSummaryDimensionKeyForName(const Aws::String& name);

AWS_COMPUTEOPTIMIZERAUTOMATION_API Aws::String GetNameForSummaryDimensionKey(SummaryDimensionKey value);
}  // namespace SummaryDimensionKeyMapper
}  // namespace Model
}  // namespace ComputeOptimizerAutomation
}  // namespace Aws
