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
  enum class CriterionKey
  {
    NOT_SET,
    EC2_INSTANCE_ARN,
    SCAN_ID,
    ACCOUNT_ID,
    GUARDDUTY_FINDING_ID,
    SCAN_START_TIME,
    SCAN_STATUS,
    SCAN_TYPE
  };

namespace CriterionKeyMapper
{
AWS_GUARDDUTY_API CriterionKey GetCriterionKeyForName(const Aws::String& name);

AWS_GUARDDUTY_API Aws::String GetNameForCriterionKey(CriterionKey value);
} // namespace CriterionKeyMapper
} // namespace Model
} // namespace GuardDuty
} // namespace Aws
