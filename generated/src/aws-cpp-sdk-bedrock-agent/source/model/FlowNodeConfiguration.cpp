/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent/model/FlowNodeConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/bedrock-agent/model/LoopFlowNodeConfiguration.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace BedrockAgent
{
namespace Model
{

FlowNodeConfiguration::FlowNodeConfiguration(JsonView jsonValue)
{
  *this = jsonValue;
}

FlowNodeConfiguration& FlowNodeConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("input"))
  {
    m_input = jsonValue.GetObject("input");
    m_inputHasBeenSet = true;
  }
  if(jsonValue.ValueExists("output"))
  {
    m_output = jsonValue.GetObject("output");
    m_outputHasBeenSet = true;
  }
  if(jsonValue.ValueExists("knowledgeBase"))
  {
    m_knowledgeBase = jsonValue.GetObject("knowledgeBase");
    m_knowledgeBaseHasBeenSet = true;
  }
  if(jsonValue.ValueExists("condition"))
  {
    m_condition = jsonValue.GetObject("condition");
    m_conditionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("lex"))
  {
    m_lex = jsonValue.GetObject("lex");
    m_lexHasBeenSet = true;
  }
  if(jsonValue.ValueExists("prompt"))
  {
    m_prompt = jsonValue.GetObject("prompt");
    m_promptHasBeenSet = true;
  }
  if(jsonValue.ValueExists("lambdaFunction"))
  {
    m_lambdaFunction = jsonValue.GetObject("lambdaFunction");
    m_lambdaFunctionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("storage"))
  {
    m_storage = jsonValue.GetObject("storage");
    m_storageHasBeenSet = true;
  }
  if(jsonValue.ValueExists("agent"))
  {
    m_agent = jsonValue.GetObject("agent");
    m_agentHasBeenSet = true;
  }
  if(jsonValue.ValueExists("retrieval"))
  {
    m_retrieval = jsonValue.GetObject("retrieval");
    m_retrievalHasBeenSet = true;
  }
  if(jsonValue.ValueExists("iterator"))
  {
    m_iterator = jsonValue.GetObject("iterator");
    m_iteratorHasBeenSet = true;
  }
  if(jsonValue.ValueExists("collector"))
  {
    m_collector = jsonValue.GetObject("collector");
    m_collectorHasBeenSet = true;
  }
  if(jsonValue.ValueExists("inlineCode"))
  {
    m_inlineCode = jsonValue.GetObject("inlineCode");
    m_inlineCodeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("loop"))
  {
    m_loop = Aws::MakeShared<LoopFlowNodeConfiguration>("FlowNodeConfiguration", jsonValue.GetObject("loop"));
    m_loopHasBeenSet = true;
  }
  if(jsonValue.ValueExists("loopInput"))
  {
    m_loopInput = jsonValue.GetObject("loopInput");
    m_loopInputHasBeenSet = true;
  }
  if(jsonValue.ValueExists("loopController"))
  {
    m_loopController = jsonValue.GetObject("loopController");
    m_loopControllerHasBeenSet = true;
  }
  return *this;
}

JsonValue FlowNodeConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_inputHasBeenSet)
  {
   payload.WithObject("input", m_input.Jsonize());

  }

  if(m_outputHasBeenSet)
  {
   payload.WithObject("output", m_output.Jsonize());

  }

  if(m_knowledgeBaseHasBeenSet)
  {
   payload.WithObject("knowledgeBase", m_knowledgeBase.Jsonize());

  }

  if(m_conditionHasBeenSet)
  {
   payload.WithObject("condition", m_condition.Jsonize());

  }

  if(m_lexHasBeenSet)
  {
   payload.WithObject("lex", m_lex.Jsonize());

  }

  if(m_promptHasBeenSet)
  {
   payload.WithObject("prompt", m_prompt.Jsonize());

  }

  if(m_lambdaFunctionHasBeenSet)
  {
   payload.WithObject("lambdaFunction", m_lambdaFunction.Jsonize());

  }

  if(m_storageHasBeenSet)
  {
   payload.WithObject("storage", m_storage.Jsonize());

  }

  if(m_agentHasBeenSet)
  {
   payload.WithObject("agent", m_agent.Jsonize());

  }

  if(m_retrievalHasBeenSet)
  {
   payload.WithObject("retrieval", m_retrieval.Jsonize());

  }

  if(m_iteratorHasBeenSet)
  {
   payload.WithObject("iterator", m_iterator.Jsonize());

  }

  if(m_collectorHasBeenSet)
  {
   payload.WithObject("collector", m_collector.Jsonize());

  }

  if(m_inlineCodeHasBeenSet)
  {
   payload.WithObject("inlineCode", m_inlineCode.Jsonize());

  }

  if(m_loopHasBeenSet)
  {
   payload.WithObject("loop", m_loop->Jsonize());

  }

  if(m_loopInputHasBeenSet)
  {
   payload.WithObject("loopInput", m_loopInput.Jsonize());

  }

  if(m_loopControllerHasBeenSet)
  {
   payload.WithObject("loopController", m_loopController.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
