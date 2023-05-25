/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/awstransfer/model/ExecutionStepResult.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Transfer
{
namespace Model
{

ExecutionStepResult::ExecutionStepResult() : 
    m_stepType(WorkflowStepType::NOT_SET),
    m_stepTypeHasBeenSet(false),
    m_outputsHasBeenSet(false),
    m_errorHasBeenSet(false)
{
}

ExecutionStepResult::ExecutionStepResult(JsonView jsonValue) : 
    m_stepType(WorkflowStepType::NOT_SET),
    m_stepTypeHasBeenSet(false),
    m_outputsHasBeenSet(false),
    m_errorHasBeenSet(false)
{
  *this = jsonValue;
}

ExecutionStepResult& ExecutionStepResult::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("StepType"))
  {
    m_stepType = WorkflowStepTypeMapper::GetWorkflowStepTypeForName(jsonValue.GetString("StepType"));

    m_stepTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Outputs"))
  {
    m_outputs = jsonValue.GetString("Outputs");

    m_outputsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Error"))
  {
    m_error = jsonValue.GetObject("Error");

    m_errorHasBeenSet = true;
  }

  return *this;
}

JsonValue ExecutionStepResult::Jsonize() const
{
  JsonValue payload;

  if(m_stepTypeHasBeenSet)
  {
   payload.WithString("StepType", WorkflowStepTypeMapper::GetNameForWorkflowStepType(m_stepType));
  }

  if(m_outputsHasBeenSet)
  {
   payload.WithString("Outputs", m_outputs);

  }

  if(m_errorHasBeenSet)
  {
   payload.WithObject("Error", m_error.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Transfer
} // namespace Aws
