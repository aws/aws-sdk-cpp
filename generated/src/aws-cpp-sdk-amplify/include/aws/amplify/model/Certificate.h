/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/amplify/Amplify_EXPORTS.h>
#include <aws/amplify/model/CertificateType.h>
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
namespace Amplify
{
namespace Model
{

  /**
   * <p>Describes the current SSL/TLS certificate that is in use for the domain. If
   * you are using <code>CreateDomainAssociation</code> to create a new domain
   * association, <code>Certificate</code> describes the new certificate that you are
   * creating.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/amplify-2017-07-25/Certificate">AWS
   * API Reference</a></p>
   */
  class Certificate
  {
  public:
    AWS_AMPLIFY_API Certificate();
    AWS_AMPLIFY_API Certificate(Aws::Utils::Json::JsonView jsonValue);
    AWS_AMPLIFY_API Certificate& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_AMPLIFY_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The type of SSL/TLS certificate that you want to use.</p> <p>Specify
     * <code>AMPLIFY_MANAGED</code> to use the default certificate that Amplify
     * provisions for you.</p> <p>Specify <code>CUSTOM</code> to use your own
     * certificate that you have already added to Certificate Manager in your Amazon
     * Web Services account. Make sure you request (or import) the certificate in the
     * US East (N. Virginia) Region (us-east-1). For more information about using ACM,
     * see <a
     * href="https://docs.aws.amazon.com/acm/latest/userguide/import-certificate.html">Importing
     * certificates into Certificate Manager</a> in the <i>ACM User guide</i> .</p>
     */
    inline const CertificateType& GetType() const{ return m_type; }

