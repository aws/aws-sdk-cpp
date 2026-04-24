/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/groundstation/model/UplinkConnectionDetails.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace GroundStation {
namespace Model {

UplinkConnectionDetails::UplinkConnectionDetails(JsonView jsonValue) { *this = jsonValue; }

UplinkConnectionDetails& UplinkConnectionDetails::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("ingressAddressAndPort")) {
    m_ingressAddressAndPort = jsonValue.GetObject("ingressAddressAndPort");
    m_ingressAddressAndPortHasBeenSet = true;
  }
  if (jsonValue.ValueExists("agentIpAndPortAddress")) {
    m_agentIpAndPortAddress = jsonValue.GetObject("agentIpAndPortAddress");
    m_agentIpAndPortAddressHasBeenSet = true;
  }
  return *this;
}

JsonValue UplinkConnectionDetails::Jsonize() const {
  JsonValue payload;

  if (m_ingressAddressAndPortHasBeenSet) {
    payload.WithObject("ingressAddressAndPort", m_ingressAddressAndPort.Jsonize());
  }

  if (m_agentIpAndPortAddressHasBeenSet) {
    payload.WithObject("agentIpAndPortAddress", m_agentIpAndPortAddress.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace GroundStation
}  // namespace Aws
