/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codepipeline/model/StageConditionState.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CodePipeline
{
namespace Model
{

StageConditionState::StageConditionState(JsonView jsonValue)
{
  *this = jsonValue;
}

StageConditionState& StageConditionState::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("latestExecution"))
  {
    m_latestExecution = jsonValue.GetObject("latestExecution");
    m_latestExecutionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("conditionStates"))
  {
    Aws::Utils::Array<JsonView> conditionStatesJsonList = jsonValue.GetArray("conditionStates");
    for(unsigned conditionStatesIndex = 0; conditionStatesIndex < conditionStatesJsonList.GetLength(); ++conditionStatesIndex)
    {
      m_conditionStates.push_back(conditionStatesJsonList[conditionStatesIndex].AsObject());
    }
    m_conditionStatesHasBeenSet = true;
  }
  return *this;
}

JsonValue StageConditionState::Jsonize() const
{
  JsonValue payload;

  if(m_latestExecutionHasBeenSet)
  {
   payload.WithObject("latestExecution", m_latestExecution.Jsonize());

  }

  if(m_conditionStatesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> conditionStatesJsonList(m_conditionStates.size());
   for(unsigned conditionStatesIndex = 0; conditionStatesIndex < conditionStatesJsonList.GetLength(); ++conditionStatesIndex)
   {
     conditionStatesJsonList[conditionStatesIndex].AsObject(m_conditionStates[conditionStatesIndex].Jsonize());
   }
   payload.WithArray("conditionStates", std::move(conditionStatesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace CodePipeline
} // namespace Aws
