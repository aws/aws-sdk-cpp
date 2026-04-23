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

#include <aws/robomaker/model/VPCConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace RoboMaker
{
namespace Model
{

VPCConfig::VPCConfig() : 
    m_subnetsHasBeenSet(false),
    m_securityGroupsHasBeenSet(false),
    m_assignPublicIp(false),
    m_assignPublicIpHasBeenSet(false)
{
}

VPCConfig::VPCConfig(JsonView jsonValue) : 
    m_subnetsHasBeenSet(false),
    m_securityGroupsHasBeenSet(false),
    m_assignPublicIp(false),
    m_assignPublicIpHasBeenSet(false)
{
  *this = jsonValue;
}

VPCConfig& VPCConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("subnets"))
  {
    Array<JsonView> subnetsJsonList = jsonValue.GetArray("subnets");
    for(unsigned subnetsIndex = 0; subnetsIndex < subnetsJsonList.GetLength(); ++subnetsIndex)
    {
      m_subnets.push_back(subnetsJsonList[subnetsIndex].AsString());
    }
    m_subnetsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("securityGroups"))
  {
    Array<JsonView> securityGroupsJsonList = jsonValue.GetArray("securityGroups");
    for(unsigned securityGroupsIndex = 0; securityGroupsIndex < securityGroupsJsonList.GetLength(); ++securityGroupsIndex)
    {
      m_securityGroups.push_back(securityGroupsJsonList[securityGroupsIndex].AsString());
    }
    m_securityGroupsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("assignPublicIp"))
  {
    m_assignPublicIp = jsonValue.GetBool("assignPublicIp");

    m_assignPublicIpHasBeenSet = true;
  }

  return *this;
}

JsonValue VPCConfig::Jsonize() const
{
  JsonValue payload;

  if(m_subnetsHasBeenSet)
  {
   Array<JsonValue> subnetsJsonList(m_subnets.size());
   for(unsigned subnetsIndex = 0; subnetsIndex < subnetsJsonList.GetLength(); ++subnetsIndex)
   {
     subnetsJsonList[subnetsIndex].AsString(m_subnets[subnetsIndex]);
   }
   payload.WithArray("subnets", std::move(subnetsJsonList));

  }

  if(m_securityGroupsHasBeenSet)
  {
   Array<JsonValue> securityGroupsJsonList(m_securityGroups.size());
   for(unsigned securityGroupsIndex = 0; securityGroupsIndex < securityGroupsJsonList.GetLength(); ++securityGroupsIndex)
   {
     securityGroupsJsonList[securityGroupsIndex].AsString(m_securityGroups[securityGroupsIndex]);
   }
   payload.WithArray("securityGroups", std::move(securityGroupsJsonList));

  }

  if(m_assignPublicIpHasBeenSet)
  {
   payload.WithBool("assignPublicIp", m_assignPublicIp);

  }

  return payload;
}

} // namespace Model
} // namespace RoboMaker
} // namespace Aws
