/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/invoicing/model/ProcurementPortal.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Invoicing {
namespace Model {

ProcurementPortal::ProcurementPortal(JsonView jsonValue) { *this = jsonValue; }

ProcurementPortal& ProcurementPortal::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("PortalIdentifier")) {
    m_portalIdentifier = jsonValue.GetString("PortalIdentifier");
    m_portalIdentifierHasBeenSet = true;
  }
  if (jsonValue.ValueExists("PortalName")) {
    m_portalName = ProcurementPortalNameMapper::GetProcurementPortalNameForName(jsonValue.GetString("PortalName"));
    m_portalNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("PortalDisplayName")) {
    m_portalDisplayName = jsonValue.GetString("PortalDisplayName");
    m_portalDisplayNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("DefaultFeatureConfigurations")) {
    m_defaultFeatureConfigurations = jsonValue.GetObject("DefaultFeatureConfigurations");
    m_defaultFeatureConfigurationsHasBeenSet = true;
  }
  return *this;
}

JsonValue ProcurementPortal::Jsonize() const {
  JsonValue payload;

  if (m_portalIdentifierHasBeenSet) {
    payload.WithString("PortalIdentifier", m_portalIdentifier);
  }

  if (m_portalNameHasBeenSet) {
    payload.WithString("PortalName", ProcurementPortalNameMapper::GetNameForProcurementPortalName(m_portalName));
  }

  if (m_portalDisplayNameHasBeenSet) {
    payload.WithString("PortalDisplayName", m_portalDisplayName);
  }

  if (m_defaultFeatureConfigurationsHasBeenSet) {
    payload.WithObject("DefaultFeatureConfigurations", m_defaultFeatureConfigurations.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace Invoicing
}  // namespace Aws
