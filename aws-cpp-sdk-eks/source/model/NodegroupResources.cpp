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
    Array<JsonView> autoScalingGroupsJsonList = jsonValue.GetArray("autoScalingGroups");
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
   Array<JsonValue> autoScalingGroupsJsonList(m_autoScalingGroups.size());
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
