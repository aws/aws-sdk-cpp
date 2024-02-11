/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codecatalyst/model/WorkflowRunSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CodeCatalyst
{
namespace Model
{

WorkflowRunSummary::WorkflowRunSummary() : 
    m_idHasBeenSet(false),
    m_workflowIdHasBeenSet(false),
    m_workflowNameHasBeenSet(false),
    m_status(WorkflowRunStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_statusReasonsHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_lastUpdatedTimeHasBeenSet(false)
{
}

WorkflowRunSummary::WorkflowRunSummary(JsonView jsonValue) : 
    m_idHasBeenSet(false),
    m_workflowIdHasBeenSet(false),
    m_workflowNameHasBeenSet(false),
    m_status(WorkflowRunStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_statusReasonsHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_lastUpdatedTimeHasBeenSet(false)
{
  *this = jsonValue;
}

WorkflowRunSummary& WorkflowRunSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("id"))
  {
    m_id = jsonValue.GetString("id");

    m_idHasBeenSet = true;
  }

  if(jsonValue.ValueExists("workflowId"))
  {
    m_workflowId = jsonValue.GetString("workflowId");

    m_workflowIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("workflowName"))
  {
    m_workflowName = jsonValue.GetString("workflowName");

    m_workflowNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = WorkflowRunStatusMapper::GetWorkflowRunStatusForName(jsonValue.GetString("status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("statusReasons"))
  {
    Aws::Utils::Array<JsonView> statusReasonsJsonList = jsonValue.GetArray("statusReasons");
    for(unsigned statusReasonsIndex = 0; statusReasonsIndex < statusReasonsJsonList.GetLength(); ++statusReasonsIndex)
    {
      m_statusReasons.push_back(statusReasonsJsonList[statusReasonsIndex].AsObject());
    }
    m_statusReasonsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("startTime"))
  {
    m_startTime = jsonValue.GetString("startTime");

    m_startTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("endTime"))
  {
    m_endTime = jsonValue.GetString("endTime");

    m_endTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("lastUpdatedTime"))
  {
    m_lastUpdatedTime = jsonValue.GetString("lastUpdatedTime");

    m_lastUpdatedTimeHasBeenSet = true;
  }

  return *this;
}

JsonValue WorkflowRunSummary::Jsonize() const
{
  JsonValue payload;

  if(m_idHasBeenSet)
  {
   payload.WithString("id", m_id);

  }

  if(m_workflowIdHasBeenSet)
  {
   payload.WithString("workflowId", m_workflowId);

  }

  if(m_workflowNameHasBeenSet)
  {
   payload.WithString("workflowName", m_workflowName);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", WorkflowRunStatusMapper::GetNameForWorkflowRunStatus(m_status));
  }

  if(m_statusReasonsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> statusReasonsJsonList(m_statusReasons.size());
   for(unsigned statusReasonsIndex = 0; statusReasonsIndex < statusReasonsJsonList.GetLength(); ++statusReasonsIndex)
   {
     statusReasonsJsonList[statusReasonsIndex].AsObject(m_statusReasons[statusReasonsIndex].Jsonize());
   }
   payload.WithArray("statusReasons", std::move(statusReasonsJsonList));

  }

  if(m_startTimeHasBeenSet)
  {
   payload.WithString("startTime", m_startTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_endTimeHasBeenSet)
  {
   payload.WithString("endTime", m_endTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_lastUpdatedTimeHasBeenSet)
  {
   payload.WithString("lastUpdatedTime", m_lastUpdatedTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  return payload;
}

} // namespace Model
} // namespace CodeCatalyst
} // namespace Aws
