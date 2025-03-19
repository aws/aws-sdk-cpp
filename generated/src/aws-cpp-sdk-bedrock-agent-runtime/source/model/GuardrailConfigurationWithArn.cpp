/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent-runtime/model/GuardrailConfigurationWithArn.h>
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

GuardrailConfigurationWithArn::GuardrailConfigurationWithArn(JsonView jsonValue)
{
  *this = jsonValue;
}

GuardrailConfigurationWithArn& GuardrailConfigurationWithArn::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("guardrailIdentifier"))
  {
    m_guardrailIdentifier = jsonValue.GetString("guardrailIdentifier");
    m_guardrailIdentifierHasBeenSet = true;
  }
  if(jsonValue.ValueExists("guardrailVersion"))
  {
    m_guardrailVersion = jsonValue.GetString("guardrailVersion");
    m_guardrailVersionHasBeenSet = true;
  }
  return *this;
}

JsonValue GuardrailConfigurationWithArn::Jsonize() const
{
  JsonValue payload;

  if(m_guardrailIdentifierHasBeenSet)
  {
   payload.WithString("guardrailIdentifier", m_guardrailIdentifier);

  }

  if(m_guardrailVersionHasBeenSet)
  {
   payload.WithString("guardrailVersion", m_guardrailVersion);

  }

  return payload;
}

} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
