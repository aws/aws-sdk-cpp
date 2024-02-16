/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/firehose/model/GetKinesisStreamRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Firehose::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetKinesisStreamRequest::GetKinesisStreamRequest() : 
    m_deliveryStreamARNHasBeenSet(false)
{
}

Aws::String GetKinesisStreamRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_deliveryStreamARNHasBeenSet)
  {
   payload.WithString("DeliveryStreamARN", m_deliveryStreamARN);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection GetKinesisStreamRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "Firehose_20150804.GetKinesisStream"));
  return headers;

}




