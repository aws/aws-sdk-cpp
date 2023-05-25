/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot/model/DetectMitigationActionsTaskSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IoT
{
namespace Model
{

DetectMitigationActionsTaskSummary::DetectMitigationActionsTaskSummary() : 
    m_taskIdHasBeenSet(false),
    m_taskStatus(DetectMitigationActionsTaskStatus::NOT_SET),
    m_taskStatusHasBeenSet(false),
    m_taskStartTimeHasBeenSet(false),
    m_taskEndTimeHasBeenSet(false),
    m_targetHasBeenSet(false),
    m_violationEventOccurrenceRangeHasBeenSet(false),
    m_onlyActiveViolationsIncluded(false),
    m_onlyActiveViolationsIncludedHasBeenSet(false),
    m_suppressedAlertsIncluded(false),
    m_suppressedAlertsIncludedHasBeenSet(false),
    m_actionsDefinitionHasBeenSet(false),
    m_taskStatisticsHasBeenSet(false)
{
}

DetectMitigationActionsTaskSummary::DetectMitigationActionsTaskSummary(JsonView jsonValue) : 
    m_taskIdHasBeenSet(false),
    m_taskStatus(DetectMitigationActionsTaskStatus::NOT_SET),
    m_taskStatusHasBeenSet(false),
    m_taskStartTimeHasBeenSet(false),
    m_taskEndTimeHasBeenSet(false),
    m_targetHasBeenSet(false),
    m_violationEventOccurrenceRangeHasBeenSet(false),
    m_onlyActiveViolationsIncluded(false),
    m_onlyActiveViolationsIncludedHasBeenSet(false),
    m_suppressedAlertsIncluded(false),
    m_suppressedAlertsIncludedHasBeenSet(false),
    m_actionsDefinitionHasBeenSet(false),
    m_taskStatisticsHasBeenSet(false)
{
  *this = jsonValue;
}

DetectMitigationActionsTaskSummary& DetectMitigationActionsTaskSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("taskId"))
  {
    m_taskId = jsonValue.GetString("taskId");

    m_taskIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("taskStatus"))
  {
    m_taskStatus = DetectMitigationActionsTaskStatusMapper::GetDetectMitigationActionsTaskStatusForName(jsonValue.GetString("taskStatus"));

    m_taskStatusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("taskStartTime"))
  {
    m_taskStartTime = jsonValue.GetDouble("taskStartTime");

    m_taskStartTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("taskEndTime"))
  {
    m_taskEndTime = jsonValue.GetDouble("taskEndTime");

    m_taskEndTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("target"))
  {
    m_target = jsonValue.GetObject("target");

    m_targetHasBeenSet = true;
  }

  if(jsonValue.ValueExists("violationEventOccurrenceRange"))
  {
    m_violationEventOccurrenceRange = jsonValue.GetObject("violationEventOccurrenceRange");

    m_violationEventOccurrenceRangeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("onlyActiveViolationsIncluded"))
  {
    m_onlyActiveViolationsIncluded = jsonValue.GetBool("onlyActiveViolationsIncluded");

    m_onlyActiveViolationsIncludedHasBeenSet = true;
  }

  if(jsonValue.ValueExists("suppressedAlertsIncluded"))
  {
    m_suppressedAlertsIncluded = jsonValue.GetBool("suppressedAlertsIncluded");

    m_suppressedAlertsIncludedHasBeenSet = true;
  }

  if(jsonValue.ValueExists("actionsDefinition"))
  {
    Aws::Utils::Array<JsonView> actionsDefinitionJsonList = jsonValue.GetArray("actionsDefinition");
    for(unsigned actionsDefinitionIndex = 0; actionsDefinitionIndex < actionsDefinitionJsonList.GetLength(); ++actionsDefinitionIndex)
    {
      m_actionsDefinition.push_back(actionsDefinitionJsonList[actionsDefinitionIndex].AsObject());
    }
    m_actionsDefinitionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("taskStatistics"))
  {
    m_taskStatistics = jsonValue.GetObject("taskStatistics");

    m_taskStatisticsHasBeenSet = true;
  }

  return *this;
}

JsonValue DetectMitigationActionsTaskSummary::Jsonize() const
{
  JsonValue payload;

  if(m_taskIdHasBeenSet)
  {
   payload.WithString("taskId", m_taskId);

  }

  if(m_taskStatusHasBeenSet)
  {
   payload.WithString("taskStatus", DetectMitigationActionsTaskStatusMapper::GetNameForDetectMitigationActionsTaskStatus(m_taskStatus));
  }

  if(m_taskStartTimeHasBeenSet)
  {
   payload.WithDouble("taskStartTime", m_taskStartTime.SecondsWithMSPrecision());
  }

  if(m_taskEndTimeHasBeenSet)
  {
   payload.WithDouble("taskEndTime", m_taskEndTime.SecondsWithMSPrecision());
  }

  if(m_targetHasBeenSet)
  {
   payload.WithObject("target", m_target.Jsonize());

  }

  if(m_violationEventOccurrenceRangeHasBeenSet)
  {
   payload.WithObject("violationEventOccurrenceRange", m_violationEventOccurrenceRange.Jsonize());

  }

  if(m_onlyActiveViolationsIncludedHasBeenSet)
  {
   payload.WithBool("onlyActiveViolationsIncluded", m_onlyActiveViolationsIncluded);

  }

  if(m_suppressedAlertsIncludedHasBeenSet)
  {
   payload.WithBool("suppressedAlertsIncluded", m_suppressedAlertsIncluded);

  }

  if(m_actionsDefinitionHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> actionsDefinitionJsonList(m_actionsDefinition.size());
   for(unsigned actionsDefinitionIndex = 0; actionsDefinitionIndex < actionsDefinitionJsonList.GetLength(); ++actionsDefinitionIndex)
   {
     actionsDefinitionJsonList[actionsDefinitionIndex].AsObject(m_actionsDefinition[actionsDefinitionIndex].Jsonize());
   }
   payload.WithArray("actionsDefinition", std::move(actionsDefinitionJsonList));

  }

  if(m_taskStatisticsHasBeenSet)
  {
   payload.WithObject("taskStatistics", m_taskStatistics.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace IoT
} // namespace Aws
