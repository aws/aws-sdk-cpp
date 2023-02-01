/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/acm/model/ExportCertificateRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/HashingUtils.h>

#include <utility>

using namespace Aws::ACM::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

ExportCertificateRequest::ExportCertificateRequest() : 
    m_certificateArnHasBeenSet(false),
    m_passphraseHasBeenSet(false)
{
}

Aws::String ExportCertificateRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_certificateArnHasBeenSet)
  {
   payload.WithString("CertificateArn", m_certificateArn);

  }

  if(m_passphraseHasBeenSet)
  {
   payload.WithString("Passphrase", HashingUtils::Base64Encode(m_passphrase));
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection ExportCertificateRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "CertificateManager.ExportCertificate"));
  return headers;

}




