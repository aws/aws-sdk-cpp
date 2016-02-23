/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/ecs/model/SortOrder.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

static const int ASC_HASH = HashingUtils::HashString("ASC");
static const int DESC_HASH = HashingUtils::HashString("DESC");

namespace Aws
{
namespace ECS
{
namespace Model
{
namespace SortOrderMapper
{


SortOrder GetSortOrderForName(const Aws::String& name)
{
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == ASC_HASH)
  {
     return SortOrder::ASC;
  }
  else if (hashCode == DESC_HASH)
  {
     return SortOrder::DESC;
  }
  return SortOrder::NOT_SET;
}

Aws::String GetNameForSortOrder(SortOrder enumValue)
{
  switch(value)
  {
  case SortOrder::ASC:
    return "ASC";
  case SortOrder::DESC:
    return "DESC";
  default:
    return "";
  }
}

} // namespace SortOrderMapper
} // namespace Model
} // namespace ECS
} // namespace Aws
