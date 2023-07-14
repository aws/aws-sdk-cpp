/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/eks/model/Identity.h>
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

Identity::Identity() : 
    m_oidcHasBeenSet(false)
{
}

Identity::Identity(JsonView jsonValue) : 
    m_oidcHasBeenSet(false)
{
  *this = jsonValue;
}

Identity& Identity::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("oidc"))
  {
    m_oidc = jsonValue.GetObject("oidc");

    m_oidcHasBeenSet = true;
  }

  return *this;
}

JsonValue Identity::Jsonize() const
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
