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
#include <aws/acm-pca/model/AuditReportStatus.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
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
  class AWS_ACMPCA_API DescribeCertificateAuthorityAuditReportResult
  {
  public:
    DescribeCertificateAuthorityAuditReportResult();
    DescribeCertificateAuthorityAuditReportResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DescribeCertificateAuthorityAuditReportResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Specifies whether report creation is in progress, has succeeded, or has
     * failed.</p>
     */
    inline const AuditReportStatus& GetAuditReportStatus() const{ return m_auditReportStatus; }

    /**
     * <p>Specifies whether report creation is in progress, has succeeded, or has
     * failed.</p>
     */
    inline void SetAuditReportStatus(const AuditReportStatus& value) { m_auditReportStatus = value; }

    /**
     * <p>Specifies whether report creation is in progress, has succeeded, or has
     * failed.</p>
     */
    inline void SetAuditReportStatus(AuditReportStatus&& value) { m_auditReportStatus = std::move(value); }

    /**
     * <p>Specifies whether report creation is in progress, has succeeded, or has
     * failed.</p>
     */
    inline DescribeCertificateAuthorityAuditReportResult& WithAuditReportStatus(const AuditReportStatus& value) { SetAuditReportStatus(value); return *this;}

    /**
     * <p>Specifies whether report creation is in progress, has succeeded, or has
     * failed.</p>
     */
    inline DescribeCertificateAuthorityAuditReportResult& WithAuditReportStatus(AuditReportStatus&& value) { SetAuditReportStatus(std::move(value)); return *this;}


    /**
     * <p>Name of the S3 bucket that contains the report.</p>
     */
    inline const Aws::String& GetS3BucketName() const{ return m_s3BucketName; }

    /**
     * <p>Name of the S3 bucket that contains the report.</p>
     */
    inline void SetS3BucketName(const Aws::String& value) { m_s3BucketName = value; }

    /**
     * <p>Name of the S3 bucket that contains the report.</p>
     */
    inline void SetS3BucketName(Aws::String&& value) { m_s3BucketName = std::move(value); }

    /**
     * <p>Name of the S3 bucket that contains the report.</p>
     */
    inline void SetS3BucketName(const char* value) { m_s3BucketName.assign(value); }

    /**
     * <p>Name of the S3 bucket that contains the report.</p>
     */
    inline DescribeCertificateAuthorityAuditReportResult& WithS3BucketName(const Aws::String& value) { SetS3BucketName(value); return *this;}

    /**
     * <p>Name of the S3 bucket that contains the report.</p>
     */
    inline DescribeCertificateAuthorityAuditReportResult& WithS3BucketName(Aws::String&& value) { SetS3BucketName(std::move(value)); return *this;}

    /**
     * <p>Name of the S3 bucket that contains the report.</p>
     */
    inline DescribeCertificateAuthorityAuditReportResult& WithS3BucketName(const char* value) { SetS3BucketName(value); return *this;}


    /**
     * <p>S3 <b>key</b> that uniquely identifies the report file in your S3 bucket.</p>
     */
    inline const Aws::String& GetS3Key() const{ return m_s3Key; }

    /**
     * <p>S3 <b>key</b> that uniquely identifies the report file in your S3 bucket.</p>
     */
    inline void SetS3Key(const Aws::String& value) { m_s3Key = value; }

    /**
     * <p>S3 <b>key</b> that uniquely identifies the report file in your S3 bucket.</p>
     */
    inline void SetS3Key(Aws::String&& value) { m_s3Key = std::move(value); }

    /**
     * <p>S3 <b>key</b> that uniquely identifies the report file in your S3 bucket.</p>
     */
    inline void SetS3Key(const char* value) { m_s3Key.assign(value); }

    /**
     * <p>S3 <b>key</b> that uniquely identifies the report file in your S3 bucket.</p>
     */
    inline DescribeCertificateAuthorityAuditReportResult& WithS3Key(const Aws::String& value) { SetS3Key(value); return *this;}

    /**
     * <p>S3 <b>key</b> that uniquely identifies the report file in your S3 bucket.</p>
     */
    inline DescribeCertificateAuthorityAuditReportResult& WithS3Key(Aws::String&& value) { SetS3Key(std::move(value)); return *this;}

    /**
     * <p>S3 <b>key</b> that uniquely identifies the report file in your S3 bucket.</p>
     */
    inline DescribeCertificateAuthorityAuditReportResult& WithS3Key(const char* value) { SetS3Key(value); return *this;}


    /**
     * <p>The date and time at which the report was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }

    /**
     * <p>The date and time at which the report was created.</p>
     */
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAt = value; }

    /**
     * <p>The date and time at which the report was created.</p>
     */
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAt = std::move(value); }

    /**
     * <p>The date and time at which the report was created.</p>
     */
    inline DescribeCertificateAuthorityAuditReportResult& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}

    /**
     * <p>The date and time at which the report was created.</p>
     */
    inline DescribeCertificateAuthorityAuditReportResult& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}

  private:

    AuditReportStatus m_auditReportStatus;

    Aws::String m_s3BucketName;

    Aws::String m_s3Key;

    Aws::Utils::DateTime m_createdAt;
  };

} // namespace Model
} // namespace ACMPCA
} // namespace Aws
