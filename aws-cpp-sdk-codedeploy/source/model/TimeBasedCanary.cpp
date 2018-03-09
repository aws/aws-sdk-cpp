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

#include <aws/codedeploy/model/TimeBasedCanary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CodeDeploy
{
namespace Model
{

TimeBasedCanary::TimeBasedCanary() : 
    m_canaryPercentage(0),
    m_canaryPercentageHasBeenSet(false),
    m_canaryInterval(0),
    m_canaryIntervalHasBeenSet(false)
{
}

TimeBasedCanary::TimeBasedCanary(const JsonValue& jsonValue) : 
    m_canaryPercentage(0),
    m_canaryPercentageHasBeenSet(false),
    m_canaryInterval(0),
    m_canaryIntervalHasBeenSet(false)
{
  *this = jsonValue;
}

TimeBasedCanary& TimeBasedCanary::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("canaryPercentage"))
  {
    m_canaryPercentage = jsonValue.GetInteger("canaryPercentage");

    m_canaryPercentageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("canaryInterval"))
  {
    m_canaryInterval = jsonValue.GetInteger("canaryInterval");

    m_canaryIntervalHasBeenSet = true;
  }

  return *this;
}

JsonValue TimeBasedCanary::Jsonize() const
{
  JsonValue payload;

  if(m_canaryPercentageHasBeenSet)
  {
   payload.WithInteger("canaryPercentage", m_canaryPercentage);

  }

  if(m_canaryIntervalHasBeenSet)
  {
   payload.WithInteger("canaryInterval", m_canaryInterval);

  }

  return payload;
}

} // namespace Model
} // namespace CodeDeploy
} // namespace Aws
