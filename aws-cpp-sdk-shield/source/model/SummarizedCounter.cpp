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

#include <aws/shield/model/SummarizedCounter.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Shield
{
namespace Model
{

SummarizedCounter::SummarizedCounter() : 
    m_nameHasBeenSet(false),
    m_max(0.0),
    m_maxHasBeenSet(false),
    m_average(0.0),
    m_averageHasBeenSet(false),
    m_sum(0.0),
    m_sumHasBeenSet(false),
    m_n(0),
    m_nHasBeenSet(false),
    m_unitHasBeenSet(false)
{
}

SummarizedCounter::SummarizedCounter(const JsonValue& jsonValue) : 
    m_nameHasBeenSet(false),
    m_max(0.0),
    m_maxHasBeenSet(false),
    m_average(0.0),
    m_averageHasBeenSet(false),
    m_sum(0.0),
    m_sumHasBeenSet(false),
    m_n(0),
    m_nHasBeenSet(false),
    m_unitHasBeenSet(false)
{
  *this = jsonValue;
}

SummarizedCounter& SummarizedCounter::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Max"))
  {
    m_max = jsonValue.GetDouble("Max");

    m_maxHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Average"))
  {
    m_average = jsonValue.GetDouble("Average");

    m_averageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Sum"))
  {
    m_sum = jsonValue.GetDouble("Sum");

    m_sumHasBeenSet = true;
  }

  if(jsonValue.ValueExists("N"))
  {
    m_n = jsonValue.GetInteger("N");

    m_nHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Unit"))
  {
    m_unit = jsonValue.GetString("Unit");

    m_unitHasBeenSet = true;
  }

  return *this;
}

JsonValue SummarizedCounter::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_maxHasBeenSet)
  {
   payload.WithDouble("Max", m_max);

  }

  if(m_averageHasBeenSet)
  {
   payload.WithDouble("Average", m_average);

  }

  if(m_sumHasBeenSet)
  {
   payload.WithDouble("Sum", m_sum);

  }

  if(m_nHasBeenSet)
  {
   payload.WithInteger("N", m_n);

  }

  if(m_unitHasBeenSet)
  {
   payload.WithString("Unit", m_unit);

  }

  return payload;
}

} // namespace Model
} // namespace Shield
} // namespace Aws