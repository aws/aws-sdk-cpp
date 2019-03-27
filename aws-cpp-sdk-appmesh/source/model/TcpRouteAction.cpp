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

#include <aws/appmesh/model/TcpRouteAction.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace AppMesh
{
namespace Model
{

TcpRouteAction::TcpRouteAction() : 
    m_weightedTargetsHasBeenSet(false)
{
}

TcpRouteAction::TcpRouteAction(JsonView jsonValue) : 
    m_weightedTargetsHasBeenSet(false)
{
  *this = jsonValue;
}

TcpRouteAction& TcpRouteAction::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("weightedTargets"))
  {
    Array<JsonView> weightedTargetsJsonList = jsonValue.GetArray("weightedTargets");
    for(unsigned weightedTargetsIndex = 0; weightedTargetsIndex < weightedTargetsJsonList.GetLength(); ++weightedTargetsIndex)
    {
      m_weightedTargets.push_back(weightedTargetsJsonList[weightedTargetsIndex].AsObject());
    }
    m_weightedTargetsHasBeenSet = true;
  }

  return *this;
}

JsonValue TcpRouteAction::Jsonize() const
{
  JsonValue payload;

  if(m_weightedTargetsHasBeenSet)
  {
   Array<JsonValue> weightedTargetsJsonList(m_weightedTargets.size());
   for(unsigned weightedTargetsIndex = 0; weightedTargetsIndex < weightedTargetsJsonList.GetLength(); ++weightedTargetsIndex)
   {
     weightedTargetsJsonList[weightedTargetsIndex].AsObject(m_weightedTargets[weightedTargetsIndex].Jsonize());
   }
   payload.WithArray("weightedTargets", std::move(weightedTargetsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace AppMesh
} // namespace Aws
