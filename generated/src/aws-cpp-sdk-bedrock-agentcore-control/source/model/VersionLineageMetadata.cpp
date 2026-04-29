/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore-control/model/VersionLineageMetadata.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCoreControl {
namespace Model {

VersionLineageMetadata::VersionLineageMetadata(JsonView jsonValue) { *this = jsonValue; }

VersionLineageMetadata& VersionLineageMetadata::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("parentVersionIds")) {
    Aws::Utils::Array<JsonView> parentVersionIdsJsonList = jsonValue.GetArray("parentVersionIds");
    for (unsigned parentVersionIdsIndex = 0; parentVersionIdsIndex < parentVersionIdsJsonList.GetLength(); ++parentVersionIdsIndex) {
      m_parentVersionIds.push_back(parentVersionIdsJsonList[parentVersionIdsIndex].AsString());
    }
    m_parentVersionIdsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("branchName")) {
    m_branchName = jsonValue.GetString("branchName");
    m_branchNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("createdBy")) {
    m_createdBy = jsonValue.GetObject("createdBy");
    m_createdByHasBeenSet = true;
  }
  if (jsonValue.ValueExists("commitMessage")) {
    m_commitMessage = jsonValue.GetString("commitMessage");
    m_commitMessageHasBeenSet = true;
  }
  return *this;
}

JsonValue VersionLineageMetadata::Jsonize() const {
  JsonValue payload;

  if (m_parentVersionIdsHasBeenSet) {
    Aws::Utils::Array<JsonValue> parentVersionIdsJsonList(m_parentVersionIds.size());
    for (unsigned parentVersionIdsIndex = 0; parentVersionIdsIndex < parentVersionIdsJsonList.GetLength(); ++parentVersionIdsIndex) {
      parentVersionIdsJsonList[parentVersionIdsIndex].AsString(m_parentVersionIds[parentVersionIdsIndex]);
    }
    payload.WithArray("parentVersionIds", std::move(parentVersionIdsJsonList));
  }

  if (m_branchNameHasBeenSet) {
    payload.WithString("branchName", m_branchName);
  }

  if (m_createdByHasBeenSet) {
    payload.WithObject("createdBy", m_createdBy.Jsonize());
  }

  if (m_commitMessageHasBeenSet) {
    payload.WithString("commitMessage", m_commitMessage);
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
