/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/ivs/model/AdConfiguration.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace IVS {
namespace Model {

AdConfiguration::AdConfiguration(JsonView jsonValue) { *this = jsonValue; }

AdConfiguration& AdConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("arn")) {
    m_arn = jsonValue.GetString("arn");
    m_arnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("name")) {
    m_name = jsonValue.GetString("name");
    m_nameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("mediaTailorPlaybackConfigurations")) {
    Aws::Utils::Array<JsonView> mediaTailorPlaybackConfigurationsJsonList = jsonValue.GetArray("mediaTailorPlaybackConfigurations");
    for (unsigned mediaTailorPlaybackConfigurationsIndex = 0;
         mediaTailorPlaybackConfigurationsIndex < mediaTailorPlaybackConfigurationsJsonList.GetLength();
         ++mediaTailorPlaybackConfigurationsIndex) {
      m_mediaTailorPlaybackConfigurations.push_back(
          mediaTailorPlaybackConfigurationsJsonList[mediaTailorPlaybackConfigurationsIndex].AsObject());
    }
    m_mediaTailorPlaybackConfigurationsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("tags")) {
    Aws::Map<Aws::String, JsonView> tagsJsonMap = jsonValue.GetObject("tags").GetAllObjects();
    for (auto& tagsItem : tagsJsonMap) {
      m_tags[tagsItem.first] = tagsItem.second.AsString();
    }
    m_tagsHasBeenSet = true;
  }
  return *this;
}

JsonValue AdConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_arnHasBeenSet) {
    payload.WithString("arn", m_arn);
  }

  if (m_nameHasBeenSet) {
    payload.WithString("name", m_name);
  }

  if (m_mediaTailorPlaybackConfigurationsHasBeenSet) {
    Aws::Utils::Array<JsonValue> mediaTailorPlaybackConfigurationsJsonList(m_mediaTailorPlaybackConfigurations.size());
    for (unsigned mediaTailorPlaybackConfigurationsIndex = 0;
         mediaTailorPlaybackConfigurationsIndex < mediaTailorPlaybackConfigurationsJsonList.GetLength();
         ++mediaTailorPlaybackConfigurationsIndex) {
      mediaTailorPlaybackConfigurationsJsonList[mediaTailorPlaybackConfigurationsIndex].AsObject(
          m_mediaTailorPlaybackConfigurations[mediaTailorPlaybackConfigurationsIndex].Jsonize());
    }
    payload.WithArray("mediaTailorPlaybackConfigurations", std::move(mediaTailorPlaybackConfigurationsJsonList));
  }

  if (m_tagsHasBeenSet) {
    JsonValue tagsJsonMap;
    for (auto& tagsItem : m_tags) {
      tagsJsonMap.WithString(tagsItem.first, tagsItem.second);
    }
    payload.WithObject("tags", std::move(tagsJsonMap));
  }

  return payload;
}

}  // namespace Model
}  // namespace IVS
}  // namespace Aws
