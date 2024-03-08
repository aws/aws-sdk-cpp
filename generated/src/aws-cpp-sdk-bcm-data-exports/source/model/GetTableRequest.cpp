/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bcm-data-exports/model/GetTableRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::BCMDataExports::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetTableRequest::GetTableRequest() : 
    m_tableNameHasBeenSet(false),
    m_tablePropertiesHasBeenSet(false)
{
}

Aws::String GetTableRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_tableNameHasBeenSet)
  {
   payload.WithString("TableName", m_tableName);

  }

  if(m_tablePropertiesHasBeenSet)
  {
   JsonValue tablePropertiesJsonMap;
   for(auto& tablePropertiesItem : m_tableProperties)
   {
     tablePropertiesJsonMap.WithString(tablePropertiesItem.first, tablePropertiesItem.second);
   }
   payload.WithObject("TableProperties", std::move(tablePropertiesJsonMap));

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection GetTableRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSBillingAndCostManagementDataExports.GetTable"));
  return headers;

}




