/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connectcampaignsv2/model/EntryLimitsConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace ConnectCampaignsV2 {
namespace Model {

EntryLimitsConfig::EntryLimitsConfig(JsonView jsonValue) { *this = jsonValue; }

EntryLimitsConfig& EntryLimitsConfig::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("maxEntryCount")) {
    m_maxEntryCount = jsonValue.GetInteger("maxEntryCount");
    m_maxEntryCountHasBeenSet = true;
  }
  if (jsonValue.ValueExists("minEntryInterval")) {
    m_minEntryInterval = jsonValue.GetString("minEntryInterval");
    m_minEntryIntervalHasBeenSet = true;
  }
  return *this;
}

JsonValue EntryLimitsConfig::Jsonize() const {
  JsonValue payload;

  if (m_maxEntryCountHasBeenSet) {
    payload.WithInteger("maxEntryCount", m_maxEntryCount);
  }

  if (m_minEntryIntervalHasBeenSet) {
    payload.WithString("minEntryInterval", m_minEntryInterval);
  }

  return payload;
}

}  // namespace Model
}  // namespace ConnectCampaignsV2
}  // namespace Aws
