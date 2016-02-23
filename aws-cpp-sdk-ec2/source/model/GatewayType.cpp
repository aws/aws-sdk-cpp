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
#include <aws/ec2/model/GatewayType.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

static const int ipsec_1_HASH = HashingUtils::HashString("ipsec.1");

namespace Aws
{
namespace EC2
{
namespace Model
{
namespace GatewayTypeMapper
{


GatewayType GetGatewayTypeForName(const Aws::String& name)
{
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == ipsec_1_HASH)
  {
     return GatewayType::ipsec_1;
  }
  return GatewayType::NOT_SET;
}

Aws::String GetNameForGatewayType(GatewayType value)
{
  switch(value)
  {
  case GatewayType::ipsec_1:
    return "ipsec.1";
  default:
    return "";
  }
}

} // namespace GatewayTypeMapper
} // namespace Model
} // namespace EC2
} // namespace Aws
