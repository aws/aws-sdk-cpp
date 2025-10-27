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
enum class TriggerState { NOT_SET, CREATING, CREATED, ACTIVATING, ACTIVATED, DEACTIVATING, DEACTIVATED, DELETING, UPDATING };

namespace TriggerStateMapper {
AWS_GLUE_API TriggerState GetTriggerStateForName(const Aws::String& name);

AWS_GLUE_API Aws::String GetNameForTriggerState(TriggerState value);
}  // namespace TriggerStateMapper
}  // namespace Model
}  // namespace Glue
}  // namespace Aws
