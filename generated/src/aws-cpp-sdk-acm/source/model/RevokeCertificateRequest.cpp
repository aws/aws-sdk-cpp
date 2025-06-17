/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/acm/model/RevokeCertificateRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ACM::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String RevokeCertificateRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_certificateArnHasBeenSet)
  {
   payload.WithString("CertificateArn", m_certificateArn);

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
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "CertificateManager.RevokeCertificate"));
  return headers;

}




