/**
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
    AWS_ACMPCA_API CreateCertificateAuthorityAuditReportResult() = default;
    AWS_ACMPCA_API CreateCertificateAuthorityAuditReportResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ACMPCA_API CreateCertificateAuthorityAuditReportResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An alphanumeric string that contains a report identifier.</p>
     */
    inline const Aws::String& GetAuditReportId() const { return m_auditReportId; }
    template<typename AuditReportIdT = Aws::String>
    void SetAuditReportId(AuditReportIdT&& value) { m_auditReportIdHasBeenSet = true; m_auditReportId = std::forward<AuditReportIdT>(value); }
    template<typename AuditReportIdT = Aws::String>
    CreateCertificateAuthorityAuditReportResult& WithAuditReportId(AuditReportIdT&& value) { SetAuditReportId(std::forward<AuditReportIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The <b>key</b> that uniquely identifies the report file in your S3
     * bucket.</p>
     */
    inline const Aws::String& GetS3Key() const { return m_s3Key; }
    template<typename S3KeyT = Aws::String>
    void SetS3Key(S3KeyT&& value) { m_s3KeyHasBeenSet = true; m_s3Key = std::forward<S3KeyT>(value); }
    template<typename S3KeyT = Aws::String>
    CreateCertificateAuthorityAuditReportResult& WithS3Key(S3KeyT&& value) { SetS3Key(std::forward<S3KeyT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    CreateCertificateAuthorityAuditReportResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_auditReportId;
    bool m_auditReportIdHasBeenSet = false;

    Aws::String m_s3Key;
    bool m_s3KeyHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ACMPCA
} // namespace Aws
