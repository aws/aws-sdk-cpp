/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/Attendee.h>
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

Attendee::Attendee() : 
    m_attendeeIdHasBeenSet(false),
    m_joinTokenHasBeenSet(false)
{
}

Attendee::Attendee(JsonView jsonValue) : 
    m_attendeeIdHasBeenSet(false),
    m_joinTokenHasBeenSet(false)
{
  *this = jsonValue;
}

Attendee& Attendee::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("AttendeeId"))
  {
    m_attendeeId = jsonValue.GetString("AttendeeId");

    m_attendeeIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("JoinToken"))
  {
    m_joinToken = jsonValue.GetString("JoinToken");

    m_joinTokenHasBeenSet = true;
  }

  return *this;
}

JsonValue Attendee::Jsonize() const
{
  JsonValue payload;

  if(m_attendeeIdHasBeenSet)
  {
   payload.WithString("AttendeeId", m_attendeeId);

  }

  if(m_joinTokenHasBeenSet)
  {
   payload.WithString("JoinToken", m_joinToken);

  }

  return payload;
}

} // namespace Model
} // namespace Connect
} // namespace Aws
