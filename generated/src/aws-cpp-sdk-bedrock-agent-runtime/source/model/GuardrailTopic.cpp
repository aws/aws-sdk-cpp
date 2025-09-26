/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent-runtime/model/GuardrailTopic.h>
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

GuardrailTopic::GuardrailTopic(JsonView jsonValue)
{
  *this = jsonValue;
}

GuardrailTopic& GuardrailTopic::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");
    m_nameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("type"))
  {
    m_type = GuardrailTopicTypeMapper::GetGuardrailTopicTypeForName(jsonValue.GetString("type"));
    m_typeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("action"))
  {
    m_action = GuardrailTopicPolicyActionMapper::GetGuardrailTopicPolicyActionForName(jsonValue.GetString("action"));
    m_actionHasBeenSet = true;
  }
  return *this;
}

JsonValue GuardrailTopic::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("type", GuardrailTopicTypeMapper::GetNameForGuardrailTopicType(m_type));
  }

  if(m_actionHasBeenSet)
  {
   payload.WithString("action", GuardrailTopicPolicyActionMapper::GetNameForGuardrailTopicPolicyAction(m_action));
  }

  return payload;
}

} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
