/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/CrossChannelWorkloadBehavior.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Connect {
namespace Model {

CrossChannelWorkloadBehavior::CrossChannelWorkloadBehavior(JsonView jsonValue) { *this = jsonValue; }

CrossChannelWorkloadBehavior& CrossChannelWorkloadBehavior::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("ChannelWorkloadBehaviorType")) {
    m_channelWorkloadBehaviorType =
        ChannelWorkloadBehaviorTypeMapper::GetChannelWorkloadBehaviorTypeForName(jsonValue.GetString("ChannelWorkloadBehaviorType"));
    m_channelWorkloadBehaviorTypeHasBeenSet = true;
  }
  return *this;
}

JsonValue CrossChannelWorkloadBehavior::Jsonize() const {
  JsonValue payload;

  if (m_channelWorkloadBehaviorTypeHasBeenSet) {
    payload.WithString("ChannelWorkloadBehaviorType",
                       ChannelWorkloadBehaviorTypeMapper::GetNameForChannelWorkloadBehaviorType(m_channelWorkloadBehaviorType));
  }

  return payload;
}

}  // namespace Model
}  // namespace Connect
}  // namespace Aws
