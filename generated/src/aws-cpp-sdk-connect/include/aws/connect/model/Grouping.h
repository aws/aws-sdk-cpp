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
  enum class Grouping
  {
    NOT_SET,
    QUEUE,
    CHANNEL,
    ROUTING_PROFILE
  };

namespace GroupingMapper
{
AWS_CONNECT_API Grouping GetGroupingForName(const Aws::String& name);

AWS_CONNECT_API Aws::String GetNameForGrouping(Grouping value);
} // namespace GroupingMapper
} // namespace Model
} // namespace Connect
} // namespace Aws
