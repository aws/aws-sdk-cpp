/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codepipeline/model/StageState.h>
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

StageState::StageState() : 
    m_stageNameHasBeenSet(false),
    m_inboundExecutionHasBeenSet(false),
    m_inboundTransitionStateHasBeenSet(false),
    m_actionStatesHasBeenSet(false),
    m_latestExecutionHasBeenSet(false)
{
}

StageState::StageState(JsonView jsonValue) : 
    m_stageNameHasBeenSet(false),
    m_inboundExecutionHasBeenSet(false),
    m_inboundTransitionStateHasBeenSet(false),
    m_actionStatesHasBeenSet(false),
    m_latestExecutionHasBeenSet(false)
{
  *this = jsonValue;
}

StageState& StageState::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("stageName"))
  {
    m_stageName = jsonValue.GetString("stageName");

    m_stageNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("inboundExecution"))
  {
    m_inboundExecution = jsonValue.GetObject("inboundExecution");

    m_inboundExecutionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("inboundTransitionState"))
  {
    m_inboundTransitionState = jsonValue.GetObject("inboundTransitionState");

    m_inboundTransitionStateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("actionStates"))
  {
    Aws::Utils::Array<JsonView> actionStatesJsonList = jsonValue.GetArray("actionStates");
    for(unsigned actionStatesIndex = 0; actionStatesIndex < actionStatesJsonList.GetLength(); ++actionStatesIndex)
    {
      m_actionStates.push_back(actionStatesJsonList[actionStatesIndex].AsObject());
    }
    m_actionStatesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("latestExecution"))
  {
    m_latestExecution = jsonValue.GetObject("latestExecution");

    m_latestExecutionHasBeenSet = true;
  }

  return *this;
}

JsonValue StageState::Jsonize() const
{
  JsonValue payload;

  if(m_stageNameHasBeenSet)
  {
   payload.WithString("stageName", m_stageName);

  }

  if(m_inboundExecutionHasBeenSet)
  {
   payload.WithObject("inboundExecution", m_inboundExecution.Jsonize());

  }

  if(m_inboundTransitionStateHasBeenSet)
  {
   payload.WithObject("inboundTransitionState", m_inboundTransitionState.Jsonize());

  }

  if(m_actionStatesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> actionStatesJsonList(m_actionStates.size());
   for(unsigned actionStatesIndex = 0; actionStatesIndex < actionStatesJsonList.GetLength(); ++actionStatesIndex)
   {
     actionStatesJsonList[actionStatesIndex].AsObject(m_actionStates[actionStatesIndex].Jsonize());
   }
   payload.WithArray("actionStates", std::move(actionStatesJsonList));

  }

  if(m_latestExecutionHasBeenSet)
  {
   payload.WithObject("latestExecution", m_latestExecution.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace CodePipeline
} // namespace Aws
