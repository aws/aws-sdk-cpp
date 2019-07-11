/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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

#include <aws/eventbridge/model/AwsVpcConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace EventBridge
{
namespace Model
{

AwsVpcConfiguration::AwsVpcConfiguration() : 
    m_subnetsHasBeenSet(false),
    m_securityGroupsHasBeenSet(false),
    m_assignPublicIp(AssignPublicIp::NOT_SET),
    m_assignPublicIpHasBeenSet(false)
{
}

AwsVpcConfiguration::AwsVpcConfiguration(JsonView jsonValue) : 
    m_subnetsHasBeenSet(false),
    m_securityGroupsHasBeenSet(false),
    m_assignPublicIp(AssignPublicIp::NOT_SET),
    m_assignPublicIpHasBeenSet(false)
{
  *this = jsonValue;
}

AwsVpcConfiguration& AwsVpcConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Subnets"))
  {
    Array<JsonView> subnetsJsonList = jsonValue.GetArray("Subnets");
    for(unsigned subnetsIndex = 0; subnetsIndex < subnetsJsonList.GetLength(); ++subnetsIndex)
    {
      m_subnets.push_back(subnetsJsonList[subnetsIndex].AsString());
    }
    m_subnetsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SecurityGroups"))
  {
    Array<JsonView> securityGroupsJsonList = jsonValue.GetArray("SecurityGroups");
    for(unsigned securityGroupsIndex = 0; securityGroupsIndex < securityGroupsJsonList.GetLength(); ++securityGroupsIndex)
    {
      m_securityGroups.push_back(securityGroupsJsonList[securityGroupsIndex].AsString());
    }
    m_securityGroupsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AssignPublicIp"))
  {
    m_assignPublicIp = AssignPublicIpMapper::GetAssignPublicIpForName(jsonValue.GetString("AssignPublicIp"));

    m_assignPublicIpHasBeenSet = true;
  }

  return *this;
}

JsonValue AwsVpcConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_subnetsHasBeenSet)
  {
   Array<JsonValue> subnetsJsonList(m_subnets.size());
   for(unsigned subnetsIndex = 0; subnetsIndex < subnetsJsonList.GetLength(); ++subnetsIndex)
   {
     subnetsJsonList[subnetsIndex].AsString(m_subnets[subnetsIndex]);
   }
   payload.WithArray("Subnets", std::move(subnetsJsonList));

  }

  if(m_securityGroupsHasBeenSet)
  {
   Array<JsonValue> securityGroupsJsonList(m_securityGroups.size());
   for(unsigned securityGroupsIndex = 0; securityGroupsIndex < securityGroupsJsonList.GetLength(); ++securityGroupsIndex)
   {
     securityGroupsJsonList[securityGroupsIndex].AsString(m_securityGroups[securityGroupsIndex]);
   }
   payload.WithArray("SecurityGroups", std::move(securityGroupsJsonList));

  }

  if(m_assignPublicIpHasBeenSet)
  {
   payload.WithString("AssignPublicIp", AssignPublicIpMapper::GetNameForAssignPublicIp(m_assignPublicIp));
  }

  return payload;
}

} // namespace Model
} // namespace EventBridge
} // namespace Aws
