/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent-runtime/model/InvocationResultMember.h>
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

InvocationResultMember::InvocationResultMember() : 
    m_apiResultHasBeenSet(false),
    m_functionResultHasBeenSet(false)
{
}

InvocationResultMember::InvocationResultMember(JsonView jsonValue) : 
    m_apiResultHasBeenSet(false),
    m_functionResultHasBeenSet(false)
{
  *this = jsonValue;
}

InvocationResultMember& InvocationResultMember::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("apiResult"))
  {
    m_apiResult = jsonValue.GetObject("apiResult");

    m_apiResultHasBeenSet = true;
  }

  if(jsonValue.ValueExists("functionResult"))
  {
    m_functionResult = jsonValue.GetObject("functionResult");

    m_functionResultHasBeenSet = true;
  }

  return *this;
}

JsonValue InvocationResultMember::Jsonize() const
{
  JsonValue payload;

  if(m_apiResultHasBeenSet)
  {
   payload.WithObject("apiResult", m_apiResult.Jsonize());

  }

  if(m_functionResultHasBeenSet)
  {
   payload.WithObject("functionResult", m_functionResult.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
