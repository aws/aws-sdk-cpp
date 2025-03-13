/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dms/DatabaseMigrationService_EXPORTS.h>
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
namespace DatabaseMigrationService
{
namespace Model
{

  /**
   * <p>Provides information that defines an IBM Db2 LUW endpoint.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/dms-2016-01-01/IBMDb2Settings">AWS
   * API Reference</a></p>
   */
  class IBMDb2Settings
  {
  public:
    AWS_DATABASEMIGRATIONSERVICE_API IBMDb2Settings() = default;
    AWS_DATABASEMIGRATIONSERVICE_API IBMDb2Settings(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATABASEMIGRATIONSERVICE_API IBMDb2Settings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATABASEMIGRATIONSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Database name for the endpoint.</p>
     */
    inline const Aws::String& GetDatabaseName() const { return m_databaseName; }
    inline bool DatabaseNameHasBeenSet() const { return m_databaseNameHasBeenSet; }
    template<typename DatabaseNameT = Aws::String>
    void SetDatabaseName(DatabaseNameT&& value) { m_databaseNameHasBeenSet = true; m_databaseName = std::forward<DatabaseNameT>(value); }
    template<typename DatabaseNameT = Aws::String>
    IBMDb2Settings& WithDatabaseName(DatabaseNameT&& value) { SetDatabaseName(std::forward<DatabaseNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Endpoint connection password.</p>
     */
    inline const Aws::String& GetPassword() const { return m_password; }
    inline bool PasswordHasBeenSet() const { return m_passwordHasBeenSet; }
    template<typename PasswordT = Aws::String>
    void SetPassword(PasswordT&& value) { m_passwordHasBeenSet = true; m_password = std::forward<PasswordT>(value); }
    template<typename PasswordT = Aws::String>
    IBMDb2Settings& WithPassword(PasswordT&& value) { SetPassword(std::forward<PasswordT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Endpoint TCP port. The default value is 50000.</p>
     */
    inline int GetPort() const { return m_port; }
    inline bool PortHasBeenSet() const { return m_portHasBeenSet; }
    inline void SetPort(int value) { m_portHasBeenSet = true; m_port = value; }
    inline IBMDb2Settings& WithPort(int value) { SetPort(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Fully qualified domain name of the endpoint.</p>
     */
    inline const Aws::String& GetServerName() const { return m_serverName; }
    inline bool ServerNameHasBeenSet() const { return m_serverNameHasBeenSet; }
    template<typename ServerNameT = Aws::String>
    void SetServerName(ServerNameT&& value) { m_serverNameHasBeenSet = true; m_serverName = std::forward<ServerNameT>(value); }
    template<typename ServerNameT = Aws::String>
    IBMDb2Settings& WithServerName(ServerNameT&& value) { SetServerName(std::forward<ServerNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Enables ongoing replication (CDC) as a BOOLEAN value. The default is
     * true.</p>
     */
    inline bool GetSetDataCaptureChanges() const { return m_setDataCaptureChanges; }
    inline bool SetDataCaptureChangesHasBeenSet() const { return m_setDataCaptureChangesHasBeenSet; }
    inline void SetSetDataCaptureChanges(bool value) { m_setDataCaptureChangesHasBeenSet = true; m_setDataCaptureChanges = value; }
    inline IBMDb2Settings& WithSetDataCaptureChanges(bool value) { SetSetDataCaptureChanges(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>For ongoing replication (CDC), use CurrentLSN to specify a log sequence
     * number (LSN) where you want the replication to start.</p>
     */
    inline const Aws::String& GetCurrentLsn() const { return m_currentLsn; }
    inline bool CurrentLsnHasBeenSet() const { return m_currentLsnHasBeenSet; }
    template<typename CurrentLsnT = Aws::String>
    void SetCurrentLsn(CurrentLsnT&& value) { m_currentLsnHasBeenSet = true; m_currentLsn = std::forward<CurrentLsnT>(value); }
    template<typename CurrentLsnT = Aws::String>
    IBMDb2Settings& WithCurrentLsn(CurrentLsnT&& value) { SetCurrentLsn(std::forward<CurrentLsnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Maximum number of bytes per read, as a NUMBER value. The default is 64
     * KB.</p>
     */
    inline int GetMaxKBytesPerRead() const { return m_maxKBytesPerRead; }
    inline bool MaxKBytesPerReadHasBeenSet() const { return m_maxKBytesPerReadHasBeenSet; }
    inline void SetMaxKBytesPerRead(int value) { m_maxKBytesPerReadHasBeenSet = true; m_maxKBytesPerRead = value; }
    inline IBMDb2Settings& WithMaxKBytesPerRead(int value) { SetMaxKBytesPerRead(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Endpoint connection user name.</p>
     */
    inline const Aws::String& GetUsername() const { return m_username; }
    inline bool UsernameHasBeenSet() const { return m_usernameHasBeenSet; }
    template<typename UsernameT = Aws::String>
    void SetUsername(UsernameT&& value) { m_usernameHasBeenSet = true; m_username = std::forward<UsernameT>(value); }
    template<typename UsernameT = Aws::String>
    IBMDb2Settings& WithUsername(UsernameT&& value) { SetUsername(std::forward<UsernameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The full Amazon Resource Name (ARN) of the IAM role that specifies DMS as the
     * trusted entity and grants the required permissions to access the value in
     * <code>SecretsManagerSecret</code>. The role must allow the
     * <code>iam:PassRole</code> action. <code>SecretsManagerSecret</code> has the
     * value of the Amazon Web Services Secrets Manager secret that allows access to
     * the Db2 LUW endpoint. </p>  <p>You can specify one of two sets of values
     * for these permissions. You can specify the values for this setting and
     * <code>SecretsManagerSecretId</code>. Or you can specify clear-text values for
     * <code>UserName</code>, <code>Password</code>, <code>ServerName</code>, and
     * <code>Port</code>. You can't specify both. For more information on creating this
     * <code>SecretsManagerSecret</code> and the
     * <code>SecretsManagerAccessRoleArn</code> and <code>SecretsManagerSecretId</code>
     * required to access it, see <a
     * href="https://docs.aws.amazon.com/dms/latest/userguide/CHAP_Security.html#security-iam-secretsmanager">Using
     * secrets to access Database Migration Service resources</a> in the <i>Database
     * Migration Service User Guide</i>.</p> 
     */
    inline const Aws::String& GetSecretsManagerAccessRoleArn() const { return m_secretsManagerAccessRoleArn; }
    inline bool SecretsManagerAccessRoleArnHasBeenSet() const { return m_secretsManagerAccessRoleArnHasBeenSet; }
    template<typename SecretsManagerAccessRoleArnT = Aws::String>
    void SetSecretsManagerAccessRoleArn(SecretsManagerAccessRoleArnT&& value) { m_secretsManagerAccessRoleArnHasBeenSet = true; m_secretsManagerAccessRoleArn = std::forward<SecretsManagerAccessRoleArnT>(value); }
    template<typename SecretsManagerAccessRoleArnT = Aws::String>
    IBMDb2Settings& WithSecretsManagerAccessRoleArn(SecretsManagerAccessRoleArnT&& value) { SetSecretsManagerAccessRoleArn(std::forward<SecretsManagerAccessRoleArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The full ARN, partial ARN, or friendly name of the
     * <code>SecretsManagerSecret</code> that contains the Db2 LUW endpoint connection
     * details.</p>
     */
    inline const Aws::String& GetSecretsManagerSecretId() const { return m_secretsManagerSecretId; }
    inline bool SecretsManagerSecretIdHasBeenSet() const { return m_secretsManagerSecretIdHasBeenSet; }
    template<typename SecretsManagerSecretIdT = Aws::String>
    void SetSecretsManagerSecretId(SecretsManagerSecretIdT&& value) { m_secretsManagerSecretIdHasBeenSet = true; m_secretsManagerSecretId = std::forward<SecretsManagerSecretIdT>(value); }
    template<typename SecretsManagerSecretIdT = Aws::String>
    IBMDb2Settings& WithSecretsManagerSecretId(SecretsManagerSecretIdT&& value) { SetSecretsManagerSecretId(std::forward<SecretsManagerSecretIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The amount of time (in milliseconds) before DMS times out operations
     * performed by DMS on the Db2 target. The default value is 1200 (20 minutes).</p>
     */
    inline int GetLoadTimeout() const { return m_loadTimeout; }
    inline bool LoadTimeoutHasBeenSet() const { return m_loadTimeoutHasBeenSet; }
    inline void SetLoadTimeout(int value) { m_loadTimeoutHasBeenSet = true; m_loadTimeout = value; }
    inline IBMDb2Settings& WithLoadTimeout(int value) { SetLoadTimeout(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The size (in KB) of the in-memory file write buffer used when generating .csv
     * files on the local disk on the DMS replication instance. The default value is
     * 1024 (1 MB).</p>
     */
    inline int GetWriteBufferSize() const { return m_writeBufferSize; }
    inline bool WriteBufferSizeHasBeenSet() const { return m_writeBufferSizeHasBeenSet; }
    inline void SetWriteBufferSize(int value) { m_writeBufferSizeHasBeenSet = true; m_writeBufferSize = value; }
    inline IBMDb2Settings& WithWriteBufferSize(int value) { SetWriteBufferSize(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the maximum size (in KB) of .csv files used to transfer data to Db2
     * LUW.</p>
     */
    inline int GetMaxFileSize() const { return m_maxFileSize; }
    inline bool MaxFileSizeHasBeenSet() const { return m_maxFileSizeHasBeenSet; }
    inline void SetMaxFileSize(int value) { m_maxFileSizeHasBeenSet = true; m_maxFileSize = value; }
    inline IBMDb2Settings& WithMaxFileSize(int value) { SetMaxFileSize(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>If true, DMS saves any .csv files to the Db2 LUW target that were used to
     * replicate data. DMS uses these files for analysis and troubleshooting.</p>
     * <p>The default value is false. </p>
     */
    inline bool GetKeepCsvFiles() const { return m_keepCsvFiles; }
    inline bool KeepCsvFilesHasBeenSet() const { return m_keepCsvFilesHasBeenSet; }
    inline void SetKeepCsvFiles(bool value) { m_keepCsvFilesHasBeenSet = true; m_keepCsvFiles = value; }
    inline IBMDb2Settings& WithKeepCsvFiles(bool value) { SetKeepCsvFiles(value); return *this;}
    ///@}
  private:

    Aws::String m_databaseName;
    bool m_databaseNameHasBeenSet = false;

    Aws::String m_password;
    bool m_passwordHasBeenSet = false;

    int m_port{0};
    bool m_portHasBeenSet = false;

    Aws::String m_serverName;
    bool m_serverNameHasBeenSet = false;

    bool m_setDataCaptureChanges{false};
    bool m_setDataCaptureChangesHasBeenSet = false;

    Aws::String m_currentLsn;
    bool m_currentLsnHasBeenSet = false;

    int m_maxKBytesPerRead{0};
    bool m_maxKBytesPerReadHasBeenSet = false;

    Aws::String m_username;
    bool m_usernameHasBeenSet = false;

    Aws::String m_secretsManagerAccessRoleArn;
    bool m_secretsManagerAccessRoleArnHasBeenSet = false;

    Aws::String m_secretsManagerSecretId;
    bool m_secretsManagerSecretIdHasBeenSet = false;

    int m_loadTimeout{0};
    bool m_loadTimeoutHasBeenSet = false;

    int m_writeBufferSize{0};
    bool m_writeBufferSizeHasBeenSet = false;

    int m_maxFileSize{0};
    bool m_maxFileSizeHasBeenSet = false;

    bool m_keepCsvFiles{false};
    bool m_keepCsvFilesHasBeenSet = false;
  };

} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws
