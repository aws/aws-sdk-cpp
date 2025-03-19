/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datazone/model/AuthorizationCodeProperties.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DataZone
{
namespace Model
{

AuthorizationCodeProperties::AuthorizationCodeProperties(JsonView jsonValue)
{
  *this = jsonValue;
}

AuthorizationCodeProperties& AuthorizationCodeProperties::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("authorizationCode"))
  {
    m_authorizationCode = jsonValue.GetString("authorizationCode");
    m_authorizationCodeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("redirectUri"))
  {
    m_redirectUri = jsonValue.GetString("redirectUri");
    m_redirectUriHasBeenSet = true;
  }
  return *this;
}

JsonValue AuthorizationCodeProperties::Jsonize() const
{
  JsonValue payload;

  if(m_authorizationCodeHasBeenSet)
  {
   payload.WithString("authorizationCode", m_authorizationCode);

  }

  if(m_redirectUriHasBeenSet)
  {
   payload.WithString("redirectUri", m_redirectUri);

  }

  return payload;
}

} // namespace Model
} // namespace DataZone
} // namespace Aws
