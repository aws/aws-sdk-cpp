/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appfabric/model/Oauth2Credential.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace AppFabric
{
namespace Model
{

Oauth2Credential::Oauth2Credential() : 
    m_clientIdHasBeenSet(false),
    m_clientSecretHasBeenSet(false)
{
}

Oauth2Credential::Oauth2Credential(JsonView jsonValue) : 
    m_clientIdHasBeenSet(false),
    m_clientSecretHasBeenSet(false)
{
  *this = jsonValue;
}

Oauth2Credential& Oauth2Credential::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("clientId"))
  {
    m_clientId = jsonValue.GetString("clientId");

    m_clientIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("clientSecret"))
  {
    m_clientSecret = jsonValue.GetString("clientSecret");

    m_clientSecretHasBeenSet = true;
  }

  return *this;
}

JsonValue Oauth2Credential::Jsonize() const
{
  JsonValue payload;

  if(m_clientIdHasBeenSet)
  {
   payload.WithString("clientId", m_clientId);

  }

  if(m_clientSecretHasBeenSet)
  {
   payload.WithString("clientSecret", m_clientSecret);

  }

  return payload;
}

} // namespace Model
} // namespace AppFabric
} // namespace Aws
