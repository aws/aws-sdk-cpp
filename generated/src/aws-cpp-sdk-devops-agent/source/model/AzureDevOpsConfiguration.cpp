/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/devops-agent/model/AzureDevOpsConfiguration.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace DevOpsAgent {
namespace Model {

AzureDevOpsConfiguration::AzureDevOpsConfiguration(JsonView jsonValue) { *this = jsonValue; }

AzureDevOpsConfiguration& AzureDevOpsConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("organizationName")) {
    m_organizationName = jsonValue.GetString("organizationName");
    m_organizationNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("projectId")) {
    m_projectId = jsonValue.GetString("projectId");
    m_projectIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("projectName")) {
    m_projectName = jsonValue.GetString("projectName");
    m_projectNameHasBeenSet = true;
  }
  return *this;
}

JsonValue AzureDevOpsConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_organizationNameHasBeenSet) {
    payload.WithString("organizationName", m_organizationName);
  }

  if (m_projectIdHasBeenSet) {
    payload.WithString("projectId", m_projectId);
  }

  if (m_projectNameHasBeenSet) {
    payload.WithString("projectName", m_projectName);
  }

  return payload;
}

}  // namespace Model
}  // namespace DevOpsAgent
}  // namespace Aws
