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
    m_mitigationsHasBeenSet(false)
{
}

AttackDetail::AttackDetail(const JsonValue& jsonValue) : 
    m_attackIdHasBeenSet(false),
    m_resourceArnHasBeenSet(false),
    m_subResourcesHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_attackCountersHasBeenSet(false),
    m_mitigationsHasBeenSet(false)
{
  *this = jsonValue;
}

AttackDetail& AttackDetail::operator =(const JsonValue& jsonValue)
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
    Array<JsonValue> subResourcesJsonList = jsonValue.GetArray("SubResources");
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
    Array<JsonValue> attackCountersJsonList = jsonValue.GetArray("AttackCounters");
    for(unsigned attackCountersIndex = 0; attackCountersIndex < attackCountersJsonList.GetLength(); ++attackCountersIndex)
    {
      m_attackCounters.push_back(attackCountersJsonList[attackCountersIndex].AsObject());
    }
    m_attackCountersHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Mitigations"))
  {
    Array<JsonValue> mitigationsJsonList = jsonValue.GetArray("Mitigations");
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
   Array<JsonValue> subResourcesJsonList(m_subResources.size());
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
   Array<JsonValue> attackCountersJsonList(m_attackCounters.size());
   for(unsigned attackCountersIndex = 0; attackCountersIndex < attackCountersJsonList.GetLength(); ++attackCountersIndex)
   {
     attackCountersJsonList[attackCountersIndex].AsObject(m_attackCounters[attackCountersIndex].Jsonize());
   }
   payload.WithArray("AttackCounters", std::move(attackCountersJsonList));

  }

  if(m_mitigationsHasBeenSet)
  {
   Array<JsonValue> mitigationsJsonList(m_mitigations.size());
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