/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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

OpenIDConnectConfig::OpenIDConnectConfig(const JsonValue& jsonValue) : 
    m_issuerHasBeenSet(false),
    m_clientIdHasBeenSet(false),
    m_iatTTL(0),
    m_iatTTLHasBeenSet(false),
    m_authTTL(0),
    m_authTTLHasBeenSet(false)
{
  *this = jsonValue;
}

OpenIDConnectConfig& OpenIDConnectConfig::operator =(const JsonValue& jsonValue)
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
