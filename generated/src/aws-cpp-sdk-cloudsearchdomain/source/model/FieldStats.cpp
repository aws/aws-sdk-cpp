/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudsearchdomain/model/FieldStats.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CloudSearchDomain
{
namespace Model
{

FieldStats::FieldStats(JsonView jsonValue)
{
  *this = jsonValue;
}

FieldStats& FieldStats::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("min"))
  {
    m_min = jsonValue.GetString("min");
    m_minHasBeenSet = true;
  }
  if(jsonValue.ValueExists("max"))
  {
    m_max = jsonValue.GetString("max");
    m_maxHasBeenSet = true;
  }
  if(jsonValue.ValueExists("count"))
  {
    m_count = jsonValue.GetInt64("count");
    m_countHasBeenSet = true;
  }
  if(jsonValue.ValueExists("missing"))
  {
    m_missing = jsonValue.GetInt64("missing");
    m_missingHasBeenSet = true;
  }
  if(jsonValue.ValueExists("sum"))
  {
    m_sum = jsonValue.GetDouble("sum");
    m_sumHasBeenSet = true;
  }
  if(jsonValue.ValueExists("sumOfSquares"))
  {
    m_sumOfSquares = jsonValue.GetDouble("sumOfSquares");
    m_sumOfSquaresHasBeenSet = true;
  }
  if(jsonValue.ValueExists("mean"))
  {
    m_mean = jsonValue.GetString("mean");
    m_meanHasBeenSet = true;
  }
  if(jsonValue.ValueExists("stddev"))
  {
    m_stddev = jsonValue.GetDouble("stddev");
    m_stddevHasBeenSet = true;
  }
  return *this;
}

JsonValue FieldStats::Jsonize() const
{
  JsonValue payload;

  if(m_minHasBeenSet)
  {
   payload.WithString("min", m_min);

  }

  if(m_maxHasBeenSet)
  {
   payload.WithString("max", m_max);

  }

  if(m_countHasBeenSet)
  {
   payload.WithInt64("count", m_count);

  }

  if(m_missingHasBeenSet)
  {
   payload.WithInt64("missing", m_missing);

  }

  if(m_sumHasBeenSet)
  {
   payload.WithDouble("sum", m_sum);

  }

  if(m_sumOfSquaresHasBeenSet)
  {
   payload.WithDouble("sumOfSquares", m_sumOfSquares);

  }

  if(m_meanHasBeenSet)
  {
   payload.WithString("mean", m_mean);

  }

  if(m_stddevHasBeenSet)
  {
   payload.WithDouble("stddev", m_stddev);

  }

  return payload;
}

} // namespace Model
} // namespace CloudSearchDomain
} // namespace Aws
