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

#include <aws/iot1click-projects/model/DeviceTemplate.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IoT1ClickProjects
{
namespace Model
{

DeviceTemplate::DeviceTemplate() : 
    m_deviceTypeHasBeenSet(false),
    m_callbackOverridesHasBeenSet(false)
{
}

DeviceTemplate::DeviceTemplate(const JsonValue& jsonValue) : 
    m_deviceTypeHasBeenSet(false),
    m_callbackOverridesHasBeenSet(false)
{
  *this = jsonValue;
}

DeviceTemplate& DeviceTemplate::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("deviceType"))
  {
    m_deviceType = jsonValue.GetString("deviceType");

    m_deviceTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("callbackOverrides"))
  {
    Aws::Map<Aws::String, JsonValue> callbackOverridesJsonMap = jsonValue.GetObject("callbackOverrides").GetAllObjects();
    for(auto& callbackOverridesItem : callbackOverridesJsonMap)
    {
      m_callbackOverrides[callbackOverridesItem.first] = callbackOverridesItem.second.AsString();
    }
    m_callbackOverridesHasBeenSet = true;
  }

  return *this;
}

JsonValue DeviceTemplate::Jsonize() const
{
  JsonValue payload;

  if(m_deviceTypeHasBeenSet)
  {
   payload.WithString("deviceType", m_deviceType);

  }

  if(m_callbackOverridesHasBeenSet)
  {
   JsonValue callbackOverridesJsonMap;
   for(auto& callbackOverridesItem : m_callbackOverrides)
   {
     callbackOverridesJsonMap.WithString(callbackOverridesItem.first, callbackOverridesItem.second);
   }
   payload.WithObject("callbackOverrides", std::move(callbackOverridesJsonMap));

  }

  return payload;
}

} // namespace Model
} // namespace IoT1ClickProjects
} // namespace Aws
