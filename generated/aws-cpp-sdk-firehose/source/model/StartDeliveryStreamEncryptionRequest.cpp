/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/firehose/model/StartDeliveryStreamEncryptionRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Firehose::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

StartDeliveryStreamEncryptionRequest::StartDeliveryStreamEncryptionRequest() : 
    m_deliveryStreamNameHasBeenSet(false),
    m_deliveryStreamEncryptionConfigurationInputHasBeenSet(false)
{
}

Aws::String StartDeliveryStreamEncryptionRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_deliveryStreamNameHasBeenSet)
  {
   payload.WithString("DeliveryStreamName", m_deliveryStreamName);

  }

  if(m_deliveryStreamEncryptionConfigurationInputHasBeenSet)
  {
   payload.WithObject("DeliveryStreamEncryptionConfigurationInput", m_deliveryStreamEncryptionConfigurationInput.Jsonize());

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection StartDeliveryStreamEncryptionRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "Firehose_20150804.StartDeliveryStreamEncryption"));
  return headers;

}




