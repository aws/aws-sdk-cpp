/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/ReferenceSummary.h>
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

ReferenceSummary::ReferenceSummary(JsonView jsonValue)
{
  *this = jsonValue;
}

ReferenceSummary& ReferenceSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Url"))
  {
    m_url = jsonValue.GetObject("Url");
    m_urlHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Attachment"))
  {
    m_attachment = jsonValue.GetObject("Attachment");
    m_attachmentHasBeenSet = true;
  }
  if(jsonValue.ValueExists("EmailMessage"))
  {
    m_emailMessage = jsonValue.GetObject("EmailMessage");
    m_emailMessageHasBeenSet = true;
  }
  if(jsonValue.ValueExists("String"))
  {
    m_string = jsonValue.GetObject("String");
    m_stringHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Number"))
  {
    m_number = jsonValue.GetObject("Number");
    m_numberHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Date"))
  {
    m_date = jsonValue.GetObject("Date");
    m_dateHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Email"))
  {
    m_email = jsonValue.GetObject("Email");
    m_emailHasBeenSet = true;
  }
  return *this;
}

JsonValue ReferenceSummary::Jsonize() const
{
  JsonValue payload;

  if(m_urlHasBeenSet)
  {
   payload.WithObject("Url", m_url.Jsonize());

  }

  if(m_attachmentHasBeenSet)
  {
   payload.WithObject("Attachment", m_attachment.Jsonize());

  }

  if(m_emailMessageHasBeenSet)
  {
   payload.WithObject("EmailMessage", m_emailMessage.Jsonize());

  }

  if(m_stringHasBeenSet)
  {
   payload.WithObject("String", m_string.Jsonize());

  }

  if(m_numberHasBeenSet)
  {
   payload.WithObject("Number", m_number.Jsonize());

  }

  if(m_dateHasBeenSet)
  {
   payload.WithObject("Date", m_date.Jsonize());

  }

  if(m_emailHasBeenSet)
  {
   payload.WithObject("Email", m_email.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Connect
} // namespace Aws
