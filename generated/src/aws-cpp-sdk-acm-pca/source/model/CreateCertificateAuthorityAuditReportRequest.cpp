/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/acm-pca/model/CreateCertificateAuthorityAuditReportRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ACMPCA::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateCertificateAuthorityAuditReportRequest::CreateCertificateAuthorityAuditReportRequest() : 
    m_certificateAuthorityArnHasBeenSet(false),
    m_s3BucketNameHasBeenSet(false),
    m_auditReportResponseFormat(AuditReportResponseFormat::NOT_SET),
    m_auditReportResponseFormatHasBeenSet(false)
{
}

Aws::String CreateCertificateAuthorityAuditReportRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_certificateAuthorityArnHasBeenSet)
  {
   payload.WithString("CertificateAuthorityArn", m_certificateAuthorityArn);

  }

  if(m_s3BucketNameHasBeenSet)
  {
   payload.WithString("S3BucketName", m_s3BucketName);

  }

  if(m_auditReportResponseFormatHasBeenSet)
  {
   payload.WithString("AuditReportResponseFormat", AuditReportResponseFormatMapper::GetNameForAuditReportResponseFormat(m_auditReportResponseFormat));
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CreateCertificateAuthorityAuditReportRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "ACMPrivateCA.CreateCertificateAuthorityAuditReport"));
  return headers;

}




