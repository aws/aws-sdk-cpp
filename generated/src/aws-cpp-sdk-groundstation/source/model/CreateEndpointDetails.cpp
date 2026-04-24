/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/groundstation/model/CreateEndpointDetails.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace GroundStation {
namespace Model {

CreateEndpointDetails::CreateEndpointDetails(JsonView jsonValue) { *this = jsonValue; }

CreateEndpointDetails& CreateEndpointDetails::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("uplinkAwsGroundStationAgentEndpoint")) {
    m_uplinkAwsGroundStationAgentEndpoint = jsonValue.GetObject("uplinkAwsGroundStationAgentEndpoint");
    m_uplinkAwsGroundStationAgentEndpointHasBeenSet = true;
  }
  if (jsonValue.ValueExists("downlinkAwsGroundStationAgentEndpoint")) {
    m_downlinkAwsGroundStationAgentEndpoint = jsonValue.GetObject("downlinkAwsGroundStationAgentEndpoint");
    m_downlinkAwsGroundStationAgentEndpointHasBeenSet = true;
  }
  return *this;
}

JsonValue CreateEndpointDetails::Jsonize() const {
  JsonValue payload;

  if (m_uplinkAwsGroundStationAgentEndpointHasBeenSet) {
    payload.WithObject("uplinkAwsGroundStationAgentEndpoint", m_uplinkAwsGroundStationAgentEndpoint.Jsonize());
  }

  if (m_downlinkAwsGroundStationAgentEndpointHasBeenSet) {
    payload.WithObject("downlinkAwsGroundStationAgentEndpoint", m_downlinkAwsGroundStationAgentEndpoint.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace GroundStation
}  // namespace Aws
