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
enum class DataQualityEvaluationConfigManagedRuleset { NOT_SET, SIMPLE, ADVANCED };

namespace DataQualityEvaluationConfigManagedRulesetMapper {
AWS_GLUE_API DataQualityEvaluationConfigManagedRuleset GetDataQualityEvaluationConfigManagedRulesetForName(const Aws::String& name);

AWS_GLUE_API Aws::String GetNameForDataQualityEvaluationConfigManagedRuleset(DataQualityEvaluationConfigManagedRuleset value);
}  // namespace DataQualityEvaluationConfigManagedRulesetMapper
}  // namespace Model
}  // namespace Glue
}  // namespace Aws
