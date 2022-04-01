/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/guardduty/model/Total.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace GuardDuty
{
namespace Model
{

Total::Total() : 
    m_amountHasBeenSet(false),
    m_unitHasBeenSet(false)
{
}

Total::Total(JsonView jsonValue) : 
    m_amountHasBeenSet(false),
    m_unitHasBeenSet(false)
{
  *this = jsonValue;
}

Total& Total::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("amount"))
  {
    m_amount = jsonValue.GetString("amount");

    m_amountHasBeenSet = true;
  }

  if(jsonValue.ValueExists("unit"))
  {
    m_unit = jsonValue.GetString("unit");

    m_unitHasBeenSet = true;
  }

  return *this;
}

JsonValue Total::Jsonize() const
{
  JsonValue payload;

  if(m_amountHasBeenSet)
  {
   payload.WithString("amount", m_amount);

  }

  if(m_unitHasBeenSet)
  {
   payload.WithString("unit", m_unit);

  }

  return payload;
}

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
