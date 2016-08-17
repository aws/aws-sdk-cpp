/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/dynamodb/model/UpdateTableRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::DynamoDB::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateTableRequest::UpdateTableRequest() : 
    m_attributeDefinitionsHasBeenSet(false),
    m_tableNameHasBeenSet(false),
    m_provisionedThroughputHasBeenSet(false),
    m_globalSecondaryIndexUpdatesHasBeenSet(false),
    m_streamSpecificationHasBeenSet(false)
{
}

Aws::String UpdateTableRequest::SerializePayload() const
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

  if(m_provisionedThroughputHasBeenSet)
  {
   payload.WithObject("ProvisionedThroughput", m_provisionedThroughput.Jsonize());

  }

  if(m_globalSecondaryIndexUpdatesHasBeenSet)
  {
   Array<JsonValue> globalSecondaryIndexUpdatesJsonList(m_globalSecondaryIndexUpdates.size());
   for(unsigned globalSecondaryIndexUpdatesIndex = 0; globalSecondaryIndexUpdatesIndex < globalSecondaryIndexUpdatesJsonList.GetLength(); ++globalSecondaryIndexUpdatesIndex)
   {
     globalSecondaryIndexUpdatesJsonList[globalSecondaryIndexUpdatesIndex].AsObject(m_globalSecondaryIndexUpdates[globalSecondaryIndexUpdatesIndex].Jsonize());
   }
   payload.WithArray("GlobalSecondaryIndexUpdates", std::move(globalSecondaryIndexUpdatesJsonList));

  }

  if(m_streamSpecificationHasBeenSet)
  {
   payload.WithObject("StreamSpecification", m_streamSpecification.Jsonize());

  }

  return payload.WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateTableRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "DynamoDB_20120810.UpdateTable"));
  return headers;

}



