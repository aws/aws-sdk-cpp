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

MessageBody::MessageBody(JsonView jsonValue)
{
  *this = jsonValue;
}

MessageBody& MessageBody::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Text"))
  {
    m_text = jsonValue.GetString("Text");
    m_textHasBeenSet = true;
  }
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
  return *this;
}

JsonValue MessageBody::Jsonize() const
{
  JsonValue payload;

  if(m_textHasBeenSet)
  {
   payload.WithString("Text", m_text);

  }

  if(m_htmlHasBeenSet)
  {
   payload.WithString("Html", m_html);

  }

  if(m_messageMalformedHasBeenSet)
  {
   payload.WithBool("MessageMalformed", m_messageMalformed);

  }

  return payload;
}

} // namespace Model
} // namespace MailManager
} // namespace Aws
