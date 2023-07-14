/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appflow/model/CustomConnectorProfileCredentials.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Appflow
{
namespace Model
{

CustomConnectorProfileCredentials::CustomConnectorProfileCredentials() : 
    m_authenticationType(AuthenticationType::NOT_SET),
    m_authenticationTypeHasBeenSet(false),
    m_basicHasBeenSet(false),
    m_oauth2HasBeenSet(false),
    m_apiKeyHasBeenSet(false),
    m_customHasBeenSet(false)
{
}

CustomConnectorProfileCredentials::CustomConnectorProfileCredentials(JsonView jsonValue) : 
    m_authenticationType(AuthenticationType::NOT_SET),
    m_authenticationTypeHasBeenSet(false),
    m_basicHasBeenSet(false),
    m_oauth2HasBeenSet(false),
    m_apiKeyHasBeenSet(false),
    m_customHasBeenSet(false)
{
  *this = jsonValue;
}

CustomConnectorProfileCredentials& CustomConnectorProfileCredentials::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("authenticationType"))
  {
    m_authenticationType = AuthenticationTypeMapper::GetAuthenticationTypeForName(jsonValue.GetString("authenticationType"));

    m_authenticationTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("basic"))
  {
    m_basic = jsonValue.GetObject("basic");

    m_basicHasBeenSet = true;
  }

  if(jsonValue.ValueExists("oauth2"))
  {
    m_oauth2 = jsonValue.GetObject("oauth2");

    m_oauth2HasBeenSet = true;
  }

  if(jsonValue.ValueExists("apiKey"))
  {
    m_apiKey = jsonValue.GetObject("apiKey");

    m_apiKeyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("custom"))
  {
    m_custom = jsonValue.GetObject("custom");

    m_customHasBeenSet = true;
  }

  return *this;
}

JsonValue CustomConnectorProfileCredentials::Jsonize() const
{
  JsonValue payload;

  if(m_authenticationTypeHasBeenSet)
  {
   payload.WithString("authenticationType", AuthenticationTypeMapper::GetNameForAuthenticationType(m_authenticationType));
  }

  if(m_basicHasBeenSet)
  {
   payload.WithObject("basic", m_basic.Jsonize());

  }

  if(m_oauth2HasBeenSet)
  {
   payload.WithObject("oauth2", m_oauth2.Jsonize());

  }

  if(m_apiKeyHasBeenSet)
  {
   payload.WithObject("apiKey", m_apiKey.Jsonize());

  }

  if(m_customHasBeenSet)
  {
   payload.WithObject("custom", m_custom.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Appflow
} // namespace Aws
