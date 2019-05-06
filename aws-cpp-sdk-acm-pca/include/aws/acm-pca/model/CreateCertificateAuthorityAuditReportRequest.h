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
  class AWS_ACMPCA_API CreateCertificateAuthorityAuditReportRequest : public ACMPCARequest
  {
  public:
    CreateCertificateAuthorityAuditReportRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateCertificateAuthorityAuditReport"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The Amazon Resource Name (ARN) of the CA to be audited. This is of the
     * form:</p> <p>
     * <code>arn:aws:acm-pca:<i>region</i>:<i>account</i>:certificate-authority/<i>12345678-1234-1234-1234-123456789012</i>
     * </code>.</p>
     */
    inline const Aws::String& GetCertificateAuthorityArn() const{ return m_certificateAuthorityArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the CA to be audited. This is of the
     * form:</p> <p>
     * <code>arn:aws:acm-pca:<i>region</i>:<i>account</i>:certificate-authority/<i>12345678-1234-1234-1234-123456789012</i>
     * </code>.</p>
     */
    inline bool CertificateAuthorityArnHasBeenSet() const { return m_certificateAuthorityArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the CA to be audited. This is of the
     * form:</p> <p>
     * <code>arn:aws:acm-pca:<i>region</i>:<i>account</i>:certificate-authority/<i>12345678-1234-1234-1234-123456789012</i>
     * </code>.</p>
     */
    inline void SetCertificateAuthorityArn(const Aws::String& value) { m_certificateAuthorityArnHasBeenSet = true; m_certificateAuthorityArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the CA to be audited. This is of the
     * form:</p> <p>
     * <code>arn:aws:acm-pca:<i>region</i>:<i>account</i>:certificate-authority/<i>12345678-1234-1234-1234-123456789012</i>
     * </code>.</p>
     */
    inline void SetCertificateAuthorityArn(Aws::String&& value) { m_certificateAuthorityArnHasBeenSet = true; m_certificateAuthorityArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the CA to be audited. This is of the
     * form:</p> <p>
     * <code>arn:aws:acm-pca:<i>region</i>:<i>account</i>:certificate-authority/<i>12345678-1234-1234-1234-123456789012</i>
     * </code>.</p>
     */
    inline void SetCertificateAuthorityArn(const char* value) { m_certificateAuthorityArnHasBeenSet = true; m_certificateAuthorityArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the CA to be audited. This is of the
     * form:</p> <p>
     * <code>arn:aws:acm-pca:<i>region</i>:<i>account</i>:certificate-authority/<i>12345678-1234-1234-1234-123456789012</i>
     * </code>.</p>
     */
    inline CreateCertificateAuthorityAuditReportRequest& WithCertificateAuthorityArn(const Aws::String& value) { SetCertificateAuthorityArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the CA to be audited. This is of the
     * form:</p> <p>
     * <code>arn:aws:acm-pca:<i>region</i>:<i>account</i>:certificate-authority/<i>12345678-1234-1234-1234-123456789012</i>
     * </code>.</p>
     */
    inline CreateCertificateAuthorityAuditReportRequest& WithCertificateAuthorityArn(Aws::String&& value) { SetCertificateAuthorityArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the CA to be audited. This is of the
     * form:</p> <p>
     * <code>arn:aws:acm-pca:<i>region</i>:<i>account</i>:certificate-authority/<i>12345678-1234-1234-1234-123456789012</i>
     * </code>.</p>
     */
    inline CreateCertificateAuthorityAuditReportRequest& WithCertificateAuthorityArn(const char* value) { SetCertificateAuthorityArn(value); return *this;}


    /**
     * <p>The name of the S3 bucket that will contain the audit report.</p>
     */
    inline const Aws::String& GetS3BucketName() const{ return m_s3BucketName; }

    /**
     * <p>The name of the S3 bucket that will contain the audit report.</p>
     */
    inline bool S3BucketNameHasBeenSet() const { return m_s3BucketNameHasBeenSet; }

    /**
     * <p>The name of the S3 bucket that will contain the audit report.</p>
     */
    inline void SetS3BucketName(const Aws::String& value) { m_s3BucketNameHasBeenSet = true; m_s3BucketName = value; }

    /**
     * <p>The name of the S3 bucket that will contain the audit report.</p>
     */
    inline void SetS3BucketName(Aws::String&& value) { m_s3BucketNameHasBeenSet = true; m_s3BucketName = std::move(value); }

    /**
     * <p>The name of the S3 bucket that will contain the audit report.</p>
     */
    inline void SetS3BucketName(const char* value) { m_s3BucketNameHasBeenSet = true; m_s3BucketName.assign(value); }

    /**
     * <p>The name of the S3 bucket that will contain the audit report.</p>
     */
    inline CreateCertificateAuthorityAuditReportRequest& WithS3BucketName(const Aws::String& value) { SetS3BucketName(value); return *this;}

    /**
     * <p>The name of the S3 bucket that will contain the audit report.</p>
     */
    inline CreateCertificateAuthorityAuditReportRequest& WithS3BucketName(Aws::String&& value) { SetS3BucketName(std::move(value)); return *this;}

    /**
     * <p>The name of the S3 bucket that will contain the audit report.</p>
     */
    inline CreateCertificateAuthorityAuditReportRequest& WithS3BucketName(const char* value) { SetS3BucketName(value); return *this;}


    /**
     * <p>The format in which to create the report. This can be either <b>JSON</b> or
     * <b>CSV</b>.</p>
     */
    inline const AuditReportResponseFormat& GetAuditReportResponseFormat() const{ return m_auditReportResponseFormat; }

    /**
     * <p>The format in which to create the report. This can be either <b>JSON</b> or
     * <b>CSV</b>.</p>
     */
    inline bool AuditReportResponseFormatHasBeenSet() const { return m_auditReportResponseFormatHasBeenSet; }

    /**
     * <p>The format in which to create the report. This can be either <b>JSON</b> or
     * <b>CSV</b>.</p>
     */
    inline void SetAuditReportResponseFormat(const AuditReportResponseFormat& value) { m_auditReportResponseFormatHasBeenSet = true; m_auditReportResponseFormat = value; }

    /**
     * <p>The format in which to create the report. This can be either <b>JSON</b> or
     * <b>CSV</b>.</p>
     */
    inline void SetAuditReportResponseFormat(AuditReportResponseFormat&& value) { m_auditReportResponseFormatHasBeenSet = true; m_auditReportResponseFormat = std::move(value); }

    /**
     * <p>The format in which to create the report. This can be either <b>JSON</b> or
     * <b>CSV</b>.</p>
     */
    inline CreateCertificateAuthorityAuditReportRequest& WithAuditReportResponseFormat(const AuditReportResponseFormat& value) { SetAuditReportResponseFormat(value); return *this;}

    /**
     * <p>The format in which to create the report. This can be either <b>JSON</b> or
     * <b>CSV</b>.</p>
     */
    inline CreateCertificateAuthorityAuditReportRequest& WithAuditReportResponseFormat(AuditReportResponseFormat&& value) { SetAuditReportResponseFormat(std::move(value)); return *this;}

  private:

    Aws::String m_certificateAuthorityArn;
    bool m_certificateAuthorityArnHasBeenSet;

    Aws::String m_s3BucketName;
    bool m_s3BucketNameHasBeenSet;

    AuditReportResponseFormat m_auditReportResponseFormat;
    bool m_auditReportResponseFormatHasBeenSet;
  };

} // namespace Model
} // namespace ACMPCA
} // namespace Aws
