/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/groundstation/model/UplinkAwsGroundStationAgentEndpoint.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace GroundStation {
namespace Model {

UplinkAwsGroundStationAgentEndpoint::UplinkAwsGroundStationAgentEndpoint(JsonView jsonValue) { *this = jsonValue; }

UplinkAwsGroundStationAgentEndpoint& UplinkAwsGroundStationAgentEndpoint::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("name")) {
    m_name = jsonValue.GetString("name");
    m_nameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("dataflowDetails")) {
    m_dataflowDetails = jsonValue.GetObject("dataflowDetails");
    m_dataflowDetailsHasBeenSet = true;
  }
  return *this;
}

JsonValue UplinkAwsGroundStationAgentEndpoint::Jsonize() const {
  JsonValue payload;

  if (m_nameHasBeenSet) {
    payload.WithString("name", m_name);
  }

  if (m_dataflowDetailsHasBeenSet) {
    payload.WithObject("dataflowDetails", m_dataflowDetails.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace GroundStation
}  // namespace Aws
