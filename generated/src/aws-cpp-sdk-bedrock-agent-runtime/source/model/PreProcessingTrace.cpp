/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent-runtime/model/PreProcessingTrace.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace BedrockAgentRuntime
{
namespace Model
{

PreProcessingTrace::PreProcessingTrace() : 
    m_modelInvocationInputHasBeenSet(false),
    m_modelInvocationOutputHasBeenSet(false)
{
}

PreProcessingTrace::PreProcessingTrace(JsonView jsonValue) : 
    m_modelInvocationInputHasBeenSet(false),
    m_modelInvocationOutputHasBeenSet(false)
{
  *this = jsonValue;
}

PreProcessingTrace& PreProcessingTrace::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("modelInvocationInput"))
  {
    m_modelInvocationInput = jsonValue.GetObject("modelInvocationInput");

    m_modelInvocationInputHasBeenSet = true;
  }

  if(jsonValue.ValueExists("modelInvocationOutput"))
  {
    m_modelInvocationOutput = jsonValue.GetObject("modelInvocationOutput");

    m_modelInvocationOutputHasBeenSet = true;
  }

  return *this;
}

JsonValue PreProcessingTrace::Jsonize() const
{
  JsonValue payload;

  if(m_modelInvocationInputHasBeenSet)
  {
   payload.WithObject("modelInvocationInput", m_modelInvocationInput.Jsonize());

  }

  if(m_modelInvocationOutputHasBeenSet)
  {
   payload.WithObject("modelInvocationOutput", m_modelInvocationOutput.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
