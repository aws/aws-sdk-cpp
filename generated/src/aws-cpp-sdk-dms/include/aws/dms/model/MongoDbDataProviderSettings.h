/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dms/DatabaseMigrationService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/dms/model/DmsSslModeValue.h>
#include <aws/dms/model/AuthTypeValue.h>
#include <aws/dms/model/AuthMechanismValue.h>
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
   * <p>Provides information that defines a MongoDB data provider.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/dms-2016-01-01/MongoDbDataProviderSettings">AWS
   * API Reference</a></p>
   */
  class MongoDbDataProviderSettings
  {
  public:
    AWS_DATABASEMIGRATIONSERVICE_API MongoDbDataProviderSettings();
    AWS_DATABASEMIGRATIONSERVICE_API MongoDbDataProviderSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATABASEMIGRATIONSERVICE_API MongoDbDataProviderSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATABASEMIGRATIONSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the MongoDB server.</p>
     */
    inline const Aws::String& GetServerName() const{ return m_serverName; }
    inline bool ServerNameHasBeenSet() const { return m_serverNameHasBeenSet; }
    inline void SetServerName(const Aws::String& value) { m_serverNameHasBeenSet = true; m_serverName = value; }
    inline void SetServerName(Aws::String&& value) { m_serverNameHasBeenSet = true; m_serverName = std::move(value); }
    inline void SetServerName(const char* value) { m_serverNameHasBeenSet = true; m_serverName.assign(value); }
    inline MongoDbDataProviderSettings& WithServerName(const Aws::String& value) { SetServerName(value); return *this;}
    inline MongoDbDataProviderSettings& WithServerName(Aws::String&& value) { SetServerName(std::move(value)); return *this;}
    inline MongoDbDataProviderSettings& WithServerName(const char* value) { SetServerName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The port value for the MongoDB data provider.</p>
     */
    inline int GetPort() const{ return m_port; }
    inline bool PortHasBeenSet() const { return m_portHasBeenSet; }
    inline void SetPort(int value) { m_portHasBeenSet = true; m_port = value; }
    inline MongoDbDataProviderSettings& WithPort(int value) { SetPort(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The database name on the MongoDB data provider.</p>
     */
    inline const Aws::String& GetDatabaseName() const{ return m_databaseName; }
    inline bool DatabaseNameHasBeenSet() const { return m_databaseNameHasBeenSet; }
    inline void SetDatabaseName(const Aws::String& value) { m_databaseNameHasBeenSet = true; m_databaseName = value; }
    inline void SetDatabaseName(Aws::String&& value) { m_databaseNameHasBeenSet = true; m_databaseName = std::move(value); }
    inline void SetDatabaseName(const char* value) { m_databaseNameHasBeenSet = true; m_databaseName.assign(value); }
    inline MongoDbDataProviderSettings& WithDatabaseName(const Aws::String& value) { SetDatabaseName(value); return *this;}
    inline MongoDbDataProviderSettings& WithDatabaseName(Aws::String&& value) { SetDatabaseName(std::move(value)); return *this;}
    inline MongoDbDataProviderSettings& WithDatabaseName(const char* value) { SetDatabaseName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The SSL mode used to connect to the MongoDB data provider. The default value
     * is <code>none</code>.</p>
     */
    inline const DmsSslModeValue& GetSslMode() const{ return m_sslMode; }
    inline bool SslModeHasBeenSet() const { return m_sslModeHasBeenSet; }
    inline void SetSslMode(const DmsSslModeValue& value) { m_sslModeHasBeenSet = true; m_sslMode = value; }
    inline void SetSslMode(DmsSslModeValue&& value) { m_sslModeHasBeenSet = true; m_sslMode = std::move(value); }
    inline MongoDbDataProviderSettings& WithSslMode(const DmsSslModeValue& value) { SetSslMode(value); return *this;}
    inline MongoDbDataProviderSettings& WithSslMode(DmsSslModeValue&& value) { SetSslMode(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the certificate used for SSL
     * connection.</p>
     */
    inline const Aws::String& GetCertificateArn() const{ return m_certificateArn; }
    inline bool CertificateArnHasBeenSet() const { return m_certificateArnHasBeenSet; }
    inline void SetCertificateArn(const Aws::String& value) { m_certificateArnHasBeenSet = true; m_certificateArn = value; }
    inline void SetCertificateArn(Aws::String&& value) { m_certificateArnHasBeenSet = true; m_certificateArn = std::move(value); }
    inline void SetCertificateArn(const char* value) { m_certificateArnHasBeenSet = true; m_certificateArn.assign(value); }
    inline MongoDbDataProviderSettings& WithCertificateArn(const Aws::String& value) { SetCertificateArn(value); return *this;}
    inline MongoDbDataProviderSettings& WithCertificateArn(Aws::String&& value) { SetCertificateArn(std::move(value)); return *this;}
    inline MongoDbDataProviderSettings& WithCertificateArn(const char* value) { SetCertificateArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The authentication type for the database connection. Valid values are
     * PASSWORD or NO.</p>
     */
    inline const AuthTypeValue& GetAuthType() const{ return m_authType; }
    inline bool AuthTypeHasBeenSet() const { return m_authTypeHasBeenSet; }
    inline void SetAuthType(const AuthTypeValue& value) { m_authTypeHasBeenSet = true; m_authType = value; }
    inline void SetAuthType(AuthTypeValue&& value) { m_authTypeHasBeenSet = true; m_authType = std::move(value); }
    inline MongoDbDataProviderSettings& WithAuthType(const AuthTypeValue& value) { SetAuthType(value); return *this;}
    inline MongoDbDataProviderSettings& WithAuthType(AuthTypeValue&& value) { SetAuthType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The MongoDB database name. This setting isn't used when
     * <code>AuthType</code> is set to <code>"no"</code>. </p> <p>The default is
     * <code>"admin"</code>.</p>
     */
    inline const Aws::String& GetAuthSource() const{ return m_authSource; }
    inline bool AuthSourceHasBeenSet() const { return m_authSourceHasBeenSet; }
    inline void SetAuthSource(const Aws::String& value) { m_authSourceHasBeenSet = true; m_authSource = value; }
    inline void SetAuthSource(Aws::String&& value) { m_authSourceHasBeenSet = true; m_authSource = std::move(value); }
    inline void SetAuthSource(const char* value) { m_authSourceHasBeenSet = true; m_authSource.assign(value); }
    inline MongoDbDataProviderSettings& WithAuthSource(const Aws::String& value) { SetAuthSource(value); return *this;}
    inline MongoDbDataProviderSettings& WithAuthSource(Aws::String&& value) { SetAuthSource(std::move(value)); return *this;}
    inline MongoDbDataProviderSettings& WithAuthSource(const char* value) { SetAuthSource(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The authentication method for connecting to the data provider. Valid values
     * are DEFAULT, MONGODB_CR, or SCRAM_SHA_1.</p>
     */
    inline const AuthMechanismValue& GetAuthMechanism() const{ return m_authMechanism; }
    inline bool AuthMechanismHasBeenSet() const { return m_authMechanismHasBeenSet; }
    inline void SetAuthMechanism(const AuthMechanismValue& value) { m_authMechanismHasBeenSet = true; m_authMechanism = value; }
    inline void SetAuthMechanism(AuthMechanismValue&& value) { m_authMechanismHasBeenSet = true; m_authMechanism = std::move(value); }
    inline MongoDbDataProviderSettings& WithAuthMechanism(const AuthMechanismValue& value) { SetAuthMechanism(value); return *this;}
    inline MongoDbDataProviderSettings& WithAuthMechanism(AuthMechanismValue&& value) { SetAuthMechanism(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_serverName;
    bool m_serverNameHasBeenSet = false;

    int m_port;
    bool m_portHasBeenSet = false;

    Aws::String m_databaseName;
    bool m_databaseNameHasBeenSet = false;

    DmsSslModeValue m_sslMode;
    bool m_sslModeHasBeenSet = false;

    Aws::String m_certificateArn;
    bool m_certificateArnHasBeenSet = false;

    AuthTypeValue m_authType;
    bool m_authTypeHasBeenSet = false;

    Aws::String m_authSource;
    bool m_authSourceHasBeenSet = false;

    AuthMechanismValue m_authMechanism;
    bool m_authMechanismHasBeenSet = false;
  };

} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws
