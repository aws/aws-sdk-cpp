/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sso/model/RoleCredentials.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SSO
{
namespace Model
{

RoleCredentials::RoleCredentials() : 
    m_accessKeyIdHasBeenSet(false),
    m_secretAccessKeyHasBeenSet(false),
    m_sessionTokenHasBeenSet(false),
    m_expiration(0),
    m_expirationHasBeenSet(false)
{
}

RoleCredentials::RoleCredentials(JsonView jsonValue) : 
    m_accessKeyIdHasBeenSet(false),
    m_secretAccessKeyHasBeenSet(false),
    m_sessionTokenHasBeenSet(false),
    m_expiration(0),
    m_expirationHasBeenSet(false)
{
  *this = jsonValue;
}

RoleCredentials& RoleCredentials::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("accessKeyId"))
  {
    m_accessKeyId = jsonValue.GetString("accessKeyId");

    m_accessKeyIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("secretAccessKey"))
  {
    m_secretAccessKey = jsonValue.GetString("secretAccessKey");

    m_secretAccessKeyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("sessionToken"))
  {
    m_sessionToken = jsonValue.GetString("sessionToken");

    m_sessionTokenHasBeenSet = true;
  }

  if(jsonValue.ValueExists("expiration"))
  {
    m_expiration = jsonValue.GetInt64("expiration");

    m_expirationHasBeenSet = true;
  }

  return *this;
}

JsonValue RoleCredentials::Jsonize() const
{
  JsonValue payload;

  if(m_accessKeyIdHasBeenSet)
  {
   payload.WithString("accessKeyId", m_accessKeyId);

  }

  if(m_secretAccessKeyHasBeenSet)
  {
   payload.WithString("secretAccessKey", m_secretAccessKey);

  }

  if(m_sessionTokenHasBeenSet)
  {
   payload.WithString("sessionToken", m_sessionToken);

  }

  if(m_expirationHasBeenSet)
  {
   payload.WithInt64("expiration", m_expiration);

  }

  return payload;
}

} // namespace Model
} // namespace SSO
} // namespace Aws
