/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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

FieldStats::FieldStats() : 
    m_minHasBeenSet(false),
    m_maxHasBeenSet(false),
    m_count(0),
    m_countHasBeenSet(false),
    m_missing(0),
    m_missingHasBeenSet(false),
    m_sum(0.0),
    m_sumHasBeenSet(false),
    m_sumOfSquares(0.0),
    m_sumOfSquaresHasBeenSet(false),
    m_meanHasBeenSet(false),
    m_stddev(0.0),
    m_stddevHasBeenSet(false)
{
}

FieldStats::FieldStats(const JsonValue& jsonValue) : 
    m_minHasBeenSet(false),
    m_maxHasBeenSet(false),
    m_count(0),
    m_countHasBeenSet(false),
    m_missing(0),
    m_missingHasBeenSet(false),
    m_sum(0.0),
    m_sumHasBeenSet(false),
    m_sumOfSquares(0.0),
    m_sumOfSquaresHasBeenSet(false),
    m_meanHasBeenSet(false),
    m_stddev(0.0),
    m_stddevHasBeenSet(false)
{
  *this = jsonValue;
}

FieldStats& FieldStats::operator =(const JsonValue& jsonValue)
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