/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudtrail/CloudTrail_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace CloudTrail
{
namespace Model
{
  enum class RefreshScheduleFrequencyUnit
  {
    NOT_SET,
    HOURS,
    DAYS
  };

namespace RefreshScheduleFrequencyUnitMapper
{
AWS_CLOUDTRAIL_API RefreshScheduleFrequencyUnit GetRefreshScheduleFrequencyUnitForName(const Aws::String& name);

AWS_CLOUDTRAIL_API Aws::String GetNameForRefreshScheduleFrequencyUnit(RefreshScheduleFrequencyUnit value);
} // namespace RefreshScheduleFrequencyUnitMapper
} // namespace Model
} // namespace CloudTrail
} // namespace Aws
