/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connectparticipant/model/WebRTCConnection.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ConnectParticipant
{
namespace Model
{

WebRTCConnection::WebRTCConnection(JsonView jsonValue)
{
  *this = jsonValue;
}

WebRTCConnection& WebRTCConnection::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Attendee"))
  {
    m_attendee = jsonValue.GetObject("Attendee");
    m_attendeeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Meeting"))
  {
    m_meeting = jsonValue.GetObject("Meeting");
    m_meetingHasBeenSet = true;
  }
  return *this;
}

JsonValue WebRTCConnection::Jsonize() const
{
  JsonValue payload;

  if(m_attendeeHasBeenSet)
  {
   payload.WithObject("Attendee", m_attendee.Jsonize());

  }

  if(m_meetingHasBeenSet)
  {
   payload.WithObject("Meeting", m_meeting.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace ConnectParticipant
} // namespace Aws
