/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dms/DatabaseMigrationService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/dms/model/SafeguardPolicy.h>
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
    AWS_DATABASEMIGRATIONSERVICE_API MicrosoftSQLServerSettings();
    AWS_DATABASEMIGRATIONSERVICE_API MicrosoftSQLServerSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATABASEMIGRATIONSERVICE_API MicrosoftSQLServerSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATABASEMIGRATIONSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


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
    inline MicrosoftSQLServerSettings& WithPort(int value) { SetPort(value); return *this;}


    /**
     * <p>The maximum size of the packets (in bytes) used to transfer data using
     * BCP.</p>
     */
    inline int GetBcpPacketSize() const{ return m_bcpPacketSize; }

    /**
     * <p>The maximum size of the packets (in bytes) used to transfer data using
     * BCP.</p>
     */
    inline bool BcpPacketSizeHasBeenSet() const { return m_bcpPacketSizeHasBeenSet; }

    /**
     * <p>The maximum size of the packets (in bytes) used to transfer data using
     * BCP.</p>
     */
    inline void SetBcpPacketSize(int value) { m_bcpPacketSizeHasBeenSet = true; m_bcpPacketSize = value; }

    /**
     * <p>The maximum size of the packets (in bytes) used to transfer data using
     * BCP.</p>
     */
    inline MicrosoftSQLServerSettings& WithBcpPacketSize(int value) { SetBcpPacketSize(value); return *this;}


    /**
     * <p>Database name for the endpoint.</p>
     */
    inline const Aws::String& GetDatabaseName() const{ return m_databaseName; }

    /**
     * <p>Database name for the endpoint.</p>
     */
    inline bool DatabaseNameHasBeenSet() const { return m_databaseNameHasBeenSet; }

    /**
     * <p>Database name for the endpoint.</p>
     */
    inline void SetDatabaseName(const Aws::String& value) { m_databaseNameHasBeenSet = true; m_databaseName = value; }

    /**
     * <p>Database name for the endpoint.</p>
     */
    inline void SetDatabaseName(Aws::String&& value) { m_databaseNameHasBeenSet = true; m_databaseName = std::move(value); }

    /**
     * <p>Database name for the endpoint.</p>
     */
    inline void SetDatabaseName(const char* value) { m_databaseNameHasBeenSet = true; m_databaseName.assign(value); }

    /**
     * <p>Database name for the endpoint.</p>
     */
    inline MicrosoftSQLServerSettings& WithDatabaseName(const Aws::String& value) { SetDatabaseName(value); return *this;}

    /**
     * <p>Database name for the endpoint.</p>
     */
    inline MicrosoftSQLServerSettings& WithDatabaseName(Aws::String&& value) { SetDatabaseName(std::move(value)); return *this;}

    /**
     * <p>Database name for the endpoint.</p>
     */
    inline MicrosoftSQLServerSettings& WithDatabaseName(const char* value) { SetDatabaseName(value); return *this;}


    /**
     * <p>Specifies a file group for the DMS internal tables. When the replication task
     * starts, all the internal DMS control tables (awsdms_ apply_exception,
     * awsdms_apply, awsdms_changes) are created for the specified file group.</p>
     */
    inline const Aws::String& GetControlTablesFileGroup() const{ return m_controlTablesFileGroup; }

    /**
     * <p>Specifies a file group for the DMS internal tables. When the replication task
     * starts, all the internal DMS control tables (awsdms_ apply_exception,
     * awsdms_apply, awsdms_changes) are created for the specified file group.</p>
     */
    inline bool ControlTablesFileGroupHasBeenSet() const { return m_controlTablesFileGroupHasBeenSet; }

    /**
     * <p>Specifies a file group for the DMS internal tables. When the replication task
     * starts, all the internal DMS control tables (awsdms_ apply_exception,
     * awsdms_apply, awsdms_changes) are created for the specified file group.</p>
     */
    inline void SetControlTablesFileGroup(const Aws::String& value) { m_controlTablesFileGroupHasBeenSet = true; m_controlTablesFileGroup = value; }

    /**
     * <p>Specifies a file group for the DMS internal tables. When the replication task
     * starts, all the internal DMS control tables (awsdms_ apply_exception,
     * awsdms_apply, awsdms_changes) are created for the specified file group.</p>
     */
    inline void SetControlTablesFileGroup(Aws::String&& value) { m_controlTablesFileGroupHasBeenSet = true; m_controlTablesFileGroup = std::move(value); }

    /**
     * <p>Specifies a file group for the DMS internal tables. When the replication task
     * starts, all the internal DMS control tables (awsdms_ apply_exception,
     * awsdms_apply, awsdms_changes) are created for the specified file group.</p>
     */
    inline void SetControlTablesFileGroup(const char* value) { m_controlTablesFileGroupHasBeenSet = true; m_controlTablesFileGroup.assign(value); }

    /**
     * <p>Specifies a file group for the DMS internal tables. When the replication task
     * starts, all the internal DMS control tables (awsdms_ apply_exception,
     * awsdms_apply, awsdms_changes) are created for the specified file group.</p>
     */
    inline MicrosoftSQLServerSettings& WithControlTablesFileGroup(const Aws::String& value) { SetControlTablesFileGroup(value); return *this;}

    /**
     * <p>Specifies a file group for the DMS internal tables. When the replication task
     * starts, all the internal DMS control tables (awsdms_ apply_exception,
     * awsdms_apply, awsdms_changes) are created for the specified file group.</p>
     */
    inline MicrosoftSQLServerSettings& WithControlTablesFileGroup(Aws::String&& value) { SetControlTablesFileGroup(std::move(value)); return *this;}

    /**
     * <p>Specifies a file group for the DMS internal tables. When the replication task
     * starts, all the internal DMS control tables (awsdms_ apply_exception,
     * awsdms_apply, awsdms_changes) are created for the specified file group.</p>
     */
    inline MicrosoftSQLServerSettings& WithControlTablesFileGroup(const char* value) { SetControlTablesFileGroup(value); return *this;}


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
    inline MicrosoftSQLServerSettings& WithPassword(const Aws::String& value) { SetPassword(value); return *this;}

    /**
     * <p>Endpoint connection password.</p>
     */
    inline MicrosoftSQLServerSettings& WithPassword(Aws::String&& value) { SetPassword(std::move(value)); return *this;}

    /**
     * <p>Endpoint connection password.</p>
     */
    inline MicrosoftSQLServerSettings& WithPassword(const char* value) { SetPassword(value); return *this;}


    /**
     * <p>Cleans and recreates table metadata information on the replication instance
     * when a mismatch occurs. An example is a situation where running an alter DDL
     * statement on a table might result in different information about the table
     * cached in the replication instance.</p>
     */
    inline bool GetQuerySingleAlwaysOnNode() const{ return m_querySingleAlwaysOnNode; }

    /**
     * <p>Cleans and recreates table metadata information on the replication instance
     * when a mismatch occurs. An example is a situation where running an alter DDL
     * statement on a table might result in different information about the table
     * cached in the replication instance.</p>
     */
    inline bool QuerySingleAlwaysOnNodeHasBeenSet() const { return m_querySingleAlwaysOnNodeHasBeenSet; }

    /**
     * <p>Cleans and recreates table metadata information on the replication instance
     * when a mismatch occurs. An example is a situation where running an alter DDL
     * statement on a table might result in different information about the table
     * cached in the replication instance.</p>
     */
    inline void SetQuerySingleAlwaysOnNode(bool value) { m_querySingleAlwaysOnNodeHasBeenSet = true; m_querySingleAlwaysOnNode = value; }

    /**
     * <p>Cleans and recreates table metadata information on the replication instance
     * when a mismatch occurs. An example is a situation where running an alter DDL
     * statement on a table might result in different information about the table
     * cached in the replication instance.</p>
     */
    inline MicrosoftSQLServerSettings& WithQuerySingleAlwaysOnNode(bool value) { SetQuerySingleAlwaysOnNode(value); return *this;}


    /**
     * <p>When this attribute is set to <code>Y</code>, DMS only reads changes from
     * transaction log backups and doesn't read from the active transaction log file
     * during ongoing replication. Setting this parameter to <code>Y</code> enables you
     * to control active transaction log file growth during full load and ongoing
     * replication tasks. However, it can add some source latency to ongoing
     * replication.</p>
     */
    inline bool GetReadBackupOnly() const{ return m_readBackupOnly; }

    /**
     * <p>When this attribute is set to <code>Y</code>, DMS only reads changes from
     * transaction log backups and doesn't read from the active transaction log file
     * during ongoing replication. Setting this parameter to <code>Y</code> enables you
     * to control active transaction log file growth during full load and ongoing
     * replication tasks. However, it can add some source latency to ongoing
     * replication.</p>
     */
    inline bool ReadBackupOnlyHasBeenSet() const { return m_readBackupOnlyHasBeenSet; }

    /**
     * <p>When this attribute is set to <code>Y</code>, DMS only reads changes from
     * transaction log backups and doesn't read from the active transaction log file
     * during ongoing replication. Setting this parameter to <code>Y</code> enables you
     * to control active transaction log file growth during full load and ongoing
     * replication tasks. However, it can add some source latency to ongoing
     * replication.</p>
     */
    inline void SetReadBackupOnly(bool value) { m_readBackupOnlyHasBeenSet = true; m_readBackupOnly = value; }

    /**
     * <p>When this attribute is set to <code>Y</code>, DMS only reads changes from
     * transaction log backups and doesn't read from the active transaction log file
     * during ongoing replication. Setting this parameter to <code>Y</code> enables you
     * to control active transaction log file growth during full load and ongoing
     * replication tasks. However, it can add some source latency to ongoing
     * replication.</p>
     */
    inline MicrosoftSQLServerSettings& WithReadBackupOnly(bool value) { SetReadBackupOnly(value); return *this;}


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
    inline const SafeguardPolicy& GetSafeguardPolicy() const{ return m_safeguardPolicy; }

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
    inline bool SafeguardPolicyHasBeenSet() const { return m_safeguardPolicyHasBeenSet; }

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
    inline void SetSafeguardPolicy(const SafeguardPolicy& value) { m_safeguardPolicyHasBeenSet = true; m_safeguardPolicy = value; }

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
    inline void SetSafeguardPolicy(SafeguardPolicy&& value) { m_safeguardPolicyHasBeenSet = true; m_safeguardPolicy = std::move(value); }

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
    inline MicrosoftSQLServerSettings& WithSafeguardPolicy(const SafeguardPolicy& value) { SetSafeguardPolicy(value); return *this;}

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
    inline MicrosoftSQLServerSettings& WithSafeguardPolicy(SafeguardPolicy&& value) { SetSafeguardPolicy(std::move(value)); return *this;}


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
    inline MicrosoftSQLServerSettings& WithServerName(const Aws::String& value) { SetServerName(value); return *this;}

    /**
     * <p>Fully qualified domain name of the endpoint.</p>
     */
    inline MicrosoftSQLServerSettings& WithServerName(Aws::String&& value) { SetServerName(std::move(value)); return *this;}

    /**
     * <p>Fully qualified domain name of the endpoint.</p>
     */
    inline MicrosoftSQLServerSettings& WithServerName(const char* value) { SetServerName(value); return *this;}


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
    inline MicrosoftSQLServerSettings& WithUsername(const Aws::String& value) { SetUsername(value); return *this;}

    /**
     * <p>Endpoint connection user name.</p>
     */
    inline MicrosoftSQLServerSettings& WithUsername(Aws::String&& value) { SetUsername(std::move(value)); return *this;}

    /**
     * <p>Endpoint connection user name.</p>
     */
    inline MicrosoftSQLServerSettings& WithUsername(const char* value) { SetUsername(value); return *this;}


    /**
     * <p>Use this to attribute to transfer data for full-load operations using BCP.
     * When the target table contains an identity column that does not exist in the
     * source table, you must disable the use BCP for loading table option.</p>
     */
    inline bool GetUseBcpFullLoad() const{ return m_useBcpFullLoad; }

    /**
     * <p>Use this to attribute to transfer data for full-load operations using BCP.
     * When the target table contains an identity column that does not exist in the
     * source table, you must disable the use BCP for loading table option.</p>
     */
    inline bool UseBcpFullLoadHasBeenSet() const { return m_useBcpFullLoadHasBeenSet; }

    /**
     * <p>Use this to attribute to transfer data for full-load operations using BCP.
     * When the target table contains an identity column that does not exist in the
     * source table, you must disable the use BCP for loading table option.</p>
     */
    inline void SetUseBcpFullLoad(bool value) { m_useBcpFullLoadHasBeenSet = true; m_useBcpFullLoad = value; }

    /**
     * <p>Use this to attribute to transfer data for full-load operations using BCP.
     * When the target table contains an identity column that does not exist in the
     * source table, you must disable the use BCP for loading table option.</p>
     */
    inline MicrosoftSQLServerSettings& WithUseBcpFullLoad(bool value) { SetUseBcpFullLoad(value); return *this;}


    /**
     * <p>When this attribute is set to <code>Y</code>, DMS processes third-party
     * transaction log backups if they are created in native format.</p>
     */
    inline bool GetUseThirdPartyBackupDevice() const{ return m_useThirdPartyBackupDevice; }

    /**
     * <p>When this attribute is set to <code>Y</code>, DMS processes third-party
     * transaction log backups if they are created in native format.</p>
     */
    inline bool UseThirdPartyBackupDeviceHasBeenSet() const { return m_useThirdPartyBackupDeviceHasBeenSet; }

    /**
     * <p>When this attribute is set to <code>Y</code>, DMS processes third-party
     * transaction log backups if they are created in native format.</p>
     */
    inline void SetUseThirdPartyBackupDevice(bool value) { m_useThirdPartyBackupDeviceHasBeenSet = true; m_useThirdPartyBackupDevice = value; }

    /**
     * <p>When this attribute is set to <code>Y</code>, DMS processes third-party
     * transaction log backups if they are created in native format.</p>
     */
    inline MicrosoftSQLServerSettings& WithUseThirdPartyBackupDevice(bool value) { SetUseThirdPartyBackupDevice(value); return *this;}


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
    inline const Aws::String& GetSecretsManagerAccessRoleArn() const{ return m_secretsManagerAccessRoleArn; }

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
    inline bool SecretsManagerAccessRoleArnHasBeenSet() const { return m_secretsManagerAccessRoleArnHasBeenSet; }

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
    inline void SetSecretsManagerAccessRoleArn(const Aws::String& value) { m_secretsManagerAccessRoleArnHasBeenSet = true; m_secretsManagerAccessRoleArn = value; }

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
    inline void SetSecretsManagerAccessRoleArn(Aws::String&& value) { m_secretsManagerAccessRoleArnHasBeenSet = true; m_secretsManagerAccessRoleArn = std::move(value); }

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
    inline void SetSecretsManagerAccessRoleArn(const char* value) { m_secretsManagerAccessRoleArnHasBeenSet = true; m_secretsManagerAccessRoleArn.assign(value); }

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
    inline MicrosoftSQLServerSettings& WithSecretsManagerAccessRoleArn(const Aws::String& value) { SetSecretsManagerAccessRoleArn(value); return *this;}

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
    inline MicrosoftSQLServerSettings& WithSecretsManagerAccessRoleArn(Aws::String&& value) { SetSecretsManagerAccessRoleArn(std::move(value)); return *this;}

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
    inline MicrosoftSQLServerSettings& WithSecretsManagerAccessRoleArn(const char* value) { SetSecretsManagerAccessRoleArn(value); return *this;}


    /**
     * <p>The full ARN, partial ARN, or friendly name of the
     * <code>SecretsManagerSecret</code> that contains the SQL Server endpoint
     * connection details.</p>
     */
    inline const Aws::String& GetSecretsManagerSecretId() const{ return m_secretsManagerSecretId; }

    /**
     * <p>The full ARN, partial ARN, or friendly name of the
     * <code>SecretsManagerSecret</code> that contains the SQL Server endpoint
     * connection details.</p>
     */
    inline bool SecretsManagerSecretIdHasBeenSet() const { return m_secretsManagerSecretIdHasBeenSet; }

    /**
     * <p>The full ARN, partial ARN, or friendly name of the
     * <code>SecretsManagerSecret</code> that contains the SQL Server endpoint
     * connection details.</p>
     */
    inline void SetSecretsManagerSecretId(const Aws::String& value) { m_secretsManagerSecretIdHasBeenSet = true; m_secretsManagerSecretId = value; }

    /**
     * <p>The full ARN, partial ARN, or friendly name of the
     * <code>SecretsManagerSecret</code> that contains the SQL Server endpoint
     * connection details.</p>
     */
    inline void SetSecretsManagerSecretId(Aws::String&& value) { m_secretsManagerSecretIdHasBeenSet = true; m_secretsManagerSecretId = std::move(value); }

    /**
     * <p>The full ARN, partial ARN, or friendly name of the
     * <code>SecretsManagerSecret</code> that contains the SQL Server endpoint
     * connection details.</p>
     */
    inline void SetSecretsManagerSecretId(const char* value) { m_secretsManagerSecretIdHasBeenSet = true; m_secretsManagerSecretId.assign(value); }

    /**
     * <p>The full ARN, partial ARN, or friendly name of the
     * <code>SecretsManagerSecret</code> that contains the SQL Server endpoint
     * connection details.</p>
     */
    inline MicrosoftSQLServerSettings& WithSecretsManagerSecretId(const Aws::String& value) { SetSecretsManagerSecretId(value); return *this;}

    /**
     * <p>The full ARN, partial ARN, or friendly name of the
     * <code>SecretsManagerSecret</code> that contains the SQL Server endpoint
     * connection details.</p>
     */
    inline MicrosoftSQLServerSettings& WithSecretsManagerSecretId(Aws::String&& value) { SetSecretsManagerSecretId(std::move(value)); return *this;}

    /**
     * <p>The full ARN, partial ARN, or friendly name of the
     * <code>SecretsManagerSecret</code> that contains the SQL Server endpoint
     * connection details.</p>
     */
    inline MicrosoftSQLServerSettings& WithSecretsManagerSecretId(const char* value) { SetSecretsManagerSecretId(value); return *this;}


    /**
     * <p>Use the <code>TrimSpaceInChar</code> source endpoint setting to trim data on
     * CHAR and NCHAR data types during migration. The default value is
     * <code>true</code>.</p>
     */
    inline bool GetTrimSpaceInChar() const{ return m_trimSpaceInChar; }

    /**
     * <p>Use the <code>TrimSpaceInChar</code> source endpoint setting to trim data on
     * CHAR and NCHAR data types during migration. The default value is
     * <code>true</code>.</p>
     */
    inline bool TrimSpaceInCharHasBeenSet() const { return m_trimSpaceInCharHasBeenSet; }

    /**
     * <p>Use the <code>TrimSpaceInChar</code> source endpoint setting to trim data on
     * CHAR and NCHAR data types during migration. The default value is
     * <code>true</code>.</p>
     */
    inline void SetTrimSpaceInChar(bool value) { m_trimSpaceInCharHasBeenSet = true; m_trimSpaceInChar = value; }

    /**
     * <p>Use the <code>TrimSpaceInChar</code> source endpoint setting to trim data on
     * CHAR and NCHAR data types during migration. The default value is
     * <code>true</code>.</p>
     */
    inline MicrosoftSQLServerSettings& WithTrimSpaceInChar(bool value) { SetTrimSpaceInChar(value); return *this;}

  private:

    int m_port;
    bool m_portHasBeenSet = false;

    int m_bcpPacketSize;
    bool m_bcpPacketSizeHasBeenSet = false;

    Aws::String m_databaseName;
    bool m_databaseNameHasBeenSet = false;

    Aws::String m_controlTablesFileGroup;
    bool m_controlTablesFileGroupHasBeenSet = false;

    Aws::String m_password;
    bool m_passwordHasBeenSet = false;

    bool m_querySingleAlwaysOnNode;
    bool m_querySingleAlwaysOnNodeHasBeenSet = false;

    bool m_readBackupOnly;
    bool m_readBackupOnlyHasBeenSet = false;

    SafeguardPolicy m_safeguardPolicy;
    bool m_safeguardPolicyHasBeenSet = false;

    Aws::String m_serverName;
    bool m_serverNameHasBeenSet = false;

    Aws::String m_username;
    bool m_usernameHasBeenSet = false;

    bool m_useBcpFullLoad;
    bool m_useBcpFullLoadHasBeenSet = false;

    bool m_useThirdPartyBackupDevice;
    bool m_useThirdPartyBackupDeviceHasBeenSet = false;

    Aws::String m_secretsManagerAccessRoleArn;
    bool m_secretsManagerAccessRoleArnHasBeenSet = false;

    Aws::String m_secretsManagerSecretId;
    bool m_secretsManagerSecretIdHasBeenSet = false;

    bool m_trimSpaceInChar;
    bool m_trimSpaceInCharHasBeenSet = false;
  };

} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws
