/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/groundstation/model/UplinkDataflowDetails.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace GroundStation {
namespace Model {

UplinkDataflowDetails::UplinkDataflowDetails(JsonView jsonValue) { *this = jsonValue; }

UplinkDataflowDetails& UplinkDataflowDetails::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("agentConnectionDetails")) {
    m_agentConnectionDetails = jsonValue.GetObject("agentConnectionDetails");
    m_agentConnectionDetailsHasBeenSet = true;
  }
  return *this;
}

JsonValue UplinkDataflowDetails::Jsonize() const {
  JsonValue payload;

  if (m_agentConnectionDetailsHasBeenSet) {
    payload.WithObject("agentConnectionDetails", m_agentConnectionDetails.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace GroundStation
}  // namespace Aws
