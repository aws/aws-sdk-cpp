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
#include <aws/swf/model/Decision.h>
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

Decision::Decision() : 
    m_decisionType(DecisionType::NOT_SET),
    m_decisionTypeHasBeenSet(false),
    m_scheduleActivityTaskDecisionAttributesHasBeenSet(false),
    m_requestCancelActivityTaskDecisionAttributesHasBeenSet(false),
    m_completeWorkflowExecutionDecisionAttributesHasBeenSet(false),
    m_failWorkflowExecutionDecisionAttributesHasBeenSet(false),
    m_cancelWorkflowExecutionDecisionAttributesHasBeenSet(false),
    m_continueAsNewWorkflowExecutionDecisionAttributesHasBeenSet(false),
    m_recordMarkerDecisionAttributesHasBeenSet(false),
    m_startTimerDecisionAttributesHasBeenSet(false),
    m_cancelTimerDecisionAttributesHasBeenSet(false),
    m_signalExternalWorkflowExecutionDecisionAttributesHasBeenSet(false),
    m_requestCancelExternalWorkflowExecutionDecisionAttributesHasBeenSet(false),
    m_startChildWorkflowExecutionDecisionAttributesHasBeenSet(false),
    m_scheduleLambdaFunctionDecisionAttributesHasBeenSet(false)
{
}

Decision::Decision(const JsonValue& jsonValue) : 
    m_decisionType(DecisionType::NOT_SET),
    m_decisionTypeHasBeenSet(false),
    m_scheduleActivityTaskDecisionAttributesHasBeenSet(false),
    m_requestCancelActivityTaskDecisionAttributesHasBeenSet(false),
    m_completeWorkflowExecutionDecisionAttributesHasBeenSet(false),
    m_failWorkflowExecutionDecisionAttributesHasBeenSet(false),
    m_cancelWorkflowExecutionDecisionAttributesHasBeenSet(false),
    m_continueAsNewWorkflowExecutionDecisionAttributesHasBeenSet(false),
    m_recordMarkerDecisionAttributesHasBeenSet(false),
    m_startTimerDecisionAttributesHasBeenSet(false),
    m_cancelTimerDecisionAttributesHasBeenSet(false),
    m_signalExternalWorkflowExecutionDecisionAttributesHasBeenSet(false),
    m_requestCancelExternalWorkflowExecutionDecisionAttributesHasBeenSet(false),
    m_startChildWorkflowExecutionDecisionAttributesHasBeenSet(false),
    m_scheduleLambdaFunctionDecisionAttributesHasBeenSet(false)
{
  *this = jsonValue;
}

Decision& Decision::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("decisionType"))
  {
    m_decisionType = DecisionTypeMapper::GetDecisionTypeForName(jsonValue.GetString("decisionType"));

    m_decisionTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("scheduleActivityTaskDecisionAttributes"))
  {
    m_scheduleActivityTaskDecisionAttributes = jsonValue.GetObject("scheduleActivityTaskDecisionAttributes");

    m_scheduleActivityTaskDecisionAttributesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("requestCancelActivityTaskDecisionAttributes"))
  {
    m_requestCancelActivityTaskDecisionAttributes = jsonValue.GetObject("requestCancelActivityTaskDecisionAttributes");

    m_requestCancelActivityTaskDecisionAttributesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("completeWorkflowExecutionDecisionAttributes"))
  {
    m_completeWorkflowExecutionDecisionAttributes = jsonValue.GetObject("completeWorkflowExecutionDecisionAttributes");

    m_completeWorkflowExecutionDecisionAttributesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("failWorkflowExecutionDecisionAttributes"))
  {
    m_failWorkflowExecutionDecisionAttributes = jsonValue.GetObject("failWorkflowExecutionDecisionAttributes");

    m_failWorkflowExecutionDecisionAttributesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("cancelWorkflowExecutionDecisionAttributes"))
  {
    m_cancelWorkflowExecutionDecisionAttributes = jsonValue.GetObject("cancelWorkflowExecutionDecisionAttributes");

    m_cancelWorkflowExecutionDecisionAttributesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("continueAsNewWorkflowExecutionDecisionAttributes"))
  {
    m_continueAsNewWorkflowExecutionDecisionAttributes = jsonValue.GetObject("continueAsNewWorkflowExecutionDecisionAttributes");

    m_continueAsNewWorkflowExecutionDecisionAttributesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("recordMarkerDecisionAttributes"))
  {
    m_recordMarkerDecisionAttributes = jsonValue.GetObject("recordMarkerDecisionAttributes");

    m_recordMarkerDecisionAttributesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("startTimerDecisionAttributes"))
  {
    m_startTimerDecisionAttributes = jsonValue.GetObject("startTimerDecisionAttributes");

    m_startTimerDecisionAttributesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("cancelTimerDecisionAttributes"))
  {
    m_cancelTimerDecisionAttributes = jsonValue.GetObject("cancelTimerDecisionAttributes");

    m_cancelTimerDecisionAttributesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("signalExternalWorkflowExecutionDecisionAttributes"))
  {
    m_signalExternalWorkflowExecutionDecisionAttributes = jsonValue.GetObject("signalExternalWorkflowExecutionDecisionAttributes");

    m_signalExternalWorkflowExecutionDecisionAttributesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("requestCancelExternalWorkflowExecutionDecisionAttributes"))
  {
    m_requestCancelExternalWorkflowExecutionDecisionAttributes = jsonValue.GetObject("requestCancelExternalWorkflowExecutionDecisionAttributes");

    m_requestCancelExternalWorkflowExecutionDecisionAttributesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("startChildWorkflowExecutionDecisionAttributes"))
  {
    m_startChildWorkflowExecutionDecisionAttributes = jsonValue.GetObject("startChildWorkflowExecutionDecisionAttributes");

    m_startChildWorkflowExecutionDecisionAttributesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("scheduleLambdaFunctionDecisionAttributes"))
  {
    m_scheduleLambdaFunctionDecisionAttributes = jsonValue.GetObject("scheduleLambdaFunctionDecisionAttributes");

    m_scheduleLambdaFunctionDecisionAttributesHasBeenSet = true;
  }

  return *this;
}

