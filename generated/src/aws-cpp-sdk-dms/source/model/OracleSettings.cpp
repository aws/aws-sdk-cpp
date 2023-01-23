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
    m_addSupplementalLogging(false),
    m_addSupplementalLoggingHasBeenSet(false),
    m_archivedLogDestId(0),
    m_archivedLogDestIdHasBeenSet(false),
    m_additionalArchivedLogDestId(0),
    m_additionalArchivedLogDestIdHasBeenSet(false),
    m_extraArchivedLogDestIdsHasBeenSet(false),
    m_allowSelectNestedTables(false),
    m_allowSelectNestedTablesHasBeenSet(false),
    m_parallelAsmReadThreads(0),
    m_parallelAsmReadThreadsHasBeenSet(false),
    m_readAheadBlocks(0),
    m_readAheadBlocksHasBeenSet(false),
    m_accessAlternateDirectly(false),
    m_accessAlternateDirectlyHasBeenSet(false),
    m_useAlternateFolderForOnline(false),
    m_useAlternateFolderForOnlineHasBeenSet(false),
    m_oraclePathPrefixHasBeenSet(false),
    m_usePathPrefixHasBeenSet(false),
    m_replacePathPrefix(false),
    m_replacePathPrefixHasBeenSet(false),
    m_enableHomogenousTablespace(false),
    m_enableHomogenousTablespaceHasBeenSet(false),
    m_directPathNoLog(false),
    m_directPathNoLogHasBeenSet(false),
    m_archivedLogsOnly(false),
    m_archivedLogsOnlyHasBeenSet(false),
    m_asmPasswordHasBeenSet(false),
    m_asmServerHasBeenSet(false),
    m_asmUserHasBeenSet(false),
    m_charLengthSemantics(CharLengthSemantics::NOT_SET),
    m_charLengthSemanticsHasBeenSet(false),
    m_databaseNameHasBeenSet(false),
    m_directPathParallelLoad(false),
    m_directPathParallelLoadHasBeenSet(false),
    m_failTasksOnLobTruncation(false),
    m_failTasksOnLobTruncationHasBeenSet(false),
    m_numberDatatypeScale(0),
    m_numberDatatypeScaleHasBeenSet(false),
    m_passwordHasBeenSet(false),
    m_port(0),
    m_portHasBeenSet(false),
    m_readTableSpaceName(false),
    m_readTableSpaceNameHasBeenSet(false),
    m_retryInterval(0),
    m_retryIntervalHasBeenSet(false),
    m_securityDbEncryptionHasBeenSet(false),
    m_securityDbEncryptionNameHasBeenSet(false),
    m_serverNameHasBeenSet(false),
    m_spatialDataOptionToGeoJsonFunctionNameHasBeenSet(false),
    m_standbyDelayTime(0),
    m_standbyDelayTimeHasBeenSet(false),
    m_usernameHasBeenSet(false),
    m_useBFile(false),
    m_useBFileHasBeenSet(false),
    m_useDirectPathFullLoad(false),
    m_useDirectPathFullLoadHasBeenSet(false),
    m_useLogminerReader(false),
    m_useLogminerReaderHasBeenSet(false),
    m_secretsManagerAccessRoleArnHasBeenSet(false),
    m_secretsManagerSecretIdHasBeenSet(false),
    m_secretsManagerOracleAsmAccessRoleArnHasBeenSet(false),
    m_secretsManagerOracleAsmSecretIdHasBeenSet(false),
    m_trimSpaceInChar(false),
    m_trimSpaceInCharHasBeenSet(false)
{
}

