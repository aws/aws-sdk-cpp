/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/eks/model/KubeApiServerConfigResponse.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace EKS {
namespace Model {

KubeApiServerConfigResponse::KubeApiServerConfigResponse(JsonView jsonValue) { *this = jsonValue; }

KubeApiServerConfigResponse& KubeApiServerConfigResponse::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("eventTtl")) {
    m_eventTtl = jsonValue.GetString("eventTtl");
    m_eventTtlHasBeenSet = true;
  }
  if (jsonValue.ValueExists("serviceNodePortRange")) {
    m_serviceNodePortRange = jsonValue.GetObject("serviceNodePortRange");
    m_serviceNodePortRangeHasBeenSet = true;
  }
  return *this;
}

JsonValue KubeApiServerConfigResponse::Jsonize() const {
  JsonValue payload;

  if (m_eventTtlHasBeenSet) {
    payload.WithString("eventTtl", m_eventTtl);
  }

  if (m_serviceNodePortRangeHasBeenSet) {
    payload.WithObject("serviceNodePortRange", m_serviceNodePortRange.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace EKS
}  // namespace Aws
