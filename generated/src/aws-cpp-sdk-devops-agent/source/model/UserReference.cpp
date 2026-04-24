/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/devops-agent/model/UserReference.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace DevOpsAgent {
namespace Model {

UserReference::UserReference(JsonView jsonValue) { *this = jsonValue; }

UserReference& UserReference::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("userId")) {
    m_userId = jsonValue.GetString("userId");
    m_userIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("userType")) {
    m_userType = UserTypeMapper::GetUserTypeForName(jsonValue.GetString("userType"));
    m_userTypeHasBeenSet = true;
  }
  return *this;
}

JsonValue UserReference::Jsonize() const {
  JsonValue payload;

  if (m_userIdHasBeenSet) {
    payload.WithString("userId", m_userId);
  }

  if (m_userTypeHasBeenSet) {
    payload.WithString("userType", UserTypeMapper::GetNameForUserType(m_userType));
  }

  return payload;
}

}  // namespace Model
}  // namespace DevOpsAgent
}  // namespace Aws
