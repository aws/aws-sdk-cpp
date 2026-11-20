/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/apiportal/model/DiscoveryInclusionFilters.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace APIPortal {
namespace Model {

DiscoveryInclusionFilters::DiscoveryInclusionFilters(JsonView jsonValue) { *this = jsonValue; }

DiscoveryInclusionFilters& DiscoveryInclusionFilters::operator=(JsonView jsonValue) {
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
  return *this;
}

JsonValue DiscoveryInclusionFilters::Jsonize() const {
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

  return payload;
}

}  // namespace Model
}  // namespace APIPortal
}  // namespace Aws
