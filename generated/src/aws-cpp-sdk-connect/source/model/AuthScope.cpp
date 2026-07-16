/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/AuthScope.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Connect {
namespace Model {

AuthScope::AuthScope(JsonView jsonValue) { *this = jsonValue; }

AuthScope& AuthScope::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("SecurityProfileIds")) {
    Aws::Utils::Array<JsonView> securityProfileIdsJsonList = jsonValue.GetArray("SecurityProfileIds");
    for (unsigned securityProfileIdsIndex = 0; securityProfileIdsIndex < securityProfileIdsJsonList.GetLength();
         ++securityProfileIdsIndex) {
      m_securityProfileIds.push_back(securityProfileIdsJsonList[securityProfileIdsIndex].AsString());
    }
    m_securityProfileIdsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("EntityType")) {
    m_entityType = AuthCodeEntityTypeMapper::GetAuthCodeEntityTypeForName(jsonValue.GetString("EntityType"));
    m_entityTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("EntityId")) {
    m_entityId = jsonValue.GetString("EntityId");
    m_entityIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("DomainName")) {
    m_domainName = jsonValue.GetString("DomainName");
    m_domainNameHasBeenSet = true;
  }
  return *this;
}

JsonValue AuthScope::Jsonize() const {
  JsonValue payload;

  if (m_securityProfileIdsHasBeenSet) {
    Aws::Utils::Array<JsonValue> securityProfileIdsJsonList(m_securityProfileIds.size());
    for (unsigned securityProfileIdsIndex = 0; securityProfileIdsIndex < securityProfileIdsJsonList.GetLength();
         ++securityProfileIdsIndex) {
      securityProfileIdsJsonList[securityProfileIdsIndex].AsString(m_securityProfileIds[securityProfileIdsIndex]);
    }
    payload.WithArray("SecurityProfileIds", std::move(securityProfileIdsJsonList));
  }

  if (m_entityTypeHasBeenSet) {
    payload.WithString("EntityType", AuthCodeEntityTypeMapper::GetNameForAuthCodeEntityType(m_entityType));
  }

  if (m_entityIdHasBeenSet) {
    payload.WithString("EntityId", m_entityId);
  }

  if (m_domainNameHasBeenSet) {
    payload.WithString("DomainName", m_domainName);
  }

  return payload;
}

}  // namespace Model
}  // namespace Connect
}  // namespace Aws
