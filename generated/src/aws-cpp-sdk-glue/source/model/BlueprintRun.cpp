/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/BlueprintRun.h>
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

BlueprintRun::BlueprintRun() : 
    m_blueprintNameHasBeenSet(false),
    m_runIdHasBeenSet(false),
    m_workflowNameHasBeenSet(false),
    m_state(BlueprintRunState::NOT_SET),
    m_stateHasBeenSet(false),
    m_startedOnHasBeenSet(false),
    m_completedOnHasBeenSet(false),
    m_errorMessageHasBeenSet(false),
    m_rollbackErrorMessageHasBeenSet(false),
    m_parametersHasBeenSet(false),
    m_roleArnHasBeenSet(false)
{
}

BlueprintRun::BlueprintRun(JsonView jsonValue) : 
    m_blueprintNameHasBeenSet(false),
    m_runIdHasBeenSet(false),
    m_workflowNameHasBeenSet(false),
    m_state(BlueprintRunState::NOT_SET),
    m_stateHasBeenSet(false),
    m_startedOnHasBeenSet(false),
    m_completedOnHasBeenSet(false),
    m_errorMessageHasBeenSet(false),
    m_rollbackErrorMessageHasBeenSet(false),
    m_parametersHasBeenSet(false),
    m_roleArnHasBeenSet(false)
{
  *this = jsonValue;
}

BlueprintRun& BlueprintRun::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("BlueprintName"))
  {
    m_blueprintName = jsonValue.GetString("BlueprintName");

    m_blueprintNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RunId"))
  {
    m_runId = jsonValue.GetString("RunId");

    m_runIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("WorkflowName"))
  {
    m_workflowName = jsonValue.GetString("WorkflowName");

    m_workflowNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("State"))
  {
    m_state = BlueprintRunStateMapper::GetBlueprintRunStateForName(jsonValue.GetString("State"));

    m_stateHasBeenSet = true;
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

  if(jsonValue.ValueExists("ErrorMessage"))
  {
    m_errorMessage = jsonValue.GetString("ErrorMessage");

    m_errorMessageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RollbackErrorMessage"))
  {
    m_rollbackErrorMessage = jsonValue.GetString("RollbackErrorMessage");

    m_rollbackErrorMessageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Parameters"))
  {
    m_parameters = jsonValue.GetString("Parameters");

    m_parametersHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RoleArn"))
  {
    m_roleArn = jsonValue.GetString("RoleArn");

    m_roleArnHasBeenSet = true;
  }

  return *this;
}

JsonValue BlueprintRun::Jsonize() const
{
  JsonValue payload;

  if(m_blueprintNameHasBeenSet)
  {
   payload.WithString("BlueprintName", m_blueprintName);

  }

  if(m_runIdHasBeenSet)
  {
   payload.WithString("RunId", m_runId);

  }

  if(m_workflowNameHasBeenSet)
  {
   payload.WithString("WorkflowName", m_workflowName);

  }

  if(m_stateHasBeenSet)
  {
   payload.WithString("State", BlueprintRunStateMapper::GetNameForBlueprintRunState(m_state));
  }

  if(m_startedOnHasBeenSet)
  {
   payload.WithDouble("StartedOn", m_startedOn.SecondsWithMSPrecision());
  }

  if(m_completedOnHasBeenSet)
  {
   payload.WithDouble("CompletedOn", m_completedOn.SecondsWithMSPrecision());
  }

  if(m_errorMessageHasBeenSet)
  {
   payload.WithString("ErrorMessage", m_errorMessage);

  }

  if(m_rollbackErrorMessageHasBeenSet)
  {
   payload.WithString("RollbackErrorMessage", m_rollbackErrorMessage);

  }

  if(m_parametersHasBeenSet)
  {
   payload.WithString("Parameters", m_parameters);

  }

  if(m_roleArnHasBeenSet)
  {
   payload.WithString("RoleArn", m_roleArn);

  }

  return payload;
}

} // namespace Model
} // namespace Glue
} // namespace Aws
