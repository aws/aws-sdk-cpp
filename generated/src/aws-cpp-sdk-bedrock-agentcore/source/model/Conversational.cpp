/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore/model/Conversational.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace BedrockAgentCore
{
namespace Model
{

Conversational::Conversational(JsonView jsonValue)
{
  *this = jsonValue;
}

Conversational& Conversational::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("content"))
  {
    m_content = jsonValue.GetObject("content");
    m_contentHasBeenSet = true;
  }
  if(jsonValue.ValueExists("role"))
  {
    m_role = RoleMapper::GetRoleForName(jsonValue.GetString("role"));
    m_roleHasBeenSet = true;
  }
  return *this;
}

JsonValue Conversational::Jsonize() const
{
  JsonValue payload;

  if(m_contentHasBeenSet)
  {
   payload.WithObject("content", m_content.Jsonize());

  }

  if(m_roleHasBeenSet)
  {
   payload.WithString("role", RoleMapper::GetNameForRole(m_role));
  }

  return payload;
}

} // namespace Model
} // namespace BedrockAgentCore
} // namespace Aws
