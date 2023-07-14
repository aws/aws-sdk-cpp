/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/LongColumnStatisticsData.h>
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

LongColumnStatisticsData::LongColumnStatisticsData() : 
    m_minimumValue(0),
    m_minimumValueHasBeenSet(false),
    m_maximumValue(0),
    m_maximumValueHasBeenSet(false),
    m_numberOfNulls(0),
    m_numberOfNullsHasBeenSet(false),
    m_numberOfDistinctValues(0),
    m_numberOfDistinctValuesHasBeenSet(false)
{
}

LongColumnStatisticsData::LongColumnStatisticsData(JsonView jsonValue) : 
    m_minimumValue(0),
    m_minimumValueHasBeenSet(false),
    m_maximumValue(0),
    m_maximumValueHasBeenSet(false),
    m_numberOfNulls(0),
    m_numberOfNullsHasBeenSet(false),
    m_numberOfDistinctValues(0),
    m_numberOfDistinctValuesHasBeenSet(false)
{
  *this = jsonValue;
}

LongColumnStatisticsData& LongColumnStatisticsData::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("MinimumValue"))
  {
    m_minimumValue = jsonValue.GetInt64("MinimumValue");

    m_minimumValueHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MaximumValue"))
  {
    m_maximumValue = jsonValue.GetInt64("MaximumValue");

    m_maximumValueHasBeenSet = true;
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

JsonValue LongColumnStatisticsData::Jsonize() const
{
  JsonValue payload;

  if(m_minimumValueHasBeenSet)
  {
   payload.WithInt64("MinimumValue", m_minimumValue);

  }

  if(m_maximumValueHasBeenSet)
  {
   payload.WithInt64("MaximumValue", m_maximumValue);

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