OracleSettings::OracleSettings(JsonView jsonValue) : 
    m_addSupplementalLogging(false),
    m_addSupplementalLoggingHasBeenSet(false),
    m_archivedLogDestId(0),
    m_archivedLogDestIdHasBeenSet(false),
    m_additionalArchivedLogDestId(0),
    m_additionalArchivedLogDestIdHasBeenSet(false),
    m_extraArchivedLogDestIdsHasBeenSet(false),
    m_allowSelectNestedTables(false),
    m_allowSelectNestedTablesHasBeenSet(false),
    m_parallelAsmReadThreads(0),
    m_parallelAsmReadThreadsHasBeenSet(false),
    m_readAheadBlocks(0),
    m_readAheadBlocksHasBeenSet(false),
    m_accessAlternateDirectly(false),
    m_accessAlternateDirectlyHasBeenSet(false),
    m_useAlternateFolderForOnline(false),
    m_useAlternateFolderForOnlineHasBeenSet(false),
    m_oraclePathPrefixHasBeenSet(false),
    m_usePathPrefixHasBeenSet(false),
    m_replacePathPrefix(false),
    m_replacePathPrefixHasBeenSet(false),
    m_enableHomogenousTablespace(false),
    m_enableHomogenousTablespaceHasBeenSet(false),
    m_directPathNoLog(false),
    m_directPathNoLogHasBeenSet(false),
    m_archivedLogsOnly(false),
    m_archivedLogsOnlyHasBeenSet(false),
    m_asmPasswordHasBeenSet(false),
    m_asmServerHasBeenSet(false),
    m_asmUserHasBeenSet(false),
    m_charLengthSemantics(CharLengthSemantics::NOT_SET),
    m_charLengthSemanticsHasBeenSet(false),
    m_databaseNameHasBeenSet(false),
    m_directPathParallelLoad(false),
    m_directPathParallelLoadHasBeenSet(false),
    m_failTasksOnLobTruncation(false),
    m_failTasksOnLobTruncationHasBeenSet(false),
    m_numberDatatypeScale(0),
    m_numberDatatypeScaleHasBeenSet(false),
    m_passwordHasBeenSet(false),
    m_port(0),
    m_portHasBeenSet(false),
    m_readTableSpaceName(false),
    m_readTableSpaceNameHasBeenSet(false),
    m_retryInterval(0),
    m_retryIntervalHasBeenSet(false),
    m_securityDbEncryptionHasBeenSet(false),
    m_securityDbEncryptionNameHasBeenSet(false),
    m_serverNameHasBeenSet(false),
    m_spatialDataOptionToGeoJsonFunctionNameHasBeenSet(false),
    m_standbyDelayTime(0),
    m_standbyDelayTimeHasBeenSet(false),
    m_usernameHasBeenSet(false),
    m_useBFile(false),
    m_useBFileHasBeenSet(false),
    m_useDirectPathFullLoad(false),
    m_useDirectPathFullLoadHasBeenSet(false),
    m_useLogminerReader(false),
    m_useLogminerReaderHasBeenSet(false),
    m_secretsManagerAccessRoleArnHasBeenSet(false),
    m_secretsManagerSecretIdHasBeenSet(false),
    m_secretsManagerOracleAsmAccessRoleArnHasBeenSet(false),
    m_secretsManagerOracleAsmSecretIdHasBeenSet(false),
    m_trimSpaceInChar(false),
    m_trimSpaceInCharHasBeenSet(false)
{
  *this = jsonValue;
}

