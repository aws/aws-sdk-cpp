/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotevents-data/IoTEventsData_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace IoTEventsData
{
namespace Model
{
  enum class ComparisonOperator
  {
    NOT_SET,
    GREATER,
    GREATER_OR_EQUAL,
    LESS,
    LESS_OR_EQUAL,
    EQUAL,
    NOT_EQUAL
  };

namespace ComparisonOperatorMapper
{
AWS_IOTEVENTSDATA_API ComparisonOperator GetComparisonOperatorForName(const Aws::String& name);

AWS_IOTEVENTSDATA_API Aws::String GetNameForComparisonOperator(ComparisonOperator value);
} // namespace ComparisonOperatorMapper
} // namespace Model
} // namespace IoTEventsData
} // namespace Aws
