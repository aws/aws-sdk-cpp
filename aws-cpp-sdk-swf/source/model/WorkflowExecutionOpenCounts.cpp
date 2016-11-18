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
#include <aws/swf/model/WorkflowExecutionOpenCounts.h>
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

WorkflowExecutionOpenCounts::WorkflowExecutionOpenCounts() : 
    m_openActivityTasks(0),
    m_openActivityTasksHasBeenSet(false),
    m_openDecisionTasks(0),
    m_openDecisionTasksHasBeenSet(false),
    m_openTimers(0),
    m_openTimersHasBeenSet(false),
    m_openChildWorkflowExecutions(0),
    m_openChildWorkflowExecutionsHasBeenSet(false),
    m_openLambdaFunctions(0),
    m_openLambdaFunctionsHasBeenSet(false)
{
}

WorkflowExecutionOpenCounts::WorkflowExecutionOpenCounts(const JsonValue& jsonValue) : 
    m_openActivityTasks(0),
    m_openActivityTasksHasBeenSet(false),
    m_openDecisionTasks(0),
    m_openDecisionTasksHasBeenSet(false),
    m_openTimers(0),
    m_openTimersHasBeenSet(false),
    m_openChildWorkflowExecutions(0),
    m_openChildWorkflowExecutionsHasBeenSet(false),
    m_openLambdaFunctions(0),
    m_openLambdaFunctionsHasBeenSet(false)
{
  *this = jsonValue;
}

WorkflowExecutionOpenCounts& WorkflowExecutionOpenCounts::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("openActivityTasks"))
  {
    m_openActivityTasks = jsonValue.GetInteger("openActivityTasks");

    m_openActivityTasksHasBeenSet = true;
  }

  if(jsonValue.ValueExists("openDecisionTasks"))
  {
    m_openDecisionTasks = jsonValue.GetInteger("openDecisionTasks");

    m_openDecisionTasksHasBeenSet = true;
  }

  if(jsonValue.ValueExists("openTimers"))
  {
    m_openTimers = jsonValue.GetInteger("openTimers");

    m_openTimersHasBeenSet = true;
  }

  if(jsonValue.ValueExists("openChildWorkflowExecutions"))
  {
    m_openChildWorkflowExecutions = jsonValue.GetInteger("openChildWorkflowExecutions");

    m_openChildWorkflowExecutionsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("openLambdaFunctions"))
  {
    m_openLambdaFunctions = jsonValue.GetInteger("openLambdaFunctions");

    m_openLambdaFunctionsHasBeenSet = true;
  }

  return *this;
}

JsonValue WorkflowExecutionOpenCounts::Jsonize() const
{
  JsonValue payload;

  if(m_openActivityTasksHasBeenSet)
  {
   payload.WithInteger("openActivityTasks", m_openActivityTasks);

  }

  if(m_openDecisionTasksHasBeenSet)
  {
   payload.WithInteger("openDecisionTasks", m_openDecisionTasks);

  }

  if(m_openTimersHasBeenSet)
  {
   payload.WithInteger("openTimers", m_openTimers);

  }

  if(m_openChildWorkflowExecutionsHasBeenSet)
  {
   payload.WithInteger("openChildWorkflowExecutions", m_openChildWorkflowExecutions);

  }

  if(m_openLambdaFunctionsHasBeenSet)
  {
   payload.WithInteger("openLambdaFunctions", m_openLambdaFunctions);

  }

  return payload;
}

} // namespace Model
} // namespace SWF
} // namespace Aws