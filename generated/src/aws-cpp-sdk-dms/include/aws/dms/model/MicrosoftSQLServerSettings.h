/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dms/DatabaseMigrationService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/dms/model/SafeguardPolicy.h>
#include <aws/dms/model/TlogAccessMode.h>
#include <aws/dms/model/SqlServerAuthenticationMethod.h>
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
   * <p>Provides information that defines a Microsoft SQL Server
   * endpoint.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/dms-2016-01-01/MicrosoftSQLServerSettings">AWS
   * API Reference</a></p>
   */
  class MicrosoftSQLServerSettings
  {
  public:
    AWS_DATABASEMIGRATIONSERVICE_API MicrosoftSQLServerSettings() = default;
    AWS_DATABASEMIGRATIONSERVICE_API MicrosoftSQLServerSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATABASEMIGRATIONSERVICE_API MicrosoftSQLServerSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATABASEMIGRATIONSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Endpoint TCP port.</p>
     */
    inline int GetPort() const { return m_port; }
    inline bool PortHasBeenSet() const { return m_portHasBeenSet; }
    inline void SetPort(int value) { m_portHasBeenSet = true; m_port = value; }
    inline MicrosoftSQLServerSettings& WithPort(int value) { SetPort(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum size of the packets (in bytes) used to transfer data using
     * BCP.</p>
     */
    inline int GetBcpPacketSize() const { return m_bcpPacketSize; }
    inline bool BcpPacketSizeHasBeenSet() const { return m_bcpPacketSizeHasBeenSet; }
    inline void SetBcpPacketSize(int value) { m_bcpPacketSizeHasBeenSet = true; m_bcpPacketSize = value; }
    inline MicrosoftSQLServerSettings& WithBcpPacketSize(int value) { SetBcpPacketSize(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Database name for the endpoint.</p>
     */
    inline const Aws::String& GetDatabaseName() const { return m_databaseName; }
    inline bool DatabaseNameHasBeenSet() const { return m_databaseNameHasBeenSet; }
    template<typename DatabaseNameT = Aws::String>
    void SetDatabaseName(DatabaseNameT&& value) { m_databaseNameHasBeenSet = true; m_databaseName = std::forward<DatabaseNameT>(value); }
    template<typename DatabaseNameT = Aws::String>
    MicrosoftSQLServerSettings& WithDatabaseName(DatabaseNameT&& value) { SetDatabaseName(std::forward<DatabaseNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies a file group for the DMS internal tables. When the replication task
     * starts, all the internal DMS control tables (awsdms_ apply_exception,
     * awsdms_apply, awsdms_changes) are created for the specified file group.</p>
     */
    inline const Aws::String& GetControlTablesFileGroup() const { return m_controlTablesFileGroup; }
    inline bool ControlTablesFileGroupHasBeenSet() const { return m_controlTablesFileGroupHasBeenSet; }
    template<typename ControlTablesFileGroupT = Aws::String>
    void SetControlTablesFileGroup(ControlTablesFileGroupT&& value) { m_controlTablesFileGroupHasBeenSet = true; m_controlTablesFileGroup = std::forward<ControlTablesFileGroupT>(value); }
    template<typename ControlTablesFileGroupT = Aws::String>
    MicrosoftSQLServerSettings& WithControlTablesFileGroup(ControlTablesFileGroupT&& value) { SetControlTablesFileGroup(std::forward<ControlTablesFileGroupT>(value)); return *this;}
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
    MicrosoftSQLServerSettings& WithPassword(PasswordT&& value) { SetPassword(std::forward<PasswordT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Cleans and recreates table metadata information on the replication instance
     * when a mismatch occurs. An example is a situation where running an alter DDL
     * statement on a table might result in different information about the table
     * cached in the replication instance.</p>
     */
    inline bool GetQuerySingleAlwaysOnNode() const { return m_querySingleAlwaysOnNode; }
    inline bool QuerySingleAlwaysOnNodeHasBeenSet() const { return m_querySingleAlwaysOnNodeHasBeenSet; }
    inline void SetQuerySingleAlwaysOnNode(bool value) { m_querySingleAlwaysOnNodeHasBeenSet = true; m_querySingleAlwaysOnNode = value; }
    inline MicrosoftSQLServerSettings& WithQuerySingleAlwaysOnNode(bool value) { SetQuerySingleAlwaysOnNode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>When this attribute is set to <code>Y</code>, DMS only reads changes from
     * transaction log backups and doesn't read from the active transaction log file
     * during ongoing replication. Setting this parameter to <code>Y</code> enables you
     * to control active transaction log file growth during full load and ongoing
     * replication tasks. However, it can add some source latency to ongoing
     * replication.</p>
     */
    inline bool GetReadBackupOnly() const { return m_readBackupOnly; }
    inline bool ReadBackupOnlyHasBeenSet() const { return m_readBackupOnlyHasBeenSet; }
    inline void SetReadBackupOnly(bool value) { m_readBackupOnlyHasBeenSet = true; m_readBackupOnly = value; }
    inline MicrosoftSQLServerSettings& WithReadBackupOnly(bool value) { SetReadBackupOnly(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Use this attribute to minimize the need to access the backup log and enable
     * DMS to prevent truncation using one of the following two methods.</p> <p>
     * <i>Start transactions in the database:</i> This is the default method. When this
     * method is used, DMS prevents TLOG truncation by mimicking a transaction in the
     * database. As long as such a transaction is open, changes that appear after the
     * transaction started aren't truncated. If you need Microsoft Replication to be
     * enabled in your database, then you must choose this method.</p> <p>
     * <i>Exclusively use sp_repldone within a single task</i>: When this method is
     * used, DMS reads the changes and then uses sp_repldone to mark the TLOG
     * transactions as ready for truncation. Although this method doesn't involve any
     * transactional activities, it can only be used when Microsoft Replication isn't
     * running. Also, when using this method, only one DMS task can access the database
     * at any given time. Therefore, if you need to run parallel DMS tasks against the
     * same database, use the default method.</p>
     */
    inline SafeguardPolicy GetSafeguardPolicy() const { return m_safeguardPolicy; }
    inline bool SafeguardPolicyHasBeenSet() const { return m_safeguardPolicyHasBeenSet; }
    inline void SetSafeguardPolicy(SafeguardPolicy value) { m_safeguardPolicyHasBeenSet = true; m_safeguardPolicy = value; }
    inline MicrosoftSQLServerSettings& WithSafeguardPolicy(SafeguardPolicy value) { SetSafeguardPolicy(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Fully qualified domain name of the endpoint. For an Amazon RDS SQL Server
     * instance, this is the output of <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/APIReference/API_DescribeDBInstances.html">DescribeDBInstances</a>,
     * in the <code> <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/APIReference/API_Endpoint.html">Endpoint</a>.Address</code>
     * field.</p>
     */
    inline const Aws::String& GetServerName() const { return m_serverName; }
    inline bool ServerNameHasBeenSet() const { return m_serverNameHasBeenSet; }
    template<typename ServerNameT = Aws::String>
    void SetServerName(ServerNameT&& value) { m_serverNameHasBeenSet = true; m_serverName = std::forward<ServerNameT>(value); }
    template<typename ServerNameT = Aws::String>
    MicrosoftSQLServerSettings& WithServerName(ServerNameT&& value) { SetServerName(std::forward<ServerNameT>(value)); return *this;}
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
    MicrosoftSQLServerSettings& WithUsername(UsernameT&& value) { SetUsername(std::forward<UsernameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Use this to attribute to transfer data for full-load operations using BCP.
     * When the target table contains an identity column that does not exist in the
     * source table, you must disable the use BCP for loading table option.</p>
     */
    inline bool GetUseBcpFullLoad() const { return m_useBcpFullLoad; }
    inline bool UseBcpFullLoadHasBeenSet() const { return m_useBcpFullLoadHasBeenSet; }
    inline void SetUseBcpFullLoad(bool value) { m_useBcpFullLoadHasBeenSet = true; m_useBcpFullLoad = value; }
    inline MicrosoftSQLServerSettings& WithUseBcpFullLoad(bool value) { SetUseBcpFullLoad(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>When this attribute is set to <code>Y</code>, DMS processes third-party
     * transaction log backups if they are created in native format.</p>
     */
    inline bool GetUseThirdPartyBackupDevice() const { return m_useThirdPartyBackupDevice; }
    inline bool UseThirdPartyBackupDeviceHasBeenSet() const { return m_useThirdPartyBackupDeviceHasBeenSet; }
    inline void SetUseThirdPartyBackupDevice(bool value) { m_useThirdPartyBackupDeviceHasBeenSet = true; m_useThirdPartyBackupDevice = value; }
    inline MicrosoftSQLServerSettings& WithUseThirdPartyBackupDevice(bool value) { SetUseThirdPartyBackupDevice(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The full Amazon Resource Name (ARN) of the IAM role that specifies DMS as the
     * trusted entity and grants the required permissions to access the value in
     * <code>SecretsManagerSecret</code>. The role must allow the
     * <code>iam:PassRole</code> action. <code>SecretsManagerSecret</code> has the
     * value of the Amazon Web Services Secrets Manager secret that allows access to
     * the SQL Server endpoint.</p>  <p>You can specify one of two sets of values
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
    MicrosoftSQLServerSettings& WithSecretsManagerAccessRoleArn(SecretsManagerAccessRoleArnT&& value) { SetSecretsManagerAccessRoleArn(std::forward<SecretsManagerAccessRoleArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The full ARN, partial ARN, or friendly name of the
     * <code>SecretsManagerSecret</code> that contains the SQL Server endpoint
     * connection details.</p>
     */
    inline const Aws::String& GetSecretsManagerSecretId() const { return m_secretsManagerSecretId; }
    inline bool SecretsManagerSecretIdHasBeenSet() const { return m_secretsManagerSecretIdHasBeenSet; }
    template<typename SecretsManagerSecretIdT = Aws::String>
    void SetSecretsManagerSecretId(SecretsManagerSecretIdT&& value) { m_secretsManagerSecretIdHasBeenSet = true; m_secretsManagerSecretId = std::forward<SecretsManagerSecretIdT>(value); }
    template<typename SecretsManagerSecretIdT = Aws::String>
    MicrosoftSQLServerSettings& WithSecretsManagerSecretId(SecretsManagerSecretIdT&& value) { SetSecretsManagerSecretId(std::forward<SecretsManagerSecretIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Use the <code>TrimSpaceInChar</code> source endpoint setting to right-trim
     * data on CHAR and NCHAR data types during migration. Setting
     * <code>TrimSpaceInChar</code> does not left-trim data. The default value is
     * <code>true</code>.</p>
     */
    inline bool GetTrimSpaceInChar() const { return m_trimSpaceInChar; }
    inline bool TrimSpaceInCharHasBeenSet() const { return m_trimSpaceInCharHasBeenSet; }
    inline void SetTrimSpaceInChar(bool value) { m_trimSpaceInCharHasBeenSet = true; m_trimSpaceInChar = value; }
    inline MicrosoftSQLServerSettings& WithTrimSpaceInChar(bool value) { SetTrimSpaceInChar(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates the mode used to fetch CDC data.</p>
     */
    inline TlogAccessMode GetTlogAccessMode() const { return m_tlogAccessMode; }
    inline bool TlogAccessModeHasBeenSet() const { return m_tlogAccessModeHasBeenSet; }
    inline void SetTlogAccessMode(TlogAccessMode value) { m_tlogAccessModeHasBeenSet = true; m_tlogAccessMode = value; }
    inline MicrosoftSQLServerSettings& WithTlogAccessMode(TlogAccessMode value) { SetTlogAccessMode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Forces LOB lookup on inline LOB.</p>
     */
    inline bool GetForceLobLookup() const { return m_forceLobLookup; }
    inline bool ForceLobLookupHasBeenSet() const { return m_forceLobLookupHasBeenSet; }
    inline void SetForceLobLookup(bool value) { m_forceLobLookupHasBeenSet = true; m_forceLobLookup = value; }
    inline MicrosoftSQLServerSettings& WithForceLobLookup(bool value) { SetForceLobLookup(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the authentication method to be used with Microsoft SQL Server.</p>
     */
    inline SqlServerAuthenticationMethod GetAuthenticationMethod() const { return m_authenticationMethod; }
    inline bool AuthenticationMethodHasBeenSet() const { return m_authenticationMethodHasBeenSet; }
    inline void SetAuthenticationMethod(SqlServerAuthenticationMethod value) { m_authenticationMethodHasBeenSet = true; m_authenticationMethod = value; }
    inline MicrosoftSQLServerSettings& WithAuthenticationMethod(SqlServerAuthenticationMethod value) { SetAuthenticationMethod(value); return *this;}
    ///@}
  private:

    int m_port{0};
    bool m_portHasBeenSet = false;

    int m_bcpPacketSize{0};
    bool m_bcpPacketSizeHasBeenSet = false;

    Aws::String m_databaseName;
    bool m_databaseNameHasBeenSet = false;

    Aws::String m_controlTablesFileGroup;
    bool m_controlTablesFileGroupHasBeenSet = false;

    Aws::String m_password;
    bool m_passwordHasBeenSet = false;

    bool m_querySingleAlwaysOnNode{false};
    bool m_querySingleAlwaysOnNodeHasBeenSet = false;

    bool m_readBackupOnly{false};
    bool m_readBackupOnlyHasBeenSet = false;

    SafeguardPolicy m_safeguardPolicy{SafeguardPolicy::NOT_SET};
    bool m_safeguardPolicyHasBeenSet = false;

    Aws::String m_serverName;
    bool m_serverNameHasBeenSet = false;

    Aws::String m_username;
    bool m_usernameHasBeenSet = false;

    bool m_useBcpFullLoad{false};
    bool m_useBcpFullLoadHasBeenSet = false;

    bool m_useThirdPartyBackupDevice{false};
    bool m_useThirdPartyBackupDeviceHasBeenSet = false;

    Aws::String m_secretsManagerAccessRoleArn;
    bool m_secretsManagerAccessRoleArnHasBeenSet = false;

    Aws::String m_secretsManagerSecretId;
    bool m_secretsManagerSecretIdHasBeenSet = false;

    bool m_trimSpaceInChar{false};
    bool m_trimSpaceInCharHasBeenSet = false;

    TlogAccessMode m_tlogAccessMode{TlogAccessMode::NOT_SET};
    bool m_tlogAccessModeHasBeenSet = false;

    bool m_forceLobLookup{false};
    bool m_forceLobLookupHasBeenSet = false;

    SqlServerAuthenticationMethod m_authenticationMethod{SqlServerAuthenticationMethod::NOT_SET};
    bool m_authenticationMethodHasBeenSet = false;
  };

} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws
