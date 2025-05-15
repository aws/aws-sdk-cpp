/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent/model/LoopControllerFlowNodeConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace BedrockAgent
{
namespace Model
{

LoopControllerFlowNodeConfiguration::LoopControllerFlowNodeConfiguration(JsonView jsonValue)
{
  *this = jsonValue;
}

LoopControllerFlowNodeConfiguration& LoopControllerFlowNodeConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("continueCondition"))
  {
    m_continueCondition = jsonValue.GetObject("continueCondition");
    m_continueConditionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("maxIterations"))
  {
    m_maxIterations = jsonValue.GetInteger("maxIterations");
    m_maxIterationsHasBeenSet = true;
  }
  return *this;
}

JsonValue LoopControllerFlowNodeConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_continueConditionHasBeenSet)
  {
   payload.WithObject("continueCondition", m_continueCondition.Jsonize());

  }

  if(m_maxIterationsHasBeenSet)
  {
   payload.WithInteger("maxIterations", m_maxIterations);

  }

  return payload;
}

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
