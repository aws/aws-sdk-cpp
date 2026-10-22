/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/continuum/model/KubernetesClusterRoleUpdate.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Continuum {
namespace Model {

KubernetesClusterRoleUpdate::KubernetesClusterRoleUpdate(JsonView jsonValue) { *this = jsonValue; }

KubernetesClusterRoleUpdate& KubernetesClusterRoleUpdate::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("set")) {
    m_set = jsonValue.GetObject("set");
    m_setHasBeenSet = true;
  }
  if (jsonValue.ValueExists("remove")) {
    m_remove = jsonValue.GetObject("remove");
    m_removeHasBeenSet = true;
  }
  return *this;
}

JsonValue KubernetesClusterRoleUpdate::Jsonize() const {
  JsonValue payload;

  if (m_setHasBeenSet) {
    payload.WithObject("set", m_set.Jsonize());
  }

  if (m_removeHasBeenSet) {
    payload.WithObject("remove", m_remove.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace Continuum
}  // namespace Aws
