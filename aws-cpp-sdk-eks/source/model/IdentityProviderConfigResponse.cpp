/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/eks/model/IdentityProviderConfigResponse.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace EKS
{
namespace Model
{

IdentityProviderConfigResponse::IdentityProviderConfigResponse() : 
    m_oidcHasBeenSet(false)
{
}

IdentityProviderConfigResponse::IdentityProviderConfigResponse(JsonView jsonValue) : 
    m_oidcHasBeenSet(false)
{
  *this = jsonValue;
}

IdentityProviderConfigResponse& IdentityProviderConfigResponse::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("oidc"))
  {
    m_oidc = jsonValue.GetObject("oidc");

    m_oidcHasBeenSet = true;
  }

  return *this;
}

JsonValue IdentityProviderConfigResponse::Jsonize() const
{
  JsonValue payload;

  if(m_oidcHasBeenSet)
  {
   payload.WithObject("oidc", m_oidc.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace EKS
} // namespace Aws
