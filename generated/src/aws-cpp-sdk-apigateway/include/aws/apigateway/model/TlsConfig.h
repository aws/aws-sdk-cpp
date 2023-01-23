/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apigateway/APIGateway_EXPORTS.h>

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
namespace APIGateway
{
namespace Model
{

  /**
   * <p>Specifies the TLS configuration for an integration.</p><p><h3>See Also:</h3> 
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/TlsConfig">AWS
   * API Reference</a></p>
   */
  class TlsConfig
  {
  public:
    AWS_APIGATEWAY_API TlsConfig();
    AWS_APIGATEWAY_API TlsConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_APIGATEWAY_API TlsConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APIGATEWAY_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Specifies whether or not API Gateway skips verification that the certificate
     * for an integration endpoint is issued by a supported certificate authority. This
     * isn’t recommended, but it enables you to use certificates that are signed by
     * private certificate authorities, or certificates that are self-signed. If
     * enabled, API Gateway still performs basic certificate validation, which includes
     * checking the certificate's expiration date, hostname, and presence of a root
     * certificate authority. Supported only for <code>HTTP</code> and
     * <code>HTTP_PROXY</code> integrations.</p>  <p>Enabling
     * <code>insecureSkipVerification</code> isn't recommended, especially for
     * integrations with public HTTPS endpoints. If you enable
     * <code>insecureSkipVerification</code>, you increase the risk of
     * man-in-the-middle attacks.</p> 
     */
    inline bool GetInsecureSkipVerification() const{ return m_insecureSkipVerification; }

    /**
     * <p>Specifies whether or not API Gateway skips verification that the certificate
     * for an integration endpoint is issued by a supported certificate authority. This
     * isn’t recommended, but it enables you to use certificates that are signed by
     * private certificate authorities, or certificates that are self-signed. If
     * enabled, API Gateway still performs basic certificate validation, which includes
     * checking the certificate's expiration date, hostname, and presence of a root
     * certificate authority. Supported only for <code>HTTP</code> and
     * <code>HTTP_PROXY</code> integrations.</p>  <p>Enabling
     * <code>insecureSkipVerification</code> isn't recommended, especially for
     * integrations with public HTTPS endpoints. If you enable
     * <code>insecureSkipVerification</code>, you increase the risk of
     * man-in-the-middle attacks.</p> 
     */
    inline bool InsecureSkipVerificationHasBeenSet() const { return m_insecureSkipVerificationHasBeenSet; }

    /**
     * <p>Specifies whether or not API Gateway skips verification that the certificate
     * for an integration endpoint is issued by a supported certificate authority. This
     * isn’t recommended, but it enables you to use certificates that are signed by
     * private certificate authorities, or certificates that are self-signed. If
     * enabled, API Gateway still performs basic certificate validation, which includes
     * checking the certificate's expiration date, hostname, and presence of a root
     * certificate authority. Supported only for <code>HTTP</code> and
     * <code>HTTP_PROXY</code> integrations.</p>  <p>Enabling
     * <code>insecureSkipVerification</code> isn't recommended, especially for
     * integrations with public HTTPS endpoints. If you enable
     * <code>insecureSkipVerification</code>, you increase the risk of
     * man-in-the-middle attacks.</p> 
     */
    inline void SetInsecureSkipVerification(bool value) { m_insecureSkipVerificationHasBeenSet = true; m_insecureSkipVerification = value; }

    /**
     * <p>Specifies whether or not API Gateway skips verification that the certificate
     * for an integration endpoint is issued by a supported certificate authority. This
     * isn’t recommended, but it enables you to use certificates that are signed by
     * private certificate authorities, or certificates that are self-signed. If
     * enabled, API Gateway still performs basic certificate validation, which includes
     * checking the certificate's expiration date, hostname, and presence of a root
     * certificate authority. Supported only for <code>HTTP</code> and
     * <code>HTTP_PROXY</code> integrations.</p>  <p>Enabling
     * <code>insecureSkipVerification</code> isn't recommended, especially for
     * integrations with public HTTPS endpoints. If you enable
     * <code>insecureSkipVerification</code>, you increase the risk of
     * man-in-the-middle attacks.</p> 
     */
    inline TlsConfig& WithInsecureSkipVerification(bool value) { SetInsecureSkipVerification(value); return *this;}

  private:

    bool m_insecureSkipVerification;
    bool m_insecureSkipVerificationHasBeenSet = false;
  };

} // namespace Model
} // namespace APIGateway
} // namespace Aws
