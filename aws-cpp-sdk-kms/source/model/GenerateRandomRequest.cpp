/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kms/model/GenerateRandomRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::KMS::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GenerateRandomRequest::GenerateRandomRequest() : 
    m_numberOfBytes(0),
    m_numberOfBytesHasBeenSet(false),
    m_customKeyStoreIdHasBeenSet(false)
{
}

Aws::String GenerateRandomRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_numberOfBytesHasBeenSet)
  {
   payload.WithInteger("NumberOfBytes", m_numberOfBytes);

  }

  if(m_customKeyStoreIdHasBeenSet)
  {
   payload.WithString("CustomKeyStoreId", m_customKeyStoreId);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection GenerateRandomRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "TrentService.GenerateRandom"));
  return headers;

}




