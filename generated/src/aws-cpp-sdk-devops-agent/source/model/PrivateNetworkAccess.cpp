/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/devops-agent/model/PrivateNetworkAccess.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace DevOpsAgent {
namespace Model {

PrivateNetworkAccess::PrivateNetworkAccess(JsonView jsonValue) { *this = jsonValue; }

PrivateNetworkAccess& PrivateNetworkAccess::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("privateConnectionName")) {
    m_privateConnectionName = jsonValue.GetString("privateConnectionName");
    m_privateConnectionNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("runtimeRoleArn")) {
    m_runtimeRoleArn = jsonValue.GetString("runtimeRoleArn");
    m_runtimeRoleArnHasBeenSet = true;
  }
  return *this;
}

JsonValue PrivateNetworkAccess::Jsonize() const {
  JsonValue payload;

  if (m_privateConnectionNameHasBeenSet) {
    payload.WithString("privateConnectionName", m_privateConnectionName);
  }

  if (m_runtimeRoleArnHasBeenSet) {
    payload.WithString("runtimeRoleArn", m_runtimeRoleArn);
  }

  return payload;
}

}  // namespace Model
}  // namespace DevOpsAgent
}  // namespace Aws
