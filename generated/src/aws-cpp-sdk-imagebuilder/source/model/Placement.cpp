/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/imagebuilder/model/Placement.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace imagebuilder
{
namespace Model
{

Placement::Placement(JsonView jsonValue)
{
  *this = jsonValue;
}

Placement& Placement::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("availabilityZone"))
  {
    m_availabilityZone = jsonValue.GetString("availabilityZone");
    m_availabilityZoneHasBeenSet = true;
  }
  if(jsonValue.ValueExists("tenancy"))
  {
    m_tenancy = TenancyTypeMapper::GetTenancyTypeForName(jsonValue.GetString("tenancy"));
    m_tenancyHasBeenSet = true;
  }
  if(jsonValue.ValueExists("hostId"))
  {
    m_hostId = jsonValue.GetString("hostId");
    m_hostIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("hostResourceGroupArn"))
  {
    m_hostResourceGroupArn = jsonValue.GetString("hostResourceGroupArn");
    m_hostResourceGroupArnHasBeenSet = true;
  }
  return *this;
}

JsonValue Placement::Jsonize() const
{
  JsonValue payload;

  if(m_availabilityZoneHasBeenSet)
  {
   payload.WithString("availabilityZone", m_availabilityZone);

  }

  if(m_tenancyHasBeenSet)
  {
   payload.WithString("tenancy", TenancyTypeMapper::GetNameForTenancyType(m_tenancy));
  }

  if(m_hostIdHasBeenSet)
  {
   payload.WithString("hostId", m_hostId);

  }

  if(m_hostResourceGroupArnHasBeenSet)
  {
   payload.WithString("hostResourceGroupArn", m_hostResourceGroupArn);

  }

  return payload;
}

} // namespace Model
} // namespace imagebuilder
} // namespace Aws
