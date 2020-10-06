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
    m_passwordHasBeenSet(false),
    m_port(0),
    m_portHasBeenSet(false),
    m_serverNameHasBeenSet(false),
    m_usernameHasBeenSet(false),
    m_slotNameHasBeenSet(false)
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
    m_passwordHasBeenSet(false),
    m_port(0),
    m_portHasBeenSet(false),
    m_serverNameHasBeenSet(false),
    m_usernameHasBeenSet(false),
    m_slotNameHasBeenSet(false)
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

  return payload;
}

} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws
