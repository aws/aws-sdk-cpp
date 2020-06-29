/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workdocs/model/DocumentVersionMetadata.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace WorkDocs
{
namespace Model
{

DocumentVersionMetadata::DocumentVersionMetadata() : 
    m_idHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_contentTypeHasBeenSet(false),
    m_size(0),
    m_sizeHasBeenSet(false),
    m_signatureHasBeenSet(false),
    m_status(DocumentStatusType::NOT_SET),
    m_statusHasBeenSet(false),
    m_createdTimestampHasBeenSet(false),
    m_modifiedTimestampHasBeenSet(false),
    m_contentCreatedTimestampHasBeenSet(false),
    m_contentModifiedTimestampHasBeenSet(false),
    m_creatorIdHasBeenSet(false),
    m_thumbnailHasBeenSet(false),
    m_sourceHasBeenSet(false)
{
}

DocumentVersionMetadata::DocumentVersionMetadata(JsonView jsonValue) : 
    m_idHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_contentTypeHasBeenSet(false),
    m_size(0),
    m_sizeHasBeenSet(false),
    m_signatureHasBeenSet(false),
    m_status(DocumentStatusType::NOT_SET),
    m_statusHasBeenSet(false),
    m_createdTimestampHasBeenSet(false),
    m_modifiedTimestampHasBeenSet(false),
    m_contentCreatedTimestampHasBeenSet(false),
    m_contentModifiedTimestampHasBeenSet(false),
    m_creatorIdHasBeenSet(false),
    m_thumbnailHasBeenSet(false),
    m_sourceHasBeenSet(false)
{
  *this = jsonValue;
}

DocumentVersionMetadata& DocumentVersionMetadata::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Id"))
  {
    m_id = jsonValue.GetString("Id");

    m_idHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ContentType"))
  {
    m_contentType = jsonValue.GetString("ContentType");

    m_contentTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Size"))
  {
    m_size = jsonValue.GetInt64("Size");

    m_sizeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Signature"))
  {
    m_signature = jsonValue.GetString("Signature");

    m_signatureHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = DocumentStatusTypeMapper::GetDocumentStatusTypeForName(jsonValue.GetString("Status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreatedTimestamp"))
  {
    m_createdTimestamp = jsonValue.GetDouble("CreatedTimestamp");

    m_createdTimestampHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ModifiedTimestamp"))
  {
    m_modifiedTimestamp = jsonValue.GetDouble("ModifiedTimestamp");

    m_modifiedTimestampHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ContentCreatedTimestamp"))
  {
    m_contentCreatedTimestamp = jsonValue.GetDouble("ContentCreatedTimestamp");

    m_contentCreatedTimestampHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ContentModifiedTimestamp"))
  {
    m_contentModifiedTimestamp = jsonValue.GetDouble("ContentModifiedTimestamp");

    m_contentModifiedTimestampHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreatorId"))
  {
    m_creatorId = jsonValue.GetString("CreatorId");

    m_creatorIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Thumbnail"))
  {
    Aws::Map<Aws::String, JsonView> thumbnailJsonMap = jsonValue.GetObject("Thumbnail").GetAllObjects();
    for(auto& thumbnailItem : thumbnailJsonMap)
    {
      m_thumbnail[DocumentThumbnailTypeMapper::GetDocumentThumbnailTypeForName(thumbnailItem.first)] = thumbnailItem.second.AsString();
    }
    m_thumbnailHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Source"))
  {
    Aws::Map<Aws::String, JsonView> sourceJsonMap = jsonValue.GetObject("Source").GetAllObjects();
    for(auto& sourceItem : sourceJsonMap)
    {
      m_source[DocumentSourceTypeMapper::GetDocumentSourceTypeForName(sourceItem.first)] = sourceItem.second.AsString();
    }
    m_sourceHasBeenSet = true;
  }

  return *this;
}

JsonValue DocumentVersionMetadata::Jsonize() const
{
  JsonValue payload;

  if(m_idHasBeenSet)
  {
   payload.WithString("Id", m_id);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_contentTypeHasBeenSet)
  {
   payload.WithString("ContentType", m_contentType);

  }

  if(m_sizeHasBeenSet)
  {
   payload.WithInt64("Size", m_size);

  }

  if(m_signatureHasBeenSet)
  {
   payload.WithString("Signature", m_signature);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", DocumentStatusTypeMapper::GetNameForDocumentStatusType(m_status));
  }

  if(m_createdTimestampHasBeenSet)
  {
   payload.WithDouble("CreatedTimestamp", m_createdTimestamp.SecondsWithMSPrecision());
  }

  if(m_modifiedTimestampHasBeenSet)
  {
   payload.WithDouble("ModifiedTimestamp", m_modifiedTimestamp.SecondsWithMSPrecision());
  }

  if(m_contentCreatedTimestampHasBeenSet)
  {
   payload.WithDouble("ContentCreatedTimestamp", m_contentCreatedTimestamp.SecondsWithMSPrecision());
  }

  if(m_contentModifiedTimestampHasBeenSet)
  {
   payload.WithDouble("ContentModifiedTimestamp", m_contentModifiedTimestamp.SecondsWithMSPrecision());
  }

  if(m_creatorIdHasBeenSet)
  {
   payload.WithString("CreatorId", m_creatorId);

  }

  if(m_thumbnailHasBeenSet)
  {
   JsonValue thumbnailJsonMap;
   for(auto& thumbnailItem : m_thumbnail)
   {
     thumbnailJsonMap.WithString(DocumentThumbnailTypeMapper::GetNameForDocumentThumbnailType(thumbnailItem.first), thumbnailItem.second);
   }
   payload.WithObject("Thumbnail", std::move(thumbnailJsonMap));

  }

  if(m_sourceHasBeenSet)
  {
   JsonValue sourceJsonMap;
   for(auto& sourceItem : m_source)
   {
     sourceJsonMap.WithString(DocumentSourceTypeMapper::GetNameForDocumentSourceType(sourceItem.first), sourceItem.second);
   }
   payload.WithObject("Source", std::move(sourceJsonMap));

  }

  return payload;
}

} // namespace Model
} // namespace WorkDocs
} // namespace Aws
