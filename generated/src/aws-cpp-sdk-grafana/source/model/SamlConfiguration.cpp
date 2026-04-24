/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/grafana/model/SamlConfiguration.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace ManagedGrafana {
namespace Model {

SamlConfiguration::SamlConfiguration(JsonView jsonValue) { *this = jsonValue; }

SamlConfiguration& SamlConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("idpMetadata")) {
    m_idpMetadata = jsonValue.GetObject("idpMetadata");
    m_idpMetadataHasBeenSet = true;
  }
  if (jsonValue.ValueExists("assertionAttributes")) {
    m_assertionAttributes = jsonValue.GetObject("assertionAttributes");
    m_assertionAttributesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("roleValues")) {
    m_roleValues = jsonValue.GetObject("roleValues");
    m_roleValuesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("allowedOrganizations")) {
    Aws::Utils::Array<JsonView> allowedOrganizationsJsonList = jsonValue.GetArray("allowedOrganizations");
    for (unsigned allowedOrganizationsIndex = 0; allowedOrganizationsIndex < allowedOrganizationsJsonList.GetLength();
         ++allowedOrganizationsIndex) {
      m_allowedOrganizations.push_back(allowedOrganizationsJsonList[allowedOrganizationsIndex].AsString());
    }
    m_allowedOrganizationsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("loginValidityDuration")) {
    m_loginValidityDuration = jsonValue.GetInteger("loginValidityDuration");
    m_loginValidityDurationHasBeenSet = true;
  }
  return *this;
}

JsonValue SamlConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_idpMetadataHasBeenSet) {
    payload.WithObject("idpMetadata", m_idpMetadata.Jsonize());
  }

  if (m_assertionAttributesHasBeenSet) {
    payload.WithObject("assertionAttributes", m_assertionAttributes.Jsonize());
  }

  if (m_roleValuesHasBeenSet) {
    payload.WithObject("roleValues", m_roleValues.Jsonize());
  }

  if (m_allowedOrganizationsHasBeenSet) {
    Aws::Utils::Array<JsonValue> allowedOrganizationsJsonList(m_allowedOrganizations.size());
    for (unsigned allowedOrganizationsIndex = 0; allowedOrganizationsIndex < allowedOrganizationsJsonList.GetLength();
         ++allowedOrganizationsIndex) {
      allowedOrganizationsJsonList[allowedOrganizationsIndex].AsString(m_allowedOrganizations[allowedOrganizationsIndex]);
    }
    payload.WithArray("allowedOrganizations", std::move(allowedOrganizationsJsonList));
  }

  if (m_loginValidityDurationHasBeenSet) {
    payload.WithInteger("loginValidityDuration", m_loginValidityDuration);
  }

  return payload;
}

}  // namespace Model
}  // namespace ManagedGrafana
}  // namespace Aws
