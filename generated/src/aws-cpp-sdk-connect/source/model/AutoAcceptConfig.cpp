/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/AutoAcceptConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Connect {
namespace Model {

AutoAcceptConfig::AutoAcceptConfig(JsonView jsonValue) { *this = jsonValue; }

AutoAcceptConfig& AutoAcceptConfig::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Channel")) {
    m_channel = ChannelMapper::GetChannelForName(jsonValue.GetString("Channel"));
    m_channelHasBeenSet = true;
  }
  if (jsonValue.ValueExists("AutoAccept")) {
    m_autoAccept = jsonValue.GetBool("AutoAccept");
    m_autoAcceptHasBeenSet = true;
  }
  if (jsonValue.ValueExists("AgentFirstCallbackAutoAccept")) {
    m_agentFirstCallbackAutoAccept = jsonValue.GetBool("AgentFirstCallbackAutoAccept");
    m_agentFirstCallbackAutoAcceptHasBeenSet = true;
  }
  return *this;
}

JsonValue AutoAcceptConfig::Jsonize() const {
  JsonValue payload;

  if (m_channelHasBeenSet) {
    payload.WithString("Channel", ChannelMapper::GetNameForChannel(m_channel));
  }

  if (m_autoAcceptHasBeenSet) {
    payload.WithBool("AutoAccept", m_autoAccept);
  }

  if (m_agentFirstCallbackAutoAcceptHasBeenSet) {
    payload.WithBool("AgentFirstCallbackAutoAccept", m_agentFirstCallbackAutoAccept);
  }

  return payload;
}

}  // namespace Model
}  // namespace Connect
}  // namespace Aws
