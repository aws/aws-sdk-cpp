﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/evidently/model/ScheduledSplitConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CloudWatchEvidently
{
namespace Model
{

ScheduledSplitConfig::ScheduledSplitConfig(JsonView jsonValue)
{
  *this = jsonValue;
}

ScheduledSplitConfig& ScheduledSplitConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("groupWeights"))
  {
    Aws::Map<Aws::String, JsonView> groupWeightsJsonMap = jsonValue.GetObject("groupWeights").GetAllObjects();
    for(auto& groupWeightsItem : groupWeightsJsonMap)
    {
      m_groupWeights[groupWeightsItem.first] = groupWeightsItem.second.AsInt64();
    }
    m_groupWeightsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("segmentOverrides"))
  {
    Aws::Utils::Array<JsonView> segmentOverridesJsonList = jsonValue.GetArray("segmentOverrides");
    for(unsigned segmentOverridesIndex = 0; segmentOverridesIndex < segmentOverridesJsonList.GetLength(); ++segmentOverridesIndex)
    {
      m_segmentOverrides.push_back(segmentOverridesJsonList[segmentOverridesIndex].AsObject());
    }
    m_segmentOverridesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("startTime"))
  {
    m_startTime = jsonValue.GetDouble("startTime");
    m_startTimeHasBeenSet = true;
  }
  return *this;
}

JsonValue ScheduledSplitConfig::Jsonize() const
{
  JsonValue payload;

  if(m_groupWeightsHasBeenSet)
  {
   JsonValue groupWeightsJsonMap;
   for(auto& groupWeightsItem : m_groupWeights)
   {
     groupWeightsJsonMap.WithInt64(groupWeightsItem.first, groupWeightsItem.second);
   }
   payload.WithObject("groupWeights", std::move(groupWeightsJsonMap));

  }

  if(m_segmentOverridesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> segmentOverridesJsonList(m_segmentOverrides.size());
   for(unsigned segmentOverridesIndex = 0; segmentOverridesIndex < segmentOverridesJsonList.GetLength(); ++segmentOverridesIndex)
   {
     segmentOverridesJsonList[segmentOverridesIndex].AsObject(m_segmentOverrides[segmentOverridesIndex].Jsonize());
   }
   payload.WithArray("segmentOverrides", std::move(segmentOverridesJsonList));

  }

  if(m_startTimeHasBeenSet)
  {
   payload.WithDouble("startTime", m_startTime.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace CloudWatchEvidently
} // namespace Aws
