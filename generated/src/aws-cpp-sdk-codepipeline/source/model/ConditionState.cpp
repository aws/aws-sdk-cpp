/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codepipeline/model/ConditionState.h>
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

ConditionState::ConditionState(JsonView jsonValue)
{
  *this = jsonValue;
}

ConditionState& ConditionState::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("latestExecution"))
  {
    m_latestExecution = jsonValue.GetObject("latestExecution");
    m_latestExecutionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ruleStates"))
  {
    Aws::Utils::Array<JsonView> ruleStatesJsonList = jsonValue.GetArray("ruleStates");
    for(unsigned ruleStatesIndex = 0; ruleStatesIndex < ruleStatesJsonList.GetLength(); ++ruleStatesIndex)
    {
      m_ruleStates.push_back(ruleStatesJsonList[ruleStatesIndex].AsObject());
    }
    m_ruleStatesHasBeenSet = true;
  }
  return *this;
}

JsonValue ConditionState::Jsonize() const
{
  JsonValue payload;

  if(m_latestExecutionHasBeenSet)
  {
   payload.WithObject("latestExecution", m_latestExecution.Jsonize());

  }

  if(m_ruleStatesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> ruleStatesJsonList(m_ruleStates.size());
   for(unsigned ruleStatesIndex = 0; ruleStatesIndex < ruleStatesJsonList.GetLength(); ++ruleStatesIndex)
   {
     ruleStatesJsonList[ruleStatesIndex].AsObject(m_ruleStates[ruleStatesIndex].Jsonize());
   }
   payload.WithArray("ruleStates", std::move(ruleStatesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace CodePipeline
} // namespace Aws
