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

  class AWS_APIGATEWAY_API TlsConfig
  {
  public:
    TlsConfig();
    TlsConfig(Aws::Utils::Json::JsonView jsonValue);
    TlsConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Specifies whether API Gateway skips trust chain validation of the server
     * certificate during the TLS handshake. Supported only for <code>HTTP</code> and
     * <code>HTTP_PROXY</code> integrations. By default, API Gateway validates that
     * certificates for integration endpoints are issued by a <a
     * href="https://docs.aws.amazon.com/apigateway/latest/developerguide/api-gateway-supported-certificate-authorities-for-http-endpoints.html">supported
     * Certificate Authority</a>. If enabled, API Gateway skips trust chain validation
     * of the server certificate. This is not recommended, but it enables you to use
     * certificates that are signed by private Certificate Authorities, or certificates
     * that are self-signed.</p>
     */
    inline bool GetInsecureSkipVerification() const{ return m_insecureSkipVerification; }

    /**
     * <p>Specifies whether API Gateway skips trust chain validation of the server
     * certificate during the TLS handshake. Supported only for <code>HTTP</code> and
     * <code>HTTP_PROXY</code> integrations. By default, API Gateway validates that
     * certificates for integration endpoints are issued by a <a
     * href="https://docs.aws.amazon.com/apigateway/latest/developerguide/api-gateway-supported-certificate-authorities-for-http-endpoints.html">supported
     * Certificate Authority</a>. If enabled, API Gateway skips trust chain validation
     * of the server certificate. This is not recommended, but it enables you to use
     * certificates that are signed by private Certificate Authorities, or certificates
     * that are self-signed.</p>
     */
    inline bool InsecureSkipVerificationHasBeenSet() const { return m_insecureSkipVerificationHasBeenSet; }

    /**
     * <p>Specifies whether API Gateway skips trust chain validation of the server
     * certificate during the TLS handshake. Supported only for <code>HTTP</code> and
     * <code>HTTP_PROXY</code> integrations. By default, API Gateway validates that
     * certificates for integration endpoints are issued by a <a
     * href="https://docs.aws.amazon.com/apigateway/latest/developerguide/api-gateway-supported-certificate-authorities-for-http-endpoints.html">supported
     * Certificate Authority</a>. If enabled, API Gateway skips trust chain validation
     * of the server certificate. This is not recommended, but it enables you to use
     * certificates that are signed by private Certificate Authorities, or certificates
     * that are self-signed.</p>
     */
    inline void SetInsecureSkipVerification(bool value) { m_insecureSkipVerificationHasBeenSet = true; m_insecureSkipVerification = value; }

    /**
     * <p>Specifies whether API Gateway skips trust chain validation of the server
     * certificate during the TLS handshake. Supported only for <code>HTTP</code> and
     * <code>HTTP_PROXY</code> integrations. By default, API Gateway validates that
     * certificates for integration endpoints are issued by a <a
     * href="https://docs.aws.amazon.com/apigateway/latest/developerguide/api-gateway-supported-certificate-authorities-for-http-endpoints.html">supported
     * Certificate Authority</a>. If enabled, API Gateway skips trust chain validation
     * of the server certificate. This is not recommended, but it enables you to use
     * certificates that are signed by private Certificate Authorities, or certificates
     * that are self-signed.</p>
     */
    inline TlsConfig& WithInsecureSkipVerification(bool value) { SetInsecureSkipVerification(value); return *this;}

  private:

    bool m_insecureSkipVerification;
    bool m_insecureSkipVerificationHasBeenSet;
  };

} // namespace Model
} // namespace APIGateway
} // namespace Aws
