/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm/model/DocumentIdentifier.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SSM
{
namespace Model
{

DocumentIdentifier::DocumentIdentifier() : 
    m_nameHasBeenSet(false),
    m_createdDateHasBeenSet(false),
    m_displayNameHasBeenSet(false),
    m_ownerHasBeenSet(false),
    m_versionNameHasBeenSet(false),
    m_platformTypesHasBeenSet(false),
    m_documentVersionHasBeenSet(false),
    m_documentType(DocumentType::NOT_SET),
    m_documentTypeHasBeenSet(false),
    m_schemaVersionHasBeenSet(false),
    m_documentFormat(DocumentFormat::NOT_SET),
    m_documentFormatHasBeenSet(false),
    m_targetTypeHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_requiresHasBeenSet(false),
    m_reviewStatus(ReviewStatus::NOT_SET),
    m_reviewStatusHasBeenSet(false),
    m_authorHasBeenSet(false)
{
}

DocumentIdentifier::DocumentIdentifier(JsonView jsonValue) : 
    m_nameHasBeenSet(false),
    m_createdDateHasBeenSet(false),
    m_displayNameHasBeenSet(false),
    m_ownerHasBeenSet(false),
    m_versionNameHasBeenSet(false),
    m_platformTypesHasBeenSet(false),
    m_documentVersionHasBeenSet(false),
    m_documentType(DocumentType::NOT_SET),
    m_documentTypeHasBeenSet(false),
    m_schemaVersionHasBeenSet(false),
    m_documentFormat(DocumentFormat::NOT_SET),
    m_documentFormatHasBeenSet(false),
    m_targetTypeHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_requiresHasBeenSet(false),
    m_reviewStatus(ReviewStatus::NOT_SET),
    m_reviewStatusHasBeenSet(false),
    m_authorHasBeenSet(false)
{
  *this = jsonValue;
}

DocumentIdentifier& DocumentIdentifier::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreatedDate"))
  {
    m_createdDate = jsonValue.GetDouble("CreatedDate");

    m_createdDateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DisplayName"))
  {
    m_displayName = jsonValue.GetString("DisplayName");

    m_displayNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Owner"))
  {
    m_owner = jsonValue.GetString("Owner");

    m_ownerHasBeenSet = true;
  }

  if(jsonValue.ValueExists("VersionName"))
  {
    m_versionName = jsonValue.GetString("VersionName");

    m_versionNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PlatformTypes"))
  {
    Aws::Utils::Array<JsonView> platformTypesJsonList = jsonValue.GetArray("PlatformTypes");
    for(unsigned platformTypesIndex = 0; platformTypesIndex < platformTypesJsonList.GetLength(); ++platformTypesIndex)
    {
      m_platformTypes.push_back(PlatformTypeMapper::GetPlatformTypeForName(platformTypesJsonList[platformTypesIndex].AsString()));
    }
    m_platformTypesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DocumentVersion"))
  {
    m_documentVersion = jsonValue.GetString("DocumentVersion");

    m_documentVersionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DocumentType"))
  {
    m_documentType = DocumentTypeMapper::GetDocumentTypeForName(jsonValue.GetString("DocumentType"));

    m_documentTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SchemaVersion"))
  {
    m_schemaVersion = jsonValue.GetString("SchemaVersion");

    m_schemaVersionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DocumentFormat"))
  {
    m_documentFormat = DocumentFormatMapper::GetDocumentFormatForName(jsonValue.GetString("DocumentFormat"));

    m_documentFormatHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TargetType"))
  {
    m_targetType = jsonValue.GetString("TargetType");

    m_targetTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Tags"))
  {
    Aws::Utils::Array<JsonView> tagsJsonList = jsonValue.GetArray("Tags");
    for(unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex)
    {
      m_tags.push_back(tagsJsonList[tagsIndex].AsObject());
    }
    m_tagsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Requires"))
  {
    Aws::Utils::Array<JsonView> requiresJsonList = jsonValue.GetArray("Requires");
    for(unsigned requiresIndex = 0; requiresIndex < requiresJsonList.GetLength(); ++requiresIndex)
    {
      m_requires.push_back(requiresJsonList[requiresIndex].AsObject());
    }
    m_requiresHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ReviewStatus"))
  {
    m_reviewStatus = ReviewStatusMapper::GetReviewStatusForName(jsonValue.GetString("ReviewStatus"));

    m_reviewStatusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Author"))
  {
    m_author = jsonValue.GetString("Author");

    m_authorHasBeenSet = true;
  }

  return *this;
}

JsonValue DocumentIdentifier::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_createdDateHasBeenSet)
  {
   payload.WithDouble("CreatedDate", m_createdDate.SecondsWithMSPrecision());
  }

  if(m_displayNameHasBeenSet)
  {
   payload.WithString("DisplayName", m_displayName);

  }

  if(m_ownerHasBeenSet)
  {
   payload.WithString("Owner", m_owner);

  }

  if(m_versionNameHasBeenSet)
  {
   payload.WithString("VersionName", m_versionName);

  }

  if(m_platformTypesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> platformTypesJsonList(m_platformTypes.size());
   for(unsigned platformTypesIndex = 0; platformTypesIndex < platformTypesJsonList.GetLength(); ++platformTypesIndex)
   {
     platformTypesJsonList[platformTypesIndex].AsString(PlatformTypeMapper::GetNameForPlatformType(m_platformTypes[platformTypesIndex]));
   }
   payload.WithArray("PlatformTypes", std::move(platformTypesJsonList));

  }

  if(m_documentVersionHasBeenSet)
  {
   payload.WithString("DocumentVersion", m_documentVersion);

  }

  if(m_documentTypeHasBeenSet)
  {
   payload.WithString("DocumentType", DocumentTypeMapper::GetNameForDocumentType(m_documentType));
  }

  if(m_schemaVersionHasBeenSet)
  {
   payload.WithString("SchemaVersion", m_schemaVersion);

  }

  if(m_documentFormatHasBeenSet)
  {
   payload.WithString("DocumentFormat", DocumentFormatMapper::GetNameForDocumentFormat(m_documentFormat));
  }

  if(m_targetTypeHasBeenSet)
  {
   payload.WithString("TargetType", m_targetType);

  }

  if(m_tagsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> tagsJsonList(m_tags.size());
   for(unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex)
   {
     tagsJsonList[tagsIndex].AsObject(m_tags[tagsIndex].Jsonize());
   }
   payload.WithArray("Tags", std::move(tagsJsonList));

  }

  if(m_requiresHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> requiresJsonList(m_requires.size());
   for(unsigned requiresIndex = 0; requiresIndex < requiresJsonList.GetLength(); ++requiresIndex)
   {
     requiresJsonList[requiresIndex].AsObject(m_requires[requiresIndex].Jsonize());
   }
   payload.WithArray("Requires", std::move(requiresJsonList));

  }

  if(m_reviewStatusHasBeenSet)
  {
   payload.WithString("ReviewStatus", ReviewStatusMapper::GetNameForReviewStatus(m_reviewStatus));
  }

  if(m_authorHasBeenSet)
  {
   payload.WithString("Author", m_author);

  }

  return payload;
}

} // namespace Model
} // namespace SSM
} // namespace Aws
