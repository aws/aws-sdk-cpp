/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot/model/Statistics.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IoT
{
namespace Model
{

Statistics::Statistics() : 
    m_count(0),
    m_countHasBeenSet(false),
    m_average(0.0),
    m_averageHasBeenSet(false),
    m_sum(0.0),
    m_sumHasBeenSet(false),
    m_minimum(0.0),
    m_minimumHasBeenSet(false),
    m_maximum(0.0),
    m_maximumHasBeenSet(false),
    m_sumOfSquares(0.0),
    m_sumOfSquaresHasBeenSet(false),
    m_variance(0.0),
    m_varianceHasBeenSet(false),
    m_stdDeviation(0.0),
    m_stdDeviationHasBeenSet(false)
{
}

Statistics::Statistics(JsonView jsonValue) : 
    m_count(0),
    m_countHasBeenSet(false),
    m_average(0.0),
    m_averageHasBeenSet(false),
    m_sum(0.0),
    m_sumHasBeenSet(false),
    m_minimum(0.0),
    m_minimumHasBeenSet(false),
    m_maximum(0.0),
    m_maximumHasBeenSet(false),
    m_sumOfSquares(0.0),
    m_sumOfSquaresHasBeenSet(false),
    m_variance(0.0),
    m_varianceHasBeenSet(false),
    m_stdDeviation(0.0),
    m_stdDeviationHasBeenSet(false)
{
  *this = jsonValue;
}

Statistics& Statistics::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("count"))
  {
    m_count = jsonValue.GetInteger("count");

    m_countHasBeenSet = true;
  }

  if(jsonValue.ValueExists("average"))
  {
    m_average = jsonValue.GetDouble("average");

    m_averageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("sum"))
  {
    m_sum = jsonValue.GetDouble("sum");

    m_sumHasBeenSet = true;
  }

  if(jsonValue.ValueExists("minimum"))
  {
    m_minimum = jsonValue.GetDouble("minimum");

    m_minimumHasBeenSet = true;
  }

  if(jsonValue.ValueExists("maximum"))
  {
    m_maximum = jsonValue.GetDouble("maximum");

    m_maximumHasBeenSet = true;
  }

  if(jsonValue.ValueExists("sumOfSquares"))
  {
    m_sumOfSquares = jsonValue.GetDouble("sumOfSquares");

    m_sumOfSquaresHasBeenSet = true;
  }

  if(jsonValue.ValueExists("variance"))
  {
    m_variance = jsonValue.GetDouble("variance");

    m_varianceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("stdDeviation"))
  {
    m_stdDeviation = jsonValue.GetDouble("stdDeviation");

    m_stdDeviationHasBeenSet = true;
  }

  return *this;
}

JsonValue Statistics::Jsonize() const
{
  JsonValue payload;

  if(m_countHasBeenSet)
  {
   payload.WithInteger("count", m_count);

  }

  if(m_averageHasBeenSet)
  {
   payload.WithDouble("average", m_average);

  }

  if(m_sumHasBeenSet)
  {
   payload.WithDouble("sum", m_sum);

  }

  if(m_minimumHasBeenSet)
  {
   payload.WithDouble("minimum", m_minimum);

  }

  if(m_maximumHasBeenSet)
  {
   payload.WithDouble("maximum", m_maximum);

  }

  if(m_sumOfSquaresHasBeenSet)
  {
   payload.WithDouble("sumOfSquares", m_sumOfSquares);

  }

  if(m_varianceHasBeenSet)
  {
   payload.WithDouble("variance", m_variance);

  }

  if(m_stdDeviationHasBeenSet)
  {
   payload.WithDouble("stdDeviation", m_stdDeviation);

  }

  return payload;
}

} // namespace Model
} // namespace IoT
} // namespace Aws
