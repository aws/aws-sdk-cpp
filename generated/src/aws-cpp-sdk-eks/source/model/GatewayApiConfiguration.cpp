/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/eks/model/GatewayApiConfiguration.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace EKS {
namespace Model {

GatewayApiConfiguration::GatewayApiConfiguration(JsonView jsonValue) { *this = jsonValue; }

GatewayApiConfiguration& GatewayApiConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("crds")) {
    m_crds = jsonValue.GetObject("crds");
    m_crdsHasBeenSet = true;
  }
  return *this;
}

JsonValue GatewayApiConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_crdsHasBeenSet) {
    payload.WithObject("crds", m_crds.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace EKS
}  // namespace Aws
