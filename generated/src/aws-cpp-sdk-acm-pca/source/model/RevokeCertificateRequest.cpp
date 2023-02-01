/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/acm-pca/model/RevokeCertificateRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ACMPCA::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

RevokeCertificateRequest::RevokeCertificateRequest() : 
    m_certificateAuthorityArnHasBeenSet(false),
    m_certificateSerialHasBeenSet(false),
    m_revocationReason(RevocationReason::NOT_SET),
    m_revocationReasonHasBeenSet(false)
{
}

Aws::String RevokeCertificateRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_certificateAuthorityArnHasBeenSet)
  {
   payload.WithString("CertificateAuthorityArn", m_certificateAuthorityArn);

  }

  if(m_certificateSerialHasBeenSet)
  {
   payload.WithString("CertificateSerial", m_certificateSerial);

  }

  if(m_revocationReasonHasBeenSet)
  {
   payload.WithString("RevocationReason", RevocationReasonMapper::GetNameForRevocationReason(m_revocationReason));
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection RevokeCertificateRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "ACMPrivateCA.RevokeCertificate"));
  return headers;

}




