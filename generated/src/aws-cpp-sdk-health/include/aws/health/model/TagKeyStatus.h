/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/health/Health_EXPORTS.h>

namespace Aws {
namespace Health {
namespace Model {
enum class TagKeyStatus { NOT_SET, PENDING, ACTIVE };

namespace TagKeyStatusMapper {
AWS_HEALTH_API TagKeyStatus GetTagKeyStatusForName(const Aws::String& name);

AWS_HEALTH_API Aws::String GetNameForTagKeyStatus(TagKeyStatus value);
}  // namespace TagKeyStatusMapper
}  // namespace Model
}  // namespace Health
}  // namespace Aws
