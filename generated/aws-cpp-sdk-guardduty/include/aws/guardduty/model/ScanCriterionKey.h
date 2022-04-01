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
  enum class ScanCriterionKey
  {
    NOT_SET,
    EC2_INSTANCE_TAG
  };

namespace ScanCriterionKeyMapper
{
AWS_GUARDDUTY_API ScanCriterionKey GetScanCriterionKeyForName(const Aws::String& name);

AWS_GUARDDUTY_API Aws::String GetNameForScanCriterionKey(ScanCriterionKey value);
} // namespace ScanCriterionKeyMapper
} // namespace Model
} // namespace GuardDuty
} // namespace Aws
