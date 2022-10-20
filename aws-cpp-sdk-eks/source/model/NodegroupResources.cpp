/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/eks/model/NodegroupResources.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace EKS
{
namespace Model
{

NodegroupResources::NodegroupResources() : 
    m_autoScalingGroupsHasBeenSet(false),
    m_remoteAccessSecurityGroupHasBeenSet(false)
{
}

NodegroupResources::NodegroupResources(JsonView jsonValue) : 
    m_autoScalingGroupsHasBeenSet(false),
    m_remoteAccessSecurityGroupHasBeenSet(false)
{
  *this = jsonValue;
}

NodegroupResources& NodegroupResources::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("autoScalingGroups"))
  {
    Aws::Utils::Array<JsonView> autoScalingGroupsJsonList = jsonValue.GetArray("autoScalingGroups");
    for(unsigned autoScalingGroupsIndex = 0; autoScalingGroupsIndex < autoScalingGroupsJsonList.GetLength(); ++autoScalingGroupsIndex)
    {
      m_autoScalingGroups.push_back(autoScalingGroupsJsonList[autoScalingGroupsIndex].AsObject());
    }
    m_autoScalingGroupsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("remoteAccessSecurityGroup"))
  {
    m_remoteAccessSecurityGroup = jsonValue.GetString("remoteAccessSecurityGroup");

    m_remoteAccessSecurityGroupHasBeenSet = true;
  }

  return *this;
}

JsonValue NodegroupResources::Jsonize() const
{
  JsonValue payload;

  if(m_autoScalingGroupsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> autoScalingGroupsJsonList(m_autoScalingGroups.size());
   for(unsigned autoScalingGroupsIndex = 0; autoScalingGroupsIndex < autoScalingGroupsJsonList.GetLength(); ++autoScalingGroupsIndex)
   {
     autoScalingGroupsJsonList[autoScalingGroupsIndex].AsObject(m_autoScalingGroups[autoScalingGroupsIndex].Jsonize());
   }
   payload.WithArray("autoScalingGroups", std::move(autoScalingGroupsJsonList));

  }

  if(m_remoteAccessSecurityGroupHasBeenSet)
  {
   payload.WithString("remoteAccessSecurityGroup", m_remoteAccessSecurityGroup);

  }

  return payload;
}

} // namespace Model
} // namespace EKS
} // namespace Aws
