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
#include <aws/codedeploy/model/SortOrder.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

static const int ascending_HASH = HashingUtils::HashString("ascending");
static const int descending_HASH = HashingUtils::HashString("descending");

namespace Aws
{
namespace CodeDeploy
{
namespace Model
{
namespace SortOrderMapper
{
SortOrder GetSortOrderForName(const Aws::String& name)
{
  int hashCode = HashingUtils::HashString(name.c_str());

  if (hashCode == ascending_HASH)
  {
    return SortOrder::ascending;
  }
  else if (hashCode == descending_HASH)
  {
    return SortOrder::descending;
  }

  return SortOrder::ascending;
}

Aws::String GetNameForSortOrder(SortOrder value)
{
  switch(value)
  {
  case SortOrder::ascending:
    return "ascending";
  case SortOrder::descending:
    return "descending";
  default:
    return "ascending";
  }
}

} // namespace SortOrderMapper
} // namespace Model
} // namespace CodeDeploy
} // namespace Aws
