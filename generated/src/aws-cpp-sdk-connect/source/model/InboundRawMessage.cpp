/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/InboundRawMessage.h>
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

InboundRawMessage::InboundRawMessage(JsonView jsonValue)
{
  *this = jsonValue;
}

InboundRawMessage& InboundRawMessage::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Subject"))
  {
    m_subject = jsonValue.GetString("Subject");
    m_subjectHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Body"))
  {
    m_body = jsonValue.GetString("Body");
    m_bodyHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ContentType"))
  {
    m_contentType = jsonValue.GetString("ContentType");
    m_contentTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Headers"))
  {
    Aws::Map<Aws::String, JsonView> headersJsonMap = jsonValue.GetObject("Headers").GetAllObjects();
    for(auto& headersItem : headersJsonMap)
    {
      m_headers[EmailHeaderTypeMapper::GetEmailHeaderTypeForName(headersItem.first)] = headersItem.second.AsString();
    }
    m_headersHasBeenSet = true;
  }
  return *this;
}

JsonValue InboundRawMessage::Jsonize() const
{
  JsonValue payload;

  if(m_subjectHasBeenSet)
  {
   payload.WithString("Subject", m_subject);

  }

  if(m_bodyHasBeenSet)
  {
   payload.WithString("Body", m_body);

  }

  if(m_contentTypeHasBeenSet)
  {
   payload.WithString("ContentType", m_contentType);

  }

  if(m_headersHasBeenSet)
  {
   JsonValue headersJsonMap;
   for(auto& headersItem : m_headers)
   {
     headersJsonMap.WithString(EmailHeaderTypeMapper::GetNameForEmailHeaderType(headersItem.first), headersItem.second);
   }
   payload.WithObject("Headers", std::move(headersJsonMap));

  }

  return payload;
}

} // namespace Model
} // namespace Connect
} // namespace Aws
