/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent-runtime/model/Caller.h>
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

Caller::Caller(JsonView jsonValue)
{
  *this = jsonValue;
}

Caller& Caller::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("agentAliasArn"))
  {
    m_agentAliasArn = jsonValue.GetString("agentAliasArn");
    m_agentAliasArnHasBeenSet = true;
  }
  return *this;
}

JsonValue Caller::Jsonize() const
{
  JsonValue payload;

  if(m_agentAliasArnHasBeenSet)
  {
   payload.WithString("agentAliasArn", m_agentAliasArn);

  }

  return payload;
}

} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
