/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/HoursOfOperationOverride.h>
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

HoursOfOperationOverride::HoursOfOperationOverride(JsonView jsonValue)
{
  *this = jsonValue;
}

HoursOfOperationOverride& HoursOfOperationOverride::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("HoursOfOperationOverrideId"))
  {
    m_hoursOfOperationOverrideId = jsonValue.GetString("HoursOfOperationOverrideId");
    m_hoursOfOperationOverrideIdHasBeenSet = true;
  }
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
  if(jsonValue.ValueExists("Config"))
  {
    Aws::Utils::Array<JsonView> configJsonList = jsonValue.GetArray("Config");
    for(unsigned configIndex = 0; configIndex < configJsonList.GetLength(); ++configIndex)
    {
      m_config.push_back(configJsonList[configIndex].AsObject());
    }
    m_configHasBeenSet = true;
  }
  if(jsonValue.ValueExists("EffectiveFrom"))
  {
    m_effectiveFrom = jsonValue.GetString("EffectiveFrom");
    m_effectiveFromHasBeenSet = true;
  }
  if(jsonValue.ValueExists("EffectiveTill"))
  {
    m_effectiveTill = jsonValue.GetString("EffectiveTill");
    m_effectiveTillHasBeenSet = true;
  }
  return *this;
}

JsonValue HoursOfOperationOverride::Jsonize() const
{
  JsonValue payload;

  if(m_hoursOfOperationOverrideIdHasBeenSet)
  {
   payload.WithString("HoursOfOperationOverrideId", m_hoursOfOperationOverrideId);

  }

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

  if(m_configHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> configJsonList(m_config.size());
   for(unsigned configIndex = 0; configIndex < configJsonList.GetLength(); ++configIndex)
   {
     configJsonList[configIndex].AsObject(m_config[configIndex].Jsonize());
   }
   payload.WithArray("Config", std::move(configJsonList));

  }

  if(m_effectiveFromHasBeenSet)
  {
   payload.WithString("EffectiveFrom", m_effectiveFrom);

  }

  if(m_effectiveTillHasBeenSet)
  {
   payload.WithString("EffectiveTill", m_effectiveTill);

  }

  return payload;
}

} // namespace Model
} // namespace Connect
} // namespace Aws
