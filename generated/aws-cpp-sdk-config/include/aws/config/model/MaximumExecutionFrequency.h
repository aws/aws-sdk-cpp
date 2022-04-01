/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/config/ConfigService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace ConfigService
{
namespace Model
{
  enum class MaximumExecutionFrequency
  {
    NOT_SET,
    One_Hour,
    Three_Hours,
    Six_Hours,
    Twelve_Hours,
    TwentyFour_Hours
  };

namespace MaximumExecutionFrequencyMapper
{
AWS_CONFIGSERVICE_API MaximumExecutionFrequency GetMaximumExecutionFrequencyForName(const Aws::String& name);

AWS_CONFIGSERVICE_API Aws::String GetNameForMaximumExecutionFrequency(MaximumExecutionFrequency value);
} // namespace MaximumExecutionFrequencyMapper
} // namespace Model
} // namespace ConfigService
} // namespace Aws
