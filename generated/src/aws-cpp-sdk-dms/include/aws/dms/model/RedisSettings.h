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
    AWS_DATABASEMIGRATIONSERVICE_API RedisSettings();
    AWS_DATABASEMIGRATIONSERVICE_API RedisSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATABASEMIGRATIONSERVICE_API RedisSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATABASEMIGRATIONSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Fully qualified domain name of the endpoint.</p>
     */
    inline const Aws::String& GetServerName() const{ return m_serverName; }

    /**
     * <p>Fully qualified domain name of the endpoint.</p>
     */
    inline bool ServerNameHasBeenSet() const { return m_serverNameHasBeenSet; }

    /**
     * <p>Fully qualified domain name of the endpoint.</p>
     */
    inline void SetServerName(const Aws::String& value) { m_serverNameHasBeenSet = true; m_serverName = value; }

    /**
     * <p>Fully qualified domain name of the endpoint.</p>
     */
    inline void SetServerName(Aws::String&& value) { m_serverNameHasBeenSet = true; m_serverName = std::move(value); }

    /**
     * <p>Fully qualified domain name of the endpoint.</p>
     */
    inline void SetServerName(const char* value) { m_serverNameHasBeenSet = true; m_serverName.assign(value); }

    /**
     * <p>Fully qualified domain name of the endpoint.</p>
     */
    inline RedisSettings& WithServerName(const Aws::String& value) { SetServerName(value); return *this;}

    /**
     * <p>Fully qualified domain name of the endpoint.</p>
     */
    inline RedisSettings& WithServerName(Aws::String&& value) { SetServerName(std::move(value)); return *this;}

    /**
     * <p>Fully qualified domain name of the endpoint.</p>
     */
    inline RedisSettings& WithServerName(const char* value) { SetServerName(value); return *this;}


    /**
     * <p>Transmission Control Protocol (TCP) port for the endpoint.</p>
     */
    inline int GetPort() const{ return m_port; }

    /**
     * <p>Transmission Control Protocol (TCP) port for the endpoint.</p>
     */
    inline bool PortHasBeenSet() const { return m_portHasBeenSet; }

    /**
     * <p>Transmission Control Protocol (TCP) port for the endpoint.</p>
     */
    inline void SetPort(int value) { m_portHasBeenSet = true; m_port = value; }

    /**
     * <p>Transmission Control Protocol (TCP) port for the endpoint.</p>
     */
    inline RedisSettings& WithPort(int value) { SetPort(value); return *this;}


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
    inline const SslSecurityProtocolValue& GetSslSecurityProtocol() const{ return m_sslSecurityProtocol; }

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
    inline bool SslSecurityProtocolHasBeenSet() const { return m_sslSecurityProtocolHasBeenSet; }

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
    inline void SetSslSecurityProtocol(const SslSecurityProtocolValue& value) { m_sslSecurityProtocolHasBeenSet = true; m_sslSecurityProtocol = value; }

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
    inline void SetSslSecurityProtocol(SslSecurityProtocolValue&& value) { m_sslSecurityProtocolHasBeenSet = true; m_sslSecurityProtocol = std::move(value); }

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
    inline RedisSettings& WithSslSecurityProtocol(const SslSecurityProtocolValue& value) { SetSslSecurityProtocol(value); return *this;}

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
    inline RedisSettings& WithSslSecurityProtocol(SslSecurityProtocolValue&& value) { SetSslSecurityProtocol(std::move(value)); return *this;}


    /**
     * <p>The type of authentication to perform when connecting to a Redis target.
     * Options include <code>none</code>, <code>auth-token</code>, and
     * <code>auth-role</code>. The <code>auth-token</code> option requires an
     * <code>AuthPassword</code> value to be provided. The <code>auth-role</code>
     * option requires <code>AuthUserName</code> and <code>AuthPassword</code> values
     * to be provided.</p>
     */
    inline const RedisAuthTypeValue& GetAuthType() const{ return m_authType; }

    /**
     * <p>The type of authentication to perform when connecting to a Redis target.
     * Options include <code>none</code>, <code>auth-token</code>, and
     * <code>auth-role</code>. The <code>auth-token</code> option requires an
     * <code>AuthPassword</code> value to be provided. The <code>auth-role</code>
     * option requires <code>AuthUserName</code> and <code>AuthPassword</code> values
     * to be provided.</p>
     */
    inline bool AuthTypeHasBeenSet() const { return m_authTypeHasBeenSet; }

    /**
     * <p>The type of authentication to perform when connecting to a Redis target.
     * Options include <code>none</code>, <code>auth-token</code>, and
     * <code>auth-role</code>. The <code>auth-token</code> option requires an
     * <code>AuthPassword</code> value to be provided. The <code>auth-role</code>
     * option requires <code>AuthUserName</code> and <code>AuthPassword</code> values
     * to be provided.</p>
     */
    inline void SetAuthType(const RedisAuthTypeValue& value) { m_authTypeHasBeenSet = true; m_authType = value; }

    /**
     * <p>The type of authentication to perform when connecting to a Redis target.
     * Options include <code>none</code>, <code>auth-token</code>, and
     * <code>auth-role</code>. The <code>auth-token</code> option requires an
     * <code>AuthPassword</code> value to be provided. The <code>auth-role</code>
     * option requires <code>AuthUserName</code> and <code>AuthPassword</code> values
     * to be provided.</p>
     */
    inline void SetAuthType(RedisAuthTypeValue&& value) { m_authTypeHasBeenSet = true; m_authType = std::move(value); }

    /**
     * <p>The type of authentication to perform when connecting to a Redis target.
     * Options include <code>none</code>, <code>auth-token</code>, and
     * <code>auth-role</code>. The <code>auth-token</code> option requires an
     * <code>AuthPassword</code> value to be provided. The <code>auth-role</code>
     * option requires <code>AuthUserName</code> and <code>AuthPassword</code> values
     * to be provided.</p>
     */
    inline RedisSettings& WithAuthType(const RedisAuthTypeValue& value) { SetAuthType(value); return *this;}

    /**
     * <p>The type of authentication to perform when connecting to a Redis target.
     * Options include <code>none</code>, <code>auth-token</code>, and
     * <code>auth-role</code>. The <code>auth-token</code> option requires an
     * <code>AuthPassword</code> value to be provided. The <code>auth-role</code>
     * option requires <code>AuthUserName</code> and <code>AuthPassword</code> values
     * to be provided.</p>
     */
    inline RedisSettings& WithAuthType(RedisAuthTypeValue&& value) { SetAuthType(std::move(value)); return *this;}


    /**
     * <p>The user name provided with the <code>auth-role</code> option of the
     * <code>AuthType</code> setting for a Redis target endpoint.</p>
     */
    inline const Aws::String& GetAuthUserName() const{ return m_authUserName; }

    /**
     * <p>The user name provided with the <code>auth-role</code> option of the
     * <code>AuthType</code> setting for a Redis target endpoint.</p>
     */
    inline bool AuthUserNameHasBeenSet() const { return m_authUserNameHasBeenSet; }

    /**
     * <p>The user name provided with the <code>auth-role</code> option of the
     * <code>AuthType</code> setting for a Redis target endpoint.</p>
     */
    inline void SetAuthUserName(const Aws::String& value) { m_authUserNameHasBeenSet = true; m_authUserName = value; }

    /**
     * <p>The user name provided with the <code>auth-role</code> option of the
     * <code>AuthType</code> setting for a Redis target endpoint.</p>
     */
    inline void SetAuthUserName(Aws::String&& value) { m_authUserNameHasBeenSet = true; m_authUserName = std::move(value); }

    /**
     * <p>The user name provided with the <code>auth-role</code> option of the
     * <code>AuthType</code> setting for a Redis target endpoint.</p>
     */
    inline void SetAuthUserName(const char* value) { m_authUserNameHasBeenSet = true; m_authUserName.assign(value); }

    /**
     * <p>The user name provided with the <code>auth-role</code> option of the
     * <code>AuthType</code> setting for a Redis target endpoint.</p>
     */
    inline RedisSettings& WithAuthUserName(const Aws::String& value) { SetAuthUserName(value); return *this;}

    /**
     * <p>The user name provided with the <code>auth-role</code> option of the
     * <code>AuthType</code> setting for a Redis target endpoint.</p>
     */
    inline RedisSettings& WithAuthUserName(Aws::String&& value) { SetAuthUserName(std::move(value)); return *this;}

    /**
     * <p>The user name provided with the <code>auth-role</code> option of the
     * <code>AuthType</code> setting for a Redis target endpoint.</p>
     */
    inline RedisSettings& WithAuthUserName(const char* value) { SetAuthUserName(value); return *this;}


    /**
     * <p>The password provided with the <code>auth-role</code> and
     * <code>auth-token</code> options of the <code>AuthType</code> setting for a Redis
     * target endpoint.</p>
     */
    inline const Aws::String& GetAuthPassword() const{ return m_authPassword; }

    /**
     * <p>The password provided with the <code>auth-role</code> and
     * <code>auth-token</code> options of the <code>AuthType</code> setting for a Redis
     * target endpoint.</p>
     */
    inline bool AuthPasswordHasBeenSet() const { return m_authPasswordHasBeenSet; }

    /**
     * <p>The password provided with the <code>auth-role</code> and
     * <code>auth-token</code> options of the <code>AuthType</code> setting for a Redis
     * target endpoint.</p>
     */
    inline void SetAuthPassword(const Aws::String& value) { m_authPasswordHasBeenSet = true; m_authPassword = value; }

    /**
     * <p>The password provided with the <code>auth-role</code> and
     * <code>auth-token</code> options of the <code>AuthType</code> setting for a Redis
     * target endpoint.</p>
     */
    inline void SetAuthPassword(Aws::String&& value) { m_authPasswordHasBeenSet = true; m_authPassword = std::move(value); }

    /**
     * <p>The password provided with the <code>auth-role</code> and
     * <code>auth-token</code> options of the <code>AuthType</code> setting for a Redis
     * target endpoint.</p>
     */
    inline void SetAuthPassword(const char* value) { m_authPasswordHasBeenSet = true; m_authPassword.assign(value); }

    /**
     * <p>The password provided with the <code>auth-role</code> and
     * <code>auth-token</code> options of the <code>AuthType</code> setting for a Redis
     * target endpoint.</p>
     */
    inline RedisSettings& WithAuthPassword(const Aws::String& value) { SetAuthPassword(value); return *this;}

    /**
     * <p>The password provided with the <code>auth-role</code> and
     * <code>auth-token</code> options of the <code>AuthType</code> setting for a Redis
     * target endpoint.</p>
     */
    inline RedisSettings& WithAuthPassword(Aws::String&& value) { SetAuthPassword(std::move(value)); return *this;}

    /**
     * <p>The password provided with the <code>auth-role</code> and
     * <code>auth-token</code> options of the <code>AuthType</code> setting for a Redis
     * target endpoint.</p>
     */
    inline RedisSettings& WithAuthPassword(const char* value) { SetAuthPassword(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) for the certificate authority (CA) that DMS
     * uses to connect to your Redis target endpoint.</p>
     */
    inline const Aws::String& GetSslCaCertificateArn() const{ return m_sslCaCertificateArn; }

    /**
     * <p>The Amazon Resource Name (ARN) for the certificate authority (CA) that DMS
     * uses to connect to your Redis target endpoint.</p>
     */
    inline bool SslCaCertificateArnHasBeenSet() const { return m_sslCaCertificateArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) for the certificate authority (CA) that DMS
     * uses to connect to your Redis target endpoint.</p>
     */
    inline void SetSslCaCertificateArn(const Aws::String& value) { m_sslCaCertificateArnHasBeenSet = true; m_sslCaCertificateArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) for the certificate authority (CA) that DMS
     * uses to connect to your Redis target endpoint.</p>
     */
    inline void SetSslCaCertificateArn(Aws::String&& value) { m_sslCaCertificateArnHasBeenSet = true; m_sslCaCertificateArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) for the certificate authority (CA) that DMS
     * uses to connect to your Redis target endpoint.</p>
     */
    inline void SetSslCaCertificateArn(const char* value) { m_sslCaCertificateArnHasBeenSet = true; m_sslCaCertificateArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) for the certificate authority (CA) that DMS
     * uses to connect to your Redis target endpoint.</p>
     */
    inline RedisSettings& WithSslCaCertificateArn(const Aws::String& value) { SetSslCaCertificateArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) for the certificate authority (CA) that DMS
     * uses to connect to your Redis target endpoint.</p>
     */
    inline RedisSettings& WithSslCaCertificateArn(Aws::String&& value) { SetSslCaCertificateArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) for the certificate authority (CA) that DMS
     * uses to connect to your Redis target endpoint.</p>
     */
    inline RedisSettings& WithSslCaCertificateArn(const char* value) { SetSslCaCertificateArn(value); return *this;}

  private:

    Aws::String m_serverName;
    bool m_serverNameHasBeenSet = false;

    int m_port;
    bool m_portHasBeenSet = false;

    SslSecurityProtocolValue m_sslSecurityProtocol;
    bool m_sslSecurityProtocolHasBeenSet = false;

    RedisAuthTypeValue m_authType;
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
