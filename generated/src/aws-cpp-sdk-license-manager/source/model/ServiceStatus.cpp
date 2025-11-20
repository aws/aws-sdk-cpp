/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/license-manager/model/ServiceStatus.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace LicenseManager {
namespace Model {

ServiceStatus::ServiceStatus(JsonView jsonValue) { *this = jsonValue; }

ServiceStatus& ServiceStatus::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("CrossAccountDiscovery")) {
    m_crossAccountDiscovery = jsonValue.GetObject("CrossAccountDiscovery");
    m_crossAccountDiscoveryHasBeenSet = true;
  }
  if (jsonValue.ValueExists("CrossRegionDiscovery")) {
    m_crossRegionDiscovery = jsonValue.GetObject("CrossRegionDiscovery");
    m_crossRegionDiscoveryHasBeenSet = true;
  }
  return *this;
}

JsonValue ServiceStatus::Jsonize() const {
  JsonValue payload;

  if (m_crossAccountDiscoveryHasBeenSet) {
    payload.WithObject("CrossAccountDiscovery", m_crossAccountDiscovery.Jsonize());
  }

  if (m_crossRegionDiscoveryHasBeenSet) {
    payload.WithObject("CrossRegionDiscovery", m_crossRegionDiscovery.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace LicenseManager
}  // namespace Aws
