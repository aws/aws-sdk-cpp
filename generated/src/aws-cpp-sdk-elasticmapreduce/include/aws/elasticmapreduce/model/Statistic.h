/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticmapreduce/EMR_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace EMR
{
namespace Model
{
  enum class Statistic
  {
    NOT_SET,
    SAMPLE_COUNT,
    AVERAGE,
    SUM,
    MINIMUM,
    MAXIMUM
  };

namespace StatisticMapper
{
AWS_EMR_API Statistic GetStatisticForName(const Aws::String& name);

AWS_EMR_API Aws::String GetNameForStatistic(Statistic value);
} // namespace StatisticMapper
} // namespace Model
} // namespace EMR
} // namespace Aws
