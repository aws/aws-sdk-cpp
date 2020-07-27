/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dms/model/OracleSettings.h>
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

OracleSettings::OracleSettings() : 
    m_asmPasswordHasBeenSet(false),
    m_asmServerHasBeenSet(false),
    m_asmUserHasBeenSet(false),
    m_databaseNameHasBeenSet(false),
    m_passwordHasBeenSet(false),
    m_port(0),
    m_portHasBeenSet(false),
    m_securityDbEncryptionHasBeenSet(false),
    m_securityDbEncryptionNameHasBeenSet(false),
    m_serverNameHasBeenSet(false),
    m_usernameHasBeenSet(false)
{
}

OracleSettings::OracleSettings(JsonView jsonValue) : 
    m_asmPasswordHasBeenSet(false),
    m_asmServerHasBeenSet(false),
    m_asmUserHasBeenSet(false),
    m_databaseNameHasBeenSet(false),
    m_passwordHasBeenSet(false),
    m_port(0),
    m_portHasBeenSet(false),
    m_securityDbEncryptionHasBeenSet(false),
    m_securityDbEncryptionNameHasBeenSet(false),
    m_serverNameHasBeenSet(false),
    m_usernameHasBeenSet(false)
{
  *this = jsonValue;
}

OracleSettings& OracleSettings::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("AsmPassword"))
  {
    m_asmPassword = jsonValue.GetString("AsmPassword");

    m_asmPasswordHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AsmServer"))
  {
    m_asmServer = jsonValue.GetString("AsmServer");

    m_asmServerHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AsmUser"))
  {
    m_asmUser = jsonValue.GetString("AsmUser");

    m_asmUserHasBeenSet = true;
  }

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

  if(jsonValue.ValueExists("SecurityDbEncryption"))
  {
    m_securityDbEncryption = jsonValue.GetString("SecurityDbEncryption");

    m_securityDbEncryptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SecurityDbEncryptionName"))
  {
    m_securityDbEncryptionName = jsonValue.GetString("SecurityDbEncryptionName");

    m_securityDbEncryptionNameHasBeenSet = true;
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

  return *this;
}

JsonValue OracleSettings::Jsonize() const
{
  JsonValue payload;

  if(m_asmPasswordHasBeenSet)
  {
   payload.WithString("AsmPassword", m_asmPassword);

  }

  if(m_asmServerHasBeenSet)
  {
   payload.WithString("AsmServer", m_asmServer);

  }

  if(m_asmUserHasBeenSet)
  {
   payload.WithString("AsmUser", m_asmUser);

  }

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

  if(m_securityDbEncryptionHasBeenSet)
  {
   payload.WithString("SecurityDbEncryption", m_securityDbEncryption);

  }

  if(m_securityDbEncryptionNameHasBeenSet)
  {
   payload.WithString("SecurityDbEncryptionName", m_securityDbEncryptionName);

  }

  if(m_serverNameHasBeenSet)
  {
   payload.WithString("ServerName", m_serverName);

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
