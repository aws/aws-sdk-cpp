/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/apiportal/model/DiscoveryExclusionFilters.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace APIPortal {
namespace Model {

DiscoveryExclusionFilters::DiscoveryExclusionFilters(JsonView jsonValue) { *this = jsonValue; }

DiscoveryExclusionFilters& DiscoveryExclusionFilters::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("organizationalUnitIds")) {
    Aws::Utils::Array<JsonView> organizationalUnitIdsJsonList = jsonValue.GetArray("organizationalUnitIds");
    for (unsigned organizationalUnitIdsIndex = 0; organizationalUnitIdsIndex < organizationalUnitIdsJsonList.GetLength();
         ++organizationalUnitIdsIndex) {
      m_organizationalUnitIds.push_back(organizationalUnitIdsJsonList[organizationalUnitIdsIndex].AsString());
    }
    m_organizationalUnitIdsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("accountIds")) {
    Aws::Utils::Array<JsonView> accountIdsJsonList = jsonValue.GetArray("accountIds");
    for (unsigned accountIdsIndex = 0; accountIdsIndex < accountIdsJsonList.GetLength(); ++accountIdsIndex) {
      m_accountIds.push_back(accountIdsJsonList[accountIdsIndex].AsString());
    }
    m_accountIdsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("resourceArns")) {
    Aws::Utils::Array<JsonView> resourceArnsJsonList = jsonValue.GetArray("resourceArns");
    for (unsigned resourceArnsIndex = 0; resourceArnsIndex < resourceArnsJsonList.GetLength(); ++resourceArnsIndex) {
      m_resourceArns.push_back(resourceArnsJsonList[resourceArnsIndex].AsString());
    }
    m_resourceArnsHasBeenSet = true;
  }
  return *this;
}

JsonValue DiscoveryExclusionFilters::Jsonize() const {
  JsonValue payload;

  if (m_organizationalUnitIdsHasBeenSet) {
    Aws::Utils::Array<JsonValue> organizationalUnitIdsJsonList(m_organizationalUnitIds.size());
    for (unsigned organizationalUnitIdsIndex = 0; organizationalUnitIdsIndex < organizationalUnitIdsJsonList.GetLength();
         ++organizationalUnitIdsIndex) {
      organizationalUnitIdsJsonList[organizationalUnitIdsIndex].AsString(m_organizationalUnitIds[organizationalUnitIdsIndex]);
    }
    payload.WithArray("organizationalUnitIds", std::move(organizationalUnitIdsJsonList));
  }

  if (m_accountIdsHasBeenSet) {
    Aws::Utils::Array<JsonValue> accountIdsJsonList(m_accountIds.size());
    for (unsigned accountIdsIndex = 0; accountIdsIndex < accountIdsJsonList.GetLength(); ++accountIdsIndex) {
      accountIdsJsonList[accountIdsIndex].AsString(m_accountIds[accountIdsIndex]);
    }
    payload.WithArray("accountIds", std::move(accountIdsJsonList));
  }

  if (m_resourceArnsHasBeenSet) {
    Aws::Utils::Array<JsonValue> resourceArnsJsonList(m_resourceArns.size());
    for (unsigned resourceArnsIndex = 0; resourceArnsIndex < resourceArnsJsonList.GetLength(); ++resourceArnsIndex) {
      resourceArnsJsonList[resourceArnsIndex].AsString(m_resourceArns[resourceArnsIndex]);
    }
    payload.WithArray("resourceArns", std::move(resourceArnsJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace APIPortal
}  // namespace Aws
