/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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

RetentionPeriod::RetentionPeriod(JsonView jsonValue) : 
    m_unlimited(false),
    m_unlimitedHasBeenSet(false),
    m_numberOfDays(0),
    m_numberOfDaysHasBeenSet(false)
{
  *this = jsonValue;
}

RetentionPeriod& RetentionPeriod::operator =(JsonView jsonValue)
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
