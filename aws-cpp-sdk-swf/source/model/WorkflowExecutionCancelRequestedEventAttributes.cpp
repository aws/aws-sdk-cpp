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
#include <aws/swf/model/WorkflowExecutionCancelRequestedEventAttributes.h>
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

WorkflowExecutionCancelRequestedEventAttributes::WorkflowExecutionCancelRequestedEventAttributes() : 
    m_externalWorkflowExecutionHasBeenSet(false),
    m_externalInitiatedEventId(0),
    m_externalInitiatedEventIdHasBeenSet(false),
    m_cause(WorkflowExecutionCancelRequestedCause::NOT_SET),
    m_causeHasBeenSet(false)
{
}

WorkflowExecutionCancelRequestedEventAttributes::WorkflowExecutionCancelRequestedEventAttributes(const JsonValue& jsonValue) : 
    m_externalWorkflowExecutionHasBeenSet(false),
    m_externalInitiatedEventId(0),
    m_externalInitiatedEventIdHasBeenSet(false),
    m_cause(WorkflowExecutionCancelRequestedCause::NOT_SET),
    m_causeHasBeenSet(false)
{
  *this = jsonValue;
}

WorkflowExecutionCancelRequestedEventAttributes& WorkflowExecutionCancelRequestedEventAttributes::operator =(const JsonValue& jsonValue)
{
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

  if(jsonValue.ValueExists("cause"))
  {
    m_cause = WorkflowExecutionCancelRequestedCauseMapper::GetWorkflowExecutionCancelRequestedCauseForName(jsonValue.GetString("cause"));

    m_causeHasBeenSet = true;
  }

  return *this;
}

JsonValue WorkflowExecutionCancelRequestedEventAttributes::Jsonize() const
{
  JsonValue payload;

  if(m_externalWorkflowExecutionHasBeenSet)
  {
   payload.WithObject("externalWorkflowExecution", m_externalWorkflowExecution.Jsonize());

  }

  if(m_externalInitiatedEventIdHasBeenSet)
  {
   payload.WithInt64("externalInitiatedEventId", m_externalInitiatedEventId);

  }

  if(m_causeHasBeenSet)
  {
   payload.WithString("cause", WorkflowExecutionCancelRequestedCauseMapper::GetNameForWorkflowExecutionCancelRequestedCause(m_cause));
  }

  return payload;
}

} // namespace Model
} // namespace SWF
} // namespace Aws