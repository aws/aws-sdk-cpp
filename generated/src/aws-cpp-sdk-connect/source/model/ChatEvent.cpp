/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/ChatEvent.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Connect
{
namespace Model
{

ChatEvent::ChatEvent() : 
    m_type(ChatEventType::NOT_SET),
    m_typeHasBeenSet(false),
    m_contentTypeHasBeenSet(false),
    m_contentHasBeenSet(false)
{
}

ChatEvent::ChatEvent(JsonView jsonValue) : 
    m_type(ChatEventType::NOT_SET),
    m_typeHasBeenSet(false),
    m_contentTypeHasBeenSet(false),
    m_contentHasBeenSet(false)
{
  *this = jsonValue;
}

ChatEvent& ChatEvent::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Type"))
  {
    m_type = ChatEventTypeMapper::GetChatEventTypeForName(jsonValue.GetString("Type"));

    m_typeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ContentType"))
  {
    m_contentType = jsonValue.GetString("ContentType");

    m_contentTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Content"))
  {
    m_content = jsonValue.GetString("Content");

    m_contentHasBeenSet = true;
  }

  return *this;
}

JsonValue ChatEvent::Jsonize() const
{
  JsonValue payload;

  if(m_typeHasBeenSet)
  {
   payload.WithString("Type", ChatEventTypeMapper::GetNameForChatEventType(m_type));
  }

  if(m_contentTypeHasBeenSet)
  {
   payload.WithString("ContentType", m_contentType);

  }

  if(m_contentHasBeenSet)
  {
   payload.WithString("Content", m_content);

  }

  return payload;
}

} // namespace Model
} // namespace Connect
} // namespace Aws
