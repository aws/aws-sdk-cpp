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
    m_inboundTransitionStateHasBeenSet(false),
    m_actionStatesHasBeenSet(false),
    m_latestExecutionHasBeenSet(false)
{
}

StageState::StageState(const JsonValue& jsonValue) : 
    m_stageNameHasBeenSet(false),
    m_inboundTransitionStateHasBeenSet(false),
    m_actionStatesHasBeenSet(false),
    m_latestExecutionHasBeenSet(false)
{
  *this = jsonValue;
}

StageState& StageState::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("stageName"))
  {
    m_stageName = jsonValue.GetString("stageName");

    m_stageNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("inboundTransitionState"))
  {
    m_inboundTransitionState = jsonValue.GetObject("inboundTransitionState");

    m_inboundTransitionStateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("actionStates"))
  {
    Array<JsonValue> actionStatesJsonList = jsonValue.GetArray("actionStates");
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

  if(m_inboundTransitionStateHasBeenSet)
  {
   payload.WithObject("inboundTransitionState", m_inboundTransitionState.Jsonize());

  }

  if(m_actionStatesHasBeenSet)
  {
   Array<JsonValue> actionStatesJsonList(m_actionStates.size());
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