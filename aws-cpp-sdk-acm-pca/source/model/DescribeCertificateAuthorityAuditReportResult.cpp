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

#include <aws/acm-pca/model/DescribeCertificateAuthorityAuditReportResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::ACMPCA::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeCertificateAuthorityAuditReportResult::DescribeCertificateAuthorityAuditReportResult() : 
    m_auditReportStatus(AuditReportStatus::NOT_SET)
{
}

DescribeCertificateAuthorityAuditReportResult::DescribeCertificateAuthorityAuditReportResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_auditReportStatus(AuditReportStatus::NOT_SET)
{
  *this = result;
}

DescribeCertificateAuthorityAuditReportResult& DescribeCertificateAuthorityAuditReportResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  const JsonValue& jsonValue = result.GetPayload();
  if(jsonValue.ValueExists("AuditReportStatus"))
  {
    m_auditReportStatus = AuditReportStatusMapper::GetAuditReportStatusForName(jsonValue.GetString("AuditReportStatus"));

  }

  if(jsonValue.ValueExists("S3BucketName"))
  {
    m_s3BucketName = jsonValue.GetString("S3BucketName");

  }

  if(jsonValue.ValueExists("S3Key"))
  {
    m_s3Key = jsonValue.GetString("S3Key");

  }

  if(jsonValue.ValueExists("CreatedAt"))
  {
    m_createdAt = jsonValue.GetDouble("CreatedAt");

  }



  return *this;
}
