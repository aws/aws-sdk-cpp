/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/eks/model/ArgoCdConfigResponse.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace EKS {
namespace Model {

ArgoCdConfigResponse::ArgoCdConfigResponse(JsonView jsonValue) { *this = jsonValue; }

ArgoCdConfigResponse& ArgoCdConfigResponse::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("namespace")) {
    m_namespace = jsonValue.GetString("namespace");
    m_namespaceHasBeenSet = true;
  }
  if (jsonValue.ValueExists("awsIdc")) {
    m_awsIdc = jsonValue.GetObject("awsIdc");
    m_awsIdcHasBeenSet = true;
  }
  if (jsonValue.ValueExists("rbacRoleMappings")) {
    Aws::Utils::Array<JsonView> rbacRoleMappingsJsonList = jsonValue.GetArray("rbacRoleMappings");
    for (unsigned rbacRoleMappingsIndex = 0; rbacRoleMappingsIndex < rbacRoleMappingsJsonList.GetLength(); ++rbacRoleMappingsIndex) {
      m_rbacRoleMappings.push_back(rbacRoleMappingsJsonList[rbacRoleMappingsIndex].AsObject());
    }
    m_rbacRoleMappingsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("networkAccess")) {
    m_networkAccess = jsonValue.GetObject("networkAccess");
    m_networkAccessHasBeenSet = true;
  }
  if (jsonValue.ValueExists("serverUrl")) {
    m_serverUrl = jsonValue.GetString("serverUrl");
    m_serverUrlHasBeenSet = true;
  }
  return *this;
}

JsonValue ArgoCdConfigResponse::Jsonize() const {
  JsonValue payload;

  if (m_namespaceHasBeenSet) {
    payload.WithString("namespace", m_namespace);
  }

  if (m_awsIdcHasBeenSet) {
    payload.WithObject("awsIdc", m_awsIdc.Jsonize());
  }

  if (m_rbacRoleMappingsHasBeenSet) {
    Aws::Utils::Array<JsonValue> rbacRoleMappingsJsonList(m_rbacRoleMappings.size());
    for (unsigned rbacRoleMappingsIndex = 0; rbacRoleMappingsIndex < rbacRoleMappingsJsonList.GetLength(); ++rbacRoleMappingsIndex) {
      rbacRoleMappingsJsonList[rbacRoleMappingsIndex].AsObject(m_rbacRoleMappings[rbacRoleMappingsIndex].Jsonize());
    }
    payload.WithArray("rbacRoleMappings", std::move(rbacRoleMappingsJsonList));
  }

  if (m_networkAccessHasBeenSet) {
    payload.WithObject("networkAccess", m_networkAccess.Jsonize());
  }

  if (m_serverUrlHasBeenSet) {
    payload.WithString("serverUrl", m_serverUrl);
  }

  return payload;
}

}  // namespace Model
}  // namespace EKS
}  // namespace Aws
