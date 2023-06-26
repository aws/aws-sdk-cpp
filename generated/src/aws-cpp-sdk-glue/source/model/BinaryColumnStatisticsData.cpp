/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/BinaryColumnStatisticsData.h>
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

BinaryColumnStatisticsData::BinaryColumnStatisticsData() : 
    m_maximumLength(0),
    m_maximumLengthHasBeenSet(false),
    m_averageLength(0.0),
    m_averageLengthHasBeenSet(false),
    m_numberOfNulls(0),
    m_numberOfNullsHasBeenSet(false)
{
}

BinaryColumnStatisticsData::BinaryColumnStatisticsData(JsonView jsonValue) : 
    m_maximumLength(0),
    m_maximumLengthHasBeenSet(false),
    m_averageLength(0.0),
    m_averageLengthHasBeenSet(false),
    m_numberOfNulls(0),
    m_numberOfNullsHasBeenSet(false)
{
  *this = jsonValue;
}

BinaryColumnStatisticsData& BinaryColumnStatisticsData::operator =(JsonView jsonValue)
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

  return *this;
}

JsonValue BinaryColumnStatisticsData::Jsonize() const
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

  return payload;
}

} // namespace Model
} // namespace Glue
} // namespace Aws
