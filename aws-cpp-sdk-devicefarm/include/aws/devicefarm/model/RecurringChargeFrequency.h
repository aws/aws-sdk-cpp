/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/devicefarm/DeviceFarm_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace DeviceFarm
{
namespace Model
{
  enum class RecurringChargeFrequency
  {
    NOT_SET,
    MONTHLY
  };

namespace RecurringChargeFrequencyMapper
{
AWS_DEVICEFARM_API RecurringChargeFrequency GetRecurringChargeFrequencyForName(const Aws::String& name);

AWS_DEVICEFARM_API Aws::String GetNameForRecurringChargeFrequency(RecurringChargeFrequency value);
} // namespace RecurringChargeFrequencyMapper
} // namespace Model
} // namespace DeviceFarm
} // namespace Aws
