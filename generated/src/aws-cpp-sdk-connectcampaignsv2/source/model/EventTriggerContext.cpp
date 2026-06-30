/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connectcampaignsv2/model/EventTriggerContext.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace ConnectCampaignsV2 {
namespace Model {

EventTriggerContext::EventTriggerContext(JsonView jsonValue) { *this = jsonValue; }

EventTriggerContext& EventTriggerContext::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("sourceEvent")) {
    m_sourceEvent = jsonValue.GetString("sourceEvent");
    m_sourceEventHasBeenSet = true;
  }
  if (jsonValue.ValueExists("channelContext")) {
    m_channelContext = jsonValue.GetObject("channelContext");
    m_channelContextHasBeenSet = true;
  }
  return *this;
}

JsonValue EventTriggerContext::Jsonize() const {
  JsonValue payload;

  if (m_sourceEventHasBeenSet) {
    payload.WithString("sourceEvent", m_sourceEvent);
  }

  if (m_channelContextHasBeenSet) {
    payload.WithObject("channelContext", m_channelContext.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace ConnectCampaignsV2
}  // namespace Aws
