/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class DescribeCertificateAuthorityAuditReportResult
  {
  public:
    AWS_ACMPCA_API DescribeCertificateAuthorityAuditReportResult();
    AWS_ACMPCA_API DescribeCertificateAuthorityAuditReportResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ACMPCA_API DescribeCertificateAuthorityAuditReportResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Specifies whether report creation is in progress, has succeeded, or has
     * failed.</p>
     */
    inline const AuditReportStatus& GetAuditReportStatus() const{ return m_auditReportStatus; }
    inline void SetAuditReportStatus(const AuditReportStatus& value) { m_auditReportStatus = value; }
    inline void SetAuditReportStatus(AuditReportStatus&& value) { m_auditReportStatus = std::move(value); }
    inline DescribeCertificateAuthorityAuditReportResult& WithAuditReportStatus(const AuditReportStatus& value) { SetAuditReportStatus(value); return *this;}
    inline DescribeCertificateAuthorityAuditReportResult& WithAuditReportStatus(AuditReportStatus&& value) { SetAuditReportStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Name of the S3 bucket that contains the report.</p>
     */
    inline const Aws::String& GetS3BucketName() const{ return m_s3BucketName; }
    inline void SetS3BucketName(const Aws::String& value) { m_s3BucketName = value; }
    inline void SetS3BucketName(Aws::String&& value) { m_s3BucketName = std::move(value); }
    inline void SetS3BucketName(const char* value) { m_s3BucketName.assign(value); }
    inline DescribeCertificateAuthorityAuditReportResult& WithS3BucketName(const Aws::String& value) { SetS3BucketName(value); return *this;}
    inline DescribeCertificateAuthorityAuditReportResult& WithS3BucketName(Aws::String&& value) { SetS3BucketName(std::move(value)); return *this;}
    inline DescribeCertificateAuthorityAuditReportResult& WithS3BucketName(const char* value) { SetS3BucketName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>S3 <b>key</b> that uniquely identifies the report file in your S3 bucket.</p>
     */
    inline const Aws::String& GetS3Key() const{ return m_s3Key; }
    inline void SetS3Key(const Aws::String& value) { m_s3Key = value; }
    inline void SetS3Key(Aws::String&& value) { m_s3Key = std::move(value); }
    inline void SetS3Key(const char* value) { m_s3Key.assign(value); }
    inline DescribeCertificateAuthorityAuditReportResult& WithS3Key(const Aws::String& value) { SetS3Key(value); return *this;}
    inline DescribeCertificateAuthorityAuditReportResult& WithS3Key(Aws::String&& value) { SetS3Key(std::move(value)); return *this;}
    inline DescribeCertificateAuthorityAuditReportResult& WithS3Key(const char* value) { SetS3Key(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time at which the report was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAt = value; }
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAt = std::move(value); }
    inline DescribeCertificateAuthorityAuditReportResult& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}
    inline DescribeCertificateAuthorityAuditReportResult& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DescribeCertificateAuthorityAuditReportResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DescribeCertificateAuthorityAuditReportResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DescribeCertificateAuthorityAuditReportResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    AuditReportStatus m_auditReportStatus;

    Aws::String m_s3BucketName;

    Aws::String m_s3Key;

    Aws::Utils::DateTime m_createdAt;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ACMPCA
} // namespace Aws
