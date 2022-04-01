/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/firehose/model/StopDeliveryStreamEncryptionRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Firehose::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

StopDeliveryStreamEncryptionRequest::StopDeliveryStreamEncryptionRequest() : 
    m_deliveryStreamNameHasBeenSet(false)
{
}

Aws::String StopDeliveryStreamEncryptionRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_deliveryStreamNameHasBeenSet)
  {
   payload.WithString("DeliveryStreamName", m_deliveryStreamName);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection StopDeliveryStreamEncryptionRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "Firehose_20150804.StopDeliveryStreamEncryption"));
  return headers;

}




