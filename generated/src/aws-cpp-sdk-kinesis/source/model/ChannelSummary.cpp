/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/kinesis/model/ChannelSummary.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Kinesis {
namespace Model {

ChannelSummary::ChannelSummary(JsonView jsonValue) { *this = jsonValue; }

ChannelSummary& ChannelSummary::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("ChannelName")) {
    m_channelName = jsonValue.GetString("ChannelName");
    m_channelNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ChannelARN")) {
    m_channelARN = jsonValue.GetString("ChannelARN");
    m_channelARNHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ChannelId")) {
    m_channelId = jsonValue.GetString("ChannelId");
    m_channelIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ChannelStatus")) {
    m_channelStatus = ChannelStatusMapper::GetChannelStatusForName(jsonValue.GetString("ChannelStatus"));
    m_channelStatusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ChannelStatusReason")) {
    m_channelStatusReason = jsonValue.GetString("ChannelStatusReason");
    m_channelStatusReasonHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ChannelCreationTimestamp")) {
    m_channelCreationTimestamp = jsonValue.GetDouble("ChannelCreationTimestamp");
    m_channelCreationTimestampHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ChannelDestinationType")) {
    m_channelDestinationType =
        ChannelDestinationTypeMapper::GetChannelDestinationTypeForName(jsonValue.GetString("ChannelDestinationType"));
    m_channelDestinationTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Streams")) {
    Aws::Utils::Array<JsonView> streamsJsonList = jsonValue.GetArray("Streams");
    for (unsigned streamsIndex = 0; streamsIndex < streamsJsonList.GetLength(); ++streamsIndex) {
      m_streams.push_back(streamsJsonList[streamsIndex].AsObject());
    }
    m_streamsHasBeenSet = true;
  }
  return *this;
}

JsonValue ChannelSummary::Jsonize() const {
  JsonValue payload;

  if (m_channelNameHasBeenSet) {
    payload.WithString("ChannelName", m_channelName);
  }

  if (m_channelARNHasBeenSet) {
    payload.WithString("ChannelARN", m_channelARN);
  }

  if (m_channelIdHasBeenSet) {
    payload.WithString("ChannelId", m_channelId);
  }

  if (m_channelStatusHasBeenSet) {
    payload.WithString("ChannelStatus", ChannelStatusMapper::GetNameForChannelStatus(m_channelStatus));
  }

  if (m_channelStatusReasonHasBeenSet) {
    payload.WithString("ChannelStatusReason", m_channelStatusReason);
  }

  if (m_channelCreationTimestampHasBeenSet) {
    payload.WithDouble("ChannelCreationTimestamp", m_channelCreationTimestamp.SecondsWithMSPrecision());
  }

  if (m_channelDestinationTypeHasBeenSet) {
    payload.WithString("ChannelDestinationType", ChannelDestinationTypeMapper::GetNameForChannelDestinationType(m_channelDestinationType));
  }

  if (m_streamsHasBeenSet) {
    Aws::Utils::Array<JsonValue> streamsJsonList(m_streams.size());
    for (unsigned streamsIndex = 0; streamsIndex < streamsJsonList.GetLength(); ++streamsIndex) {
      streamsJsonList[streamsIndex].AsObject(m_streams[streamsIndex].Jsonize());
    }
    payload.WithArray("Streams", std::move(streamsJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace Kinesis
}  // namespace Aws
