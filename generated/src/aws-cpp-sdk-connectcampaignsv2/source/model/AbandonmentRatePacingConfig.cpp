/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connectcampaignsv2/model/AbandonmentRatePacingConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace ConnectCampaignsV2 {
namespace Model {

AbandonmentRatePacingConfig::AbandonmentRatePacingConfig(JsonView jsonValue) { *this = jsonValue; }

AbandonmentRatePacingConfig& AbandonmentRatePacingConfig::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("targetRate")) {
    m_targetRate = jsonValue.GetDouble("targetRate");
    m_targetRateHasBeenSet = true;
  }
  if (jsonValue.ValueExists("connectionStartPoint")) {
    m_connectionStartPoint = ConnectionStartPointMapper::GetConnectionStartPointForName(jsonValue.GetString("connectionStartPoint"));
    m_connectionStartPointHasBeenSet = true;
  }
  if (jsonValue.ValueExists("connectionThresholdSeconds")) {
    m_connectionThresholdSeconds = jsonValue.GetInteger("connectionThresholdSeconds");
    m_connectionThresholdSecondsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("evaluationWindow")) {
    m_evaluationWindow = jsonValue.GetString("evaluationWindow");
    m_evaluationWindowHasBeenSet = true;
  }
  return *this;
}

JsonValue AbandonmentRatePacingConfig::Jsonize() const {
  JsonValue payload;

  if (m_targetRateHasBeenSet) {
    payload.WithDouble("targetRate", m_targetRate);
  }

  if (m_connectionStartPointHasBeenSet) {
    payload.WithString("connectionStartPoint", ConnectionStartPointMapper::GetNameForConnectionStartPoint(m_connectionStartPoint));
  }

  if (m_connectionThresholdSecondsHasBeenSet) {
    payload.WithInteger("connectionThresholdSeconds", m_connectionThresholdSeconds);
  }

  if (m_evaluationWindowHasBeenSet) {
    payload.WithString("evaluationWindow", m_evaluationWindow);
  }

  return payload;
}

}  // namespace Model
}  // namespace ConnectCampaignsV2
}  // namespace Aws
