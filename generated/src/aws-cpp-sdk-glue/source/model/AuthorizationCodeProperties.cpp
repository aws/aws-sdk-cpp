/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/AuthorizationCodeProperties.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Glue
{
namespace Model
{

AuthorizationCodeProperties::AuthorizationCodeProperties(JsonView jsonValue)
{
  *this = jsonValue;
}

AuthorizationCodeProperties& AuthorizationCodeProperties::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("AuthorizationCode"))
  {
    m_authorizationCode = jsonValue.GetString("AuthorizationCode");
    m_authorizationCodeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("RedirectUri"))
  {
    m_redirectUri = jsonValue.GetString("RedirectUri");
    m_redirectUriHasBeenSet = true;
  }
  return *this;
}

JsonValue AuthorizationCodeProperties::Jsonize() const
{
  JsonValue payload;

  if(m_authorizationCodeHasBeenSet)
  {
   payload.WithString("AuthorizationCode", m_authorizationCode);

  }

  if(m_redirectUriHasBeenSet)
  {
   payload.WithString("RedirectUri", m_redirectUri);

  }

  return payload;
}

} // namespace Model
} // namespace Glue
} // namespace Aws
