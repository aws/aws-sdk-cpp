/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appsync/model/OpenIDConnectConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace AppSync
{
namespace Model
{

OpenIDConnectConfig::OpenIDConnectConfig() : 
    m_issuerHasBeenSet(false),
    m_clientIdHasBeenSet(false),
    m_iatTTL(0),
    m_iatTTLHasBeenSet(false),
    m_authTTL(0),
    m_authTTLHasBeenSet(false)
{
}

OpenIDConnectConfig::OpenIDConnectConfig(JsonView jsonValue) : 
    m_issuerHasBeenSet(false),
    m_clientIdHasBeenSet(false),
    m_iatTTL(0),
    m_iatTTLHasBeenSet(false),
    m_authTTL(0),
    m_authTTLHasBeenSet(false)
{
  *this = jsonValue;
}

OpenIDConnectConfig& OpenIDConnectConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("issuer"))
  {
    m_issuer = jsonValue.GetString("issuer");

    m_issuerHasBeenSet = true;
  }

  if(jsonValue.ValueExists("clientId"))
  {
    m_clientId = jsonValue.GetString("clientId");

    m_clientIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("iatTTL"))
  {
    m_iatTTL = jsonValue.GetInt64("iatTTL");

    m_iatTTLHasBeenSet = true;
  }

  if(jsonValue.ValueExists("authTTL"))
  {
    m_authTTL = jsonValue.GetInt64("authTTL");

    m_authTTLHasBeenSet = true;
  }

  return *this;
}

JsonValue OpenIDConnectConfig::Jsonize() const
{
  JsonValue payload;

  if(m_issuerHasBeenSet)
  {
   payload.WithString("issuer", m_issuer);

  }

  if(m_clientIdHasBeenSet)
  {
   payload.WithString("clientId", m_clientId);

  }

  if(m_iatTTLHasBeenSet)
  {
   payload.WithInt64("iatTTL", m_iatTTL);

  }

  if(m_authTTLHasBeenSet)
  {
   payload.WithInt64("authTTL", m_authTTL);

  }

  return payload;
}

} // namespace Model
} // namespace AppSync
} // namespace Aws
