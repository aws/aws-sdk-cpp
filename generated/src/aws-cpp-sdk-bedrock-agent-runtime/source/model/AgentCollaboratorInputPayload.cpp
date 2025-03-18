/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent-runtime/model/AgentCollaboratorInputPayload.h>
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

AgentCollaboratorInputPayload::AgentCollaboratorInputPayload(JsonView jsonValue)
{
  *this = jsonValue;
}

AgentCollaboratorInputPayload& AgentCollaboratorInputPayload::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("returnControlResults"))
  {
    m_returnControlResults = jsonValue.GetObject("returnControlResults");
    m_returnControlResultsHasBeenSet = true;
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

JsonValue AgentCollaboratorInputPayload::Jsonize() const
{
  JsonValue payload;

  if(m_returnControlResultsHasBeenSet)
  {
   payload.WithObject("returnControlResults", m_returnControlResults.Jsonize());

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
