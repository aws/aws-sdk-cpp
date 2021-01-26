/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/forecast/model/ErrorMetric.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ForecastService
{
namespace Model
{

ErrorMetric::ErrorMetric() : 
    m_forecastTypeHasBeenSet(false),
    m_wAPE(0.0),
    m_wAPEHasBeenSet(false),
    m_rMSE(0.0),
    m_rMSEHasBeenSet(false)
{
}

ErrorMetric::ErrorMetric(JsonView jsonValue) : 
    m_forecastTypeHasBeenSet(false),
    m_wAPE(0.0),
    m_wAPEHasBeenSet(false),
    m_rMSE(0.0),
    m_rMSEHasBeenSet(false)
{
  *this = jsonValue;
}

ErrorMetric& ErrorMetric::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ForecastType"))
  {
    m_forecastType = jsonValue.GetString("ForecastType");

    m_forecastTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("WAPE"))
  {
    m_wAPE = jsonValue.GetDouble("WAPE");

    m_wAPEHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RMSE"))
  {
    m_rMSE = jsonValue.GetDouble("RMSE");

    m_rMSEHasBeenSet = true;
  }

  return *this;
}

JsonValue ErrorMetric::Jsonize() const
{
  JsonValue payload;

  if(m_forecastTypeHasBeenSet)
  {
   payload.WithString("ForecastType", m_forecastType);

  }

  if(m_wAPEHasBeenSet)
  {
   payload.WithDouble("WAPE", m_wAPE);

  }

  if(m_rMSEHasBeenSet)
  {
   payload.WithDouble("RMSE", m_rMSE);

  }

  return payload;
}

} // namespace Model
} // namespace ForecastService
} // namespace Aws
