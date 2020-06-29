/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
