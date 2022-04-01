/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/license-manager/model/Entitlement.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace LicenseManager
{
namespace Model
{

Entitlement::Entitlement() : 
    m_nameHasBeenSet(false),
    m_valueHasBeenSet(false),
    m_maxCount(0),
    m_maxCountHasBeenSet(false),
    m_overage(false),
    m_overageHasBeenSet(false),
    m_unit(EntitlementUnit::NOT_SET),
    m_unitHasBeenSet(false),
    m_allowCheckIn(false),
    m_allowCheckInHasBeenSet(false)
{
}

Entitlement::Entitlement(JsonView jsonValue) : 
    m_nameHasBeenSet(false),
    m_valueHasBeenSet(false),
    m_maxCount(0),
    m_maxCountHasBeenSet(false),
    m_overage(false),
    m_overageHasBeenSet(false),
    m_unit(EntitlementUnit::NOT_SET),
    m_unitHasBeenSet(false),
    m_allowCheckIn(false),
    m_allowCheckInHasBeenSet(false)
{
  *this = jsonValue;
}

Entitlement& Entitlement::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Value"))
  {
    m_value = jsonValue.GetString("Value");

    m_valueHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MaxCount"))
  {
    m_maxCount = jsonValue.GetInt64("MaxCount");

    m_maxCountHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Overage"))
  {
    m_overage = jsonValue.GetBool("Overage");

    m_overageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Unit"))
  {
    m_unit = EntitlementUnitMapper::GetEntitlementUnitForName(jsonValue.GetString("Unit"));

    m_unitHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AllowCheckIn"))
  {
    m_allowCheckIn = jsonValue.GetBool("AllowCheckIn");

    m_allowCheckInHasBeenSet = true;
  }

  return *this;
}

JsonValue Entitlement::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_valueHasBeenSet)
  {
   payload.WithString("Value", m_value);

  }

  if(m_maxCountHasBeenSet)
  {
   payload.WithInt64("MaxCount", m_maxCount);

  }

  if(m_overageHasBeenSet)
  {
   payload.WithBool("Overage", m_overage);

  }

  if(m_unitHasBeenSet)
  {
   payload.WithString("Unit", EntitlementUnitMapper::GetNameForEntitlementUnit(m_unit));
  }

  if(m_allowCheckInHasBeenSet)
  {
   payload.WithBool("AllowCheckIn", m_allowCheckIn);

  }

  return payload;
}

} // namespace Model
} // namespace LicenseManager
} // namespace Aws
