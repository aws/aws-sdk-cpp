/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-runtime/model/CitationsContentBlock.h>
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

CitationsContentBlock::CitationsContentBlock(JsonView jsonValue)
{
  *this = jsonValue;
}

CitationsContentBlock& CitationsContentBlock::operator =(JsonView jsonValue)
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
  if(jsonValue.ValueExists("citations"))
  {
    Aws::Utils::Array<JsonView> citationsJsonList = jsonValue.GetArray("citations");
    for(unsigned citationsIndex = 0; citationsIndex < citationsJsonList.GetLength(); ++citationsIndex)
    {
      m_citations.push_back(citationsJsonList[citationsIndex].AsObject());
    }
    m_citationsHasBeenSet = true;
  }
  return *this;
}

JsonValue CitationsContentBlock::Jsonize() const
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

  if(m_citationsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> citationsJsonList(m_citations.size());
   for(unsigned citationsIndex = 0; citationsIndex < citationsJsonList.GetLength(); ++citationsIndex)
   {
     citationsJsonList[citationsIndex].AsObject(m_citations[citationsIndex].Jsonize());
   }
   payload.WithArray("citations", std::move(citationsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace BedrockRuntime
} // namespace Aws
