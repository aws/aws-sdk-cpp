/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/HoursOfOperation.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Connect
{
namespace Model
{

HoursOfOperation::HoursOfOperation() : 
    m_hoursOfOperationIdHasBeenSet(false),
    m_hoursOfOperationArnHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_timeZoneHasBeenSet(false),
    m_configHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

HoursOfOperation::HoursOfOperation(JsonView jsonValue) : 
    m_hoursOfOperationIdHasBeenSet(false),
    m_hoursOfOperationArnHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_timeZoneHasBeenSet(false),
    m_configHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
  *this = jsonValue;
}

HoursOfOperation& HoursOfOperation::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("HoursOfOperationId"))
  {
    m_hoursOfOperationId = jsonValue.GetString("HoursOfOperationId");

    m_hoursOfOperationIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("HoursOfOperationArn"))
  {
    m_hoursOfOperationArn = jsonValue.GetString("HoursOfOperationArn");

    m_hoursOfOperationArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Description"))
  {
    m_description = jsonValue.GetString("Description");

    m_descriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TimeZone"))
  {
    m_timeZone = jsonValue.GetString("TimeZone");

    m_timeZoneHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Config"))
  {
    Aws::Utils::Array<JsonView> configJsonList = jsonValue.GetArray("Config");
    for(unsigned configIndex = 0; configIndex < configJsonList.GetLength(); ++configIndex)
    {
      m_config.push_back(configJsonList[configIndex].AsObject());
    }
    m_configHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Tags"))
  {
    Aws::Map<Aws::String, JsonView> tagsJsonMap = jsonValue.GetObject("Tags").GetAllObjects();
    for(auto& tagsItem : tagsJsonMap)
    {
      m_tags[tagsItem.first] = tagsItem.second.AsString();
    }
    m_tagsHasBeenSet = true;
  }

  return *this;
}

JsonValue HoursOfOperation::Jsonize() const
{
  JsonValue payload;

  if(m_hoursOfOperationIdHasBeenSet)
  {
   payload.WithString("HoursOfOperationId", m_hoursOfOperationId);

  }

  if(m_hoursOfOperationArnHasBeenSet)
  {
   payload.WithString("HoursOfOperationArn", m_hoursOfOperationArn);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_timeZoneHasBeenSet)
  {
   payload.WithString("TimeZone", m_timeZone);

  }

  if(m_configHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> configJsonList(m_config.size());
   for(unsigned configIndex = 0; configIndex < configJsonList.GetLength(); ++configIndex)
   {
     configJsonList[configIndex].AsObject(m_config[configIndex].Jsonize());
   }
   payload.WithArray("Config", std::move(configJsonList));

  }

  if(m_tagsHasBeenSet)
  {
   JsonValue tagsJsonMap;
   for(auto& tagsItem : m_tags)
   {
     tagsJsonMap.WithString(tagsItem.first, tagsItem.second);
   }
   payload.WithObject("Tags", std::move(tagsJsonMap));

  }

  return payload;
}

} // namespace Model
} // namespace Connect
} // namespace Aws
