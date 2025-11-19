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
enum class DetectionSource { NOT_SET, AMAZON, BITDEFENDER };

namespace DetectionSourceMapper {
AWS_GUARDDUTY_API DetectionSource GetDetectionSourceForName(const Aws::String& name);

AWS_GUARDDUTY_API Aws::String GetNameForDetectionSource(DetectionSource value);
}  // namespace DetectionSourceMapper
}  // namespace Model
}  // namespace GuardDuty
}  // namespace Aws
