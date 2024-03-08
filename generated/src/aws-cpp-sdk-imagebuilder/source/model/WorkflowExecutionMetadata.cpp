/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/imagebuilder/model/WorkflowExecutionMetadata.h>
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

WorkflowExecutionMetadata::WorkflowExecutionMetadata() : 
    m_workflowBuildVersionArnHasBeenSet(false),
    m_workflowExecutionIdHasBeenSet(false),
    m_type(WorkflowType::NOT_SET),
    m_typeHasBeenSet(false),
    m_status(WorkflowExecutionStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_messageHasBeenSet(false),
    m_totalStepCount(0),
    m_totalStepCountHasBeenSet(false),
    m_totalStepsSucceeded(0),
    m_totalStepsSucceededHasBeenSet(false),
    m_totalStepsFailed(0),
    m_totalStepsFailedHasBeenSet(false),
    m_totalStepsSkipped(0),
    m_totalStepsSkippedHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_parallelGroupHasBeenSet(false)
{
}

WorkflowExecutionMetadata::WorkflowExecutionMetadata(JsonView jsonValue) : 
    m_workflowBuildVersionArnHasBeenSet(false),
    m_workflowExecutionIdHasBeenSet(false),
    m_type(WorkflowType::NOT_SET),
    m_typeHasBeenSet(false),
    m_status(WorkflowExecutionStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_messageHasBeenSet(false),
    m_totalStepCount(0),
    m_totalStepCountHasBeenSet(false),
    m_totalStepsSucceeded(0),
    m_totalStepsSucceededHasBeenSet(false),
    m_totalStepsFailed(0),
    m_totalStepsFailedHasBeenSet(false),
    m_totalStepsSkipped(0),
    m_totalStepsSkippedHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_parallelGroupHasBeenSet(false)
{
  *this = jsonValue;
}

WorkflowExecutionMetadata& WorkflowExecutionMetadata::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("workflowBuildVersionArn"))
  {
    m_workflowBuildVersionArn = jsonValue.GetString("workflowBuildVersionArn");

    m_workflowBuildVersionArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("workflowExecutionId"))
  {
    m_workflowExecutionId = jsonValue.GetString("workflowExecutionId");

    m_workflowExecutionIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("type"))
  {
    m_type = WorkflowTypeMapper::GetWorkflowTypeForName(jsonValue.GetString("type"));

    m_typeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = WorkflowExecutionStatusMapper::GetWorkflowExecutionStatusForName(jsonValue.GetString("status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("message"))
  {
    m_message = jsonValue.GetString("message");

    m_messageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("totalStepCount"))
  {
    m_totalStepCount = jsonValue.GetInteger("totalStepCount");

    m_totalStepCountHasBeenSet = true;
  }

  if(jsonValue.ValueExists("totalStepsSucceeded"))
  {
    m_totalStepsSucceeded = jsonValue.GetInteger("totalStepsSucceeded");

    m_totalStepsSucceededHasBeenSet = true;
  }

  if(jsonValue.ValueExists("totalStepsFailed"))
  {
    m_totalStepsFailed = jsonValue.GetInteger("totalStepsFailed");

    m_totalStepsFailedHasBeenSet = true;
  }

  if(jsonValue.ValueExists("totalStepsSkipped"))
  {
    m_totalStepsSkipped = jsonValue.GetInteger("totalStepsSkipped");

    m_totalStepsSkippedHasBeenSet = true;
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

  if(jsonValue.ValueExists("parallelGroup"))
  {
    m_parallelGroup = jsonValue.GetString("parallelGroup");

    m_parallelGroupHasBeenSet = true;
  }

  return *this;
}

JsonValue WorkflowExecutionMetadata::Jsonize() const
{
  JsonValue payload;

  if(m_workflowBuildVersionArnHasBeenSet)
  {
   payload.WithString("workflowBuildVersionArn", m_workflowBuildVersionArn);

  }

  if(m_workflowExecutionIdHasBeenSet)
  {
   payload.WithString("workflowExecutionId", m_workflowExecutionId);

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("type", WorkflowTypeMapper::GetNameForWorkflowType(m_type));
  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", WorkflowExecutionStatusMapper::GetNameForWorkflowExecutionStatus(m_status));
  }

  if(m_messageHasBeenSet)
  {
   payload.WithString("message", m_message);

  }

  if(m_totalStepCountHasBeenSet)
  {
   payload.WithInteger("totalStepCount", m_totalStepCount);

  }

  if(m_totalStepsSucceededHasBeenSet)
  {
   payload.WithInteger("totalStepsSucceeded", m_totalStepsSucceeded);

  }

  if(m_totalStepsFailedHasBeenSet)
  {
   payload.WithInteger("totalStepsFailed", m_totalStepsFailed);

  }

  if(m_totalStepsSkippedHasBeenSet)
  {
   payload.WithInteger("totalStepsSkipped", m_totalStepsSkipped);

  }

  if(m_startTimeHasBeenSet)
  {
   payload.WithString("startTime", m_startTime);

  }

  if(m_endTimeHasBeenSet)
  {
   payload.WithString("endTime", m_endTime);

  }

  if(m_parallelGroupHasBeenSet)
  {
   payload.WithString("parallelGroup", m_parallelGroup);

  }

  return payload;
}

} // namespace Model
} // namespace imagebuilder
} // namespace Aws
