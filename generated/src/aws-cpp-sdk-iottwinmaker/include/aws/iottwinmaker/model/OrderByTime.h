/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iottwinmaker/IoTTwinMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace IoTTwinMaker
{
namespace Model
{
  enum class OrderByTime
  {
    NOT_SET,
    ASCENDING,
    DESCENDING
  };

namespace OrderByTimeMapper
{
AWS_IOTTWINMAKER_API OrderByTime GetOrderByTimeForName(const Aws::String& name);

AWS_IOTTWINMAKER_API Aws::String GetNameForOrderByTime(OrderByTime value);
} // namespace OrderByTimeMapper
} // namespace Model
} // namespace IoTTwinMaker
} // namespace Aws
