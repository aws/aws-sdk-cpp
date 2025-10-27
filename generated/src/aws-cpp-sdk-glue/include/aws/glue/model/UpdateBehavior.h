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
enum class UpdateBehavior { NOT_SET, LOG, UPDATE_IN_DATABASE };

namespace UpdateBehaviorMapper {
AWS_GLUE_API UpdateBehavior GetUpdateBehaviorForName(const Aws::String& name);

AWS_GLUE_API Aws::String GetNameForUpdateBehavior(UpdateBehavior value);
}  // namespace UpdateBehaviorMapper
}  // namespace Model
}  // namespace Glue
}  // namespace Aws
