/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codeguruprofiler/model/Pattern.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CodeGuruProfiler
{
namespace Model
{

Pattern::Pattern() : 
    m_countersToAggregateHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_idHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_resolutionStepsHasBeenSet(false),
    m_targetFramesHasBeenSet(false),
    m_thresholdPercent(0.0),
    m_thresholdPercentHasBeenSet(false)
{
}

Pattern::Pattern(JsonView jsonValue) : 
    m_countersToAggregateHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_idHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_resolutionStepsHasBeenSet(false),
    m_targetFramesHasBeenSet(false),
    m_thresholdPercent(0.0),
    m_thresholdPercentHasBeenSet(false)
{
  *this = jsonValue;
}

Pattern& Pattern::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("countersToAggregate"))
  {
    Aws::Utils::Array<JsonView> countersToAggregateJsonList = jsonValue.GetArray("countersToAggregate");
    for(unsigned countersToAggregateIndex = 0; countersToAggregateIndex < countersToAggregateJsonList.GetLength(); ++countersToAggregateIndex)
    {
      m_countersToAggregate.push_back(countersToAggregateJsonList[countersToAggregateIndex].AsString());
    }
    m_countersToAggregateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("description"))
  {
    m_description = jsonValue.GetString("description");

    m_descriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("id"))
  {
    m_id = jsonValue.GetString("id");

    m_idHasBeenSet = true;
  }

  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("resolutionSteps"))
  {
    m_resolutionSteps = jsonValue.GetString("resolutionSteps");

    m_resolutionStepsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("targetFrames"))
  {
    Aws::Utils::Array<JsonView> targetFramesJsonList = jsonValue.GetArray("targetFrames");
    for(unsigned targetFramesIndex = 0; targetFramesIndex < targetFramesJsonList.GetLength(); ++targetFramesIndex)
    {
      Aws::Utils::Array<JsonView> targetFrameJsonList = targetFramesJsonList[targetFramesIndex].AsArray();
      Aws::Vector<Aws::String> targetFrameList;
      targetFrameList.reserve((size_t)targetFrameJsonList.GetLength());
      for(unsigned targetFrameIndex = 0; targetFrameIndex < targetFrameJsonList.GetLength(); ++targetFrameIndex)
      {
        targetFrameList.push_back(targetFrameJsonList[targetFrameIndex].AsString());
      }
      m_targetFrames.push_back(std::move(targetFrameList));
    }
    m_targetFramesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("thresholdPercent"))
  {
    m_thresholdPercent = jsonValue.GetDouble("thresholdPercent");

    m_thresholdPercentHasBeenSet = true;
  }

  return *this;
}

JsonValue Pattern::Jsonize() const
{
  JsonValue payload;

  if(m_countersToAggregateHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> countersToAggregateJsonList(m_countersToAggregate.size());
   for(unsigned countersToAggregateIndex = 0; countersToAggregateIndex < countersToAggregateJsonList.GetLength(); ++countersToAggregateIndex)
   {
     countersToAggregateJsonList[countersToAggregateIndex].AsString(m_countersToAggregate[countersToAggregateIndex]);
   }
   payload.WithArray("countersToAggregate", std::move(countersToAggregateJsonList));

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_idHasBeenSet)
  {
   payload.WithString("id", m_id);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_resolutionStepsHasBeenSet)
  {
   payload.WithString("resolutionSteps", m_resolutionSteps);

  }

  if(m_targetFramesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> targetFramesJsonList(m_targetFrames.size());
   for(unsigned targetFramesIndex = 0; targetFramesIndex < targetFramesJsonList.GetLength(); ++targetFramesIndex)
   {
     Aws::Utils::Array<JsonValue> targetFrameJsonList(m_targetFrames[targetFramesIndex].size());
     for(unsigned targetFrameIndex = 0; targetFrameIndex < targetFrameJsonList.GetLength(); ++targetFrameIndex)
     {
       targetFrameJsonList[targetFrameIndex].AsString(m_targetFrames[targetFramesIndex][targetFrameIndex]);
     }
     targetFramesJsonList[targetFramesIndex].AsArray(std::move(targetFrameJsonList));
   }
   payload.WithArray("targetFrames", std::move(targetFramesJsonList));

  }

  if(m_thresholdPercentHasBeenSet)
  {
   payload.WithDouble("thresholdPercent", m_thresholdPercent);

  }

  return payload;
}

} // namespace Model
} // namespace CodeGuruProfiler
} // namespace Aws
