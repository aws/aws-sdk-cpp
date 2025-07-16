/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore/model/CodeInterpreterResult.h>
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

CodeInterpreterResult::CodeInterpreterResult(JsonView jsonValue)
{
  *this = jsonValue;
}

CodeInterpreterResult& CodeInterpreterResult::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("content"))
  {
    Aws::Utils::Array<JsonView> contentJsonList = jsonValue.GetArray("content");
    for(unsigned contentIndex = 0; contentIndex < contentJsonList.GetLength(); ++contentIndex)
    {
      m_content.push_back(contentJsonList[contentIndex].AsObject());
    }
    m_contentHasBeenSet = true;
  }
  if(jsonValue.ValueExists("structuredContent"))
  {
    m_structuredContent = jsonValue.GetObject("structuredContent");
    m_structuredContentHasBeenSet = true;
  }
  if(jsonValue.ValueExists("isError"))
  {
    m_isError = jsonValue.GetBool("isError");
    m_isErrorHasBeenSet = true;
  }
  return *this;
}

JsonValue CodeInterpreterResult::Jsonize() const
{
  JsonValue payload;

  if(m_contentHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> contentJsonList(m_content.size());
   for(unsigned contentIndex = 0; contentIndex < contentJsonList.GetLength(); ++contentIndex)
   {
     contentJsonList[contentIndex].AsObject(m_content[contentIndex].Jsonize());
   }
   payload.WithArray("content", std::move(contentJsonList));

  }

  if(m_structuredContentHasBeenSet)
  {
   payload.WithObject("structuredContent", m_structuredContent.Jsonize());

  }

  if(m_isErrorHasBeenSet)
  {
   payload.WithBool("isError", m_isError);

  }

  return payload;
}

} // namespace Model
} // namespace BedrockAgentCore
} // namespace Aws
