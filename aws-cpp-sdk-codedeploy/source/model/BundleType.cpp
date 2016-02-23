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
#include <aws/codedeploy/model/BundleType.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

static const int tar_HASH = HashingUtils::HashString("tar");
static const int tgz_HASH = HashingUtils::HashString("tgz");
static const int zip_HASH = HashingUtils::HashString("zip");

namespace Aws
{
namespace CodeDeploy
{
namespace Model
{
namespace BundleTypeMapper
{


BundleType GetBundleTypeForName(const Aws::String& name)
{
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == tar_HASH)
  {
     return BundleType::tar;
  }
  else if (hashCode == tgz_HASH)
  {
     return BundleType::tgz;
  }
  else if (hashCode == zip_HASH)
  {
     return BundleType::zip;
  }
  return BundleType::NOT_SET;
}

Aws::String GetNameForBundleType(BundleType value)
{
  switch(value)
  {
  case BundleType::tar:
    return "tar";
  case BundleType::tgz:
    return "tgz";
  case BundleType::zip:
    return "zip";
  default:
    return "";
  }
}

} // namespace BundleTypeMapper
} // namespace Model
} // namespace CodeDeploy
} // namespace Aws
