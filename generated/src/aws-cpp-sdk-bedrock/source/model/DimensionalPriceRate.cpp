/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock/model/DimensionalPriceRate.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Bedrock
{
namespace Model
{

DimensionalPriceRate::DimensionalPriceRate(JsonView jsonValue)
{
  *this = jsonValue;
}

DimensionalPriceRate& DimensionalPriceRate::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("dimension"))
  {
    m_dimension = jsonValue.GetString("dimension");
    m_dimensionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("price"))
  {
    m_price = jsonValue.GetString("price");
    m_priceHasBeenSet = true;
  }
  if(jsonValue.ValueExists("description"))
  {
    m_description = jsonValue.GetString("description");
    m_descriptionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("unit"))
  {
    m_unit = jsonValue.GetString("unit");
    m_unitHasBeenSet = true;
  }
  return *this;
}

JsonValue DimensionalPriceRate::Jsonize() const
{
  JsonValue payload;

  if(m_dimensionHasBeenSet)
  {
   payload.WithString("dimension", m_dimension);

  }

  if(m_priceHasBeenSet)
  {
   payload.WithString("price", m_price);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_unitHasBeenSet)
  {
   payload.WithString("unit", m_unit);

  }

  return payload;
}

} // namespace Model
} // namespace Bedrock
} // namespace Aws
