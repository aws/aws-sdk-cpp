﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dms/model/OracleDataProviderSettings.h>
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

OracleDataProviderSettings::OracleDataProviderSettings(JsonView jsonValue)
{
  *this = jsonValue;
}

OracleDataProviderSettings& OracleDataProviderSettings::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ServerName"))
  {
    m_serverName = jsonValue.GetString("ServerName");
    m_serverNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Port"))
  {
    m_port = jsonValue.GetInteger("Port");
    m_portHasBeenSet = true;
  }
  if(jsonValue.ValueExists("DatabaseName"))
  {
    m_databaseName = jsonValue.GetString("DatabaseName");
    m_databaseNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("SslMode"))
  {
    m_sslMode = DmsSslModeValueMapper::GetDmsSslModeValueForName(jsonValue.GetString("SslMode"));
    m_sslModeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("CertificateArn"))
  {
    m_certificateArn = jsonValue.GetString("CertificateArn");
    m_certificateArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("AsmServer"))
  {
    m_asmServer = jsonValue.GetString("AsmServer");
    m_asmServerHasBeenSet = true;
  }
  if(jsonValue.ValueExists("SecretsManagerOracleAsmSecretId"))
  {
    m_secretsManagerOracleAsmSecretId = jsonValue.GetString("SecretsManagerOracleAsmSecretId");
    m_secretsManagerOracleAsmSecretIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("SecretsManagerOracleAsmAccessRoleArn"))
  {
    m_secretsManagerOracleAsmAccessRoleArn = jsonValue.GetString("SecretsManagerOracleAsmAccessRoleArn");
    m_secretsManagerOracleAsmAccessRoleArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("SecretsManagerSecurityDbEncryptionSecretId"))
  {
    m_secretsManagerSecurityDbEncryptionSecretId = jsonValue.GetString("SecretsManagerSecurityDbEncryptionSecretId");
    m_secretsManagerSecurityDbEncryptionSecretIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("SecretsManagerSecurityDbEncryptionAccessRoleArn"))
  {
    m_secretsManagerSecurityDbEncryptionAccessRoleArn = jsonValue.GetString("SecretsManagerSecurityDbEncryptionAccessRoleArn");
    m_secretsManagerSecurityDbEncryptionAccessRoleArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("S3Path"))
  {
    m_s3Path = jsonValue.GetString("S3Path");
    m_s3PathHasBeenSet = true;
  }
  if(jsonValue.ValueExists("S3AccessRoleArn"))
  {
    m_s3AccessRoleArn = jsonValue.GetString("S3AccessRoleArn");
    m_s3AccessRoleArnHasBeenSet = true;
  }
  return *this;
}

JsonValue OracleDataProviderSettings::Jsonize() const
{
  JsonValue payload;

  if(m_serverNameHasBeenSet)
  {
   payload.WithString("ServerName", m_serverName);

  }

  if(m_portHasBeenSet)
  {
   payload.WithInteger("Port", m_port);

  }

  if(m_databaseNameHasBeenSet)
  {
   payload.WithString("DatabaseName", m_databaseName);

  }

  if(m_sslModeHasBeenSet)
  {
   payload.WithString("SslMode", DmsSslModeValueMapper::GetNameForDmsSslModeValue(m_sslMode));
  }

  if(m_certificateArnHasBeenSet)
  {
   payload.WithString("CertificateArn", m_certificateArn);

  }

  if(m_asmServerHasBeenSet)
  {
   payload.WithString("AsmServer", m_asmServer);

  }

  if(m_secretsManagerOracleAsmSecretIdHasBeenSet)
  {
   payload.WithString("SecretsManagerOracleAsmSecretId", m_secretsManagerOracleAsmSecretId);

  }

  if(m_secretsManagerOracleAsmAccessRoleArnHasBeenSet)
  {
   payload.WithString("SecretsManagerOracleAsmAccessRoleArn", m_secretsManagerOracleAsmAccessRoleArn);

  }

  if(m_secretsManagerSecurityDbEncryptionSecretIdHasBeenSet)
  {
   payload.WithString("SecretsManagerSecurityDbEncryptionSecretId", m_secretsManagerSecurityDbEncryptionSecretId);

  }

  if(m_secretsManagerSecurityDbEncryptionAccessRoleArnHasBeenSet)
  {
   payload.WithString("SecretsManagerSecurityDbEncryptionAccessRoleArn", m_secretsManagerSecurityDbEncryptionAccessRoleArn);

  }

  if(m_s3PathHasBeenSet)
  {
   payload.WithString("S3Path", m_s3Path);

  }

  if(m_s3AccessRoleArnHasBeenSet)
  {
   payload.WithString("S3AccessRoleArn", m_s3AccessRoleArn);

  }

  return payload;
}

} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws
