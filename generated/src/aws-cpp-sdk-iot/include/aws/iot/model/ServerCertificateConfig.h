/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
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
namespace IoT
{
namespace Model
{

  /**
   * <p>The server certificate configuration.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/ServerCertificateConfig">AWS
   * API Reference</a></p>
   */
  class ServerCertificateConfig
  {
  public:
    AWS_IOT_API ServerCertificateConfig() = default;
    AWS_IOT_API ServerCertificateConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API ServerCertificateConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A Boolean value that indicates whether Online Certificate Status Protocol
     * (OCSP) server certificate check is enabled or not.</p> <p>For more information,
     * see <a
     * href="https://docs.aws.amazon.com/iot/latest/developerguide/iot-custom-endpoints-cert-config.html">
     * Server certificate configuration for OCSP stapling</a> from Amazon Web Services
     * IoT Core Developer Guide.</p>
     */
    inline bool GetEnableOCSPCheck() const { return m_enableOCSPCheck; }
    inline bool EnableOCSPCheckHasBeenSet() const { return m_enableOCSPCheckHasBeenSet; }
    inline void SetEnableOCSPCheck(bool value) { m_enableOCSPCheckHasBeenSet = true; m_enableOCSPCheck = value; }
    inline ServerCertificateConfig& WithEnableOCSPCheck(bool value) { SetEnableOCSPCheck(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) for a Lambda function that acts as a Request
     * for Comments (RFC) 6960-compliant Online Certificate Status Protocol (OCSP)
     * responder, supporting basic OCSP responses. The Lambda function accepts a
     * base64-encoding of the OCSP request in the Distinguished Encoding Rules (DER)
     * format. The Lambda function's response is also a base64-encoded OCSP response in
     * the DER format. The response size must not exceed 4 kilobytes (KiB). The Lambda
     * function must be in the same Amazon Web Services account and region as the
     * domain configuration. For more information, see <a
     * href="https://docs.aws.amazon.com/iot/latest/developerguide/iot-custom-endpoints-cert-config.html#iot-custom-endpoints-cert-config-ocsp-private-endpoint.html">Configuring
     * server certificate OCSP for private endpoints in Amazon Web Services IoT
     * Core</a> from the Amazon Web Services IoT Core developer guide.</p>
     */
    inline const Aws::String& GetOcspLambdaArn() const { return m_ocspLambdaArn; }
    inline bool OcspLambdaArnHasBeenSet() const { return m_ocspLambdaArnHasBeenSet; }
    template<typename OcspLambdaArnT = Aws::String>
    void SetOcspLambdaArn(OcspLambdaArnT&& value) { m_ocspLambdaArnHasBeenSet = true; m_ocspLambdaArn = std::forward<OcspLambdaArnT>(value); }
    template<typename OcspLambdaArnT = Aws::String>
    ServerCertificateConfig& WithOcspLambdaArn(OcspLambdaArnT&& value) { SetOcspLambdaArn(std::forward<OcspLambdaArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) for an X.509 certificate stored in Amazon Web
     * Services Certificate Manager (ACM). If provided, Amazon Web Services IoT Core
     * will use this certificate to validate the signature of the received OCSP
     * response. The OCSP responder must sign responses using either this authorized
     * responder certificate or the issuing certificate, depending on whether the ARN
     * is provided or not. The certificate must be in the same Amazon Web Services
     * account and region as the domain configuration.</p>
     */
    inline const Aws::String& GetOcspAuthorizedResponderArn() const { return m_ocspAuthorizedResponderArn; }
    inline bool OcspAuthorizedResponderArnHasBeenSet() const { return m_ocspAuthorizedResponderArnHasBeenSet; }
    template<typename OcspAuthorizedResponderArnT = Aws::String>
    void SetOcspAuthorizedResponderArn(OcspAuthorizedResponderArnT&& value) { m_ocspAuthorizedResponderArnHasBeenSet = true; m_ocspAuthorizedResponderArn = std::forward<OcspAuthorizedResponderArnT>(value); }
    template<typename OcspAuthorizedResponderArnT = Aws::String>
    ServerCertificateConfig& WithOcspAuthorizedResponderArn(OcspAuthorizedResponderArnT&& value) { SetOcspAuthorizedResponderArn(std::forward<OcspAuthorizedResponderArnT>(value)); return *this;}
    ///@}
  private:

    bool m_enableOCSPCheck{false};
    bool m_enableOCSPCheckHasBeenSet = false;

    Aws::String m_ocspLambdaArn;
    bool m_ocspLambdaArnHasBeenSet = false;

    Aws::String m_ocspAuthorizedResponderArn;
    bool m_ocspAuthorizedResponderArnHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
