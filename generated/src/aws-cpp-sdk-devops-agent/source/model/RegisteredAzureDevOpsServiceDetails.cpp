/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/devops-agent/model/RegisteredAzureDevOpsServiceDetails.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace DevOpsAgent {
namespace Model {

RegisteredAzureDevOpsServiceDetails::RegisteredAzureDevOpsServiceDetails(JsonView jsonValue) { *this = jsonValue; }

RegisteredAzureDevOpsServiceDetails& RegisteredAzureDevOpsServiceDetails::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("organizationName")) {
    m_organizationName = jsonValue.GetString("organizationName");
    m_organizationNameHasBeenSet = true;
  }
  return *this;
}

JsonValue RegisteredAzureDevOpsServiceDetails::Jsonize() const {
  JsonValue payload;

  if (m_organizationNameHasBeenSet) {
    payload.WithString("organizationName", m_organizationName);
  }

  return payload;
}

}  // namespace Model
}  // namespace DevOpsAgent
}  // namespace Aws
