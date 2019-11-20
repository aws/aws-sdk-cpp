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

#include <aws/quicksight/model/ResourcePermission.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace QuickSight
{
namespace Model
{

ResourcePermission::ResourcePermission() : 
    m_principalHasBeenSet(false),
    m_actionsHasBeenSet(false)
{
}

ResourcePermission::ResourcePermission(JsonView jsonValue) : 
    m_principalHasBeenSet(false),
    m_actionsHasBeenSet(false)
{
  *this = jsonValue;
}

ResourcePermission& ResourcePermission::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Principal"))
  {
    m_principal = jsonValue.GetString("Principal");

    m_principalHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Actions"))
  {
    Array<JsonView> actionsJsonList = jsonValue.GetArray("Actions");
    for(unsigned actionsIndex = 0; actionsIndex < actionsJsonList.GetLength(); ++actionsIndex)
    {
      m_actions.push_back(actionsJsonList[actionsIndex].AsString());
    }
    m_actionsHasBeenSet = true;
  }

  return *this;
}

JsonValue ResourcePermission::Jsonize() const
{
  JsonValue payload;

  if(m_principalHasBeenSet)
  {
   payload.WithString("Principal", m_principal);

  }

  if(m_actionsHasBeenSet)
  {
   Array<JsonValue> actionsJsonList(m_actions.size());
   for(unsigned actionsIndex = 0; actionsIndex < actionsJsonList.GetLength(); ++actionsIndex)
   {
     actionsJsonList[actionsIndex].AsString(m_actions[actionsIndex]);
   }
   payload.WithArray("Actions", std::move(actionsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
