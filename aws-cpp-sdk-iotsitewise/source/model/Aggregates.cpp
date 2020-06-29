/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotsitewise/model/Aggregates.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IoTSiteWise
{
namespace Model
{

Aggregates::Aggregates() : 
    m_average(0.0),
    m_averageHasBeenSet(false),
    m_count(0.0),
    m_countHasBeenSet(false),
    m_maximum(0.0),
    m_maximumHasBeenSet(false),
    m_minimum(0.0),
    m_minimumHasBeenSet(false),
    m_sum(0.0),
    m_sumHasBeenSet(false),
    m_standardDeviation(0.0),
    m_standardDeviationHasBeenSet(false)
{
}

Aggregates::Aggregates(JsonView jsonValue) : 
    m_average(0.0),
    m_averageHasBeenSet(false),
    m_count(0.0),
    m_countHasBeenSet(false),
    m_maximum(0.0),
    m_maximumHasBeenSet(false),
    m_minimum(0.0),
    m_minimumHasBeenSet(false),
    m_sum(0.0),
    m_sumHasBeenSet(false),
    m_standardDeviation(0.0),
    m_standardDeviationHasBeenSet(false)
{
  *this = jsonValue;
}

Aggregates& Aggregates::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("average"))
  {
    m_average = jsonValue.GetDouble("average");

    m_averageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("count"))
  {
    m_count = jsonValue.GetDouble("count");

    m_countHasBeenSet = true;
  }

  if(jsonValue.ValueExists("maximum"))
  {
    m_maximum = jsonValue.GetDouble("maximum");

    m_maximumHasBeenSet = true;
  }

  if(jsonValue.ValueExists("minimum"))
  {
    m_minimum = jsonValue.GetDouble("minimum");

    m_minimumHasBeenSet = true;
  }

  if(jsonValue.ValueExists("sum"))
  {
    m_sum = jsonValue.GetDouble("sum");

    m_sumHasBeenSet = true;
  }

  if(jsonValue.ValueExists("standardDeviation"))
  {
    m_standardDeviation = jsonValue.GetDouble("standardDeviation");

    m_standardDeviationHasBeenSet = true;
  }

  return *this;
}

JsonValue Aggregates::Jsonize() const
{
  JsonValue payload;

  if(m_averageHasBeenSet)
  {
   payload.WithDouble("average", m_average);

  }

  if(m_countHasBeenSet)
  {
   payload.WithDouble("count", m_count);

  }

  if(m_maximumHasBeenSet)
  {
   payload.WithDouble("maximum", m_maximum);

  }

  if(m_minimumHasBeenSet)
  {
   payload.WithDouble("minimum", m_minimum);

  }

  if(m_sumHasBeenSet)
  {
   payload.WithDouble("sum", m_sum);

  }

  if(m_standardDeviationHasBeenSet)
  {
   payload.WithDouble("standardDeviation", m_standardDeviation);

  }

  return payload;
}

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
