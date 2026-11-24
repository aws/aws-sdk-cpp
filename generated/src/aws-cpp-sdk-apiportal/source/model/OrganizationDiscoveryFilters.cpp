/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/apiportal/model/OrganizationDiscoveryFilters.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace APIPortal {
namespace Model {

OrganizationDiscoveryFilters::OrganizationDiscoveryFilters(JsonView jsonValue) { *this = jsonValue; }

OrganizationDiscoveryFilters& OrganizationDiscoveryFilters::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("exclusionFilters")) {
    m_exclusionFilters = jsonValue.GetObject("exclusionFilters");
    m_exclusionFiltersHasBeenSet = true;
  }
  if (jsonValue.ValueExists("inclusionFilters")) {
    m_inclusionFilters = jsonValue.GetObject("inclusionFilters");
    m_inclusionFiltersHasBeenSet = true;
  }
  return *this;
}

JsonValue OrganizationDiscoveryFilters::Jsonize() const {
  JsonValue payload;

  if (m_exclusionFiltersHasBeenSet) {
    payload.WithObject("exclusionFilters", m_exclusionFilters.Jsonize());
  }

  if (m_inclusionFiltersHasBeenSet) {
    payload.WithObject("inclusionFilters", m_inclusionFilters.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace APIPortal
}  // namespace Aws
