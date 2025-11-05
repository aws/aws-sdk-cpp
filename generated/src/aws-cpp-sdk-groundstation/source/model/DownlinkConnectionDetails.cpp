/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/groundstation/model/DownlinkConnectionDetails.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace GroundStation {
namespace Model {

DownlinkConnectionDetails::DownlinkConnectionDetails(JsonView jsonValue) { *this = jsonValue; }

DownlinkConnectionDetails& DownlinkConnectionDetails::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("agentIpAndPortAddress")) {
    m_agentIpAndPortAddress = jsonValue.GetObject("agentIpAndPortAddress");
    m_agentIpAndPortAddressHasBeenSet = true;
  }
  if (jsonValue.ValueExists("egressAddressAndPort")) {
    m_egressAddressAndPort = jsonValue.GetObject("egressAddressAndPort");
    m_egressAddressAndPortHasBeenSet = true;
  }
  return *this;
}

JsonValue DownlinkConnectionDetails::Jsonize() const {
  JsonValue payload;

  if (m_agentIpAndPortAddressHasBeenSet) {
    payload.WithObject("agentIpAndPortAddress", m_agentIpAndPortAddress.Jsonize());
  }

  if (m_egressAddressAndPortHasBeenSet) {
    payload.WithObject("egressAddressAndPort", m_egressAddressAndPort.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace GroundStation
}  // namespace Aws
