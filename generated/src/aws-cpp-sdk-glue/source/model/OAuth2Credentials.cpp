/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/OAuth2Credentials.h>
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

OAuth2Credentials::OAuth2Credentials(JsonView jsonValue)
{
  *this = jsonValue;
}

OAuth2Credentials& OAuth2Credentials::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("UserManagedClientApplicationClientSecret"))
  {
    m_userManagedClientApplicationClientSecret = jsonValue.GetString("UserManagedClientApplicationClientSecret");
    m_userManagedClientApplicationClientSecretHasBeenSet = true;
  }
  if(jsonValue.ValueExists("AccessToken"))
  {
    m_accessToken = jsonValue.GetString("AccessToken");
    m_accessTokenHasBeenSet = true;
  }
  if(jsonValue.ValueExists("RefreshToken"))
  {
    m_refreshToken = jsonValue.GetString("RefreshToken");
    m_refreshTokenHasBeenSet = true;
  }
  if(jsonValue.ValueExists("JwtToken"))
  {
    m_jwtToken = jsonValue.GetString("JwtToken");
    m_jwtTokenHasBeenSet = true;
  }
  return *this;
}

JsonValue OAuth2Credentials::Jsonize() const
{
  JsonValue payload;

  if(m_userManagedClientApplicationClientSecretHasBeenSet)
  {
   payload.WithString("UserManagedClientApplicationClientSecret", m_userManagedClientApplicationClientSecret);

  }

  if(m_accessTokenHasBeenSet)
  {
   payload.WithString("AccessToken", m_accessToken);

  }

  if(m_refreshTokenHasBeenSet)
  {
   payload.WithString("RefreshToken", m_refreshToken);

  }

  if(m_jwtTokenHasBeenSet)
  {
   payload.WithString("JwtToken", m_jwtToken);

  }

  return payload;
}

} // namespace Model
} // namespace Glue
} // namespace Aws
