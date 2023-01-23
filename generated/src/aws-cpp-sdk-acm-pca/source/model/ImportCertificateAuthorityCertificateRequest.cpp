/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/acm-pca/model/ImportCertificateAuthorityCertificateRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/HashingUtils.h>

#include <utility>

using namespace Aws::ACMPCA::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

ImportCertificateAuthorityCertificateRequest::ImportCertificateAuthorityCertificateRequest() : 
    m_certificateAuthorityArnHasBeenSet(false),
    m_certificateHasBeenSet(false),
    m_certificateChainHasBeenSet(false)
{
}

Aws::String ImportCertificateAuthorityCertificateRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_certificateAuthorityArnHasBeenSet)
  {
   payload.WithString("CertificateAuthorityArn", m_certificateAuthorityArn);

  }

  if(m_certificateHasBeenSet)
  {
   payload.WithString("Certificate", HashingUtils::Base64Encode(m_certificate));
  }

  if(m_certificateChainHasBeenSet)
  {
   payload.WithString("CertificateChain", HashingUtils::Base64Encode(m_certificateChain));
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection ImportCertificateAuthorityCertificateRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "ACMPrivateCA.ImportCertificateAuthorityCertificate"));
  return headers;

}




