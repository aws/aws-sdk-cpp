/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime/model/Attendee.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Chime
{
namespace Model
{

Attendee::Attendee() : 
    m_externalUserIdHasBeenSet(false),
    m_attendeeIdHasBeenSet(false),
    m_joinTokenHasBeenSet(false)
{
}

Attendee::Attendee(JsonView jsonValue) : 
    m_externalUserIdHasBeenSet(false),
    m_attendeeIdHasBeenSet(false),
    m_joinTokenHasBeenSet(false)
{
  *this = jsonValue;
}

Attendee& Attendee::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ExternalUserId"))
  {
    m_externalUserId = jsonValue.GetString("ExternalUserId");

    m_externalUserIdHasBeenSet = true;
  }

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

  if(m_externalUserIdHasBeenSet)
  {
   payload.WithString("ExternalUserId", m_externalUserId);

  }

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
} // namespace Chime
} // namespace Aws
