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

#include <aws/transcribestreaming/model/Result.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace TranscribeStreamingService
{
namespace Model
{

Result::Result() : 
    m_resultIdHasBeenSet(false),
    m_startTime(0.0),
    m_startTimeHasBeenSet(false),
    m_endTime(0.0),
    m_endTimeHasBeenSet(false),
    m_isPartial(false),
    m_isPartialHasBeenSet(false),
    m_alternativesHasBeenSet(false)
{
}

Result::Result(JsonView jsonValue) : 
    m_resultIdHasBeenSet(false),
    m_startTime(0.0),
    m_startTimeHasBeenSet(false),
    m_endTime(0.0),
    m_endTimeHasBeenSet(false),
    m_isPartial(false),
    m_isPartialHasBeenSet(false),
    m_alternativesHasBeenSet(false)
{
  *this = jsonValue;
}

Result& Result::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ResultId"))
  {
    m_resultId = jsonValue.GetString("ResultId");

    m_resultIdHasBeenSet = true;
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

  if(jsonValue.ValueExists("IsPartial"))
  {
    m_isPartial = jsonValue.GetBool("IsPartial");

    m_isPartialHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Alternatives"))
  {
    Array<JsonView> alternativesJsonList = jsonValue.GetArray("Alternatives");
    for(unsigned alternativesIndex = 0; alternativesIndex < alternativesJsonList.GetLength(); ++alternativesIndex)
    {
      m_alternatives.push_back(alternativesJsonList[alternativesIndex].AsObject());
    }
    m_alternativesHasBeenSet = true;
  }

  return *this;
}

JsonValue Result::Jsonize() const
{
  JsonValue payload;

  if(m_resultIdHasBeenSet)
  {
   payload.WithString("ResultId", m_resultId);

  }

  if(m_startTimeHasBeenSet)
  {
   payload.WithDouble("StartTime", m_startTime);

  }

  if(m_endTimeHasBeenSet)
  {
   payload.WithDouble("EndTime", m_endTime);

  }

  if(m_isPartialHasBeenSet)
  {
   payload.WithBool("IsPartial", m_isPartial);

  }

  if(m_alternativesHasBeenSet)
  {
   Array<JsonValue> alternativesJsonList(m_alternatives.size());
   for(unsigned alternativesIndex = 0; alternativesIndex < alternativesJsonList.GetLength(); ++alternativesIndex)
   {
     alternativesJsonList[alternativesIndex].AsObject(m_alternatives[alternativesIndex].Jsonize());
   }
   payload.WithArray("Alternatives", std::move(alternativesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace TranscribeStreamingService
} // namespace Aws
