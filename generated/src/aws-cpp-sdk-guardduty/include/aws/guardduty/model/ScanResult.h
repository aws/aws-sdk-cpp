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
  enum class ScanResult
  {
    NOT_SET,
    CLEAN,
    INFECTED
  };

namespace ScanResultMapper
{
AWS_GUARDDUTY_API ScanResult GetScanResultForName(const Aws::String& name);

AWS_GUARDDUTY_API Aws::String GetNameForScanResult(ScanResult value);
} // namespace ScanResultMapper
} // namespace Model
} // namespace GuardDuty
} // namespace Aws
