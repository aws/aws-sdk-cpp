/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent/model/LoopFlowNodeConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/bedrock-agent/model/FlowDefinition.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace BedrockAgent
{
namespace Model
{

LoopFlowNodeConfiguration::LoopFlowNodeConfiguration(JsonView jsonValue)
{
  *this = jsonValue;
}

LoopFlowNodeConfiguration& LoopFlowNodeConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("definition"))
  {
    m_definition = Aws::MakeShared<FlowDefinition>("LoopFlowNodeConfiguration", jsonValue.GetObject("definition"));
    m_definitionHasBeenSet = true;
  }
  return *this;
}

JsonValue LoopFlowNodeConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_definitionHasBeenSet)
  {
   payload.WithObject("definition", m_definition->Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
