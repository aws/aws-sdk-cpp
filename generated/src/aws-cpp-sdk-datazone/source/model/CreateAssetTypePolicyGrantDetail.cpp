/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datazone/model/CreateAssetTypePolicyGrantDetail.h>
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

CreateAssetTypePolicyGrantDetail::CreateAssetTypePolicyGrantDetail(JsonView jsonValue)
{
  *this = jsonValue;
}

CreateAssetTypePolicyGrantDetail& CreateAssetTypePolicyGrantDetail::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("includeChildDomainUnits"))
  {
    m_includeChildDomainUnits = jsonValue.GetBool("includeChildDomainUnits");
    m_includeChildDomainUnitsHasBeenSet = true;
  }
  return *this;
}

JsonValue CreateAssetTypePolicyGrantDetail::Jsonize() const
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
