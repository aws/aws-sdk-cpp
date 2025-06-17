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
   * <p>Provides information that defines an Oracle data provider.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/dms-2016-01-01/OracleDataProviderSettings">AWS
   * API Reference</a></p>
   */
  class OracleDataProviderSettings
  {
  public:
    AWS_DATABASEMIGRATIONSERVICE_API OracleDataProviderSettings() = default;
    AWS_DATABASEMIGRATIONSERVICE_API OracleDataProviderSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATABASEMIGRATIONSERVICE_API OracleDataProviderSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATABASEMIGRATIONSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the Oracle server.</p>
     */
    inline const Aws::String& GetServerName() const { return m_serverName; }
    inline bool ServerNameHasBeenSet() const { return m_serverNameHasBeenSet; }
    template<typename ServerNameT = Aws::String>
    void SetServerName(ServerNameT&& value) { m_serverNameHasBeenSet = true; m_serverName = std::forward<ServerNameT>(value); }
    template<typename ServerNameT = Aws::String>
    OracleDataProviderSettings& WithServerName(ServerNameT&& value) { SetServerName(std::forward<ServerNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The port value for the Oracle data provider.</p>
     */
    inline int GetPort() const { return m_port; }
    inline bool PortHasBeenSet() const { return m_portHasBeenSet; }
    inline void SetPort(int value) { m_portHasBeenSet = true; m_port = value; }
    inline OracleDataProviderSettings& WithPort(int value) { SetPort(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The database name on the Oracle data provider.</p>
     */
    inline const Aws::String& GetDatabaseName() const { return m_databaseName; }
    inline bool DatabaseNameHasBeenSet() const { return m_databaseNameHasBeenSet; }
    template<typename DatabaseNameT = Aws::String>
    void SetDatabaseName(DatabaseNameT&& value) { m_databaseNameHasBeenSet = true; m_databaseName = std::forward<DatabaseNameT>(value); }
    template<typename DatabaseNameT = Aws::String>
    OracleDataProviderSettings& WithDatabaseName(DatabaseNameT&& value) { SetDatabaseName(std::forward<DatabaseNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The SSL mode used to connect to the Oracle data provider. The default value
     * is <code>none</code>.</p>
     */
    inline DmsSslModeValue GetSslMode() const { return m_sslMode; }
    inline bool SslModeHasBeenSet() const { return m_sslModeHasBeenSet; }
    inline void SetSslMode(DmsSslModeValue value) { m_sslModeHasBeenSet = true; m_sslMode = value; }
    inline OracleDataProviderSettings& WithSslMode(DmsSslModeValue value) { SetSslMode(value); return *this;}
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
    OracleDataProviderSettings& WithCertificateArn(CertificateArnT&& value) { SetCertificateArn(std::forward<CertificateArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The address of your Oracle Automatic Storage Management (ASM) server. You can
     * set this value from the <code>asm_server</code> value. You set
     * <code>asm_server</code> as part of the extra connection attribute string to
     * access an Oracle server with Binary Reader that uses ASM. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/dms/latest/userguide/CHAP_Source.Oracle.html#dms/latest/userguide/CHAP_Source.Oracle.html#CHAP_Source.Oracle.CDC.Configuration">Configuration
     * for change data capture (CDC) on an Oracle source database</a>.</p>
     */
    inline const Aws::String& GetAsmServer() const { return m_asmServer; }
    inline bool AsmServerHasBeenSet() const { return m_asmServerHasBeenSet; }
    template<typename AsmServerT = Aws::String>
    void SetAsmServer(AsmServerT&& value) { m_asmServerHasBeenSet = true; m_asmServer = std::forward<AsmServerT>(value); }
    template<typename AsmServerT = Aws::String>
    OracleDataProviderSettings& WithAsmServer(AsmServerT&& value) { SetAsmServer(std::forward<AsmServerT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the secret in Secrets Manager that contains the Oracle ASM
     * connection details.</p> <p>Required only if your data provider uses the Oracle
     * ASM server.</p>
     */
    inline const Aws::String& GetSecretsManagerOracleAsmSecretId() const { return m_secretsManagerOracleAsmSecretId; }
    inline bool SecretsManagerOracleAsmSecretIdHasBeenSet() const { return m_secretsManagerOracleAsmSecretIdHasBeenSet; }
    template<typename SecretsManagerOracleAsmSecretIdT = Aws::String>
    void SetSecretsManagerOracleAsmSecretId(SecretsManagerOracleAsmSecretIdT&& value) { m_secretsManagerOracleAsmSecretIdHasBeenSet = true; m_secretsManagerOracleAsmSecretId = std::forward<SecretsManagerOracleAsmSecretIdT>(value); }
    template<typename SecretsManagerOracleAsmSecretIdT = Aws::String>
    OracleDataProviderSettings& WithSecretsManagerOracleAsmSecretId(SecretsManagerOracleAsmSecretIdT&& value) { SetSecretsManagerOracleAsmSecretId(std::forward<SecretsManagerOracleAsmSecretIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the IAM role that provides access to the secret in Secrets Manager
     * that contains the Oracle ASM connection details.</p>
     */
    inline const Aws::String& GetSecretsManagerOracleAsmAccessRoleArn() const { return m_secretsManagerOracleAsmAccessRoleArn; }
    inline bool SecretsManagerOracleAsmAccessRoleArnHasBeenSet() const { return m_secretsManagerOracleAsmAccessRoleArnHasBeenSet; }
    template<typename SecretsManagerOracleAsmAccessRoleArnT = Aws::String>
    void SetSecretsManagerOracleAsmAccessRoleArn(SecretsManagerOracleAsmAccessRoleArnT&& value) { m_secretsManagerOracleAsmAccessRoleArnHasBeenSet = true; m_secretsManagerOracleAsmAccessRoleArn = std::forward<SecretsManagerOracleAsmAccessRoleArnT>(value); }
    template<typename SecretsManagerOracleAsmAccessRoleArnT = Aws::String>
    OracleDataProviderSettings& WithSecretsManagerOracleAsmAccessRoleArn(SecretsManagerOracleAsmAccessRoleArnT&& value) { SetSecretsManagerOracleAsmAccessRoleArn(std::forward<SecretsManagerOracleAsmAccessRoleArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the secret in Secrets Manager that contains the transparent
     * data encryption (TDE) password. DMS requires this password to access Oracle redo
     * logs encrypted by TDE using Binary Reader.</p>
     */
    inline const Aws::String& GetSecretsManagerSecurityDbEncryptionSecretId() const { return m_secretsManagerSecurityDbEncryptionSecretId; }
    inline bool SecretsManagerSecurityDbEncryptionSecretIdHasBeenSet() const { return m_secretsManagerSecurityDbEncryptionSecretIdHasBeenSet; }
    template<typename SecretsManagerSecurityDbEncryptionSecretIdT = Aws::String>
    void SetSecretsManagerSecurityDbEncryptionSecretId(SecretsManagerSecurityDbEncryptionSecretIdT&& value) { m_secretsManagerSecurityDbEncryptionSecretIdHasBeenSet = true; m_secretsManagerSecurityDbEncryptionSecretId = std::forward<SecretsManagerSecurityDbEncryptionSecretIdT>(value); }
    template<typename SecretsManagerSecurityDbEncryptionSecretIdT = Aws::String>
    OracleDataProviderSettings& WithSecretsManagerSecurityDbEncryptionSecretId(SecretsManagerSecurityDbEncryptionSecretIdT&& value) { SetSecretsManagerSecurityDbEncryptionSecretId(std::forward<SecretsManagerSecurityDbEncryptionSecretIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the IAM role that provides access to the secret in Secrets Manager
     * that contains the TDE password.</p>
     */
    inline const Aws::String& GetSecretsManagerSecurityDbEncryptionAccessRoleArn() const { return m_secretsManagerSecurityDbEncryptionAccessRoleArn; }
    inline bool SecretsManagerSecurityDbEncryptionAccessRoleArnHasBeenSet() const { return m_secretsManagerSecurityDbEncryptionAccessRoleArnHasBeenSet; }
    template<typename SecretsManagerSecurityDbEncryptionAccessRoleArnT = Aws::String>
    void SetSecretsManagerSecurityDbEncryptionAccessRoleArn(SecretsManagerSecurityDbEncryptionAccessRoleArnT&& value) { m_secretsManagerSecurityDbEncryptionAccessRoleArnHasBeenSet = true; m_secretsManagerSecurityDbEncryptionAccessRoleArn = std::forward<SecretsManagerSecurityDbEncryptionAccessRoleArnT>(value); }
    template<typename SecretsManagerSecurityDbEncryptionAccessRoleArnT = Aws::String>
    OracleDataProviderSettings& WithSecretsManagerSecurityDbEncryptionAccessRoleArn(SecretsManagerSecurityDbEncryptionAccessRoleArnT&& value) { SetSecretsManagerSecurityDbEncryptionAccessRoleArn(std::forward<SecretsManagerSecurityDbEncryptionAccessRoleArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The path for the Amazon S3 bucket that the application uses for accessing the
     * user-defined schema.</p>
     */
    inline const Aws::String& GetS3Path() const { return m_s3Path; }
    inline bool S3PathHasBeenSet() const { return m_s3PathHasBeenSet; }
    template<typename S3PathT = Aws::String>
    void SetS3Path(S3PathT&& value) { m_s3PathHasBeenSet = true; m_s3Path = std::forward<S3PathT>(value); }
    template<typename S3PathT = Aws::String>
    OracleDataProviderSettings& WithS3Path(S3PathT&& value) { SetS3Path(std::forward<S3PathT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN for the role the application uses to access its Amazon S3 bucket.</p>
     */
    inline const Aws::String& GetS3AccessRoleArn() const { return m_s3AccessRoleArn; }
    inline bool S3AccessRoleArnHasBeenSet() const { return m_s3AccessRoleArnHasBeenSet; }
    template<typename S3AccessRoleArnT = Aws::String>
    void SetS3AccessRoleArn(S3AccessRoleArnT&& value) { m_s3AccessRoleArnHasBeenSet = true; m_s3AccessRoleArn = std::forward<S3AccessRoleArnT>(value); }
    template<typename S3AccessRoleArnT = Aws::String>
    OracleDataProviderSettings& WithS3AccessRoleArn(S3AccessRoleArnT&& value) { SetS3AccessRoleArn(std::forward<S3AccessRoleArnT>(value)); return *this;}
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

    Aws::String m_certificateArn;
    bool m_certificateArnHasBeenSet = false;

    Aws::String m_asmServer;
    bool m_asmServerHasBeenSet = false;

    Aws::String m_secretsManagerOracleAsmSecretId;
    bool m_secretsManagerOracleAsmSecretIdHasBeenSet = false;

    Aws::String m_secretsManagerOracleAsmAccessRoleArn;
    bool m_secretsManagerOracleAsmAccessRoleArnHasBeenSet = false;

    Aws::String m_secretsManagerSecurityDbEncryptionSecretId;
    bool m_secretsManagerSecurityDbEncryptionSecretIdHasBeenSet = false;

    Aws::String m_secretsManagerSecurityDbEncryptionAccessRoleArn;
    bool m_secretsManagerSecurityDbEncryptionAccessRoleArnHasBeenSet = false;

    Aws::String m_s3Path;
    bool m_s3PathHasBeenSet = false;

    Aws::String m_s3AccessRoleArn;
    bool m_s3AccessRoleArnHasBeenSet = false;
  };

} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws
