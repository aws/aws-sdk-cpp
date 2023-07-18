/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/networkmanager/model/ConnectAttachment.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace NetworkManager
{
namespace Model
{

ConnectAttachment::ConnectAttachment() : 
    m_attachmentHasBeenSet(false),
    m_transportAttachmentIdHasBeenSet(false),
    m_optionsHasBeenSet(false)
{
}

ConnectAttachment::ConnectAttachment(JsonView jsonValue) : 
    m_attachmentHasBeenSet(false),
    m_transportAttachmentIdHasBeenSet(false),
    m_optionsHasBeenSet(false)
{
  *this = jsonValue;
}

ConnectAttachment& ConnectAttachment::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Attachment"))
  {
    m_attachment = jsonValue.GetObject("Attachment");

    m_attachmentHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TransportAttachmentId"))
  {
    m_transportAttachmentId = jsonValue.GetString("TransportAttachmentId");

    m_transportAttachmentIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Options"))
  {
    m_options = jsonValue.GetObject("Options");

    m_optionsHasBeenSet = true;
  }

  return *this;
}

JsonValue ConnectAttachment::Jsonize() const
{
  JsonValue payload;

  if(m_attachmentHasBeenSet)
  {
   payload.WithObject("Attachment", m_attachment.Jsonize());

  }

  if(m_transportAttachmentIdHasBeenSet)
  {
   payload.WithString("TransportAttachmentId", m_transportAttachmentId);

  }

  if(m_optionsHasBeenSet)
  {
   payload.WithObject("Options", m_options.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace NetworkManager
} // namespace Aws
