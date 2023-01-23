/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/firehose/model/DeleteDeliveryStreamRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Firehose::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeleteDeliveryStreamRequest::DeleteDeliveryStreamRequest() : 
    m_deliveryStreamNameHasBeenSet(false),
    m_allowForceDelete(false),
    m_allowForceDeleteHasBeenSet(false)
{
}

Aws::String DeleteDeliveryStreamRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_deliveryStreamNameHasBeenSet)
  {
   payload.WithString("DeliveryStreamName", m_deliveryStreamName);

  }

  if(m_allowForceDeleteHasBeenSet)
  {
   payload.WithBool("AllowForceDelete", m_allowForceDelete);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DeleteDeliveryStreamRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "Firehose_20150804.DeleteDeliveryStream"));
  return headers;

}




