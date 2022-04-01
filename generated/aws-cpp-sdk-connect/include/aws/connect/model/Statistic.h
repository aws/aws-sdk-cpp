/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Connect
{
namespace Model
{
  enum class Statistic
  {
    NOT_SET,
    SUM,
    MAX,
    AVG
  };

namespace StatisticMapper
{
AWS_CONNECT_API Statistic GetStatisticForName(const Aws::String& name);

AWS_CONNECT_API Aws::String GetNameForStatistic(Statistic value);
} // namespace StatisticMapper
} // namespace Model
} // namespace Connect
} // namespace Aws
