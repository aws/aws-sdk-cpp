/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dms/model/CreateMigrationProjectRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::DatabaseMigrationService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateMigrationProjectRequest::CreateMigrationProjectRequest() : 
    m_migrationProjectNameHasBeenSet(false),
    m_sourceDataProviderDescriptorsHasBeenSet(false),
    m_targetDataProviderDescriptorsHasBeenSet(false),
    m_instanceProfileIdentifierHasBeenSet(false),
    m_transformationRulesHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_schemaConversionApplicationAttributesHasBeenSet(false)
{
}

Aws::String CreateMigrationProjectRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_migrationProjectNameHasBeenSet)
  {
   payload.WithString("MigrationProjectName", m_migrationProjectName);

  }

  if(m_sourceDataProviderDescriptorsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> sourceDataProviderDescriptorsJsonList(m_sourceDataProviderDescriptors.size());
   for(unsigned sourceDataProviderDescriptorsIndex = 0; sourceDataProviderDescriptorsIndex < sourceDataProviderDescriptorsJsonList.GetLength(); ++sourceDataProviderDescriptorsIndex)
   {
     sourceDataProviderDescriptorsJsonList[sourceDataProviderDescriptorsIndex].AsObject(m_sourceDataProviderDescriptors[sourceDataProviderDescriptorsIndex].Jsonize());
   }
   payload.WithArray("SourceDataProviderDescriptors", std::move(sourceDataProviderDescriptorsJsonList));

  }

  if(m_targetDataProviderDescriptorsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> targetDataProviderDescriptorsJsonList(m_targetDataProviderDescriptors.size());
   for(unsigned targetDataProviderDescriptorsIndex = 0; targetDataProviderDescriptorsIndex < targetDataProviderDescriptorsJsonList.GetLength(); ++targetDataProviderDescriptorsIndex)
   {
     targetDataProviderDescriptorsJsonList[targetDataProviderDescriptorsIndex].AsObject(m_targetDataProviderDescriptors[targetDataProviderDescriptorsIndex].Jsonize());
   }
   payload.WithArray("TargetDataProviderDescriptors", std::move(targetDataProviderDescriptorsJsonList));

  }

  if(m_instanceProfileIdentifierHasBeenSet)
  {
   payload.WithString("InstanceProfileIdentifier", m_instanceProfileIdentifier);

  }

  if(m_transformationRulesHasBeenSet)
  {
   payload.WithString("TransformationRules", m_transformationRules);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

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

  if(m_schemaConversionApplicationAttributesHasBeenSet)
  {
   payload.WithObject("SchemaConversionApplicationAttributes", m_schemaConversionApplicationAttributes.Jsonize());

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CreateMigrationProjectRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AmazonDMSv20160101.CreateMigrationProject"));
  return headers;

}




