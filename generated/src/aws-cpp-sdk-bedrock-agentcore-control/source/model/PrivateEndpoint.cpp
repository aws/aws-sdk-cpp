/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore-control/model/PrivateEndpoint.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCoreControl {
namespace Model {

PrivateEndpoint::PrivateEndpoint(JsonView jsonValue) { *this = jsonValue; }

PrivateEndpoint& PrivateEndpoint::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("selfManagedLatticeResource")) {
    m_selfManagedLatticeResource = jsonValue.GetObject("selfManagedLatticeResource");
    m_selfManagedLatticeResourceHasBeenSet = true;
  }
  if (jsonValue.ValueExists("managedVpcResource")) {
    m_managedVpcResource = jsonValue.GetObject("managedVpcResource");
    m_managedVpcResourceHasBeenSet = true;
  }
  return *this;
}

JsonValue PrivateEndpoint::Jsonize() const {
  JsonValue payload;

  if (m_selfManagedLatticeResourceHasBeenSet) {
    payload.WithObject("selfManagedLatticeResource", m_selfManagedLatticeResource.Jsonize());
  }

  if (m_managedVpcResourceHasBeenSet) {
    payload.WithObject("managedVpcResource", m_managedVpcResource.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
