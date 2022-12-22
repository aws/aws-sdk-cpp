/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pipes/model/AwsVpcConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Pipes
{
namespace Model
{

AwsVpcConfiguration::AwsVpcConfiguration() : 
    m_assignPublicIp(AssignPublicIp::NOT_SET),
    m_assignPublicIpHasBeenSet(false),
    m_securityGroupsHasBeenSet(false),
    m_subnetsHasBeenSet(false)
{
}

AwsVpcConfiguration::AwsVpcConfiguration(JsonView jsonValue) : 
    m_assignPublicIp(AssignPublicIp::NOT_SET),
    m_assignPublicIpHasBeenSet(false),
    m_securityGroupsHasBeenSet(false),
    m_subnetsHasBeenSet(false)
{
  *this = jsonValue;
}

AwsVpcConfiguration& AwsVpcConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("AssignPublicIp"))
  {
    m_assignPublicIp = AssignPublicIpMapper::GetAssignPublicIpForName(jsonValue.GetString("AssignPublicIp"));

    m_assignPublicIpHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SecurityGroups"))
  {
    Aws::Utils::Array<JsonView> securityGroupsJsonList = jsonValue.GetArray("SecurityGroups");
    for(unsigned securityGroupsIndex = 0; securityGroupsIndex < securityGroupsJsonList.GetLength(); ++securityGroupsIndex)
    {
      m_securityGroups.push_back(securityGroupsJsonList[securityGroupsIndex].AsString());
    }
    m_securityGroupsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Subnets"))
  {
    Aws::Utils::Array<JsonView> subnetsJsonList = jsonValue.GetArray("Subnets");
    for(unsigned subnetsIndex = 0; subnetsIndex < subnetsJsonList.GetLength(); ++subnetsIndex)
    {
      m_subnets.push_back(subnetsJsonList[subnetsIndex].AsString());
    }
    m_subnetsHasBeenSet = true;
  }

  return *this;
}

JsonValue AwsVpcConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_assignPublicIpHasBeenSet)
  {
   payload.WithString("AssignPublicIp", AssignPublicIpMapper::GetNameForAssignPublicIp(m_assignPublicIp));
  }

  if(m_securityGroupsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> securityGroupsJsonList(m_securityGroups.size());
   for(unsigned securityGroupsIndex = 0; securityGroupsIndex < securityGroupsJsonList.GetLength(); ++securityGroupsIndex)
   {
     securityGroupsJsonList[securityGroupsIndex].AsString(m_securityGroups[securityGroupsIndex]);
   }
   payload.WithArray("SecurityGroups", std::move(securityGroupsJsonList));

  }

  if(m_subnetsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> subnetsJsonList(m_subnets.size());
   for(unsigned subnetsIndex = 0; subnetsIndex < subnetsJsonList.GetLength(); ++subnetsIndex)
   {
     subnetsJsonList[subnetsIndex].AsString(m_subnets[subnetsIndex]);
   }
   payload.WithArray("Subnets", std::move(subnetsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace Pipes
} // namespace Aws
