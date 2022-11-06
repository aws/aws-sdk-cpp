/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/alexaforbusiness/model/UpdateEndOfMeetingReminder.h>
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

UpdateEndOfMeetingReminder::UpdateEndOfMeetingReminder() : 
    m_reminderAtMinutesHasBeenSet(false),
    m_reminderType(EndOfMeetingReminderType::NOT_SET),
    m_reminderTypeHasBeenSet(false),
    m_enabled(false),
    m_enabledHasBeenSet(false)
{
}

UpdateEndOfMeetingReminder::UpdateEndOfMeetingReminder(JsonView jsonValue) : 
    m_reminderAtMinutesHasBeenSet(false),
    m_reminderType(EndOfMeetingReminderType::NOT_SET),
    m_reminderTypeHasBeenSet(false),
    m_enabled(false),
    m_enabledHasBeenSet(false)
{
  *this = jsonValue;
}

UpdateEndOfMeetingReminder& UpdateEndOfMeetingReminder::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ReminderAtMinutes"))
  {
    Aws::Utils::Array<JsonView> reminderAtMinutesJsonList = jsonValue.GetArray("ReminderAtMinutes");
    for(unsigned reminderAtMinutesIndex = 0; reminderAtMinutesIndex < reminderAtMinutesJsonList.GetLength(); ++reminderAtMinutesIndex)
    {
      m_reminderAtMinutes.push_back(reminderAtMinutesJsonList[reminderAtMinutesIndex].AsInteger());
    }
    m_reminderAtMinutesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ReminderType"))
  {
    m_reminderType = EndOfMeetingReminderTypeMapper::GetEndOfMeetingReminderTypeForName(jsonValue.GetString("ReminderType"));

    m_reminderTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Enabled"))
  {
    m_enabled = jsonValue.GetBool("Enabled");

    m_enabledHasBeenSet = true;
  }

  return *this;
}

JsonValue UpdateEndOfMeetingReminder::Jsonize() const
{
  JsonValue payload;

  if(m_reminderAtMinutesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> reminderAtMinutesJsonList(m_reminderAtMinutes.size());
   for(unsigned reminderAtMinutesIndex = 0; reminderAtMinutesIndex < reminderAtMinutesJsonList.GetLength(); ++reminderAtMinutesIndex)
   {
     reminderAtMinutesJsonList[reminderAtMinutesIndex].AsInteger(m_reminderAtMinutes[reminderAtMinutesIndex]);
   }
   payload.WithArray("ReminderAtMinutes", std::move(reminderAtMinutesJsonList));

  }

  if(m_reminderTypeHasBeenSet)
  {
   payload.WithString("ReminderType", EndOfMeetingReminderTypeMapper::GetNameForEndOfMeetingReminderType(m_reminderType));
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
