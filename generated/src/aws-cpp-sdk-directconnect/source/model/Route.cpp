/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/directconnect/model/Route.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace DirectConnect {
namespace Model {

Route::Route(JsonView jsonValue) { *this = jsonValue; }

Route& Route::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("cidr")) {
    m_cidr = jsonValue.GetString("cidr");
    m_cidrHasBeenSet = true;
  }
  if (jsonValue.ValueExists("routeDirection")) {
    m_routeDirection = RouteDirectionMapper::GetRouteDirectionForName(jsonValue.GetString("routeDirection"));
    m_routeDirectionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("addressFamily")) {
    m_addressFamily = AddressFamilyMapper::GetAddressFamilyForName(jsonValue.GetString("addressFamily"));
    m_addressFamilyHasBeenSet = true;
  }
  if (jsonValue.ValueExists("asPath")) {
    Aws::Utils::Array<JsonView> asPathJsonList = jsonValue.GetArray("asPath");
    for (unsigned asPathIndex = 0; asPathIndex < asPathJsonList.GetLength(); ++asPathIndex) {
      m_asPath.push_back(asPathJsonList[asPathIndex].AsObject());
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
  if (jsonValue.ValueExists("awsLogicalDeviceId")) {
    m_awsLogicalDeviceId = jsonValue.GetString("awsLogicalDeviceId");
    m_awsLogicalDeviceIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("routeInstalledAt")) {
    m_routeInstalledAt = jsonValue.GetDouble("routeInstalledAt");
    m_routeInstalledAtHasBeenSet = true;
  }
  return *this;
}

JsonValue Route::Jsonize() const {
  JsonValue payload;

  if (m_cidrHasBeenSet) {
    payload.WithString("cidr", m_cidr);
  }

  if (m_routeDirectionHasBeenSet) {
    payload.WithString("routeDirection", RouteDirectionMapper::GetNameForRouteDirection(m_routeDirection));
  }

  if (m_addressFamilyHasBeenSet) {
    payload.WithString("addressFamily", AddressFamilyMapper::GetNameForAddressFamily(m_addressFamily));
  }

  if (m_asPathHasBeenSet) {
    Aws::Utils::Array<JsonValue> asPathJsonList(m_asPath.size());
    for (unsigned asPathIndex = 0; asPathIndex < asPathJsonList.GetLength(); ++asPathIndex) {
      asPathJsonList[asPathIndex].AsObject(m_asPath[asPathIndex].Jsonize());
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

  if (m_awsLogicalDeviceIdHasBeenSet) {
    payload.WithString("awsLogicalDeviceId", m_awsLogicalDeviceId);
  }

  if (m_routeInstalledAtHasBeenSet) {
    payload.WithDouble("routeInstalledAt", m_routeInstalledAt.SecondsWithMSPrecision());
  }

  return payload;
}

}  // namespace Model
}  // namespace DirectConnect
}  // namespace Aws
