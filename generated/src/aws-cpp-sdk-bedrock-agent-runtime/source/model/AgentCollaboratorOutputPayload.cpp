/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent-runtime/model/AgentCollaboratorOutputPayload.h>
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

AgentCollaboratorOutputPayload::AgentCollaboratorOutputPayload(JsonView jsonValue)
{
  *this = jsonValue;
}

AgentCollaboratorOutputPayload& AgentCollaboratorOutputPayload::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("returnControlPayload"))
  {
    m_returnControlPayload = jsonValue.GetObject("returnControlPayload");
    m_returnControlPayloadHasBeenSet = true;
  }
  if(jsonValue.ValueExists("text"))
  {
    m_text = jsonValue.GetString("text");
    m_textHasBeenSet = true;
  }
  if(jsonValue.ValueExists("type"))
  {
    m_type = PayloadTypeMapper::GetPayloadTypeForName(jsonValue.GetString("type"));
    m_typeHasBeenSet = true;
  }
  return *this;
}

JsonValue AgentCollaboratorOutputPayload::Jsonize() const
{
  JsonValue payload;

  if(m_returnControlPayloadHasBeenSet)
  {
   payload.WithObject("returnControlPayload", m_returnControlPayload.Jsonize());

  }

  if(m_textHasBeenSet)
  {
   payload.WithString("text", m_text);

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("type", PayloadTypeMapper::GetNameForPayloadType(m_type));
  }

  return payload;
}

} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
