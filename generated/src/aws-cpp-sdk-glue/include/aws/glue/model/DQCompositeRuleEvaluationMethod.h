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
enum class DQCompositeRuleEvaluationMethod { NOT_SET, COLUMN, ROW };

namespace DQCompositeRuleEvaluationMethodMapper {
AWS_GLUE_API DQCompositeRuleEvaluationMethod GetDQCompositeRuleEvaluationMethodForName(const Aws::String& name);

AWS_GLUE_API Aws::String GetNameForDQCompositeRuleEvaluationMethod(DQCompositeRuleEvaluationMethod value);
}  // namespace DQCompositeRuleEvaluationMethodMapper
}  // namespace Model
}  // namespace Glue
}  // namespace Aws
