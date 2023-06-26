/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/acm-pca/model/GetCertificateAuthorityCertificateRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ACMPCA::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetCertificateAuthorityCertificateRequest::GetCertificateAuthorityCertificateRequest() : 
    m_certificateAuthorityArnHasBeenSet(false)
{
}

Aws::String GetCertificateAuthorityCertificateRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_certificateAuthorityArnHasBeenSet)
  {
   payload.WithString("CertificateAuthorityArn", m_certificateAuthorityArn);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection GetCertificateAuthorityCertificateRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "ACMPrivateCA.GetCertificateAuthorityCertificate"));
  return headers;

}




