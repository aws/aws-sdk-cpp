/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/amplifybackend/model/BackendAuthSocialProviderConfig.h>
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

BackendAuthSocialProviderConfig::BackendAuthSocialProviderConfig() : 
    m_clientIdHasBeenSet(false),
    m_clientSecretHasBeenSet(false)
{
}

BackendAuthSocialProviderConfig::BackendAuthSocialProviderConfig(JsonView jsonValue) : 
    m_clientIdHasBeenSet(false),
    m_clientSecretHasBeenSet(false)
{
  *this = jsonValue;
}

BackendAuthSocialProviderConfig& BackendAuthSocialProviderConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("client_id"))
  {
    m_clientId = jsonValue.GetString("client_id");

    m_clientIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("client_secret"))
  {
    m_clientSecret = jsonValue.GetString("client_secret");

    m_clientSecretHasBeenSet = true;
  }

  return *this;
}

JsonValue BackendAuthSocialProviderConfig::Jsonize() const
{
  JsonValue payload;

  if(m_clientIdHasBeenSet)
  {
   payload.WithString("client_id", m_clientId);

  }

  if(m_clientSecretHasBeenSet)
  {
   payload.WithString("client_secret", m_clientSecret);

  }

  return payload;
}

} // namespace Model
} // namespace AmplifyBackend
} // namespace Aws
