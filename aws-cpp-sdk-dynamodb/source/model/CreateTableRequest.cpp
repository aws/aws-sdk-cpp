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

#include <aws/dynamodb/model/CreateTableRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::DynamoDB::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateTableRequest::CreateTableRequest() : 
    m_attributeDefinitionsHasBeenSet(false),
    m_tableNameHasBeenSet(false),
    m_keySchemaHasBeenSet(false),
    m_localSecondaryIndexesHasBeenSet(false),
    m_globalSecondaryIndexesHasBeenSet(false),
    m_billingMode(BillingMode::NOT_SET),
    m_billingModeHasBeenSet(false),
    m_provisionedThroughputHasBeenSet(false),
    m_streamSpecificationHasBeenSet(false),
    m_sSESpecificationHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

Aws::String CreateTableRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_attributeDefinitionsHasBeenSet)
  {
   Array<JsonValue> attributeDefinitionsJsonList(m_attributeDefinitions.size());
   for(unsigned attributeDefinitionsIndex = 0; attributeDefinitionsIndex < attributeDefinitionsJsonList.GetLength(); ++attributeDefinitionsIndex)
   {
     attributeDefinitionsJsonList[attributeDefinitionsIndex].AsObject(m_attributeDefinitions[attributeDefinitionsIndex].Jsonize());
   }
   payload.WithArray("AttributeDefinitions", std::move(attributeDefinitionsJsonList));

  }

  if(m_tableNameHasBeenSet)
  {
   payload.WithString("TableName", m_tableName);

  }

  if(m_keySchemaHasBeenSet)
  {
   Array<JsonValue> keySchemaJsonList(m_keySchema.size());
   for(unsigned keySchemaIndex = 0; keySchemaIndex < keySchemaJsonList.GetLength(); ++keySchemaIndex)
   {
     keySchemaJsonList[keySchemaIndex].AsObject(m_keySchema[keySchemaIndex].Jsonize());
   }
   payload.WithArray("KeySchema", std::move(keySchemaJsonList));

  }

  if(m_localSecondaryIndexesHasBeenSet)
  {
   Array<JsonValue> localSecondaryIndexesJsonList(m_localSecondaryIndexes.size());
   for(unsigned localSecondaryIndexesIndex = 0; localSecondaryIndexesIndex < localSecondaryIndexesJsonList.GetLength(); ++localSecondaryIndexesIndex)
   {
     localSecondaryIndexesJsonList[localSecondaryIndexesIndex].AsObject(m_localSecondaryIndexes[localSecondaryIndexesIndex].Jsonize());
   }
   payload.WithArray("LocalSecondaryIndexes", std::move(localSecondaryIndexesJsonList));

  }

  if(m_globalSecondaryIndexesHasBeenSet)
  {
   Array<JsonValue> globalSecondaryIndexesJsonList(m_globalSecondaryIndexes.size());
   for(unsigned globalSecondaryIndexesIndex = 0; globalSecondaryIndexesIndex < globalSecondaryIndexesJsonList.GetLength(); ++globalSecondaryIndexesIndex)
   {
     globalSecondaryIndexesJsonList[globalSecondaryIndexesIndex].AsObject(m_globalSecondaryIndexes[globalSecondaryIndexesIndex].Jsonize());
   }
   payload.WithArray("GlobalSecondaryIndexes", std::move(globalSecondaryIndexesJsonList));

  }

  if(m_billingModeHasBeenSet)
  {
   payload.WithString("BillingMode", BillingModeMapper::GetNameForBillingMode(m_billingMode));
  }

  if(m_provisionedThroughputHasBeenSet)
  {
   payload.WithObject("ProvisionedThroughput", m_provisionedThroughput.Jsonize());

  }

  if(m_streamSpecificationHasBeenSet)
  {
   payload.WithObject("StreamSpecification", m_streamSpecification.Jsonize());

  }

  if(m_sSESpecificationHasBeenSet)
  {
   payload.WithObject("SSESpecification", m_sSESpecification.Jsonize());

  }

  if(m_tagsHasBeenSet)
  {
   Array<JsonValue> tagsJsonList(m_tags.size());
   for(unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex)
   {
     tagsJsonList[tagsIndex].AsObject(m_tags[tagsIndex].Jsonize());
   }
   payload.WithArray("Tags", std::move(tagsJsonList));

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CreateTableRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "DynamoDB_20120810.CreateTable"));
  return headers;

}




