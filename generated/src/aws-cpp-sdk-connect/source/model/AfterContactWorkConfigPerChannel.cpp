/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/AfterContactWorkConfigPerChannel.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Connect {
namespace Model {

AfterContactWorkConfigPerChannel::AfterContactWorkConfigPerChannel(JsonView jsonValue) { *this = jsonValue; }

AfterContactWorkConfigPerChannel& AfterContactWorkConfigPerChannel::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Channel")) {
    m_channel = ChannelMapper::GetChannelForName(jsonValue.GetString("Channel"));
    m_channelHasBeenSet = true;
  }
  if (jsonValue.ValueExists("AfterContactWorkConfig")) {
    m_afterContactWorkConfig = jsonValue.GetObject("AfterContactWorkConfig");
    m_afterContactWorkConfigHasBeenSet = true;
  }
  if (jsonValue.ValueExists("AgentFirstCallbackAfterContactWorkConfig")) {
    m_agentFirstCallbackAfterContactWorkConfig = jsonValue.GetObject("AgentFirstCallbackAfterContactWorkConfig");
    m_agentFirstCallbackAfterContactWorkConfigHasBeenSet = true;
  }
  return *this;
}

JsonValue AfterContactWorkConfigPerChannel::Jsonize() const {
  JsonValue payload;

  if (m_channelHasBeenSet) {
    payload.WithString("Channel", ChannelMapper::GetNameForChannel(m_channel));
  }

  if (m_afterContactWorkConfigHasBeenSet) {
    payload.WithObject("AfterContactWorkConfig", m_afterContactWorkConfig.Jsonize());
  }

  if (m_agentFirstCallbackAfterContactWorkConfigHasBeenSet) {
    payload.WithObject("AgentFirstCallbackAfterContactWorkConfig", m_agentFirstCallbackAfterContactWorkConfig.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace Connect
}  // namespace Aws
