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
enum class DataQualityEvaluationConfigTrigger { NOT_SET, ONCE, SCHEDULE, METADATA_CHANGE };

namespace DataQualityEvaluationConfigTriggerMapper {
AWS_GLUE_API DataQualityEvaluationConfigTrigger GetDataQualityEvaluationConfigTriggerForName(const Aws::String& name);

AWS_GLUE_API Aws::String GetNameForDataQualityEvaluationConfigTrigger(DataQualityEvaluationConfigTrigger value);
}  // namespace DataQualityEvaluationConfigTriggerMapper
}  // namespace Model
}  // namespace Glue
}  // namespace Aws
