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

#include <aws/iotanalytics/model/Pipeline.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IoTAnalytics
{
namespace Model
{

Pipeline::Pipeline() : 
    m_nameHasBeenSet(false),
    m_arnHasBeenSet(false),
    m_activitiesHasBeenSet(false),
    m_reprocessingSummariesHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_lastUpdateTimeHasBeenSet(false)
{
}

Pipeline::Pipeline(JsonView jsonValue) : 
    m_nameHasBeenSet(false),
    m_arnHasBeenSet(false),
    m_activitiesHasBeenSet(false),
    m_reprocessingSummariesHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_lastUpdateTimeHasBeenSet(false)
{
  *this = jsonValue;
}

Pipeline& Pipeline::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("arn"))
  {
    m_arn = jsonValue.GetString("arn");

    m_arnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("activities"))
  {
    Array<JsonView> activitiesJsonList = jsonValue.GetArray("activities");
    for(unsigned activitiesIndex = 0; activitiesIndex < activitiesJsonList.GetLength(); ++activitiesIndex)
    {
      m_activities.push_back(activitiesJsonList[activitiesIndex].AsObject());
    }
    m_activitiesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("reprocessingSummaries"))
  {
    Array<JsonView> reprocessingSummariesJsonList = jsonValue.GetArray("reprocessingSummaries");
    for(unsigned reprocessingSummariesIndex = 0; reprocessingSummariesIndex < reprocessingSummariesJsonList.GetLength(); ++reprocessingSummariesIndex)
    {
      m_reprocessingSummaries.push_back(reprocessingSummariesJsonList[reprocessingSummariesIndex].AsObject());
    }
    m_reprocessingSummariesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("creationTime"))
  {
    m_creationTime = jsonValue.GetDouble("creationTime");

    m_creationTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("lastUpdateTime"))
  {
    m_lastUpdateTime = jsonValue.GetDouble("lastUpdateTime");

    m_lastUpdateTimeHasBeenSet = true;
  }

  return *this;
}

JsonValue Pipeline::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_arnHasBeenSet)
  {
   payload.WithString("arn", m_arn);

  }

  if(m_activitiesHasBeenSet)
  {
   Array<JsonValue> activitiesJsonList(m_activities.size());
   for(unsigned activitiesIndex = 0; activitiesIndex < activitiesJsonList.GetLength(); ++activitiesIndex)
   {
     activitiesJsonList[activitiesIndex].AsObject(m_activities[activitiesIndex].Jsonize());
   }
   payload.WithArray("activities", std::move(activitiesJsonList));

  }

  if(m_reprocessingSummariesHasBeenSet)
  {
   Array<JsonValue> reprocessingSummariesJsonList(m_reprocessingSummaries.size());
   for(unsigned reprocessingSummariesIndex = 0; reprocessingSummariesIndex < reprocessingSummariesJsonList.GetLength(); ++reprocessingSummariesIndex)
   {
     reprocessingSummariesJsonList[reprocessingSummariesIndex].AsObject(m_reprocessingSummaries[reprocessingSummariesIndex].Jsonize());
   }
   payload.WithArray("reprocessingSummaries", std::move(reprocessingSummariesJsonList));

  }

  if(m_creationTimeHasBeenSet)
  {
   payload.WithDouble("creationTime", m_creationTime.SecondsWithMSPrecision());
  }

  if(m_lastUpdateTimeHasBeenSet)
  {
   payload.WithDouble("lastUpdateTime", m_lastUpdateTime.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace IoTAnalytics
} // namespace Aws
