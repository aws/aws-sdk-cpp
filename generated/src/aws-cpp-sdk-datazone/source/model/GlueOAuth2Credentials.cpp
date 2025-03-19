/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datazone/model/GlueOAuth2Credentials.h>
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

GlueOAuth2Credentials::GlueOAuth2Credentials(JsonView jsonValue)
{
  *this = jsonValue;
}

GlueOAuth2Credentials& GlueOAuth2Credentials::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("accessToken"))
  {
    m_accessToken = jsonValue.GetString("accessToken");
    m_accessTokenHasBeenSet = true;
  }
  if(jsonValue.ValueExists("jwtToken"))
  {
    m_jwtToken = jsonValue.GetString("jwtToken");
    m_jwtTokenHasBeenSet = true;
  }
  if(jsonValue.ValueExists("refreshToken"))
  {
    m_refreshToken = jsonValue.GetString("refreshToken");
    m_refreshTokenHasBeenSet = true;
  }
  if(jsonValue.ValueExists("userManagedClientApplicationClientSecret"))
  {
    m_userManagedClientApplicationClientSecret = jsonValue.GetString("userManagedClientApplicationClientSecret");
    m_userManagedClientApplicationClientSecretHasBeenSet = true;
  }
  return *this;
}

JsonValue GlueOAuth2Credentials::Jsonize() const
{
  JsonValue payload;

  if(m_accessTokenHasBeenSet)
  {
   payload.WithString("accessToken", m_accessToken);

  }

  if(m_jwtTokenHasBeenSet)
  {
   payload.WithString("jwtToken", m_jwtToken);

  }

  if(m_refreshTokenHasBeenSet)
  {
   payload.WithString("refreshToken", m_refreshToken);

  }

  if(m_userManagedClientApplicationClientSecretHasBeenSet)
  {
   payload.WithString("userManagedClientApplicationClientSecret", m_userManagedClientApplicationClientSecret);

  }

  return payload;
}

} // namespace Model
} // namespace DataZone
} // namespace Aws
