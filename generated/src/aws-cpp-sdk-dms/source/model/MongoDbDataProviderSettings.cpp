/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dms/model/MongoDbDataProviderSettings.h>
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

MongoDbDataProviderSettings::MongoDbDataProviderSettings() : 
    m_serverNameHasBeenSet(false),
    m_port(0),
    m_portHasBeenSet(false),
    m_databaseNameHasBeenSet(false),
    m_sslMode(DmsSslModeValue::NOT_SET),
    m_sslModeHasBeenSet(false),
    m_certificateArnHasBeenSet(false),
    m_authType(AuthTypeValue::NOT_SET),
    m_authTypeHasBeenSet(false),
    m_authSourceHasBeenSet(false),
    m_authMechanism(AuthMechanismValue::NOT_SET),
    m_authMechanismHasBeenSet(false)
{
}

MongoDbDataProviderSettings::MongoDbDataProviderSettings(JsonView jsonValue) : 
    m_serverNameHasBeenSet(false),
    m_port(0),
    m_portHasBeenSet(false),
    m_databaseNameHasBeenSet(false),
    m_sslMode(DmsSslModeValue::NOT_SET),
    m_sslModeHasBeenSet(false),
    m_certificateArnHasBeenSet(false),
    m_authType(AuthTypeValue::NOT_SET),
    m_authTypeHasBeenSet(false),
    m_authSourceHasBeenSet(false),
    m_authMechanism(AuthMechanismValue::NOT_SET),
    m_authMechanismHasBeenSet(false)
{
  *this = jsonValue;
}

MongoDbDataProviderSettings& MongoDbDataProviderSettings::operator =(JsonView jsonValue)
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

  if(jsonValue.ValueExists("AuthType"))
  {
    m_authType = AuthTypeValueMapper::GetAuthTypeValueForName(jsonValue.GetString("AuthType"));

    m_authTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AuthSource"))
  {
    m_authSource = jsonValue.GetString("AuthSource");

    m_authSourceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AuthMechanism"))
  {
    m_authMechanism = AuthMechanismValueMapper::GetAuthMechanismValueForName(jsonValue.GetString("AuthMechanism"));

    m_authMechanismHasBeenSet = true;
  }

  return *this;
}

JsonValue MongoDbDataProviderSettings::Jsonize() const
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

  if(m_authTypeHasBeenSet)
  {
   payload.WithString("AuthType", AuthTypeValueMapper::GetNameForAuthTypeValue(m_authType));
  }

  if(m_authSourceHasBeenSet)
  {
   payload.WithString("AuthSource", m_authSource);

  }

  if(m_authMechanismHasBeenSet)
  {
   payload.WithString("AuthMechanism", AuthMechanismValueMapper::GetNameForAuthMechanismValue(m_authMechanism));
  }

  return payload;
}

} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws
