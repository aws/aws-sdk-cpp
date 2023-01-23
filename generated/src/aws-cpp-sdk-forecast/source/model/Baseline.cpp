/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/forecast/model/Baseline.h>
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

Baseline::Baseline() : 
    m_predictorBaselineHasBeenSet(false)
{
}

Baseline::Baseline(JsonView jsonValue) : 
    m_predictorBaselineHasBeenSet(false)
{
  *this = jsonValue;
}

Baseline& Baseline::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("PredictorBaseline"))
  {
    m_predictorBaseline = jsonValue.GetObject("PredictorBaseline");

    m_predictorBaselineHasBeenSet = true;
  }

  return *this;
}

JsonValue Baseline::Jsonize() const
{
  JsonValue payload;

  if(m_predictorBaselineHasBeenSet)
  {
   payload.WithObject("PredictorBaseline", m_predictorBaseline.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace ForecastService
} // namespace Aws
