﻿/*
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

#include <aws/iot1click-devices/model/DeviceDescription.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IoT1ClickDevicesService
{
namespace Model
{

DeviceDescription::DeviceDescription() : 
    m_attributesHasBeenSet(false),
    m_deviceIdHasBeenSet(false),
    m_enabled(false),
    m_enabledHasBeenSet(false),
    m_remainingLife(0.0),
    m_remainingLifeHasBeenSet(false),
    m_typeHasBeenSet(false)
{
}

DeviceDescription::DeviceDescription(JsonView jsonValue) : 
    m_attributesHasBeenSet(false),
    m_deviceIdHasBeenSet(false),
    m_enabled(false),
    m_enabledHasBeenSet(false),
    m_remainingLife(0.0),
    m_remainingLifeHasBeenSet(false),
    m_typeHasBeenSet(false)
{
  *this = jsonValue;
}

DeviceDescription& DeviceDescription::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("attributes"))
  {
    Aws::Map<Aws::String, JsonView> attributesJsonMap = jsonValue.GetObject("attributes").GetAllObjects();
    for(auto& attributesItem : attributesJsonMap)
    {
      m_attributes[attributesItem.first] = attributesItem.second.AsString();
    }
    m_attributesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("deviceId"))
  {
    m_deviceId = jsonValue.GetString("deviceId");

    m_deviceIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("enabled"))
  {
    m_enabled = jsonValue.GetBool("enabled");

    m_enabledHasBeenSet = true;
  }

  if(jsonValue.ValueExists("remainingLife"))
  {
    m_remainingLife = jsonValue.GetDouble("remainingLife");

    m_remainingLifeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("type"))
  {
    m_type = jsonValue.GetString("type");

    m_typeHasBeenSet = true;
  }

  return *this;
}

JsonValue DeviceDescription::Jsonize() const
{
  JsonValue payload;

  if(m_attributesHasBeenSet)
  {
   JsonValue attributesJsonMap;
   for(auto& attributesItem : m_attributes)
   {
     attributesJsonMap.WithString(attributesItem.first, attributesItem.second);
   }
   payload.WithObject("attributes", std::move(attributesJsonMap));

  }

  if(m_deviceIdHasBeenSet)
  {
   payload.WithString("deviceId", m_deviceId);

  }

  if(m_enabledHasBeenSet)
  {
   payload.WithBool("enabled", m_enabled);

  }

  if(m_remainingLifeHasBeenSet)
  {
   payload.WithDouble("remainingLife", m_remainingLife);

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("type", m_type);

  }

  return payload;
}

} // namespace Model
} // namespace IoT1ClickDevicesService
} // namespace Aws
