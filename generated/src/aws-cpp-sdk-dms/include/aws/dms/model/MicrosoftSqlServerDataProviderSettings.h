/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dms/DatabaseMigrationService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/dms/model/DmsSslModeValue.h>
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
   * <p>Provides information that defines a Microsoft SQL Server data
   * provider.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/dms-2016-01-01/MicrosoftSqlServerDataProviderSettings">AWS
   * API Reference</a></p>
   */
  class MicrosoftSqlServerDataProviderSettings
  {
  public:
    AWS_DATABASEMIGRATIONSERVICE_API MicrosoftSqlServerDataProviderSettings();
    AWS_DATABASEMIGRATIONSERVICE_API MicrosoftSqlServerDataProviderSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATABASEMIGRATIONSERVICE_API MicrosoftSqlServerDataProviderSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATABASEMIGRATIONSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the Microsoft SQL Server server.</p>
     */
    inline const Aws::String& GetServerName() const{ return m_serverName; }

    /**
     * <p>The name of the Microsoft SQL Server server.</p>
     */
    inline bool ServerNameHasBeenSet() const { return m_serverNameHasBeenSet; }

    /**
     * <p>The name of the Microsoft SQL Server server.</p>
     */
    inline void SetServerName(const Aws::String& value) { m_serverNameHasBeenSet = true; m_serverName = value; }

    /**
     * <p>The name of the Microsoft SQL Server server.</p>
     */
    inline void SetServerName(Aws::String&& value) { m_serverNameHasBeenSet = true; m_serverName = std::move(value); }

    /**
     * <p>The name of the Microsoft SQL Server server.</p>
     */
    inline void SetServerName(const char* value) { m_serverNameHasBeenSet = true; m_serverName.assign(value); }

    /**
     * <p>The name of the Microsoft SQL Server server.</p>
     */
    inline MicrosoftSqlServerDataProviderSettings& WithServerName(const Aws::String& value) { SetServerName(value); return *this;}

    /**
     * <p>The name of the Microsoft SQL Server server.</p>
     */
    inline MicrosoftSqlServerDataProviderSettings& WithServerName(Aws::String&& value) { SetServerName(std::move(value)); return *this;}

    /**
     * <p>The name of the Microsoft SQL Server server.</p>
     */
    inline MicrosoftSqlServerDataProviderSettings& WithServerName(const char* value) { SetServerName(value); return *this;}


    /**
     * <p>The port value for the Microsoft SQL Server data provider.</p>
     */
    inline int GetPort() const{ return m_port; }

    /**
     * <p>The port value for the Microsoft SQL Server data provider.</p>
     */
    inline bool PortHasBeenSet() const { return m_portHasBeenSet; }

    /**
     * <p>The port value for the Microsoft SQL Server data provider.</p>
     */
    inline void SetPort(int value) { m_portHasBeenSet = true; m_port = value; }

    /**
     * <p>The port value for the Microsoft SQL Server data provider.</p>
     */
    inline MicrosoftSqlServerDataProviderSettings& WithPort(int value) { SetPort(value); return *this;}


    /**
     * <p>The database name on the Microsoft SQL Server data provider.</p>
     */
    inline const Aws::String& GetDatabaseName() const{ return m_databaseName; }

    /**
     * <p>The database name on the Microsoft SQL Server data provider.</p>
     */
    inline bool DatabaseNameHasBeenSet() const { return m_databaseNameHasBeenSet; }

    /**
     * <p>The database name on the Microsoft SQL Server data provider.</p>
     */
    inline void SetDatabaseName(const Aws::String& value) { m_databaseNameHasBeenSet = true; m_databaseName = value; }

    /**
     * <p>The database name on the Microsoft SQL Server data provider.</p>
     */
    inline void SetDatabaseName(Aws::String&& value) { m_databaseNameHasBeenSet = true; m_databaseName = std::move(value); }

    /**
     * <p>The database name on the Microsoft SQL Server data provider.</p>
     */
    inline void SetDatabaseName(const char* value) { m_databaseNameHasBeenSet = true; m_databaseName.assign(value); }

    /**
     * <p>The database name on the Microsoft SQL Server data provider.</p>
     */
    inline MicrosoftSqlServerDataProviderSettings& WithDatabaseName(const Aws::String& value) { SetDatabaseName(value); return *this;}

    /**
     * <p>The database name on the Microsoft SQL Server data provider.</p>
     */
    inline MicrosoftSqlServerDataProviderSettings& WithDatabaseName(Aws::String&& value) { SetDatabaseName(std::move(value)); return *this;}

    /**
     * <p>The database name on the Microsoft SQL Server data provider.</p>
     */
    inline MicrosoftSqlServerDataProviderSettings& WithDatabaseName(const char* value) { SetDatabaseName(value); return *this;}


    /**
     * <p>The SSL mode used to connect to the Microsoft SQL Server data provider. The
     * default value is <code>none</code>.</p>
     */
    inline const DmsSslModeValue& GetSslMode() const{ return m_sslMode; }

    /**
     * <p>The SSL mode used to connect to the Microsoft SQL Server data provider. The
     * default value is <code>none</code>.</p>
     */
    inline bool SslModeHasBeenSet() const { return m_sslModeHasBeenSet; }

    /**
     * <p>The SSL mode used to connect to the Microsoft SQL Server data provider. The
     * default value is <code>none</code>.</p>
     */
    inline void SetSslMode(const DmsSslModeValue& value) { m_sslModeHasBeenSet = true; m_sslMode = value; }

    /**
     * <p>The SSL mode used to connect to the Microsoft SQL Server data provider. The
     * default value is <code>none</code>.</p>
     */
    inline void SetSslMode(DmsSslModeValue&& value) { m_sslModeHasBeenSet = true; m_sslMode = std::move(value); }

    /**
     * <p>The SSL mode used to connect to the Microsoft SQL Server data provider. The
     * default value is <code>none</code>.</p>
     */
    inline MicrosoftSqlServerDataProviderSettings& WithSslMode(const DmsSslModeValue& value) { SetSslMode(value); return *this;}

    /**
     * <p>The SSL mode used to connect to the Microsoft SQL Server data provider. The
     * default value is <code>none</code>.</p>
     */
    inline MicrosoftSqlServerDataProviderSettings& WithSslMode(DmsSslModeValue&& value) { SetSslMode(std::move(value)); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the certificate used for SSL
     * connection.</p>
     */
    inline const Aws::String& GetCertificateArn() const{ return m_certificateArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the certificate used for SSL
     * connection.</p>
     */
    inline bool CertificateArnHasBeenSet() const { return m_certificateArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the certificate used for SSL
     * connection.</p>
     */
    inline void SetCertificateArn(const Aws::String& value) { m_certificateArnHasBeenSet = true; m_certificateArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the certificate used for SSL
     * connection.</p>
     */
    inline void SetCertificateArn(Aws::String&& value) { m_certificateArnHasBeenSet = true; m_certificateArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the certificate used for SSL
     * connection.</p>
     */
    inline void SetCertificateArn(const char* value) { m_certificateArnHasBeenSet = true; m_certificateArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the certificate used for SSL
     * connection.</p>
     */
    inline MicrosoftSqlServerDataProviderSettings& WithCertificateArn(const Aws::String& value) { SetCertificateArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the certificate used for SSL
     * connection.</p>
     */
    inline MicrosoftSqlServerDataProviderSettings& WithCertificateArn(Aws::String&& value) { SetCertificateArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the certificate used for SSL
     * connection.</p>
     */
    inline MicrosoftSqlServerDataProviderSettings& WithCertificateArn(const char* value) { SetCertificateArn(value); return *this;}

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
  };

} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws
