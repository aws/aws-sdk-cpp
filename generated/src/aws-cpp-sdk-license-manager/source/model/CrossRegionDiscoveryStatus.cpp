/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/license-manager/model/CrossRegionDiscoveryStatus.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace LicenseManager {
namespace Model {

CrossRegionDiscoveryStatus::CrossRegionDiscoveryStatus(JsonView jsonValue) { *this = jsonValue; }

CrossRegionDiscoveryStatus& CrossRegionDiscoveryStatus::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Message")) {
    Aws::Map<Aws::String, JsonView> messageJsonMap = jsonValue.GetObject("Message").GetAllObjects();
    for (auto& messageItem : messageJsonMap) {
      m_message[messageItem.first] = messageItem.second.AsObject();
    }
    m_messageHasBeenSet = true;
  }
  return *this;
}

JsonValue CrossRegionDiscoveryStatus::Jsonize() const {
  JsonValue payload;

  if (m_messageHasBeenSet) {
    JsonValue messageJsonMap;
    for (auto& messageItem : m_message) {
      messageJsonMap.WithObject(messageItem.first, messageItem.second.Jsonize());
    }
    payload.WithObject("Message", std::move(messageJsonMap));
  }

  return payload;
}

}  // namespace Model
}  // namespace LicenseManager
}  // namespace Aws
