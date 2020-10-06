/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dms/model/IBMDb2Settings.h>
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

IBMDb2Settings::IBMDb2Settings() : 
    m_databaseNameHasBeenSet(false),
    m_passwordHasBeenSet(false),
    m_port(0),
    m_portHasBeenSet(false),
    m_serverNameHasBeenSet(false),
    m_setDataCaptureChanges(false),
    m_setDataCaptureChangesHasBeenSet(false),
    m_currentLsnHasBeenSet(false),
    m_maxKBytesPerRead(0),
    m_maxKBytesPerReadHasBeenSet(false),
    m_usernameHasBeenSet(false)
{
}

IBMDb2Settings::IBMDb2Settings(JsonView jsonValue) : 
    m_databaseNameHasBeenSet(false),
    m_passwordHasBeenSet(false),
    m_port(0),
    m_portHasBeenSet(false),
    m_serverNameHasBeenSet(false),
    m_setDataCaptureChanges(false),
    m_setDataCaptureChangesHasBeenSet(false),
    m_currentLsnHasBeenSet(false),
    m_maxKBytesPerRead(0),
    m_maxKBytesPerReadHasBeenSet(false),
    m_usernameHasBeenSet(false)
{
  *this = jsonValue;
}

IBMDb2Settings& IBMDb2Settings::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("DatabaseName"))
  {
    m_databaseName = jsonValue.GetString("DatabaseName");

    m_databaseNameHasBeenSet = true;
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

  if(jsonValue.ValueExists("SetDataCaptureChanges"))
  {
    m_setDataCaptureChanges = jsonValue.GetBool("SetDataCaptureChanges");

    m_setDataCaptureChangesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CurrentLsn"))
  {
    m_currentLsn = jsonValue.GetString("CurrentLsn");

    m_currentLsnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MaxKBytesPerRead"))
  {
    m_maxKBytesPerRead = jsonValue.GetInteger("MaxKBytesPerRead");

    m_maxKBytesPerReadHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Username"))
  {
    m_username = jsonValue.GetString("Username");

    m_usernameHasBeenSet = true;
  }

  return *this;
}

JsonValue IBMDb2Settings::Jsonize() const
{
  JsonValue payload;

  if(m_databaseNameHasBeenSet)
  {
   payload.WithString("DatabaseName", m_databaseName);

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

  if(m_setDataCaptureChangesHasBeenSet)
  {
   payload.WithBool("SetDataCaptureChanges", m_setDataCaptureChanges);

  }

  if(m_currentLsnHasBeenSet)
  {
   payload.WithString("CurrentLsn", m_currentLsn);

  }

  if(m_maxKBytesPerReadHasBeenSet)
  {
   payload.WithInteger("MaxKBytesPerRead", m_maxKBytesPerRead);

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
