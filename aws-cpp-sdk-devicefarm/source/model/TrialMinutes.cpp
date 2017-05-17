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

#include <aws/devicefarm/model/TrialMinutes.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DeviceFarm
{
namespace Model
{

TrialMinutes::TrialMinutes() : 
    m_total(0.0),
    m_totalHasBeenSet(false),
    m_remaining(0.0),
    m_remainingHasBeenSet(false)
{
}

TrialMinutes::TrialMinutes(const JsonValue& jsonValue) : 
    m_total(0.0),
    m_totalHasBeenSet(false),
    m_remaining(0.0),
    m_remainingHasBeenSet(false)
{
  *this = jsonValue;
}

TrialMinutes& TrialMinutes::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("total"))
  {
    m_total = jsonValue.GetDouble("total");

    m_totalHasBeenSet = true;
  }

  if(jsonValue.ValueExists("remaining"))
  {
    m_remaining = jsonValue.GetDouble("remaining");

    m_remainingHasBeenSet = true;
  }

  return *this;
}

JsonValue TrialMinutes::Jsonize() const
{
  JsonValue payload;

  if(m_totalHasBeenSet)
  {
   payload.WithDouble("total", m_total);

  }

  if(m_remainingHasBeenSet)
  {
   payload.WithDouble("remaining", m_remaining);

  }

  return payload;
}

} // namespace Model
} // namespace DeviceFarm
} // namespace Aws