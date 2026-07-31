/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/kafka/model/ChannelInfo.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Kafka {
namespace Model {

ChannelInfo::ChannelInfo(JsonView jsonValue) { *this = jsonValue; }

ChannelInfo& ChannelInfo::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("channelArn")) {
    m_channelArn = jsonValue.GetString("channelArn");
    m_channelArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("channelName")) {
    m_channelName = jsonValue.GetString("channelName");
    m_channelNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("status")) {
    m_status = ChannelStatusMapper::GetChannelStatusForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("creationTime")) {
    m_creationTime = jsonValue.GetString("creationTime");
    m_creationTimeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("destinationType")) {
    m_destinationType = ChannelDestinationTypeMapper::GetChannelDestinationTypeForName(jsonValue.GetString("destinationType"));
    m_destinationTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("clusterOperationArn")) {
    m_clusterOperationArn = jsonValue.GetString("clusterOperationArn");
    m_clusterOperationArnHasBeenSet = true;
  }
  return *this;
}

JsonValue ChannelInfo::Jsonize() const {
  JsonValue payload;

  if (m_channelArnHasBeenSet) {
    payload.WithString("channelArn", m_channelArn);
  }

  if (m_channelNameHasBeenSet) {
    payload.WithString("channelName", m_channelName);
  }

  if (m_statusHasBeenSet) {
    payload.WithString("status", ChannelStatusMapper::GetNameForChannelStatus(m_status));
  }

  if (m_creationTimeHasBeenSet) {
    payload.WithString("creationTime", m_creationTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if (m_destinationTypeHasBeenSet) {
    payload.WithString("destinationType", ChannelDestinationTypeMapper::GetNameForChannelDestinationType(m_destinationType));
  }

  if (m_clusterOperationArnHasBeenSet) {
    payload.WithString("clusterOperationArn", m_clusterOperationArn);
  }

  return payload;
}

}  // namespace Model
}  // namespace Kafka
}  // namespace Aws
