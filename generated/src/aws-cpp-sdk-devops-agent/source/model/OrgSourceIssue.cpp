/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/devops-agent/model/OrgSourceIssue.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace DevOpsAgent {
namespace Model {

OrgSourceIssue::OrgSourceIssue(JsonView jsonValue) { *this = jsonValue; }

OrgSourceIssue& OrgSourceIssue::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("reasonCode")) {
    m_reasonCode = OrgSourceAccountReasonCodeMapper::GetOrgSourceAccountReasonCodeForName(jsonValue.GetString("reasonCode"));
    m_reasonCodeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("accountCount")) {
    m_accountCount = jsonValue.GetInteger("accountCount");
    m_accountCountHasBeenSet = true;
  }
  if (jsonValue.ValueExists("accountIds")) {
    Aws::Utils::Array<JsonView> accountIdsJsonList = jsonValue.GetArray("accountIds");
    for (unsigned accountIdsIndex = 0; accountIdsIndex < accountIdsJsonList.GetLength(); ++accountIdsIndex) {
      m_accountIds.push_back(accountIdsJsonList[accountIdsIndex].AsString());
    }
    m_accountIdsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("message")) {
    m_message = jsonValue.GetString("message");
    m_messageHasBeenSet = true;
  }
  return *this;
}

JsonValue OrgSourceIssue::Jsonize() const {
  JsonValue payload;

  if (m_reasonCodeHasBeenSet) {
    payload.WithString("reasonCode", OrgSourceAccountReasonCodeMapper::GetNameForOrgSourceAccountReasonCode(m_reasonCode));
  }

  if (m_accountCountHasBeenSet) {
    payload.WithInteger("accountCount", m_accountCount);
  }

  if (m_accountIdsHasBeenSet) {
    Aws::Utils::Array<JsonValue> accountIdsJsonList(m_accountIds.size());
    for (unsigned accountIdsIndex = 0; accountIdsIndex < accountIdsJsonList.GetLength(); ++accountIdsIndex) {
      accountIdsJsonList[accountIdsIndex].AsString(m_accountIds[accountIdsIndex]);
    }
    payload.WithArray("accountIds", std::move(accountIdsJsonList));
  }

  if (m_messageHasBeenSet) {
    payload.WithString("message", m_message);
  }

  return payload;
}

}  // namespace Model
}  // namespace DevOpsAgent
}  // namespace Aws
