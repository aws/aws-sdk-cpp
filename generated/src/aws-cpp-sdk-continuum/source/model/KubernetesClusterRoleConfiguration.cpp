/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/continuum/model/KubernetesClusterRoleConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Continuum {
namespace Model {

KubernetesClusterRoleConfiguration::KubernetesClusterRoleConfiguration(JsonView jsonValue) { *this = jsonValue; }

KubernetesClusterRoleConfiguration& KubernetesClusterRoleConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("roleArn")) {
    m_roleArn = jsonValue.GetString("roleArn");
    m_roleArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("externalId")) {
    m_externalId = jsonValue.GetString("externalId");
    m_externalIdHasBeenSet = true;
  }
  return *this;
}

JsonValue KubernetesClusterRoleConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_roleArnHasBeenSet) {
    payload.WithString("roleArn", m_roleArn);
  }

  if (m_externalIdHasBeenSet) {
    payload.WithString("externalId", m_externalId);
  }

  return payload;
}

}  // namespace Model
}  // namespace Continuum
}  // namespace Aws
