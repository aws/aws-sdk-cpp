/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-runtime/model/ContentBlockDelta.h>
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

ContentBlockDelta::ContentBlockDelta(JsonView jsonValue)
{
  *this = jsonValue;
}

ContentBlockDelta& ContentBlockDelta::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("text"))
  {
    m_text = jsonValue.GetString("text");
    m_textHasBeenSet = true;
  }
  if(jsonValue.ValueExists("toolUse"))
  {
    m_toolUse = jsonValue.GetObject("toolUse");
    m_toolUseHasBeenSet = true;
  }
  if(jsonValue.ValueExists("reasoningContent"))
  {
    m_reasoningContent = jsonValue.GetObject("reasoningContent");
    m_reasoningContentHasBeenSet = true;
  }
  if(jsonValue.ValueExists("citation"))
  {
    m_citation = jsonValue.GetObject("citation");
    m_citationHasBeenSet = true;
  }
  return *this;
}

JsonValue ContentBlockDelta::Jsonize() const
{
  JsonValue payload;

  if(m_textHasBeenSet)
  {
   payload.WithString("text", m_text);

  }

  if(m_toolUseHasBeenSet)
  {
   payload.WithObject("toolUse", m_toolUse.Jsonize());

  }

  if(m_reasoningContentHasBeenSet)
  {
   payload.WithObject("reasoningContent", m_reasoningContent.Jsonize());

  }

  if(m_citationHasBeenSet)
  {
   payload.WithObject("citation", m_citation.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace BedrockRuntime
} // namespace Aws
