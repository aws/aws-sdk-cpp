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
enum class DataQualityEvaluationConfigLevel { NOT_SET, CATALOG, DATABASE, TABLE };

namespace DataQualityEvaluationConfigLevelMapper {
AWS_GLUE_API DataQualityEvaluationConfigLevel GetDataQualityEvaluationConfigLevelForName(const Aws::String& name);

AWS_GLUE_API Aws::String GetNameForDataQualityEvaluationConfigLevel(DataQualityEvaluationConfigLevel value);
}  // namespace DataQualityEvaluationConfigLevelMapper
}  // namespace Model
}  // namespace Glue
}  // namespace Aws
