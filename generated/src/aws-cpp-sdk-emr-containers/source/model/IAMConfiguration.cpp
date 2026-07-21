/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/emr-containers/model/IAMConfiguration.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace EMRContainers {
namespace Model {

IAMConfiguration::IAMConfiguration(JsonView jsonValue) { *this = jsonValue; }

IAMConfiguration& IAMConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("systemRole")) {
    m_systemRole = jsonValue.GetString("systemRole");
    m_systemRoleHasBeenSet = true;
  }
  return *this;
}

JsonValue IAMConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_systemRoleHasBeenSet) {
    payload.WithString("systemRole", m_systemRole);
  }

  return payload;
}

}  // namespace Model
}  // namespace EMRContainers
}  // namespace Aws
