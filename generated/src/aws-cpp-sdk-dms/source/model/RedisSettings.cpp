/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dms/model/RedisSettings.h>
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

RedisSettings::RedisSettings(JsonView jsonValue)
{
  *this = jsonValue;
}

RedisSettings& RedisSettings::operator =(JsonView jsonValue)
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
  if(jsonValue.ValueExists("SslSecurityProtocol"))
  {
    m_sslSecurityProtocol = SslSecurityProtocolValueMapper::GetSslSecurityProtocolValueForName(jsonValue.GetString("SslSecurityProtocol"));
    m_sslSecurityProtocolHasBeenSet = true;
  }
  if(jsonValue.ValueExists("AuthType"))
  {
    m_authType = RedisAuthTypeValueMapper::GetRedisAuthTypeValueForName(jsonValue.GetString("AuthType"));
    m_authTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("AuthUserName"))
  {
    m_authUserName = jsonValue.GetString("AuthUserName");
    m_authUserNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("AuthPassword"))
  {
    m_authPassword = jsonValue.GetString("AuthPassword");
    m_authPasswordHasBeenSet = true;
  }
  if(jsonValue.ValueExists("SslCaCertificateArn"))
  {
    m_sslCaCertificateArn = jsonValue.GetString("SslCaCertificateArn");
    m_sslCaCertificateArnHasBeenSet = true;
  }
  return *this;
}

JsonValue RedisSettings::Jsonize() const
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

  if(m_sslSecurityProtocolHasBeenSet)
  {
   payload.WithString("SslSecurityProtocol", SslSecurityProtocolValueMapper::GetNameForSslSecurityProtocolValue(m_sslSecurityProtocol));
  }

  if(m_authTypeHasBeenSet)
  {
   payload.WithString("AuthType", RedisAuthTypeValueMapper::GetNameForRedisAuthTypeValue(m_authType));
  }

  if(m_authUserNameHasBeenSet)
  {
   payload.WithString("AuthUserName", m_authUserName);

  }

  if(m_authPasswordHasBeenSet)
  {
   payload.WithString("AuthPassword", m_authPassword);

  }

  if(m_sslCaCertificateArnHasBeenSet)
  {
   payload.WithString("SslCaCertificateArn", m_sslCaCertificateArn);

  }

  return payload;
}

} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws
