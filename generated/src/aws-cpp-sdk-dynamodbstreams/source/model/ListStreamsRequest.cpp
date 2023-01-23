/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dynamodbstreams/model/ListStreamsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::DynamoDBStreams::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

ListStreamsRequest::ListStreamsRequest() : 
    m_tableNameHasBeenSet(false),
    m_limit(0),
    m_limitHasBeenSet(false),
    m_exclusiveStartStreamArnHasBeenSet(false)
{
}

Aws::String ListStreamsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_tableNameHasBeenSet)
  {
   payload.WithString("TableName", m_tableName);

  }

  if(m_limitHasBeenSet)
  {
   payload.WithInteger("Limit", m_limit);

  }

  if(m_exclusiveStartStreamArnHasBeenSet)
  {
   payload.WithString("ExclusiveStartStreamArn", m_exclusiveStartStreamArn);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection ListStreamsRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "DynamoDBStreams_20120810.ListStreams"));
  return headers;

}




