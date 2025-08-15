/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent/model/ContentBlock.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace BedrockAgent
{
namespace Model
{

ContentBlock::ContentBlock(JsonView jsonValue)
{
  *this = jsonValue;
}

ContentBlock& ContentBlock::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("text"))
  {
    m_text = jsonValue.GetString("text");
    m_textHasBeenSet = true;
  }
  if(jsonValue.ValueExists("cachePoint"))
  {
    m_cachePoint = jsonValue.GetObject("cachePoint");
    m_cachePointHasBeenSet = true;
  }
  return *this;
}

JsonValue ContentBlock::Jsonize() const
{
  JsonValue payload;

  if(m_textHasBeenSet)
  {
   payload.WithString("text", m_text);

  }

  if(m_cachePointHasBeenSet)
  {
   payload.WithObject("cachePoint", m_cachePoint.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
