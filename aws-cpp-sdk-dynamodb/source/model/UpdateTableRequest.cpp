/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
    m_billingMode(BillingMode::NOT_SET),
    m_billingModeHasBeenSet(false),
    m_provisionedThroughputHasBeenSet(false),
    m_globalSecondaryIndexUpdatesHasBeenSet(false),
    m_streamSpecificationHasBeenSet(false),
    m_sSESpecificationHasBeenSet(false),
    m_replicaUpdatesHasBeenSet(false),
    m_tableClass(TableClass::NOT_SET),
    m_tableClassHasBeenSet(false)
{
}

Aws::String UpdateTableRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_attributeDefinitionsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> attributeDefinitionsJsonList(m_attributeDefinitions.size());
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

  if(m_billingModeHasBeenSet)
  {
   payload.WithString("BillingMode", BillingModeMapper::GetNameForBillingMode(m_billingMode));
  }

  if(m_provisionedThroughputHasBeenSet)
  {
   payload.WithObject("ProvisionedThroughput", m_provisionedThroughput.Jsonize());

  }

  if(m_globalSecondaryIndexUpdatesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> globalSecondaryIndexUpdatesJsonList(m_globalSecondaryIndexUpdates.size());
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

  if(m_sSESpecificationHasBeenSet)
  {
   payload.WithObject("SSESpecification", m_sSESpecification.Jsonize());

  }

  if(m_replicaUpdatesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> replicaUpdatesJsonList(m_replicaUpdates.size());
   for(unsigned replicaUpdatesIndex = 0; replicaUpdatesIndex < replicaUpdatesJsonList.GetLength(); ++replicaUpdatesIndex)
   {
     replicaUpdatesJsonList[replicaUpdatesIndex].AsObject(m_replicaUpdates[replicaUpdatesIndex].Jsonize());
   }
   payload.WithArray("ReplicaUpdates", std::move(replicaUpdatesJsonList));

  }

  if(m_tableClassHasBeenSet)
  {
   payload.WithString("TableClass", TableClassMapper::GetNameForTableClass(m_tableClass));
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateTableRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "DynamoDB_20120810.UpdateTable"));
  return headers;

}




