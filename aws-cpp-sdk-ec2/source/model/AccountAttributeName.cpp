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
#include <aws/ec2/model/AccountAttributeName.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

static const int supported_platforms_HASH = HashingUtils::HashString("supported-platforms");
static const int default_vpc_HASH = HashingUtils::HashString("default-vpc");

namespace Aws
{
namespace EC2
{
namespace Model
{
namespace AccountAttributeNameMapper
{
AccountAttributeName GetAccountAttributeNameForName(const Aws::String& name)
{
  int hashCode = HashingUtils::HashString(name.c_str());

  if (hashCode == supported_platforms_HASH)
  {
    return AccountAttributeName::supported_platforms;
  }
  else if (hashCode == default_vpc_HASH)
  {
    return AccountAttributeName::default_vpc;
  }

  return AccountAttributeName::NOT_SET;
}

Aws::String GetNameForAccountAttributeName(AccountAttributeName value)
{
  switch(value)
  {
  case AccountAttributeName::supported_platforms:
    return "supported-platforms";
  case AccountAttributeName::default_vpc:
    return "default-vpc";
  default:
    return "";
  }
}

} // namespace AccountAttributeNameMapper
} // namespace Model
} // namespace EC2
} // namespace Aws
