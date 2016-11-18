﻿/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/
#include <aws/swf/model/SignalExternalWorkflowExecutionInitiatedEventAttributes.h>
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

SignalExternalWorkflowExecutionInitiatedEventAttributes::SignalExternalWorkflowExecutionInitiatedEventAttributes() : 
    m_workflowIdHasBeenSet(false),
    m_runIdHasBeenSet(false),
    m_signalNameHasBeenSet(false),
    m_inputHasBeenSet(false),
    m_decisionTaskCompletedEventId(0),
    m_decisionTaskCompletedEventIdHasBeenSet(false),
    m_controlHasBeenSet(false)
{
}

SignalExternalWorkflowExecutionInitiatedEventAttributes::SignalExternalWorkflowExecutionInitiatedEventAttributes(const JsonValue& jsonValue) : 
    m_workflowIdHasBeenSet(false),
    m_runIdHasBeenSet(false),
    m_signalNameHasBeenSet(false),
    m_inputHasBeenSet(false),
    m_decisionTaskCompletedEventId(0),
    m_decisionTaskCompletedEventIdHasBeenSet(false),
    m_controlHasBeenSet(false)
{
  *this = jsonValue;
}

SignalExternalWorkflowExecutionInitiatedEventAttributes& SignalExternalWorkflowExecutionInitiatedEventAttributes::operator =(const JsonValue& jsonValue)
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

  if(jsonValue.ValueExists("decisionTaskCompletedEventId"))
  {
    m_decisionTaskCompletedEventId = jsonValue.GetInt64("decisionTaskCompletedEventId");

    m_decisionTaskCompletedEventIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("control"))
  {
    m_control = jsonValue.GetString("control");

    m_controlHasBeenSet = true;
  }

  return *this;
}

JsonValue SignalExternalWorkflowExecutionInitiatedEventAttributes::Jsonize() const
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

  if(m_decisionTaskCompletedEventIdHasBeenSet)
  {
   payload.WithInt64("decisionTaskCompletedEventId", m_decisionTaskCompletedEventId);

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