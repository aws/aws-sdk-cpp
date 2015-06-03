/*
* Copyright 2010-2015 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/
#include <aws/monitoring/model/ComparisonOperator.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

static const int GreaterThanOrEqualToThreshold_HASH = HashingUtils::HashString("GreaterThanOrEqualToThreshold");
static const int GreaterThanThreshold_HASH = HashingUtils::HashString("GreaterThanThreshold");
static const int LessThanThreshold_HASH = HashingUtils::HashString("LessThanThreshold");
static const int LessThanOrEqualToThreshold_HASH = HashingUtils::HashString("LessThanOrEqualToThreshold");

namespace Aws
{
namespace CloudWatch
{
namespace Model
{
namespace ComparisonOperatorMapper
{
ComparisonOperator GetComparisonOperatorForName(const Aws::String& name)
{
  int hashCode = HashingUtils::HashString(name.c_str());

  if (hashCode == GreaterThanOrEqualToThreshold_HASH)
  {
    return ComparisonOperator::GreaterThanOrEqualToThreshold;
  }
  else if (hashCode == GreaterThanThreshold_HASH)
  {
    return ComparisonOperator::GreaterThanThreshold;
  }
  else if (hashCode == LessThanThreshold_HASH)
  {
    return ComparisonOperator::LessThanThreshold;
  }
  else if (hashCode == LessThanOrEqualToThreshold_HASH)
  {
    return ComparisonOperator::LessThanOrEqualToThreshold;
  }

  return ComparisonOperator::GreaterThanOrEqualToThreshold;
}

Aws::String GetNameForComparisonOperator(ComparisonOperator value)
{
  switch(value)
  {
  case ComparisonOperator::GreaterThanOrEqualToThreshold:
    return "GreaterThanOrEqualToThreshold";
  case ComparisonOperator::GreaterThanThreshold:
    return "GreaterThanThreshold";
  case ComparisonOperator::LessThanThreshold:
    return "LessThanThreshold";
  case ComparisonOperator::LessThanOrEqualToThreshold:
    return "LessThanOrEqualToThreshold";
  default:
    return "GreaterThanOrEqualToThreshold";
  }
}

} // namespace ComparisonOperatorMapper
} // namespace Model
} // namespace CloudWatch
} // namespace Aws
