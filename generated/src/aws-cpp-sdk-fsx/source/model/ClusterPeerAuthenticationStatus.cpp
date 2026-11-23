/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/fsx/model/ClusterPeerAuthenticationStatus.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace FSx {
namespace Model {

ClusterPeerAuthenticationStatus::ClusterPeerAuthenticationStatus(JsonView jsonValue) { *this = jsonValue; }

ClusterPeerAuthenticationStatus& ClusterPeerAuthenticationStatus::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("State")) {
    m_state = jsonValue.GetString("State");
    m_stateHasBeenSet = true;
  }
  if (jsonValue.ValueExists("InUse")) {
    m_inUse = jsonValue.GetString("InUse");
    m_inUseHasBeenSet = true;
  }
  return *this;
}

JsonValue ClusterPeerAuthenticationStatus::Jsonize() const {
  JsonValue payload;

  if (m_stateHasBeenSet) {
    payload.WithString("State", m_state);
  }

  if (m_inUseHasBeenSet) {
    payload.WithString("InUse", m_inUse);
  }

  return payload;
}

}  // namespace Model
}  // namespace FSx
}  // namespace Aws
