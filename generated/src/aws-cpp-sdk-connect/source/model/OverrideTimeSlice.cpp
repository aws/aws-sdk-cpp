/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/OverrideTimeSlice.h>
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

OverrideTimeSlice::OverrideTimeSlice(JsonView jsonValue)
{
  *this = jsonValue;
}

OverrideTimeSlice& OverrideTimeSlice::operator =(JsonView jsonValue)
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

JsonValue OverrideTimeSlice::Jsonize() const
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
