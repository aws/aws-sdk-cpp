/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/HoursOfOperationTimeSlice.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Connect
{
namespace Model
{

HoursOfOperationTimeSlice::HoursOfOperationTimeSlice() : 
    m_hours(0),
    m_hoursHasBeenSet(false),
    m_minutes(0),
    m_minutesHasBeenSet(false)
{
}

HoursOfOperationTimeSlice::HoursOfOperationTimeSlice(JsonView jsonValue) : 
    m_hours(0),
    m_hoursHasBeenSet(false),
    m_minutes(0),
    m_minutesHasBeenSet(false)
{
  *this = jsonValue;
}

HoursOfOperationTimeSlice& HoursOfOperationTimeSlice::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Hours"))
  {
    m_hours = jsonValue.GetInteger("Hours");

    m_hoursHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Minutes"))
  {
    m_minutes = jsonValue.GetInteger("Minutes");

    m_minutesHasBeenSet = true;
  }

  return *this;
}

JsonValue HoursOfOperationTimeSlice::Jsonize() const
{
  JsonValue payload;

  if(m_hoursHasBeenSet)
  {
   payload.WithInteger("Hours", m_hours);

  }

  if(m_minutesHasBeenSet)
  {
   payload.WithInteger("Minutes", m_minutes);

  }

  return payload;
}

} // namespace Model
} // namespace Connect
} // namespace Aws
