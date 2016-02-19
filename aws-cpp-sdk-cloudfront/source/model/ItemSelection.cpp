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
#include <aws/cloudfront/model/ItemSelection.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

static const int none_HASH = HashingUtils::HashString("none");
static const int whitelist_HASH = HashingUtils::HashString("whitelist");
static const int all_HASH = HashingUtils::HashString("all");

namespace Aws
{
namespace CloudFront
{
namespace Model
{
namespace ItemSelectionMapper
{
ItemSelection GetItemSelectionForName(const Aws::String& name)
{
  int hashCode = HashingUtils::HashString(name.c_str());

  if (hashCode == none_HASH)
  {
    return ItemSelection::none;
  }
  else if (hashCode == whitelist_HASH)
  {
    return ItemSelection::whitelist;
  }
  else if (hashCode == all_HASH)
  {
    return ItemSelection::all;
  }

  return ItemSelection::NOT_SET;
}

Aws::String GetNameForItemSelection(ItemSelection value)
{
  switch(value)
  {
  case ItemSelection::none:
    return "none";
  case ItemSelection::whitelist:
    return "whitelist";
  case ItemSelection::all:
    return "all";
  default:
    return "";
  }
}

} // namespace ItemSelectionMapper
} // namespace Model
} // namespace CloudFront
} // namespace Aws
