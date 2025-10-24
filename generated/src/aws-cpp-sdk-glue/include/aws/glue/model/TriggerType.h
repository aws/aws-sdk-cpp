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
enum class TriggerType { NOT_SET, SCHEDULED, CONDITIONAL, ON_DEMAND, EVENT };

namespace TriggerTypeMapper {
AWS_GLUE_API TriggerType GetTriggerTypeForName(const Aws::String& name);

AWS_GLUE_API Aws::String GetNameForTriggerType(TriggerType value);
}  // namespace TriggerTypeMapper
}  // namespace Model
}  // namespace Glue
}  // namespace Aws
