/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/datazone/model/NotificationConfig.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace DataZone {
namespace Model {

NotificationConfig::NotificationConfig(JsonView jsonValue) { *this = jsonValue; }

NotificationConfig& NotificationConfig::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("notifyOn")) {
    Aws::Utils::Array<JsonView> notifyOnJsonList = jsonValue.GetArray("notifyOn");
    for (unsigned notifyOnIndex = 0; notifyOnIndex < notifyOnJsonList.GetLength(); ++notifyOnIndex) {
      m_notifyOn.push_back(NotifyOnStateMapper::GetNotifyOnStateForName(notifyOnJsonList[notifyOnIndex].AsString()));
    }
    m_notifyOnHasBeenSet = true;
  }
  return *this;
}

JsonValue NotificationConfig::Jsonize() const {
  JsonValue payload;

  if (m_notifyOnHasBeenSet) {
    Aws::Utils::Array<JsonValue> notifyOnJsonList(m_notifyOn.size());
    for (unsigned notifyOnIndex = 0; notifyOnIndex < notifyOnJsonList.GetLength(); ++notifyOnIndex) {
      notifyOnJsonList[notifyOnIndex].AsString(NotifyOnStateMapper::GetNameForNotifyOnState(m_notifyOn[notifyOnIndex]));
    }
    payload.WithArray("notifyOn", std::move(notifyOnJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace DataZone
}  // namespace Aws
