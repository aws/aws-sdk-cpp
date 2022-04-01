/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ecr/model/AuthorizationData.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ECR
{
namespace Model
{

AuthorizationData::AuthorizationData() : 
    m_authorizationTokenHasBeenSet(false),
    m_expiresAtHasBeenSet(false),
    m_proxyEndpointHasBeenSet(false)
{
}

AuthorizationData::AuthorizationData(JsonView jsonValue) : 
    m_authorizationTokenHasBeenSet(false),
    m_expiresAtHasBeenSet(false),
    m_proxyEndpointHasBeenSet(false)
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

  if(jsonValue.ValueExists("proxyEndpoint"))
  {
    m_proxyEndpoint = jsonValue.GetString("proxyEndpoint");

    m_proxyEndpointHasBeenSet = true;
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

  if(m_proxyEndpointHasBeenSet)
  {
   payload.WithString("proxyEndpoint", m_proxyEndpoint);

  }

  return payload;
}

} // namespace Model
} // namespace ECR
} // namespace Aws