JsonValue Decision::Jsonize() const
{
  JsonValue payload;

  if(m_decisionTypeHasBeenSet)
  {
   payload.WithString("decisionType", DecisionTypeMapper::GetNameForDecisionType(m_decisionType));
  }

  if(m_scheduleActivityTaskDecisionAttributesHasBeenSet)
  {
   payload.WithObject("scheduleActivityTaskDecisionAttributes", m_scheduleActivityTaskDecisionAttributes.Jsonize());

  }

  if(m_requestCancelActivityTaskDecisionAttributesHasBeenSet)
  {
   payload.WithObject("requestCancelActivityTaskDecisionAttributes", m_requestCancelActivityTaskDecisionAttributes.Jsonize());

  }

  if(m_completeWorkflowExecutionDecisionAttributesHasBeenSet)
  {
   payload.WithObject("completeWorkflowExecutionDecisionAttributes", m_completeWorkflowExecutionDecisionAttributes.Jsonize());

  }

  if(m_failWorkflowExecutionDecisionAttributesHasBeenSet)
  {
   payload.WithObject("failWorkflowExecutionDecisionAttributes", m_failWorkflowExecutionDecisionAttributes.Jsonize());

  }

  if(m_cancelWorkflowExecutionDecisionAttributesHasBeenSet)
  {
   payload.WithObject("cancelWorkflowExecutionDecisionAttributes", m_cancelWorkflowExecutionDecisionAttributes.Jsonize());

  }

  if(m_continueAsNewWorkflowExecutionDecisionAttributesHasBeenSet)
  {
   payload.WithObject("continueAsNewWorkflowExecutionDecisionAttributes", m_continueAsNewWorkflowExecutionDecisionAttributes.Jsonize());

  }

  if(m_recordMarkerDecisionAttributesHasBeenSet)
  {
   payload.WithObject("recordMarkerDecisionAttributes", m_recordMarkerDecisionAttributes.Jsonize());

  }

  if(m_startTimerDecisionAttributesHasBeenSet)
  {
   payload.WithObject("startTimerDecisionAttributes", m_startTimerDecisionAttributes.Jsonize());

  }

  if(m_cancelTimerDecisionAttributesHasBeenSet)
  {
   payload.WithObject("cancelTimerDecisionAttributes", m_cancelTimerDecisionAttributes.Jsonize());

  }

  if(m_signalExternalWorkflowExecutionDecisionAttributesHasBeenSet)
  {
   payload.WithObject("signalExternalWorkflowExecutionDecisionAttributes", m_signalExternalWorkflowExecutionDecisionAttributes.Jsonize());

  }

  if(m_requestCancelExternalWorkflowExecutionDecisionAttributesHasBeenSet)
  {
   payload.WithObject("requestCancelExternalWorkflowExecutionDecisionAttributes", m_requestCancelExternalWorkflowExecutionDecisionAttributes.Jsonize());

  }

  if(m_startChildWorkflowExecutionDecisionAttributesHasBeenSet)
  {
   payload.WithObject("startChildWorkflowExecutionDecisionAttributes", m_startChildWorkflowExecutionDecisionAttributes.Jsonize());

  }

  if(m_scheduleLambdaFunctionDecisionAttributesHasBeenSet)
  {
   payload.WithObject("scheduleLambdaFunctionDecisionAttributes", m_scheduleLambdaFunctionDecisionAttributes.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace SWF
} // namespace Aws