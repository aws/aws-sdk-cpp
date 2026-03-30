/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/devops-agent/model/RegisteredSlackServiceDetails.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace DevOpsAgent {
namespace Model {

RegisteredSlackServiceDetails::RegisteredSlackServiceDetails(JsonView jsonValue) { *this = jsonValue; }

RegisteredSlackServiceDetails& RegisteredSlackServiceDetails::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("teamId")) {
    m_teamId = jsonValue.GetString("teamId");
    m_teamIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("teamName")) {
    m_teamName = jsonValue.GetString("teamName");
    m_teamNameHasBeenSet = true;
  }
  return *this;
}

JsonValue RegisteredSlackServiceDetails::Jsonize() const {
  JsonValue payload;

  if (m_teamIdHasBeenSet) {
    payload.WithString("teamId", m_teamId);
  }

  if (m_teamNameHasBeenSet) {
    payload.WithString("teamName", m_teamName);
  }

  return payload;
}

}  // namespace Model
}  // namespace DevOpsAgent
}  // namespace Aws
