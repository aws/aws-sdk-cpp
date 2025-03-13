/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-runtime/model/ToolUseBlockStart.h>
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

ToolUseBlockStart::ToolUseBlockStart(JsonView jsonValue)
{
  *this = jsonValue;
}

ToolUseBlockStart& ToolUseBlockStart::operator =(JsonView jsonValue)
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
  return *this;
}

JsonValue ToolUseBlockStart::Jsonize() const
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

  return payload;
}

} // namespace Model
} // namespace BedrockRuntime
} // namespace Aws
