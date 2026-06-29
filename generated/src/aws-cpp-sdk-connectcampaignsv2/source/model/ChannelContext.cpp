/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connectcampaignsv2/model/ChannelContext.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace ConnectCampaignsV2 {
namespace Model {

ChannelContext::ChannelContext(JsonView jsonValue) { *this = jsonValue; }

ChannelContext& ChannelContext::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("webNotificationContext")) {
    m_webNotificationContext = jsonValue.GetObject("webNotificationContext");
    m_webNotificationContextHasBeenSet = true;
  }
  return *this;
}

JsonValue ChannelContext::Jsonize() const {
  JsonValue payload;

  if (m_webNotificationContextHasBeenSet) {
    payload.WithObject("webNotificationContext", m_webNotificationContext.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace ConnectCampaignsV2
}  // namespace Aws
