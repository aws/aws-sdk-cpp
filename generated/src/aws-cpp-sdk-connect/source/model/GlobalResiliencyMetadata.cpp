/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/GlobalResiliencyMetadata.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Connect {
namespace Model {

GlobalResiliencyMetadata::GlobalResiliencyMetadata(JsonView jsonValue) { *this = jsonValue; }

GlobalResiliencyMetadata& GlobalResiliencyMetadata::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("ActiveRegion")) {
    m_activeRegion = jsonValue.GetString("ActiveRegion");
    m_activeRegionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("OriginRegion")) {
    m_originRegion = jsonValue.GetString("OriginRegion");
    m_originRegionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("TrafficDistributionGroupId")) {
    m_trafficDistributionGroupId = jsonValue.GetString("TrafficDistributionGroupId");
    m_trafficDistributionGroupIdHasBeenSet = true;
  }
  return *this;
}

JsonValue GlobalResiliencyMetadata::Jsonize() const {
  JsonValue payload;

  if (m_activeRegionHasBeenSet) {
    payload.WithString("ActiveRegion", m_activeRegion);
  }

  if (m_originRegionHasBeenSet) {
    payload.WithString("OriginRegion", m_originRegion);
  }

  if (m_trafficDistributionGroupIdHasBeenSet) {
    payload.WithString("TrafficDistributionGroupId", m_trafficDistributionGroupId);
  }

  return payload;
}

}  // namespace Model
}  // namespace Connect
}  // namespace Aws
