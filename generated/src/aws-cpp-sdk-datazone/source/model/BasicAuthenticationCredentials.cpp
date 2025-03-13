/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datazone/model/BasicAuthenticationCredentials.h>
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

BasicAuthenticationCredentials::BasicAuthenticationCredentials(JsonView jsonValue)
{
  *this = jsonValue;
}

BasicAuthenticationCredentials& BasicAuthenticationCredentials::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("password"))
  {
    m_password = jsonValue.GetString("password");
    m_passwordHasBeenSet = true;
  }
  if(jsonValue.ValueExists("userName"))
  {
    m_userName = jsonValue.GetString("userName");
    m_userNameHasBeenSet = true;
  }
  return *this;
}

JsonValue BasicAuthenticationCredentials::Jsonize() const
{
  JsonValue payload;

  if(m_passwordHasBeenSet)
  {
   payload.WithString("password", m_password);

  }

  if(m_userNameHasBeenSet)
  {
   payload.WithString("userName", m_userName);

  }

  return payload;
}

} // namespace Model
} // namespace DataZone
} // namespace Aws
