/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ivs/model/StreamSession.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IVS
{
namespace Model
{

StreamSession::StreamSession() : 
    m_channelHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_ingestConfigurationHasBeenSet(false),
    m_recordingConfigurationHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_streamIdHasBeenSet(false),
    m_truncatedEventsHasBeenSet(false)
{
}

StreamSession::StreamSession(JsonView jsonValue) : 
    m_channelHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_ingestConfigurationHasBeenSet(false),
    m_recordingConfigurationHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_streamIdHasBeenSet(false),
    m_truncatedEventsHasBeenSet(false)
{
  *this = jsonValue;
}

StreamSession& StreamSession::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("channel"))
  {
    m_channel = jsonValue.GetObject("channel");

    m_channelHasBeenSet = true;
  }

  if(jsonValue.ValueExists("endTime"))
  {
    m_endTime = jsonValue.GetString("endTime");

    m_endTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ingestConfiguration"))
  {
    m_ingestConfiguration = jsonValue.GetObject("ingestConfiguration");

    m_ingestConfigurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("recordingConfiguration"))
  {
    m_recordingConfiguration = jsonValue.GetObject("recordingConfiguration");

    m_recordingConfigurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("startTime"))
  {
    m_startTime = jsonValue.GetString("startTime");

    m_startTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("streamId"))
  {
    m_streamId = jsonValue.GetString("streamId");

    m_streamIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("truncatedEvents"))
  {
    Aws::Utils::Array<JsonView> truncatedEventsJsonList = jsonValue.GetArray("truncatedEvents");
    for(unsigned truncatedEventsIndex = 0; truncatedEventsIndex < truncatedEventsJsonList.GetLength(); ++truncatedEventsIndex)
    {
      m_truncatedEvents.push_back(truncatedEventsJsonList[truncatedEventsIndex].AsObject());
    }
    m_truncatedEventsHasBeenSet = true;
  }

  return *this;
}

JsonValue StreamSession::Jsonize() const
{
  JsonValue payload;

  if(m_channelHasBeenSet)
  {
   payload.WithObject("channel", m_channel.Jsonize());

  }

  if(m_endTimeHasBeenSet)
  {
   payload.WithString("endTime", m_endTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_ingestConfigurationHasBeenSet)
  {
   payload.WithObject("ingestConfiguration", m_ingestConfiguration.Jsonize());

  }

  if(m_recordingConfigurationHasBeenSet)
  {
   payload.WithObject("recordingConfiguration", m_recordingConfiguration.Jsonize());

  }

  if(m_startTimeHasBeenSet)
  {
   payload.WithString("startTime", m_startTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_streamIdHasBeenSet)
  {
   payload.WithString("streamId", m_streamId);

  }

  if(m_truncatedEventsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> truncatedEventsJsonList(m_truncatedEvents.size());
   for(unsigned truncatedEventsIndex = 0; truncatedEventsIndex < truncatedEventsJsonList.GetLength(); ++truncatedEventsIndex)
   {
     truncatedEventsJsonList[truncatedEventsIndex].AsObject(m_truncatedEvents[truncatedEventsIndex].Jsonize());
   }
   payload.WithArray("truncatedEvents", std::move(truncatedEventsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace IVS
} // namespace Aws
