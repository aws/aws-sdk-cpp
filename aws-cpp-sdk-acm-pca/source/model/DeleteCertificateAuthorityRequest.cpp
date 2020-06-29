/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/acm-pca/model/DeleteCertificateAuthorityRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ACMPCA::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeleteCertificateAuthorityRequest::DeleteCertificateAuthorityRequest() : 
    m_certificateAuthorityArnHasBeenSet(false),
    m_permanentDeletionTimeInDays(0),
    m_permanentDeletionTimeInDaysHasBeenSet(false)
{
}

Aws::String DeleteCertificateAuthorityRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_certificateAuthorityArnHasBeenSet)
  {
   payload.WithString("CertificateAuthorityArn", m_certificateAuthorityArn);

  }

  if(m_permanentDeletionTimeInDaysHasBeenSet)
  {
   payload.WithInteger("PermanentDeletionTimeInDays", m_permanentDeletionTimeInDays);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DeleteCertificateAuthorityRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "ACMPrivateCA.DeleteCertificateAuthority"));
  return headers;

}




