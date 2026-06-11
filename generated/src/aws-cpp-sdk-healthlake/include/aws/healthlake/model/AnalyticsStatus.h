/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/healthlake/HealthLake_EXPORTS.h>

namespace Aws {
namespace HealthLake {
namespace Model {
enum class AnalyticsStatus { NOT_SET, ENABLED, ENABLING, DISABLED, DISABLING, PAUSING, PAUSED };

namespace AnalyticsStatusMapper {
AWS_HEALTHLAKE_API AnalyticsStatus GetAnalyticsStatusForName(const Aws::String& name);

AWS_HEALTHLAKE_API Aws::String GetNameForAnalyticsStatus(AnalyticsStatus value);
}  // namespace AnalyticsStatusMapper
}  // namespace Model
}  // namespace HealthLake
}  // namespace Aws
