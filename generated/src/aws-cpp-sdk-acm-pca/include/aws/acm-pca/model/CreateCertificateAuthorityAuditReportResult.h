﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class CreateCertificateAuthorityAuditReportResult
  {
  public:
    AWS_ACMPCA_API CreateCertificateAuthorityAuditReportResult();
    AWS_ACMPCA_API CreateCertificateAuthorityAuditReportResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ACMPCA_API CreateCertificateAuthorityAuditReportResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An alphanumeric string that contains a report identifier.</p>
     */
    inline const Aws::String& GetAuditReportId() const{ return m_auditReportId; }
    inline void SetAuditReportId(const Aws::String& value) { m_auditReportId = value; }
    inline void SetAuditReportId(Aws::String&& value) { m_auditReportId = std::move(value); }
    inline void SetAuditReportId(const char* value) { m_auditReportId.assign(value); }
    inline CreateCertificateAuthorityAuditReportResult& WithAuditReportId(const Aws::String& value) { SetAuditReportId(value); return *this;}
    inline CreateCertificateAuthorityAuditReportResult& WithAuditReportId(Aws::String&& value) { SetAuditReportId(std::move(value)); return *this;}
    inline CreateCertificateAuthorityAuditReportResult& WithAuditReportId(const char* value) { SetAuditReportId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The <b>key</b> that uniquely identifies the report file in your S3
     * bucket.</p>
     */
    inline const Aws::String& GetS3Key() const{ return m_s3Key; }
    inline void SetS3Key(const Aws::String& value) { m_s3Key = value; }
    inline void SetS3Key(Aws::String&& value) { m_s3Key = std::move(value); }
    inline void SetS3Key(const char* value) { m_s3Key.assign(value); }
    inline CreateCertificateAuthorityAuditReportResult& WithS3Key(const Aws::String& value) { SetS3Key(value); return *this;}
    inline CreateCertificateAuthorityAuditReportResult& WithS3Key(Aws::String&& value) { SetS3Key(std::move(value)); return *this;}
    inline CreateCertificateAuthorityAuditReportResult& WithS3Key(const char* value) { SetS3Key(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline CreateCertificateAuthorityAuditReportResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline CreateCertificateAuthorityAuditReportResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline CreateCertificateAuthorityAuditReportResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_auditReportId;

    Aws::String m_s3Key;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ACMPCA
} // namespace Aws
