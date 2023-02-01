/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ce/model/MetricValue.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CostExplorer
{
namespace Model
{

MetricValue::MetricValue() : 
    m_amountHasBeenSet(false),
    m_unitHasBeenSet(false)
{
}

MetricValue::MetricValue(JsonView jsonValue) : 
    m_amountHasBeenSet(false),
    m_unitHasBeenSet(false)
{
  *this = jsonValue;
}

MetricValue& MetricValue::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Amount"))
  {
    m_amount = jsonValue.GetString("Amount");

    m_amountHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Unit"))
  {
    m_unit = jsonValue.GetString("Unit");

    m_unitHasBeenSet = true;
  }

  return *this;
}

JsonValue MetricValue::Jsonize() const
{
  JsonValue payload;

  if(m_amountHasBeenSet)
  {
   payload.WithString("Amount", m_amount);

  }

  if(m_unitHasBeenSet)
  {
   payload.WithString("Unit", m_unit);

  }

  return payload;
}

} // namespace Model
} // namespace CostExplorer
} // namespace Aws
