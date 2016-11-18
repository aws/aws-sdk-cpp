/*
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
#include <aws/swf/model/WorkflowExecutionSignaledEventAttributes.h>
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

WorkflowExecutionSignaledEventAttributes::WorkflowExecutionSignaledEventAttributes() : 
    m_signalNameHasBeenSet(false),
    m_inputHasBeenSet(false),
    m_externalWorkflowExecutionHasBeenSet(false),
    m_externalInitiatedEventId(0),
    m_externalInitiatedEventIdHasBeenSet(false)
{
}

WorkflowExecutionSignaledEventAttributes::WorkflowExecutionSignaledEventAttributes(const JsonValue& jsonValue) : 
    m_signalNameHasBeenSet(false),
    m_inputHasBeenSet(false),
    m_externalWorkflowExecutionHasBeenSet(false),
    m_externalInitiatedEventId(0),
    m_externalInitiatedEventIdHasBeenSet(false)
{
  *this = jsonValue;
}

WorkflowExecutionSignaledEventAttributes& WorkflowExecutionSignaledEventAttributes::operator =(const JsonValue& jsonValue)
{
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

  if(jsonValue.ValueExists("externalWorkflowExecution"))
  {
    m_externalWorkflowExecution = jsonValue.GetObject("externalWorkflowExecution");

    m_externalWorkflowExecutionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("externalInitiatedEventId"))
  {
    m_externalInitiatedEventId = jsonValue.GetInt64("externalInitiatedEventId");

    m_externalInitiatedEventIdHasBeenSet = true;
  }

  return *this;
}

JsonValue WorkflowExecutionSignaledEventAttributes::Jsonize() const
{
  JsonValue payload;

  if(m_signalNameHasBeenSet)
  {
   payload.WithString("signalName", m_signalName);

  }

  if(m_inputHasBeenSet)
  {
   payload.WithString("input", m_input);

  }

  if(m_externalWorkflowExecutionHasBeenSet)
  {
   payload.WithObject("externalWorkflowExecution", m_externalWorkflowExecution.Jsonize());

  }

  if(m_externalInitiatedEventIdHasBeenSet)
  {
   payload.WithInt64("externalInitiatedEventId", m_externalInitiatedEventId);

  }

  return payload;
}

} // namespace Model
} // namespace SWF
} // namespace Aws