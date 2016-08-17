/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/inspector/model/AssessmentsFilter.h>
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

AssessmentsFilter::AssessmentsFilter() : 
    m_assessmentNamePatternsHasBeenSet(false),
    m_assessmentStatesHasBeenSet(false),
    m_dataCollected(false),
    m_dataCollectedHasBeenSet(false),
    m_startTimeRangeHasBeenSet(false),
    m_endTimeRangeHasBeenSet(false),
    m_durationRangeHasBeenSet(false)
{
}

AssessmentsFilter::AssessmentsFilter(const JsonValue& jsonValue) : 
    m_assessmentNamePatternsHasBeenSet(false),
    m_assessmentStatesHasBeenSet(false),
    m_dataCollected(false),
    m_dataCollectedHasBeenSet(false),
    m_startTimeRangeHasBeenSet(false),
    m_endTimeRangeHasBeenSet(false),
    m_durationRangeHasBeenSet(false)
{
  *this = jsonValue;
}

AssessmentsFilter& AssessmentsFilter::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("assessmentNamePatterns"))
  {
    Array<JsonValue> assessmentNamePatternsJsonList = jsonValue.GetArray("assessmentNamePatterns");
    for(unsigned assessmentNamePatternsIndex = 0; assessmentNamePatternsIndex < assessmentNamePatternsJsonList.GetLength(); ++assessmentNamePatternsIndex)
    {
      m_assessmentNamePatterns.push_back(assessmentNamePatternsJsonList[assessmentNamePatternsIndex].AsString());
    }
    m_assessmentNamePatternsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("assessmentStates"))
  {
    Array<JsonValue> assessmentStatesJsonList = jsonValue.GetArray("assessmentStates");
    for(unsigned assessmentStatesIndex = 0; assessmentStatesIndex < assessmentStatesJsonList.GetLength(); ++assessmentStatesIndex)
    {
      m_assessmentStates.push_back(assessmentStatesJsonList[assessmentStatesIndex].AsString());
    }
    m_assessmentStatesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("dataCollected"))
  {
    m_dataCollected = jsonValue.GetBool("dataCollected");

    m_dataCollectedHasBeenSet = true;
  }

  if(jsonValue.ValueExists("startTimeRange"))
  {
    m_startTimeRange = jsonValue.GetObject("startTimeRange");

    m_startTimeRangeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("endTimeRange"))
  {
    m_endTimeRange = jsonValue.GetObject("endTimeRange");

    m_endTimeRangeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("durationRange"))
  {
    m_durationRange = jsonValue.GetObject("durationRange");

    m_durationRangeHasBeenSet = true;
  }

  return *this;
}

JsonValue AssessmentsFilter::Jsonize() const
{
  JsonValue payload;

  if(m_assessmentNamePatternsHasBeenSet)
  {
   Array<JsonValue> assessmentNamePatternsJsonList(m_assessmentNamePatterns.size());
   for(unsigned assessmentNamePatternsIndex = 0; assessmentNamePatternsIndex < assessmentNamePatternsJsonList.GetLength(); ++assessmentNamePatternsIndex)
   {
     assessmentNamePatternsJsonList[assessmentNamePatternsIndex].AsString(m_assessmentNamePatterns[assessmentNamePatternsIndex]);
   }
   payload.WithArray("assessmentNamePatterns", std::move(assessmentNamePatternsJsonList));

  }

  if(m_assessmentStatesHasBeenSet)
  {
   Array<JsonValue> assessmentStatesJsonList(m_assessmentStates.size());
   for(unsigned assessmentStatesIndex = 0; assessmentStatesIndex < assessmentStatesJsonList.GetLength(); ++assessmentStatesIndex)
   {
     assessmentStatesJsonList[assessmentStatesIndex].AsString(m_assessmentStates[assessmentStatesIndex]);
   }
   payload.WithArray("assessmentStates", std::move(assessmentStatesJsonList));

  }

  if(m_dataCollectedHasBeenSet)
  {
   payload.WithBool("dataCollected", m_dataCollected);

  }

  if(m_startTimeRangeHasBeenSet)
  {
   payload.WithObject("startTimeRange", m_startTimeRange.Jsonize());

  }

  if(m_endTimeRangeHasBeenSet)
  {
   payload.WithObject("endTimeRange", m_endTimeRange.Jsonize());

  }

  if(m_durationRangeHasBeenSet)
  {
   payload.WithObject("durationRange", m_durationRange.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Inspector
} // namespace Aws