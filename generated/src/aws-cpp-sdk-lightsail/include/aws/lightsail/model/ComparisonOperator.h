/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lightsail/Lightsail_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Lightsail
{
namespace Model
{
  enum class ComparisonOperator
  {
    NOT_SET,
    GreaterThanOrEqualToThreshold,
    GreaterThanThreshold,
    LessThanThreshold,
    LessThanOrEqualToThreshold
  };

namespace ComparisonOperatorMapper
{
AWS_LIGHTSAIL_API ComparisonOperator GetComparisonOperatorForName(const Aws::String& name);

AWS_LIGHTSAIL_API Aws::String GetNameForComparisonOperator(ComparisonOperator value);
} // namespace ComparisonOperatorMapper
} // namespace Model
} // namespace Lightsail
} // namespace Aws
