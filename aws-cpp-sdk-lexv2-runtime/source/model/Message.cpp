/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lexv2-runtime/model/Message.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace LexRuntimeV2
{
namespace Model
{

Message::Message() : 
    m_contentHasBeenSet(false),
    m_contentType(MessageContentType::NOT_SET),
    m_contentTypeHasBeenSet(false),
    m_imageResponseCardHasBeenSet(false)
{
}

Message::Message(JsonView jsonValue) : 
    m_contentHasBeenSet(false),
    m_contentType(MessageContentType::NOT_SET),
    m_contentTypeHasBeenSet(false),
    m_imageResponseCardHasBeenSet(false)
{
  *this = jsonValue;
}

Message& Message::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("content"))
  {
    m_content = jsonValue.GetString("content");

    m_contentHasBeenSet = true;
  }

  if(jsonValue.ValueExists("contentType"))
  {
    m_contentType = MessageContentTypeMapper::GetMessageContentTypeForName(jsonValue.GetString("contentType"));

    m_contentTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("imageResponseCard"))
  {
    m_imageResponseCard = jsonValue.GetObject("imageResponseCard");

    m_imageResponseCardHasBeenSet = true;
  }

  return *this;
}

JsonValue Message::Jsonize() const
{
  JsonValue payload;

  if(m_contentHasBeenSet)
  {
   payload.WithString("content", m_content);

  }

  if(m_contentTypeHasBeenSet)
  {
   payload.WithString("contentType", MessageContentTypeMapper::GetNameForMessageContentType(m_contentType));
  }

  if(m_imageResponseCardHasBeenSet)
  {
   payload.WithObject("imageResponseCard", m_imageResponseCard.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace LexRuntimeV2
} // namespace Aws
