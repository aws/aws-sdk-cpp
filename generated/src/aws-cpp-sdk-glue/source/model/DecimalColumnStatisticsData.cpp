/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/DecimalColumnStatisticsData.h>
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

DecimalColumnStatisticsData::DecimalColumnStatisticsData() : 
    m_minimumValueHasBeenSet(false),
    m_maximumValueHasBeenSet(false),
    m_numberOfNulls(0),
    m_numberOfNullsHasBeenSet(false),
    m_numberOfDistinctValues(0),
    m_numberOfDistinctValuesHasBeenSet(false)
{
}

DecimalColumnStatisticsData::DecimalColumnStatisticsData(JsonView jsonValue) : 
    m_minimumValueHasBeenSet(false),
    m_maximumValueHasBeenSet(false),
    m_numberOfNulls(0),
    m_numberOfNullsHasBeenSet(false),
    m_numberOfDistinctValues(0),
    m_numberOfDistinctValuesHasBeenSet(false)
{
  *this = jsonValue;
}

DecimalColumnStatisticsData& DecimalColumnStatisticsData::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("MinimumValue"))
  {
    m_minimumValue = jsonValue.GetObject("MinimumValue");

    m_minimumValueHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MaximumValue"))
  {
    m_maximumValue = jsonValue.GetObject("MaximumValue");

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

JsonValue DecimalColumnStatisticsData::Jsonize() const
{
  JsonValue payload;

  if(m_minimumValueHasBeenSet)
  {
   payload.WithObject("MinimumValue", m_minimumValue.Jsonize());

  }

  if(m_maximumValueHasBeenSet)
  {
   payload.WithObject("MaximumValue", m_maximumValue.Jsonize());

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
