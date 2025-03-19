/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dms/DatabaseMigrationService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/dms/model/SslSecurityProtocolValue.h>
#include <aws/dms/model/RedisAuthTypeValue.h>
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
namespace DatabaseMigrationService
{
namespace Model
{

  /**
   * <p>Provides information that defines a Redis target endpoint.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/dms-2016-01-01/RedisSettings">AWS
   * API Reference</a></p>
   */
  class RedisSettings
  {
  public:
    AWS_DATABASEMIGRATIONSERVICE_API RedisSettings() = default;
    AWS_DATABASEMIGRATIONSERVICE_API RedisSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATABASEMIGRATIONSERVICE_API RedisSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATABASEMIGRATIONSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Fully qualified domain name of the endpoint.</p>
     */
    inline const Aws::String& GetServerName() const { return m_serverName; }
    inline bool ServerNameHasBeenSet() const { return m_serverNameHasBeenSet; }
    template<typename ServerNameT = Aws::String>
    void SetServerName(ServerNameT&& value) { m_serverNameHasBeenSet = true; m_serverName = std::forward<ServerNameT>(value); }
    template<typename ServerNameT = Aws::String>
    RedisSettings& WithServerName(ServerNameT&& value) { SetServerName(std::forward<ServerNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Transmission Control Protocol (TCP) port for the endpoint.</p>
     */
    inline int GetPort() const { return m_port; }
    inline bool PortHasBeenSet() const { return m_portHasBeenSet; }
    inline void SetPort(int value) { m_portHasBeenSet = true; m_port = value; }
    inline RedisSettings& WithPort(int value) { SetPort(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The connection to a Redis target endpoint using Transport Layer Security
     * (TLS). Valid values include <code>plaintext</code> and
     * <code>ssl-encryption</code>. The default is <code>ssl-encryption</code>. The
     * <code>ssl-encryption</code> option makes an encrypted connection. Optionally,
     * you can identify an Amazon Resource Name (ARN) for an SSL certificate authority
     * (CA) using the <code>SslCaCertificateArn </code>setting. If an ARN isn't given
     * for a CA, DMS uses the Amazon root CA.</p> <p>The <code>plaintext</code> option
     * doesn't provide Transport Layer Security (TLS) encryption for traffic between
     * endpoint and database.</p>
     */
    inline SslSecurityProtocolValue GetSslSecurityProtocol() const { return m_sslSecurityProtocol; }
    inline bool SslSecurityProtocolHasBeenSet() const { return m_sslSecurityProtocolHasBeenSet; }
    inline void SetSslSecurityProtocol(SslSecurityProtocolValue value) { m_sslSecurityProtocolHasBeenSet = true; m_sslSecurityProtocol = value; }
    inline RedisSettings& WithSslSecurityProtocol(SslSecurityProtocolValue value) { SetSslSecurityProtocol(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of authentication to perform when connecting to a Redis target.
     * Options include <code>none</code>, <code>auth-token</code>, and
     * <code>auth-role</code>. The <code>auth-token</code> option requires an
     * <code>AuthPassword</code> value to be provided. The <code>auth-role</code>
     * option requires <code>AuthUserName</code> and <code>AuthPassword</code> values
     * to be provided.</p>
     */
    inline RedisAuthTypeValue GetAuthType() const { return m_authType; }
    inline bool AuthTypeHasBeenSet() const { return m_authTypeHasBeenSet; }
    inline void SetAuthType(RedisAuthTypeValue value) { m_authTypeHasBeenSet = true; m_authType = value; }
    inline RedisSettings& WithAuthType(RedisAuthTypeValue value) { SetAuthType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The user name provided with the <code>auth-role</code> option of the
     * <code>AuthType</code> setting for a Redis target endpoint.</p>
     */
    inline const Aws::String& GetAuthUserName() const { return m_authUserName; }
    inline bool AuthUserNameHasBeenSet() const { return m_authUserNameHasBeenSet; }
    template<typename AuthUserNameT = Aws::String>
    void SetAuthUserName(AuthUserNameT&& value) { m_authUserNameHasBeenSet = true; m_authUserName = std::forward<AuthUserNameT>(value); }
    template<typename AuthUserNameT = Aws::String>
    RedisSettings& WithAuthUserName(AuthUserNameT&& value) { SetAuthUserName(std::forward<AuthUserNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The password provided with the <code>auth-role</code> and
     * <code>auth-token</code> options of the <code>AuthType</code> setting for a Redis
     * target endpoint.</p>
     */
    inline const Aws::String& GetAuthPassword() const { return m_authPassword; }
    inline bool AuthPasswordHasBeenSet() const { return m_authPasswordHasBeenSet; }
    template<typename AuthPasswordT = Aws::String>
    void SetAuthPassword(AuthPasswordT&& value) { m_authPasswordHasBeenSet = true; m_authPassword = std::forward<AuthPasswordT>(value); }
    template<typename AuthPasswordT = Aws::String>
    RedisSettings& WithAuthPassword(AuthPasswordT&& value) { SetAuthPassword(std::forward<AuthPasswordT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) for the certificate authority (CA) that DMS
     * uses to connect to your Redis target endpoint.</p>
     */
    inline const Aws::String& GetSslCaCertificateArn() const { return m_sslCaCertificateArn; }
    inline bool SslCaCertificateArnHasBeenSet() const { return m_sslCaCertificateArnHasBeenSet; }
    template<typename SslCaCertificateArnT = Aws::String>
    void SetSslCaCertificateArn(SslCaCertificateArnT&& value) { m_sslCaCertificateArnHasBeenSet = true; m_sslCaCertificateArn = std::forward<SslCaCertificateArnT>(value); }
    template<typename SslCaCertificateArnT = Aws::String>
    RedisSettings& WithSslCaCertificateArn(SslCaCertificateArnT&& value) { SetSslCaCertificateArn(std::forward<SslCaCertificateArnT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_serverName;
    bool m_serverNameHasBeenSet = false;

    int m_port{0};
    bool m_portHasBeenSet = false;

    SslSecurityProtocolValue m_sslSecurityProtocol{SslSecurityProtocolValue::NOT_SET};
    bool m_sslSecurityProtocolHasBeenSet = false;

    RedisAuthTypeValue m_authType{RedisAuthTypeValue::NOT_SET};
    bool m_authTypeHasBeenSet = false;

    Aws::String m_authUserName;
    bool m_authUserNameHasBeenSet = false;

    Aws::String m_authPassword;
    bool m_authPasswordHasBeenSet = false;

    Aws::String m_sslCaCertificateArn;
    bool m_sslCaCertificateArnHasBeenSet = false;
  };

} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws
