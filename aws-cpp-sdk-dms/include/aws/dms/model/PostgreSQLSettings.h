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
   * <p>Provides information that defines a PostgreSQL endpoint.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/dms-2016-01-01/PostgreSQLSettings">AWS
   * API Reference</a></p>
   */
  class AWS_DATABASEMIGRATIONSERVICE_API PostgreSQLSettings
  {
  public:
    PostgreSQLSettings();
    PostgreSQLSettings(Aws::Utils::Json::JsonView jsonValue);
    PostgreSQLSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>For use with change data capture (CDC) only, this attribute has AWS DMS
     * bypass foreign keys and user triggers to reduce the time it takes to bulk load
     * data.</p> <p>Example: <code>afterConnectScript=SET
     * session_replication_role='replica'</code> </p>
     */
    inline const Aws::String& GetAfterConnectScript() const{ return m_afterConnectScript; }

    /**
     * <p>For use with change data capture (CDC) only, this attribute has AWS DMS
     * bypass foreign keys and user triggers to reduce the time it takes to bulk load
     * data.</p> <p>Example: <code>afterConnectScript=SET
     * session_replication_role='replica'</code> </p>
     */
    inline bool AfterConnectScriptHasBeenSet() const { return m_afterConnectScriptHasBeenSet; }

    /**
     * <p>For use with change data capture (CDC) only, this attribute has AWS DMS
     * bypass foreign keys and user triggers to reduce the time it takes to bulk load
     * data.</p> <p>Example: <code>afterConnectScript=SET
     * session_replication_role='replica'</code> </p>
     */
    inline void SetAfterConnectScript(const Aws::String& value) { m_afterConnectScriptHasBeenSet = true; m_afterConnectScript = value; }

    /**
     * <p>For use with change data capture (CDC) only, this attribute has AWS DMS
     * bypass foreign keys and user triggers to reduce the time it takes to bulk load
     * data.</p> <p>Example: <code>afterConnectScript=SET
     * session_replication_role='replica'</code> </p>
     */
    inline void SetAfterConnectScript(Aws::String&& value) { m_afterConnectScriptHasBeenSet = true; m_afterConnectScript = std::move(value); }

    /**
     * <p>For use with change data capture (CDC) only, this attribute has AWS DMS
     * bypass foreign keys and user triggers to reduce the time it takes to bulk load
     * data.</p> <p>Example: <code>afterConnectScript=SET
     * session_replication_role='replica'</code> </p>
     */
    inline void SetAfterConnectScript(const char* value) { m_afterConnectScriptHasBeenSet = true; m_afterConnectScript.assign(value); }

    /**
     * <p>For use with change data capture (CDC) only, this attribute has AWS DMS
     * bypass foreign keys and user triggers to reduce the time it takes to bulk load
     * data.</p> <p>Example: <code>afterConnectScript=SET
     * session_replication_role='replica'</code> </p>
     */
    inline PostgreSQLSettings& WithAfterConnectScript(const Aws::String& value) { SetAfterConnectScript(value); return *this;}

    /**
     * <p>For use with change data capture (CDC) only, this attribute has AWS DMS
     * bypass foreign keys and user triggers to reduce the time it takes to bulk load
     * data.</p> <p>Example: <code>afterConnectScript=SET
     * session_replication_role='replica'</code> </p>
     */
    inline PostgreSQLSettings& WithAfterConnectScript(Aws::String&& value) { SetAfterConnectScript(std::move(value)); return *this;}

    /**
     * <p>For use with change data capture (CDC) only, this attribute has AWS DMS
     * bypass foreign keys and user triggers to reduce the time it takes to bulk load
     * data.</p> <p>Example: <code>afterConnectScript=SET
     * session_replication_role='replica'</code> </p>
     */
    inline PostgreSQLSettings& WithAfterConnectScript(const char* value) { SetAfterConnectScript(value); return *this;}


    /**
     * <p>To capture DDL events, AWS DMS creates various artifacts in the PostgreSQL
     * database when the task starts. You can later remove these artifacts.</p> <p>If
     * this value is set to <code>N</code>, you don't have to create tables or triggers
     * on the source database.</p>
     */
    inline bool GetCaptureDdls() const{ return m_captureDdls; }

    /**
     * <p>To capture DDL events, AWS DMS creates various artifacts in the PostgreSQL
     * database when the task starts. You can later remove these artifacts.</p> <p>If
     * this value is set to <code>N</code>, you don't have to create tables or triggers
     * on the source database.</p>
     */
    inline bool CaptureDdlsHasBeenSet() const { return m_captureDdlsHasBeenSet; }

    /**
     * <p>To capture DDL events, AWS DMS creates various artifacts in the PostgreSQL
     * database when the task starts. You can later remove these artifacts.</p> <p>If
     * this value is set to <code>N</code>, you don't have to create tables or triggers
     * on the source database.</p>
     */
    inline void SetCaptureDdls(bool value) { m_captureDdlsHasBeenSet = true; m_captureDdls = value; }

    /**
     * <p>To capture DDL events, AWS DMS creates various artifacts in the PostgreSQL
     * database when the task starts. You can later remove these artifacts.</p> <p>If
     * this value is set to <code>N</code>, you don't have to create tables or triggers
     * on the source database.</p>
     */
    inline PostgreSQLSettings& WithCaptureDdls(bool value) { SetCaptureDdls(value); return *this;}


    /**
     * <p>Specifies the maximum size (in KB) of any .csv file used to transfer data to
     * PostgreSQL.</p> <p>Example: <code>maxFileSize=512</code> </p>
     */
    inline int GetMaxFileSize() const{ return m_maxFileSize; }

    /**
     * <p>Specifies the maximum size (in KB) of any .csv file used to transfer data to
     * PostgreSQL.</p> <p>Example: <code>maxFileSize=512</code> </p>
     */
    inline bool MaxFileSizeHasBeenSet() const { return m_maxFileSizeHasBeenSet; }

    /**
     * <p>Specifies the maximum size (in KB) of any .csv file used to transfer data to
     * PostgreSQL.</p> <p>Example: <code>maxFileSize=512</code> </p>
     */
    inline void SetMaxFileSize(int value) { m_maxFileSizeHasBeenSet = true; m_maxFileSize = value; }

    /**
     * <p>Specifies the maximum size (in KB) of any .csv file used to transfer data to
     * PostgreSQL.</p> <p>Example: <code>maxFileSize=512</code> </p>
     */
    inline PostgreSQLSettings& WithMaxFileSize(int value) { SetMaxFileSize(value); return *this;}


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
    inline PostgreSQLSettings& WithDatabaseName(const Aws::String& value) { SetDatabaseName(value); return *this;}

    /**
     * <p>Database name for the endpoint.</p>
     */
    inline PostgreSQLSettings& WithDatabaseName(Aws::String&& value) { SetDatabaseName(std::move(value)); return *this;}

    /**
     * <p>Database name for the endpoint.</p>
     */
    inline PostgreSQLSettings& WithDatabaseName(const char* value) { SetDatabaseName(value); return *this;}


    /**
     * <p>The schema in which the operational DDL database artifacts are created.</p>
     * <p>Example: <code>ddlArtifactsSchema=xyzddlschema;</code> </p>
     */
    inline const Aws::String& GetDdlArtifactsSchema() const{ return m_ddlArtifactsSchema; }

    /**
     * <p>The schema in which the operational DDL database artifacts are created.</p>
     * <p>Example: <code>ddlArtifactsSchema=xyzddlschema;</code> </p>
     */
    inline bool DdlArtifactsSchemaHasBeenSet() const { return m_ddlArtifactsSchemaHasBeenSet; }

    /**
     * <p>The schema in which the operational DDL database artifacts are created.</p>
     * <p>Example: <code>ddlArtifactsSchema=xyzddlschema;</code> </p>
     */
    inline void SetDdlArtifactsSchema(const Aws::String& value) { m_ddlArtifactsSchemaHasBeenSet = true; m_ddlArtifactsSchema = value; }

    /**
     * <p>The schema in which the operational DDL database artifacts are created.</p>
     * <p>Example: <code>ddlArtifactsSchema=xyzddlschema;</code> </p>
     */
    inline void SetDdlArtifactsSchema(Aws::String&& value) { m_ddlArtifactsSchemaHasBeenSet = true; m_ddlArtifactsSchema = std::move(value); }

    /**
     * <p>The schema in which the operational DDL database artifacts are created.</p>
     * <p>Example: <code>ddlArtifactsSchema=xyzddlschema;</code> </p>
     */
    inline void SetDdlArtifactsSchema(const char* value) { m_ddlArtifactsSchemaHasBeenSet = true; m_ddlArtifactsSchema.assign(value); }

    /**
     * <p>The schema in which the operational DDL database artifacts are created.</p>
     * <p>Example: <code>ddlArtifactsSchema=xyzddlschema;</code> </p>
     */
    inline PostgreSQLSettings& WithDdlArtifactsSchema(const Aws::String& value) { SetDdlArtifactsSchema(value); return *this;}

    /**
     * <p>The schema in which the operational DDL database artifacts are created.</p>
     * <p>Example: <code>ddlArtifactsSchema=xyzddlschema;</code> </p>
     */
    inline PostgreSQLSettings& WithDdlArtifactsSchema(Aws::String&& value) { SetDdlArtifactsSchema(std::move(value)); return *this;}

    /**
     * <p>The schema in which the operational DDL database artifacts are created.</p>
     * <p>Example: <code>ddlArtifactsSchema=xyzddlschema;</code> </p>
     */
    inline PostgreSQLSettings& WithDdlArtifactsSchema(const char* value) { SetDdlArtifactsSchema(value); return *this;}


    /**
     * <p>Sets the client statement timeout for the PostgreSQL instance, in seconds.
     * The default value is 60 seconds.</p> <p>Example:
     * <code>executeTimeout=100;</code> </p>
     */
    inline int GetExecuteTimeout() const{ return m_executeTimeout; }

    /**
     * <p>Sets the client statement timeout for the PostgreSQL instance, in seconds.
     * The default value is 60 seconds.</p> <p>Example:
     * <code>executeTimeout=100;</code> </p>
     */
    inline bool ExecuteTimeoutHasBeenSet() const { return m_executeTimeoutHasBeenSet; }

    /**
     * <p>Sets the client statement timeout for the PostgreSQL instance, in seconds.
     * The default value is 60 seconds.</p> <p>Example:
     * <code>executeTimeout=100;</code> </p>
     */
    inline void SetExecuteTimeout(int value) { m_executeTimeoutHasBeenSet = true; m_executeTimeout = value; }

    /**
     * <p>Sets the client statement timeout for the PostgreSQL instance, in seconds.
     * The default value is 60 seconds.</p> <p>Example:
     * <code>executeTimeout=100;</code> </p>
     */
    inline PostgreSQLSettings& WithExecuteTimeout(int value) { SetExecuteTimeout(value); return *this;}


    /**
     * <p>When set to <code>true</code>, this value causes a task to fail if the actual
     * size of a LOB column is greater than the specified <code>LobMaxSize</code>.</p>
     * <p>If task is set to Limited LOB mode and this option is set to true, the task
     * fails instead of truncating the LOB data.</p>
     */
    inline bool GetFailTasksOnLobTruncation() const{ return m_failTasksOnLobTruncation; }

    /**
     * <p>When set to <code>true</code>, this value causes a task to fail if the actual
     * size of a LOB column is greater than the specified <code>LobMaxSize</code>.</p>
     * <p>If task is set to Limited LOB mode and this option is set to true, the task
     * fails instead of truncating the LOB data.</p>
     */
    inline bool FailTasksOnLobTruncationHasBeenSet() const { return m_failTasksOnLobTruncationHasBeenSet; }

    /**
     * <p>When set to <code>true</code>, this value causes a task to fail if the actual
     * size of a LOB column is greater than the specified <code>LobMaxSize</code>.</p>
     * <p>If task is set to Limited LOB mode and this option is set to true, the task
     * fails instead of truncating the LOB data.</p>
     */
    inline void SetFailTasksOnLobTruncation(bool value) { m_failTasksOnLobTruncationHasBeenSet = true; m_failTasksOnLobTruncation = value; }

    /**
     * <p>When set to <code>true</code>, this value causes a task to fail if the actual
     * size of a LOB column is greater than the specified <code>LobMaxSize</code>.</p>
     * <p>If task is set to Limited LOB mode and this option is set to true, the task
     * fails instead of truncating the LOB data.</p>
     */
    inline PostgreSQLSettings& WithFailTasksOnLobTruncation(bool value) { SetFailTasksOnLobTruncation(value); return *this;}


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
    inline PostgreSQLSettings& WithPassword(const Aws::String& value) { SetPassword(value); return *this;}

    /**
     * <p>Endpoint connection password.</p>
     */
    inline PostgreSQLSettings& WithPassword(Aws::String&& value) { SetPassword(std::move(value)); return *this;}

    /**
     * <p>Endpoint connection password.</p>
     */
    inline PostgreSQLSettings& WithPassword(const char* value) { SetPassword(value); return *this;}


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
    inline PostgreSQLSettings& WithPort(int value) { SetPort(value); return *this;}


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
    inline PostgreSQLSettings& WithServerName(const Aws::String& value) { SetServerName(value); return *this;}

    /**
     * <p>Fully qualified domain name of the endpoint.</p>
     */
    inline PostgreSQLSettings& WithServerName(Aws::String&& value) { SetServerName(std::move(value)); return *this;}

    /**
     * <p>Fully qualified domain name of the endpoint.</p>
     */
    inline PostgreSQLSettings& WithServerName(const char* value) { SetServerName(value); return *this;}


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
    inline PostgreSQLSettings& WithUsername(const Aws::String& value) { SetUsername(value); return *this;}

    /**
     * <p>Endpoint connection user name.</p>
     */
    inline PostgreSQLSettings& WithUsername(Aws::String&& value) { SetUsername(std::move(value)); return *this;}

    /**
     * <p>Endpoint connection user name.</p>
     */
    inline PostgreSQLSettings& WithUsername(const char* value) { SetUsername(value); return *this;}


    /**
     * <p>Sets the name of a previously created logical replication slot for a CDC load
     * of the PostgreSQL source instance.</p> <p>When used with the AWS DMS API
     * <code>CdcStartPosition</code> request parameter, this attribute also enables
     * using native CDC start points.</p>
     */
    inline const Aws::String& GetSlotName() const{ return m_slotName; }

    /**
     * <p>Sets the name of a previously created logical replication slot for a CDC load
     * of the PostgreSQL source instance.</p> <p>When used with the AWS DMS API
     * <code>CdcStartPosition</code> request parameter, this attribute also enables
     * using native CDC start points.</p>
     */
    inline bool SlotNameHasBeenSet() const { return m_slotNameHasBeenSet; }

    /**
     * <p>Sets the name of a previously created logical replication slot for a CDC load
     * of the PostgreSQL source instance.</p> <p>When used with the AWS DMS API
     * <code>CdcStartPosition</code> request parameter, this attribute also enables
     * using native CDC start points.</p>
     */
    inline void SetSlotName(const Aws::String& value) { m_slotNameHasBeenSet = true; m_slotName = value; }

    /**
     * <p>Sets the name of a previously created logical replication slot for a CDC load
     * of the PostgreSQL source instance.</p> <p>When used with the AWS DMS API
     * <code>CdcStartPosition</code> request parameter, this attribute also enables
     * using native CDC start points.</p>
     */
    inline void SetSlotName(Aws::String&& value) { m_slotNameHasBeenSet = true; m_slotName = std::move(value); }

    /**
     * <p>Sets the name of a previously created logical replication slot for a CDC load
     * of the PostgreSQL source instance.</p> <p>When used with the AWS DMS API
     * <code>CdcStartPosition</code> request parameter, this attribute also enables
     * using native CDC start points.</p>
     */
    inline void SetSlotName(const char* value) { m_slotNameHasBeenSet = true; m_slotName.assign(value); }

    /**
     * <p>Sets the name of a previously created logical replication slot for a CDC load
     * of the PostgreSQL source instance.</p> <p>When used with the AWS DMS API
     * <code>CdcStartPosition</code> request parameter, this attribute also enables
     * using native CDC start points.</p>
     */
    inline PostgreSQLSettings& WithSlotName(const Aws::String& value) { SetSlotName(value); return *this;}

    /**
     * <p>Sets the name of a previously created logical replication slot for a CDC load
     * of the PostgreSQL source instance.</p> <p>When used with the AWS DMS API
     * <code>CdcStartPosition</code> request parameter, this attribute also enables
     * using native CDC start points.</p>
     */
    inline PostgreSQLSettings& WithSlotName(Aws::String&& value) { SetSlotName(std::move(value)); return *this;}

    /**
     * <p>Sets the name of a previously created logical replication slot for a CDC load
     * of the PostgreSQL source instance.</p> <p>When used with the AWS DMS API
     * <code>CdcStartPosition</code> request parameter, this attribute also enables
     * using native CDC start points.</p>
     */
    inline PostgreSQLSettings& WithSlotName(const char* value) { SetSlotName(value); return *this;}

  private:

    Aws::String m_afterConnectScript;
    bool m_afterConnectScriptHasBeenSet;

    bool m_captureDdls;
    bool m_captureDdlsHasBeenSet;

    int m_maxFileSize;
    bool m_maxFileSizeHasBeenSet;

    Aws::String m_databaseName;
    bool m_databaseNameHasBeenSet;

    Aws::String m_ddlArtifactsSchema;
    bool m_ddlArtifactsSchemaHasBeenSet;

    int m_executeTimeout;
    bool m_executeTimeoutHasBeenSet;

    bool m_failTasksOnLobTruncation;
    bool m_failTasksOnLobTruncationHasBeenSet;

    Aws::String m_password;
    bool m_passwordHasBeenSet;

    int m_port;
    bool m_portHasBeenSet;

    Aws::String m_serverName;
    bool m_serverNameHasBeenSet;

    Aws::String m_username;
    bool m_usernameHasBeenSet;

    Aws::String m_slotName;
    bool m_slotNameHasBeenSet;
  };

} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws
