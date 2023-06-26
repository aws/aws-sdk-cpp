/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/guardduty/GuardDuty_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace GuardDuty
{
namespace Model
{
  enum class ScanStatus
  {
    NOT_SET,
    RUNNING,
    COMPLETED,
    FAILED,
    SKIPPED
  };

namespace ScanStatusMapper
{
AWS_GUARDDUTY_API ScanStatus GetScanStatusForName(const Aws::String& name);

AWS_GUARDDUTY_API Aws::String GetNameForScanStatus(ScanStatus value);
} // namespace ScanStatusMapper
} // namespace Model
} // namespace GuardDuty
} // namespace Aws