OracleSettings& OracleSettings::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("AddSupplementalLogging"))
  {
    m_addSupplementalLogging = jsonValue.GetBool("AddSupplementalLogging");

    m_addSupplementalLoggingHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ArchivedLogDestId"))
  {
    m_archivedLogDestId = jsonValue.GetInteger("ArchivedLogDestId");

    m_archivedLogDestIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AdditionalArchivedLogDestId"))
  {
    m_additionalArchivedLogDestId = jsonValue.GetInteger("AdditionalArchivedLogDestId");

    m_additionalArchivedLogDestIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ExtraArchivedLogDestIds"))
  {
    Aws::Utils::Array<JsonView> extraArchivedLogDestIdsJsonList = jsonValue.GetArray("ExtraArchivedLogDestIds");
    for(unsigned extraArchivedLogDestIdsIndex = 0; extraArchivedLogDestIdsIndex < extraArchivedLogDestIdsJsonList.GetLength(); ++extraArchivedLogDestIdsIndex)
    {
      m_extraArchivedLogDestIds.push_back(extraArchivedLogDestIdsJsonList[extraArchivedLogDestIdsIndex].AsInteger());
    }
    m_extraArchivedLogDestIdsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AllowSelectNestedTables"))
  {
    m_allowSelectNestedTables = jsonValue.GetBool("AllowSelectNestedTables");

    m_allowSelectNestedTablesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ParallelAsmReadThreads"))
  {
    m_parallelAsmReadThreads = jsonValue.GetInteger("ParallelAsmReadThreads");

    m_parallelAsmReadThreadsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ReadAheadBlocks"))
  {
    m_readAheadBlocks = jsonValue.GetInteger("ReadAheadBlocks");

    m_readAheadBlocksHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AccessAlternateDirectly"))
  {
    m_accessAlternateDirectly = jsonValue.GetBool("AccessAlternateDirectly");

    m_accessAlternateDirectlyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("UseAlternateFolderForOnline"))
  {
    m_useAlternateFolderForOnline = jsonValue.GetBool("UseAlternateFolderForOnline");

    m_useAlternateFolderForOnlineHasBeenSet = true;
  }

  if(jsonValue.ValueExists("OraclePathPrefix"))
  {
    m_oraclePathPrefix = jsonValue.GetString("OraclePathPrefix");

    m_oraclePathPrefixHasBeenSet = true;
  }

  if(jsonValue.ValueExists("UsePathPrefix"))
  {
    m_usePathPrefix = jsonValue.GetString("UsePathPrefix");

    m_usePathPrefixHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ReplacePathPrefix"))
  {
    m_replacePathPrefix = jsonValue.GetBool("ReplacePathPrefix");

    m_replacePathPrefixHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EnableHomogenousTablespace"))
  {
    m_enableHomogenousTablespace = jsonValue.GetBool("EnableHomogenousTablespace");

    m_enableHomogenousTablespaceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DirectPathNoLog"))
  {
    m_directPathNoLog = jsonValue.GetBool("DirectPathNoLog");

    m_directPathNoLogHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ArchivedLogsOnly"))
  {
    m_archivedLogsOnly = jsonValue.GetBool("ArchivedLogsOnly");

    m_archivedLogsOnlyHasBeenSet = true;
  }

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

  if(jsonValue.ValueExists("CharLengthSemantics"))
  {
    m_charLengthSemantics = CharLengthSemanticsMapper::GetCharLengthSemanticsForName(jsonValue.GetString("CharLengthSemantics"));

    m_charLengthSemanticsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DatabaseName"))
  {
    m_databaseName = jsonValue.GetString("DatabaseName");

    m_databaseNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DirectPathParallelLoad"))
  {
    m_directPathParallelLoad = jsonValue.GetBool("DirectPathParallelLoad");

    m_directPathParallelLoadHasBeenSet = true;
  }

  if(jsonValue.ValueExists("FailTasksOnLobTruncation"))
  {
    m_failTasksOnLobTruncation = jsonValue.GetBool("FailTasksOnLobTruncation");

    m_failTasksOnLobTruncationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("NumberDatatypeScale"))
  {
    m_numberDatatypeScale = jsonValue.GetInteger("NumberDatatypeScale");

    m_numberDatatypeScaleHasBeenSet = true;
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

  if(jsonValue.ValueExists("ReadTableSpaceName"))
  {
    m_readTableSpaceName = jsonValue.GetBool("ReadTableSpaceName");

    m_readTableSpaceNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RetryInterval"))
  {
    m_retryInterval = jsonValue.GetInteger("RetryInterval");

    m_retryIntervalHasBeenSet = true;
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

  if(jsonValue.ValueExists("SpatialDataOptionToGeoJsonFunctionName"))
  {
    m_spatialDataOptionToGeoJsonFunctionName = jsonValue.GetString("SpatialDataOptionToGeoJsonFunctionName");

    m_spatialDataOptionToGeoJsonFunctionNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("StandbyDelayTime"))
  {
    m_standbyDelayTime = jsonValue.GetInteger("StandbyDelayTime");

    m_standbyDelayTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Username"))
  {
    m_username = jsonValue.GetString("Username");

    m_usernameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("UseBFile"))
  {
    m_useBFile = jsonValue.GetBool("UseBFile");

    m_useBFileHasBeenSet = true;
  }

  if(jsonValue.ValueExists("UseDirectPathFullLoad"))
  {
    m_useDirectPathFullLoad = jsonValue.GetBool("UseDirectPathFullLoad");

    m_useDirectPathFullLoadHasBeenSet = true;
  }

  if(jsonValue.ValueExists("UseLogminerReader"))
  {
    m_useLogminerReader = jsonValue.GetBool("UseLogminerReader");

    m_useLogminerReaderHasBeenSet = true;
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

  if(jsonValue.ValueExists("SecretsManagerOracleAsmAccessRoleArn"))
  {
    m_secretsManagerOracleAsmAccessRoleArn = jsonValue.GetString("SecretsManagerOracleAsmAccessRoleArn");

    m_secretsManagerOracleAsmAccessRoleArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SecretsManagerOracleAsmSecretId"))
  {
    m_secretsManagerOracleAsmSecretId = jsonValue.GetString("SecretsManagerOracleAsmSecretId");

    m_secretsManagerOracleAsmSecretIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TrimSpaceInChar"))
  {
    m_trimSpaceInChar = jsonValue.GetBool("TrimSpaceInChar");

    m_trimSpaceInCharHasBeenSet = true;
  }

  return *this;
}

JsonValue OracleSettings::Jsonize() const
{
  JsonValue payload;

  if(m_addSupplementalLoggingHasBeenSet)
  {
   payload.WithBool("AddSupplementalLogging", m_addSupplementalLogging);

  }

  if(m_archivedLogDestIdHasBeenSet)
  {
   payload.WithInteger("ArchivedLogDestId", m_archivedLogDestId);

  }

  if(m_additionalArchivedLogDestIdHasBeenSet)
  {
   payload.WithInteger("AdditionalArchivedLogDestId", m_additionalArchivedLogDestId);

  }

  if(m_extraArchivedLogDestIdsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> extraArchivedLogDestIdsJsonList(m_extraArchivedLogDestIds.size());
   for(unsigned extraArchivedLogDestIdsIndex = 0; extraArchivedLogDestIdsIndex < extraArchivedLogDestIdsJsonList.GetLength(); ++extraArchivedLogDestIdsIndex)
   {
     extraArchivedLogDestIdsJsonList[extraArchivedLogDestIdsIndex].AsInteger(m_extraArchivedLogDestIds[extraArchivedLogDestIdsIndex]);
   }
   payload.WithArray("ExtraArchivedLogDestIds", std::move(extraArchivedLogDestIdsJsonList));

  }

  if(m_allowSelectNestedTablesHasBeenSet)
  {
   payload.WithBool("AllowSelectNestedTables", m_allowSelectNestedTables);

  }

  if(m_parallelAsmReadThreadsHasBeenSet)
  {
   payload.WithInteger("ParallelAsmReadThreads", m_parallelAsmReadThreads);

  }

  if(m_readAheadBlocksHasBeenSet)
  {
   payload.WithInteger("ReadAheadBlocks", m_readAheadBlocks);

  }

  if(m_accessAlternateDirectlyHasBeenSet)
  {
   payload.WithBool("AccessAlternateDirectly", m_accessAlternateDirectly);

  }

  if(m_useAlternateFolderForOnlineHasBeenSet)
  {
   payload.WithBool("UseAlternateFolderForOnline", m_useAlternateFolderForOnline);

  }

  if(m_oraclePathPrefixHasBeenSet)
  {
   payload.WithString("OraclePathPrefix", m_oraclePathPrefix);

  }

  if(m_usePathPrefixHasBeenSet)
  {
   payload.WithString("UsePathPrefix", m_usePathPrefix);

  }

  if(m_replacePathPrefixHasBeenSet)
  {
   payload.WithBool("ReplacePathPrefix", m_replacePathPrefix);

  }

  if(m_enableHomogenousTablespaceHasBeenSet)
  {
   payload.WithBool("EnableHomogenousTablespace", m_enableHomogenousTablespace);

  }

  if(m_directPathNoLogHasBeenSet)
  {
   payload.WithBool("DirectPathNoLog", m_directPathNoLog);

  }

  if(m_archivedLogsOnlyHasBeenSet)
  {
   payload.WithBool("ArchivedLogsOnly", m_archivedLogsOnly);

  }

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

  if(m_charLengthSemanticsHasBeenSet)
  {
   payload.WithString("CharLengthSemantics", CharLengthSemanticsMapper::GetNameForCharLengthSemantics(m_charLengthSemantics));
  }

  if(m_databaseNameHasBeenSet)
  {
   payload.WithString("DatabaseName", m_databaseName);

  }

  if(m_directPathParallelLoadHasBeenSet)
  {
   payload.WithBool("DirectPathParallelLoad", m_directPathParallelLoad);

  }

  if(m_failTasksOnLobTruncationHasBeenSet)
  {
   payload.WithBool("FailTasksOnLobTruncation", m_failTasksOnLobTruncation);

  }

  if(m_numberDatatypeScaleHasBeenSet)
  {
   payload.WithInteger("NumberDatatypeScale", m_numberDatatypeScale);

  }

  if(m_passwordHasBeenSet)
  {
   payload.WithString("Password", m_password);

  }

  if(m_portHasBeenSet)
  {
   payload.WithInteger("Port", m_port);

  }

  if(m_readTableSpaceNameHasBeenSet)
  {
   payload.WithBool("ReadTableSpaceName", m_readTableSpaceName);

  }

  if(m_retryIntervalHasBeenSet)
  {
   payload.WithInteger("RetryInterval", m_retryInterval);

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

  if(m_spatialDataOptionToGeoJsonFunctionNameHasBeenSet)
  {
   payload.WithString("SpatialDataOptionToGeoJsonFunctionName", m_spatialDataOptionToGeoJsonFunctionName);

  }

  if(m_standbyDelayTimeHasBeenSet)
  {
   payload.WithInteger("StandbyDelayTime", m_standbyDelayTime);

  }

  if(m_usernameHasBeenSet)
  {
   payload.WithString("Username", m_username);

  }

  if(m_useBFileHasBeenSet)
  {
   payload.WithBool("UseBFile", m_useBFile);

  }

  if(m_useDirectPathFullLoadHasBeenSet)
  {
   payload.WithBool("UseDirectPathFullLoad", m_useDirectPathFullLoad);

  }

  if(m_useLogminerReaderHasBeenSet)
  {
   payload.WithBool("UseLogminerReader", m_useLogminerReader);

  }

  if(m_secretsManagerAccessRoleArnHasBeenSet)
  {
   payload.WithString("SecretsManagerAccessRoleArn", m_secretsManagerAccessRoleArn);

  }

  if(m_secretsManagerSecretIdHasBeenSet)
  {
   payload.WithString("SecretsManagerSecretId", m_secretsManagerSecretId);

  }

  if(m_secretsManagerOracleAsmAccessRoleArnHasBeenSet)
  {
   payload.WithString("SecretsManagerOracleAsmAccessRoleArn", m_secretsManagerOracleAsmAccessRoleArn);

  }

  if(m_secretsManagerOracleAsmSecretIdHasBeenSet)
  {
   payload.WithString("SecretsManagerOracleAsmSecretId", m_secretsManagerOracleAsmSecretId);

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
