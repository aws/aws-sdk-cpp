/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-runtime/model/SystemContentBlock.h>
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

SystemContentBlock::SystemContentBlock() : 
    m_textHasBeenSet(false),
    m_guardContentHasBeenSet(false)
{
}

SystemContentBlock::SystemContentBlock(JsonView jsonValue)
  : SystemContentBlock()
{
  *this = jsonValue;
}

SystemContentBlock& SystemContentBlock::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("text"))
  {
    m_text = jsonValue.GetString("text");

    m_textHasBeenSet = true;
  }

  if(jsonValue.ValueExists("guardContent"))
  {
    m_guardContent = jsonValue.GetObject("guardContent");

    m_guardContentHasBeenSet = true;
  }

  return *this;
}

JsonValue SystemContentBlock::Jsonize() const
{
  JsonValue payload;

  if(m_textHasBeenSet)
  {
   payload.WithString("text", m_text);

  }

  if(m_guardContentHasBeenSet)
  {
   payload.WithObject("guardContent", m_guardContent.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace BedrockRuntime
} // namespace Aws
