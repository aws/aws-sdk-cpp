/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/compute-optimizer/model/OrderBy.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ComputeOptimizer
{
namespace Model
{

OrderBy::OrderBy(JsonView jsonValue)
{
  *this = jsonValue;
}

OrderBy& OrderBy::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("dimension"))
  {
    m_dimension = DimensionMapper::GetDimensionForName(jsonValue.GetString("dimension"));
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
   payload.WithString("dimension", DimensionMapper::GetNameForDimension(m_dimension));
  }

  if(m_orderHasBeenSet)
  {
   payload.WithString("order", OrderMapper::GetNameForOrder(m_order));
  }

  return payload;
}

} // namespace Model
} // namespace ComputeOptimizer
} // namespace Aws
