/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
    m_arnHasBeenSet(false),
    m_attributesHasBeenSet(false),
    m_deviceIdHasBeenSet(false),
    m_enabled(false),
    m_enabledHasBeenSet(false),
    m_remainingLife(0.0),
    m_remainingLifeHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

DeviceDescription::DeviceDescription(JsonView jsonValue) : 
    m_arnHasBeenSet(false),
    m_attributesHasBeenSet(false),
    m_deviceIdHasBeenSet(false),
    m_enabled(false),
    m_enabledHasBeenSet(false),
    m_remainingLife(0.0),
    m_remainingLifeHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
  *this = jsonValue;
}

DeviceDescription& DeviceDescription::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("arn"))
  {
    m_arn = jsonValue.GetString("arn");

    m_arnHasBeenSet = true;
  }

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

  if(jsonValue.ValueExists("tags"))
  {
    Aws::Map<Aws::String, JsonView> tagsJsonMap = jsonValue.GetObject("tags").GetAllObjects();
    for(auto& tagsItem : tagsJsonMap)
    {
      m_tags[tagsItem.first] = tagsItem.second.AsString();
    }
    m_tagsHasBeenSet = true;
  }

  return *this;
}

JsonValue DeviceDescription::Jsonize() const
{
  JsonValue payload;

  if(m_arnHasBeenSet)
  {
   payload.WithString("arn", m_arn);

  }

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

  if(m_tagsHasBeenSet)
  {
   JsonValue tagsJsonMap;
   for(auto& tagsItem : m_tags)
   {
     tagsJsonMap.WithString(tagsItem.first, tagsItem.second);
   }
   payload.WithObject("tags", std::move(tagsJsonMap));

  }

  return payload;
}

} // namespace Model
} // namespace IoT1ClickDevicesService
} // namespace Aws
