/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/PersistentConnectionConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Connect {
namespace Model {

PersistentConnectionConfig::PersistentConnectionConfig(JsonView jsonValue) { *this = jsonValue; }

PersistentConnectionConfig& PersistentConnectionConfig::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Channel")) {
    m_channel = ChannelMapper::GetChannelForName(jsonValue.GetString("Channel"));
    m_channelHasBeenSet = true;
  }
  if (jsonValue.ValueExists("PersistentConnection")) {
    m_persistentConnection = jsonValue.GetBool("PersistentConnection");
    m_persistentConnectionHasBeenSet = true;
  }
  return *this;
}

JsonValue PersistentConnectionConfig::Jsonize() const {
  JsonValue payload;

  if (m_channelHasBeenSet) {
    payload.WithString("Channel", ChannelMapper::GetNameForChannel(m_channel));
  }

  if (m_persistentConnectionHasBeenSet) {
    payload.WithBool("PersistentConnection", m_persistentConnection);
  }

  return payload;
}

}  // namespace Model
}  // namespace Connect
}  // namespace Aws
