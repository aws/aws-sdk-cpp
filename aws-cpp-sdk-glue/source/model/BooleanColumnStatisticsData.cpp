/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
