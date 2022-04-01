/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/BooleanColumnStatisticsData.h>
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

BooleanColumnStatisticsData::BooleanColumnStatisticsData() : 
    m_numberOfTrues(0),
    m_numberOfTruesHasBeenSet(false),
    m_numberOfFalses(0),
    m_numberOfFalsesHasBeenSet(false),
    m_numberOfNulls(0),
    m_numberOfNullsHasBeenSet(false)
{
}

BooleanColumnStatisticsData::BooleanColumnStatisticsData(JsonView jsonValue) : 
    m_numberOfTrues(0),
    m_numberOfTruesHasBeenSet(false),
    m_numberOfFalses(0),
    m_numberOfFalsesHasBeenSet(false),
    m_numberOfNulls(0),
    m_numberOfNullsHasBeenSet(false)
{
  *this = jsonValue;
}

BooleanColumnStatisticsData& BooleanColumnStatisticsData::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("NumberOfTrues"))
  {
    m_numberOfTrues = jsonValue.GetInt64("NumberOfTrues");

    m_numberOfTruesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("NumberOfFalses"))
  {
    m_numberOfFalses = jsonValue.GetInt64("NumberOfFalses");

    m_numberOfFalsesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("NumberOfNulls"))
  {
    m_numberOfNulls = jsonValue.GetInt64("NumberOfNulls");

    m_numberOfNullsHasBeenSet = true;
  }

  return *this;
}

JsonValue BooleanColumnStatisticsData::Jsonize() const
{
  JsonValue payload;

  if(m_numberOfTruesHasBeenSet)
  {
   payload.WithInt64("NumberOfTrues", m_numberOfTrues);

  }

  if(m_numberOfFalsesHasBeenSet)
  {
   payload.WithInt64("NumberOfFalses", m_numberOfFalses);

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
