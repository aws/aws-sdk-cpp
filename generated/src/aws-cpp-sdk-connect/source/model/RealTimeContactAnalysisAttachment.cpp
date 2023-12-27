/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/RealTimeContactAnalysisAttachment.h>
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

RealTimeContactAnalysisAttachment::RealTimeContactAnalysisAttachment() : 
    m_attachmentNameHasBeenSet(false),
    m_contentTypeHasBeenSet(false),
    m_attachmentIdHasBeenSet(false),
    m_status(ArtifactStatus::NOT_SET),
    m_statusHasBeenSet(false)
{
}

RealTimeContactAnalysisAttachment::RealTimeContactAnalysisAttachment(JsonView jsonValue) : 
    m_attachmentNameHasBeenSet(false),
    m_contentTypeHasBeenSet(false),
    m_attachmentIdHasBeenSet(false),
    m_status(ArtifactStatus::NOT_SET),
    m_statusHasBeenSet(false)
{
  *this = jsonValue;
}

RealTimeContactAnalysisAttachment& RealTimeContactAnalysisAttachment::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("AttachmentName"))
  {
    m_attachmentName = jsonValue.GetString("AttachmentName");

    m_attachmentNameHasBeenSet = true;
  }

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

  if(jsonValue.ValueExists("Status"))
  {
    m_status = ArtifactStatusMapper::GetArtifactStatusForName(jsonValue.GetString("Status"));

    m_statusHasBeenSet = true;
  }

  return *this;
}

JsonValue RealTimeContactAnalysisAttachment::Jsonize() const
{
  JsonValue payload;

  if(m_attachmentNameHasBeenSet)
  {
   payload.WithString("AttachmentName", m_attachmentName);

  }

  if(m_contentTypeHasBeenSet)
  {
   payload.WithString("ContentType", m_contentType);

  }

  if(m_attachmentIdHasBeenSet)
  {
   payload.WithString("AttachmentId", m_attachmentId);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", ArtifactStatusMapper::GetNameForArtifactStatus(m_status));
  }

  return payload;
}

} // namespace Model
} // namespace Connect
} // namespace Aws
