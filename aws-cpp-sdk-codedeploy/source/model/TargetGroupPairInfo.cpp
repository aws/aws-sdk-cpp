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

#include <aws/codedeploy/model/TargetGroupPairInfo.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CodeDeploy
{
namespace Model
{

TargetGroupPairInfo::TargetGroupPairInfo() : 
    m_targetGroupsHasBeenSet(false),
    m_prodTrafficRouteHasBeenSet(false),
    m_testTrafficRouteHasBeenSet(false)
{
}

TargetGroupPairInfo::TargetGroupPairInfo(JsonView jsonValue) : 
    m_targetGroupsHasBeenSet(false),
    m_prodTrafficRouteHasBeenSet(false),
    m_testTrafficRouteHasBeenSet(false)
{
  *this = jsonValue;
}

TargetGroupPairInfo& TargetGroupPairInfo::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("targetGroups"))
  {
    Array<JsonView> targetGroupsJsonList = jsonValue.GetArray("targetGroups");
    for(unsigned targetGroupsIndex = 0; targetGroupsIndex < targetGroupsJsonList.GetLength(); ++targetGroupsIndex)
    {
      m_targetGroups.push_back(targetGroupsJsonList[targetGroupsIndex].AsObject());
    }
    m_targetGroupsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("prodTrafficRoute"))
  {
    m_prodTrafficRoute = jsonValue.GetObject("prodTrafficRoute");

    m_prodTrafficRouteHasBeenSet = true;
  }

  if(jsonValue.ValueExists("testTrafficRoute"))
  {
    m_testTrafficRoute = jsonValue.GetObject("testTrafficRoute");

    m_testTrafficRouteHasBeenSet = true;
  }

  return *this;
}

JsonValue TargetGroupPairInfo::Jsonize() const
{
  JsonValue payload;

  if(m_targetGroupsHasBeenSet)
  {
   Array<JsonValue> targetGroupsJsonList(m_targetGroups.size());
   for(unsigned targetGroupsIndex = 0; targetGroupsIndex < targetGroupsJsonList.GetLength(); ++targetGroupsIndex)
   {
     targetGroupsJsonList[targetGroupsIndex].AsObject(m_targetGroups[targetGroupsIndex].Jsonize());
   }
   payload.WithArray("targetGroups", std::move(targetGroupsJsonList));

  }

  if(m_prodTrafficRouteHasBeenSet)
  {
   payload.WithObject("prodTrafficRoute", m_prodTrafficRoute.Jsonize());

  }

  if(m_testTrafficRouteHasBeenSet)
  {
   payload.WithObject("testTrafficRoute", m_testTrafficRoute.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace CodeDeploy
} // namespace Aws
