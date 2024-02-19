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
   * <p>The type of SSL/TLS certificate to use for your custom domain. If a
   * certificate type isn't specified, Amplify uses the default
   * <code>AMPLIFY_MANAGED</code> certificate.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/amplify-2017-07-25/CertificateSettings">AWS
   * API Reference</a></p>
   */
  class CertificateSettings
  {
  public:
    AWS_AMPLIFY_API CertificateSettings();
    AWS_AMPLIFY_API CertificateSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_AMPLIFY_API CertificateSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_AMPLIFY_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The certificate type.</p> <p>Specify <code>AMPLIFY_MANAGED</code> to use the
     * default certificate that Amplify provisions for you.</p> <p>Specify
     * <code>CUSTOM</code> to use your own certificate that you have already added to
     * Certificate Manager in your Amazon Web Services account. Make sure you request
     * (or import) the certificate in the US East (N. Virginia) Region (us-east-1). For
     * more information about using ACM, see <a
     * href="https://docs.aws.amazon.com/acm/latest/userguide/import-certificate.html">Importing
     * certificates into Certificate Manager</a> in the <i>ACM User guide</i>.</p>
     */
    inline const CertificateType& GetType() const{ return m_type; }

    /**
     * <p>The certificate type.</p> <p>Specify <code>AMPLIFY_MANAGED</code> to use the
     * default certificate that Amplify provisions for you.</p> <p>Specify
     * <code>CUSTOM</code> to use your own certificate that you have already added to
     * Certificate Manager in your Amazon Web Services account. Make sure you request
     * (or import) the certificate in the US East (N. Virginia) Region (us-east-1). For
     * more information about using ACM, see <a
     * href="https://docs.aws.amazon.com/acm/latest/userguide/import-certificate.html">Importing
     * certificates into Certificate Manager</a> in the <i>ACM User guide</i>.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The certificate type.</p> <p>Specify <code>AMPLIFY_MANAGED</code> to use the
     * default certificate that Amplify provisions for you.</p> <p>Specify
     * <code>CUSTOM</code> to use your own certificate that you have already added to
     * Certificate Manager in your Amazon Web Services account. Make sure you request
     * (or import) the certificate in the US East (N. Virginia) Region (us-east-1). For
     * more information about using ACM, see <a
     * href="https://docs.aws.amazon.com/acm/latest/userguide/import-certificate.html">Importing
     * certificates into Certificate Manager</a> in the <i>ACM User guide</i>.</p>
     */
    inline void SetType(const CertificateType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The certificate type.</p> <p>Specify <code>AMPLIFY_MANAGED</code> to use the
     * default certificate that Amplify provisions for you.</p> <p>Specify
     * <code>CUSTOM</code> to use your own certificate that you have already added to
     * Certificate Manager in your Amazon Web Services account. Make sure you request
     * (or import) the certificate in the US East (N. Virginia) Region (us-east-1). For
     * more information about using ACM, see <a
     * href="https://docs.aws.amazon.com/acm/latest/userguide/import-certificate.html">Importing
     * certificates into Certificate Manager</a> in the <i>ACM User guide</i>.</p>
     */
    inline void SetType(CertificateType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The certificate type.</p> <p>Specify <code>AMPLIFY_MANAGED</code> to use the
     * default certificate that Amplify provisions for you.</p> <p>Specify
     * <code>CUSTOM</code> to use your own certificate that you have already added to
     * Certificate Manager in your Amazon Web Services account. Make sure you request
     * (or import) the certificate in the US East (N. Virginia) Region (us-east-1). For
     * more information about using ACM, see <a
     * href="https://docs.aws.amazon.com/acm/latest/userguide/import-certificate.html">Importing
     * certificates into Certificate Manager</a> in the <i>ACM User guide</i>.</p>
     */
    inline CertificateSettings& WithType(const CertificateType& value) { SetType(value); return *this;}

    /**
     * <p>The certificate type.</p> <p>Specify <code>AMPLIFY_MANAGED</code> to use the
     * default certificate that Amplify provisions for you.</p> <p>Specify
     * <code>CUSTOM</code> to use your own certificate that you have already added to
     * Certificate Manager in your Amazon Web Services account. Make sure you request
     * (or import) the certificate in the US East (N. Virginia) Region (us-east-1). For
     * more information about using ACM, see <a
     * href="https://docs.aws.amazon.com/acm/latest/userguide/import-certificate.html">Importing
     * certificates into Certificate Manager</a> in the <i>ACM User guide</i>.</p>
     */
    inline CertificateSettings& WithType(CertificateType&& value) { SetType(std::move(value)); return *this;}


    /**
     * <p>The Amazon resource name (ARN) for the custom certificate that you have
     * already added to Certificate Manager in your Amazon Web Services account.</p>
     * <p>This field is required only when the certificate type is
     * <code>CUSTOM</code>.</p>
     */
    inline const Aws::String& GetCustomCertificateArn() const{ return m_customCertificateArn; }

    /**
     * <p>The Amazon resource name (ARN) for the custom certificate that you have
     * already added to Certificate Manager in your Amazon Web Services account.</p>
     * <p>This field is required only when the certificate type is
     * <code>CUSTOM</code>.</p>
     */
    inline bool CustomCertificateArnHasBeenSet() const { return m_customCertificateArnHasBeenSet; }

    /**
     * <p>The Amazon resource name (ARN) for the custom certificate that you have
     * already added to Certificate Manager in your Amazon Web Services account.</p>
     * <p>This field is required only when the certificate type is
     * <code>CUSTOM</code>.</p>
     */
    inline void SetCustomCertificateArn(const Aws::String& value) { m_customCertificateArnHasBeenSet = true; m_customCertificateArn = value; }

    /**
     * <p>The Amazon resource name (ARN) for the custom certificate that you have
     * already added to Certificate Manager in your Amazon Web Services account.</p>
     * <p>This field is required only when the certificate type is
     * <code>CUSTOM</code>.</p>
     */
    inline void SetCustomCertificateArn(Aws::String&& value) { m_customCertificateArnHasBeenSet = true; m_customCertificateArn = std::move(value); }

    /**
     * <p>The Amazon resource name (ARN) for the custom certificate that you have
     * already added to Certificate Manager in your Amazon Web Services account.</p>
     * <p>This field is required only when the certificate type is
     * <code>CUSTOM</code>.</p>
     */
    inline void SetCustomCertificateArn(const char* value) { m_customCertificateArnHasBeenSet = true; m_customCertificateArn.assign(value); }

    /**
     * <p>The Amazon resource name (ARN) for the custom certificate that you have
     * already added to Certificate Manager in your Amazon Web Services account.</p>
     * <p>This field is required only when the certificate type is
     * <code>CUSTOM</code>.</p>
     */
    inline CertificateSettings& WithCustomCertificateArn(const Aws::String& value) { SetCustomCertificateArn(value); return *this;}

    /**
     * <p>The Amazon resource name (ARN) for the custom certificate that you have
     * already added to Certificate Manager in your Amazon Web Services account.</p>
     * <p>This field is required only when the certificate type is
     * <code>CUSTOM</code>.</p>
     */
    inline CertificateSettings& WithCustomCertificateArn(Aws::String&& value) { SetCustomCertificateArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon resource name (ARN) for the custom certificate that you have
     * already added to Certificate Manager in your Amazon Web Services account.</p>
     * <p>This field is required only when the certificate type is
     * <code>CUSTOM</code>.</p>
     */
    inline CertificateSettings& WithCustomCertificateArn(const char* value) { SetCustomCertificateArn(value); return *this;}

  private:

    CertificateType m_type;
    bool m_typeHasBeenSet = false;

    Aws::String m_customCertificateArn;
    bool m_customCertificateArnHasBeenSet = false;
  };

} // namespace Model
} // namespace Amplify
} // namespace Aws
