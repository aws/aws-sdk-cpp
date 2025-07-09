/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/freetier/model/FreeTierUsage.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace FreeTier
{
namespace Model
{

FreeTierUsage::FreeTierUsage(JsonView jsonValue)
{
  *this = jsonValue;
}

FreeTierUsage& FreeTierUsage::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("service"))
  {
    m_service = jsonValue.GetString("service");
    m_serviceHasBeenSet = true;
  }
  if(jsonValue.ValueExists("operation"))
  {
    m_operation = jsonValue.GetString("operation");
    m_operationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("usageType"))
  {
    m_usageType = jsonValue.GetString("usageType");
    m_usageTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("region"))
  {
    m_region = jsonValue.GetString("region");
    m_regionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("actualUsageAmount"))
  {
    m_actualUsageAmount = jsonValue.GetDouble("actualUsageAmount");
    m_actualUsageAmountHasBeenSet = true;
  }
  if(jsonValue.ValueExists("forecastedUsageAmount"))
  {
    m_forecastedUsageAmount = jsonValue.GetDouble("forecastedUsageAmount");
    m_forecastedUsageAmountHasBeenSet = true;
  }
  if(jsonValue.ValueExists("limit"))
  {
    m_limit = jsonValue.GetDouble("limit");
    m_limitHasBeenSet = true;
  }
  if(jsonValue.ValueExists("unit"))
  {
    m_unit = jsonValue.GetString("unit");
    m_unitHasBeenSet = true;
  }
  if(jsonValue.ValueExists("description"))
  {
    m_description = jsonValue.GetString("description");
    m_descriptionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("freeTierType"))
  {
    m_freeTierType = jsonValue.GetString("freeTierType");
    m_freeTierTypeHasBeenSet = true;
  }
  return *this;
}

JsonValue FreeTierUsage::Jsonize() const
{
  JsonValue payload;

  if(m_serviceHasBeenSet)
  {
   payload.WithString("service", m_service);

  }

  if(m_operationHasBeenSet)
  {
   payload.WithString("operation", m_operation);

  }

  if(m_usageTypeHasBeenSet)
  {
   payload.WithString("usageType", m_usageType);

  }

  if(m_regionHasBeenSet)
  {
   payload.WithString("region", m_region);

  }

  if(m_actualUsageAmountHasBeenSet)
  {
   payload.WithDouble("actualUsageAmount", m_actualUsageAmount);

  }

  if(m_forecastedUsageAmountHasBeenSet)
  {
   payload.WithDouble("forecastedUsageAmount", m_forecastedUsageAmount);

  }

  if(m_limitHasBeenSet)
  {
   payload.WithDouble("limit", m_limit);

  }

  if(m_unitHasBeenSet)
  {
   payload.WithString("unit", m_unit);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_freeTierTypeHasBeenSet)
  {
   payload.WithString("freeTierType", m_freeTierType);

  }

  return payload;
}

} // namespace Model
} // namespace FreeTier
} // namespace Aws
