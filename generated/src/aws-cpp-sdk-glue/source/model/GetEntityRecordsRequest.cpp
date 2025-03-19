/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/GetEntityRecordsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Glue::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String GetEntityRecordsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_connectionNameHasBeenSet)
  {
   payload.WithString("ConnectionName", m_connectionName);

  }

  if(m_catalogIdHasBeenSet)
  {
   payload.WithString("CatalogId", m_catalogId);

  }

  if(m_entityNameHasBeenSet)
  {
   payload.WithString("EntityName", m_entityName);

  }

  if(m_nextTokenHasBeenSet)
  {
   payload.WithString("NextToken", m_nextToken);

  }

  if(m_dataStoreApiVersionHasBeenSet)
  {
   payload.WithString("DataStoreApiVersion", m_dataStoreApiVersion);

  }

  if(m_connectionOptionsHasBeenSet)
  {
   JsonValue connectionOptionsJsonMap;
   for(auto& connectionOptionsItem : m_connectionOptions)
   {
     connectionOptionsJsonMap.WithString(connectionOptionsItem.first, connectionOptionsItem.second);
   }
   payload.WithObject("ConnectionOptions", std::move(connectionOptionsJsonMap));

  }

  if(m_filterPredicateHasBeenSet)
  {
   payload.WithString("FilterPredicate", m_filterPredicate);

  }

  if(m_limitHasBeenSet)
  {
   payload.WithInt64("Limit", m_limit);

  }

  if(m_orderByHasBeenSet)
  {
   payload.WithString("OrderBy", m_orderBy);

  }

  if(m_selectedFieldsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> selectedFieldsJsonList(m_selectedFields.size());
   for(unsigned selectedFieldsIndex = 0; selectedFieldsIndex < selectedFieldsJsonList.GetLength(); ++selectedFieldsIndex)
   {
     selectedFieldsJsonList[selectedFieldsIndex].AsString(m_selectedFields[selectedFieldsIndex]);
   }
   payload.WithArray("SelectedFields", std::move(selectedFieldsJsonList));

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection GetEntityRecordsRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSGlue.GetEntityRecords"));
  return headers;

}




