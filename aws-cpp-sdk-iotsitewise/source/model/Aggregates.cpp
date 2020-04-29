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

#include <aws/iotsitewise/model/Aggregates.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IoTSiteWise
{
namespace Model
{

Aggregates::Aggregates() : 
    m_average(0.0),
    m_averageHasBeenSet(false),
    m_count(0.0),
    m_countHasBeenSet(false),
    m_maximum(0.0),
    m_maximumHasBeenSet(false),
    m_minimum(0.0),
    m_minimumHasBeenSet(false),
    m_sum(0.0),
    m_sumHasBeenSet(false)
{
}

Aggregates::Aggregates(JsonView jsonValue) : 
    m_average(0.0),
    m_averageHasBeenSet(false),
    m_count(0.0),
    m_countHasBeenSet(false),
    m_maximum(0.0),
    m_maximumHasBeenSet(false),
    m_minimum(0.0),
    m_minimumHasBeenSet(false),
    m_sum(0.0),
    m_sumHasBeenSet(false)
{
  *this = jsonValue;
}

Aggregates& Aggregates::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("average"))
  {
    m_average = jsonValue.GetDouble("average");

    m_averageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("count"))
  {
    m_count = jsonValue.GetDouble("count");

    m_countHasBeenSet = true;
  }

  if(jsonValue.ValueExists("maximum"))
  {
    m_maximum = jsonValue.GetDouble("maximum");

    m_maximumHasBeenSet = true;
  }

  if(jsonValue.ValueExists("minimum"))
  {
    m_minimum = jsonValue.GetDouble("minimum");

    m_minimumHasBeenSet = true;
  }

  if(jsonValue.ValueExists("sum"))
  {
    m_sum = jsonValue.GetDouble("sum");

    m_sumHasBeenSet = true;
  }

  return *this;
}

JsonValue Aggregates::Jsonize() const
{
  JsonValue payload;

  if(m_averageHasBeenSet)
  {
   payload.WithDouble("average", m_average);

  }

  if(m_countHasBeenSet)
  {
   payload.WithDouble("count", m_count);

  }

  if(m_maximumHasBeenSet)
  {
   payload.WithDouble("maximum", m_maximum);

  }

  if(m_minimumHasBeenSet)
  {
   payload.WithDouble("minimum", m_minimum);

  }

  if(m_sumHasBeenSet)
  {
   payload.WithDouble("sum", m_sum);

  }

  return payload;
}

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
