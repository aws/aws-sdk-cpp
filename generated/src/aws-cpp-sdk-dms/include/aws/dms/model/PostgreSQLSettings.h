/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dms/DatabaseMigrationService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/dms/model/PluginNameValue.h>
#include <aws/dms/model/LongVarcharMappingType.h>
#include <aws/dms/model/DatabaseMode.h>
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
  class PostgreSQLSettings
  {
  public:
    AWS_DATABASEMIGRATIONSERVICE_API PostgreSQLSettings();
    AWS_DATABASEMIGRATIONSERVICE_API PostgreSQLSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATABASEMIGRATIONSERVICE_API PostgreSQLSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATABASEMIGRATIONSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>For use with change data capture (CDC) only, this attribute has DMS bypass
     * foreign keys and user triggers to reduce the time it takes to bulk load
     * data.</p> <p>Example: <code>afterConnectScript=SET
     * session_replication_role='replica'</code> </p>
     */
    inline const Aws::String& GetAfterConnectScript() const{ return m_afterConnectScript; }
    inline bool AfterConnectScriptHasBeenSet() const { return m_afterConnectScriptHasBeenSet; }
    inline void SetAfterConnectScript(const Aws::String& value) { m_afterConnectScriptHasBeenSet = true; m_afterConnectScript = value; }
    inline void SetAfterConnectScript(Aws::String&& value) { m_afterConnectScriptHasBeenSet = true; m_afterConnectScript = std::move(value); }
    inline void SetAfterConnectScript(const char* value) { m_afterConnectScriptHasBeenSet = true; m_afterConnectScript.assign(value); }
    inline PostgreSQLSettings& WithAfterConnectScript(const Aws::String& value) { SetAfterConnectScript(value); return *this;}
    inline PostgreSQLSettings& WithAfterConnectScript(Aws::String&& value) { SetAfterConnectScript(std::move(value)); return *this;}
    inline PostgreSQLSettings& WithAfterConnectScript(const char* value) { SetAfterConnectScript(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>To capture DDL events, DMS creates various artifacts in the PostgreSQL
     * database when the task starts. You can later remove these artifacts.</p> <p>The
     * default value is <code>true</code>.</p> <p>If this value is set to
     * <code>N</code>, you don't have to create tables or triggers on the source
     * database.</p>
     */
    inline bool GetCaptureDdls() const{ return m_captureDdls; }
    inline bool CaptureDdlsHasBeenSet() const { return m_captureDdlsHasBeenSet; }
    inline void SetCaptureDdls(bool value) { m_captureDdlsHasBeenSet = true; m_captureDdls = value; }
    inline PostgreSQLSettings& WithCaptureDdls(bool value) { SetCaptureDdls(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the maximum size (in KB) of any .csv file used to transfer data to
     * PostgreSQL.</p> <p>The default value is 32,768 KB (32 MB).</p> <p>Example:
     * <code>maxFileSize=512</code> </p>
     */
    inline int GetMaxFileSize() const{ return m_maxFileSize; }
    inline bool MaxFileSizeHasBeenSet() const { return m_maxFileSizeHasBeenSet; }
    inline void SetMaxFileSize(int value) { m_maxFileSizeHasBeenSet = true; m_maxFileSize = value; }
    inline PostgreSQLSettings& WithMaxFileSize(int value) { SetMaxFileSize(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Database name for the endpoint.</p>
     */
    inline const Aws::String& GetDatabaseName() const{ return m_databaseName; }
    inline bool DatabaseNameHasBeenSet() const { return m_databaseNameHasBeenSet; }
    inline void SetDatabaseName(const Aws::String& value) { m_databaseNameHasBeenSet = true; m_databaseName = value; }
    inline void SetDatabaseName(Aws::String&& value) { m_databaseNameHasBeenSet = true; m_databaseName = std::move(value); }
    inline void SetDatabaseName(const char* value) { m_databaseNameHasBeenSet = true; m_databaseName.assign(value); }
    inline PostgreSQLSettings& WithDatabaseName(const Aws::String& value) { SetDatabaseName(value); return *this;}
    inline PostgreSQLSettings& WithDatabaseName(Aws::String&& value) { SetDatabaseName(std::move(value)); return *this;}
    inline PostgreSQLSettings& WithDatabaseName(const char* value) { SetDatabaseName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The schema in which the operational DDL database artifacts are created.</p>
     * <p>The default value is <code>public</code>.</p> <p>Example:
     * <code>ddlArtifactsSchema=xyzddlschema;</code> </p>
     */
    inline const Aws::String& GetDdlArtifactsSchema() const{ return m_ddlArtifactsSchema; }
    inline bool DdlArtifactsSchemaHasBeenSet() const { return m_ddlArtifactsSchemaHasBeenSet; }
    inline void SetDdlArtifactsSchema(const Aws::String& value) { m_ddlArtifactsSchemaHasBeenSet = true; m_ddlArtifactsSchema = value; }
    inline void SetDdlArtifactsSchema(Aws::String&& value) { m_ddlArtifactsSchemaHasBeenSet = true; m_ddlArtifactsSchema = std::move(value); }
    inline void SetDdlArtifactsSchema(const char* value) { m_ddlArtifactsSchemaHasBeenSet = true; m_ddlArtifactsSchema.assign(value); }
    inline PostgreSQLSettings& WithDdlArtifactsSchema(const Aws::String& value) { SetDdlArtifactsSchema(value); return *this;}
    inline PostgreSQLSettings& WithDdlArtifactsSchema(Aws::String&& value) { SetDdlArtifactsSchema(std::move(value)); return *this;}
    inline PostgreSQLSettings& WithDdlArtifactsSchema(const char* value) { SetDdlArtifactsSchema(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Sets the client statement timeout for the PostgreSQL instance, in seconds.
     * The default value is 60 seconds.</p> <p>Example:
     * <code>executeTimeout=100;</code> </p>
     */
    inline int GetExecuteTimeout() const{ return m_executeTimeout; }
    inline bool ExecuteTimeoutHasBeenSet() const { return m_executeTimeoutHasBeenSet; }
    inline void SetExecuteTimeout(int value) { m_executeTimeoutHasBeenSet = true; m_executeTimeout = value; }
    inline PostgreSQLSettings& WithExecuteTimeout(int value) { SetExecuteTimeout(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>When set to <code>true</code>, this value causes a task to fail if the actual
     * size of a LOB column is greater than the specified <code>LobMaxSize</code>.</p>
     * <p>The default value is <code>false</code>.</p> <p>If task is set to Limited LOB
     * mode and this option is set to true, the task fails instead of truncating the
     * LOB data.</p>
     */
    inline bool GetFailTasksOnLobTruncation() const{ return m_failTasksOnLobTruncation; }
    inline bool FailTasksOnLobTruncationHasBeenSet() const { return m_failTasksOnLobTruncationHasBeenSet; }
    inline void SetFailTasksOnLobTruncation(bool value) { m_failTasksOnLobTruncationHasBeenSet = true; m_failTasksOnLobTruncation = value; }
    inline PostgreSQLSettings& WithFailTasksOnLobTruncation(bool value) { SetFailTasksOnLobTruncation(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The write-ahead log (WAL) heartbeat feature mimics a dummy transaction. By
     * doing this, it prevents idle logical replication slots from holding onto old WAL
     * logs, which can result in storage full situations on the source. This heartbeat
     * keeps <code>restart_lsn</code> moving and prevents storage full scenarios.</p>
     * <p>The default value is <code>false</code>.</p>
     */
    inline bool GetHeartbeatEnable() const{ return m_heartbeatEnable; }
    inline bool HeartbeatEnableHasBeenSet() const { return m_heartbeatEnableHasBeenSet; }
    inline void SetHeartbeatEnable(bool value) { m_heartbeatEnableHasBeenSet = true; m_heartbeatEnable = value; }
    inline PostgreSQLSettings& WithHeartbeatEnable(bool value) { SetHeartbeatEnable(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Sets the schema in which the heartbeat artifacts are created.</p> <p>The
     * default value is <code>public</code>.</p>
     */
    inline const Aws::String& GetHeartbeatSchema() const{ return m_heartbeatSchema; }
    inline bool HeartbeatSchemaHasBeenSet() const { return m_heartbeatSchemaHasBeenSet; }
    inline void SetHeartbeatSchema(const Aws::String& value) { m_heartbeatSchemaHasBeenSet = true; m_heartbeatSchema = value; }
    inline void SetHeartbeatSchema(Aws::String&& value) { m_heartbeatSchemaHasBeenSet = true; m_heartbeatSchema = std::move(value); }
    inline void SetHeartbeatSchema(const char* value) { m_heartbeatSchemaHasBeenSet = true; m_heartbeatSchema.assign(value); }
    inline PostgreSQLSettings& WithHeartbeatSchema(const Aws::String& value) { SetHeartbeatSchema(value); return *this;}
    inline PostgreSQLSettings& WithHeartbeatSchema(Aws::String&& value) { SetHeartbeatSchema(std::move(value)); return *this;}
    inline PostgreSQLSettings& WithHeartbeatSchema(const char* value) { SetHeartbeatSchema(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Sets the WAL heartbeat frequency (in minutes).</p> <p>The default value is 5
     * minutes.</p>
     */
    inline int GetHeartbeatFrequency() const{ return m_heartbeatFrequency; }
    inline bool HeartbeatFrequencyHasBeenSet() const { return m_heartbeatFrequencyHasBeenSet; }
    inline void SetHeartbeatFrequency(int value) { m_heartbeatFrequencyHasBeenSet = true; m_heartbeatFrequency = value; }
    inline PostgreSQLSettings& WithHeartbeatFrequency(int value) { SetHeartbeatFrequency(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Endpoint connection password.</p>
     */
    inline const Aws::String& GetPassword() const{ return m_password; }
    inline bool PasswordHasBeenSet() const { return m_passwordHasBeenSet; }
    inline void SetPassword(const Aws::String& value) { m_passwordHasBeenSet = true; m_password = value; }
    inline void SetPassword(Aws::String&& value) { m_passwordHasBeenSet = true; m_password = std::move(value); }
    inline void SetPassword(const char* value) { m_passwordHasBeenSet = true; m_password.assign(value); }
    inline PostgreSQLSettings& WithPassword(const Aws::String& value) { SetPassword(value); return *this;}
    inline PostgreSQLSettings& WithPassword(Aws::String&& value) { SetPassword(std::move(value)); return *this;}
    inline PostgreSQLSettings& WithPassword(const char* value) { SetPassword(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Endpoint TCP port. The default is 5432.</p>
     */
    inline int GetPort() const{ return m_port; }
    inline bool PortHasBeenSet() const { return m_portHasBeenSet; }
    inline void SetPort(int value) { m_portHasBeenSet = true; m_port = value; }
    inline PostgreSQLSettings& WithPort(int value) { SetPort(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The host name of the endpoint database. </p> <p>For an Amazon RDS PostgreSQL
     * instance, this is the output of <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/APIReference/API_DescribeDBInstances.html">DescribeDBInstances</a>,
     * in the <code> <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/APIReference/API_Endpoint.html">Endpoint</a>.Address</code>
     * field.</p> <p>For an Aurora PostgreSQL instance, this is the output of <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/APIReference/API_DescribeDBClusters.html">DescribeDBClusters</a>,
     * in the <code>Endpoint</code> field.</p>
     */
    inline const Aws::String& GetServerName() const{ return m_serverName; }
    inline bool ServerNameHasBeenSet() const { return m_serverNameHasBeenSet; }
    inline void SetServerName(const Aws::String& value) { m_serverNameHasBeenSet = true; m_serverName = value; }
    inline void SetServerName(Aws::String&& value) { m_serverNameHasBeenSet = true; m_serverName = std::move(value); }
    inline void SetServerName(const char* value) { m_serverNameHasBeenSet = true; m_serverName.assign(value); }
    inline PostgreSQLSettings& WithServerName(const Aws::String& value) { SetServerName(value); return *this;}
    inline PostgreSQLSettings& WithServerName(Aws::String&& value) { SetServerName(std::move(value)); return *this;}
    inline PostgreSQLSettings& WithServerName(const char* value) { SetServerName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Endpoint connection user name.</p>
     */
    inline const Aws::String& GetUsername() const{ return m_username; }
    inline bool UsernameHasBeenSet() const { return m_usernameHasBeenSet; }
    inline void SetUsername(const Aws::String& value) { m_usernameHasBeenSet = true; m_username = value; }
    inline void SetUsername(Aws::String&& value) { m_usernameHasBeenSet = true; m_username = std::move(value); }
    inline void SetUsername(const char* value) { m_usernameHasBeenSet = true; m_username.assign(value); }
    inline PostgreSQLSettings& WithUsername(const Aws::String& value) { SetUsername(value); return *this;}
    inline PostgreSQLSettings& WithUsername(Aws::String&& value) { SetUsername(std::move(value)); return *this;}
    inline PostgreSQLSettings& WithUsername(const char* value) { SetUsername(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Sets the name of a previously created logical replication slot for a change
     * data capture (CDC) load of the PostgreSQL source instance. </p> <p>When used
     * with the <code>CdcStartPosition</code> request parameter for the DMS API , this
     * attribute also makes it possible to use native CDC start points. DMS verifies
     * that the specified logical replication slot exists before starting the CDC load
     * task. It also verifies that the task was created with a valid setting of
     * <code>CdcStartPosition</code>. If the specified slot doesn't exist or the task
     * doesn't have a valid <code>CdcStartPosition</code> setting, DMS raises an
     * error.</p> <p>For more information about setting the
     * <code>CdcStartPosition</code> request parameter, see <a
     * href="https://docs.aws.amazon.com/dms/latest/userguide/CHAP_Task.CDC.html#CHAP_Task.CDC.StartPoint.Native">Determining
     * a CDC native start point</a> in the <i>Database Migration Service User
     * Guide</i>. For more information about using <code>CdcStartPosition</code>, see
     * <a
     * href="https://docs.aws.amazon.com/dms/latest/APIReference/API_CreateReplicationTask.html">CreateReplicationTask</a>,
     * <a
     * href="https://docs.aws.amazon.com/dms/latest/APIReference/API_StartReplicationTask.html">StartReplicationTask</a>,
     * and <a
     * href="https://docs.aws.amazon.com/dms/latest/APIReference/API_ModifyReplicationTask.html">ModifyReplicationTask</a>.</p>
     */
    inline const Aws::String& GetSlotName() const{ return m_slotName; }
    inline bool SlotNameHasBeenSet() const { return m_slotNameHasBeenSet; }
    inline void SetSlotName(const Aws::String& value) { m_slotNameHasBeenSet = true; m_slotName = value; }
    inline void SetSlotName(Aws::String&& value) { m_slotNameHasBeenSet = true; m_slotName = std::move(value); }
    inline void SetSlotName(const char* value) { m_slotNameHasBeenSet = true; m_slotName.assign(value); }
    inline PostgreSQLSettings& WithSlotName(const Aws::String& value) { SetSlotName(value); return *this;}
    inline PostgreSQLSettings& WithSlotName(Aws::String&& value) { SetSlotName(std::move(value)); return *this;}
    inline PostgreSQLSettings& WithSlotName(const char* value) { SetSlotName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the plugin to use to create a replication slot.</p> <p>The default
     * value is <code>pglogical</code>.</p>
     */
    inline const PluginNameValue& GetPluginName() const{ return m_pluginName; }
    inline bool PluginNameHasBeenSet() const { return m_pluginNameHasBeenSet; }
    inline void SetPluginName(const PluginNameValue& value) { m_pluginNameHasBeenSet = true; m_pluginName = value; }
    inline void SetPluginName(PluginNameValue&& value) { m_pluginNameHasBeenSet = true; m_pluginName = std::move(value); }
    inline PostgreSQLSettings& WithPluginName(const PluginNameValue& value) { SetPluginName(value); return *this;}
    inline PostgreSQLSettings& WithPluginName(PluginNameValue&& value) { SetPluginName(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The full Amazon Resource Name (ARN) of the IAM role that specifies DMS as the
     * trusted entity and grants the required permissions to access the value in
     * <code>SecretsManagerSecret</code>. The role must allow the
     * <code>iam:PassRole</code> action. <code>SecretsManagerSecret</code> has the
     * value of the Amazon Web Services Secrets Manager secret that allows access to
     * the PostgreSQL endpoint.</p>  <p>You can specify one of two sets of values
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
    inline bool SecretsManagerAccessRoleArnHasBeenSet() const { return m_secretsManagerAccessRoleArnHasBeenSet; }
    inline void SetSecretsManagerAccessRoleArn(const Aws::String& value) { m_secretsManagerAccessRoleArnHasBeenSet = true; m_secretsManagerAccessRoleArn = value; }
    inline void SetSecretsManagerAccessRoleArn(Aws::String&& value) { m_secretsManagerAccessRoleArnHasBeenSet = true; m_secretsManagerAccessRoleArn = std::move(value); }
    inline void SetSecretsManagerAccessRoleArn(const char* value) { m_secretsManagerAccessRoleArnHasBeenSet = true; m_secretsManagerAccessRoleArn.assign(value); }
    inline PostgreSQLSettings& WithSecretsManagerAccessRoleArn(const Aws::String& value) { SetSecretsManagerAccessRoleArn(value); return *this;}
    inline PostgreSQLSettings& WithSecretsManagerAccessRoleArn(Aws::String&& value) { SetSecretsManagerAccessRoleArn(std::move(value)); return *this;}
    inline PostgreSQLSettings& WithSecretsManagerAccessRoleArn(const char* value) { SetSecretsManagerAccessRoleArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The full ARN, partial ARN, or friendly name of the
     * <code>SecretsManagerSecret</code> that contains the PostgreSQL endpoint
     * connection details.</p>
     */
    inline const Aws::String& GetSecretsManagerSecretId() const{ return m_secretsManagerSecretId; }
    inline bool SecretsManagerSecretIdHasBeenSet() const { return m_secretsManagerSecretIdHasBeenSet; }
    inline void SetSecretsManagerSecretId(const Aws::String& value) { m_secretsManagerSecretIdHasBeenSet = true; m_secretsManagerSecretId = value; }
    inline void SetSecretsManagerSecretId(Aws::String&& value) { m_secretsManagerSecretIdHasBeenSet = true; m_secretsManagerSecretId = std::move(value); }
    inline void SetSecretsManagerSecretId(const char* value) { m_secretsManagerSecretIdHasBeenSet = true; m_secretsManagerSecretId.assign(value); }
    inline PostgreSQLSettings& WithSecretsManagerSecretId(const Aws::String& value) { SetSecretsManagerSecretId(value); return *this;}
    inline PostgreSQLSettings& WithSecretsManagerSecretId(Aws::String&& value) { SetSecretsManagerSecretId(std::move(value)); return *this;}
    inline PostgreSQLSettings& WithSecretsManagerSecretId(const char* value) { SetSecretsManagerSecretId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Use the <code>TrimSpaceInChar</code> source endpoint setting to trim data on
     * CHAR and NCHAR data types during migration. The default value is
     * <code>true</code>.</p>
     */
    inline bool GetTrimSpaceInChar() const{ return m_trimSpaceInChar; }
    inline bool TrimSpaceInCharHasBeenSet() const { return m_trimSpaceInCharHasBeenSet; }
    inline void SetTrimSpaceInChar(bool value) { m_trimSpaceInCharHasBeenSet = true; m_trimSpaceInChar = value; }
    inline PostgreSQLSettings& WithTrimSpaceInChar(bool value) { SetTrimSpaceInChar(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>When true, lets PostgreSQL migrate the boolean type as boolean. By default,
     * PostgreSQL migrates booleans as <code>varchar(5)</code>. You must set this
     * setting on both the source and target endpoints for it to take effect.</p>
     * <p>The default value is <code>false</code>.</p>
     */
    inline bool GetMapBooleanAsBoolean() const{ return m_mapBooleanAsBoolean; }
    inline bool MapBooleanAsBooleanHasBeenSet() const { return m_mapBooleanAsBooleanHasBeenSet; }
    inline void SetMapBooleanAsBoolean(bool value) { m_mapBooleanAsBooleanHasBeenSet = true; m_mapBooleanAsBoolean = value; }
    inline PostgreSQLSettings& WithMapBooleanAsBoolean(bool value) { SetMapBooleanAsBoolean(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>When true, DMS migrates JSONB values as CLOB.</p> <p>The default value is
     * <code>false</code>.</p>
     */
    inline bool GetMapJsonbAsClob() const{ return m_mapJsonbAsClob; }
    inline bool MapJsonbAsClobHasBeenSet() const { return m_mapJsonbAsClobHasBeenSet; }
    inline void SetMapJsonbAsClob(bool value) { m_mapJsonbAsClobHasBeenSet = true; m_mapJsonbAsClob = value; }
    inline PostgreSQLSettings& WithMapJsonbAsClob(bool value) { SetMapJsonbAsClob(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Sets what datatype to map LONG values as.</p> <p>The default value is
     * <code>wstring</code>.</p>
     */
    inline const LongVarcharMappingType& GetMapLongVarcharAs() const{ return m_mapLongVarcharAs; }
    inline bool MapLongVarcharAsHasBeenSet() const { return m_mapLongVarcharAsHasBeenSet; }
    inline void SetMapLongVarcharAs(const LongVarcharMappingType& value) { m_mapLongVarcharAsHasBeenSet = true; m_mapLongVarcharAs = value; }
    inline void SetMapLongVarcharAs(LongVarcharMappingType&& value) { m_mapLongVarcharAsHasBeenSet = true; m_mapLongVarcharAs = std::move(value); }
    inline PostgreSQLSettings& WithMapLongVarcharAs(const LongVarcharMappingType& value) { SetMapLongVarcharAs(value); return *this;}
    inline PostgreSQLSettings& WithMapLongVarcharAs(LongVarcharMappingType&& value) { SetMapLongVarcharAs(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the default behavior of the replication's handling of PostgreSQL-
     * compatible endpoints that require some additional configuration, such as
     * Babelfish endpoints.</p>
     */
    inline const DatabaseMode& GetDatabaseMode() const{ return m_databaseMode; }
    inline bool DatabaseModeHasBeenSet() const { return m_databaseModeHasBeenSet; }
    inline void SetDatabaseMode(const DatabaseMode& value) { m_databaseModeHasBeenSet = true; m_databaseMode = value; }
    inline void SetDatabaseMode(DatabaseMode&& value) { m_databaseModeHasBeenSet = true; m_databaseMode = std::move(value); }
    inline PostgreSQLSettings& WithDatabaseMode(const DatabaseMode& value) { SetDatabaseMode(value); return *this;}
    inline PostgreSQLSettings& WithDatabaseMode(DatabaseMode&& value) { SetDatabaseMode(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Babelfish for Aurora PostgreSQL database name for the endpoint.</p>
     */
    inline const Aws::String& GetBabelfishDatabaseName() const{ return m_babelfishDatabaseName; }
    inline bool BabelfishDatabaseNameHasBeenSet() const { return m_babelfishDatabaseNameHasBeenSet; }
    inline void SetBabelfishDatabaseName(const Aws::String& value) { m_babelfishDatabaseNameHasBeenSet = true; m_babelfishDatabaseName = value; }
    inline void SetBabelfishDatabaseName(Aws::String&& value) { m_babelfishDatabaseNameHasBeenSet = true; m_babelfishDatabaseName = std::move(value); }
    inline void SetBabelfishDatabaseName(const char* value) { m_babelfishDatabaseNameHasBeenSet = true; m_babelfishDatabaseName.assign(value); }
    inline PostgreSQLSettings& WithBabelfishDatabaseName(const Aws::String& value) { SetBabelfishDatabaseName(value); return *this;}
    inline PostgreSQLSettings& WithBabelfishDatabaseName(Aws::String&& value) { SetBabelfishDatabaseName(std::move(value)); return *this;}
    inline PostgreSQLSettings& WithBabelfishDatabaseName(const char* value) { SetBabelfishDatabaseName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Disables the Unicode source filter with PostgreSQL, for values passed into
     * the Selection rule filter on Source Endpoint column values. By default DMS
     * performs source filter comparisons using a Unicode string which can cause look
     * ups to ignore the indexes in the text columns and slow down migrations.</p>
     * <p>Unicode support should only be disabled when using a selection rule filter is
     * on a text column in the Source database that is indexed.</p>
     */
    inline bool GetDisableUnicodeSourceFilter() const{ return m_disableUnicodeSourceFilter; }
    inline bool DisableUnicodeSourceFilterHasBeenSet() const { return m_disableUnicodeSourceFilterHasBeenSet; }
    inline void SetDisableUnicodeSourceFilter(bool value) { m_disableUnicodeSourceFilterHasBeenSet = true; m_disableUnicodeSourceFilter = value; }
    inline PostgreSQLSettings& WithDisableUnicodeSourceFilter(bool value) { SetDisableUnicodeSourceFilter(value); return *this;}
    ///@}
  private:

    Aws::String m_afterConnectScript;
    bool m_afterConnectScriptHasBeenSet = false;

    bool m_captureDdls;
    bool m_captureDdlsHasBeenSet = false;

    int m_maxFileSize;
    bool m_maxFileSizeHasBeenSet = false;

    Aws::String m_databaseName;
    bool m_databaseNameHasBeenSet = false;

    Aws::String m_ddlArtifactsSchema;
    bool m_ddlArtifactsSchemaHasBeenSet = false;

    int m_executeTimeout;
    bool m_executeTimeoutHasBeenSet = false;

    bool m_failTasksOnLobTruncation;
    bool m_failTasksOnLobTruncationHasBeenSet = false;

    bool m_heartbeatEnable;
    bool m_heartbeatEnableHasBeenSet = false;

    Aws::String m_heartbeatSchema;
    bool m_heartbeatSchemaHasBeenSet = false;

    int m_heartbeatFrequency;
    bool m_heartbeatFrequencyHasBeenSet = false;

    Aws::String m_password;
    bool m_passwordHasBeenSet = false;

    int m_port;
    bool m_portHasBeenSet = false;

    Aws::String m_serverName;
    bool m_serverNameHasBeenSet = false;

    Aws::String m_username;
    bool m_usernameHasBeenSet = false;

    Aws::String m_slotName;
    bool m_slotNameHasBeenSet = false;

    PluginNameValue m_pluginName;
    bool m_pluginNameHasBeenSet = false;

    Aws::String m_secretsManagerAccessRoleArn;
    bool m_secretsManagerAccessRoleArnHasBeenSet = false;

    Aws::String m_secretsManagerSecretId;
    bool m_secretsManagerSecretIdHasBeenSet = false;

    bool m_trimSpaceInChar;
    bool m_trimSpaceInCharHasBeenSet = false;

    bool m_mapBooleanAsBoolean;
    bool m_mapBooleanAsBooleanHasBeenSet = false;

    bool m_mapJsonbAsClob;
    bool m_mapJsonbAsClobHasBeenSet = false;

    LongVarcharMappingType m_mapLongVarcharAs;
    bool m_mapLongVarcharAsHasBeenSet = false;

    DatabaseMode m_databaseMode;
    bool m_databaseModeHasBeenSet = false;

    Aws::String m_babelfishDatabaseName;
    bool m_babelfishDatabaseNameHasBeenSet = false;

    bool m_disableUnicodeSourceFilter;
    bool m_disableUnicodeSourceFilterHasBeenSet = false;
  };

} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws
