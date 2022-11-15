/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediatailor/model/ScheduleEntry.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MediaTailor
{
namespace Model
{

ScheduleEntry::ScheduleEntry() : 
    m_approximateDurationSeconds(0),
    m_approximateDurationSecondsHasBeenSet(false),
    m_approximateStartTimeHasBeenSet(false),
    m_arnHasBeenSet(false),
    m_channelNameHasBeenSet(false),
    m_liveSourceNameHasBeenSet(false),
    m_programNameHasBeenSet(false),
    m_scheduleAdBreaksHasBeenSet(false),
    m_scheduleEntryType(ScheduleEntryType::NOT_SET),
    m_scheduleEntryTypeHasBeenSet(false),
    m_sourceLocationNameHasBeenSet(false),
    m_vodSourceNameHasBeenSet(false)
{
}

ScheduleEntry::ScheduleEntry(JsonView jsonValue) : 
    m_approximateDurationSeconds(0),
    m_approximateDurationSecondsHasBeenSet(false),
    m_approximateStartTimeHasBeenSet(false),
    m_arnHasBeenSet(false),
    m_channelNameHasBeenSet(false),
    m_liveSourceNameHasBeenSet(false),
    m_programNameHasBeenSet(false),
    m_scheduleAdBreaksHasBeenSet(false),
    m_scheduleEntryType(ScheduleEntryType::NOT_SET),
    m_scheduleEntryTypeHasBeenSet(false),
    m_sourceLocationNameHasBeenSet(false),
    m_vodSourceNameHasBeenSet(false)
{
  *this = jsonValue;
}

ScheduleEntry& ScheduleEntry::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ApproximateDurationSeconds"))
  {
    m_approximateDurationSeconds = jsonValue.GetInt64("ApproximateDurationSeconds");

    m_approximateDurationSecondsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ApproximateStartTime"))
  {
    m_approximateStartTime = jsonValue.GetDouble("ApproximateStartTime");

    m_approximateStartTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Arn"))
  {
    m_arn = jsonValue.GetString("Arn");

    m_arnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ChannelName"))
  {
    m_channelName = jsonValue.GetString("ChannelName");

    m_channelNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LiveSourceName"))
  {
    m_liveSourceName = jsonValue.GetString("LiveSourceName");

    m_liveSourceNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ProgramName"))
  {
    m_programName = jsonValue.GetString("ProgramName");

    m_programNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ScheduleAdBreaks"))
  {
    Aws::Utils::Array<JsonView> scheduleAdBreaksJsonList = jsonValue.GetArray("ScheduleAdBreaks");
    for(unsigned scheduleAdBreaksIndex = 0; scheduleAdBreaksIndex < scheduleAdBreaksJsonList.GetLength(); ++scheduleAdBreaksIndex)
    {
      m_scheduleAdBreaks.push_back(scheduleAdBreaksJsonList[scheduleAdBreaksIndex].AsObject());
    }
    m_scheduleAdBreaksHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ScheduleEntryType"))
  {
    m_scheduleEntryType = ScheduleEntryTypeMapper::GetScheduleEntryTypeForName(jsonValue.GetString("ScheduleEntryType"));

    m_scheduleEntryTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SourceLocationName"))
  {
    m_sourceLocationName = jsonValue.GetString("SourceLocationName");

    m_sourceLocationNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("VodSourceName"))
  {
    m_vodSourceName = jsonValue.GetString("VodSourceName");

    m_vodSourceNameHasBeenSet = true;
  }

  return *this;
}

JsonValue ScheduleEntry::Jsonize() const
{
  JsonValue payload;

  if(m_approximateDurationSecondsHasBeenSet)
  {
   payload.WithInt64("ApproximateDurationSeconds", m_approximateDurationSeconds);

  }

  if(m_approximateStartTimeHasBeenSet)
  {
   payload.WithDouble("ApproximateStartTime", m_approximateStartTime.SecondsWithMSPrecision());
  }

  if(m_arnHasBeenSet)
  {
   payload.WithString("Arn", m_arn);

  }

  if(m_channelNameHasBeenSet)
  {
   payload.WithString("ChannelName", m_channelName);

  }

  if(m_liveSourceNameHasBeenSet)
  {
   payload.WithString("LiveSourceName", m_liveSourceName);

  }

  if(m_programNameHasBeenSet)
  {
   payload.WithString("ProgramName", m_programName);

  }

  if(m_scheduleAdBreaksHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> scheduleAdBreaksJsonList(m_scheduleAdBreaks.size());
   for(unsigned scheduleAdBreaksIndex = 0; scheduleAdBreaksIndex < scheduleAdBreaksJsonList.GetLength(); ++scheduleAdBreaksIndex)
   {
     scheduleAdBreaksJsonList[scheduleAdBreaksIndex].AsObject(m_scheduleAdBreaks[scheduleAdBreaksIndex].Jsonize());
   }
   payload.WithArray("ScheduleAdBreaks", std::move(scheduleAdBreaksJsonList));

  }

  if(m_scheduleEntryTypeHasBeenSet)
  {
   payload.WithString("ScheduleEntryType", ScheduleEntryTypeMapper::GetNameForScheduleEntryType(m_scheduleEntryType));
  }

  if(m_sourceLocationNameHasBeenSet)
  {
   payload.WithString("SourceLocationName", m_sourceLocationName);

  }

  if(m_vodSourceNameHasBeenSet)
  {
   payload.WithString("VodSourceName", m_vodSourceName);

  }

  return payload;
}

} // namespace Model
} // namespace MediaTailor
} // namespace Aws
