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

#include <aws/iot/model/AuthInfo.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IoT
{
namespace Model
{

AuthInfo::AuthInfo() : 
    m_actionType(ActionType::NOT_SET),
    m_actionTypeHasBeenSet(false),
    m_resourcesHasBeenSet(false)
{
}

AuthInfo::AuthInfo(const JsonValue& jsonValue) : 
    m_actionType(ActionType::NOT_SET),
    m_actionTypeHasBeenSet(false),
    m_resourcesHasBeenSet(false)
{
  *this = jsonValue;
}

AuthInfo& AuthInfo::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("actionType"))
  {
    m_actionType = ActionTypeMapper::GetActionTypeForName(jsonValue.GetString("actionType"));

    m_actionTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("resources"))
  {
    Array<JsonValue> resourcesJsonList = jsonValue.GetArray("resources");
    for(unsigned resourcesIndex = 0; resourcesIndex < resourcesJsonList.GetLength(); ++resourcesIndex)
    {
      m_resources.push_back(resourcesJsonList[resourcesIndex].AsString());
    }
    m_resourcesHasBeenSet = true;
  }

  return *this;
}

JsonValue AuthInfo::Jsonize() const
{
  JsonValue payload;

  if(m_actionTypeHasBeenSet)
  {
   payload.WithString("actionType", ActionTypeMapper::GetNameForActionType(m_actionType));
  }

  if(m_resourcesHasBeenSet)
  {
   Array<JsonValue> resourcesJsonList(m_resources.size());
   for(unsigned resourcesIndex = 0; resourcesIndex < resourcesJsonList.GetLength(); ++resourcesIndex)
   {
     resourcesJsonList[resourcesIndex].AsString(m_resources[resourcesIndex]);
   }
   payload.WithArray("resources", std::move(resourcesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace IoT
} // namespace Aws
