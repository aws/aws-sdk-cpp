/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/health/model/ServiceLifecycle.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Health {
namespace Model {

ServiceLifecycle::ServiceLifecycle(JsonView jsonValue) { *this = jsonValue; }

ServiceLifecycle& ServiceLifecycle::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("service")) {
    m_service = jsonValue.GetString("service");
    m_serviceHasBeenSet = true;
  }
  if (jsonValue.ValueExists("version")) {
    m_version = jsonValue.GetString("version");
    m_versionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("title")) {
    m_title = jsonValue.GetString("title");
    m_titleHasBeenSet = true;
  }
  if (jsonValue.ValueExists("recommendedVersion")) {
    m_recommendedVersion = jsonValue.GetString("recommendedVersion");
    m_recommendedVersionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("lifecycleEvents")) {
    Aws::Utils::Array<JsonView> lifecycleEventsJsonList = jsonValue.GetArray("lifecycleEvents");
    for (unsigned lifecycleEventsIndex = 0; lifecycleEventsIndex < lifecycleEventsJsonList.GetLength(); ++lifecycleEventsIndex) {
      m_lifecycleEvents.push_back(lifecycleEventsJsonList[lifecycleEventsIndex].AsObject());
    }
    m_lifecycleEventsHasBeenSet = true;
  }
  return *this;
}

JsonValue ServiceLifecycle::Jsonize() const {
  JsonValue payload;

  if (m_serviceHasBeenSet) {
    payload.WithString("service", m_service);
  }

  if (m_versionHasBeenSet) {
    payload.WithString("version", m_version);
  }

  if (m_titleHasBeenSet) {
    payload.WithString("title", m_title);
  }

  if (m_recommendedVersionHasBeenSet) {
    payload.WithString("recommendedVersion", m_recommendedVersion);
  }

  if (m_lifecycleEventsHasBeenSet) {
    Aws::Utils::Array<JsonValue> lifecycleEventsJsonList(m_lifecycleEvents.size());
    for (unsigned lifecycleEventsIndex = 0; lifecycleEventsIndex < lifecycleEventsJsonList.GetLength(); ++lifecycleEventsIndex) {
      lifecycleEventsJsonList[lifecycleEventsIndex].AsObject(m_lifecycleEvents[lifecycleEventsIndex].Jsonize());
    }
    payload.WithArray("lifecycleEvents", std::move(lifecycleEventsJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace Health
}  // namespace Aws
