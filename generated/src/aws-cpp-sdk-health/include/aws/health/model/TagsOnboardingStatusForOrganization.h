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
enum class TagsOnboardingStatusForOrganization { NOT_SET, ENABLED, DISABLED };

namespace TagsOnboardingStatusForOrganizationMapper {
AWS_HEALTH_API TagsOnboardingStatusForOrganization GetTagsOnboardingStatusForOrganizationForName(const Aws::String& name);

AWS_HEALTH_API Aws::String GetNameForTagsOnboardingStatusForOrganization(TagsOnboardingStatusForOrganization value);
}  // namespace TagsOnboardingStatusForOrganizationMapper
}  // namespace Model
}  // namespace Health
}  // namespace Aws
