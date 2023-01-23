/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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

DeviceTemplate::DeviceTemplate(JsonView jsonValue) : 
    m_deviceTypeHasBeenSet(false),
    m_callbackOverridesHasBeenSet(false)
{
  *this = jsonValue;
}

DeviceTemplate& DeviceTemplate::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("deviceType"))
  {
    m_deviceType = jsonValue.GetString("deviceType");

    m_deviceTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("callbackOverrides"))
  {
    Aws::Map<Aws::String, JsonView> callbackOverridesJsonMap = jsonValue.GetObject("callbackOverrides").GetAllObjects();
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
