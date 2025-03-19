/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-runtime/model/ToolUseBlock.h>
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

ToolUseBlock::ToolUseBlock(JsonView jsonValue)
{
  *this = jsonValue;
}

ToolUseBlock& ToolUseBlock::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("toolUseId"))
  {
    m_toolUseId = jsonValue.GetString("toolUseId");
    m_toolUseIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");
    m_nameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("input"))
  {
    m_input = jsonValue.GetObject("input");
    m_inputHasBeenSet = true;
  }
  return *this;
}

JsonValue ToolUseBlock::Jsonize() const
{
  JsonValue payload;

  if(m_toolUseIdHasBeenSet)
  {
   payload.WithString("toolUseId", m_toolUseId);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_inputHasBeenSet)
  {
    if(!m_input.View().IsNull())
    {
       payload.WithObject("input", JsonValue(m_input.View()));
    }
  }

  return payload;
}

} // namespace Model
} // namespace BedrockRuntime
} // namespace Aws
