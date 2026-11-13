/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/guardduty/model/NetworkAnomaly.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace GuardDuty {
namespace Model {

NetworkAnomaly::NetworkAnomaly(JsonView jsonValue) { *this = jsonValue; }

NetworkAnomaly& NetworkAnomaly::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("baselineBytes")) {
    m_baselineBytes = jsonValue.GetString("baselineBytes");
    m_baselineBytesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("deviation")) {
    m_deviation = jsonValue.GetString("deviation");
    m_deviationHasBeenSet = true;
  }
  if (jsonValue.ValueExists("profileAgeDays")) {
    m_profileAgeDays = jsonValue.GetInteger("profileAgeDays");
    m_profileAgeDaysHasBeenSet = true;
  }
  if (jsonValue.ValueExists("remoteService")) {
    m_remoteService = jsonValue.GetString("remoteService");
    m_remoteServiceHasBeenSet = true;
  }
  if (jsonValue.ValueExists("remoteRegion")) {
    m_remoteRegion = jsonValue.GetString("remoteRegion");
    m_remoteRegionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("duration")) {
    m_duration = jsonValue.GetString("duration");
    m_durationHasBeenSet = true;
  }
  if (jsonValue.ValueExists("resetRatio")) {
    m_resetRatio = jsonValue.GetString("resetRatio");
    m_resetRatioHasBeenSet = true;
  }
  if (jsonValue.ValueExists("targetHostCount")) {
    m_targetHostCount = jsonValue.GetInt64("targetHostCount");
    m_targetHostCountHasBeenSet = true;
  }
  return *this;
}

JsonValue NetworkAnomaly::Jsonize() const {
  JsonValue payload;

  if (m_baselineBytesHasBeenSet) {
    payload.WithString("baselineBytes", m_baselineBytes);
  }

  if (m_deviationHasBeenSet) {
    payload.WithString("deviation", m_deviation);
  }

  if (m_profileAgeDaysHasBeenSet) {
    payload.WithInteger("profileAgeDays", m_profileAgeDays);
  }

  if (m_remoteServiceHasBeenSet) {
    payload.WithString("remoteService", m_remoteService);
  }

  if (m_remoteRegionHasBeenSet) {
    payload.WithString("remoteRegion", m_remoteRegion);
  }

  if (m_durationHasBeenSet) {
    payload.WithString("duration", m_duration);
  }

  if (m_resetRatioHasBeenSet) {
    payload.WithString("resetRatio", m_resetRatio);
  }

  if (m_targetHostCountHasBeenSet) {
    payload.WithInt64("targetHostCount", m_targetHostCount);
  }

  return payload;
}

}  // namespace Model
}  // namespace GuardDuty
}  // namespace Aws
