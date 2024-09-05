/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/application-signals/ApplicationSignals_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace ApplicationSignals
{
namespace Model
{
  enum class DurationUnit
  {
    NOT_SET,
    MINUTE,
    HOUR,
    DAY,
    MONTH
  };

namespace DurationUnitMapper
{
AWS_APPLICATIONSIGNALS_API DurationUnit GetDurationUnitForName(const Aws::String& name);

AWS_APPLICATIONSIGNALS_API Aws::String GetNameForDurationUnit(DurationUnit value);
} // namespace DurationUnitMapper
} // namespace Model
} // namespace ApplicationSignals
} // namespace Aws
