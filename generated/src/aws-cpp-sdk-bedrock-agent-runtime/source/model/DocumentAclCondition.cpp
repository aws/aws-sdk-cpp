/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent-runtime/model/DocumentAclCondition.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentRuntime {
namespace Model {

DocumentAclCondition::DocumentAclCondition(JsonView jsonValue) { *this = jsonValue; }

DocumentAclCondition& DocumentAclCondition::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("conditionOperator")) {
    m_conditionOperator = DocumentAclMemberRelationMapper::GetDocumentAclMemberRelationForName(jsonValue.GetString("conditionOperator"));
    m_conditionOperatorHasBeenSet = true;
  }
  if (jsonValue.ValueExists("groups")) {
    Aws::Utils::Array<JsonView> groupsJsonList = jsonValue.GetArray("groups");
    for (unsigned groupsIndex = 0; groupsIndex < groupsJsonList.GetLength(); ++groupsIndex) {
      m_groups.push_back(groupsJsonList[groupsIndex].AsObject());
    }
    m_groupsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("users")) {
    Aws::Utils::Array<JsonView> usersJsonList = jsonValue.GetArray("users");
    for (unsigned usersIndex = 0; usersIndex < usersJsonList.GetLength(); ++usersIndex) {
      m_users.push_back(usersJsonList[usersIndex].AsObject());
    }
    m_usersHasBeenSet = true;
  }
  return *this;
}

JsonValue DocumentAclCondition::Jsonize() const {
  JsonValue payload;

  if (m_conditionOperatorHasBeenSet) {
    payload.WithString("conditionOperator", DocumentAclMemberRelationMapper::GetNameForDocumentAclMemberRelation(m_conditionOperator));
  }

  if (m_groupsHasBeenSet) {
    Aws::Utils::Array<JsonValue> groupsJsonList(m_groups.size());
    for (unsigned groupsIndex = 0; groupsIndex < groupsJsonList.GetLength(); ++groupsIndex) {
      groupsJsonList[groupsIndex].AsObject(m_groups[groupsIndex].Jsonize());
    }
    payload.WithArray("groups", std::move(groupsJsonList));
  }

  if (m_usersHasBeenSet) {
    Aws::Utils::Array<JsonValue> usersJsonList(m_users.size());
    for (unsigned usersIndex = 0; usersIndex < usersJsonList.GetLength(); ++usersIndex) {
      usersJsonList[usersIndex].AsObject(m_users[usersIndex].Jsonize());
    }
    payload.WithArray("users", std::move(usersJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgentRuntime
}  // namespace Aws
