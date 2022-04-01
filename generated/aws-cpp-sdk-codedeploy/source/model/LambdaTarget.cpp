﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codedeploy/model/LambdaTarget.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CodeDeploy
{
namespace Model
{

LambdaTarget::LambdaTarget() : 
    m_deploymentIdHasBeenSet(false),
    m_targetIdHasBeenSet(false),
    m_targetArnHasBeenSet(false),
    m_status(TargetStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_lastUpdatedAtHasBeenSet(false),
    m_lifecycleEventsHasBeenSet(false),
    m_lambdaFunctionInfoHasBeenSet(false)
{
}

LambdaTarget::LambdaTarget(JsonView jsonValue) : 
    m_deploymentIdHasBeenSet(false),
    m_targetIdHasBeenSet(false),
    m_targetArnHasBeenSet(false),
    m_status(TargetStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_lastUpdatedAtHasBeenSet(false),
    m_lifecycleEventsHasBeenSet(false),
    m_lambdaFunctionInfoHasBeenSet(false)
{
  *this = jsonValue;
}

LambdaTarget& LambdaTarget::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("deploymentId"))
  {
    m_deploymentId = jsonValue.GetString("deploymentId");

    m_deploymentIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("targetId"))
  {
    m_targetId = jsonValue.GetString("targetId");

    m_targetIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("targetArn"))
  {
    m_targetArn = jsonValue.GetString("targetArn");

    m_targetArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = TargetStatusMapper::GetTargetStatusForName(jsonValue.GetString("status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("lastUpdatedAt"))
  {
    m_lastUpdatedAt = jsonValue.GetDouble("lastUpdatedAt");

    m_lastUpdatedAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("lifecycleEvents"))
  {
    Array<JsonView> lifecycleEventsJsonList = jsonValue.GetArray("lifecycleEvents");
    for(unsigned lifecycleEventsIndex = 0; lifecycleEventsIndex < lifecycleEventsJsonList.GetLength(); ++lifecycleEventsIndex)
    {
      m_lifecycleEvents.push_back(lifecycleEventsJsonList[lifecycleEventsIndex].AsObject());
    }
    m_lifecycleEventsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("lambdaFunctionInfo"))
  {
    m_lambdaFunctionInfo = jsonValue.GetObject("lambdaFunctionInfo");

    m_lambdaFunctionInfoHasBeenSet = true;
  }

  return *this;
}

JsonValue LambdaTarget::Jsonize() const
{
  JsonValue payload;

  if(m_deploymentIdHasBeenSet)
  {
   payload.WithString("deploymentId", m_deploymentId);

  }

  if(m_targetIdHasBeenSet)
  {
   payload.WithString("targetId", m_targetId);

  }

  if(m_targetArnHasBeenSet)
  {
   payload.WithString("targetArn", m_targetArn);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", TargetStatusMapper::GetNameForTargetStatus(m_status));
  }

  if(m_lastUpdatedAtHasBeenSet)
  {
   payload.WithDouble("lastUpdatedAt", m_lastUpdatedAt.SecondsWithMSPrecision());
  }

  if(m_lifecycleEventsHasBeenSet)
  {
   Array<JsonValue> lifecycleEventsJsonList(m_lifecycleEvents.size());
   for(unsigned lifecycleEventsIndex = 0; lifecycleEventsIndex < lifecycleEventsJsonList.GetLength(); ++lifecycleEventsIndex)
   {
     lifecycleEventsJsonList[lifecycleEventsIndex].AsObject(m_lifecycleEvents[lifecycleEventsIndex].Jsonize());
   }
   payload.WithArray("lifecycleEvents", std::move(lifecycleEventsJsonList));

  }

  if(m_lambdaFunctionInfoHasBeenSet)
  {
   payload.WithObject("lambdaFunctionInfo", m_lambdaFunctionInfo.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace CodeDeploy
} // namespace Aws
