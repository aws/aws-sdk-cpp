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
#include <aws/cloudfront/model/GeoRestrictionType.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

static const int blacklist_HASH = HashingUtils::HashString("blacklist");
static const int whitelist_HASH = HashingUtils::HashString("whitelist");
static const int none_HASH = HashingUtils::HashString("none");

namespace Aws
{
namespace CloudFront
{
namespace Model
{
namespace GeoRestrictionTypeMapper
{
GeoRestrictionType GetGeoRestrictionTypeForName(const Aws::String& name)
{
  int hashCode = HashingUtils::HashString(name.c_str());

  if (hashCode == blacklist_HASH)
  {
    return GeoRestrictionType::blacklist;
  }
  else if (hashCode == whitelist_HASH)
  {
    return GeoRestrictionType::whitelist;
  }
  else if (hashCode == none_HASH)
  {
    return GeoRestrictionType::none;
  }

  return GeoRestrictionType::NOT_SET;
}

Aws::String GetNameForGeoRestrictionType(GeoRestrictionType value)
{
  switch(value)
  {
  case GeoRestrictionType::blacklist:
    return "blacklist";
  case GeoRestrictionType::whitelist:
    return "whitelist";
  case GeoRestrictionType::none:
    return "none";
  default:
    return "";
  }
}

} // namespace GeoRestrictionTypeMapper
} // namespace Model
} // namespace CloudFront
} // namespace Aws
