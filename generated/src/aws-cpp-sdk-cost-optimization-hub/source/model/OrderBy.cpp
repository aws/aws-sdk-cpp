/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cost-optimization-hub/model/OrderBy.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CostOptimizationHub
{
namespace Model
{

OrderBy::OrderBy() : 
    m_dimensionHasBeenSet(false),
    m_order(Order::NOT_SET),
    m_orderHasBeenSet(false)
{
}

OrderBy::OrderBy(JsonView jsonValue) : 
    m_dimensionHasBeenSet(false),
    m_order(Order::NOT_SET),
    m_orderHasBeenSet(false)
{
  *this = jsonValue;
}

OrderBy& OrderBy::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("dimension"))
  {
    m_dimension = jsonValue.GetString("dimension");

    m_dimensionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("order"))
  {
    m_order = OrderMapper::GetOrderForName(jsonValue.GetString("order"));

    m_orderHasBeenSet = true;
  }

  return *this;
}

JsonValue OrderBy::Jsonize() const
{
  JsonValue payload;

  if(m_dimensionHasBeenSet)
  {
   payload.WithString("dimension", m_dimension);

  }

  if(m_orderHasBeenSet)
  {
   payload.WithString("order", OrderMapper::GetNameForOrder(m_order));
  }

  return payload;
}

} // namespace Model
} // namespace CostOptimizationHub
} // namespace Aws
