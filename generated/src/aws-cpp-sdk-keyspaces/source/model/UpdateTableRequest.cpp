/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/keyspaces/model/UpdateTableRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Keyspaces::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateTableRequest::UpdateTableRequest() : 
    m_keyspaceNameHasBeenSet(false),
    m_tableNameHasBeenSet(false),
    m_addColumnsHasBeenSet(false),
    m_capacitySpecificationHasBeenSet(false),
    m_encryptionSpecificationHasBeenSet(false),
    m_pointInTimeRecoveryHasBeenSet(false),
    m_ttlHasBeenSet(false),
    m_defaultTimeToLive(0),
    m_defaultTimeToLiveHasBeenSet(false)
{
}

Aws::String UpdateTableRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_keyspaceNameHasBeenSet)
  {
   payload.WithString("keyspaceName", m_keyspaceName);

  }

  if(m_tableNameHasBeenSet)
  {
   payload.WithString("tableName", m_tableName);

  }

  if(m_addColumnsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> addColumnsJsonList(m_addColumns.size());
   for(unsigned addColumnsIndex = 0; addColumnsIndex < addColumnsJsonList.GetLength(); ++addColumnsIndex)
   {
     addColumnsJsonList[addColumnsIndex].AsObject(m_addColumns[addColumnsIndex].Jsonize());
   }
   payload.WithArray("addColumns", std::move(addColumnsJsonList));

  }

  if(m_capacitySpecificationHasBeenSet)
  {
   payload.WithObject("capacitySpecification", m_capacitySpecification.Jsonize());

  }

  if(m_encryptionSpecificationHasBeenSet)
  {
   payload.WithObject("encryptionSpecification", m_encryptionSpecification.Jsonize());

  }

  if(m_pointInTimeRecoveryHasBeenSet)
  {
   payload.WithObject("pointInTimeRecovery", m_pointInTimeRecovery.Jsonize());

  }

  if(m_ttlHasBeenSet)
  {
   payload.WithObject("ttl", m_ttl.Jsonize());

  }

  if(m_defaultTimeToLiveHasBeenSet)
  {
   payload.WithInteger("defaultTimeToLive", m_defaultTimeToLive);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateTableRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "KeyspacesService.UpdateTable"));
  return headers;

}




