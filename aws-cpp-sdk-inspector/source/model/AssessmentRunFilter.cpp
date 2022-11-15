/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/inspector/model/AssessmentRunFilter.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Inspector
{
namespace Model
{

AssessmentRunFilter::AssessmentRunFilter() : 
    m_namePatternHasBeenSet(false),
    m_statesHasBeenSet(false),
    m_durationRangeHasBeenSet(false),
    m_rulesPackageArnsHasBeenSet(false),
    m_startTimeRangeHasBeenSet(false),
    m_completionTimeRangeHasBeenSet(false),
    m_stateChangeTimeRangeHasBeenSet(false)
{
}

AssessmentRunFilter::AssessmentRunFilter(JsonView jsonValue) : 
    m_namePatternHasBeenSet(false),
    m_statesHasBeenSet(false),
    m_durationRangeHasBeenSet(false),
    m_rulesPackageArnsHasBeenSet(false),
    m_startTimeRangeHasBeenSet(false),
    m_completionTimeRangeHasBeenSet(false),
    m_stateChangeTimeRangeHasBeenSet(false)
{
  *this = jsonValue;
}

AssessmentRunFilter& AssessmentRunFilter::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("namePattern"))
  {
    m_namePattern = jsonValue.GetString("namePattern");

    m_namePatternHasBeenSet = true;
  }

  if(jsonValue.ValueExists("states"))
  {
    Aws::Utils::Array<JsonView> statesJsonList = jsonValue.GetArray("states");
    for(unsigned statesIndex = 0; statesIndex < statesJsonList.GetLength(); ++statesIndex)
    {
      m_states.push_back(AssessmentRunStateMapper::GetAssessmentRunStateForName(statesJsonList[statesIndex].AsString()));
    }
    m_statesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("durationRange"))
  {
    m_durationRange = jsonValue.GetObject("durationRange");

    m_durationRangeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("rulesPackageArns"))
  {
    Aws::Utils::Array<JsonView> rulesPackageArnsJsonList = jsonValue.GetArray("rulesPackageArns");
    for(unsigned rulesPackageArnsIndex = 0; rulesPackageArnsIndex < rulesPackageArnsJsonList.GetLength(); ++rulesPackageArnsIndex)
    {
      m_rulesPackageArns.push_back(rulesPackageArnsJsonList[rulesPackageArnsIndex].AsString());
    }
    m_rulesPackageArnsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("startTimeRange"))
  {
    m_startTimeRange = jsonValue.GetObject("startTimeRange");

    m_startTimeRangeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("completionTimeRange"))
  {
    m_completionTimeRange = jsonValue.GetObject("completionTimeRange");

    m_completionTimeRangeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("stateChangeTimeRange"))
  {
    m_stateChangeTimeRange = jsonValue.GetObject("stateChangeTimeRange");

    m_stateChangeTimeRangeHasBeenSet = true;
  }

  return *this;
}

JsonValue AssessmentRunFilter::Jsonize() const
{
  JsonValue payload;

  if(m_namePatternHasBeenSet)
  {
   payload.WithString("namePattern", m_namePattern);

  }

  if(m_statesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> statesJsonList(m_states.size());
   for(unsigned statesIndex = 0; statesIndex < statesJsonList.GetLength(); ++statesIndex)
   {
     statesJsonList[statesIndex].AsString(AssessmentRunStateMapper::GetNameForAssessmentRunState(m_states[statesIndex]));
   }
   payload.WithArray("states", std::move(statesJsonList));

  }

  if(m_durationRangeHasBeenSet)
  {
   payload.WithObject("durationRange", m_durationRange.Jsonize());

  }

  if(m_rulesPackageArnsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> rulesPackageArnsJsonList(m_rulesPackageArns.size());
   for(unsigned rulesPackageArnsIndex = 0; rulesPackageArnsIndex < rulesPackageArnsJsonList.GetLength(); ++rulesPackageArnsIndex)
   {
     rulesPackageArnsJsonList[rulesPackageArnsIndex].AsString(m_rulesPackageArns[rulesPackageArnsIndex]);
   }
   payload.WithArray("rulesPackageArns", std::move(rulesPackageArnsJsonList));

  }

  if(m_startTimeRangeHasBeenSet)
  {
   payload.WithObject("startTimeRange", m_startTimeRange.Jsonize());

  }

  if(m_completionTimeRangeHasBeenSet)
  {
   payload.WithObject("completionTimeRange", m_completionTimeRange.Jsonize());

  }

  if(m_stateChangeTimeRangeHasBeenSet)
  {
   payload.WithObject("stateChangeTimeRange", m_stateChangeTimeRange.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Inspector
} // namespace Aws
