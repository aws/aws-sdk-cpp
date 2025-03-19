/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connectparticipant/model/AttachmentItem.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ConnectParticipant
{
namespace Model
{

AttachmentItem::AttachmentItem(JsonView jsonValue)
{
  *this = jsonValue;
}

AttachmentItem& AttachmentItem::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ContentType"))
  {
    m_contentType = jsonValue.GetString("ContentType");
    m_contentTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("AttachmentId"))
  {
    m_attachmentId = jsonValue.GetString("AttachmentId");
    m_attachmentIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("AttachmentName"))
  {
    m_attachmentName = jsonValue.GetString("AttachmentName");
    m_attachmentNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Status"))
  {
    m_status = ArtifactStatusMapper::GetArtifactStatusForName(jsonValue.GetString("Status"));
    m_statusHasBeenSet = true;
  }
  return *this;
}

JsonValue AttachmentItem::Jsonize() const
{
  JsonValue payload;

  if(m_contentTypeHasBeenSet)
  {
   payload.WithString("ContentType", m_contentType);

  }

  if(m_attachmentIdHasBeenSet)
  {
   payload.WithString("AttachmentId", m_attachmentId);

  }

  if(m_attachmentNameHasBeenSet)
  {
   payload.WithString("AttachmentName", m_attachmentName);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", ArtifactStatusMapper::GetNameForArtifactStatus(m_status));
  }

  return payload;
}

} // namespace Model
} // namespace ConnectParticipant
} // namespace Aws
