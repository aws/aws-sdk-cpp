/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ds/model/DescribeCertificateRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::DirectoryService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DescribeCertificateRequest::DescribeCertificateRequest() : 
    m_directoryIdHasBeenSet(false),
    m_certificateIdHasBeenSet(false)
{
}

Aws::String DescribeCertificateRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_directoryIdHasBeenSet)
  {
   payload.WithString("DirectoryId", m_directoryId);

  }

  if(m_certificateIdHasBeenSet)
  {
   payload.WithString("CertificateId", m_certificateId);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DescribeCertificateRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "DirectoryService_20150416.DescribeCertificate"));
  return headers;

}




