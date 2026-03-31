/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/devops-agent/model/IamAuthConfiguration.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace DevOpsAgent {
namespace Model {

IamAuthConfiguration::IamAuthConfiguration(JsonView jsonValue) { *this = jsonValue; }

IamAuthConfiguration& IamAuthConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("operatorAppRoleArn")) {
    m_operatorAppRoleArn = jsonValue.GetString("operatorAppRoleArn");
    m_operatorAppRoleArnHasBeenSet = true;
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

JsonValue IamAuthConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_operatorAppRoleArnHasBeenSet) {
    payload.WithString("operatorAppRoleArn", m_operatorAppRoleArn);
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
