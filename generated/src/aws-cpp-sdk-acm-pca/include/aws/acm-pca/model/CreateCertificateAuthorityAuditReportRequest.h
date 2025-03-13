/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/acm-pca/ACMPCA_EXPORTS.h>
#include <aws/acm-pca/ACMPCARequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/acm-pca/model/AuditReportResponseFormat.h>
#include <utility>

namespace Aws
{
namespace ACMPCA
{
namespace Model
{

  /**
   */
  class CreateCertificateAuthorityAuditReportRequest : public ACMPCARequest
  {
  public:
    AWS_ACMPCA_API CreateCertificateAuthorityAuditReportRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateCertificateAuthorityAuditReport"; }

    AWS_ACMPCA_API Aws::String SerializePayload() const override;

    AWS_ACMPCA_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the CA to be audited. This is of the
     * form:</p> <p>
     * <code>arn:aws:acm-pca:<i>region</i>:<i>account</i>:certificate-authority/<i>12345678-1234-1234-1234-123456789012</i>
     * </code>.</p>
     */
    inline const Aws::String& GetCertificateAuthorityArn() const { return m_certificateAuthorityArn; }
    inline bool CertificateAuthorityArnHasBeenSet() const { return m_certificateAuthorityArnHasBeenSet; }
    template<typename CertificateAuthorityArnT = Aws::String>
    void SetCertificateAuthorityArn(CertificateAuthorityArnT&& value) { m_certificateAuthorityArnHasBeenSet = true; m_certificateAuthorityArn = std::forward<CertificateAuthorityArnT>(value); }
    template<typename CertificateAuthorityArnT = Aws::String>
    CreateCertificateAuthorityAuditReportRequest& WithCertificateAuthorityArn(CertificateAuthorityArnT&& value) { SetCertificateAuthorityArn(std::forward<CertificateAuthorityArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the S3 bucket that will contain the audit report.</p>
     */
    inline const Aws::String& GetS3BucketName() const { return m_s3BucketName; }
    inline bool S3BucketNameHasBeenSet() const { return m_s3BucketNameHasBeenSet; }
    template<typename S3BucketNameT = Aws::String>
    void SetS3BucketName(S3BucketNameT&& value) { m_s3BucketNameHasBeenSet = true; m_s3BucketName = std::forward<S3BucketNameT>(value); }
    template<typename S3BucketNameT = Aws::String>
    CreateCertificateAuthorityAuditReportRequest& WithS3BucketName(S3BucketNameT&& value) { SetS3BucketName(std::forward<S3BucketNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The format in which to create the report. This can be either <b>JSON</b> or
     * <b>CSV</b>.</p>
     */
    inline AuditReportResponseFormat GetAuditReportResponseFormat() const { return m_auditReportResponseFormat; }
    inline bool AuditReportResponseFormatHasBeenSet() const { return m_auditReportResponseFormatHasBeenSet; }
    inline void SetAuditReportResponseFormat(AuditReportResponseFormat value) { m_auditReportResponseFormatHasBeenSet = true; m_auditReportResponseFormat = value; }
    inline CreateCertificateAuthorityAuditReportRequest& WithAuditReportResponseFormat(AuditReportResponseFormat value) { SetAuditReportResponseFormat(value); return *this;}
    ///@}
  private:

    Aws::String m_certificateAuthorityArn;
    bool m_certificateAuthorityArnHasBeenSet = false;

    Aws::String m_s3BucketName;
    bool m_s3BucketNameHasBeenSet = false;

    AuditReportResponseFormat m_auditReportResponseFormat{AuditReportResponseFormat::NOT_SET};
    bool m_auditReportResponseFormatHasBeenSet = false;
  };

} // namespace Model
} // namespace ACMPCA
} // namespace Aws
