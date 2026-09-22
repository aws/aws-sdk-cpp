/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudwatchomni/CloudWatchOmni_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws {
namespace CloudWatchOmni {
namespace Model {
enum class ThresholdMode { NOT_SET, COUNT_OF_RESULTS, FIELD_VALUE };

namespace ThresholdModeMapper {
AWS_CLOUDWATCHOMNI_API ThresholdMode GetThresholdModeForName(const Aws::String& name);

AWS_CLOUDWATCHOMNI_API Aws::String GetNameForThresholdMode(ThresholdMode value);
}  // namespace ThresholdModeMapper
}  // namespace Model
}  // namespace CloudWatchOmni
}  // namespace Aws
