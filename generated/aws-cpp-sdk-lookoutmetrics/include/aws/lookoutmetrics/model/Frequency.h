/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lookoutmetrics/LookoutMetrics_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace LookoutMetrics
{
namespace Model
{
  enum class Frequency
  {
    NOT_SET,
    P1D,
    PT1H,
    PT10M,
    PT5M
  };

namespace FrequencyMapper
{
AWS_LOOKOUTMETRICS_API Frequency GetFrequencyForName(const Aws::String& name);

AWS_LOOKOUTMETRICS_API Aws::String GetNameForFrequency(Frequency value);
} // namespace FrequencyMapper
} // namespace Model
} // namespace LookoutMetrics
} // namespace Aws
