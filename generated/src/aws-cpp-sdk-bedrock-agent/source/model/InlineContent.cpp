/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent/model/InlineContent.h>
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

InlineContent::InlineContent() : 
    m_byteContentHasBeenSet(false),
    m_textContentHasBeenSet(false),
    m_type(InlineContentType::NOT_SET),
    m_typeHasBeenSet(false)
{
}

InlineContent::InlineContent(JsonView jsonValue)
  : InlineContent()
{
  *this = jsonValue;
}

InlineContent& InlineContent::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("byteContent"))
  {
    m_byteContent = jsonValue.GetObject("byteContent");

    m_byteContentHasBeenSet = true;
  }

  if(jsonValue.ValueExists("textContent"))
  {
    m_textContent = jsonValue.GetObject("textContent");

    m_textContentHasBeenSet = true;
  }

  if(jsonValue.ValueExists("type"))
  {
    m_type = InlineContentTypeMapper::GetInlineContentTypeForName(jsonValue.GetString("type"));

    m_typeHasBeenSet = true;
  }

  return *this;
}

JsonValue InlineContent::Jsonize() const
{
  JsonValue payload;

  if(m_byteContentHasBeenSet)
  {
   payload.WithObject("byteContent", m_byteContent.Jsonize());

  }

  if(m_textContentHasBeenSet)
  {
   payload.WithObject("textContent", m_textContent.Jsonize());

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("type", InlineContentTypeMapper::GetNameForInlineContentType(m_type));
  }

  return payload;
}

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
