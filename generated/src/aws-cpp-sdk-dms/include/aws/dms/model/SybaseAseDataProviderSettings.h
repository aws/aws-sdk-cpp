/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/dms/DatabaseMigrationService_EXPORTS.h>
#include <aws/dms/model/DmsSslModeValue.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace DatabaseMigrationService {
namespace Model {

/**
 * <p>Provides information that defines an SAP ASE data provider.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/dms-2016-01-01/SybaseAseDataProviderSettings">AWS
 * API Reference</a></p>
 */
class SybaseAseDataProviderSettings {
 public:
  AWS_DATABASEMIGRATIONSERVICE_API SybaseAseDataProviderSettings() = default;
  AWS_DATABASEMIGRATIONSERVICE_API SybaseAseDataProviderSettings(Aws::Utils::Json::JsonView jsonValue);
  AWS_DATABASEMIGRATIONSERVICE_API SybaseAseDataProviderSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_DATABASEMIGRATIONSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The name of the SAP ASE server.</p>
   */
  inline const Aws::String& GetServerName() const { return m_serverName; }
  inline bool ServerNameHasBeenSet() const { return m_serverNameHasBeenSet; }
  template <typename ServerNameT = Aws::String>
  void SetServerName(ServerNameT&& value) {
    m_serverNameHasBeenSet = true;
    m_serverName = std::forward<ServerNameT>(value);
  }
  template <typename ServerNameT = Aws::String>
  SybaseAseDataProviderSettings& WithServerName(ServerNameT&& value) {
    SetServerName(std::forward<ServerNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The port value for the SAP ASE data provider.</p>
   */
  inline int GetPort() const { return m_port; }
  inline bool PortHasBeenSet() const { return m_portHasBeenSet; }
  inline void SetPort(int value) {
    m_portHasBeenSet = true;
    m_port = value;
  }
  inline SybaseAseDataProviderSettings& WithPort(int value) {
    SetPort(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The database name on the SAP ASE data provider.</p>
   */
  inline const Aws::String& GetDatabaseName() const { return m_databaseName; }
  inline bool DatabaseNameHasBeenSet() const { return m_databaseNameHasBeenSet; }
  template <typename DatabaseNameT = Aws::String>
  void SetDatabaseName(DatabaseNameT&& value) {
    m_databaseNameHasBeenSet = true;
    m_databaseName = std::forward<DatabaseNameT>(value);
  }
  template <typename DatabaseNameT = Aws::String>
  SybaseAseDataProviderSettings& WithDatabaseName(DatabaseNameT&& value) {
    SetDatabaseName(std::forward<DatabaseNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The SSL mode used to connect to the SAP ASE data provider. The default value
   * is <code>none</code>.</p>
   */
  inline DmsSslModeValue GetSslMode() const { return m_sslMode; }
  inline bool SslModeHasBeenSet() const { return m_sslModeHasBeenSet; }
  inline void SetSslMode(DmsSslModeValue value) {
    m_sslModeHasBeenSet = true;
    m_sslMode = value;
  }
  inline SybaseAseDataProviderSettings& WithSslMode(DmsSslModeValue value) {
    SetSslMode(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies whether to encrypt the password when connecting to the Sybase ASE
   * database. When set to true, the connection password is encrypted during
   * transmission. Default is true.</p>
   */
  inline bool GetEncryptPassword() const { return m_encryptPassword; }
  inline bool EncryptPasswordHasBeenSet() const { return m_encryptPasswordHasBeenSet; }
  inline void SetEncryptPassword(bool value) {
    m_encryptPasswordHasBeenSet = true;
    m_encryptPassword = value;
  }
  inline SybaseAseDataProviderSettings& WithEncryptPassword(bool value) {
    SetEncryptPassword(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the certificate used for SSL
   * connection.</p>
   */
  inline const Aws::String& GetCertificateArn() const { return m_certificateArn; }
  inline bool CertificateArnHasBeenSet() const { return m_certificateArnHasBeenSet; }
  template <typename CertificateArnT = Aws::String>
  void SetCertificateArn(CertificateArnT&& value) {
    m_certificateArnHasBeenSet = true;
    m_certificateArn = std::forward<CertificateArnT>(value);
  }
  template <typename CertificateArnT = Aws::String>
  SybaseAseDataProviderSettings& WithCertificateArn(CertificateArnT&& value) {
    SetCertificateArn(std::forward<CertificateArnT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_serverName;
  bool m_serverNameHasBeenSet = false;

  int m_port{0};
  bool m_portHasBeenSet = false;

  Aws::String m_databaseName;
  bool m_databaseNameHasBeenSet = false;

  DmsSslModeValue m_sslMode{DmsSslModeValue::NOT_SET};
  bool m_sslModeHasBeenSet = false;

  bool m_encryptPassword{false};
  bool m_encryptPasswordHasBeenSet = false;

  Aws::String m_certificateArn;
  bool m_certificateArnHasBeenSet = false;
};

}  // namespace Model
}  // namespace DatabaseMigrationService
}  // namespace Aws
