﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/acm-pca/model/IssueCertificateRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/HashingUtils.h>

#include <utility>

using namespace Aws::ACMPCA::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String IssueCertificateRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_apiPassthroughHasBeenSet)
  {
   payload.WithObject("ApiPassthrough", m_apiPassthrough.Jsonize());

  }

  if(m_certificateAuthorityArnHasBeenSet)
  {
   payload.WithString("CertificateAuthorityArn", m_certificateAuthorityArn);

  }

  if(m_csrHasBeenSet)
  {
   payload.WithString("Csr", HashingUtils::Base64Encode(m_csr));
  }

  if(m_signingAlgorithmHasBeenSet)
  {
   payload.WithString("SigningAlgorithm", SigningAlgorithmMapper::GetNameForSigningAlgorithm(m_signingAlgorithm));
  }

  if(m_templateArnHasBeenSet)
  {
   payload.WithString("TemplateArn", m_templateArn);

  }

  if(m_validityHasBeenSet)
  {
   payload.WithObject("Validity", m_validity.Jsonize());

  }

  if(m_validityNotBeforeHasBeenSet)
  {
   payload.WithObject("ValidityNotBefore", m_validityNotBefore.Jsonize());

  }

  if(m_idempotencyTokenHasBeenSet)
  {
   payload.WithString("IdempotencyToken", m_idempotencyToken);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection IssueCertificateRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "ACMPrivateCA.IssueCertificate"));
  return headers;

}




