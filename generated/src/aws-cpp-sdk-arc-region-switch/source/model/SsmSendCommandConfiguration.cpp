/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/arc-region-switch/model/SsmSendCommandConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace ARCRegionswitch {
namespace Model {

SsmSendCommandConfiguration::SsmSendCommandConfiguration(JsonView jsonValue) { *this = jsonValue; }

SsmSendCommandConfiguration& SsmSendCommandConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("timeoutMinutes")) {
    m_timeoutMinutes = jsonValue.GetInteger("timeoutMinutes");
    m_timeoutMinutesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("regionDocuments")) {
    Aws::Map<Aws::String, JsonView> regionDocumentsJsonMap = jsonValue.GetObject("regionDocuments").GetAllObjects();
    for (auto& regionDocumentsItem : regionDocumentsJsonMap) {
      m_regionDocuments[regionDocumentsItem.first] = regionDocumentsItem.second.AsObject();
    }
    m_regionDocumentsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("retryIntervalMinutes")) {
    m_retryIntervalMinutes = jsonValue.GetDouble("retryIntervalMinutes");
    m_retryIntervalMinutesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ungraceful")) {
    m_ungraceful = jsonValue.GetObject("ungraceful");
    m_ungracefulHasBeenSet = true;
  }
  return *this;
}

JsonValue SsmSendCommandConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_timeoutMinutesHasBeenSet) {
    payload.WithInteger("timeoutMinutes", m_timeoutMinutes);
  }

  if (m_regionDocumentsHasBeenSet) {
    JsonValue regionDocumentsJsonMap;
    for (auto& regionDocumentsItem : m_regionDocuments) {
      regionDocumentsJsonMap.WithObject(regionDocumentsItem.first, regionDocumentsItem.second.Jsonize());
    }
    payload.WithObject("regionDocuments", std::move(regionDocumentsJsonMap));
  }

  if (m_retryIntervalMinutesHasBeenSet) {
    payload.WithDouble("retryIntervalMinutes", m_retryIntervalMinutes);
  }

  if (m_ungracefulHasBeenSet) {
    payload.WithObject("ungraceful", m_ungraceful.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace ARCRegionswitch
}  // namespace Aws
