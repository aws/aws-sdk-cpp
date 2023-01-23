/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotanalytics/model/ChannelSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IoTAnalytics
{
namespace Model
{

ChannelSummary::ChannelSummary() : 
    m_channelNameHasBeenSet(false),
    m_channelStorageHasBeenSet(false),
    m_status(ChannelStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_lastUpdateTimeHasBeenSet(false),
    m_lastMessageArrivalTimeHasBeenSet(false)
{
}

ChannelSummary::ChannelSummary(JsonView jsonValue) : 
    m_channelNameHasBeenSet(false),
    m_channelStorageHasBeenSet(false),
    m_status(ChannelStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_lastUpdateTimeHasBeenSet(false),
    m_lastMessageArrivalTimeHasBeenSet(false)
{
  *this = jsonValue;
}

ChannelSummary& ChannelSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("channelName"))
  {
    m_channelName = jsonValue.GetString("channelName");

    m_channelNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("channelStorage"))
  {
    m_channelStorage = jsonValue.GetObject("channelStorage");

    m_channelStorageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = ChannelStatusMapper::GetChannelStatusForName(jsonValue.GetString("status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("creationTime"))
  {
    m_creationTime = jsonValue.GetDouble("creationTime");

    m_creationTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("lastUpdateTime"))
  {
    m_lastUpdateTime = jsonValue.GetDouble("lastUpdateTime");

    m_lastUpdateTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("lastMessageArrivalTime"))
  {
    m_lastMessageArrivalTime = jsonValue.GetDouble("lastMessageArrivalTime");

    m_lastMessageArrivalTimeHasBeenSet = true;
  }

  return *this;
}

JsonValue ChannelSummary::Jsonize() const
{
  JsonValue payload;

  if(m_channelNameHasBeenSet)
  {
   payload.WithString("channelName", m_channelName);

  }

  if(m_channelStorageHasBeenSet)
  {
   payload.WithObject("channelStorage", m_channelStorage.Jsonize());

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", ChannelStatusMapper::GetNameForChannelStatus(m_status));
  }

  if(m_creationTimeHasBeenSet)
  {
   payload.WithDouble("creationTime", m_creationTime.SecondsWithMSPrecision());
  }

  if(m_lastUpdateTimeHasBeenSet)
  {
   payload.WithDouble("lastUpdateTime", m_lastUpdateTime.SecondsWithMSPrecision());
  }

  if(m_lastMessageArrivalTimeHasBeenSet)
  {
   payload.WithDouble("lastMessageArrivalTime", m_lastMessageArrivalTime.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace IoTAnalytics
} // namespace Aws
