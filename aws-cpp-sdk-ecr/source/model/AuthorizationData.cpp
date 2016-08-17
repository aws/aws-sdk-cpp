/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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

AuthorizationData::AuthorizationData(const JsonValue& jsonValue) : 
    m_authorizationTokenHasBeenSet(false),
    m_expiresAtHasBeenSet(false),
    m_proxyEndpointHasBeenSet(false)
{
  *this = jsonValue;
}

AuthorizationData& AuthorizationData::operator =(const JsonValue& jsonValue)
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