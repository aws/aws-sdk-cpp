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

#include <aws/autoscaling-plans/model/ScalingPlan.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace AutoScalingPlans
{
namespace Model
{

ScalingPlan::ScalingPlan() : 
    m_scalingPlanNameHasBeenSet(false),
    m_scalingPlanVersion(0),
    m_scalingPlanVersionHasBeenSet(false),
    m_applicationSourceHasBeenSet(false),
    m_scalingInstructionsHasBeenSet(false),
    m_statusCode(ScalingPlanStatusCode::NOT_SET),
    m_statusCodeHasBeenSet(false),
    m_statusMessageHasBeenSet(false),
    m_statusStartTimeHasBeenSet(false),
    m_creationTimeHasBeenSet(false)
{
}

ScalingPlan::ScalingPlan(JsonView jsonValue) : 
    m_scalingPlanNameHasBeenSet(false),
    m_scalingPlanVersion(0),
    m_scalingPlanVersionHasBeenSet(false),
    m_applicationSourceHasBeenSet(false),
    m_scalingInstructionsHasBeenSet(false),
    m_statusCode(ScalingPlanStatusCode::NOT_SET),
    m_statusCodeHasBeenSet(false),
    m_statusMessageHasBeenSet(false),
    m_statusStartTimeHasBeenSet(false),
    m_creationTimeHasBeenSet(false)
{
  *this = jsonValue;
}

ScalingPlan& ScalingPlan::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ScalingPlanName"))
  {
    m_scalingPlanName = jsonValue.GetString("ScalingPlanName");

    m_scalingPlanNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ScalingPlanVersion"))
  {
    m_scalingPlanVersion = jsonValue.GetInt64("ScalingPlanVersion");

    m_scalingPlanVersionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ApplicationSource"))
  {
    m_applicationSource = jsonValue.GetObject("ApplicationSource");

    m_applicationSourceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ScalingInstructions"))
  {
    Array<JsonView> scalingInstructionsJsonList = jsonValue.GetArray("ScalingInstructions");
    for(unsigned scalingInstructionsIndex = 0; scalingInstructionsIndex < scalingInstructionsJsonList.GetLength(); ++scalingInstructionsIndex)
    {
      m_scalingInstructions.push_back(scalingInstructionsJsonList[scalingInstructionsIndex].AsObject());
    }
    m_scalingInstructionsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("StatusCode"))
  {
    m_statusCode = ScalingPlanStatusCodeMapper::GetScalingPlanStatusCodeForName(jsonValue.GetString("StatusCode"));

    m_statusCodeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("StatusMessage"))
  {
    m_statusMessage = jsonValue.GetString("StatusMessage");

    m_statusMessageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("StatusStartTime"))
  {
    m_statusStartTime = jsonValue.GetDouble("StatusStartTime");

    m_statusStartTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreationTime"))
  {
    m_creationTime = jsonValue.GetDouble("CreationTime");

    m_creationTimeHasBeenSet = true;
  }

  return *this;
}

JsonValue ScalingPlan::Jsonize() const
{
  JsonValue payload;

  if(m_scalingPlanNameHasBeenSet)
  {
   payload.WithString("ScalingPlanName", m_scalingPlanName);

  }

  if(m_scalingPlanVersionHasBeenSet)
  {
   payload.WithInt64("ScalingPlanVersion", m_scalingPlanVersion);

  }

  if(m_applicationSourceHasBeenSet)
  {
   payload.WithObject("ApplicationSource", m_applicationSource.Jsonize());

  }

  if(m_scalingInstructionsHasBeenSet)
  {
   Array<JsonValue> scalingInstructionsJsonList(m_scalingInstructions.size());
   for(unsigned scalingInstructionsIndex = 0; scalingInstructionsIndex < scalingInstructionsJsonList.GetLength(); ++scalingInstructionsIndex)
   {
     scalingInstructionsJsonList[scalingInstructionsIndex].AsObject(m_scalingInstructions[scalingInstructionsIndex].Jsonize());
   }
   payload.WithArray("ScalingInstructions", std::move(scalingInstructionsJsonList));

  }

  if(m_statusCodeHasBeenSet)
  {
   payload.WithString("StatusCode", ScalingPlanStatusCodeMapper::GetNameForScalingPlanStatusCode(m_statusCode));
  }

  if(m_statusMessageHasBeenSet)
  {
   payload.WithString("StatusMessage", m_statusMessage);

  }

  if(m_statusStartTimeHasBeenSet)
  {
   payload.WithDouble("StatusStartTime", m_statusStartTime.SecondsWithMSPrecision());
  }

  if(m_creationTimeHasBeenSet)
  {
   payload.WithDouble("CreationTime", m_creationTime.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace AutoScalingPlans
} // namespace Aws
