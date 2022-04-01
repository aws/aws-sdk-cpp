/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/swf/model/SignalExternalWorkflowExecutionDecisionAttributes.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SWF
{
namespace Model
{

SignalExternalWorkflowExecutionDecisionAttributes::SignalExternalWorkflowExecutionDecisionAttributes() : 
    m_workflowIdHasBeenSet(false),
    m_runIdHasBeenSet(false),
    m_signalNameHasBeenSet(false),
    m_inputHasBeenSet(false),
    m_controlHasBeenSet(false)
{
}

SignalExternalWorkflowExecutionDecisionAttributes::SignalExternalWorkflowExecutionDecisionAttributes(JsonView jsonValue) : 
    m_workflowIdHasBeenSet(false),
    m_runIdHasBeenSet(false),
    m_signalNameHasBeenSet(false),
    m_inputHasBeenSet(false),
    m_controlHasBeenSet(false)
{
  *this = jsonValue;
}

SignalExternalWorkflowExecutionDecisionAttributes& SignalExternalWorkflowExecutionDecisionAttributes::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("workflowId"))
  {
    m_workflowId = jsonValue.GetString("workflowId");

    m_workflowIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("runId"))
  {
    m_runId = jsonValue.GetString("runId");

    m_runIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("signalName"))
  {
    m_signalName = jsonValue.GetString("signalName");

    m_signalNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("input"))
  {
    m_input = jsonValue.GetString("input");

    m_inputHasBeenSet = true;
  }

  if(jsonValue.ValueExists("control"))
  {
    m_control = jsonValue.GetString("control");

    m_controlHasBeenSet = true;
  }

  return *this;
}

JsonValue SignalExternalWorkflowExecutionDecisionAttributes::Jsonize() const
{
  JsonValue payload;

  if(m_workflowIdHasBeenSet)
  {
   payload.WithString("workflowId", m_workflowId);

  }

  if(m_runIdHasBeenSet)
  {
   payload.WithString("runId", m_runId);

  }

  if(m_signalNameHasBeenSet)
  {
   payload.WithString("signalName", m_signalName);

  }

  if(m_inputHasBeenSet)
  {
   payload.WithString("input", m_input);

  }

  if(m_controlHasBeenSet)
  {
   payload.WithString("control", m_control);

  }

  return payload;
}

} // namespace Model
} // namespace SWF
} // namespace Aws
