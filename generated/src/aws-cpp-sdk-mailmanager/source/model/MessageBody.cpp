/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mailmanager/model/MessageBody.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MailManager
{
namespace Model
{

MessageBody::MessageBody() : 
    m_htmlHasBeenSet(false),
    m_messageMalformed(false),
    m_messageMalformedHasBeenSet(false),
    m_textHasBeenSet(false)
{
}

MessageBody::MessageBody(JsonView jsonValue)
  : MessageBody()
{
  *this = jsonValue;
}

MessageBody& MessageBody::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Html"))
  {
    m_html = jsonValue.GetString("Html");

    m_htmlHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MessageMalformed"))
  {
    m_messageMalformed = jsonValue.GetBool("MessageMalformed");

    m_messageMalformedHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Text"))
  {
    m_text = jsonValue.GetString("Text");

    m_textHasBeenSet = true;
  }

  return *this;
}

JsonValue MessageBody::Jsonize() const
{
  JsonValue payload;

  if(m_htmlHasBeenSet)
  {
   payload.WithString("Html", m_html);

  }

  if(m_messageMalformedHasBeenSet)
  {
   payload.WithBool("MessageMalformed", m_messageMalformed);

  }

  if(m_textHasBeenSet)
  {
   payload.WithString("Text", m_text);

  }

  return payload;
}

} // namespace Model
} // namespace MailManager
} // namespace Aws
