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
#include <aws/s3/model/FilterRuleName.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

static const int prefix_HASH = HashingUtils::HashString("prefix");
static const int suffix_HASH = HashingUtils::HashString("suffix");

namespace Aws
{
namespace S3
{
namespace Model
{
namespace FilterRuleNameMapper
{
FilterRuleName GetFilterRuleNameForName(const Aws::String& name)
{
  int hashCode = HashingUtils::HashString(name.c_str());

  if (hashCode == prefix_HASH)
  {
    return FilterRuleName::prefix;
  }
  else if (hashCode == suffix_HASH)
  {
    return FilterRuleName::suffix;
  }

  return FilterRuleName::NOT_SET;
}

Aws::String GetNameForFilterRuleName(FilterRuleName value)
{
  switch(value)
  {
  case FilterRuleName::prefix:
    return "prefix";
  case FilterRuleName::suffix:
    return "suffix";
  default:
    return "";
  }
}

} // namespace FilterRuleNameMapper
} // namespace Model
} // namespace S3
} // namespace Aws
