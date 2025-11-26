/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/cost-optimization-hub/model/NatGatewayConfiguration.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace CostOptimizationHub {
namespace Model {

NatGatewayConfiguration::NatGatewayConfiguration(JsonView jsonValue) { *this = jsonValue; }

NatGatewayConfiguration& NatGatewayConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("activeConnectionCount")) {
    m_activeConnectionCount = jsonValue.GetInt64("activeConnectionCount");
    m_activeConnectionCountHasBeenSet = true;
  }
  if (jsonValue.ValueExists("packetsInFromSource")) {
    m_packetsInFromSource = jsonValue.GetInt64("packetsInFromSource");
    m_packetsInFromSourceHasBeenSet = true;
  }
  if (jsonValue.ValueExists("packetsInFromDestination")) {
    m_packetsInFromDestination = jsonValue.GetInt64("packetsInFromDestination");
    m_packetsInFromDestinationHasBeenSet = true;
  }
  return *this;
}

JsonValue NatGatewayConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_activeConnectionCountHasBeenSet) {
    payload.WithInt64("activeConnectionCount", m_activeConnectionCount);
  }

  if (m_packetsInFromSourceHasBeenSet) {
    payload.WithInt64("packetsInFromSource", m_packetsInFromSource);
  }

  if (m_packetsInFromDestinationHasBeenSet) {
    payload.WithInt64("packetsInFromDestination", m_packetsInFromDestination);
  }

  return payload;
}

}  // namespace Model
}  // namespace CostOptimizationHub
}  // namespace Aws
