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
#include <aws/cloudfront/model/PriceClass.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

static const int PriceClass_100_HASH = HashingUtils::HashString("PriceClass_100");
static const int PriceClass_200_HASH = HashingUtils::HashString("PriceClass_200");
static const int PriceClass_All_HASH = HashingUtils::HashString("PriceClass_All");

namespace Aws
{
namespace CloudFront
{
namespace Model
{
namespace PriceClassMapper
{
PriceClass GetPriceClassForName(const Aws::String& name)
{
  int hashCode = HashingUtils::HashString(name.c_str());

  if (hashCode == PriceClass_100_HASH)
  {
    return PriceClass::PriceClass_100;
  }
  else if (hashCode == PriceClass_200_HASH)
  {
    return PriceClass::PriceClass_200;
  }
  else if (hashCode == PriceClass_All_HASH)
  {
    return PriceClass::PriceClass_All;
  }

  return PriceClass::NOT_SET;
}

Aws::String GetNameForPriceClass(PriceClass value)
{
  switch(value)
  {
  case PriceClass::PriceClass_100:
    return "PriceClass_100";
  case PriceClass::PriceClass_200:
    return "PriceClass_200";
  case PriceClass::PriceClass_All:
    return "PriceClass_All";
  default:
    return "";
  }
}

} // namespace PriceClassMapper
} // namespace Model
} // namespace CloudFront
} // namespace Aws
