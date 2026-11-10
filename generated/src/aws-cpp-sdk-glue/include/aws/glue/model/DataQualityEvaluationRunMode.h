/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/glue/Glue_EXPORTS.h>

namespace Aws {
namespace Glue {
namespace Model {
enum class DataQualityEvaluationRunMode { NOT_SET, ON_DEMAND, EVALUATION_CONFIG };

namespace DataQualityEvaluationRunModeMapper {
AWS_GLUE_API DataQualityEvaluationRunMode GetDataQualityEvaluationRunModeForName(const Aws::String& name);

AWS_GLUE_API Aws::String GetNameForDataQualityEvaluationRunMode(DataQualityEvaluationRunMode value);
}  // namespace DataQualityEvaluationRunModeMapper
}  // namespace Model
}  // namespace Glue
}  // namespace Aws
