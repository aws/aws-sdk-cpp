/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apigatewayv2/ApiGatewayV2_EXPORTS.h>
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
namespace ApiGatewayV2
{
namespace Model
{

  /**
   * <p>The TLS configuration for a private integration. If you specify a TLS
   * configuration, private integration traffic uses the HTTPS protocol. Supported
   * only for HTTP APIs.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/apigatewayv2-2018-11-29/TlsConfig">AWS
   * API Reference</a></p>
   */
  class TlsConfig
  {
  public:
    AWS_APIGATEWAYV2_API TlsConfig();
    AWS_APIGATEWAYV2_API TlsConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_APIGATEWAYV2_API TlsConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APIGATEWAYV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>If you specify a server name, API Gateway uses it to verify the hostname on
     * the integration's certificate. The server name is also included in the TLS
     * handshake to support Server Name Indication (SNI) or virtual hosting.</p>
     */
    inline const Aws::String& GetServerNameToVerify() const{ return m_serverNameToVerify; }

    /**
     * <p>If you specify a server name, API Gateway uses it to verify the hostname on
     * the integration's certificate. The server name is also included in the TLS
     * handshake to support Server Name Indication (SNI) or virtual hosting.</p>
     */
    inline bool ServerNameToVerifyHasBeenSet() const { return m_serverNameToVerifyHasBeenSet; }

    /**
     * <p>If you specify a server name, API Gateway uses it to verify the hostname on
     * the integration's certificate. The server name is also included in the TLS
     * handshake to support Server Name Indication (SNI) or virtual hosting.</p>
     */
    inline void SetServerNameToVerify(const Aws::String& value) { m_serverNameToVerifyHasBeenSet = true; m_serverNameToVerify = value; }

    /**
     * <p>If you specify a server name, API Gateway uses it to verify the hostname on
     * the integration's certificate. The server name is also included in the TLS
     * handshake to support Server Name Indication (SNI) or virtual hosting.</p>
     */
    inline void SetServerNameToVerify(Aws::String&& value) { m_serverNameToVerifyHasBeenSet = true; m_serverNameToVerify = std::move(value); }

    /**
     * <p>If you specify a server name, API Gateway uses it to verify the hostname on
     * the integration's certificate. The server name is also included in the TLS
     * handshake to support Server Name Indication (SNI) or virtual hosting.</p>
     */
    inline void SetServerNameToVerify(const char* value) { m_serverNameToVerifyHasBeenSet = true; m_serverNameToVerify.assign(value); }

    /**
     * <p>If you specify a server name, API Gateway uses it to verify the hostname on
     * the integration's certificate. The server name is also included in the TLS
     * handshake to support Server Name Indication (SNI) or virtual hosting.</p>
     */
    inline TlsConfig& WithServerNameToVerify(const Aws::String& value) { SetServerNameToVerify(value); return *this;}

    /**
     * <p>If you specify a server name, API Gateway uses it to verify the hostname on
     * the integration's certificate. The server name is also included in the TLS
     * handshake to support Server Name Indication (SNI) or virtual hosting.</p>
     */
    inline TlsConfig& WithServerNameToVerify(Aws::String&& value) { SetServerNameToVerify(std::move(value)); return *this;}

    /**
     * <p>If you specify a server name, API Gateway uses it to verify the hostname on
     * the integration's certificate. The server name is also included in the TLS
     * handshake to support Server Name Indication (SNI) or virtual hosting.</p>
     */
    inline TlsConfig& WithServerNameToVerify(const char* value) { SetServerNameToVerify(value); return *this;}

  private:

    Aws::String m_serverNameToVerify;
    bool m_serverNameToVerifyHasBeenSet = false;
  };

} // namespace Model
} // namespace ApiGatewayV2
} // namespace Aws
