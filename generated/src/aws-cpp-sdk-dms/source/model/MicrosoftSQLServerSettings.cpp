/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dms/model/MicrosoftSQLServerSettings.h>
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

MicrosoftSQLServerSettings::MicrosoftSQLServerSettings() : 
    m_port(0),
    m_portHasBeenSet(false),
    m_bcpPacketSize(0),
    m_bcpPacketSizeHasBeenSet(false),
    m_databaseNameHasBeenSet(false),
    m_controlTablesFileGroupHasBeenSet(false),
    m_passwordHasBeenSet(false),
    m_querySingleAlwaysOnNode(false),
    m_querySingleAlwaysOnNodeHasBeenSet(false),
    m_readBackupOnly(false),
    m_readBackupOnlyHasBeenSet(false),
    m_safeguardPolicy(SafeguardPolicy::NOT_SET),
    m_safeguardPolicyHasBeenSet(false),
    m_serverNameHasBeenSet(false),
    m_usernameHasBeenSet(false),
    m_useBcpFullLoad(false),
    m_useBcpFullLoadHasBeenSet(false),
    m_useThirdPartyBackupDevice(false),
    m_useThirdPartyBackupDeviceHasBeenSet(false),
    m_secretsManagerAccessRoleArnHasBeenSet(false),
    m_secretsManagerSecretIdHasBeenSet(false),
    m_trimSpaceInChar(false),
    m_trimSpaceInCharHasBeenSet(false),
    m_tlogAccessMode(TlogAccessMode::NOT_SET),
    m_tlogAccessModeHasBeenSet(false),
    m_forceLobLookup(false),
    m_forceLobLookupHasBeenSet(false)
{
}

MicrosoftSQLServerSettings::MicrosoftSQLServerSettings(JsonView jsonValue) : 
    m_port(0),
    m_portHasBeenSet(false),
    m_bcpPacketSize(0),
    m_bcpPacketSizeHasBeenSet(false),
    m_databaseNameHasBeenSet(false),
    m_controlTablesFileGroupHasBeenSet(false),
    m_passwordHasBeenSet(false),
    m_querySingleAlwaysOnNode(false),
    m_querySingleAlwaysOnNodeHasBeenSet(false),
    m_readBackupOnly(false),
    m_readBackupOnlyHasBeenSet(false),
    m_safeguardPolicy(SafeguardPolicy::NOT_SET),
    m_safeguardPolicyHasBeenSet(false),
    m_serverNameHasBeenSet(false),
    m_usernameHasBeenSet(false),
    m_useBcpFullLoad(false),
    m_useBcpFullLoadHasBeenSet(false),
    m_useThirdPartyBackupDevice(false),
    m_useThirdPartyBackupDeviceHasBeenSet(false),
    m_secretsManagerAccessRoleArnHasBeenSet(false),
    m_secretsManagerSecretIdHasBeenSet(false),
    m_trimSpaceInChar(false),
    m_trimSpaceInCharHasBeenSet(false),
    m_tlogAccessMode(TlogAccessMode::NOT_SET),
    m_tlogAccessModeHasBeenSet(false),
    m_forceLobLookup(false),
    m_forceLobLookupHasBeenSet(false)
{
  *this = jsonValue;
}

