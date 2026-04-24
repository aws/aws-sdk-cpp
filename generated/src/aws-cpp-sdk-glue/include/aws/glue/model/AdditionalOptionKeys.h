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
enum class AdditionalOptionKeys { NOT_SET, performanceTuning_caching, observations_scope, compositeRuleEvaluation_method };

namespace AdditionalOptionKeysMapper {
AWS_GLUE_API AdditionalOptionKeys GetAdditionalOptionKeysForName(const Aws::String& name);

AWS_GLUE_API Aws::String GetNameForAdditionalOptionKeys(AdditionalOptionKeys value);
}  // namespace AdditionalOptionKeysMapper
}  // namespace Model
}  // namespace Glue
}  // namespace Aws
