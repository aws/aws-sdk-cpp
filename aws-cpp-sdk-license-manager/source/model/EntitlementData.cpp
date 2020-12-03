/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/license-manager/model/EntitlementData.h>
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

EntitlementData::EntitlementData() : 
    m_nameHasBeenSet(false),
    m_valueHasBeenSet(false),
    m_unit(EntitlementDataUnit::NOT_SET),
    m_unitHasBeenSet(false)
{
}

EntitlementData::EntitlementData(JsonView jsonValue) : 
    m_nameHasBeenSet(false),
    m_valueHasBeenSet(false),
    m_unit(EntitlementDataUnit::NOT_SET),
    m_unitHasBeenSet(false)
{
  *this = jsonValue;
}

EntitlementData& EntitlementData::operator =(JsonView jsonValue)
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

  if(jsonValue.ValueExists("Unit"))
  {
    m_unit = EntitlementDataUnitMapper::GetEntitlementDataUnitForName(jsonValue.GetString("Unit"));

    m_unitHasBeenSet = true;
  }

  return *this;
}

JsonValue EntitlementData::Jsonize() const
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

  if(m_unitHasBeenSet)
  {
   payload.WithString("Unit", EntitlementDataUnitMapper::GetNameForEntitlementDataUnit(m_unit));
  }

  return payload;
}

} // namespace Model
} // namespace LicenseManager
} // namespace Aws
