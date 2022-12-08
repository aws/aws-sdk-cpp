/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dms/DatabaseMigrationService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/dms/model/TargetDbType.h>
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
    AWS_DATABASEMIGRATIONSERVICE_API MySQLSettings();
    AWS_DATABASEMIGRATIONSERVICE_API MySQLSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATABASEMIGRATIONSERVICE_API MySQLSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATABASEMIGRATIONSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Specifies a script to run immediately after DMS connects to the endpoint. The
     * migration task continues running regardless if the SQL statement succeeds or
     * fails.</p> <p>For this parameter, provide the code of the script itself, not the
     * name of a file containing the script.</p>
     */
    inline const Aws::String& GetAfterConnectScript() const{ return m_afterConnectScript; }

    /**
     * <p>Specifies a script to run immediately after DMS connects to the endpoint. The
     * migration task continues running regardless if the SQL statement succeeds or
     * fails.</p> <p>For this parameter, provide the code of the script itself, not the
     * name of a file containing the script.</p>
     */
    inline bool AfterConnectScriptHasBeenSet() const { return m_afterConnectScriptHasBeenSet; }

    /**
     * <p>Specifies a script to run immediately after DMS connects to the endpoint. The
     * migration task continues running regardless if the SQL statement succeeds or
     * fails.</p> <p>For this parameter, provide the code of the script itself, not the
     * name of a file containing the script.</p>
     */
    inline void SetAfterConnectScript(const Aws::String& value) { m_afterConnectScriptHasBeenSet = true; m_afterConnectScript = value; }

    /**
     * <p>Specifies a script to run immediately after DMS connects to the endpoint. The
     * migration task continues running regardless if the SQL statement succeeds or
     * fails.</p> <p>For this parameter, provide the code of the script itself, not the
     * name of a file containing the script.</p>
     */
    inline void SetAfterConnectScript(Aws::String&& value) { m_afterConnectScriptHasBeenSet = true; m_afterConnectScript = std::move(value); }

    /**
     * <p>Specifies a script to run immediately after DMS connects to the endpoint. The
     * migration task continues running regardless if the SQL statement succeeds or
     * fails.</p> <p>For this parameter, provide the code of the script itself, not the
     * name of a file containing the script.</p>
     */
    inline void SetAfterConnectScript(const char* value) { m_afterConnectScriptHasBeenSet = true; m_afterConnectScript.assign(value); }

    /**
     * <p>Specifies a script to run immediately after DMS connects to the endpoint. The
     * migration task continues running regardless if the SQL statement succeeds or
     * fails.</p> <p>For this parameter, provide the code of the script itself, not the
     * name of a file containing the script.</p>
     */
    inline MySQLSettings& WithAfterConnectScript(const Aws::String& value) { SetAfterConnectScript(value); return *this;}

    /**
     * <p>Specifies a script to run immediately after DMS connects to the endpoint. The
     * migration task continues running regardless if the SQL statement succeeds or
     * fails.</p> <p>For this parameter, provide the code of the script itself, not the
     * name of a file containing the script.</p>
     */
    inline MySQLSettings& WithAfterConnectScript(Aws::String&& value) { SetAfterConnectScript(std::move(value)); return *this;}

    /**
     * <p>Specifies a script to run immediately after DMS connects to the endpoint. The
     * migration task continues running regardless if the SQL statement succeeds or
     * fails.</p> <p>For this parameter, provide the code of the script itself, not the
     * name of a file containing the script.</p>
     */
    inline MySQLSettings& WithAfterConnectScript(const char* value) { SetAfterConnectScript(value); return *this;}


    /**
     * <p>Adjusts the behavior of DMS when migrating from an SQL Server source database
     * that is hosted as part of an Always On availability group cluster. If you need
     * DMS to poll all the nodes in the Always On cluster for transaction backups, set
     * this attribute to <code>false</code>.</p>
     */
    inline bool GetCleanSourceMetadataOnMismatch() const{ return m_cleanSourceMetadataOnMismatch; }

    /**
     * <p>Adjusts the behavior of DMS when migrating from an SQL Server source database
     * that is hosted as part of an Always On availability group cluster. If you need
     * DMS to poll all the nodes in the Always On cluster for transaction backups, set
     * this attribute to <code>false</code>.</p>
     */
    inline bool CleanSourceMetadataOnMismatchHasBeenSet() const { return m_cleanSourceMetadataOnMismatchHasBeenSet; }

    /**
     * <p>Adjusts the behavior of DMS when migrating from an SQL Server source database
     * that is hosted as part of an Always On availability group cluster. If you need
     * DMS to poll all the nodes in the Always On cluster for transaction backups, set
     * this attribute to <code>false</code>.</p>
     */
    inline void SetCleanSourceMetadataOnMismatch(bool value) { m_cleanSourceMetadataOnMismatchHasBeenSet = true; m_cleanSourceMetadataOnMismatch = value; }

    /**
     * <p>Adjusts the behavior of DMS when migrating from an SQL Server source database
     * that is hosted as part of an Always On availability group cluster. If you need
     * DMS to poll all the nodes in the Always On cluster for transaction backups, set
     * this attribute to <code>false</code>.</p>
     */
    inline MySQLSettings& WithCleanSourceMetadataOnMismatch(bool value) { SetCleanSourceMetadataOnMismatch(value); return *this;}


    /**
     * <p>Database name for the endpoint. For a MySQL source or target endpoint, don't
     * explicitly specify the database using the <code>DatabaseName</code> request
     * parameter on either the <code>CreateEndpoint</code> or
     * <code>ModifyEndpoint</code> API call. Specifying <code>DatabaseName</code> when
     * you create or modify a MySQL endpoint replicates all the task tables to this
     * single database. For MySQL endpoints, you specify the database only when you
     * specify the schema in the table-mapping rules of the DMS task.</p>
     */
    inline const Aws::String& GetDatabaseName() const{ return m_databaseName; }

    /**
     * <p>Database name for the endpoint. For a MySQL source or target endpoint, don't
     * explicitly specify the database using the <code>DatabaseName</code> request
     * parameter on either the <code>CreateEndpoint</code> or
     * <code>ModifyEndpoint</code> API call. Specifying <code>DatabaseName</code> when
     * you create or modify a MySQL endpoint replicates all the task tables to this
     * single database. For MySQL endpoints, you specify the database only when you
     * specify the schema in the table-mapping rules of the DMS task.</p>
     */
    inline bool DatabaseNameHasBeenSet() const { return m_databaseNameHasBeenSet; }

    /**
     * <p>Database name for the endpoint. For a MySQL source or target endpoint, don't
     * explicitly specify the database using the <code>DatabaseName</code> request
     * parameter on either the <code>CreateEndpoint</code> or
     * <code>ModifyEndpoint</code> API call. Specifying <code>DatabaseName</code> when
     * you create or modify a MySQL endpoint replicates all the task tables to this
     * single database. For MySQL endpoints, you specify the database only when you
     * specify the schema in the table-mapping rules of the DMS task.</p>
     */
    inline void SetDatabaseName(const Aws::String& value) { m_databaseNameHasBeenSet = true; m_databaseName = value; }

    /**
     * <p>Database name for the endpoint. For a MySQL source or target endpoint, don't
     * explicitly specify the database using the <code>DatabaseName</code> request
     * parameter on either the <code>CreateEndpoint</code> or
     * <code>ModifyEndpoint</code> API call. Specifying <code>DatabaseName</code> when
     * you create or modify a MySQL endpoint replicates all the task tables to this
     * single database. For MySQL endpoints, you specify the database only when you
     * specify the schema in the table-mapping rules of the DMS task.</p>
     */
    inline void SetDatabaseName(Aws::String&& value) { m_databaseNameHasBeenSet = true; m_databaseName = std::move(value); }

    /**
     * <p>Database name for the endpoint. For a MySQL source or target endpoint, don't
     * explicitly specify the database using the <code>DatabaseName</code> request
     * parameter on either the <code>CreateEndpoint</code> or
     * <code>ModifyEndpoint</code> API call. Specifying <code>DatabaseName</code> when
     * you create or modify a MySQL endpoint replicates all the task tables to this
     * single database. For MySQL endpoints, you specify the database only when you
     * specify the schema in the table-mapping rules of the DMS task.</p>
     */
    inline void SetDatabaseName(const char* value) { m_databaseNameHasBeenSet = true; m_databaseName.assign(value); }

    /**
     * <p>Database name for the endpoint. For a MySQL source or target endpoint, don't
     * explicitly specify the database using the <code>DatabaseName</code> request
     * parameter on either the <code>CreateEndpoint</code> or
     * <code>ModifyEndpoint</code> API call. Specifying <code>DatabaseName</code> when
     * you create or modify a MySQL endpoint replicates all the task tables to this
     * single database. For MySQL endpoints, you specify the database only when you
     * specify the schema in the table-mapping rules of the DMS task.</p>
     */
    inline MySQLSettings& WithDatabaseName(const Aws::String& value) { SetDatabaseName(value); return *this;}

    /**
     * <p>Database name for the endpoint. For a MySQL source or target endpoint, don't
     * explicitly specify the database using the <code>DatabaseName</code> request
     * parameter on either the <code>CreateEndpoint</code> or
     * <code>ModifyEndpoint</code> API call. Specifying <code>DatabaseName</code> when
     * you create or modify a MySQL endpoint replicates all the task tables to this
     * single database. For MySQL endpoints, you specify the database only when you
     * specify the schema in the table-mapping rules of the DMS task.</p>
     */
    inline MySQLSettings& WithDatabaseName(Aws::String&& value) { SetDatabaseName(std::move(value)); return *this;}

    /**
     * <p>Database name for the endpoint. For a MySQL source or target endpoint, don't
     * explicitly specify the database using the <code>DatabaseName</code> request
     * parameter on either the <code>CreateEndpoint</code> or
     * <code>ModifyEndpoint</code> API call. Specifying <code>DatabaseName</code> when
     * you create or modify a MySQL endpoint replicates all the task tables to this
     * single database. For MySQL endpoints, you specify the database only when you
     * specify the schema in the table-mapping rules of the DMS task.</p>
     */
    inline MySQLSettings& WithDatabaseName(const char* value) { SetDatabaseName(value); return *this;}


    /**
     * <p>Specifies how often to check the binary log for new changes/events when the
     * database is idle. The default is five seconds.</p> <p>Example:
     * <code>eventsPollInterval=5;</code> </p> <p>In the example, DMS checks for
     * changes in the binary logs every five seconds.</p>
     */
    inline int GetEventsPollInterval() const{ return m_eventsPollInterval; }

    /**
     * <p>Specifies how often to check the binary log for new changes/events when the
     * database is idle. The default is five seconds.</p> <p>Example:
     * <code>eventsPollInterval=5;</code> </p> <p>In the example, DMS checks for
     * changes in the binary logs every five seconds.</p>
     */
    inline bool EventsPollIntervalHasBeenSet() const { return m_eventsPollIntervalHasBeenSet; }

    /**
     * <p>Specifies how often to check the binary log for new changes/events when the
     * database is idle. The default is five seconds.</p> <p>Example:
     * <code>eventsPollInterval=5;</code> </p> <p>In the example, DMS checks for
     * changes in the binary logs every five seconds.</p>
     */
    inline void SetEventsPollInterval(int value) { m_eventsPollIntervalHasBeenSet = true; m_eventsPollInterval = value; }

    /**
     * <p>Specifies how often to check the binary log for new changes/events when the
     * database is idle. The default is five seconds.</p> <p>Example:
     * <code>eventsPollInterval=5;</code> </p> <p>In the example, DMS checks for
     * changes in the binary logs every five seconds.</p>
     */
    inline MySQLSettings& WithEventsPollInterval(int value) { SetEventsPollInterval(value); return *this;}


    /**
     * <p>Specifies where to migrate source tables on the target, either to a single
     * database or multiple databases. If you specify <code>SPECIFIC_DATABASE</code>,
     * specify the database name using the <code>DatabaseName</code> parameter of the
     * <code>Endpoint</code> object.</p> <p>Example:
     * <code>targetDbType=MULTIPLE_DATABASES</code> </p>
     */
    inline const TargetDbType& GetTargetDbType() const{ return m_targetDbType; }

    /**
     * <p>Specifies where to migrate source tables on the target, either to a single
     * database or multiple databases. If you specify <code>SPECIFIC_DATABASE</code>,
     * specify the database name using the <code>DatabaseName</code> parameter of the
     * <code>Endpoint</code> object.</p> <p>Example:
     * <code>targetDbType=MULTIPLE_DATABASES</code> </p>
     */
    inline bool TargetDbTypeHasBeenSet() const { return m_targetDbTypeHasBeenSet; }

    /**
     * <p>Specifies where to migrate source tables on the target, either to a single
     * database or multiple databases. If you specify <code>SPECIFIC_DATABASE</code>,
     * specify the database name using the <code>DatabaseName</code> parameter of the
     * <code>Endpoint</code> object.</p> <p>Example:
     * <code>targetDbType=MULTIPLE_DATABASES</code> </p>
     */
    inline void SetTargetDbType(const TargetDbType& value) { m_targetDbTypeHasBeenSet = true; m_targetDbType = value; }

    /**
     * <p>Specifies where to migrate source tables on the target, either to a single
     * database or multiple databases. If you specify <code>SPECIFIC_DATABASE</code>,
     * specify the database name using the <code>DatabaseName</code> parameter of the
     * <code>Endpoint</code> object.</p> <p>Example:
     * <code>targetDbType=MULTIPLE_DATABASES</code> </p>
     */
    inline void SetTargetDbType(TargetDbType&& value) { m_targetDbTypeHasBeenSet = true; m_targetDbType = std::move(value); }

    /**
     * <p>Specifies where to migrate source tables on the target, either to a single
     * database or multiple databases. If you specify <code>SPECIFIC_DATABASE</code>,
     * specify the database name using the <code>DatabaseName</code> parameter of the
     * <code>Endpoint</code> object.</p> <p>Example:
     * <code>targetDbType=MULTIPLE_DATABASES</code> </p>
     */
    inline MySQLSettings& WithTargetDbType(const TargetDbType& value) { SetTargetDbType(value); return *this;}

    /**
     * <p>Specifies where to migrate source tables on the target, either to a single
     * database or multiple databases. If you specify <code>SPECIFIC_DATABASE</code>,
     * specify the database name using the <code>DatabaseName</code> parameter of the
     * <code>Endpoint</code> object.</p> <p>Example:
     * <code>targetDbType=MULTIPLE_DATABASES</code> </p>
     */
    inline MySQLSettings& WithTargetDbType(TargetDbType&& value) { SetTargetDbType(std::move(value)); return *this;}


    /**
     * <p>Specifies the maximum size (in KB) of any .csv file used to transfer data to
     * a MySQL-compatible database.</p> <p>Example: <code>maxFileSize=512</code> </p>
     */
    inline int GetMaxFileSize() const{ return m_maxFileSize; }

    /**
     * <p>Specifies the maximum size (in KB) of any .csv file used to transfer data to
     * a MySQL-compatible database.</p> <p>Example: <code>maxFileSize=512</code> </p>
     */
    inline bool MaxFileSizeHasBeenSet() const { return m_maxFileSizeHasBeenSet; }

    /**
     * <p>Specifies the maximum size (in KB) of any .csv file used to transfer data to
     * a MySQL-compatible database.</p> <p>Example: <code>maxFileSize=512</code> </p>
     */
    inline void SetMaxFileSize(int value) { m_maxFileSizeHasBeenSet = true; m_maxFileSize = value; }

    /**
     * <p>Specifies the maximum size (in KB) of any .csv file used to transfer data to
     * a MySQL-compatible database.</p> <p>Example: <code>maxFileSize=512</code> </p>
     */
    inline MySQLSettings& WithMaxFileSize(int value) { SetMaxFileSize(value); return *this;}


    /**
     * <p>Improves performance when loading data into the MySQL-compatible target
     * database. Specifies how many threads to use to load the data into the
     * MySQL-compatible target database. Setting a large number of threads can have an
     * adverse effect on database performance, because a separate connection is
     * required for each thread. The default is one.</p> <p>Example:
     * <code>parallelLoadThreads=1</code> </p>
     */
    inline int GetParallelLoadThreads() const{ return m_parallelLoadThreads; }

    /**
     * <p>Improves performance when loading data into the MySQL-compatible target
     * database. Specifies how many threads to use to load the data into the
     * MySQL-compatible target database. Setting a large number of threads can have an
     * adverse effect on database performance, because a separate connection is
     * required for each thread. The default is one.</p> <p>Example:
     * <code>parallelLoadThreads=1</code> </p>
     */
    inline bool ParallelLoadThreadsHasBeenSet() const { return m_parallelLoadThreadsHasBeenSet; }

    /**
     * <p>Improves performance when loading data into the MySQL-compatible target
     * database. Specifies how many threads to use to load the data into the
     * MySQL-compatible target database. Setting a large number of threads can have an
     * adverse effect on database performance, because a separate connection is
     * required for each thread. The default is one.</p> <p>Example:
     * <code>parallelLoadThreads=1</code> </p>
     */
    inline void SetParallelLoadThreads(int value) { m_parallelLoadThreadsHasBeenSet = true; m_parallelLoadThreads = value; }

    /**
     * <p>Improves performance when loading data into the MySQL-compatible target
     * database. Specifies how many threads to use to load the data into the
     * MySQL-compatible target database. Setting a large number of threads can have an
     * adverse effect on database performance, because a separate connection is
     * required for each thread. The default is one.</p> <p>Example:
     * <code>parallelLoadThreads=1</code> </p>
     */
    inline MySQLSettings& WithParallelLoadThreads(int value) { SetParallelLoadThreads(value); return *this;}


    /**
     * <p>Endpoint connection password.</p>
     */
    inline const Aws::String& GetPassword() const{ return m_password; }

    /**
     * <p>Endpoint connection password.</p>
     */
    inline bool PasswordHasBeenSet() const { return m_passwordHasBeenSet; }

    /**
     * <p>Endpoint connection password.</p>
     */
    inline void SetPassword(const Aws::String& value) { m_passwordHasBeenSet = true; m_password = value; }

    /**
     * <p>Endpoint connection password.</p>
     */
    inline void SetPassword(Aws::String&& value) { m_passwordHasBeenSet = true; m_password = std::move(value); }

    /**
     * <p>Endpoint connection password.</p>
     */
    inline void SetPassword(const char* value) { m_passwordHasBeenSet = true; m_password.assign(value); }

    /**
     * <p>Endpoint connection password.</p>
     */
    inline MySQLSettings& WithPassword(const Aws::String& value) { SetPassword(value); return *this;}

    /**
     * <p>Endpoint connection password.</p>
     */
    inline MySQLSettings& WithPassword(Aws::String&& value) { SetPassword(std::move(value)); return *this;}

    /**
     * <p>Endpoint connection password.</p>
     */
    inline MySQLSettings& WithPassword(const char* value) { SetPassword(value); return *this;}


    /**
     * <p>Endpoint TCP port.</p>
     */
    inline int GetPort() const{ return m_port; }

    /**
     * <p>Endpoint TCP port.</p>
     */
    inline bool PortHasBeenSet() const { return m_portHasBeenSet; }

    /**
     * <p>Endpoint TCP port.</p>
     */
    inline void SetPort(int value) { m_portHasBeenSet = true; m_port = value; }

    /**
     * <p>Endpoint TCP port.</p>
     */
    inline MySQLSettings& WithPort(int value) { SetPort(value); return *this;}


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
    inline MySQLSettings& WithServerName(const Aws::String& value) { SetServerName(value); return *this;}

    /**
     * <p>Fully qualified domain name of the endpoint.</p>
     */
    inline MySQLSettings& WithServerName(Aws::String&& value) { SetServerName(std::move(value)); return *this;}

    /**
     * <p>Fully qualified domain name of the endpoint.</p>
     */
    inline MySQLSettings& WithServerName(const char* value) { SetServerName(value); return *this;}


    /**
     * <p>Specifies the time zone for the source MySQL database.</p> <p>Example:
     * <code>serverTimezone=US/Pacific;</code> </p> <p>Note: Do not enclose time zones
     * in single quotes.</p>
     */
    inline const Aws::String& GetServerTimezone() const{ return m_serverTimezone; }

    /**
     * <p>Specifies the time zone for the source MySQL database.</p> <p>Example:
     * <code>serverTimezone=US/Pacific;</code> </p> <p>Note: Do not enclose time zones
     * in single quotes.</p>
     */
    inline bool ServerTimezoneHasBeenSet() const { return m_serverTimezoneHasBeenSet; }

    /**
     * <p>Specifies the time zone for the source MySQL database.</p> <p>Example:
     * <code>serverTimezone=US/Pacific;</code> </p> <p>Note: Do not enclose time zones
     * in single quotes.</p>
     */
    inline void SetServerTimezone(const Aws::String& value) { m_serverTimezoneHasBeenSet = true; m_serverTimezone = value; }

    /**
     * <p>Specifies the time zone for the source MySQL database.</p> <p>Example:
     * <code>serverTimezone=US/Pacific;</code> </p> <p>Note: Do not enclose time zones
     * in single quotes.</p>
     */
    inline void SetServerTimezone(Aws::String&& value) { m_serverTimezoneHasBeenSet = true; m_serverTimezone = std::move(value); }

    /**
     * <p>Specifies the time zone for the source MySQL database.</p> <p>Example:
     * <code>serverTimezone=US/Pacific;</code> </p> <p>Note: Do not enclose time zones
     * in single quotes.</p>
     */
    inline void SetServerTimezone(const char* value) { m_serverTimezoneHasBeenSet = true; m_serverTimezone.assign(value); }

    /**
     * <p>Specifies the time zone for the source MySQL database.</p> <p>Example:
     * <code>serverTimezone=US/Pacific;</code> </p> <p>Note: Do not enclose time zones
     * in single quotes.</p>
     */
    inline MySQLSettings& WithServerTimezone(const Aws::String& value) { SetServerTimezone(value); return *this;}

    /**
     * <p>Specifies the time zone for the source MySQL database.</p> <p>Example:
     * <code>serverTimezone=US/Pacific;</code> </p> <p>Note: Do not enclose time zones
     * in single quotes.</p>
     */
    inline MySQLSettings& WithServerTimezone(Aws::String&& value) { SetServerTimezone(std::move(value)); return *this;}

    /**
     * <p>Specifies the time zone for the source MySQL database.</p> <p>Example:
     * <code>serverTimezone=US/Pacific;</code> </p> <p>Note: Do not enclose time zones
     * in single quotes.</p>
     */
    inline MySQLSettings& WithServerTimezone(const char* value) { SetServerTimezone(value); return *this;}


    /**
     * <p>Endpoint connection user name.</p>
     */
    inline const Aws::String& GetUsername() const{ return m_username; }

    /**
     * <p>Endpoint connection user name.</p>
     */
    inline bool UsernameHasBeenSet() const { return m_usernameHasBeenSet; }

    /**
     * <p>Endpoint connection user name.</p>
     */
    inline void SetUsername(const Aws::String& value) { m_usernameHasBeenSet = true; m_username = value; }

    /**
     * <p>Endpoint connection user name.</p>
     */
    inline void SetUsername(Aws::String&& value) { m_usernameHasBeenSet = true; m_username = std::move(value); }

    /**
     * <p>Endpoint connection user name.</p>
     */
    inline void SetUsername(const char* value) { m_usernameHasBeenSet = true; m_username.assign(value); }

    /**
     * <p>Endpoint connection user name.</p>
     */
    inline MySQLSettings& WithUsername(const Aws::String& value) { SetUsername(value); return *this;}

    /**
     * <p>Endpoint connection user name.</p>
     */
    inline MySQLSettings& WithUsername(Aws::String&& value) { SetUsername(std::move(value)); return *this;}

    /**
     * <p>Endpoint connection user name.</p>
     */
    inline MySQLSettings& WithUsername(const char* value) { SetUsername(value); return *this;}


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
    inline const Aws::String& GetSecretsManagerAccessRoleArn() const{ return m_secretsManagerAccessRoleArn; }

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
    inline bool SecretsManagerAccessRoleArnHasBeenSet() const { return m_secretsManagerAccessRoleArnHasBeenSet; }

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
    inline void SetSecretsManagerAccessRoleArn(const Aws::String& value) { m_secretsManagerAccessRoleArnHasBeenSet = true; m_secretsManagerAccessRoleArn = value; }

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
    inline void SetSecretsManagerAccessRoleArn(Aws::String&& value) { m_secretsManagerAccessRoleArnHasBeenSet = true; m_secretsManagerAccessRoleArn = std::move(value); }

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
    inline void SetSecretsManagerAccessRoleArn(const char* value) { m_secretsManagerAccessRoleArnHasBeenSet = true; m_secretsManagerAccessRoleArn.assign(value); }

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
    inline MySQLSettings& WithSecretsManagerAccessRoleArn(const Aws::String& value) { SetSecretsManagerAccessRoleArn(value); return *this;}

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
    inline MySQLSettings& WithSecretsManagerAccessRoleArn(Aws::String&& value) { SetSecretsManagerAccessRoleArn(std::move(value)); return *this;}

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
    inline MySQLSettings& WithSecretsManagerAccessRoleArn(const char* value) { SetSecretsManagerAccessRoleArn(value); return *this;}


    /**
     * <p>The full ARN, partial ARN, or friendly name of the
     * <code>SecretsManagerSecret</code> that contains the MySQL endpoint connection
     * details.</p>
     */
    inline const Aws::String& GetSecretsManagerSecretId() const{ return m_secretsManagerSecretId; }

    /**
     * <p>The full ARN, partial ARN, or friendly name of the
     * <code>SecretsManagerSecret</code> that contains the MySQL endpoint connection
     * details.</p>
     */
    inline bool SecretsManagerSecretIdHasBeenSet() const { return m_secretsManagerSecretIdHasBeenSet; }

    /**
     * <p>The full ARN, partial ARN, or friendly name of the
     * <code>SecretsManagerSecret</code> that contains the MySQL endpoint connection
     * details.</p>
     */
    inline void SetSecretsManagerSecretId(const Aws::String& value) { m_secretsManagerSecretIdHasBeenSet = true; m_secretsManagerSecretId = value; }

    /**
     * <p>The full ARN, partial ARN, or friendly name of the
     * <code>SecretsManagerSecret</code> that contains the MySQL endpoint connection
     * details.</p>
     */
    inline void SetSecretsManagerSecretId(Aws::String&& value) { m_secretsManagerSecretIdHasBeenSet = true; m_secretsManagerSecretId = std::move(value); }

    /**
     * <p>The full ARN, partial ARN, or friendly name of the
     * <code>SecretsManagerSecret</code> that contains the MySQL endpoint connection
     * details.</p>
     */
    inline void SetSecretsManagerSecretId(const char* value) { m_secretsManagerSecretIdHasBeenSet = true; m_secretsManagerSecretId.assign(value); }

    /**
     * <p>The full ARN, partial ARN, or friendly name of the
     * <code>SecretsManagerSecret</code> that contains the MySQL endpoint connection
     * details.</p>
     */
    inline MySQLSettings& WithSecretsManagerSecretId(const Aws::String& value) { SetSecretsManagerSecretId(value); return *this;}

    /**
     * <p>The full ARN, partial ARN, or friendly name of the
     * <code>SecretsManagerSecret</code> that contains the MySQL endpoint connection
     * details.</p>
     */
    inline MySQLSettings& WithSecretsManagerSecretId(Aws::String&& value) { SetSecretsManagerSecretId(std::move(value)); return *this;}

    /**
     * <p>The full ARN, partial ARN, or friendly name of the
     * <code>SecretsManagerSecret</code> that contains the MySQL endpoint connection
     * details.</p>
     */
    inline MySQLSettings& WithSecretsManagerSecretId(const char* value) { SetSecretsManagerSecretId(value); return *this;}

  private:

    Aws::String m_afterConnectScript;
    bool m_afterConnectScriptHasBeenSet = false;

    bool m_cleanSourceMetadataOnMismatch;
    bool m_cleanSourceMetadataOnMismatchHasBeenSet = false;

    Aws::String m_databaseName;
    bool m_databaseNameHasBeenSet = false;

    int m_eventsPollInterval;
    bool m_eventsPollIntervalHasBeenSet = false;

    TargetDbType m_targetDbType;
    bool m_targetDbTypeHasBeenSet = false;

    int m_maxFileSize;
    bool m_maxFileSizeHasBeenSet = false;

    int m_parallelLoadThreads;
    bool m_parallelLoadThreadsHasBeenSet = false;

    Aws::String m_password;
    bool m_passwordHasBeenSet = false;

    int m_port;
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
  };

} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws
