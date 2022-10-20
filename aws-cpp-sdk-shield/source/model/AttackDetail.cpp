/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/shield/model/AttackDetail.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Shield
{
namespace Model
{

AttackDetail::AttackDetail() : 
    m_attackIdHasBeenSet(false),
    m_resourceArnHasBeenSet(false),
    m_subResourcesHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_attackCountersHasBeenSet(false),
    m_attackPropertiesHasBeenSet(false),
    m_mitigationsHasBeenSet(false)
{
}

AttackDetail::AttackDetail(JsonView jsonValue) : 
    m_attackIdHasBeenSet(false),
    m_resourceArnHasBeenSet(false),
    m_subResourcesHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_attackCountersHasBeenSet(false),
    m_attackPropertiesHasBeenSet(false),
    m_mitigationsHasBeenSet(false)
{
  *this = jsonValue;
}

AttackDetail& AttackDetail::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("AttackId"))
  {
    m_attackId = jsonValue.GetString("AttackId");

    m_attackIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ResourceArn"))
  {
    m_resourceArn = jsonValue.GetString("ResourceArn");

    m_resourceArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SubResources"))
  {
    Aws::Utils::Array<JsonView> subResourcesJsonList = jsonValue.GetArray("SubResources");
    for(unsigned subResourcesIndex = 0; subResourcesIndex < subResourcesJsonList.GetLength(); ++subResourcesIndex)
    {
      m_subResources.push_back(subResourcesJsonList[subResourcesIndex].AsObject());
    }
    m_subResourcesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("StartTime"))
  {
    m_startTime = jsonValue.GetDouble("StartTime");

    m_startTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EndTime"))
  {
    m_endTime = jsonValue.GetDouble("EndTime");

    m_endTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AttackCounters"))
  {
    Aws::Utils::Array<JsonView> attackCountersJsonList = jsonValue.GetArray("AttackCounters");
    for(unsigned attackCountersIndex = 0; attackCountersIndex < attackCountersJsonList.GetLength(); ++attackCountersIndex)
    {
      m_attackCounters.push_back(attackCountersJsonList[attackCountersIndex].AsObject());
    }
    m_attackCountersHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AttackProperties"))
  {
    Aws::Utils::Array<JsonView> attackPropertiesJsonList = jsonValue.GetArray("AttackProperties");
    for(unsigned attackPropertiesIndex = 0; attackPropertiesIndex < attackPropertiesJsonList.GetLength(); ++attackPropertiesIndex)
    {
      m_attackProperties.push_back(attackPropertiesJsonList[attackPropertiesIndex].AsObject());
    }
    m_attackPropertiesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Mitigations"))
  {
    Aws::Utils::Array<JsonView> mitigationsJsonList = jsonValue.GetArray("Mitigations");
    for(unsigned mitigationsIndex = 0; mitigationsIndex < mitigationsJsonList.GetLength(); ++mitigationsIndex)
    {
      m_mitigations.push_back(mitigationsJsonList[mitigationsIndex].AsObject());
    }
    m_mitigationsHasBeenSet = true;
  }

  return *this;
}

JsonValue AttackDetail::Jsonize() const
{
  JsonValue payload;

  if(m_attackIdHasBeenSet)
  {
   payload.WithString("AttackId", m_attackId);

  }

  if(m_resourceArnHasBeenSet)
  {
   payload.WithString("ResourceArn", m_resourceArn);

  }

  if(m_subResourcesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> subResourcesJsonList(m_subResources.size());
   for(unsigned subResourcesIndex = 0; subResourcesIndex < subResourcesJsonList.GetLength(); ++subResourcesIndex)
   {
     subResourcesJsonList[subResourcesIndex].AsObject(m_subResources[subResourcesIndex].Jsonize());
   }
   payload.WithArray("SubResources", std::move(subResourcesJsonList));

  }

  if(m_startTimeHasBeenSet)
  {
   payload.WithDouble("StartTime", m_startTime.SecondsWithMSPrecision());
  }

  if(m_endTimeHasBeenSet)
  {
   payload.WithDouble("EndTime", m_endTime.SecondsWithMSPrecision());
  }

  if(m_attackCountersHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> attackCountersJsonList(m_attackCounters.size());
   for(unsigned attackCountersIndex = 0; attackCountersIndex < attackCountersJsonList.GetLength(); ++attackCountersIndex)
   {
     attackCountersJsonList[attackCountersIndex].AsObject(m_attackCounters[attackCountersIndex].Jsonize());
   }
   payload.WithArray("AttackCounters", std::move(attackCountersJsonList));

  }

  if(m_attackPropertiesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> attackPropertiesJsonList(m_attackProperties.size());
   for(unsigned attackPropertiesIndex = 0; attackPropertiesIndex < attackPropertiesJsonList.GetLength(); ++attackPropertiesIndex)
   {
     attackPropertiesJsonList[attackPropertiesIndex].AsObject(m_attackProperties[attackPropertiesIndex].Jsonize());
   }
   payload.WithArray("AttackProperties", std::move(attackPropertiesJsonList));

  }

  if(m_mitigationsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> mitigationsJsonList(m_mitigations.size());
   for(unsigned mitigationsIndex = 0; mitigationsIndex < mitigationsJsonList.GetLength(); ++mitigationsIndex)
   {
     mitigationsJsonList[mitigationsIndex].AsObject(m_mitigations[mitigationsIndex].Jsonize());
   }
   payload.WithArray("Mitigations", std::move(mitigationsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace Shield
} // namespace Aws
