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
#include <aws/ec2/model/FlowLogsResourceType.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

static const int VPC_HASH = HashingUtils::HashString("VPC");
static const int Subnet_HASH = HashingUtils::HashString("Subnet");
static const int NetworkInterface_HASH = HashingUtils::HashString("NetworkInterface");

namespace Aws
{
namespace EC2
{
namespace Model
{
namespace FlowLogsResourceTypeMapper
{


FlowLogsResourceType GetFlowLogsResourceTypeForName(const Aws::String& name)
{
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == VPC_HASH)
  {
     return FlowLogsResourceType::VPC;
  }
  else if (hashCode == Subnet_HASH)
  {
     return FlowLogsResourceType::Subnet;
  }
  else if (hashCode == NetworkInterface_HASH)
  {
     return FlowLogsResourceType::NetworkInterface;
  }
  return FlowLogsResourceType::NOT_SET;
}

Aws::String GetNameForFlowLogsResourceType(FlowLogsResourceType value)
{
  switch(value)
  {
  case FlowLogsResourceType::VPC:
    return "VPC";
  case FlowLogsResourceType::Subnet:
    return "Subnet";
  case FlowLogsResourceType::NetworkInterface:
    return "NetworkInterface";
  default:
    return "";
  }
}

} // namespace FlowLogsResourceTypeMapper
} // namespace Model
} // namespace EC2
} // namespace Aws
