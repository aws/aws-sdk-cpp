/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot/model/ThingGroupIndexingConfiguration.h>
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

ThingGroupIndexingConfiguration::ThingGroupIndexingConfiguration() : 
    m_thingGroupIndexingMode(ThingGroupIndexingMode::NOT_SET),
    m_thingGroupIndexingModeHasBeenSet(false),
    m_managedFieldsHasBeenSet(false),
    m_customFieldsHasBeenSet(false)
{
}

ThingGroupIndexingConfiguration::ThingGroupIndexingConfiguration(JsonView jsonValue) : 
    m_thingGroupIndexingMode(ThingGroupIndexingMode::NOT_SET),
    m_thingGroupIndexingModeHasBeenSet(false),
    m_managedFieldsHasBeenSet(false),
    m_customFieldsHasBeenSet(false)
{
  *this = jsonValue;
}

ThingGroupIndexingConfiguration& ThingGroupIndexingConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("thingGroupIndexingMode"))
  {
    m_thingGroupIndexingMode = ThingGroupIndexingModeMapper::GetThingGroupIndexingModeForName(jsonValue.GetString("thingGroupIndexingMode"));

    m_thingGroupIndexingModeHasBeenSet = true;
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

  return *this;
}

JsonValue ThingGroupIndexingConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_thingGroupIndexingModeHasBeenSet)
  {
   payload.WithString("thingGroupIndexingMode", ThingGroupIndexingModeMapper::GetNameForThingGroupIndexingMode(m_thingGroupIndexingMode));
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

  return payload;
}

} // namespace Model
} // namespace IoT
} // namespace Aws
