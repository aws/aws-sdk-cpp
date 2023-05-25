/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/frauddetector/model/PutKMSEncryptionKeyRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::FraudDetector::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

PutKMSEncryptionKeyRequest::PutKMSEncryptionKeyRequest() : 
    m_kmsEncryptionKeyArnHasBeenSet(false)
{
}

Aws::String PutKMSEncryptionKeyRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_kmsEncryptionKeyArnHasBeenSet)
  {
   payload.WithString("kmsEncryptionKeyArn", m_kmsEncryptionKeyArn);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection PutKMSEncryptionKeyRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSHawksNestServiceFacade.PutKMSEncryptionKey"));
  return headers;

}




