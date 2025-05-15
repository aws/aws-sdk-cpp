/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dms/DatabaseMigrationService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/dms/model/TargetDbType.h>
#include <aws/dms/model/MySQLAuthenticationMethod.h>
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
   * <p>Provides information that defines a MySQL endpoint.</p><p><h3>See Also:</h3> 
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/dms-2016-01-01/MySQLSettings">AWS
   * API Reference</a></p>
   */
  class MySQLSettings
  {
  public:
    AWS_DATABASEMIGRATIONSERVICE_API MySQLSettings() = default;
    AWS_DATABASEMIGRATIONSERVICE_API MySQLSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATABASEMIGRATIONSERVICE_API MySQLSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATABASEMIGRATIONSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Specifies a script to run immediately after DMS connects to the endpoint. The
     * migration task continues running regardless if the SQL statement succeeds or
     * fails.</p> <p>For this parameter, provide the code of the script itself, not the
     * name of a file containing the script.</p>
     */
    inline const Aws::String& GetAfterConnectScript() const { return m_afterConnectScript; }
    inline bool AfterConnectScriptHasBeenSet() const { return m_afterConnectScriptHasBeenSet; }
    template<typename AfterConnectScriptT = Aws::String>
    void SetAfterConnectScript(AfterConnectScriptT&& value) { m_afterConnectScriptHasBeenSet = true; m_afterConnectScript = std::forward<AfterConnectScriptT>(value); }
    template<typename AfterConnectScriptT = Aws::String>
    MySQLSettings& WithAfterConnectScript(AfterConnectScriptT&& value) { SetAfterConnectScript(std::forward<AfterConnectScriptT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Cleans and recreates table metadata information on the replication instance
     * when a mismatch occurs. For example, in a situation where running an alter DDL
     * on the table could result in different information about the table cached in the
     * replication instance. </p>
     */
    inline bool GetCleanSourceMetadataOnMismatch() const { return m_cleanSourceMetadataOnMismatch; }
    inline bool CleanSourceMetadataOnMismatchHasBeenSet() const { return m_cleanSourceMetadataOnMismatchHasBeenSet; }
    inline void SetCleanSourceMetadataOnMismatch(bool value) { m_cleanSourceMetadataOnMismatchHasBeenSet = true; m_cleanSourceMetadataOnMismatch = value; }
    inline MySQLSettings& WithCleanSourceMetadataOnMismatch(bool value) { SetCleanSourceMetadataOnMismatch(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Database name for the endpoint. For a MySQL source or target endpoint, don't
     * explicitly specify the database using the <code>DatabaseName</code> request
     * parameter on either the <code>CreateEndpoint</code> or
     * <code>ModifyEndpoint</code> API call. Specifying <code>DatabaseName</code> when
     * you create or modify a MySQL endpoint replicates all the task tables to this
     * single database. For MySQL endpoints, you specify the database only when you
     * specify the schema in the table-mapping rules of the DMS task.</p>
     */
    inline const Aws::String& GetDatabaseName() const { return m_databaseName; }
    inline bool DatabaseNameHasBeenSet() const { return m_databaseNameHasBeenSet; }
    template<typename DatabaseNameT = Aws::String>
    void SetDatabaseName(DatabaseNameT&& value) { m_databaseNameHasBeenSet = true; m_databaseName = std::forward<DatabaseNameT>(value); }
    template<typename DatabaseNameT = Aws::String>
    MySQLSettings& WithDatabaseName(DatabaseNameT&& value) { SetDatabaseName(std::forward<DatabaseNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies how often to check the binary log for new changes/events when the
     * database is idle. The default is five seconds.</p> <p>Example:
     * <code>eventsPollInterval=5;</code> </p> <p>In the example, DMS checks for
     * changes in the binary logs every five seconds.</p>
     */
    inline int GetEventsPollInterval() const { return m_eventsPollInterval; }
    inline bool EventsPollIntervalHasBeenSet() const { return m_eventsPollIntervalHasBeenSet; }
    inline void SetEventsPollInterval(int value) { m_eventsPollIntervalHasBeenSet = true; m_eventsPollInterval = value; }
    inline MySQLSettings& WithEventsPollInterval(int value) { SetEventsPollInterval(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies where to migrate source tables on the target, either to a single
     * database or multiple databases. If you specify <code>SPECIFIC_DATABASE</code>,
     * specify the database name using the <code>DatabaseName</code> parameter of the
     * <code>Endpoint</code> object.</p> <p>Example:
     * <code>targetDbType=MULTIPLE_DATABASES</code> </p>
     */
    inline TargetDbType GetTargetDbType() const { return m_targetDbType; }
    inline bool TargetDbTypeHasBeenSet() const { return m_targetDbTypeHasBeenSet; }
    inline void SetTargetDbType(TargetDbType value) { m_targetDbTypeHasBeenSet = true; m_targetDbType = value; }
    inline MySQLSettings& WithTargetDbType(TargetDbType value) { SetTargetDbType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the maximum size (in KB) of any .csv file used to transfer data to
     * a MySQL-compatible database.</p> <p>Example: <code>maxFileSize=512</code> </p>
     */
    inline int GetMaxFileSize() const { return m_maxFileSize; }
    inline bool MaxFileSizeHasBeenSet() const { return m_maxFileSizeHasBeenSet; }
    inline void SetMaxFileSize(int value) { m_maxFileSizeHasBeenSet = true; m_maxFileSize = value; }
    inline MySQLSettings& WithMaxFileSize(int value) { SetMaxFileSize(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Improves performance when loading data into the MySQL-compatible target
     * database. Specifies how many threads to use to load the data into the
     * MySQL-compatible target database. Setting a large number of threads can have an
     * adverse effect on database performance, because a separate connection is
     * required for each thread. The default is one.</p> <p>Example:
     * <code>parallelLoadThreads=1</code> </p>
     */
    inline int GetParallelLoadThreads() const { return m_parallelLoadThreads; }
    inline bool ParallelLoadThreadsHasBeenSet() const { return m_parallelLoadThreadsHasBeenSet; }
    inline void SetParallelLoadThreads(int value) { m_parallelLoadThreadsHasBeenSet = true; m_parallelLoadThreads = value; }
    inline MySQLSettings& WithParallelLoadThreads(int value) { SetParallelLoadThreads(value); return *this;}
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
    MySQLSettings& WithPassword(PasswordT&& value) { SetPassword(std::forward<PasswordT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Endpoint TCP port.</p>
     */
    inline int GetPort() const { return m_port; }
    inline bool PortHasBeenSet() const { return m_portHasBeenSet; }
    inline void SetPort(int value) { m_portHasBeenSet = true; m_port = value; }
    inline MySQLSettings& WithPort(int value) { SetPort(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The host name of the endpoint database. </p> <p>For an Amazon RDS MySQL
     * instance, this is the output of <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/APIReference/API_DescribeDBInstances.html">DescribeDBInstances</a>,
     * in the <code> <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/APIReference/API_Endpoint.html">Endpoint</a>.Address</code>
     * field.</p> <p>For an Aurora MySQL instance, this is the output of <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/APIReference/API_DescribeDBClusters.html">DescribeDBClusters</a>,
     * in the <code>Endpoint</code> field.</p>
     */
    inline const Aws::String& GetServerName() const { return m_serverName; }
    inline bool ServerNameHasBeenSet() const { return m_serverNameHasBeenSet; }
    template<typename ServerNameT = Aws::String>
    void SetServerName(ServerNameT&& value) { m_serverNameHasBeenSet = true; m_serverName = std::forward<ServerNameT>(value); }
    template<typename ServerNameT = Aws::String>
    MySQLSettings& WithServerName(ServerNameT&& value) { SetServerName(std::forward<ServerNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the time zone for the source MySQL database.</p> <p>Example:
     * <code>serverTimezone=US/Pacific;</code> </p> <p>Note: Do not enclose time zones
     * in single quotes.</p>
     */
    inline const Aws::String& GetServerTimezone() const { return m_serverTimezone; }
    inline bool ServerTimezoneHasBeenSet() const { return m_serverTimezoneHasBeenSet; }
    template<typename ServerTimezoneT = Aws::String>
    void SetServerTimezone(ServerTimezoneT&& value) { m_serverTimezoneHasBeenSet = true; m_serverTimezone = std::forward<ServerTimezoneT>(value); }
    template<typename ServerTimezoneT = Aws::String>
    MySQLSettings& WithServerTimezone(ServerTimezoneT&& value) { SetServerTimezone(std::forward<ServerTimezoneT>(value)); return *this;}
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
    MySQLSettings& WithUsername(UsernameT&& value) { SetUsername(std::forward<UsernameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The full Amazon Resource Name (ARN) of the IAM role that specifies DMS as the
     * trusted entity and grants the required permissions to access the value in
     * <code>SecretsManagerSecret</code>. The role must allow the
     * <code>iam:PassRole</code> action. <code>SecretsManagerSecret</code> has the
     * value of the Amazon Web Services Secrets Manager secret that allows access to
     * the MySQL endpoint.</p>  <p>You can specify one of two sets of values for
     * these permissions. You can specify the values for this setting and
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
    MySQLSettings& WithSecretsManagerAccessRoleArn(SecretsManagerAccessRoleArnT&& value) { SetSecretsManagerAccessRoleArn(std::forward<SecretsManagerAccessRoleArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The full ARN, partial ARN, or friendly name of the
     * <code>SecretsManagerSecret</code> that contains the MySQL endpoint connection
     * details.</p>
     */
    inline const Aws::String& GetSecretsManagerSecretId() const { return m_secretsManagerSecretId; }
    inline bool SecretsManagerSecretIdHasBeenSet() const { return m_secretsManagerSecretIdHasBeenSet; }
    template<typename SecretsManagerSecretIdT = Aws::String>
    void SetSecretsManagerSecretId(SecretsManagerSecretIdT&& value) { m_secretsManagerSecretIdHasBeenSet = true; m_secretsManagerSecretId = std::forward<SecretsManagerSecretIdT>(value); }
    template<typename SecretsManagerSecretIdT = Aws::String>
    MySQLSettings& WithSecretsManagerSecretId(SecretsManagerSecretIdT&& value) { SetSecretsManagerSecretId(std::forward<SecretsManagerSecretIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Sets the client statement timeout (in seconds) for a MySQL source
     * endpoint.</p>
     */
    inline int GetExecuteTimeout() const { return m_executeTimeout; }
    inline bool ExecuteTimeoutHasBeenSet() const { return m_executeTimeoutHasBeenSet; }
    inline void SetExecuteTimeout(int value) { m_executeTimeoutHasBeenSet = true; m_executeTimeout = value; }
    inline MySQLSettings& WithExecuteTimeout(int value) { SetExecuteTimeout(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IAM role you can use to authenticate when connecting to your endpoint.
     * Ensure to include <code>iam:PassRole</code> and <code>rds-db:connect</code>
     * actions in permission policy.</p>
     */
    inline const Aws::String& GetServiceAccessRoleArn() const { return m_serviceAccessRoleArn; }
    inline bool ServiceAccessRoleArnHasBeenSet() const { return m_serviceAccessRoleArnHasBeenSet; }
    template<typename ServiceAccessRoleArnT = Aws::String>
    void SetServiceAccessRoleArn(ServiceAccessRoleArnT&& value) { m_serviceAccessRoleArnHasBeenSet = true; m_serviceAccessRoleArn = std::forward<ServiceAccessRoleArnT>(value); }
    template<typename ServiceAccessRoleArnT = Aws::String>
    MySQLSettings& WithServiceAccessRoleArn(ServiceAccessRoleArnT&& value) { SetServiceAccessRoleArn(std::forward<ServiceAccessRoleArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>This attribute allows you to specify the authentication method as "iam
     * auth".</p>
     */
    inline MySQLAuthenticationMethod GetAuthenticationMethod() const { return m_authenticationMethod; }
    inline bool AuthenticationMethodHasBeenSet() const { return m_authenticationMethodHasBeenSet; }
    inline void SetAuthenticationMethod(MySQLAuthenticationMethod value) { m_authenticationMethodHasBeenSet = true; m_authenticationMethod = value; }
    inline MySQLSettings& WithAuthenticationMethod(MySQLAuthenticationMethod value) { SetAuthenticationMethod(value); return *this;}
    ///@}
  private:

    Aws::String m_afterConnectScript;
    bool m_afterConnectScriptHasBeenSet = false;

    bool m_cleanSourceMetadataOnMismatch{false};
    bool m_cleanSourceMetadataOnMismatchHasBeenSet = false;

    Aws::String m_databaseName;
    bool m_databaseNameHasBeenSet = false;

    int m_eventsPollInterval{0};
    bool m_eventsPollIntervalHasBeenSet = false;

    TargetDbType m_targetDbType{TargetDbType::NOT_SET};
    bool m_targetDbTypeHasBeenSet = false;

    int m_maxFileSize{0};
    bool m_maxFileSizeHasBeenSet = false;

    int m_parallelLoadThreads{0};
    bool m_parallelLoadThreadsHasBeenSet = false;

    Aws::String m_password;
    bool m_passwordHasBeenSet = false;

    int m_port{0};
    bool m_portHasBeenSet = false;

    Aws::String m_serverName;
    bool m_serverNameHasBeenSet = false;

    Aws::String m_serverTimezone;
    bool m_serverTimezoneHasBeenSet = false;

    Aws::String m_username;
    bool m_usernameHasBeenSet = false;

    Aws::String m_secretsManagerAccessRoleArn;
    bool m_secretsManagerAccessRoleArnHasBeenSet = false;

    Aws::String m_secretsManagerSecretId;
    bool m_secretsManagerSecretIdHasBeenSet = false;

    int m_executeTimeout{0};
    bool m_executeTimeoutHasBeenSet = false;

    Aws::String m_serviceAccessRoleArn;
    bool m_serviceAccessRoleArnHasBeenSet = false;

    MySQLAuthenticationMethod m_authenticationMethod{MySQLAuthenticationMethod::NOT_SET};
    bool m_authenticationMethodHasBeenSet = false;
  };

} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws
