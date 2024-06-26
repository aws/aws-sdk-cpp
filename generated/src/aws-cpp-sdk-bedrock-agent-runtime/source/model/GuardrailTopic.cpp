﻿/**
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

GuardrailTopic::GuardrailTopic() : 
    m_action(GuardrailTopicPolicyAction::NOT_SET),
    m_actionHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_type(GuardrailTopicType::NOT_SET),
    m_typeHasBeenSet(false)
{
}

GuardrailTopic::GuardrailTopic(JsonView jsonValue)
  : GuardrailTopic()
{
  *this = jsonValue;
}

GuardrailTopic& GuardrailTopic::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("action"))
  {
    m_action = GuardrailTopicPolicyActionMapper::GetGuardrailTopicPolicyActionForName(jsonValue.GetString("action"));

    m_actionHasBeenSet = true;
  }

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

  return *this;
}

JsonValue GuardrailTopic::Jsonize() const
{
  JsonValue payload;

  if(m_actionHasBeenSet)
  {
   payload.WithString("action", GuardrailTopicPolicyActionMapper::GetNameForGuardrailTopicPolicyAction(m_action));
  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("type", GuardrailTopicTypeMapper::GetNameForGuardrailTopicType(m_type));
  }

  return payload;
}

} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
