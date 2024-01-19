/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dynamodb/model/UpdateKinesisStreamingDestinationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::DynamoDB::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateKinesisStreamingDestinationRequest::UpdateKinesisStreamingDestinationRequest() : 
    m_tableNameHasBeenSet(false),
    m_streamArnHasBeenSet(false),
    m_updateKinesisStreamingConfigurationHasBeenSet(false)
{
}

Aws::String UpdateKinesisStreamingDestinationRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_tableNameHasBeenSet)
  {
   payload.WithString("TableName", m_tableName);

  }

  if(m_streamArnHasBeenSet)
  {
   payload.WithString("StreamArn", m_streamArn);

  }

  if(m_updateKinesisStreamingConfigurationHasBeenSet)
  {
   payload.WithObject("UpdateKinesisStreamingConfiguration", m_updateKinesisStreamingConfiguration.Jsonize());

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateKinesisStreamingDestinationRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "DynamoDB_20120810.UpdateKinesisStreamingDestination"));
  return headers;

}




