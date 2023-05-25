/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/amplifybackend/model/BackendAuthAppleProviderConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace AmplifyBackend
{
namespace Model
{

BackendAuthAppleProviderConfig::BackendAuthAppleProviderConfig() : 
    m_clientIdHasBeenSet(false),
    m_keyIdHasBeenSet(false),
    m_privateKeyHasBeenSet(false),
    m_teamIdHasBeenSet(false)
{
}

BackendAuthAppleProviderConfig::BackendAuthAppleProviderConfig(JsonView jsonValue) : 
    m_clientIdHasBeenSet(false),
    m_keyIdHasBeenSet(false),
    m_privateKeyHasBeenSet(false),
    m_teamIdHasBeenSet(false)
{
  *this = jsonValue;
}

BackendAuthAppleProviderConfig& BackendAuthAppleProviderConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("client_id"))
  {
    m_clientId = jsonValue.GetString("client_id");

    m_clientIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("key_id"))
  {
    m_keyId = jsonValue.GetString("key_id");

    m_keyIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("private_key"))
  {
    m_privateKey = jsonValue.GetString("private_key");

    m_privateKeyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("team_id"))
  {
    m_teamId = jsonValue.GetString("team_id");

    m_teamIdHasBeenSet = true;
  }

  return *this;
}

JsonValue BackendAuthAppleProviderConfig::Jsonize() const
{
  JsonValue payload;

  if(m_clientIdHasBeenSet)
  {
   payload.WithString("client_id", m_clientId);

  }

  if(m_keyIdHasBeenSet)
  {
   payload.WithString("key_id", m_keyId);

  }

  if(m_privateKeyHasBeenSet)
  {
   payload.WithString("private_key", m_privateKey);

  }

  if(m_teamIdHasBeenSet)
  {
   payload.WithString("team_id", m_teamId);

  }

  return payload;
}

} // namespace Model
} // namespace AmplifyBackend
} // namespace Aws
