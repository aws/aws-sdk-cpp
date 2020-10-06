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
  class AWS_DATABASEMIGRATIONSERVICE_API MicrosoftSQLServerSettings
  {
  public:
    MicrosoftSQLServerSettings();
    MicrosoftSQLServerSettings(Aws::Utils::Json::JsonView jsonValue);
    MicrosoftSQLServerSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


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
     * <p>Specify a filegroup for the AWS DMS internal tables. When the replication
     * task starts, all the internal AWS DMS control tables (awsdms_ apply_exception,
     * awsdms_apply, awsdms_changes) are created on the specified filegroup.</p>
     */
    inline const Aws::String& GetControlTablesFileGroup() const{ return m_controlTablesFileGroup; }

    /**
     * <p>Specify a filegroup for the AWS DMS internal tables. When the replication
     * task starts, all the internal AWS DMS control tables (awsdms_ apply_exception,
     * awsdms_apply, awsdms_changes) are created on the specified filegroup.</p>
     */
    inline bool ControlTablesFileGroupHasBeenSet() const { return m_controlTablesFileGroupHasBeenSet; }

    /**
     * <p>Specify a filegroup for the AWS DMS internal tables. When the replication
     * task starts, all the internal AWS DMS control tables (awsdms_ apply_exception,
     * awsdms_apply, awsdms_changes) are created on the specified filegroup.</p>
     */
    inline void SetControlTablesFileGroup(const Aws::String& value) { m_controlTablesFileGroupHasBeenSet = true; m_controlTablesFileGroup = value; }

    /**
     * <p>Specify a filegroup for the AWS DMS internal tables. When the replication
     * task starts, all the internal AWS DMS control tables (awsdms_ apply_exception,
     * awsdms_apply, awsdms_changes) are created on the specified filegroup.</p>
     */
    inline void SetControlTablesFileGroup(Aws::String&& value) { m_controlTablesFileGroupHasBeenSet = true; m_controlTablesFileGroup = std::move(value); }

    /**
     * <p>Specify a filegroup for the AWS DMS internal tables. When the replication
     * task starts, all the internal AWS DMS control tables (awsdms_ apply_exception,
     * awsdms_apply, awsdms_changes) are created on the specified filegroup.</p>
     */
    inline void SetControlTablesFileGroup(const char* value) { m_controlTablesFileGroupHasBeenSet = true; m_controlTablesFileGroup.assign(value); }

    /**
     * <p>Specify a filegroup for the AWS DMS internal tables. When the replication
     * task starts, all the internal AWS DMS control tables (awsdms_ apply_exception,
     * awsdms_apply, awsdms_changes) are created on the specified filegroup.</p>
     */
    inline MicrosoftSQLServerSettings& WithControlTablesFileGroup(const Aws::String& value) { SetControlTablesFileGroup(value); return *this;}

    /**
     * <p>Specify a filegroup for the AWS DMS internal tables. When the replication
     * task starts, all the internal AWS DMS control tables (awsdms_ apply_exception,
     * awsdms_apply, awsdms_changes) are created on the specified filegroup.</p>
     */
    inline MicrosoftSQLServerSettings& WithControlTablesFileGroup(Aws::String&& value) { SetControlTablesFileGroup(std::move(value)); return *this;}

    /**
     * <p>Specify a filegroup for the AWS DMS internal tables. When the replication
     * task starts, all the internal AWS DMS control tables (awsdms_ apply_exception,
     * awsdms_apply, awsdms_changes) are created on the specified filegroup.</p>
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
     * <p>When this attribute is set to <code>Y</code>, AWS DMS only reads changes from
     * transaction log backups and doesn't read from the active transaction log file
     * during ongoing replication. Setting this parameter to <code>Y</code> enables you
     * to control active transaction log file growth during full load and ongoing
     * replication tasks. However, it can add some source latency to ongoing
     * replication.</p>
     */
    inline bool GetReadBackupOnly() const{ return m_readBackupOnly; }

    /**
     * <p>When this attribute is set to <code>Y</code>, AWS DMS only reads changes from
     * transaction log backups and doesn't read from the active transaction log file
     * during ongoing replication. Setting this parameter to <code>Y</code> enables you
     * to control active transaction log file growth during full load and ongoing
     * replication tasks. However, it can add some source latency to ongoing
     * replication.</p>
     */
    inline bool ReadBackupOnlyHasBeenSet() const { return m_readBackupOnlyHasBeenSet; }

    /**
     * <p>When this attribute is set to <code>Y</code>, AWS DMS only reads changes from
     * transaction log backups and doesn't read from the active transaction log file
     * during ongoing replication. Setting this parameter to <code>Y</code> enables you
     * to control active transaction log file growth during full load and ongoing
     * replication tasks. However, it can add some source latency to ongoing
     * replication.</p>
     */
    inline void SetReadBackupOnly(bool value) { m_readBackupOnlyHasBeenSet = true; m_readBackupOnly = value; }

    /**
     * <p>When this attribute is set to <code>Y</code>, AWS DMS only reads changes from
     * transaction log backups and doesn't read from the active transaction log file
     * during ongoing replication. Setting this parameter to <code>Y</code> enables you
     * to control active transaction log file growth during full load and ongoing
     * replication tasks. However, it can add some source latency to ongoing
     * replication.</p>
     */
    inline MicrosoftSQLServerSettings& WithReadBackupOnly(bool value) { SetReadBackupOnly(value); return *this;}


    /**
     * <p>Use this attribute to minimize the need to access the backup log and enable
     * AWS DMS to prevent truncation using one of the following two methods.</p> <p>
     * <i>Start transactions in the database:</i> This is the default method. When this
     * method is used, AWS DMS prevents TLOG truncation by mimicking a transaction in
     * the database. As long as such a transaction is open, changes that appear after
     * the transaction started aren't truncated. If you need Microsoft Replication to
     * be enabled in your database, then you must choose this method.</p> <p>
     * <i>Exclusively use sp_repldone within a single task</i>: When this method is
     * used, AWS DMS reads the changes and then uses sp_repldone to mark the TLOG
     * transactions as ready for truncation. Although this method doesn't involve any
     * transactional activities, it can only be used when Microsoft Replication isn't
     * running. Also, when using this method, only one AWS DMS task can access the
     * database at any given time. Therefore, if you need to run parallel AWS DMS tasks
     * against the same database, use the default method.</p>
     */
    inline const SafeguardPolicy& GetSafeguardPolicy() const{ return m_safeguardPolicy; }

    /**
     * <p>Use this attribute to minimize the need to access the backup log and enable
     * AWS DMS to prevent truncation using one of the following two methods.</p> <p>
     * <i>Start transactions in the database:</i> This is the default method. When this
     * method is used, AWS DMS prevents TLOG truncation by mimicking a transaction in
     * the database. As long as such a transaction is open, changes that appear after
     * the transaction started aren't truncated. If you need Microsoft Replication to
     * be enabled in your database, then you must choose this method.</p> <p>
     * <i>Exclusively use sp_repldone within a single task</i>: When this method is
     * used, AWS DMS reads the changes and then uses sp_repldone to mark the TLOG
     * transactions as ready for truncation. Although this method doesn't involve any
     * transactional activities, it can only be used when Microsoft Replication isn't
     * running. Also, when using this method, only one AWS DMS task can access the
     * database at any given time. Therefore, if you need to run parallel AWS DMS tasks
     * against the same database, use the default method.</p>
     */
    inline bool SafeguardPolicyHasBeenSet() const { return m_safeguardPolicyHasBeenSet; }

    /**
     * <p>Use this attribute to minimize the need to access the backup log and enable
     * AWS DMS to prevent truncation using one of the following two methods.</p> <p>
     * <i>Start transactions in the database:</i> This is the default method. When this
     * method is used, AWS DMS prevents TLOG truncation by mimicking a transaction in
     * the database. As long as such a transaction is open, changes that appear after
     * the transaction started aren't truncated. If you need Microsoft Replication to
     * be enabled in your database, then you must choose this method.</p> <p>
     * <i>Exclusively use sp_repldone within a single task</i>: When this method is
     * used, AWS DMS reads the changes and then uses sp_repldone to mark the TLOG
     * transactions as ready for truncation. Although this method doesn't involve any
     * transactional activities, it can only be used when Microsoft Replication isn't
     * running. Also, when using this method, only one AWS DMS task can access the
     * database at any given time. Therefore, if you need to run parallel AWS DMS tasks
     * against the same database, use the default method.</p>
     */
    inline void SetSafeguardPolicy(const SafeguardPolicy& value) { m_safeguardPolicyHasBeenSet = true; m_safeguardPolicy = value; }

    /**
     * <p>Use this attribute to minimize the need to access the backup log and enable
     * AWS DMS to prevent truncation using one of the following two methods.</p> <p>
     * <i>Start transactions in the database:</i> This is the default method. When this
     * method is used, AWS DMS prevents TLOG truncation by mimicking a transaction in
     * the database. As long as such a transaction is open, changes that appear after
     * the transaction started aren't truncated. If you need Microsoft Replication to
     * be enabled in your database, then you must choose this method.</p> <p>
     * <i>Exclusively use sp_repldone within a single task</i>: When this method is
     * used, AWS DMS reads the changes and then uses sp_repldone to mark the TLOG
     * transactions as ready for truncation. Although this method doesn't involve any
     * transactional activities, it can only be used when Microsoft Replication isn't
     * running. Also, when using this method, only one AWS DMS task can access the
     * database at any given time. Therefore, if you need to run parallel AWS DMS tasks
     * against the same database, use the default method.</p>
     */
    inline void SetSafeguardPolicy(SafeguardPolicy&& value) { m_safeguardPolicyHasBeenSet = true; m_safeguardPolicy = std::move(value); }

    /**
     * <p>Use this attribute to minimize the need to access the backup log and enable
     * AWS DMS to prevent truncation using one of the following two methods.</p> <p>
     * <i>Start transactions in the database:</i> This is the default method. When this
     * method is used, AWS DMS prevents TLOG truncation by mimicking a transaction in
     * the database. As long as such a transaction is open, changes that appear after
     * the transaction started aren't truncated. If you need Microsoft Replication to
     * be enabled in your database, then you must choose this method.</p> <p>
     * <i>Exclusively use sp_repldone within a single task</i>: When this method is
     * used, AWS DMS reads the changes and then uses sp_repldone to mark the TLOG
     * transactions as ready for truncation. Although this method doesn't involve any
     * transactional activities, it can only be used when Microsoft Replication isn't
     * running. Also, when using this method, only one AWS DMS task can access the
     * database at any given time. Therefore, if you need to run parallel AWS DMS tasks
     * against the same database, use the default method.</p>
     */
    inline MicrosoftSQLServerSettings& WithSafeguardPolicy(const SafeguardPolicy& value) { SetSafeguardPolicy(value); return *this;}

    /**
     * <p>Use this attribute to minimize the need to access the backup log and enable
     * AWS DMS to prevent truncation using one of the following two methods.</p> <p>
     * <i>Start transactions in the database:</i> This is the default method. When this
     * method is used, AWS DMS prevents TLOG truncation by mimicking a transaction in
     * the database. As long as such a transaction is open, changes that appear after
     * the transaction started aren't truncated. If you need Microsoft Replication to
     * be enabled in your database, then you must choose this method.</p> <p>
     * <i>Exclusively use sp_repldone within a single task</i>: When this method is
     * used, AWS DMS reads the changes and then uses sp_repldone to mark the TLOG
     * transactions as ready for truncation. Although this method doesn't involve any
     * transactional activities, it can only be used when Microsoft Replication isn't
     * running. Also, when using this method, only one AWS DMS task can access the
     * database at any given time. Therefore, if you need to run parallel AWS DMS tasks
     * against the same database, use the default method.</p>
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

  private:

    int m_port;
    bool m_portHasBeenSet;

    int m_bcpPacketSize;
    bool m_bcpPacketSizeHasBeenSet;

    Aws::String m_databaseName;
    bool m_databaseNameHasBeenSet;

    Aws::String m_controlTablesFileGroup;
    bool m_controlTablesFileGroupHasBeenSet;

    Aws::String m_password;
    bool m_passwordHasBeenSet;

    bool m_readBackupOnly;
    bool m_readBackupOnlyHasBeenSet;

    SafeguardPolicy m_safeguardPolicy;
    bool m_safeguardPolicyHasBeenSet;

    Aws::String m_serverName;
    bool m_serverNameHasBeenSet;

    Aws::String m_username;
    bool m_usernameHasBeenSet;

    bool m_useBcpFullLoad;
    bool m_useBcpFullLoadHasBeenSet;
  };

} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws
