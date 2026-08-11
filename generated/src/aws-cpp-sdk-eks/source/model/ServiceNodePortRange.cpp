/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/eks/model/ServiceNodePortRange.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace EKS {
namespace Model {

ServiceNodePortRange::ServiceNodePortRange(JsonView jsonValue) { *this = jsonValue; }

ServiceNodePortRange& ServiceNodePortRange::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("minPort")) {
    m_minPort = jsonValue.GetInteger("minPort");
    m_minPortHasBeenSet = true;
  }
  if (jsonValue.ValueExists("maxPort")) {
    m_maxPort = jsonValue.GetInteger("maxPort");
    m_maxPortHasBeenSet = true;
  }
  return *this;
}

JsonValue ServiceNodePortRange::Jsonize() const {
  JsonValue payload;

  if (m_minPortHasBeenSet) {
    payload.WithInteger("minPort", m_minPort);
  }

  if (m_maxPortHasBeenSet) {
    payload.WithInteger("maxPort", m_maxPort);
  }

  return payload;
}

}  // namespace Model
}  // namespace EKS
}  // namespace Aws
