﻿/**
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
   * <p>Provides information that defines a MySQL data provider.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/dms-2016-01-01/MySqlDataProviderSettings">AWS
   * API Reference</a></p>
   */
  class MySqlDataProviderSettings
  {
  public:
    AWS_DATABASEMIGRATIONSERVICE_API MySqlDataProviderSettings() = default;
    AWS_DATABASEMIGRATIONSERVICE_API MySqlDataProviderSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATABASEMIGRATIONSERVICE_API MySqlDataProviderSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATABASEMIGRATIONSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the MySQL server.</p>
     */
    inline const Aws::String& GetServerName() const { return m_serverName; }
    inline bool ServerNameHasBeenSet() const { return m_serverNameHasBeenSet; }
    template<typename ServerNameT = Aws::String>
    void SetServerName(ServerNameT&& value) { m_serverNameHasBeenSet = true; m_serverName = std::forward<ServerNameT>(value); }
    template<typename ServerNameT = Aws::String>
    MySqlDataProviderSettings& WithServerName(ServerNameT&& value) { SetServerName(std::forward<ServerNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The port value for the MySQL data provider.</p>
     */
    inline int GetPort() const { return m_port; }
    inline bool PortHasBeenSet() const { return m_portHasBeenSet; }
    inline void SetPort(int value) { m_portHasBeenSet = true; m_port = value; }
    inline MySqlDataProviderSettings& WithPort(int value) { SetPort(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The SSL mode used to connect to the MySQL data provider. The default value is
     * <code>none</code>.</p>
     */
    inline DmsSslModeValue GetSslMode() const { return m_sslMode; }
    inline bool SslModeHasBeenSet() const { return m_sslModeHasBeenSet; }
    inline void SetSslMode(DmsSslModeValue value) { m_sslModeHasBeenSet = true; m_sslMode = value; }
    inline MySqlDataProviderSettings& WithSslMode(DmsSslModeValue value) { SetSslMode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the certificate used for SSL
     * connection.</p>
     */
    inline const Aws::String& GetCertificateArn() const { return m_certificateArn; }
    inline bool CertificateArnHasBeenSet() const { return m_certificateArnHasBeenSet; }
    template<typename CertificateArnT = Aws::String>
    void SetCertificateArn(CertificateArnT&& value) { m_certificateArnHasBeenSet = true; m_certificateArn = std::forward<CertificateArnT>(value); }
    template<typename CertificateArnT = Aws::String>
    MySqlDataProviderSettings& WithCertificateArn(CertificateArnT&& value) { SetCertificateArn(std::forward<CertificateArnT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_serverName;
    bool m_serverNameHasBeenSet = false;

    int m_port{0};
    bool m_portHasBeenSet = false;

    DmsSslModeValue m_sslMode{DmsSslModeValue::NOT_SET};
    bool m_sslModeHasBeenSet = false;

    Aws::String m_certificateArn;
    bool m_certificateArnHasBeenSet = false;
  };

} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws
