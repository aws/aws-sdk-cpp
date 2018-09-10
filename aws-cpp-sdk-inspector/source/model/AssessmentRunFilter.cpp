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
    Array<JsonView> statesJsonList = jsonValue.GetArray("states");
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
    Array<JsonView> rulesPackageArnsJsonList = jsonValue.GetArray("rulesPackageArns");
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
   Array<JsonValue> statesJsonList(m_states.size());
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
   Array<JsonValue> rulesPackageArnsJsonList(m_rulesPackageArns.size());
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
