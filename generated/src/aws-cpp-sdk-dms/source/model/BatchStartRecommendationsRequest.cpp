/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dms/model/BatchStartRecommendationsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::DatabaseMigrationService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

BatchStartRecommendationsRequest::BatchStartRecommendationsRequest() : 
    m_dataHasBeenSet(false)
{
}

Aws::String BatchStartRecommendationsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_dataHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> dataJsonList(m_data.size());
   for(unsigned dataIndex = 0; dataIndex < dataJsonList.GetLength(); ++dataIndex)
   {
     dataJsonList[dataIndex].AsObject(m_data[dataIndex].Jsonize());
   }
   payload.WithArray("Data", std::move(dataJsonList));

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection BatchStartRecommendationsRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AmazonDMSv20160101.BatchStartRecommendations"));
  return headers;

}




