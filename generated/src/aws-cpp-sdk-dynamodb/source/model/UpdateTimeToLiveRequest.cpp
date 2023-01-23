/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dynamodb/model/UpdateTimeToLiveRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::DynamoDB::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateTimeToLiveRequest::UpdateTimeToLiveRequest() : 
    m_tableNameHasBeenSet(false),
    m_timeToLiveSpecificationHasBeenSet(false)
{
}

Aws::String UpdateTimeToLiveRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_tableNameHasBeenSet)
  {
   payload.WithString("TableName", m_tableName);

  }

  if(m_timeToLiveSpecificationHasBeenSet)
  {
   payload.WithObject("TimeToLiveSpecification", m_timeToLiveSpecification.Jsonize());

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateTimeToLiveRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "DynamoDB_20120810.UpdateTimeToLive"));
  return headers;

}




