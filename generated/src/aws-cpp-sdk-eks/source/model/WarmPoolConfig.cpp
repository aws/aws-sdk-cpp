/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/eks/model/WarmPoolConfig.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace EKS {
namespace Model {

WarmPoolConfig::WarmPoolConfig(JsonView jsonValue) { *this = jsonValue; }

WarmPoolConfig& WarmPoolConfig::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("enabled")) {
    m_enabled = jsonValue.GetBool("enabled");
    m_enabledHasBeenSet = true;
  }
  if (jsonValue.ValueExists("minSize")) {
    m_minSize = jsonValue.GetInteger("minSize");
    m_minSizeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("maxGroupPreparedCapacity")) {
    m_maxGroupPreparedCapacity = jsonValue.GetInteger("maxGroupPreparedCapacity");
    m_maxGroupPreparedCapacityHasBeenSet = true;
  }
  if (jsonValue.ValueExists("poolState")) {
    m_poolState = WarmPoolStateMapper::GetWarmPoolStateForName(jsonValue.GetString("poolState"));
    m_poolStateHasBeenSet = true;
  }
  if (jsonValue.ValueExists("reuseOnScaleIn")) {
    m_reuseOnScaleIn = jsonValue.GetBool("reuseOnScaleIn");
    m_reuseOnScaleInHasBeenSet = true;
  }
  return *this;
}

JsonValue WarmPoolConfig::Jsonize() const {
  JsonValue payload;

  if (m_enabledHasBeenSet) {
    payload.WithBool("enabled", m_enabled);
  }

  if (m_minSizeHasBeenSet) {
    payload.WithInteger("minSize", m_minSize);
  }

  if (m_maxGroupPreparedCapacityHasBeenSet) {
    payload.WithInteger("maxGroupPreparedCapacity", m_maxGroupPreparedCapacity);
  }

  if (m_poolStateHasBeenSet) {
    payload.WithString("poolState", WarmPoolStateMapper::GetNameForWarmPoolState(m_poolState));
  }

  if (m_reuseOnScaleInHasBeenSet) {
    payload.WithBool("reuseOnScaleIn", m_reuseOnScaleIn);
  }

  return payload;
}

}  // namespace Model
}  // namespace EKS
}  // namespace Aws
