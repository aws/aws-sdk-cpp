/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ecr-public/model/AuthorizationData.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ECRPublic
{
namespace Model
{

AuthorizationData::AuthorizationData() : 
    m_authorizationTokenHasBeenSet(false),
    m_expiresAtHasBeenSet(false)
{
}

AuthorizationData::AuthorizationData(JsonView jsonValue) : 
    m_authorizationTokenHasBeenSet(false),
    m_expiresAtHasBeenSet(false)
{
  *this = jsonValue;
}

AuthorizationData& AuthorizationData::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("authorizationToken"))
  {
    m_authorizationToken = jsonValue.GetString("authorizationToken");

    m_authorizationTokenHasBeenSet = true;
  }

  if(jsonValue.ValueExists("expiresAt"))
  {
    m_expiresAt = jsonValue.GetDouble("expiresAt");

    m_expiresAtHasBeenSet = true;
  }

  return *this;
}

JsonValue AuthorizationData::Jsonize() const
{
  JsonValue payload;

  if(m_authorizationTokenHasBeenSet)
  {
   payload.WithString("authorizationToken", m_authorizationToken);

  }

  if(m_expiresAtHasBeenSet)
  {
   payload.WithDouble("expiresAt", m_expiresAt.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace ECRPublic
} // namespace Aws
