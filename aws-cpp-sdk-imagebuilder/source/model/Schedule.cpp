/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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

#include <aws/imagebuilder/model/Schedule.h>
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

Schedule::Schedule() : 
    m_scheduleExpressionHasBeenSet(false),
    m_pipelineExecutionStartCondition(PipelineExecutionStartCondition::NOT_SET),
    m_pipelineExecutionStartConditionHasBeenSet(false)
{
}

Schedule::Schedule(JsonView jsonValue) : 
    m_scheduleExpressionHasBeenSet(false),
    m_pipelineExecutionStartCondition(PipelineExecutionStartCondition::NOT_SET),
    m_pipelineExecutionStartConditionHasBeenSet(false)
{
  *this = jsonValue;
}

Schedule& Schedule::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("scheduleExpression"))
  {
    m_scheduleExpression = jsonValue.GetString("scheduleExpression");

    m_scheduleExpressionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("pipelineExecutionStartCondition"))
  {
    m_pipelineExecutionStartCondition = PipelineExecutionStartConditionMapper::GetPipelineExecutionStartConditionForName(jsonValue.GetString("pipelineExecutionStartCondition"));

    m_pipelineExecutionStartConditionHasBeenSet = true;
  }

  return *this;
}

JsonValue Schedule::Jsonize() const
{
  JsonValue payload;

  if(m_scheduleExpressionHasBeenSet)
  {
   payload.WithString("scheduleExpression", m_scheduleExpression);

  }

  if(m_pipelineExecutionStartConditionHasBeenSet)
  {
   payload.WithString("pipelineExecutionStartCondition", PipelineExecutionStartConditionMapper::GetNameForPipelineExecutionStartCondition(m_pipelineExecutionStartCondition));
  }

  return payload;
}

} // namespace Model
} // namespace imagebuilder
} // namespace Aws
