/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/arc-region-switch/model/Workflow.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ARCRegionswitch
{
namespace Model
{

Workflow::Workflow(JsonView jsonValue)
{
  *this = jsonValue;
}

Workflow& Workflow::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("steps"))
  {
    Aws::Utils::Array<JsonView> stepsJsonList = jsonValue.GetArray("steps");
    for(unsigned stepsIndex = 0; stepsIndex < stepsJsonList.GetLength(); ++stepsIndex)
    {
      m_steps.push_back(stepsJsonList[stepsIndex].AsObject());
    }
    m_stepsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("workflowTargetAction"))
  {
    m_workflowTargetAction = WorkflowTargetActionMapper::GetWorkflowTargetActionForName(jsonValue.GetString("workflowTargetAction"));
    m_workflowTargetActionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("workflowTargetRegion"))
  {
    m_workflowTargetRegion = jsonValue.GetString("workflowTargetRegion");
    m_workflowTargetRegionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("workflowDescription"))
  {
    m_workflowDescription = jsonValue.GetString("workflowDescription");
    m_workflowDescriptionHasBeenSet = true;
  }
  return *this;
}

JsonValue Workflow::Jsonize() const
{
  JsonValue payload;

  if(m_stepsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> stepsJsonList(m_steps.size());
   for(unsigned stepsIndex = 0; stepsIndex < stepsJsonList.GetLength(); ++stepsIndex)
   {
     stepsJsonList[stepsIndex].AsObject(m_steps[stepsIndex].Jsonize());
   }
   payload.WithArray("steps", std::move(stepsJsonList));

  }

  if(m_workflowTargetActionHasBeenSet)
  {
   payload.WithString("workflowTargetAction", WorkflowTargetActionMapper::GetNameForWorkflowTargetAction(m_workflowTargetAction));
  }

  if(m_workflowTargetRegionHasBeenSet)
  {
   payload.WithString("workflowTargetRegion", m_workflowTargetRegion);

  }

  if(m_workflowDescriptionHasBeenSet)
  {
   payload.WithString("workflowDescription", m_workflowDescription);

  }

  return payload;
}

} // namespace Model
} // namespace ARCRegionswitch
} // namespace Aws
