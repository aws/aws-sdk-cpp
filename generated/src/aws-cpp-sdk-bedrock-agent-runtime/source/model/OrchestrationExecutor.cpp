/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent-runtime/model/OrchestrationExecutor.h>
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

OrchestrationExecutor::OrchestrationExecutor(JsonView jsonValue)
{
  *this = jsonValue;
}

OrchestrationExecutor& OrchestrationExecutor::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("lambda"))
  {
    m_lambda = jsonValue.GetString("lambda");
    m_lambdaHasBeenSet = true;
  }
  return *this;
}

JsonValue OrchestrationExecutor::Jsonize() const
{
  JsonValue payload;

  if(m_lambdaHasBeenSet)
  {
   payload.WithString("lambda", m_lambda);

  }

  return payload;
}

} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
