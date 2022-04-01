/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/awstransfer/model/DeleteCertificateRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Transfer::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeleteCertificateRequest::DeleteCertificateRequest() : 
    m_certificateIdHasBeenSet(false)
{
}

Aws::String DeleteCertificateRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_certificateIdHasBeenSet)
  {
   payload.WithString("CertificateId", m_certificateId);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DeleteCertificateRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "TransferService.DeleteCertificate"));
  return headers;

}




