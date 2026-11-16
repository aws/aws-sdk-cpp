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
enum class TagsOnboardingStatus { NOT_SET, ENABLED, DISABLED };

namespace TagsOnboardingStatusMapper {
AWS_HEALTH_API TagsOnboardingStatus GetTagsOnboardingStatusForName(const Aws::String& name);

AWS_HEALTH_API Aws::String GetNameForTagsOnboardingStatus(TagsOnboardingStatus value);
}  // namespace TagsOnboardingStatusMapper
}  // namespace Model
}  // namespace Health
}  // namespace Aws
