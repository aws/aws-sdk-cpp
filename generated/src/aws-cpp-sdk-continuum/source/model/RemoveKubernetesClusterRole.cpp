/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/continuum/model/RemoveKubernetesClusterRole.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Continuum {
namespace Model {

RemoveKubernetesClusterRole::RemoveKubernetesClusterRole(JsonView jsonValue) { *this = jsonValue; }

RemoveKubernetesClusterRole& RemoveKubernetesClusterRole::operator=(JsonView jsonValue) {
  AWS_UNREFERENCED_PARAM(jsonValue);
  return *this;
}

JsonValue RemoveKubernetesClusterRole::Jsonize() const {
  JsonValue payload;

  return payload;
}

}  // namespace Model
}  // namespace Continuum
}  // namespace Aws