MicrosoftSQLServerSettings& MicrosoftSQLServerSettings::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Port"))
  {
    m_port = jsonValue.GetInteger("Port");

    m_portHasBeenSet = true;
  }

  if(jsonValue.ValueExists("BcpPacketSize"))
  {
    m_bcpPacketSize = jsonValue.GetInteger("BcpPacketSize");

    m_bcpPacketSizeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DatabaseName"))
  {
    m_databaseName = jsonValue.GetString("DatabaseName");

    m_databaseNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ControlTablesFileGroup"))
  {
    m_controlTablesFileGroup = jsonValue.GetString("ControlTablesFileGroup");

    m_controlTablesFileGroupHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Password"))
  {
    m_password = jsonValue.GetString("Password");

    m_passwordHasBeenSet = true;
  }

  if(jsonValue.ValueExists("QuerySingleAlwaysOnNode"))
  {
    m_querySingleAlwaysOnNode = jsonValue.GetBool("QuerySingleAlwaysOnNode");

    m_querySingleAlwaysOnNodeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ReadBackupOnly"))
  {
    m_readBackupOnly = jsonValue.GetBool("ReadBackupOnly");

    m_readBackupOnlyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SafeguardPolicy"))
  {
    m_safeguardPolicy = SafeguardPolicyMapper::GetSafeguardPolicyForName(jsonValue.GetString("SafeguardPolicy"));

    m_safeguardPolicyHasBeenSet = true;
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

  if(jsonValue.ValueExists("UseBcpFullLoad"))
  {
    m_useBcpFullLoad = jsonValue.GetBool("UseBcpFullLoad");

    m_useBcpFullLoadHasBeenSet = true;
  }

  if(jsonValue.ValueExists("UseThirdPartyBackupDevice"))
  {
    m_useThirdPartyBackupDevice = jsonValue.GetBool("UseThirdPartyBackupDevice");

    m_useThirdPartyBackupDeviceHasBeenSet = true;
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

  if(jsonValue.ValueExists("TlogAccessMode"))
  {
    m_tlogAccessMode = TlogAccessModeMapper::GetTlogAccessModeForName(jsonValue.GetString("TlogAccessMode"));

    m_tlogAccessModeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ForceLobLookup"))
  {
    m_forceLobLookup = jsonValue.GetBool("ForceLobLookup");

    m_forceLobLookupHasBeenSet = true;
  }

  return *this;
}

JsonValue MicrosoftSQLServerSettings::Jsonize() const
{
  JsonValue payload;

  if(m_portHasBeenSet)
  {
   payload.WithInteger("Port", m_port);

  }

  if(m_bcpPacketSizeHasBeenSet)
  {
   payload.WithInteger("BcpPacketSize", m_bcpPacketSize);

  }

  if(m_databaseNameHasBeenSet)
  {
   payload.WithString("DatabaseName", m_databaseName);

  }

  if(m_controlTablesFileGroupHasBeenSet)
  {
   payload.WithString("ControlTablesFileGroup", m_controlTablesFileGroup);

  }

  if(m_passwordHasBeenSet)
  {
   payload.WithString("Password", m_password);

  }

  if(m_querySingleAlwaysOnNodeHasBeenSet)
  {
   payload.WithBool("QuerySingleAlwaysOnNode", m_querySingleAlwaysOnNode);

  }

  if(m_readBackupOnlyHasBeenSet)
  {
   payload.WithBool("ReadBackupOnly", m_readBackupOnly);

  }

  if(m_safeguardPolicyHasBeenSet)
  {
   payload.WithString("SafeguardPolicy", SafeguardPolicyMapper::GetNameForSafeguardPolicy(m_safeguardPolicy));
  }

  if(m_serverNameHasBeenSet)
  {
   payload.WithString("ServerName", m_serverName);

  }

  if(m_usernameHasBeenSet)
  {
   payload.WithString("Username", m_username);

  }

  if(m_useBcpFullLoadHasBeenSet)
  {
   payload.WithBool("UseBcpFullLoad", m_useBcpFullLoad);

  }

  if(m_useThirdPartyBackupDeviceHasBeenSet)
  {
   payload.WithBool("UseThirdPartyBackupDevice", m_useThirdPartyBackupDevice);

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

  if(m_tlogAccessModeHasBeenSet)
  {
   payload.WithString("TlogAccessMode", TlogAccessModeMapper::GetNameForTlogAccessMode(m_tlogAccessMode));
  }

  if(m_forceLobLookupHasBeenSet)
  {
   payload.WithBool("ForceLobLookup", m_forceLobLookup);

  }

  return payload;
}

} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws
