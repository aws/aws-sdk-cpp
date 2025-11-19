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
enum class ScanCategory { NOT_SET, FULL_SCAN, INCREMENTAL_SCAN };

namespace ScanCategoryMapper {
AWS_GUARDDUTY_API ScanCategory GetScanCategoryForName(const Aws::String& name);

AWS_GUARDDUTY_API Aws::String GetNameForScanCategory(ScanCategory value);
}  // namespace ScanCategoryMapper
}  // namespace Model
}  // namespace GuardDuty
}  // namespace Aws
