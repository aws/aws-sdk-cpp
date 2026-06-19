/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore-control/model/AllowedWorkloadConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCoreControl {
namespace Model {

AllowedWorkloadConfiguration::AllowedWorkloadConfiguration(JsonView jsonValue) { *this = jsonValue; }

AllowedWorkloadConfiguration& AllowedWorkloadConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("hostingEnvironments")) {
    Aws::Utils::Array<JsonView> hostingEnvironmentsJsonList = jsonValue.GetArray("hostingEnvironments");
    for (unsigned hostingEnvironmentsIndex = 0; hostingEnvironmentsIndex < hostingEnvironmentsJsonList.GetLength();
         ++hostingEnvironmentsIndex) {
      m_hostingEnvironments.push_back(hostingEnvironmentsJsonList[hostingEnvironmentsIndex].AsObject());
    }
    m_hostingEnvironmentsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("workloadIdentities")) {
    Aws::Utils::Array<JsonView> workloadIdentitiesJsonList = jsonValue.GetArray("workloadIdentities");
    for (unsigned workloadIdentitiesIndex = 0; workloadIdentitiesIndex < workloadIdentitiesJsonList.GetLength();
         ++workloadIdentitiesIndex) {
      m_workloadIdentities.push_back(workloadIdentitiesJsonList[workloadIdentitiesIndex].AsString());
    }
    m_workloadIdentitiesHasBeenSet = true;
  }
  return *this;
}

JsonValue AllowedWorkloadConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_hostingEnvironmentsHasBeenSet) {
    Aws::Utils::Array<JsonValue> hostingEnvironmentsJsonList(m_hostingEnvironments.size());
    for (unsigned hostingEnvironmentsIndex = 0; hostingEnvironmentsIndex < hostingEnvironmentsJsonList.GetLength();
         ++hostingEnvironmentsIndex) {
      hostingEnvironmentsJsonList[hostingEnvironmentsIndex].AsObject(m_hostingEnvironments[hostingEnvironmentsIndex].Jsonize());
    }
    payload.WithArray("hostingEnvironments", std::move(hostingEnvironmentsJsonList));
  }

  if (m_workloadIdentitiesHasBeenSet) {
    Aws::Utils::Array<JsonValue> workloadIdentitiesJsonList(m_workloadIdentities.size());
    for (unsigned workloadIdentitiesIndex = 0; workloadIdentitiesIndex < workloadIdentitiesJsonList.GetLength();
         ++workloadIdentitiesIndex) {
      workloadIdentitiesJsonList[workloadIdentitiesIndex].AsString(m_workloadIdentities[workloadIdentitiesIndex]);
    }
    payload.WithArray("workloadIdentities", std::move(workloadIdentitiesJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
