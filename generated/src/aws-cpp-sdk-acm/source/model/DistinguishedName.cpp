/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/acm/model/DistinguishedName.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace ACM {
namespace Model {

DistinguishedName::DistinguishedName(JsonView jsonValue) { *this = jsonValue; }

DistinguishedName& DistinguishedName::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("CommonName")) {
    m_commonName = jsonValue.GetString("CommonName");
    m_commonNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("DomainComponents")) {
    Aws::Utils::Array<JsonView> domainComponentsJsonList = jsonValue.GetArray("DomainComponents");
    for (unsigned domainComponentsIndex = 0; domainComponentsIndex < domainComponentsJsonList.GetLength(); ++domainComponentsIndex) {
      m_domainComponents.push_back(domainComponentsJsonList[domainComponentsIndex].AsString());
    }
    m_domainComponentsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Country")) {
    m_country = jsonValue.GetString("Country");
    m_countryHasBeenSet = true;
  }
  if (jsonValue.ValueExists("CustomAttributes")) {
    Aws::Utils::Array<JsonView> customAttributesJsonList = jsonValue.GetArray("CustomAttributes");
    for (unsigned customAttributesIndex = 0; customAttributesIndex < customAttributesJsonList.GetLength(); ++customAttributesIndex) {
      m_customAttributes.push_back(customAttributesJsonList[customAttributesIndex].AsObject());
    }
    m_customAttributesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("DistinguishedNameQualifier")) {
    m_distinguishedNameQualifier = jsonValue.GetString("DistinguishedNameQualifier");
    m_distinguishedNameQualifierHasBeenSet = true;
  }
  if (jsonValue.ValueExists("GenerationQualifier")) {
    m_generationQualifier = jsonValue.GetString("GenerationQualifier");
    m_generationQualifierHasBeenSet = true;
  }
  if (jsonValue.ValueExists("GivenName")) {
    m_givenName = jsonValue.GetString("GivenName");
    m_givenNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Initials")) {
    m_initials = jsonValue.GetString("Initials");
    m_initialsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Locality")) {
    m_locality = jsonValue.GetString("Locality");
    m_localityHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Organization")) {
    m_organization = jsonValue.GetString("Organization");
    m_organizationHasBeenSet = true;
  }
  if (jsonValue.ValueExists("OrganizationalUnit")) {
    m_organizationalUnit = jsonValue.GetString("OrganizationalUnit");
    m_organizationalUnitHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Pseudonym")) {
    m_pseudonym = jsonValue.GetString("Pseudonym");
    m_pseudonymHasBeenSet = true;
  }
  if (jsonValue.ValueExists("SerialNumber")) {
    m_serialNumber = jsonValue.GetString("SerialNumber");
    m_serialNumberHasBeenSet = true;
  }
  if (jsonValue.ValueExists("State")) {
    m_state = jsonValue.GetString("State");
    m_stateHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Surname")) {
    m_surname = jsonValue.GetString("Surname");
    m_surnameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Title")) {
    m_title = jsonValue.GetString("Title");
    m_titleHasBeenSet = true;
  }
  return *this;
}

JsonValue DistinguishedName::Jsonize() const {
  JsonValue payload;

  if (m_commonNameHasBeenSet) {
    payload.WithString("CommonName", m_commonName);
  }

  if (m_domainComponentsHasBeenSet) {
    Aws::Utils::Array<JsonValue> domainComponentsJsonList(m_domainComponents.size());
    for (unsigned domainComponentsIndex = 0; domainComponentsIndex < domainComponentsJsonList.GetLength(); ++domainComponentsIndex) {
      domainComponentsJsonList[domainComponentsIndex].AsString(m_domainComponents[domainComponentsIndex]);
    }
    payload.WithArray("DomainComponents", std::move(domainComponentsJsonList));
  }

  if (m_countryHasBeenSet) {
    payload.WithString("Country", m_country);
  }

  if (m_customAttributesHasBeenSet) {
    Aws::Utils::Array<JsonValue> customAttributesJsonList(m_customAttributes.size());
    for (unsigned customAttributesIndex = 0; customAttributesIndex < customAttributesJsonList.GetLength(); ++customAttributesIndex) {
      customAttributesJsonList[customAttributesIndex].AsObject(m_customAttributes[customAttributesIndex].Jsonize());
    }
    payload.WithArray("CustomAttributes", std::move(customAttributesJsonList));
  }

  if (m_distinguishedNameQualifierHasBeenSet) {
    payload.WithString("DistinguishedNameQualifier", m_distinguishedNameQualifier);
  }

  if (m_generationQualifierHasBeenSet) {
    payload.WithString("GenerationQualifier", m_generationQualifier);
  }

  if (m_givenNameHasBeenSet) {
    payload.WithString("GivenName", m_givenName);
  }

  if (m_initialsHasBeenSet) {
    payload.WithString("Initials", m_initials);
  }

  if (m_localityHasBeenSet) {
    payload.WithString("Locality", m_locality);
  }

  if (m_organizationHasBeenSet) {
    payload.WithString("Organization", m_organization);
  }

  if (m_organizationalUnitHasBeenSet) {
    payload.WithString("OrganizationalUnit", m_organizationalUnit);
  }

  if (m_pseudonymHasBeenSet) {
    payload.WithString("Pseudonym", m_pseudonym);
  }

  if (m_serialNumberHasBeenSet) {
    payload.WithString("SerialNumber", m_serialNumber);
  }

  if (m_stateHasBeenSet) {
    payload.WithString("State", m_state);
  }

  if (m_surnameHasBeenSet) {
    payload.WithString("Surname", m_surname);
  }

  if (m_titleHasBeenSet) {
    payload.WithString("Title", m_title);
  }

  return payload;
}

}  // namespace Model
}  // namespace ACM
}  // namespace Aws
