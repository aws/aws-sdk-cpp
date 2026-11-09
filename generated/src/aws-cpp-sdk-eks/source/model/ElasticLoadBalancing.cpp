/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/eks/model/ElasticLoadBalancing.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace EKS {
namespace Model {

ElasticLoadBalancing::ElasticLoadBalancing(JsonView jsonValue) { *this = jsonValue; }

ElasticLoadBalancing& ElasticLoadBalancing::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("enabled")) {
    m_enabled = jsonValue.GetBool("enabled");
    m_enabledHasBeenSet = true;
  }
  if (jsonValue.ValueExists("gatewayApi")) {
    m_gatewayApi = jsonValue.GetObject("gatewayApi");
    m_gatewayApiHasBeenSet = true;
  }
  return *this;
}

JsonValue ElasticLoadBalancing::Jsonize() const {
  JsonValue payload;

  if (m_enabledHasBeenSet) {
    payload.WithBool("enabled", m_enabled);
  }

  if (m_gatewayApiHasBeenSet) {
    payload.WithObject("gatewayApi", m_gatewayApi.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace EKS
}  // namespace Aws
