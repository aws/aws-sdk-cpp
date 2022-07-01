/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dms/model/PostgreSQLSettings.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DatabaseMigrationService
{
namespace Model
{

PostgreSQLSettings::PostgreSQLSettings() : 
    m_afterConnectScriptHasBeenSet(false),
    m_captureDdls(false),
    m_captureDdlsHasBeenSet(false),
    m_maxFileSize(0),
    m_maxFileSizeHasBeenSet(false),
    m_databaseNameHasBeenSet(false),
    m_ddlArtifactsSchemaHasBeenSet(false),
    m_executeTimeout(0),
    m_executeTimeoutHasBeenSet(false),
    m_failTasksOnLobTruncation(false),
    m_failTasksOnLobTruncationHasBeenSet(false),
    m_heartbeatEnable(false),
    m_heartbeatEnableHasBeenSet(false),
    m_heartbeatSchemaHasBeenSet(false),
    m_heartbeatFrequency(0),
    m_heartbeatFrequencyHasBeenSet(false),
    m_passwordHasBeenSet(false),
    m_port(0),
    m_portHasBeenSet(false),
    m_serverNameHasBeenSet(false),
    m_usernameHasBeenSet(false),
    m_slotNameHasBeenSet(false),
    m_pluginName(PluginNameValue::NOT_SET),
    m_pluginNameHasBeenSet(false),
    m_secretsManagerAccessRoleArnHasBeenSet(false),
    m_secretsManagerSecretIdHasBeenSet(false),
    m_trimSpaceInChar(false),
    m_trimSpaceInCharHasBeenSet(false)
{
}

PostgreSQLSettings::PostgreSQLSettings(JsonView jsonValue) : 
    m_afterConnectScriptHasBeenSet(false),
    m_captureDdls(false),
    m_captureDdlsHasBeenSet(false),
    m_maxFileSize(0),
    m_maxFileSizeHasBeenSet(false),
    m_databaseNameHasBeenSet(false),
    m_ddlArtifactsSchemaHasBeenSet(false),
    m_executeTimeout(0),
    m_executeTimeoutHasBeenSet(false),
    m_failTasksOnLobTruncation(false),
    m_failTasksOnLobTruncationHasBeenSet(false),
    m_heartbeatEnable(false),
    m_heartbeatEnableHasBeenSet(false),
    m_heartbeatSchemaHasBeenSet(false),
    m_heartbeatFrequency(0),
    m_heartbeatFrequencyHasBeenSet(false),
    m_passwordHasBeenSet(false),
    m_port(0),
    m_portHasBeenSet(false),
    m_serverNameHasBeenSet(false),
    m_usernameHasBeenSet(false),
    m_slotNameHasBeenSet(false),
    m_pluginName(PluginNameValue::NOT_SET),
    m_pluginNameHasBeenSet(false),
    m_secretsManagerAccessRoleArnHasBeenSet(false),
    m_secretsManagerSecretIdHasBeenSet(false),
    m_trimSpaceInChar(false),
    m_trimSpaceInCharHasBeenSet(false)
{
  *this = jsonValue;
}

PostgreSQLSettings& PostgreSQLSettings::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("AfterConnectScript"))
  {
    m_afterConnectScript = jsonValue.GetString("AfterConnectScript");

    m_afterConnectScriptHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CaptureDdls"))
  {
    m_captureDdls = jsonValue.GetBool("CaptureDdls");

    m_captureDdlsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MaxFileSize"))
  {
    m_maxFileSize = jsonValue.GetInteger("MaxFileSize");

    m_maxFileSizeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DatabaseName"))
  {
    m_databaseName = jsonValue.GetString("DatabaseName");

    m_databaseNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DdlArtifactsSchema"))
  {
    m_ddlArtifactsSchema = jsonValue.GetString("DdlArtifactsSchema");

    m_ddlArtifactsSchemaHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ExecuteTimeout"))
  {
    m_executeTimeout = jsonValue.GetInteger("ExecuteTimeout");

    m_executeTimeoutHasBeenSet = true;
  }

  if(jsonValue.ValueExists("FailTasksOnLobTruncation"))
  {
    m_failTasksOnLobTruncation = jsonValue.GetBool("FailTasksOnLobTruncation");

    m_failTasksOnLobTruncationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("HeartbeatEnable"))
  {
    m_heartbeatEnable = jsonValue.GetBool("HeartbeatEnable");

    m_heartbeatEnableHasBeenSet = true;
  }

  if(jsonValue.ValueExists("HeartbeatSchema"))
  {
    m_heartbeatSchema = jsonValue.GetString("HeartbeatSchema");

    m_heartbeatSchemaHasBeenSet = true;
  }

  if(jsonValue.ValueExists("HeartbeatFrequency"))
  {
    m_heartbeatFrequency = jsonValue.GetInteger("HeartbeatFrequency");

    m_heartbeatFrequencyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Password"))
  {
    m_password = jsonValue.GetString("Password");

    m_passwordHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Port"))
  {
    m_port = jsonValue.GetInteger("Port");

    m_portHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ServerName"))
  {
    m_serverName = jsonValue.GetString("ServerName");

    m_serverNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Username"))
  {
    m_username = jsonValue.GetString("Username");

    m_usernameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SlotName"))
  {
    m_slotName = jsonValue.GetString("SlotName");

    m_slotNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PluginName"))
  {
    m_pluginName = PluginNameValueMapper::GetPluginNameValueForName(jsonValue.GetString("PluginName"));

    m_pluginNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SecretsManagerAccessRoleArn"))
  {
    m_secretsManagerAccessRoleArn = jsonValue.GetString("SecretsManagerAccessRoleArn");

    m_secretsManagerAccessRoleArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SecretsManagerSecretId"))
  {
    m_secretsManagerSecretId = jsonValue.GetString("SecretsManagerSecretId");

    m_secretsManagerSecretIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TrimSpaceInChar"))
  {
    m_trimSpaceInChar = jsonValue.GetBool("TrimSpaceInChar");

    m_trimSpaceInCharHasBeenSet = true;
  }

  return *this;
}

JsonValue PostgreSQLSettings::Jsonize() const
{
  JsonValue payload;

  if(m_afterConnectScriptHasBeenSet)
  {
   payload.WithString("AfterConnectScript", m_afterConnectScript);

  }

  if(m_captureDdlsHasBeenSet)
  {
   payload.WithBool("CaptureDdls", m_captureDdls);

  }

  if(m_maxFileSizeHasBeenSet)
  {
   payload.WithInteger("MaxFileSize", m_maxFileSize);

  }

  if(m_databaseNameHasBeenSet)
  {
   payload.WithString("DatabaseName", m_databaseName);

  }

  if(m_ddlArtifactsSchemaHasBeenSet)
  {
   payload.WithString("DdlArtifactsSchema", m_ddlArtifactsSchema);

  }

  if(m_executeTimeoutHasBeenSet)
  {
   payload.WithInteger("ExecuteTimeout", m_executeTimeout);

  }

  if(m_failTasksOnLobTruncationHasBeenSet)
  {
   payload.WithBool("FailTasksOnLobTruncation", m_failTasksOnLobTruncation);

  }

  if(m_heartbeatEnableHasBeenSet)
  {
   payload.WithBool("HeartbeatEnable", m_heartbeatEnable);

  }

  if(m_heartbeatSchemaHasBeenSet)
  {
   payload.WithString("HeartbeatSchema", m_heartbeatSchema);

  }

  if(m_heartbeatFrequencyHasBeenSet)
  {
   payload.WithInteger("HeartbeatFrequency", m_heartbeatFrequency);

  }

  if(m_passwordHasBeenSet)
  {
   payload.WithString("Password", m_password);

  }

  if(m_portHasBeenSet)
  {
   payload.WithInteger("Port", m_port);

  }

  if(m_serverNameHasBeenSet)
  {
   payload.WithString("ServerName", m_serverName);

  }

  if(m_usernameHasBeenSet)
  {
   payload.WithString("Username", m_username);

  }

  if(m_slotNameHasBeenSet)
  {
   payload.WithString("SlotName", m_slotName);

  }

  if(m_pluginNameHasBeenSet)
  {
   payload.WithString("PluginName", PluginNameValueMapper::GetNameForPluginNameValue(m_pluginName));
  }

  if(m_secretsManagerAccessRoleArnHasBeenSet)
  {
   payload.WithString("SecretsManagerAccessRoleArn", m_secretsManagerAccessRoleArn);

  }

  if(m_secretsManagerSecretIdHasBeenSet)
  {
   payload.WithString("SecretsManagerSecretId", m_secretsManagerSecretId);

  }

  if(m_trimSpaceInCharHasBeenSet)
  {
   payload.WithBool("TrimSpaceInChar", m_trimSpaceInChar);

  }

  return payload;
}

} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws
