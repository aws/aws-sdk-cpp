/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/guardduty/model/KubernetesApiCall.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace GuardDuty {
namespace Model {

KubernetesApiCall::KubernetesApiCall(JsonView jsonValue) { *this = jsonValue; }

KubernetesApiCall& KubernetesApiCall::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("clusterName")) {
    m_clusterName = jsonValue.GetString("clusterName");
    m_clusterNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("username")) {
    m_username = jsonValue.GetString("username");
    m_usernameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("userGroups")) {
    m_userGroups = jsonValue.GetString("userGroups");
    m_userGroupsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("userId")) {
    m_userId = jsonValue.GetString("userId");
    m_userIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("verb")) {
    m_verb = jsonValue.GetString("verb");
    m_verbHasBeenSet = true;
  }
  if (jsonValue.ValueExists("resourceType")) {
    m_resourceType = jsonValue.GetString("resourceType");
    m_resourceTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("resourceName")) {
    m_resourceName = jsonValue.GetString("resourceName");
    m_resourceNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("namespace")) {
    m_namespace = jsonValue.GetString("namespace");
    m_namespaceHasBeenSet = true;
  }
  if (jsonValue.ValueExists("requestUri")) {
    m_requestUri = jsonValue.GetString("requestUri");
    m_requestUriHasBeenSet = true;
  }
  if (jsonValue.ValueExists("statusCode")) {
    m_statusCode = jsonValue.GetInteger("statusCode");
    m_statusCodeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("sourceIPs")) {
    m_sourceIps = jsonValue.GetString("sourceIPs");
    m_sourceIpsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("userAgent")) {
    m_userAgent = jsonValue.GetString("userAgent");
    m_userAgentHasBeenSet = true;
  }
  if (jsonValue.ValueExists("eventCount")) {
    m_eventCount = jsonValue.GetInt64("eventCount");
    m_eventCountHasBeenSet = true;
  }
  return *this;
}

JsonValue KubernetesApiCall::Jsonize() const {
  JsonValue payload;

  if (m_clusterNameHasBeenSet) {
    payload.WithString("clusterName", m_clusterName);
  }

  if (m_usernameHasBeenSet) {
    payload.WithString("username", m_username);
  }

  if (m_userGroupsHasBeenSet) {
    payload.WithString("userGroups", m_userGroups);
  }

  if (m_userIdHasBeenSet) {
    payload.WithString("userId", m_userId);
  }

  if (m_verbHasBeenSet) {
    payload.WithString("verb", m_verb);
  }

  if (m_resourceTypeHasBeenSet) {
    payload.WithString("resourceType", m_resourceType);
  }

  if (m_resourceNameHasBeenSet) {
    payload.WithString("resourceName", m_resourceName);
  }

  if (m_namespaceHasBeenSet) {
    payload.WithString("namespace", m_namespace);
  }

  if (m_requestUriHasBeenSet) {
    payload.WithString("requestUri", m_requestUri);
  }

  if (m_statusCodeHasBeenSet) {
    payload.WithInteger("statusCode", m_statusCode);
  }

  if (m_sourceIpsHasBeenSet) {
    payload.WithString("sourceIPs", m_sourceIps);
  }

  if (m_userAgentHasBeenSet) {
    payload.WithString("userAgent", m_userAgent);
  }

  if (m_eventCountHasBeenSet) {
    payload.WithInt64("eventCount", m_eventCount);
  }

  return payload;
}

}  // namespace Model
}  // namespace GuardDuty
}  // namespace Aws
