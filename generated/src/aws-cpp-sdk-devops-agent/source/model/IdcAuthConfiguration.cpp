/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/devops-agent/model/IdcAuthConfiguration.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace DevOpsAgent {
namespace Model {

IdcAuthConfiguration::IdcAuthConfiguration(JsonView jsonValue) { *this = jsonValue; }

IdcAuthConfiguration& IdcAuthConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("operatorAppRoleArn")) {
    m_operatorAppRoleArn = jsonValue.GetString("operatorAppRoleArn");
    m_operatorAppRoleArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("idcInstanceArn")) {
    m_idcInstanceArn = jsonValue.GetString("idcInstanceArn");
    m_idcInstanceArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("idcApplicationArn")) {
    m_idcApplicationArn = jsonValue.GetString("idcApplicationArn");
    m_idcApplicationArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("createdAt")) {
    m_createdAt = jsonValue.GetString("createdAt");
    m_createdAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("updatedAt")) {
    m_updatedAt = jsonValue.GetString("updatedAt");
    m_updatedAtHasBeenSet = true;
  }
  return *this;
}

JsonValue IdcAuthConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_operatorAppRoleArnHasBeenSet) {
    payload.WithString("operatorAppRoleArn", m_operatorAppRoleArn);
  }

  if (m_idcInstanceArnHasBeenSet) {
    payload.WithString("idcInstanceArn", m_idcInstanceArn);
  }

  if (m_idcApplicationArnHasBeenSet) {
    payload.WithString("idcApplicationArn", m_idcApplicationArn);
  }

  if (m_createdAtHasBeenSet) {
    payload.WithString("createdAt", m_createdAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if (m_updatedAtHasBeenSet) {
    payload.WithString("updatedAt", m_updatedAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  return payload;
}

}  // namespace Model
}  // namespace DevOpsAgent
}  // namespace Aws
