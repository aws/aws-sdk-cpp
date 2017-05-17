/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#include <aws/ssm/model/DocumentDescription.h>
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

DocumentDescription::DocumentDescription() : 
    m_sha1HasBeenSet(false),
    m_hashHasBeenSet(false),
    m_hashType(DocumentHashType::NOT_SET),
    m_hashTypeHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_ownerHasBeenSet(false),
    m_createdDateHasBeenSet(false),
    m_status(DocumentStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_documentVersionHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_parametersHasBeenSet(false),
    m_platformTypesHasBeenSet(false),
    m_documentType(DocumentType::NOT_SET),
    m_documentTypeHasBeenSet(false),
    m_schemaVersionHasBeenSet(false),
    m_latestVersionHasBeenSet(false),
    m_defaultVersionHasBeenSet(false)
{
}

DocumentDescription::DocumentDescription(const JsonValue& jsonValue) : 
    m_sha1HasBeenSet(false),
    m_hashHasBeenSet(false),
    m_hashType(DocumentHashType::NOT_SET),
    m_hashTypeHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_ownerHasBeenSet(false),
    m_createdDateHasBeenSet(false),
    m_status(DocumentStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_documentVersionHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_parametersHasBeenSet(false),
    m_platformTypesHasBeenSet(false),
    m_documentType(DocumentType::NOT_SET),
    m_documentTypeHasBeenSet(false),
    m_schemaVersionHasBeenSet(false),
    m_latestVersionHasBeenSet(false),
    m_defaultVersionHasBeenSet(false)
{
  *this = jsonValue;
}

DocumentDescription& DocumentDescription::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("Sha1"))
  {
    m_sha1 = jsonValue.GetString("Sha1");

    m_sha1HasBeenSet = true;
  }

  if(jsonValue.ValueExists("Hash"))
  {
    m_hash = jsonValue.GetString("Hash");

    m_hashHasBeenSet = true;
  }

  if(jsonValue.ValueExists("HashType"))
  {
    m_hashType = DocumentHashTypeMapper::GetDocumentHashTypeForName(jsonValue.GetString("HashType"));

    m_hashTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Owner"))
  {
    m_owner = jsonValue.GetString("Owner");

    m_ownerHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreatedDate"))
  {
    m_createdDate = jsonValue.GetDouble("CreatedDate");

    m_createdDateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = DocumentStatusMapper::GetDocumentStatusForName(jsonValue.GetString("Status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DocumentVersion"))
  {
    m_documentVersion = jsonValue.GetString("DocumentVersion");

    m_documentVersionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Description"))
  {
    m_description = jsonValue.GetString("Description");

    m_descriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Parameters"))
  {
    Array<JsonValue> parametersJsonList = jsonValue.GetArray("Parameters");
    for(unsigned parametersIndex = 0; parametersIndex < parametersJsonList.GetLength(); ++parametersIndex)
    {
      m_parameters.push_back(parametersJsonList[parametersIndex].AsObject());
    }
    m_parametersHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PlatformTypes"))
  {
    Array<JsonValue> platformTypesJsonList = jsonValue.GetArray("PlatformTypes");
    for(unsigned platformTypesIndex = 0; platformTypesIndex < platformTypesJsonList.GetLength(); ++platformTypesIndex)
    {
      m_platformTypes.push_back(PlatformTypeMapper::GetPlatformTypeForName(platformTypesJsonList[platformTypesIndex].AsString()));
    }
    m_platformTypesHasBeenSet = true;
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

  if(jsonValue.ValueExists("LatestVersion"))
  {
    m_latestVersion = jsonValue.GetString("LatestVersion");

    m_latestVersionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DefaultVersion"))
  {
    m_defaultVersion = jsonValue.GetString("DefaultVersion");

    m_defaultVersionHasBeenSet = true;
  }

  return *this;
}

JsonValue DocumentDescription::Jsonize() const
{
  JsonValue payload;

  if(m_sha1HasBeenSet)
  {
   payload.WithString("Sha1", m_sha1);

  }

  if(m_hashHasBeenSet)
  {
   payload.WithString("Hash", m_hash);

  }

  if(m_hashTypeHasBeenSet)
  {
   payload.WithString("HashType", DocumentHashTypeMapper::GetNameForDocumentHashType(m_hashType));
  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_ownerHasBeenSet)
  {
   payload.WithString("Owner", m_owner);

  }

  if(m_createdDateHasBeenSet)
  {
   payload.WithDouble("CreatedDate", m_createdDate.SecondsWithMSPrecision());
  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", DocumentStatusMapper::GetNameForDocumentStatus(m_status));
  }

  if(m_documentVersionHasBeenSet)
  {
   payload.WithString("DocumentVersion", m_documentVersion);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_parametersHasBeenSet)
  {
   Array<JsonValue> parametersJsonList(m_parameters.size());
   for(unsigned parametersIndex = 0; parametersIndex < parametersJsonList.GetLength(); ++parametersIndex)
   {
     parametersJsonList[parametersIndex].AsObject(m_parameters[parametersIndex].Jsonize());
   }
   payload.WithArray("Parameters", std::move(parametersJsonList));

  }

  if(m_platformTypesHasBeenSet)
  {
   Array<JsonValue> platformTypesJsonList(m_platformTypes.size());
   for(unsigned platformTypesIndex = 0; platformTypesIndex < platformTypesJsonList.GetLength(); ++platformTypesIndex)
   {
     platformTypesJsonList[platformTypesIndex].AsString(PlatformTypeMapper::GetNameForPlatformType(m_platformTypes[platformTypesIndex]));
   }
   payload.WithArray("PlatformTypes", std::move(platformTypesJsonList));

  }

  if(m_documentTypeHasBeenSet)
  {
   payload.WithString("DocumentType", DocumentTypeMapper::GetNameForDocumentType(m_documentType));
  }

  if(m_schemaVersionHasBeenSet)
  {
   payload.WithString("SchemaVersion", m_schemaVersion);

  }

  if(m_latestVersionHasBeenSet)
  {
   payload.WithString("LatestVersion", m_latestVersion);

  }

  if(m_defaultVersionHasBeenSet)
  {
   payload.WithString("DefaultVersion", m_defaultVersion);

  }

  return payload;
}

} // namespace Model
} // namespace SSM
} // namespace Aws