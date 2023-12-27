/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/imagebuilder/model/WorkflowStepExecution.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace imagebuilder
{
namespace Model
{

WorkflowStepExecution::WorkflowStepExecution() : 
    m_stepExecutionIdHasBeenSet(false),
    m_imageBuildVersionArnHasBeenSet(false),
    m_workflowExecutionIdHasBeenSet(false),
    m_workflowBuildVersionArnHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_actionHasBeenSet(false),
    m_startTimeHasBeenSet(false)
{
}

WorkflowStepExecution::WorkflowStepExecution(JsonView jsonValue) : 
    m_stepExecutionIdHasBeenSet(false),
    m_imageBuildVersionArnHasBeenSet(false),
    m_workflowExecutionIdHasBeenSet(false),
    m_workflowBuildVersionArnHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_actionHasBeenSet(false),
    m_startTimeHasBeenSet(false)
{
  *this = jsonValue;
}

WorkflowStepExecution& WorkflowStepExecution::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("stepExecutionId"))
  {
    m_stepExecutionId = jsonValue.GetString("stepExecutionId");

    m_stepExecutionIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("imageBuildVersionArn"))
  {
    m_imageBuildVersionArn = jsonValue.GetString("imageBuildVersionArn");

    m_imageBuildVersionArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("workflowExecutionId"))
  {
    m_workflowExecutionId = jsonValue.GetString("workflowExecutionId");

    m_workflowExecutionIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("workflowBuildVersionArn"))
  {
    m_workflowBuildVersionArn = jsonValue.GetString("workflowBuildVersionArn");

    m_workflowBuildVersionArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("action"))
  {
    m_action = jsonValue.GetString("action");

    m_actionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("startTime"))
  {
    m_startTime = jsonValue.GetString("startTime");

    m_startTimeHasBeenSet = true;
  }

  return *this;
}

JsonValue WorkflowStepExecution::Jsonize() const
{
  JsonValue payload;

  if(m_stepExecutionIdHasBeenSet)
  {
   payload.WithString("stepExecutionId", m_stepExecutionId);

  }

  if(m_imageBuildVersionArnHasBeenSet)
  {
   payload.WithString("imageBuildVersionArn", m_imageBuildVersionArn);

  }

  if(m_workflowExecutionIdHasBeenSet)
  {
   payload.WithString("workflowExecutionId", m_workflowExecutionId);

  }

  if(m_workflowBuildVersionArnHasBeenSet)
  {
   payload.WithString("workflowBuildVersionArn", m_workflowBuildVersionArn);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_actionHasBeenSet)
  {
   payload.WithString("action", m_action);

  }

  if(m_startTimeHasBeenSet)
  {
   payload.WithString("startTime", m_startTime);

  }

  return payload;
}

} // namespace Model
} // namespace imagebuilder
} // namespace Aws
