/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot/model/ThingIndexingConfiguration.h>
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

ThingIndexingConfiguration::ThingIndexingConfiguration() : 
    m_thingIndexingMode(ThingIndexingMode::NOT_SET),
    m_thingIndexingModeHasBeenSet(false),
    m_thingConnectivityIndexingMode(ThingConnectivityIndexingMode::NOT_SET),
    m_thingConnectivityIndexingModeHasBeenSet(false),
    m_deviceDefenderIndexingMode(DeviceDefenderIndexingMode::NOT_SET),
    m_deviceDefenderIndexingModeHasBeenSet(false),
    m_namedShadowIndexingMode(NamedShadowIndexingMode::NOT_SET),
    m_namedShadowIndexingModeHasBeenSet(false),
    m_managedFieldsHasBeenSet(false),
    m_customFieldsHasBeenSet(false),
    m_filterHasBeenSet(false)
{
}

ThingIndexingConfiguration::ThingIndexingConfiguration(JsonView jsonValue) : 
    m_thingIndexingMode(ThingIndexingMode::NOT_SET),
    m_thingIndexingModeHasBeenSet(false),
    m_thingConnectivityIndexingMode(ThingConnectivityIndexingMode::NOT_SET),
    m_thingConnectivityIndexingModeHasBeenSet(false),
    m_deviceDefenderIndexingMode(DeviceDefenderIndexingMode::NOT_SET),
    m_deviceDefenderIndexingModeHasBeenSet(false),
    m_namedShadowIndexingMode(NamedShadowIndexingMode::NOT_SET),
    m_namedShadowIndexingModeHasBeenSet(false),
    m_managedFieldsHasBeenSet(false),
    m_customFieldsHasBeenSet(false),
    m_filterHasBeenSet(false)
{
  *this = jsonValue;
}

ThingIndexingConfiguration& ThingIndexingConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("thingIndexingMode"))
  {
    m_thingIndexingMode = ThingIndexingModeMapper::GetThingIndexingModeForName(jsonValue.GetString("thingIndexingMode"));

    m_thingIndexingModeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("thingConnectivityIndexingMode"))
  {
    m_thingConnectivityIndexingMode = ThingConnectivityIndexingModeMapper::GetThingConnectivityIndexingModeForName(jsonValue.GetString("thingConnectivityIndexingMode"));

    m_thingConnectivityIndexingModeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("deviceDefenderIndexingMode"))
  {
    m_deviceDefenderIndexingMode = DeviceDefenderIndexingModeMapper::GetDeviceDefenderIndexingModeForName(jsonValue.GetString("deviceDefenderIndexingMode"));

    m_deviceDefenderIndexingModeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("namedShadowIndexingMode"))
  {
    m_namedShadowIndexingMode = NamedShadowIndexingModeMapper::GetNamedShadowIndexingModeForName(jsonValue.GetString("namedShadowIndexingMode"));

    m_namedShadowIndexingModeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("managedFields"))
  {
    Aws::Utils::Array<JsonView> managedFieldsJsonList = jsonValue.GetArray("managedFields");
    for(unsigned managedFieldsIndex = 0; managedFieldsIndex < managedFieldsJsonList.GetLength(); ++managedFieldsIndex)
    {
      m_managedFields.push_back(managedFieldsJsonList[managedFieldsIndex].AsObject());
    }
    m_managedFieldsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("customFields"))
  {
    Aws::Utils::Array<JsonView> customFieldsJsonList = jsonValue.GetArray("customFields");
    for(unsigned customFieldsIndex = 0; customFieldsIndex < customFieldsJsonList.GetLength(); ++customFieldsIndex)
    {
      m_customFields.push_back(customFieldsJsonList[customFieldsIndex].AsObject());
    }
    m_customFieldsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("filter"))
  {
    m_filter = jsonValue.GetObject("filter");

    m_filterHasBeenSet = true;
  }

  return *this;
}

JsonValue ThingIndexingConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_thingIndexingModeHasBeenSet)
  {
   payload.WithString("thingIndexingMode", ThingIndexingModeMapper::GetNameForThingIndexingMode(m_thingIndexingMode));
  }

  if(m_thingConnectivityIndexingModeHasBeenSet)
  {
   payload.WithString("thingConnectivityIndexingMode", ThingConnectivityIndexingModeMapper::GetNameForThingConnectivityIndexingMode(m_thingConnectivityIndexingMode));
  }

  if(m_deviceDefenderIndexingModeHasBeenSet)
  {
   payload.WithString("deviceDefenderIndexingMode", DeviceDefenderIndexingModeMapper::GetNameForDeviceDefenderIndexingMode(m_deviceDefenderIndexingMode));
  }

  if(m_namedShadowIndexingModeHasBeenSet)
  {
   payload.WithString("namedShadowIndexingMode", NamedShadowIndexingModeMapper::GetNameForNamedShadowIndexingMode(m_namedShadowIndexingMode));
  }

  if(m_managedFieldsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> managedFieldsJsonList(m_managedFields.size());
   for(unsigned managedFieldsIndex = 0; managedFieldsIndex < managedFieldsJsonList.GetLength(); ++managedFieldsIndex)
   {
     managedFieldsJsonList[managedFieldsIndex].AsObject(m_managedFields[managedFieldsIndex].Jsonize());
   }
   payload.WithArray("managedFields", std::move(managedFieldsJsonList));

  }

  if(m_customFieldsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> customFieldsJsonList(m_customFields.size());
   for(unsigned customFieldsIndex = 0; customFieldsIndex < customFieldsJsonList.GetLength(); ++customFieldsIndex)
   {
     customFieldsJsonList[customFieldsIndex].AsObject(m_customFields[customFieldsIndex].Jsonize());
   }
   payload.WithArray("customFields", std::move(customFieldsJsonList));

  }

  if(m_filterHasBeenSet)
  {
   payload.WithObject("filter", m_filter.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace IoT
} // namespace Aws
