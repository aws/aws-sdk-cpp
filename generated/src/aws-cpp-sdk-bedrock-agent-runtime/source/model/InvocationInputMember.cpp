/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent-runtime/model/InvocationInputMember.h>
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

InvocationInputMember::InvocationInputMember() : 
    m_apiInvocationInputHasBeenSet(false),
    m_functionInvocationInputHasBeenSet(false)
{
}

InvocationInputMember::InvocationInputMember(JsonView jsonValue) : 
    m_apiInvocationInputHasBeenSet(false),
    m_functionInvocationInputHasBeenSet(false)
{
  *this = jsonValue;
}

InvocationInputMember& InvocationInputMember::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("apiInvocationInput"))
  {
    m_apiInvocationInput = jsonValue.GetObject("apiInvocationInput");

    m_apiInvocationInputHasBeenSet = true;
  }

  if(jsonValue.ValueExists("functionInvocationInput"))
  {
    m_functionInvocationInput = jsonValue.GetObject("functionInvocationInput");

    m_functionInvocationInputHasBeenSet = true;
  }

  return *this;
}

JsonValue InvocationInputMember::Jsonize() const
{
  JsonValue payload;

  if(m_apiInvocationInputHasBeenSet)
  {
   payload.WithObject("apiInvocationInput", m_apiInvocationInput.Jsonize());

  }

  if(m_functionInvocationInputHasBeenSet)
  {
   payload.WithObject("functionInvocationInput", m_functionInvocationInput.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
