/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dms/model/MySQLSettings.h>
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

MySQLSettings::MySQLSettings() : 
    m_afterConnectScriptHasBeenSet(false),
    m_databaseNameHasBeenSet(false),
    m_eventsPollInterval(0),
    m_eventsPollIntervalHasBeenSet(false),
    m_targetDbType(TargetDbType::NOT_SET),
    m_targetDbTypeHasBeenSet(false),
    m_maxFileSize(0),
    m_maxFileSizeHasBeenSet(false),
    m_parallelLoadThreads(0),
    m_parallelLoadThreadsHasBeenSet(false),
    m_passwordHasBeenSet(false),
    m_port(0),
    m_portHasBeenSet(false),
    m_serverNameHasBeenSet(false),
    m_serverTimezoneHasBeenSet(false),
    m_usernameHasBeenSet(false)
{
}

MySQLSettings::MySQLSettings(JsonView jsonValue) : 
    m_afterConnectScriptHasBeenSet(false),
    m_databaseNameHasBeenSet(false),
    m_eventsPollInterval(0),
    m_eventsPollIntervalHasBeenSet(false),
    m_targetDbType(TargetDbType::NOT_SET),
    m_targetDbTypeHasBeenSet(false),
    m_maxFileSize(0),
    m_maxFileSizeHasBeenSet(false),
    m_parallelLoadThreads(0),
    m_parallelLoadThreadsHasBeenSet(false),
    m_passwordHasBeenSet(false),
    m_port(0),
    m_portHasBeenSet(false),
    m_serverNameHasBeenSet(false),
    m_serverTimezoneHasBeenSet(false),
    m_usernameHasBeenSet(false)
{
  *this = jsonValue;
}

MySQLSettings& MySQLSettings::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("AfterConnectScript"))
  {
    m_afterConnectScript = jsonValue.GetString("AfterConnectScript");

    m_afterConnectScriptHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DatabaseName"))
  {
    m_databaseName = jsonValue.GetString("DatabaseName");

    m_databaseNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EventsPollInterval"))
  {
    m_eventsPollInterval = jsonValue.GetInteger("EventsPollInterval");

    m_eventsPollIntervalHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TargetDbType"))
  {
    m_targetDbType = TargetDbTypeMapper::GetTargetDbTypeForName(jsonValue.GetString("TargetDbType"));

    m_targetDbTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MaxFileSize"))
  {
    m_maxFileSize = jsonValue.GetInteger("MaxFileSize");

    m_maxFileSizeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ParallelLoadThreads"))
  {
    m_parallelLoadThreads = jsonValue.GetInteger("ParallelLoadThreads");

    m_parallelLoadThreadsHasBeenSet = true;
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

  if(jsonValue.ValueExists("ServerTimezone"))
  {
    m_serverTimezone = jsonValue.GetString("ServerTimezone");

    m_serverTimezoneHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Username"))
  {
    m_username = jsonValue.GetString("Username");

    m_usernameHasBeenSet = true;
  }

  return *this;
}

JsonValue MySQLSettings::Jsonize() const
{
  JsonValue payload;

  if(m_afterConnectScriptHasBeenSet)
  {
   payload.WithString("AfterConnectScript", m_afterConnectScript);

  }

  if(m_databaseNameHasBeenSet)
  {
   payload.WithString("DatabaseName", m_databaseName);

  }

  if(m_eventsPollIntervalHasBeenSet)
  {
   payload.WithInteger("EventsPollInterval", m_eventsPollInterval);

  }

  if(m_targetDbTypeHasBeenSet)
  {
   payload.WithString("TargetDbType", TargetDbTypeMapper::GetNameForTargetDbType(m_targetDbType));
  }

  if(m_maxFileSizeHasBeenSet)
  {
   payload.WithInteger("MaxFileSize", m_maxFileSize);

  }

  if(m_parallelLoadThreadsHasBeenSet)
  {
   payload.WithInteger("ParallelLoadThreads", m_parallelLoadThreads);

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

  if(m_serverTimezoneHasBeenSet)
  {
   payload.WithString("ServerTimezone", m_serverTimezone);

  }

  if(m_usernameHasBeenSet)
  {
   payload.WithString("Username", m_username);

  }

  return payload;
}

} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws
