/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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

  return payload.WriteReadable();
}

Aws::Http::HeaderValueCollection CreateCertificateAuthorityAuditReportRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "ACMPrivateCA.CreateCertificateAuthorityAuditReport"));
  return headers;

}




