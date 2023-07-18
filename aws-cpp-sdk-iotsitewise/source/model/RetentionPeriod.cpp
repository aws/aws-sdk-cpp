/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotsitewise/model/RetentionPeriod.h>
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

RetentionPeriod::RetentionPeriod() : 
    m_numberOfDays(0),
    m_numberOfDaysHasBeenSet(false),
    m_unlimited(false),
    m_unlimitedHasBeenSet(false)
{
}

RetentionPeriod::RetentionPeriod(JsonView jsonValue) : 
    m_numberOfDays(0),
    m_numberOfDaysHasBeenSet(false),
    m_unlimited(false),
    m_unlimitedHasBeenSet(false)
{
  *this = jsonValue;
}

RetentionPeriod& RetentionPeriod::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("numberOfDays"))
  {
    m_numberOfDays = jsonValue.GetInteger("numberOfDays");

    m_numberOfDaysHasBeenSet = true;
  }

  if(jsonValue.ValueExists("unlimited"))
  {
    m_unlimited = jsonValue.GetBool("unlimited");

    m_unlimitedHasBeenSet = true;
  }

  return *this;
}

JsonValue RetentionPeriod::Jsonize() const
{
  JsonValue payload;

  if(m_numberOfDaysHasBeenSet)
  {
   payload.WithInteger("numberOfDays", m_numberOfDays);

  }

  if(m_unlimitedHasBeenSet)
  {
   payload.WithBool("unlimited", m_unlimited);

  }

  return payload;
}

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
