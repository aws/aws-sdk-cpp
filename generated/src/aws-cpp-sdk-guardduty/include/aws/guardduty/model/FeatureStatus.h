/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/guardduty/GuardDuty_EXPORTS.h>

namespace Aws {
namespace GuardDuty {
namespace Model {
enum class FeatureStatus { NOT_SET, ENABLED, DISABLED };

namespace FeatureStatusMapper {
AWS_GUARDDUTY_API FeatureStatus GetFeatureStatusForName(const Aws::String& name);

AWS_GUARDDUTY_API Aws::String GetNameForFeatureStatus(FeatureStatus value);
}  // namespace FeatureStatusMapper
}  // namespace Model
}  // namespace GuardDuty
}  // namespace Aws
