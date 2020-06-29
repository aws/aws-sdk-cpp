/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lex-models/model/Message.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace LexModelBuildingService
{
namespace Model
{

Message::Message() : 
    m_contentType(ContentType::NOT_SET),
    m_contentTypeHasBeenSet(false),
    m_contentHasBeenSet(false),
    m_groupNumber(0),
    m_groupNumberHasBeenSet(false)
{
}

Message::Message(JsonView jsonValue) : 
    m_contentType(ContentType::NOT_SET),
    m_contentTypeHasBeenSet(false),
    m_contentHasBeenSet(false),
    m_groupNumber(0),
    m_groupNumberHasBeenSet(false)
{
  *this = jsonValue;
}

Message& Message::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("contentType"))
  {
    m_contentType = ContentTypeMapper::GetContentTypeForName(jsonValue.GetString("contentType"));

    m_contentTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("content"))
  {
    m_content = jsonValue.GetString("content");

    m_contentHasBeenSet = true;
  }

  if(jsonValue.ValueExists("groupNumber"))
  {
    m_groupNumber = jsonValue.GetInteger("groupNumber");

    m_groupNumberHasBeenSet = true;
  }

  return *this;
}

JsonValue Message::Jsonize() const
{
  JsonValue payload;

  if(m_contentTypeHasBeenSet)
  {
   payload.WithString("contentType", ContentTypeMapper::GetNameForContentType(m_contentType));
  }

  if(m_contentHasBeenSet)
  {
   payload.WithString("content", m_content);

  }

  if(m_groupNumberHasBeenSet)
  {
   payload.WithInteger("groupNumber", m_groupNumber);

  }

  return payload;
}

} // namespace Model
} // namespace LexModelBuildingService
} // namespace Aws
