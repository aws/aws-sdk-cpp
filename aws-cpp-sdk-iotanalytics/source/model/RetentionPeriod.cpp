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

#include <aws/iotanalytics/model/RetentionPeriod.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IoTAnalytics
{
namespace Model
{

RetentionPeriod::RetentionPeriod() : 
    m_unlimited(false),
    m_unlimitedHasBeenSet(false),
    m_numberOfDays(0),
    m_numberOfDaysHasBeenSet(false)
{
}

RetentionPeriod::RetentionPeriod(const JsonValue& jsonValue) : 
    m_unlimited(false),
    m_unlimitedHasBeenSet(false),
    m_numberOfDays(0),
    m_numberOfDaysHasBeenSet(false)
{
  *this = jsonValue;
}

RetentionPeriod& RetentionPeriod::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("unlimited"))
  {
    m_unlimited = jsonValue.GetBool("unlimited");

    m_unlimitedHasBeenSet = true;
  }

  if(jsonValue.ValueExists("numberOfDays"))
  {
    m_numberOfDays = jsonValue.GetInteger("numberOfDays");

    m_numberOfDaysHasBeenSet = true;
  }

  return *this;
}

JsonValue RetentionPeriod::Jsonize() const
{
  JsonValue payload;

  if(m_unlimitedHasBeenSet)
  {
   payload.WithBool("unlimited", m_unlimited);

  }

  if(m_numberOfDaysHasBeenSet)
  {
   payload.WithInteger("numberOfDays", m_numberOfDays);

  }

  return payload;
}

} // namespace Model
} // namespace IoTAnalytics
} // namespace Aws
