/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/acm-pca/model/DescribeCertificateAuthorityAuditReportRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ACMPCA::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DescribeCertificateAuthorityAuditReportRequest::DescribeCertificateAuthorityAuditReportRequest() : 
    m_certificateAuthorityArnHasBeenSet(false),
    m_auditReportIdHasBeenSet(false)
{
}

Aws::String DescribeCertificateAuthorityAuditReportRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_certificateAuthorityArnHasBeenSet)
  {
   payload.WithString("CertificateAuthorityArn", m_certificateAuthorityArn);

  }

  if(m_auditReportIdHasBeenSet)
  {
   payload.WithString("AuditReportId", m_auditReportId);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DescribeCertificateAuthorityAuditReportRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "ACMPrivateCA.DescribeCertificateAuthorityAuditReport"));
  return headers;

}




