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

#include <aws/codedeploy/model/TimeBasedLinear.h>
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

TimeBasedLinear::TimeBasedLinear() : 
    m_linearPercentage(0),
    m_linearPercentageHasBeenSet(false),
    m_linearInterval(0),
    m_linearIntervalHasBeenSet(false)
{
}

TimeBasedLinear::TimeBasedLinear(const JsonValue& jsonValue) : 
    m_linearPercentage(0),
    m_linearPercentageHasBeenSet(false),
    m_linearInterval(0),
    m_linearIntervalHasBeenSet(false)
{
  *this = jsonValue;
}

TimeBasedLinear& TimeBasedLinear::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("linearPercentage"))
  {
    m_linearPercentage = jsonValue.GetInteger("linearPercentage");

    m_linearPercentageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("linearInterval"))
  {
    m_linearInterval = jsonValue.GetInteger("linearInterval");

    m_linearIntervalHasBeenSet = true;
  }

  return *this;
}

JsonValue TimeBasedLinear::Jsonize() const
{
  JsonValue payload;

  if(m_linearPercentageHasBeenSet)
  {
   payload.WithInteger("linearPercentage", m_linearPercentage);

  }

  if(m_linearIntervalHasBeenSet)
  {
   payload.WithInteger("linearInterval", m_linearInterval);

  }

  return payload;
}

} // namespace Model
} // namespace CodeDeploy
} // namespace Aws
