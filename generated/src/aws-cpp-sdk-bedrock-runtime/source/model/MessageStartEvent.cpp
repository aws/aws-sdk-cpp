/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-runtime/model/MessageStartEvent.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace BedrockRuntime
{
namespace Model
{

MessageStartEvent::MessageStartEvent(JsonView jsonValue)
{
  *this = jsonValue;
}

MessageStartEvent& MessageStartEvent::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("role"))
  {
    m_role = ConversationRoleMapper::GetConversationRoleForName(jsonValue.GetString("role"));
    m_roleHasBeenSet = true;
  }
  return *this;
}

JsonValue MessageStartEvent::Jsonize() const
{
  JsonValue payload;

  if(m_roleHasBeenSet)
  {
   payload.WithString("role", ConversationRoleMapper::GetNameForConversationRole(m_role));
  }

  return payload;
}

} // namespace Model
} // namespace BedrockRuntime
} // namespace Aws
