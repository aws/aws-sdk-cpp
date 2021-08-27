/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/StringColumnStatisticsData.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Glue
{
namespace Model
{

StringColumnStatisticsData::StringColumnStatisticsData() : 
    m_maximumLength(0),
    m_maximumLengthHasBeenSet(false),
    m_averageLength(0.0),
    m_averageLengthHasBeenSet(false),
    m_numberOfNulls(0),
    m_numberOfNullsHasBeenSet(false),
    m_numberOfDistinctValues(0),
    m_numberOfDistinctValuesHasBeenSet(false)
{
}

StringColumnStatisticsData::StringColumnStatisticsData(JsonView jsonValue) : 
    m_maximumLength(0),
    m_maximumLengthHasBeenSet(false),
    m_averageLength(0.0),
    m_averageLengthHasBeenSet(false),
    m_numberOfNulls(0),
    m_numberOfNullsHasBeenSet(false),
    m_numberOfDistinctValues(0),
    m_numberOfDistinctValuesHasBeenSet(false)
{
  *this = jsonValue;
}

StringColumnStatisticsData& StringColumnStatisticsData::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("MaximumLength"))
  {
    m_maximumLength = jsonValue.GetInt64("MaximumLength");

    m_maximumLengthHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AverageLength"))
  {
    m_averageLength = jsonValue.GetDouble("AverageLength");

    m_averageLengthHasBeenSet = true;
  }

  if(jsonValue.ValueExists("NumberOfNulls"))
  {
    m_numberOfNulls = jsonValue.GetInt64("NumberOfNulls");

    m_numberOfNullsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("NumberOfDistinctValues"))
  {
    m_numberOfDistinctValues = jsonValue.GetInt64("NumberOfDistinctValues");

    m_numberOfDistinctValuesHasBeenSet = true;
  }

  return *this;
}

JsonValue StringColumnStatisticsData::Jsonize() const
{
  JsonValue payload;

  if(m_maximumLengthHasBeenSet)
  {
   payload.WithInt64("MaximumLength", m_maximumLength);

  }

  if(m_averageLengthHasBeenSet)
  {
   payload.WithDouble("AverageLength", m_averageLength);

  }

  if(m_numberOfNullsHasBeenSet)
  {
   payload.WithInt64("NumberOfNulls", m_numberOfNulls);

  }

  if(m_numberOfDistinctValuesHasBeenSet)
  {
   payload.WithInt64("NumberOfDistinctValues", m_numberOfDistinctValues);

  }

  return payload;
}

} // namespace Model
} // namespace Glue
} // namespace Aws
