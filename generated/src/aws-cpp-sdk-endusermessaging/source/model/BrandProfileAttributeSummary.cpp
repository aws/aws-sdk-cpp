/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/endusermessaging/model/BrandProfileAttributeSummary.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace EndUserMessaging {
namespace Model {

BrandProfileAttributeSummary::BrandProfileAttributeSummary(JsonView jsonValue) { *this = jsonValue; }

BrandProfileAttributeSummary& BrandProfileAttributeSummary::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("attributeName")) {
    m_attributeName = jsonValue.GetString("attributeName");
    m_attributeNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("attributeType")) {
    m_attributeType = BrandProfileAttributeTypeMapper::GetBrandProfileAttributeTypeForName(jsonValue.GetString("attributeType"));
    m_attributeTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("description")) {
    m_description = jsonValue.GetString("description");
    m_descriptionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("category")) {
    m_category = jsonValue.GetString("category");
    m_categoryHasBeenSet = true;
  }
  if (jsonValue.ValueExists("createdAt")) {
    m_createdAt = jsonValue.GetDouble("createdAt");
    m_createdAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("updatedAt")) {
    m_updatedAt = jsonValue.GetDouble("updatedAt");
    m_updatedAtHasBeenSet = true;
  }
  return *this;
}

JsonValue BrandProfileAttributeSummary::Jsonize() const {
  JsonValue payload;

  if (m_attributeNameHasBeenSet) {
    payload.WithString("attributeName", m_attributeName);
  }

  if (m_attributeTypeHasBeenSet) {
    payload.WithString("attributeType", BrandProfileAttributeTypeMapper::GetNameForBrandProfileAttributeType(m_attributeType));
  }

  if (m_descriptionHasBeenSet) {
    payload.WithString("description", m_description);
  }

  if (m_categoryHasBeenSet) {
    payload.WithString("category", m_category);
  }

  if (m_createdAtHasBeenSet) {
    payload.WithDouble("createdAt", m_createdAt.SecondsWithMSPrecision());
  }

  if (m_updatedAtHasBeenSet) {
    payload.WithDouble("updatedAt", m_updatedAt.SecondsWithMSPrecision());
  }

  return payload;
}

}  // namespace Model
}  // namespace EndUserMessaging
}  // namespace Aws
