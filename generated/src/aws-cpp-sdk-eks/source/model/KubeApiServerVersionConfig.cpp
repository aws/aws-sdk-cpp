/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/eks/model/KubeApiServerVersionConfig.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace EKS {
namespace Model {

KubeApiServerVersionConfig::KubeApiServerVersionConfig(JsonView jsonValue) { *this = jsonValue; }

KubeApiServerVersionConfig& KubeApiServerVersionConfig::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("eventTtl")) {
    m_eventTtl = jsonValue.GetObject("eventTtl");
    m_eventTtlHasBeenSet = true;
  }
  if (jsonValue.ValueExists("serviceNodePortRange")) {
    m_serviceNodePortRange = jsonValue.GetObject("serviceNodePortRange");
    m_serviceNodePortRangeHasBeenSet = true;
  }
  return *this;
}

JsonValue KubeApiServerVersionConfig::Jsonize() const {
  JsonValue payload;

  if (m_eventTtlHasBeenSet) {
    payload.WithObject("eventTtl", m_eventTtl.Jsonize());
  }

  if (m_serviceNodePortRangeHasBeenSet) {
    payload.WithObject("serviceNodePortRange", m_serviceNodePortRange.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace EKS
}  // namespace Aws
