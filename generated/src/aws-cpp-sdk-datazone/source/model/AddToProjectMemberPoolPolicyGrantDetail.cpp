/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datazone/model/AddToProjectMemberPoolPolicyGrantDetail.h>
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

AddToProjectMemberPoolPolicyGrantDetail::AddToProjectMemberPoolPolicyGrantDetail(JsonView jsonValue)
{
  *this = jsonValue;
}

AddToProjectMemberPoolPolicyGrantDetail& AddToProjectMemberPoolPolicyGrantDetail::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("includeChildDomainUnits"))
  {
    m_includeChildDomainUnits = jsonValue.GetBool("includeChildDomainUnits");
    m_includeChildDomainUnitsHasBeenSet = true;
  }
  return *this;
}

JsonValue AddToProjectMemberPoolPolicyGrantDetail::Jsonize() const
{
  JsonValue payload;

  if(m_includeChildDomainUnitsHasBeenSet)
  {
   payload.WithBool("includeChildDomainUnits", m_includeChildDomainUnits);

  }

  return payload;
}

} // namespace Model
} // namespace DataZone
} // namespace Aws
