/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/devops-agent/model/MSTeamsChannel.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace DevOpsAgent {
namespace Model {

MSTeamsChannel::MSTeamsChannel(JsonView jsonValue) { *this = jsonValue; }

MSTeamsChannel& MSTeamsChannel::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("channelName")) {
    m_channelName = jsonValue.GetString("channelName");
    m_channelNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("channelId")) {
    m_channelId = jsonValue.GetString("channelId");
    m_channelIdHasBeenSet = true;
  }
  return *this;
}

JsonValue MSTeamsChannel::Jsonize() const {
  JsonValue payload;

  if (m_channelNameHasBeenSet) {
    payload.WithString("channelName", m_channelName);
  }

  if (m_channelIdHasBeenSet) {
    payload.WithString("channelId", m_channelId);
  }

  return payload;
}

}  // namespace Model
}  // namespace DevOpsAgent
}  // namespace Aws
