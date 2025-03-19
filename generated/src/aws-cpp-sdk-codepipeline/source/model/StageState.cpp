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

StageState::StageState(JsonView jsonValue)
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
  if(jsonValue.ValueExists("inboundExecutions"))
  {
    Aws::Utils::Array<JsonView> inboundExecutionsJsonList = jsonValue.GetArray("inboundExecutions");
    for(unsigned inboundExecutionsIndex = 0; inboundExecutionsIndex < inboundExecutionsJsonList.GetLength(); ++inboundExecutionsIndex)
    {
      m_inboundExecutions.push_back(inboundExecutionsJsonList[inboundExecutionsIndex].AsObject());
    }
    m_inboundExecutionsHasBeenSet = true;
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
  if(jsonValue.ValueExists("beforeEntryConditionState"))
  {
    m_beforeEntryConditionState = jsonValue.GetObject("beforeEntryConditionState");
    m_beforeEntryConditionStateHasBeenSet = true;
  }
  if(jsonValue.ValueExists("onSuccessConditionState"))
  {
    m_onSuccessConditionState = jsonValue.GetObject("onSuccessConditionState");
    m_onSuccessConditionStateHasBeenSet = true;
  }
  if(jsonValue.ValueExists("onFailureConditionState"))
  {
    m_onFailureConditionState = jsonValue.GetObject("onFailureConditionState");
    m_onFailureConditionStateHasBeenSet = true;
  }
  if(jsonValue.ValueExists("retryStageMetadata"))
  {
    m_retryStageMetadata = jsonValue.GetObject("retryStageMetadata");
    m_retryStageMetadataHasBeenSet = true;
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

  if(m_inboundExecutionsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> inboundExecutionsJsonList(m_inboundExecutions.size());
   for(unsigned inboundExecutionsIndex = 0; inboundExecutionsIndex < inboundExecutionsJsonList.GetLength(); ++inboundExecutionsIndex)
   {
     inboundExecutionsJsonList[inboundExecutionsIndex].AsObject(m_inboundExecutions[inboundExecutionsIndex].Jsonize());
   }
   payload.WithArray("inboundExecutions", std::move(inboundExecutionsJsonList));

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

  if(m_beforeEntryConditionStateHasBeenSet)
  {
   payload.WithObject("beforeEntryConditionState", m_beforeEntryConditionState.Jsonize());

  }

  if(m_onSuccessConditionStateHasBeenSet)
  {
   payload.WithObject("onSuccessConditionState", m_onSuccessConditionState.Jsonize());

  }

  if(m_onFailureConditionStateHasBeenSet)
  {
   payload.WithObject("onFailureConditionState", m_onFailureConditionState.Jsonize());

  }

  if(m_retryStageMetadataHasBeenSet)
  {
   payload.WithObject("retryStageMetadata", m_retryStageMetadata.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace CodePipeline
} // namespace Aws
