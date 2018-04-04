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

#pragma once
#include <aws/acm-pca/ACMPCA_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace ACMPCA
{
namespace Model
{
  class AWS_ACMPCA_API CreateCertificateAuthorityAuditReportResult
  {
  public:
    CreateCertificateAuthorityAuditReportResult();
    CreateCertificateAuthorityAuditReportResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    CreateCertificateAuthorityAuditReportResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>An alphanumeric string that contains a report identifier.</p>
     */
    inline const Aws::String& GetAuditReportId() const{ return m_auditReportId; }

    /**
     * <p>An alphanumeric string that contains a report identifier.</p>
     */
    inline void SetAuditReportId(const Aws::String& value) { m_auditReportId = value; }

    /**
     * <p>An alphanumeric string that contains a report identifier.</p>
     */
    inline void SetAuditReportId(Aws::String&& value) { m_auditReportId = std::move(value); }

    /**
     * <p>An alphanumeric string that contains a report identifier.</p>
     */
    inline void SetAuditReportId(const char* value) { m_auditReportId.assign(value); }

    /**
     * <p>An alphanumeric string that contains a report identifier.</p>
     */
    inline CreateCertificateAuthorityAuditReportResult& WithAuditReportId(const Aws::String& value) { SetAuditReportId(value); return *this;}

    /**
     * <p>An alphanumeric string that contains a report identifier.</p>
     */
    inline CreateCertificateAuthorityAuditReportResult& WithAuditReportId(Aws::String&& value) { SetAuditReportId(std::move(value)); return *this;}

    /**
     * <p>An alphanumeric string that contains a report identifier.</p>
     */
    inline CreateCertificateAuthorityAuditReportResult& WithAuditReportId(const char* value) { SetAuditReportId(value); return *this;}


    /**
     * <p>The <b>key</b> that uniquely identifies the report file in your S3
     * bucket.</p>
     */
    inline const Aws::String& GetS3Key() const{ return m_s3Key; }

    /**
     * <p>The <b>key</b> that uniquely identifies the report file in your S3
     * bucket.</p>
     */
    inline void SetS3Key(const Aws::String& value) { m_s3Key = value; }

    /**
     * <p>The <b>key</b> that uniquely identifies the report file in your S3
     * bucket.</p>
     */
    inline void SetS3Key(Aws::String&& value) { m_s3Key = std::move(value); }

    /**
     * <p>The <b>key</b> that uniquely identifies the report file in your S3
     * bucket.</p>
     */
    inline void SetS3Key(const char* value) { m_s3Key.assign(value); }

    /**
     * <p>The <b>key</b> that uniquely identifies the report file in your S3
     * bucket.</p>
     */
    inline CreateCertificateAuthorityAuditReportResult& WithS3Key(const Aws::String& value) { SetS3Key(value); return *this;}

    /**
     * <p>The <b>key</b> that uniquely identifies the report file in your S3
     * bucket.</p>
     */
    inline CreateCertificateAuthorityAuditReportResult& WithS3Key(Aws::String&& value) { SetS3Key(std::move(value)); return *this;}

    /**
     * <p>The <b>key</b> that uniquely identifies the report file in your S3
     * bucket.</p>
     */
    inline CreateCertificateAuthorityAuditReportResult& WithS3Key(const char* value) { SetS3Key(value); return *this;}

  private:

    Aws::String m_auditReportId;

    Aws::String m_s3Key;
  };

} // namespace Model
} // namespace ACMPCA
} // namespace Aws
