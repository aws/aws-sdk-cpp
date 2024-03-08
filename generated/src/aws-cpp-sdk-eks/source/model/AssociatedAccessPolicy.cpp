/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/eks/model/AssociatedAccessPolicy.h>
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

AssociatedAccessPolicy::AssociatedAccessPolicy() : 
    m_policyArnHasBeenSet(false),
    m_accessScopeHasBeenSet(false),
    m_associatedAtHasBeenSet(false),
    m_modifiedAtHasBeenSet(false)
{
}

AssociatedAccessPolicy::AssociatedAccessPolicy(JsonView jsonValue) : 
    m_policyArnHasBeenSet(false),
    m_accessScopeHasBeenSet(false),
    m_associatedAtHasBeenSet(false),
    m_modifiedAtHasBeenSet(false)
{
  *this = jsonValue;
}

AssociatedAccessPolicy& AssociatedAccessPolicy::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("policyArn"))
  {
    m_policyArn = jsonValue.GetString("policyArn");

    m_policyArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("accessScope"))
  {
    m_accessScope = jsonValue.GetObject("accessScope");

    m_accessScopeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("associatedAt"))
  {
    m_associatedAt = jsonValue.GetDouble("associatedAt");

    m_associatedAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("modifiedAt"))
  {
    m_modifiedAt = jsonValue.GetDouble("modifiedAt");

    m_modifiedAtHasBeenSet = true;
  }

  return *this;
}

JsonValue AssociatedAccessPolicy::Jsonize() const
{
  JsonValue payload;

  if(m_policyArnHasBeenSet)
  {
   payload.WithString("policyArn", m_policyArn);

  }

  if(m_accessScopeHasBeenSet)
  {
   payload.WithObject("accessScope", m_accessScope.Jsonize());

  }

  if(m_associatedAtHasBeenSet)
  {
   payload.WithDouble("associatedAt", m_associatedAt.SecondsWithMSPrecision());
  }

  if(m_modifiedAtHasBeenSet)
  {
   payload.WithDouble("modifiedAt", m_modifiedAt.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace EKS
} // namespace Aws
