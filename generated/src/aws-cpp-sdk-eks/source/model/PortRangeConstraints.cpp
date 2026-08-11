/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/eks/model/PortRangeConstraints.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace EKS {
namespace Model {

PortRangeConstraints::PortRangeConstraints(JsonView jsonValue) { *this = jsonValue; }

PortRangeConstraints& PortRangeConstraints::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("minPort")) {
    m_minPort = jsonValue.GetObject("minPort");
    m_minPortHasBeenSet = true;
  }
  if (jsonValue.ValueExists("maxPort")) {
    m_maxPort = jsonValue.GetObject("maxPort");
    m_maxPortHasBeenSet = true;
  }
  return *this;
}

JsonValue PortRangeConstraints::Jsonize() const {
  JsonValue payload;

  if (m_minPortHasBeenSet) {
    payload.WithObject("minPort", m_minPort.Jsonize());
  }

  if (m_maxPortHasBeenSet) {
    payload.WithObject("maxPort", m_maxPort.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace EKS
}  // namespace Aws
