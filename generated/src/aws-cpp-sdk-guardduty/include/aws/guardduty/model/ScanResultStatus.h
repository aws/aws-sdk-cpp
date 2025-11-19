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
enum class ScanResultStatus { NOT_SET, NO_THREATS_FOUND, THREATS_FOUND };

namespace ScanResultStatusMapper {
AWS_GUARDDUTY_API ScanResultStatus GetScanResultStatusForName(const Aws::String& name);

AWS_GUARDDUTY_API Aws::String GetNameForScanResultStatus(ScanResultStatus value);
}  // namespace ScanResultStatusMapper
}  // namespace Model
}  // namespace GuardDuty
}  // namespace Aws
