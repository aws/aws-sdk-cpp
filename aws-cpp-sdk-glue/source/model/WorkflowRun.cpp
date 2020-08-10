/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/WorkflowRun.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Glue
{
namespace Model
{

WorkflowRun::WorkflowRun() : 
    m_nameHasBeenSet(false),
    m_workflowRunIdHasBeenSet(false),
    m_previousRunIdHasBeenSet(false),
    m_workflowRunPropertiesHasBeenSet(false),
    m_startedOnHasBeenSet(false),
    m_completedOnHasBeenSet(false),
    m_status(WorkflowRunStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_errorMessageHasBeenSet(false),
    m_statisticsHasBeenSet(false),
    m_graphHasBeenSet(false)
{
}

WorkflowRun::WorkflowRun(JsonView jsonValue) : 
    m_nameHasBeenSet(false),
    m_workflowRunIdHasBeenSet(false),
    m_previousRunIdHasBeenSet(false),
    m_workflowRunPropertiesHasBeenSet(false),
    m_startedOnHasBeenSet(false),
    m_completedOnHasBeenSet(false),
    m_status(WorkflowRunStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_errorMessageHasBeenSet(false),
    m_statisticsHasBeenSet(false),
    m_graphHasBeenSet(false)
{
  *this = jsonValue;
}

WorkflowRun& WorkflowRun::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("WorkflowRunId"))
  {
    m_workflowRunId = jsonValue.GetString("WorkflowRunId");

    m_workflowRunIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PreviousRunId"))
  {
    m_previousRunId = jsonValue.GetString("PreviousRunId");

    m_previousRunIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("WorkflowRunProperties"))
  {
    Aws::Map<Aws::String, JsonView> workflowRunPropertiesJsonMap = jsonValue.GetObject("WorkflowRunProperties").GetAllObjects();
    for(auto& workflowRunPropertiesItem : workflowRunPropertiesJsonMap)
    {
      m_workflowRunProperties[workflowRunPropertiesItem.first] = workflowRunPropertiesItem.second.AsString();
    }
    m_workflowRunPropertiesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("StartedOn"))
  {
    m_startedOn = jsonValue.GetDouble("StartedOn");

    m_startedOnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CompletedOn"))
  {
    m_completedOn = jsonValue.GetDouble("CompletedOn");

    m_completedOnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = WorkflowRunStatusMapper::GetWorkflowRunStatusForName(jsonValue.GetString("Status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ErrorMessage"))
  {
    m_errorMessage = jsonValue.GetString("ErrorMessage");

    m_errorMessageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Statistics"))
  {
    m_statistics = jsonValue.GetObject("Statistics");

    m_statisticsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Graph"))
  {
    m_graph = jsonValue.GetObject("Graph");

    m_graphHasBeenSet = true;
  }

  return *this;
}

JsonValue WorkflowRun::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_workflowRunIdHasBeenSet)
  {
   payload.WithString("WorkflowRunId", m_workflowRunId);

  }

  if(m_previousRunIdHasBeenSet)
  {
   payload.WithString("PreviousRunId", m_previousRunId);

  }

  if(m_workflowRunPropertiesHasBeenSet)
  {
   JsonValue workflowRunPropertiesJsonMap;
   for(auto& workflowRunPropertiesItem : m_workflowRunProperties)
   {
     workflowRunPropertiesJsonMap.WithString(workflowRunPropertiesItem.first, workflowRunPropertiesItem.second);
   }
   payload.WithObject("WorkflowRunProperties", std::move(workflowRunPropertiesJsonMap));

  }

  if(m_startedOnHasBeenSet)
  {
   payload.WithDouble("StartedOn", m_startedOn.SecondsWithMSPrecision());
  }

  if(m_completedOnHasBeenSet)
  {
   payload.WithDouble("CompletedOn", m_completedOn.SecondsWithMSPrecision());
  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", WorkflowRunStatusMapper::GetNameForWorkflowRunStatus(m_status));
  }

  if(m_errorMessageHasBeenSet)
  {
   payload.WithString("ErrorMessage", m_errorMessage);

  }

  if(m_statisticsHasBeenSet)
  {
   payload.WithObject("Statistics", m_statistics.Jsonize());

  }

  if(m_graphHasBeenSet)
  {
   payload.WithObject("Graph", m_graph.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Glue
} // namespace Aws
