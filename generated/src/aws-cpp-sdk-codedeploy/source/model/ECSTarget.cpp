/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codedeploy/model/ECSTarget.h>
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

ECSTarget::ECSTarget() : 
    m_deploymentIdHasBeenSet(false),
    m_targetIdHasBeenSet(false),
    m_targetArnHasBeenSet(false),
    m_lastUpdatedAtHasBeenSet(false),
    m_lifecycleEventsHasBeenSet(false),
    m_status(TargetStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_taskSetsInfoHasBeenSet(false)
{
}

ECSTarget::ECSTarget(JsonView jsonValue) : 
    m_deploymentIdHasBeenSet(false),
    m_targetIdHasBeenSet(false),
    m_targetArnHasBeenSet(false),
    m_lastUpdatedAtHasBeenSet(false),
    m_lifecycleEventsHasBeenSet(false),
    m_status(TargetStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_taskSetsInfoHasBeenSet(false)
{
  *this = jsonValue;
}

ECSTarget& ECSTarget::operator =(JsonView jsonValue)
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

  if(jsonValue.ValueExists("lastUpdatedAt"))
  {
    m_lastUpdatedAt = jsonValue.GetDouble("lastUpdatedAt");

    m_lastUpdatedAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("lifecycleEvents"))
  {
    Aws::Utils::Array<JsonView> lifecycleEventsJsonList = jsonValue.GetArray("lifecycleEvents");
    for(unsigned lifecycleEventsIndex = 0; lifecycleEventsIndex < lifecycleEventsJsonList.GetLength(); ++lifecycleEventsIndex)
    {
      m_lifecycleEvents.push_back(lifecycleEventsJsonList[lifecycleEventsIndex].AsObject());
    }
    m_lifecycleEventsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = TargetStatusMapper::GetTargetStatusForName(jsonValue.GetString("status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("taskSetsInfo"))
  {
    Aws::Utils::Array<JsonView> taskSetsInfoJsonList = jsonValue.GetArray("taskSetsInfo");
    for(unsigned taskSetsInfoIndex = 0; taskSetsInfoIndex < taskSetsInfoJsonList.GetLength(); ++taskSetsInfoIndex)
    {
      m_taskSetsInfo.push_back(taskSetsInfoJsonList[taskSetsInfoIndex].AsObject());
    }
    m_taskSetsInfoHasBeenSet = true;
  }

  return *this;
}

JsonValue ECSTarget::Jsonize() const
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

  if(m_lastUpdatedAtHasBeenSet)
  {
   payload.WithDouble("lastUpdatedAt", m_lastUpdatedAt.SecondsWithMSPrecision());
  }

  if(m_lifecycleEventsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> lifecycleEventsJsonList(m_lifecycleEvents.size());
   for(unsigned lifecycleEventsIndex = 0; lifecycleEventsIndex < lifecycleEventsJsonList.GetLength(); ++lifecycleEventsIndex)
   {
     lifecycleEventsJsonList[lifecycleEventsIndex].AsObject(m_lifecycleEvents[lifecycleEventsIndex].Jsonize());
   }
   payload.WithArray("lifecycleEvents", std::move(lifecycleEventsJsonList));

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", TargetStatusMapper::GetNameForTargetStatus(m_status));
  }

  if(m_taskSetsInfoHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> taskSetsInfoJsonList(m_taskSetsInfo.size());
   for(unsigned taskSetsInfoIndex = 0; taskSetsInfoIndex < taskSetsInfoJsonList.GetLength(); ++taskSetsInfoIndex)
   {
     taskSetsInfoJsonList[taskSetsInfoIndex].AsObject(m_taskSetsInfo[taskSetsInfoIndex].Jsonize());
   }
   payload.WithArray("taskSetsInfo", std::move(taskSetsInfoJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace CodeDeploy
} // namespace Aws
