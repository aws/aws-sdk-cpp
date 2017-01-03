﻿/*
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
#include <aws/codebuild/model/BuildPhase.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CodeBuild
{
namespace Model
{

BuildPhase::BuildPhase() : 
    m_phaseType(BuildPhaseType::NOT_SET),
    m_phaseTypeHasBeenSet(false),
    m_phaseStatus(StatusType::NOT_SET),
    m_phaseStatusHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_durationInSeconds(0),
    m_durationInSecondsHasBeenSet(false),
    m_contextsHasBeenSet(false)
{
}

BuildPhase::BuildPhase(const JsonValue& jsonValue) : 
    m_phaseType(BuildPhaseType::NOT_SET),
    m_phaseTypeHasBeenSet(false),
    m_phaseStatus(StatusType::NOT_SET),
    m_phaseStatusHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_durationInSeconds(0),
    m_durationInSecondsHasBeenSet(false),
    m_contextsHasBeenSet(false)
{
  *this = jsonValue;
}

BuildPhase& BuildPhase::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("phaseType"))
  {
    m_phaseType = BuildPhaseTypeMapper::GetBuildPhaseTypeForName(jsonValue.GetString("phaseType"));

    m_phaseTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("phaseStatus"))
  {
    m_phaseStatus = StatusTypeMapper::GetStatusTypeForName(jsonValue.GetString("phaseStatus"));

    m_phaseStatusHasBeenSet = true;
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
    m_durationInSeconds = jsonValue.GetInt64("durationInSeconds");

    m_durationInSecondsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("contexts"))
  {
    Array<JsonValue> contextsJsonList = jsonValue.GetArray("contexts");
    for(unsigned contextsIndex = 0; contextsIndex < contextsJsonList.GetLength(); ++contextsIndex)
    {
      m_contexts.push_back(contextsJsonList[contextsIndex].AsObject());
    }
    m_contextsHasBeenSet = true;
  }

  return *this;
}

JsonValue BuildPhase::Jsonize() const
{
  JsonValue payload;

  if(m_phaseTypeHasBeenSet)
  {
   payload.WithString("phaseType", BuildPhaseTypeMapper::GetNameForBuildPhaseType(m_phaseType));
  }

  if(m_phaseStatusHasBeenSet)
  {
   payload.WithString("phaseStatus", StatusTypeMapper::GetNameForStatusType(m_phaseStatus));
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
   payload.WithInt64("durationInSeconds", m_durationInSeconds);

  }

  if(m_contextsHasBeenSet)
  {
   Array<JsonValue> contextsJsonList(m_contexts.size());
   for(unsigned contextsIndex = 0; contextsIndex < contextsJsonList.GetLength(); ++contextsIndex)
   {
     contextsJsonList[contextsIndex].AsObject(m_contexts[contextsIndex].Jsonize());
   }
   payload.WithArray("contexts", std::move(contextsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace CodeBuild
} // namespace Aws