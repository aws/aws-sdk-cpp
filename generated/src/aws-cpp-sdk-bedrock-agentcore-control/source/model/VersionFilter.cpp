/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore-control/model/VersionFilter.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCoreControl {
namespace Model {

VersionFilter::VersionFilter(JsonView jsonValue) { *this = jsonValue; }

VersionFilter& VersionFilter::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("branchName")) {
    m_branchName = jsonValue.GetString("branchName");
    m_branchNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("createdByName")) {
    m_createdByName = jsonValue.GetString("createdByName");
    m_createdByNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("latestPerBranch")) {
    m_latestPerBranch = jsonValue.GetBool("latestPerBranch");
    m_latestPerBranchHasBeenSet = true;
  }
  return *this;
}

JsonValue VersionFilter::Jsonize() const {
  JsonValue payload;

  if (m_branchNameHasBeenSet) {
    payload.WithString("branchName", m_branchName);
  }

  if (m_createdByNameHasBeenSet) {
    payload.WithString("createdByName", m_createdByName);
  }

  if (m_latestPerBranchHasBeenSet) {
    payload.WithBool("latestPerBranch", m_latestPerBranch);
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
