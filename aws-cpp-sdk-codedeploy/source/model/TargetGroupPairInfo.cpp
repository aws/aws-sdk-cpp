/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
    Aws::Utils::Array<JsonView> targetGroupsJsonList = jsonValue.GetArray("targetGroups");
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
   Aws::Utils::Array<JsonValue> targetGroupsJsonList(m_targetGroups.size());
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