    /**
     * <p>The type of SSL/TLS certificate that you want to use.</p> <p>Specify
     * <code>AMPLIFY_MANAGED</code> to use the default certificate that Amplify
     * provisions for you.</p> <p>Specify <code>CUSTOM</code> to use your own
     * certificate that you have already added to Certificate Manager in your Amazon
     * Web Services account. Make sure you request (or import) the certificate in the
     * US East (N. Virginia) Region (us-east-1). For more information about using ACM,
     * see <a
     * href="https://docs.aws.amazon.com/acm/latest/userguide/import-certificate.html">Importing
     * certificates into Certificate Manager</a> in the <i>ACM User guide</i> .</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The type of SSL/TLS certificate that you want to use.</p> <p>Specify
     * <code>AMPLIFY_MANAGED</code> to use the default certificate that Amplify
     * provisions for you.</p> <p>Specify <code>CUSTOM</code> to use your own
     * certificate that you have already added to Certificate Manager in your Amazon
     * Web Services account. Make sure you request (or import) the certificate in the
     * US East (N. Virginia) Region (us-east-1). For more information about using ACM,
     * see <a
     * href="https://docs.aws.amazon.com/acm/latest/userguide/import-certificate.html">Importing
     * certificates into Certificate Manager</a> in the <i>ACM User guide</i> .</p>
     */
    inline void SetType(const CertificateType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The type of SSL/TLS certificate that you want to use.</p> <p>Specify
     * <code>AMPLIFY_MANAGED</code> to use the default certificate that Amplify
     * provisions for you.</p> <p>Specify <code>CUSTOM</code> to use your own
     * certificate that you have already added to Certificate Manager in your Amazon
     * Web Services account. Make sure you request (or import) the certificate in the
     * US East (N. Virginia) Region (us-east-1). For more information about using ACM,
     * see <a
     * href="https://docs.aws.amazon.com/acm/latest/userguide/import-certificate.html">Importing
     * certificates into Certificate Manager</a> in the <i>ACM User guide</i> .</p>
     */
    inline void SetType(CertificateType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The type of SSL/TLS certificate that you want to use.</p> <p>Specify
     * <code>AMPLIFY_MANAGED</code> to use the default certificate that Amplify
     * provisions for you.</p> <p>Specify <code>CUSTOM</code> to use your own
     * certificate that you have already added to Certificate Manager in your Amazon
     * Web Services account. Make sure you request (or import) the certificate in the
     * US East (N. Virginia) Region (us-east-1). For more information about using ACM,
     * see <a
     * href="https://docs.aws.amazon.com/acm/latest/userguide/import-certificate.html">Importing
     * certificates into Certificate Manager</a> in the <i>ACM User guide</i> .</p>
     */
    inline Certificate& WithType(const CertificateType& value) { SetType(value); return *this;}

    /**
     * <p>The type of SSL/TLS certificate that you want to use.</p> <p>Specify
     * <code>AMPLIFY_MANAGED</code> to use the default certificate that Amplify
     * provisions for you.</p> <p>Specify <code>CUSTOM</code> to use your own
     * certificate that you have already added to Certificate Manager in your Amazon
     * Web Services account. Make sure you request (or import) the certificate in the
     * US East (N. Virginia) Region (us-east-1). For more information about using ACM,
     * see <a
     * href="https://docs.aws.amazon.com/acm/latest/userguide/import-certificate.html">Importing
     * certificates into Certificate Manager</a> in the <i>ACM User guide</i> .</p>
     */
    inline Certificate& WithType(CertificateType&& value) { SetType(std::move(value)); return *this;}


    /**
     * <p>The Amazon resource name (ARN) for a custom certificate that you have already
     * added to Certificate Manager in your Amazon Web Services account. </p> <p>This
     * field is required only when the certificate type is <code>CUSTOM</code>.</p>
     */
    inline const Aws::String& GetCustomCertificateArn() const{ return m_customCertificateArn; }

    /**
     * <p>The Amazon resource name (ARN) for a custom certificate that you have already
     * added to Certificate Manager in your Amazon Web Services account. </p> <p>This
     * field is required only when the certificate type is <code>CUSTOM</code>.</p>
     */
    inline bool CustomCertificateArnHasBeenSet() const { return m_customCertificateArnHasBeenSet; }

    /**
     * <p>The Amazon resource name (ARN) for a custom certificate that you have already
     * added to Certificate Manager in your Amazon Web Services account. </p> <p>This
     * field is required only when the certificate type is <code>CUSTOM</code>.</p>
     */
    inline void SetCustomCertificateArn(const Aws::String& value) { m_customCertificateArnHasBeenSet = true; m_customCertificateArn = value; }

    /**
     * <p>The Amazon resource name (ARN) for a custom certificate that you have already
     * added to Certificate Manager in your Amazon Web Services account. </p> <p>This
     * field is required only when the certificate type is <code>CUSTOM</code>.</p>
     */
    inline void SetCustomCertificateArn(Aws::String&& value) { m_customCertificateArnHasBeenSet = true; m_customCertificateArn = std::move(value); }

    /**
     * <p>The Amazon resource name (ARN) for a custom certificate that you have already
     * added to Certificate Manager in your Amazon Web Services account. </p> <p>This
     * field is required only when the certificate type is <code>CUSTOM</code>.</p>
     */
    inline void SetCustomCertificateArn(const char* value) { m_customCertificateArnHasBeenSet = true; m_customCertificateArn.assign(value); }

    /**
     * <p>The Amazon resource name (ARN) for a custom certificate that you have already
     * added to Certificate Manager in your Amazon Web Services account. </p> <p>This
     * field is required only when the certificate type is <code>CUSTOM</code>.</p>
     */
    inline Certificate& WithCustomCertificateArn(const Aws::String& value) { SetCustomCertificateArn(value); return *this;}

    /**
     * <p>The Amazon resource name (ARN) for a custom certificate that you have already
     * added to Certificate Manager in your Amazon Web Services account. </p> <p>This
     * field is required only when the certificate type is <code>CUSTOM</code>.</p>
     */
    inline Certificate& WithCustomCertificateArn(Aws::String&& value) { SetCustomCertificateArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon resource name (ARN) for a custom certificate that you have already
     * added to Certificate Manager in your Amazon Web Services account. </p> <p>This
     * field is required only when the certificate type is <code>CUSTOM</code>.</p>
     */
    inline Certificate& WithCustomCertificateArn(const char* value) { SetCustomCertificateArn(value); return *this;}


    /**
     * <p>The DNS record for certificate verification.</p>
     */
    inline const Aws::String& GetCertificateVerificationDNSRecord() const{ return m_certificateVerificationDNSRecord; }

    /**
     * <p>The DNS record for certificate verification.</p>
     */
    inline bool CertificateVerificationDNSRecordHasBeenSet() const { return m_certificateVerificationDNSRecordHasBeenSet; }

    /**
     * <p>The DNS record for certificate verification.</p>
     */
    inline void SetCertificateVerificationDNSRecord(const Aws::String& value) { m_certificateVerificationDNSRecordHasBeenSet = true; m_certificateVerificationDNSRecord = value; }

    /**
     * <p>The DNS record for certificate verification.</p>
     */
    inline void SetCertificateVerificationDNSRecord(Aws::String&& value) { m_certificateVerificationDNSRecordHasBeenSet = true; m_certificateVerificationDNSRecord = std::move(value); }

    /**
     * <p>The DNS record for certificate verification.</p>
     */
    inline void SetCertificateVerificationDNSRecord(const char* value) { m_certificateVerificationDNSRecordHasBeenSet = true; m_certificateVerificationDNSRecord.assign(value); }

    /**
     * <p>The DNS record for certificate verification.</p>
     */
    inline Certificate& WithCertificateVerificationDNSRecord(const Aws::String& value) { SetCertificateVerificationDNSRecord(value); return *this;}

    /**
     * <p>The DNS record for certificate verification.</p>
     */
    inline Certificate& WithCertificateVerificationDNSRecord(Aws::String&& value) { SetCertificateVerificationDNSRecord(std::move(value)); return *this;}

    /**
     * <p>The DNS record for certificate verification.</p>
     */
    inline Certificate& WithCertificateVerificationDNSRecord(const char* value) { SetCertificateVerificationDNSRecord(value); return *this;}

  private:

    CertificateType m_type;
    bool m_typeHasBeenSet = false;

    Aws::String m_customCertificateArn;
    bool m_customCertificateArnHasBeenSet = false;

    Aws::String m_certificateVerificationDNSRecord;
    bool m_certificateVerificationDNSRecordHasBeenSet = false;
  };

} // namespace Model
} // namespace Amplify
} // namespace Aws
