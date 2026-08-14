/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent-runtime/model/DocumentAclMembership.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentRuntime {
namespace Model {

DocumentAclMembership::DocumentAclMembership(JsonView jsonValue) { *this = jsonValue; }

DocumentAclMembership& DocumentAclMembership::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("conditions")) {
    Aws::Utils::Array<JsonView> conditionsJsonList = jsonValue.GetArray("conditions");
    for (unsigned conditionsIndex = 0; conditionsIndex < conditionsJsonList.GetLength(); ++conditionsIndex) {
      m_conditions.push_back(conditionsJsonList[conditionsIndex].AsObject());
    }
    m_conditionsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("memberRelation")) {
    m_memberRelation = DocumentAclMemberRelationMapper::GetDocumentAclMemberRelationForName(jsonValue.GetString("memberRelation"));
    m_memberRelationHasBeenSet = true;
  }
  return *this;
}

JsonValue DocumentAclMembership::Jsonize() const {
  JsonValue payload;

  if (m_conditionsHasBeenSet) {
    Aws::Utils::Array<JsonValue> conditionsJsonList(m_conditions.size());
    for (unsigned conditionsIndex = 0; conditionsIndex < conditionsJsonList.GetLength(); ++conditionsIndex) {
      conditionsJsonList[conditionsIndex].AsObject(m_conditions[conditionsIndex].Jsonize());
    }
    payload.WithArray("conditions", std::move(conditionsJsonList));
  }

  if (m_memberRelationHasBeenSet) {
    payload.WithString("memberRelation", DocumentAclMemberRelationMapper::GetNameForDocumentAclMemberRelation(m_memberRelation));
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgentRuntime
}  // namespace Aws
