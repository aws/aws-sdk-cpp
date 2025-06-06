﻿/**
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

IBMDb2Settings::IBMDb2Settings(JsonView jsonValue)
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
  if(jsonValue.ValueExists("LoadTimeout"))
  {
    m_loadTimeout = jsonValue.GetInteger("LoadTimeout");
    m_loadTimeoutHasBeenSet = true;
  }
  if(jsonValue.ValueExists("WriteBufferSize"))
  {
    m_writeBufferSize = jsonValue.GetInteger("WriteBufferSize");
    m_writeBufferSizeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("MaxFileSize"))
  {
    m_maxFileSize = jsonValue.GetInteger("MaxFileSize");
    m_maxFileSizeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("KeepCsvFiles"))
  {
    m_keepCsvFiles = jsonValue.GetBool("KeepCsvFiles");
    m_keepCsvFilesHasBeenSet = true;
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

  if(m_secretsManagerAccessRoleArnHasBeenSet)
  {
   payload.WithString("SecretsManagerAccessRoleArn", m_secretsManagerAccessRoleArn);

  }

  if(m_secretsManagerSecretIdHasBeenSet)
  {
   payload.WithString("SecretsManagerSecretId", m_secretsManagerSecretId);

  }

  if(m_loadTimeoutHasBeenSet)
  {
   payload.WithInteger("LoadTimeout", m_loadTimeout);

  }

  if(m_writeBufferSizeHasBeenSet)
  {
   payload.WithInteger("WriteBufferSize", m_writeBufferSize);

  }

  if(m_maxFileSizeHasBeenSet)
  {
   payload.WithInteger("MaxFileSize", m_maxFileSize);

  }

  if(m_keepCsvFilesHasBeenSet)
  {
   payload.WithBool("KeepCsvFiles", m_keepCsvFiles);

  }

  return payload;
}

} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws
