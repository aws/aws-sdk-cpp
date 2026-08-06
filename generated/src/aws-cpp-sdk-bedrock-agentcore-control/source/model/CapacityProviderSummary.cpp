/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore-control/model/CapacityProviderSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCoreControl {
namespace Model {

CapacityProviderSummary::CapacityProviderSummary(JsonView jsonValue) { *this = jsonValue; }

CapacityProviderSummary& CapacityProviderSummary::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("capacityProviderId")) {
    m_capacityProviderId = jsonValue.GetString("capacityProviderId");
    m_capacityProviderIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("capacityProviderArn")) {
    m_capacityProviderArn = jsonValue.GetString("capacityProviderArn");
    m_capacityProviderArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("name")) {
    m_name = jsonValue.GetString("name");
    m_nameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("status")) {
    m_status = CapacityProviderStatusMapper::GetCapacityProviderStatusForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("lastUpdatedAt")) {
    m_lastUpdatedAt = jsonValue.GetDouble("lastUpdatedAt");
    m_lastUpdatedAtHasBeenSet = true;
  }
  return *this;
}

JsonValue CapacityProviderSummary::Jsonize() const {
  JsonValue payload;

  if (m_capacityProviderIdHasBeenSet) {
    payload.WithString("capacityProviderId", m_capacityProviderId);
  }

  if (m_capacityProviderArnHasBeenSet) {
    payload.WithString("capacityProviderArn", m_capacityProviderArn);
  }

  if (m_nameHasBeenSet) {
    payload.WithString("name", m_name);
  }

  if (m_statusHasBeenSet) {
    payload.WithString("status", CapacityProviderStatusMapper::GetNameForCapacityProviderStatus(m_status));
  }

  if (m_lastUpdatedAtHasBeenSet) {
    payload.WithDouble("lastUpdatedAt", m_lastUpdatedAt.SecondsWithMSPrecision());
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
