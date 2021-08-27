/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/forecast/model/Statistics.h>
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

Statistics::Statistics() : 
    m_count(0),
    m_countHasBeenSet(false),
    m_countDistinct(0),
    m_countDistinctHasBeenSet(false),
    m_countNull(0),
    m_countNullHasBeenSet(false),
    m_countNan(0),
    m_countNanHasBeenSet(false),
    m_minHasBeenSet(false),
    m_maxHasBeenSet(false),
    m_avg(0.0),
    m_avgHasBeenSet(false),
    m_stddev(0.0),
    m_stddevHasBeenSet(false)
{
}

Statistics::Statistics(JsonView jsonValue) : 
    m_count(0),
    m_countHasBeenSet(false),
    m_countDistinct(0),
    m_countDistinctHasBeenSet(false),
    m_countNull(0),
    m_countNullHasBeenSet(false),
    m_countNan(0),
    m_countNanHasBeenSet(false),
    m_minHasBeenSet(false),
    m_maxHasBeenSet(false),
    m_avg(0.0),
    m_avgHasBeenSet(false),
    m_stddev(0.0),
    m_stddevHasBeenSet(false)
{
  *this = jsonValue;
}

Statistics& Statistics::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Count"))
  {
    m_count = jsonValue.GetInteger("Count");

    m_countHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CountDistinct"))
  {
    m_countDistinct = jsonValue.GetInteger("CountDistinct");

    m_countDistinctHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CountNull"))
  {
    m_countNull = jsonValue.GetInteger("CountNull");

    m_countNullHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CountNan"))
  {
    m_countNan = jsonValue.GetInteger("CountNan");

    m_countNanHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Min"))
  {
    m_min = jsonValue.GetString("Min");

    m_minHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Max"))
  {
    m_max = jsonValue.GetString("Max");

    m_maxHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Avg"))
  {
    m_avg = jsonValue.GetDouble("Avg");

    m_avgHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Stddev"))
  {
    m_stddev = jsonValue.GetDouble("Stddev");

    m_stddevHasBeenSet = true;
  }

  return *this;
}

JsonValue Statistics::Jsonize() const
{
  JsonValue payload;

  if(m_countHasBeenSet)
  {
   payload.WithInteger("Count", m_count);

  }

  if(m_countDistinctHasBeenSet)
  {
   payload.WithInteger("CountDistinct", m_countDistinct);

  }

  if(m_countNullHasBeenSet)
  {
   payload.WithInteger("CountNull", m_countNull);

  }

  if(m_countNanHasBeenSet)
  {
   payload.WithInteger("CountNan", m_countNan);

  }

  if(m_minHasBeenSet)
  {
   payload.WithString("Min", m_min);

  }

  if(m_maxHasBeenSet)
  {
   payload.WithString("Max", m_max);

  }

  if(m_avgHasBeenSet)
  {
   payload.WithDouble("Avg", m_avg);

  }

  if(m_stddevHasBeenSet)
  {
   payload.WithDouble("Stddev", m_stddev);

  }

  return payload;
}

} // namespace Model
} // namespace ForecastService
} // namespace Aws
