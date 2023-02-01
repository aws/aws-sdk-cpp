/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/alexaforbusiness/model/UpdateInstantBooking.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace AlexaForBusiness
{
namespace Model
{

UpdateInstantBooking::UpdateInstantBooking() : 
    m_durationInMinutes(0),
    m_durationInMinutesHasBeenSet(false),
    m_enabled(false),
    m_enabledHasBeenSet(false)
{
}

UpdateInstantBooking::UpdateInstantBooking(JsonView jsonValue) : 
    m_durationInMinutes(0),
    m_durationInMinutesHasBeenSet(false),
    m_enabled(false),
    m_enabledHasBeenSet(false)
{
  *this = jsonValue;
}

UpdateInstantBooking& UpdateInstantBooking::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("DurationInMinutes"))
  {
    m_durationInMinutes = jsonValue.GetInteger("DurationInMinutes");

    m_durationInMinutesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Enabled"))
  {
    m_enabled = jsonValue.GetBool("Enabled");

    m_enabledHasBeenSet = true;
  }

  return *this;
}

JsonValue UpdateInstantBooking::Jsonize() const
{
  JsonValue payload;

  if(m_durationInMinutesHasBeenSet)
  {
   payload.WithInteger("DurationInMinutes", m_durationInMinutes);

  }

  if(m_enabledHasBeenSet)
  {
   payload.WithBool("Enabled", m_enabled);

  }

  return payload;
}

} // namespace Model
} // namespace AlexaForBusiness
} // namespace Aws
