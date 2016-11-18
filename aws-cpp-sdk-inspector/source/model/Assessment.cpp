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
#include <aws/inspector/model/Assessment.h>
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

Assessment::Assessment() : 
    m_assessmentArnHasBeenSet(false),
    m_assessmentNameHasBeenSet(false),
    m_applicationArnHasBeenSet(false),
    m_assessmentStateHasBeenSet(false),
    m_failureMessageHasBeenSet(false),
    m_dataCollected(false),
    m_dataCollectedHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_durationInSeconds(0),
    m_durationInSecondsHasBeenSet(false),
    m_userAttributesForFindingsHasBeenSet(false)
{
}

Assessment::Assessment(const JsonValue& jsonValue) : 
    m_assessmentArnHasBeenSet(false),
    m_assessmentNameHasBeenSet(false),
    m_applicationArnHasBeenSet(false),
    m_assessmentStateHasBeenSet(false),
    m_failureMessageHasBeenSet(false),
    m_dataCollected(false),
    m_dataCollectedHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_durationInSeconds(0),
    m_durationInSecondsHasBeenSet(false),
    m_userAttributesForFindingsHasBeenSet(false)
{
  *this = jsonValue;
}

Assessment& Assessment::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("assessmentArn"))
  {
    m_assessmentArn = jsonValue.GetString("assessmentArn");

    m_assessmentArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("assessmentName"))
  {
    m_assessmentName = jsonValue.GetString("assessmentName");

    m_assessmentNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("applicationArn"))
  {
    m_applicationArn = jsonValue.GetString("applicationArn");

    m_applicationArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("assessmentState"))
  {
    m_assessmentState = jsonValue.GetString("assessmentState");

    m_assessmentStateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("failureMessage"))
  {
    m_failureMessage = jsonValue.GetString("failureMessage");

    m_failureMessageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("dataCollected"))
  {
    m_dataCollected = jsonValue.GetBool("dataCollected");

    m_dataCollectedHasBeenSet = true;
  }

  if(jsonValue.ValueExists("startTime"))
  {
    m_startTime = jsonValue.GetDouble("startTime");

    m_startTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("endTime"))
  {
    m_endTime = jsonValue.GetDouble("endTime");

    m_endTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("durationInSeconds"))
  {
    m_durationInSeconds = jsonValue.GetInteger("durationInSeconds");

    m_durationInSecondsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("userAttributesForFindings"))
  {
    Array<JsonValue> userAttributesForFindingsJsonList = jsonValue.GetArray("userAttributesForFindings");
    for(unsigned userAttributesForFindingsIndex = 0; userAttributesForFindingsIndex < userAttributesForFindingsJsonList.GetLength(); ++userAttributesForFindingsIndex)
    {
      m_userAttributesForFindings.push_back(userAttributesForFindingsJsonList[userAttributesForFindingsIndex].AsObject());
    }
    m_userAttributesForFindingsHasBeenSet = true;
  }

  return *this;
}

JsonValue Assessment::Jsonize() const
{
  JsonValue payload;

  if(m_assessmentArnHasBeenSet)
  {
   payload.WithString("assessmentArn", m_assessmentArn);

  }

  if(m_assessmentNameHasBeenSet)
  {
   payload.WithString("assessmentName", m_assessmentName);

  }

  if(m_applicationArnHasBeenSet)
  {
   payload.WithString("applicationArn", m_applicationArn);

  }

  if(m_assessmentStateHasBeenSet)
  {
   payload.WithString("assessmentState", m_assessmentState);

  }

  if(m_failureMessageHasBeenSet)
  {
   payload.WithString("failureMessage", m_failureMessage);

  }

  if(m_dataCollectedHasBeenSet)
  {
   payload.WithBool("dataCollected", m_dataCollected);

  }

  if(m_startTimeHasBeenSet)
  {
   payload.WithDouble("startTime", m_startTime.SecondsWithMSPrecision());
  }

  if(m_endTimeHasBeenSet)
  {
   payload.WithDouble("endTime", m_endTime.SecondsWithMSPrecision());
  }

  if(m_durationInSecondsHasBeenSet)
  {
   payload.WithInteger("durationInSeconds", m_durationInSeconds);

  }

  if(m_userAttributesForFindingsHasBeenSet)
  {
   Array<JsonValue> userAttributesForFindingsJsonList(m_userAttributesForFindings.size());
   for(unsigned userAttributesForFindingsIndex = 0; userAttributesForFindingsIndex < userAttributesForFindingsJsonList.GetLength(); ++userAttributesForFindingsIndex)
   {
     userAttributesForFindingsJsonList[userAttributesForFindingsIndex].AsObject(m_userAttributesForFindings[userAttributesForFindingsIndex].Jsonize());
   }
   payload.WithArray("userAttributesForFindings", std::move(userAttributesForFindingsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace Inspector
} // namespace Aws