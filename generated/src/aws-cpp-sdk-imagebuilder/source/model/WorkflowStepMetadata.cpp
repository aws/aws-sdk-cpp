/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/imagebuilder/model/WorkflowStepMetadata.h>
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

WorkflowStepMetadata::WorkflowStepMetadata() : 
    m_stepExecutionIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_actionHasBeenSet(false),
    m_status(WorkflowStepExecutionStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_rollbackStatus(WorkflowStepExecutionRollbackStatus::NOT_SET),
    m_rollbackStatusHasBeenSet(false),
    m_messageHasBeenSet(false),
    m_inputsHasBeenSet(false),
    m_outputsHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false)
{
}

WorkflowStepMetadata::WorkflowStepMetadata(JsonView jsonValue) : 
    m_stepExecutionIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_actionHasBeenSet(false),
    m_status(WorkflowStepExecutionStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_rollbackStatus(WorkflowStepExecutionRollbackStatus::NOT_SET),
    m_rollbackStatusHasBeenSet(false),
    m_messageHasBeenSet(false),
    m_inputsHasBeenSet(false),
    m_outputsHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false)
{
  *this = jsonValue;
}

WorkflowStepMetadata& WorkflowStepMetadata::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("stepExecutionId"))
  {
    m_stepExecutionId = jsonValue.GetString("stepExecutionId");

    m_stepExecutionIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("description"))
  {
    m_description = jsonValue.GetString("description");

    m_descriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("action"))
  {
    m_action = jsonValue.GetString("action");

    m_actionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = WorkflowStepExecutionStatusMapper::GetWorkflowStepExecutionStatusForName(jsonValue.GetString("status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("rollbackStatus"))
  {
    m_rollbackStatus = WorkflowStepExecutionRollbackStatusMapper::GetWorkflowStepExecutionRollbackStatusForName(jsonValue.GetString("rollbackStatus"));

    m_rollbackStatusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("message"))
  {
    m_message = jsonValue.GetString("message");

    m_messageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("inputs"))
  {
    m_inputs = jsonValue.GetString("inputs");

    m_inputsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("outputs"))
  {
    m_outputs = jsonValue.GetString("outputs");

    m_outputsHasBeenSet = true;
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

  return *this;
}

JsonValue WorkflowStepMetadata::Jsonize() const
{
  JsonValue payload;

  if(m_stepExecutionIdHasBeenSet)
  {
   payload.WithString("stepExecutionId", m_stepExecutionId);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_actionHasBeenSet)
  {
   payload.WithString("action", m_action);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", WorkflowStepExecutionStatusMapper::GetNameForWorkflowStepExecutionStatus(m_status));
  }

  if(m_rollbackStatusHasBeenSet)
  {
   payload.WithString("rollbackStatus", WorkflowStepExecutionRollbackStatusMapper::GetNameForWorkflowStepExecutionRollbackStatus(m_rollbackStatus));
  }

  if(m_messageHasBeenSet)
  {
   payload.WithString("message", m_message);

  }

  if(m_inputsHasBeenSet)
  {
   payload.WithString("inputs", m_inputs);

  }

  if(m_outputsHasBeenSet)
  {
   payload.WithString("outputs", m_outputs);

  }

  if(m_startTimeHasBeenSet)
  {
   payload.WithString("startTime", m_startTime);

  }

  if(m_endTimeHasBeenSet)
  {
   payload.WithString("endTime", m_endTime);

  }

  return payload;
}

} // namespace Model
} // namespace imagebuilder
} // namespace Aws
