/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent-runtime/model/InvocationInput.h>
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

InvocationInput::InvocationInput() : 
    m_traceIdHasBeenSet(false),
    m_invocationType(InvocationType::NOT_SET),
    m_invocationTypeHasBeenSet(false),
    m_actionGroupInvocationInputHasBeenSet(false),
    m_knowledgeBaseLookupInputHasBeenSet(false)
{
}

InvocationInput::InvocationInput(JsonView jsonValue) : 
    m_traceIdHasBeenSet(false),
    m_invocationType(InvocationType::NOT_SET),
    m_invocationTypeHasBeenSet(false),
    m_actionGroupInvocationInputHasBeenSet(false),
    m_knowledgeBaseLookupInputHasBeenSet(false)
{
  *this = jsonValue;
}

InvocationInput& InvocationInput::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("traceId"))
  {
    m_traceId = jsonValue.GetString("traceId");

    m_traceIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("invocationType"))
  {
    m_invocationType = InvocationTypeMapper::GetInvocationTypeForName(jsonValue.GetString("invocationType"));

    m_invocationTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("actionGroupInvocationInput"))
  {
    m_actionGroupInvocationInput = jsonValue.GetObject("actionGroupInvocationInput");

    m_actionGroupInvocationInputHasBeenSet = true;
  }

  if(jsonValue.ValueExists("knowledgeBaseLookupInput"))
  {
    m_knowledgeBaseLookupInput = jsonValue.GetObject("knowledgeBaseLookupInput");

    m_knowledgeBaseLookupInputHasBeenSet = true;
  }

  return *this;
}

JsonValue InvocationInput::Jsonize() const
{
  JsonValue payload;

  if(m_traceIdHasBeenSet)
  {
   payload.WithString("traceId", m_traceId);

  }

  if(m_invocationTypeHasBeenSet)
  {
   payload.WithString("invocationType", InvocationTypeMapper::GetNameForInvocationType(m_invocationType));
  }

  if(m_actionGroupInvocationInputHasBeenSet)
  {
   payload.WithObject("actionGroupInvocationInput", m_actionGroupInvocationInput.Jsonize());

  }

  if(m_knowledgeBaseLookupInputHasBeenSet)
  {
   payload.WithObject("knowledgeBaseLookupInput", m_knowledgeBaseLookupInput.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
