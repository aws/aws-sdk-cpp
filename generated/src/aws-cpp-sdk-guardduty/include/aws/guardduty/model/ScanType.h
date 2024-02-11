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
  enum class ScanType
  {
    NOT_SET,
    GUARDDUTY_INITIATED,
    ON_DEMAND
  };

namespace ScanTypeMapper
{
AWS_GUARDDUTY_API ScanType GetScanTypeForName(const Aws::String& name);

AWS_GUARDDUTY_API Aws::String GetNameForScanType(ScanType value);
} // namespace ScanTypeMapper
} // namespace Model
} // namespace GuardDuty
} // namespace Aws
