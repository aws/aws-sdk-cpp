/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dms/model/ModifyMigrationProjectRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::DatabaseMigrationService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

ModifyMigrationProjectRequest::ModifyMigrationProjectRequest() : 
    m_migrationProjectIdentifierHasBeenSet(false),
    m_migrationProjectNameHasBeenSet(false),
    m_sourceDataProviderDescriptorsHasBeenSet(false),
    m_targetDataProviderDescriptorsHasBeenSet(false),
    m_instanceProfileIdentifierHasBeenSet(false),
    m_transformationRulesHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_schemaConversionApplicationAttributesHasBeenSet(false)
{
}

Aws::String ModifyMigrationProjectRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_migrationProjectIdentifierHasBeenSet)
  {
   payload.WithString("MigrationProjectIdentifier", m_migrationProjectIdentifier);

  }

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

  if(m_schemaConversionApplicationAttributesHasBeenSet)
  {
   payload.WithObject("SchemaConversionApplicationAttributes", m_schemaConversionApplicationAttributes.Jsonize());

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection ModifyMigrationProjectRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AmazonDMSv20160101.ModifyMigrationProject"));
  return headers;

}




