/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/eks/model/OIDC.h>
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

OIDC::OIDC() : 
    m_issuerHasBeenSet(false)
{
}

OIDC::OIDC(JsonView jsonValue) : 
    m_issuerHasBeenSet(false)
{
  *this = jsonValue;
}

OIDC& OIDC::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("issuer"))
  {
    m_issuer = jsonValue.GetString("issuer");

    m_issuerHasBeenSet = true;
  }

  return *this;
}

JsonValue OIDC::Jsonize() const
{
  JsonValue payload;

  if(m_issuerHasBeenSet)
  {
   payload.WithString("issuer", m_issuer);

  }

  return payload;
}

} // namespace Model
} // namespace EKS
} // namespace Aws
