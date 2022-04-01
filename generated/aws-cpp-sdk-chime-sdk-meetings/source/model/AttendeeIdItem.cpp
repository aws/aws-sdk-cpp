/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime-sdk-meetings/model/AttendeeIdItem.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ChimeSDKMeetings
{
namespace Model
{

AttendeeIdItem::AttendeeIdItem() : 
    m_attendeeIdHasBeenSet(false)
{
}

AttendeeIdItem::AttendeeIdItem(JsonView jsonValue) : 
    m_attendeeIdHasBeenSet(false)
{
  *this = jsonValue;
}

AttendeeIdItem& AttendeeIdItem::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("AttendeeId"))
  {
    m_attendeeId = jsonValue.GetString("AttendeeId");

    m_attendeeIdHasBeenSet = true;
  }

  return *this;
}

JsonValue AttendeeIdItem::Jsonize() const
{
  JsonValue payload;

  if(m_attendeeIdHasBeenSet)
  {
   payload.WithString("AttendeeId", m_attendeeId);

  }

  return payload;
}

} // namespace Model
} // namespace ChimeSDKMeetings
} // namespace Aws
