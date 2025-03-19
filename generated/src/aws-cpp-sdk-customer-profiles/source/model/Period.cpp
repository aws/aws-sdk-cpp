/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/customer-profiles/model/Period.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CustomerProfiles
{
namespace Model
{

Period::Period(JsonView jsonValue)
{
  *this = jsonValue;
}

Period& Period::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Unit"))
  {
    m_unit = PeriodUnitMapper::GetPeriodUnitForName(jsonValue.GetString("Unit"));
    m_unitHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Value"))
  {
    m_value = jsonValue.GetInteger("Value");
    m_valueHasBeenSet = true;
  }
  if(jsonValue.ValueExists("MaxInvocationsPerProfile"))
  {
    m_maxInvocationsPerProfile = jsonValue.GetInteger("MaxInvocationsPerProfile");
    m_maxInvocationsPerProfileHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Unlimited"))
  {
    m_unlimited = jsonValue.GetBool("Unlimited");
    m_unlimitedHasBeenSet = true;
  }
  return *this;
}

JsonValue Period::Jsonize() const
{
  JsonValue payload;

  if(m_unitHasBeenSet)
  {
   payload.WithString("Unit", PeriodUnitMapper::GetNameForPeriodUnit(m_unit));
  }

  if(m_valueHasBeenSet)
  {
   payload.WithInteger("Value", m_value);

  }

  if(m_maxInvocationsPerProfileHasBeenSet)
  {
   payload.WithInteger("MaxInvocationsPerProfile", m_maxInvocationsPerProfile);

  }

  if(m_unlimitedHasBeenSet)
  {
   payload.WithBool("Unlimited", m_unlimited);

  }

  return payload;
}

} // namespace Model
} // namespace CustomerProfiles
} // namespace Aws
