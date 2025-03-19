/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appsync/model/AuthMode.h>
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

AuthMode::AuthMode(JsonView jsonValue)
{
  *this = jsonValue;
}

AuthMode& AuthMode::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("authType"))
  {
    m_authType = AuthenticationTypeMapper::GetAuthenticationTypeForName(jsonValue.GetString("authType"));
    m_authTypeHasBeenSet = true;
  }
  return *this;
}

JsonValue AuthMode::Jsonize() const
{
  JsonValue payload;

  if(m_authTypeHasBeenSet)
  {
   payload.WithString("authType", AuthenticationTypeMapper::GetNameForAuthenticationType(m_authType));
  }

  return payload;
}

} // namespace Model
} // namespace AppSync
} // namespace Aws
