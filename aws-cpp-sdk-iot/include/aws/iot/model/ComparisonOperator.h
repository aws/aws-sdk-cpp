/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace IoT
{
namespace Model
{
  enum class ComparisonOperator
  {
    NOT_SET,
    less_than,
    less_than_equals,
    greater_than,
    greater_than_equals,
    in_cidr_set,
    not_in_cidr_set,
    in_port_set,
    not_in_port_set
  };

namespace ComparisonOperatorMapper
{
AWS_IOT_API ComparisonOperator GetComparisonOperatorForName(const Aws::String& name);

AWS_IOT_API Aws::String GetNameForComparisonOperator(ComparisonOperator value);
} // namespace ComparisonOperatorMapper
} // namespace Model
} // namespace IoT
} // namespace Aws
