/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace SecurityHub
{
namespace Model
{

  /**
   * <p>Provides information about the TLS/SSL configuration that the CloudFront
   * distribution uses to communicate with viewers.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsCloudFrontDistributionViewerCertificate">AWS
   * API Reference</a></p>
   */
  class AwsCloudFrontDistributionViewerCertificate
  {
  public:
    AWS_SECURITYHUB_API AwsCloudFrontDistributionViewerCertificate();
    AWS_SECURITYHUB_API AwsCloudFrontDistributionViewerCertificate(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsCloudFrontDistributionViewerCertificate& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ARN of the ACM certificate. Used if the certificate is stored in ACM. If
     * you provide an ACM certificate ARN, you must also provide
     * <code>MinimumCertificateVersion</code> and <code>SslSupportMethod</code>.</p>
     */
    inline const Aws::String& GetAcmCertificateArn() const{ return m_acmCertificateArn; }

    /**
     * <p>The ARN of the ACM certificate. Used if the certificate is stored in ACM. If
     * you provide an ACM certificate ARN, you must also provide
     * <code>MinimumCertificateVersion</code> and <code>SslSupportMethod</code>.</p>
     */
    inline bool AcmCertificateArnHasBeenSet() const { return m_acmCertificateArnHasBeenSet; }

    /**
     * <p>The ARN of the ACM certificate. Used if the certificate is stored in ACM. If
     * you provide an ACM certificate ARN, you must also provide
     * <code>MinimumCertificateVersion</code> and <code>SslSupportMethod</code>.</p>
     */
    inline void SetAcmCertificateArn(const Aws::String& value) { m_acmCertificateArnHasBeenSet = true; m_acmCertificateArn = value; }

    /**
     * <p>The ARN of the ACM certificate. Used if the certificate is stored in ACM. If
     * you provide an ACM certificate ARN, you must also provide
     * <code>MinimumCertificateVersion</code> and <code>SslSupportMethod</code>.</p>
     */
    inline void SetAcmCertificateArn(Aws::String&& value) { m_acmCertificateArnHasBeenSet = true; m_acmCertificateArn = std::move(value); }

    /**
     * <p>The ARN of the ACM certificate. Used if the certificate is stored in ACM. If
     * you provide an ACM certificate ARN, you must also provide
     * <code>MinimumCertificateVersion</code> and <code>SslSupportMethod</code>.</p>
     */
    inline void SetAcmCertificateArn(const char* value) { m_acmCertificateArnHasBeenSet = true; m_acmCertificateArn.assign(value); }

    /**
     * <p>The ARN of the ACM certificate. Used if the certificate is stored in ACM. If
     * you provide an ACM certificate ARN, you must also provide
     * <code>MinimumCertificateVersion</code> and <code>SslSupportMethod</code>.</p>
     */
    inline AwsCloudFrontDistributionViewerCertificate& WithAcmCertificateArn(const Aws::String& value) { SetAcmCertificateArn(value); return *this;}

    /**
     * <p>The ARN of the ACM certificate. Used if the certificate is stored in ACM. If
     * you provide an ACM certificate ARN, you must also provide
     * <code>MinimumCertificateVersion</code> and <code>SslSupportMethod</code>.</p>
     */
    inline AwsCloudFrontDistributionViewerCertificate& WithAcmCertificateArn(Aws::String&& value) { SetAcmCertificateArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the ACM certificate. Used if the certificate is stored in ACM. If
     * you provide an ACM certificate ARN, you must also provide
     * <code>MinimumCertificateVersion</code> and <code>SslSupportMethod</code>.</p>
     */
    inline AwsCloudFrontDistributionViewerCertificate& WithAcmCertificateArn(const char* value) { SetAcmCertificateArn(value); return *this;}


    /**
     * <p>The identifier of the certificate. Note that in CloudFront, this attribute is
     * deprecated.</p>
     */
    inline const Aws::String& GetCertificate() const{ return m_certificate; }

    /**
     * <p>The identifier of the certificate. Note that in CloudFront, this attribute is
     * deprecated.</p>
     */
    inline bool CertificateHasBeenSet() const { return m_certificateHasBeenSet; }

    /**
     * <p>The identifier of the certificate. Note that in CloudFront, this attribute is
     * deprecated.</p>
     */
    inline void SetCertificate(const Aws::String& value) { m_certificateHasBeenSet = true; m_certificate = value; }

    /**
     * <p>The identifier of the certificate. Note that in CloudFront, this attribute is
     * deprecated.</p>
     */
    inline void SetCertificate(Aws::String&& value) { m_certificateHasBeenSet = true; m_certificate = std::move(value); }

    /**
     * <p>The identifier of the certificate. Note that in CloudFront, this attribute is
     * deprecated.</p>
     */
    inline void SetCertificate(const char* value) { m_certificateHasBeenSet = true; m_certificate.assign(value); }

    /**
     * <p>The identifier of the certificate. Note that in CloudFront, this attribute is
     * deprecated.</p>
     */
    inline AwsCloudFrontDistributionViewerCertificate& WithCertificate(const Aws::String& value) { SetCertificate(value); return *this;}

    /**
     * <p>The identifier of the certificate. Note that in CloudFront, this attribute is
     * deprecated.</p>
     */
    inline AwsCloudFrontDistributionViewerCertificate& WithCertificate(Aws::String&& value) { SetCertificate(std::move(value)); return *this;}

    /**
     * <p>The identifier of the certificate. Note that in CloudFront, this attribute is
     * deprecated.</p>
     */
    inline AwsCloudFrontDistributionViewerCertificate& WithCertificate(const char* value) { SetCertificate(value); return *this;}


    /**
     * <p>The source of the certificate identified by <code>Certificate</code>. Note
     * that in CloudFront, this attribute is deprecated.</p>
     */
    inline const Aws::String& GetCertificateSource() const{ return m_certificateSource; }

    /**
     * <p>The source of the certificate identified by <code>Certificate</code>. Note
     * that in CloudFront, this attribute is deprecated.</p>
     */
    inline bool CertificateSourceHasBeenSet() const { return m_certificateSourceHasBeenSet; }

    /**
     * <p>The source of the certificate identified by <code>Certificate</code>. Note
     * that in CloudFront, this attribute is deprecated.</p>
     */
    inline void SetCertificateSource(const Aws::String& value) { m_certificateSourceHasBeenSet = true; m_certificateSource = value; }

    /**
     * <p>The source of the certificate identified by <code>Certificate</code>. Note
     * that in CloudFront, this attribute is deprecated.</p>
     */
    inline void SetCertificateSource(Aws::String&& value) { m_certificateSourceHasBeenSet = true; m_certificateSource = std::move(value); }

    /**
     * <p>The source of the certificate identified by <code>Certificate</code>. Note
     * that in CloudFront, this attribute is deprecated.</p>
     */
    inline void SetCertificateSource(const char* value) { m_certificateSourceHasBeenSet = true; m_certificateSource.assign(value); }

    /**
     * <p>The source of the certificate identified by <code>Certificate</code>. Note
     * that in CloudFront, this attribute is deprecated.</p>
     */
    inline AwsCloudFrontDistributionViewerCertificate& WithCertificateSource(const Aws::String& value) { SetCertificateSource(value); return *this;}

    /**
     * <p>The source of the certificate identified by <code>Certificate</code>. Note
     * that in CloudFront, this attribute is deprecated.</p>
     */
    inline AwsCloudFrontDistributionViewerCertificate& WithCertificateSource(Aws::String&& value) { SetCertificateSource(std::move(value)); return *this;}

    /**
     * <p>The source of the certificate identified by <code>Certificate</code>. Note
     * that in CloudFront, this attribute is deprecated.</p>
     */
    inline AwsCloudFrontDistributionViewerCertificate& WithCertificateSource(const char* value) { SetCertificateSource(value); return *this;}


    /**
     * <p>Whether the distribution uses the CloudFront domain name. If set to
     * <code>false</code>, then you provide either <code>AcmCertificateArn</code> or
     * <code>IamCertificateId</code>.</p>
     */
    inline bool GetCloudFrontDefaultCertificate() const{ return m_cloudFrontDefaultCertificate; }

    /**
     * <p>Whether the distribution uses the CloudFront domain name. If set to
     * <code>false</code>, then you provide either <code>AcmCertificateArn</code> or
     * <code>IamCertificateId</code>.</p>
     */
    inline bool CloudFrontDefaultCertificateHasBeenSet() const { return m_cloudFrontDefaultCertificateHasBeenSet; }

    /**
     * <p>Whether the distribution uses the CloudFront domain name. If set to
     * <code>false</code>, then you provide either <code>AcmCertificateArn</code> or
     * <code>IamCertificateId</code>.</p>
     */
    inline void SetCloudFrontDefaultCertificate(bool value) { m_cloudFrontDefaultCertificateHasBeenSet = true; m_cloudFrontDefaultCertificate = value; }

    /**
     * <p>Whether the distribution uses the CloudFront domain name. If set to
     * <code>false</code>, then you provide either <code>AcmCertificateArn</code> or
     * <code>IamCertificateId</code>.</p>
     */
    inline AwsCloudFrontDistributionViewerCertificate& WithCloudFrontDefaultCertificate(bool value) { SetCloudFrontDefaultCertificate(value); return *this;}


    /**
     * <p>The identifier of the IAM certificate. Used if the certificate is stored in
     * IAM. If you provide <code>IamCertificateId</code>, then you also must provide
     * <code>MinimumProtocolVersion</code> and <code>SslSupportMethod</code>.</p>
     */
    inline const Aws::String& GetIamCertificateId() const{ return m_iamCertificateId; }

    /**
     * <p>The identifier of the IAM certificate. Used if the certificate is stored in
     * IAM. If you provide <code>IamCertificateId</code>, then you also must provide
     * <code>MinimumProtocolVersion</code> and <code>SslSupportMethod</code>.</p>
     */
    inline bool IamCertificateIdHasBeenSet() const { return m_iamCertificateIdHasBeenSet; }

    /**
     * <p>The identifier of the IAM certificate. Used if the certificate is stored in
     * IAM. If you provide <code>IamCertificateId</code>, then you also must provide
     * <code>MinimumProtocolVersion</code> and <code>SslSupportMethod</code>.</p>
     */
    inline void SetIamCertificateId(const Aws::String& value) { m_iamCertificateIdHasBeenSet = true; m_iamCertificateId = value; }

    /**
     * <p>The identifier of the IAM certificate. Used if the certificate is stored in
     * IAM. If you provide <code>IamCertificateId</code>, then you also must provide
     * <code>MinimumProtocolVersion</code> and <code>SslSupportMethod</code>.</p>
     */
    inline void SetIamCertificateId(Aws::String&& value) { m_iamCertificateIdHasBeenSet = true; m_iamCertificateId = std::move(value); }

    /**
     * <p>The identifier of the IAM certificate. Used if the certificate is stored in
     * IAM. If you provide <code>IamCertificateId</code>, then you also must provide
     * <code>MinimumProtocolVersion</code> and <code>SslSupportMethod</code>.</p>
     */
    inline void SetIamCertificateId(const char* value) { m_iamCertificateIdHasBeenSet = true; m_iamCertificateId.assign(value); }

    /**
     * <p>The identifier of the IAM certificate. Used if the certificate is stored in
     * IAM. If you provide <code>IamCertificateId</code>, then you also must provide
     * <code>MinimumProtocolVersion</code> and <code>SslSupportMethod</code>.</p>
     */
    inline AwsCloudFrontDistributionViewerCertificate& WithIamCertificateId(const Aws::String& value) { SetIamCertificateId(value); return *this;}

    /**
     * <p>The identifier of the IAM certificate. Used if the certificate is stored in
     * IAM. If you provide <code>IamCertificateId</code>, then you also must provide
     * <code>MinimumProtocolVersion</code> and <code>SslSupportMethod</code>.</p>
     */
    inline AwsCloudFrontDistributionViewerCertificate& WithIamCertificateId(Aws::String&& value) { SetIamCertificateId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the IAM certificate. Used if the certificate is stored in
     * IAM. If you provide <code>IamCertificateId</code>, then you also must provide
     * <code>MinimumProtocolVersion</code> and <code>SslSupportMethod</code>.</p>
     */
    inline AwsCloudFrontDistributionViewerCertificate& WithIamCertificateId(const char* value) { SetIamCertificateId(value); return *this;}


    /**
     * <p>The security policy that CloudFront uses for HTTPS connections with viewers.
     * If <code>SslSupportMethod</code> is <code>sni-only</code>, then
     * <code>MinimumProtocolVersion</code> must be <code>TLSv1</code> or higher.</p>
     */
    inline const Aws::String& GetMinimumProtocolVersion() const{ return m_minimumProtocolVersion; }

    /**
     * <p>The security policy that CloudFront uses for HTTPS connections with viewers.
     * If <code>SslSupportMethod</code> is <code>sni-only</code>, then
     * <code>MinimumProtocolVersion</code> must be <code>TLSv1</code> or higher.</p>
     */
    inline bool MinimumProtocolVersionHasBeenSet() const { return m_minimumProtocolVersionHasBeenSet; }

    /**
     * <p>The security policy that CloudFront uses for HTTPS connections with viewers.
     * If <code>SslSupportMethod</code> is <code>sni-only</code>, then
     * <code>MinimumProtocolVersion</code> must be <code>TLSv1</code> or higher.</p>
     */
    inline void SetMinimumProtocolVersion(const Aws::String& value) { m_minimumProtocolVersionHasBeenSet = true; m_minimumProtocolVersion = value; }

    /**
     * <p>The security policy that CloudFront uses for HTTPS connections with viewers.
     * If <code>SslSupportMethod</code> is <code>sni-only</code>, then
     * <code>MinimumProtocolVersion</code> must be <code>TLSv1</code> or higher.</p>
     */
    inline void SetMinimumProtocolVersion(Aws::String&& value) { m_minimumProtocolVersionHasBeenSet = true; m_minimumProtocolVersion = std::move(value); }

    /**
     * <p>The security policy that CloudFront uses for HTTPS connections with viewers.
     * If <code>SslSupportMethod</code> is <code>sni-only</code>, then
     * <code>MinimumProtocolVersion</code> must be <code>TLSv1</code> or higher.</p>
     */
    inline void SetMinimumProtocolVersion(const char* value) { m_minimumProtocolVersionHasBeenSet = true; m_minimumProtocolVersion.assign(value); }

    /**
     * <p>The security policy that CloudFront uses for HTTPS connections with viewers.
     * If <code>SslSupportMethod</code> is <code>sni-only</code>, then
     * <code>MinimumProtocolVersion</code> must be <code>TLSv1</code> or higher.</p>
     */
    inline AwsCloudFrontDistributionViewerCertificate& WithMinimumProtocolVersion(const Aws::String& value) { SetMinimumProtocolVersion(value); return *this;}

    /**
     * <p>The security policy that CloudFront uses for HTTPS connections with viewers.
     * If <code>SslSupportMethod</code> is <code>sni-only</code>, then
     * <code>MinimumProtocolVersion</code> must be <code>TLSv1</code> or higher.</p>
     */
    inline AwsCloudFrontDistributionViewerCertificate& WithMinimumProtocolVersion(Aws::String&& value) { SetMinimumProtocolVersion(std::move(value)); return *this;}

    /**
     * <p>The security policy that CloudFront uses for HTTPS connections with viewers.
     * If <code>SslSupportMethod</code> is <code>sni-only</code>, then
     * <code>MinimumProtocolVersion</code> must be <code>TLSv1</code> or higher.</p>
     */
    inline AwsCloudFrontDistributionViewerCertificate& WithMinimumProtocolVersion(const char* value) { SetMinimumProtocolVersion(value); return *this;}


    /**
     * <p>The viewers that the distribution accepts HTTPS connections from.</p>
     */
    inline const Aws::String& GetSslSupportMethod() const{ return m_sslSupportMethod; }

    /**
     * <p>The viewers that the distribution accepts HTTPS connections from.</p>
     */
    inline bool SslSupportMethodHasBeenSet() const { return m_sslSupportMethodHasBeenSet; }

    /**
     * <p>The viewers that the distribution accepts HTTPS connections from.</p>
     */
    inline void SetSslSupportMethod(const Aws::String& value) { m_sslSupportMethodHasBeenSet = true; m_sslSupportMethod = value; }

    /**
     * <p>The viewers that the distribution accepts HTTPS connections from.</p>
     */
    inline void SetSslSupportMethod(Aws::String&& value) { m_sslSupportMethodHasBeenSet = true; m_sslSupportMethod = std::move(value); }

    /**
     * <p>The viewers that the distribution accepts HTTPS connections from.</p>
     */
    inline void SetSslSupportMethod(const char* value) { m_sslSupportMethodHasBeenSet = true; m_sslSupportMethod.assign(value); }

    /**
     * <p>The viewers that the distribution accepts HTTPS connections from.</p>
     */
    inline AwsCloudFrontDistributionViewerCertificate& WithSslSupportMethod(const Aws::String& value) { SetSslSupportMethod(value); return *this;}

    /**
     * <p>The viewers that the distribution accepts HTTPS connections from.</p>
     */
    inline AwsCloudFrontDistributionViewerCertificate& WithSslSupportMethod(Aws::String&& value) { SetSslSupportMethod(std::move(value)); return *this;}

    /**
     * <p>The viewers that the distribution accepts HTTPS connections from.</p>
     */
    inline AwsCloudFrontDistributionViewerCertificate& WithSslSupportMethod(const char* value) { SetSslSupportMethod(value); return *this;}

  private:

    Aws::String m_acmCertificateArn;
    bool m_acmCertificateArnHasBeenSet = false;

    Aws::String m_certificate;
    bool m_certificateHasBeenSet = false;

    Aws::String m_certificateSource;
    bool m_certificateSourceHasBeenSet = false;

    bool m_cloudFrontDefaultCertificate;
    bool m_cloudFrontDefaultCertificateHasBeenSet = false;

    Aws::String m_iamCertificateId;
    bool m_iamCertificateIdHasBeenSet = false;

    Aws::String m_minimumProtocolVersion;
    bool m_minimumProtocolVersionHasBeenSet = false;

    Aws::String m_sslSupportMethod;
    bool m_sslSupportMethodHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
