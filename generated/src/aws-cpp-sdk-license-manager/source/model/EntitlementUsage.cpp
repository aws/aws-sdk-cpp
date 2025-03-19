/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/license-manager/model/EntitlementUsage.h>
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

EntitlementUsage::EntitlementUsage(JsonView jsonValue)
{
  *this = jsonValue;
}

EntitlementUsage& EntitlementUsage::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");
    m_nameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ConsumedValue"))
  {
    m_consumedValue = jsonValue.GetString("ConsumedValue");
    m_consumedValueHasBeenSet = true;
  }
  if(jsonValue.ValueExists("MaxCount"))
  {
    m_maxCount = jsonValue.GetString("MaxCount");
    m_maxCountHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Unit"))
  {
    m_unit = EntitlementDataUnitMapper::GetEntitlementDataUnitForName(jsonValue.GetString("Unit"));
    m_unitHasBeenSet = true;
  }
  return *this;
}

JsonValue EntitlementUsage::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_consumedValueHasBeenSet)
  {
   payload.WithString("ConsumedValue", m_consumedValue);

  }

  if(m_maxCountHasBeenSet)
  {
   payload.WithString("MaxCount", m_maxCount);

  }

  if(m_unitHasBeenSet)
  {
   payload.WithString("Unit", EntitlementDataUnitMapper::GetNameForEntitlementDataUnit(m_unit));
  }

  return payload;
}

} // namespace Model
} // namespace LicenseManager
} // namespace Aws
