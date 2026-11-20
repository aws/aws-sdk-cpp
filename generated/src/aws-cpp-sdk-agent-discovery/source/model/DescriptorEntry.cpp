/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/agent-discovery/model/DescriptorEntry.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace AgentDiscovery {
namespace Model {

DescriptorEntry::DescriptorEntry(JsonView jsonValue) { *this = jsonValue; }

DescriptorEntry& DescriptorEntry::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("data")) {
    m_data = jsonValue.GetString("data");
    m_dataHasBeenSet = true;
  }
  if (jsonValue.ValueExists("version")) {
    m_version = jsonValue.GetString("version");
    m_versionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("source")) {
    m_source = jsonValue.GetObject("source");
    m_sourceHasBeenSet = true;
  }
  if (jsonValue.ValueExists("additionalData")) {
    Aws::Map<Aws::String, JsonView> additionalDataJsonMap = jsonValue.GetObject("additionalData").GetAllObjects();
    for (auto& additionalDataItem : additionalDataJsonMap) {
      m_additionalData[additionalDataItem.first] = additionalDataItem.second.AsObject();
    }
    m_additionalDataHasBeenSet = true;
  }
  return *this;
}

JsonValue DescriptorEntry::Jsonize() const {
  JsonValue payload;

  if (m_dataHasBeenSet) {
    payload.WithString("data", m_data);
  }

  if (m_versionHasBeenSet) {
    payload.WithString("version", m_version);
  }

  if (m_sourceHasBeenSet) {
    payload.WithObject("source", m_source.Jsonize());
  }

  if (m_additionalDataHasBeenSet) {
    JsonValue additionalDataJsonMap;
    for (auto& additionalDataItem : m_additionalData) {
      additionalDataJsonMap.WithObject(additionalDataItem.first, additionalDataItem.second.Jsonize());
    }
    payload.WithObject("additionalData", std::move(additionalDataJsonMap));
  }

  return payload;
}

}  // namespace Model
}  // namespace AgentDiscovery
}  // namespace Aws
