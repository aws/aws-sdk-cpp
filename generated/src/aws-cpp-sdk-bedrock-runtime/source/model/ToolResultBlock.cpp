/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-runtime/model/ToolResultBlock.h>
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

ToolResultBlock::ToolResultBlock(JsonView jsonValue)
{
  *this = jsonValue;
}

ToolResultBlock& ToolResultBlock::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("toolUseId"))
  {
    m_toolUseId = jsonValue.GetString("toolUseId");
    m_toolUseIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("content"))
  {
    Aws::Utils::Array<JsonView> contentJsonList = jsonValue.GetArray("content");
    for(unsigned contentIndex = 0; contentIndex < contentJsonList.GetLength(); ++contentIndex)
    {
      m_content.push_back(contentJsonList[contentIndex].AsObject());
    }
    m_contentHasBeenSet = true;
  }
  if(jsonValue.ValueExists("status"))
  {
    m_status = ToolResultStatusMapper::GetToolResultStatusForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }
  return *this;
}

JsonValue ToolResultBlock::Jsonize() const
{
  JsonValue payload;

  if(m_toolUseIdHasBeenSet)
  {
   payload.WithString("toolUseId", m_toolUseId);

  }

  if(m_contentHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> contentJsonList(m_content.size());
   for(unsigned contentIndex = 0; contentIndex < contentJsonList.GetLength(); ++contentIndex)
   {
     contentJsonList[contentIndex].AsObject(m_content[contentIndex].Jsonize());
   }
   payload.WithArray("content", std::move(contentJsonList));

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", ToolResultStatusMapper::GetNameForToolResultStatus(m_status));
  }

  return payload;
}

} // namespace Model
} // namespace BedrockRuntime
} // namespace Aws
