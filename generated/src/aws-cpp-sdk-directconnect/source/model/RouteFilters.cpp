/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/directconnect/model/RouteFilters.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace DirectConnect {
namespace Model {

RouteFilters::RouteFilters(JsonView jsonValue) { *this = jsonValue; }

RouteFilters& RouteFilters::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("routeDirection")) {
    m_routeDirection = RouteDirectionMapper::GetRouteDirectionForName(jsonValue.GetString("routeDirection"));
    m_routeDirectionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("addressFamily")) {
    m_addressFamily = AddressFamilyMapper::GetAddressFamilyForName(jsonValue.GetString("addressFamily"));
    m_addressFamilyHasBeenSet = true;
  }
  if (jsonValue.ValueExists("cidrs")) {
    Aws::Utils::Array<JsonView> cidrsJsonList = jsonValue.GetArray("cidrs");
    for (unsigned cidrsIndex = 0; cidrsIndex < cidrsJsonList.GetLength(); ++cidrsIndex) {
      m_cidrs.push_back(cidrsJsonList[cidrsIndex].AsString());
    }
    m_cidrsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("asPath")) {
    Aws::Utils::Array<JsonView> asPathJsonList = jsonValue.GetArray("asPath");
    for (unsigned asPathIndex = 0; asPathIndex < asPathJsonList.GetLength(); ++asPathIndex) {
      m_asPath.push_back(asPathJsonList[asPathIndex].AsInt64());
    }
    m_asPathHasBeenSet = true;
  }
  if (jsonValue.ValueExists("communities")) {
    Aws::Utils::Array<JsonView> communitiesJsonList = jsonValue.GetArray("communities");
    for (unsigned communitiesIndex = 0; communitiesIndex < communitiesJsonList.GetLength(); ++communitiesIndex) {
      m_communities.push_back(communitiesJsonList[communitiesIndex].AsString());
    }
    m_communitiesHasBeenSet = true;
  }
  return *this;
}

JsonValue RouteFilters::Jsonize() const {
  JsonValue payload;

  if (m_routeDirectionHasBeenSet) {
    payload.WithString("routeDirection", RouteDirectionMapper::GetNameForRouteDirection(m_routeDirection));
  }

  if (m_addressFamilyHasBeenSet) {
    payload.WithString("addressFamily", AddressFamilyMapper::GetNameForAddressFamily(m_addressFamily));
  }

  if (m_cidrsHasBeenSet) {
    Aws::Utils::Array<JsonValue> cidrsJsonList(m_cidrs.size());
    for (unsigned cidrsIndex = 0; cidrsIndex < cidrsJsonList.GetLength(); ++cidrsIndex) {
      cidrsJsonList[cidrsIndex].AsString(m_cidrs[cidrsIndex]);
    }
    payload.WithArray("cidrs", std::move(cidrsJsonList));
  }

  if (m_asPathHasBeenSet) {
    Aws::Utils::Array<JsonValue> asPathJsonList(m_asPath.size());
    for (unsigned asPathIndex = 0; asPathIndex < asPathJsonList.GetLength(); ++asPathIndex) {
      asPathJsonList[asPathIndex].AsInt64(m_asPath[asPathIndex]);
    }
    payload.WithArray("asPath", std::move(asPathJsonList));
  }

  if (m_communitiesHasBeenSet) {
    Aws::Utils::Array<JsonValue> communitiesJsonList(m_communities.size());
    for (unsigned communitiesIndex = 0; communitiesIndex < communitiesJsonList.GetLength(); ++communitiesIndex) {
      communitiesJsonList[communitiesIndex].AsString(m_communities[communitiesIndex]);
    }
    payload.WithArray("communities", std::move(communitiesJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace DirectConnect
}  // namespace Aws
