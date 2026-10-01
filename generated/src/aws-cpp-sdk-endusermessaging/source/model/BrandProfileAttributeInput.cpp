/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/HashingUtils.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/endusermessaging/model/BrandProfileAttributeInput.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace EndUserMessaging {
namespace Model {

BrandProfileAttributeInput::BrandProfileAttributeInput(JsonView jsonValue) { *this = jsonValue; }

BrandProfileAttributeInput& BrandProfileAttributeInput::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("attributeName")) {
    m_attributeName = jsonValue.GetString("attributeName");
    m_attributeNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("attributeType")) {
    m_attributeType = BrandProfileAttributeTypeMapper::GetBrandProfileAttributeTypeForName(jsonValue.GetString("attributeType"));
    m_attributeTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("attributeValue")) {
    m_attributeValue = jsonValue.GetString("attributeValue");
    m_attributeValueHasBeenSet = true;
  }
  if (jsonValue.ValueExists("attachmentBody")) {
    m_attachmentBody = HashingUtils::Base64Decode(jsonValue.GetString("attachmentBody"));
    m_attachmentBodyHasBeenSet = true;
  }
  if (jsonValue.ValueExists("description")) {
    m_description = jsonValue.GetString("description");
    m_descriptionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("category")) {
    m_category = jsonValue.GetString("category");
    m_categoryHasBeenSet = true;
  }
  return *this;
}

JsonValue BrandProfileAttributeInput::Jsonize() const {
  JsonValue payload;

  if (m_attributeNameHasBeenSet) {
    payload.WithString("attributeName", m_attributeName);
  }

  if (m_attributeTypeHasBeenSet) {
    payload.WithString("attributeType", BrandProfileAttributeTypeMapper::GetNameForBrandProfileAttributeType(m_attributeType));
  }

  if (m_attributeValueHasBeenSet) {
    payload.WithString("attributeValue", m_attributeValue);
  }

  if (m_attachmentBodyHasBeenSet) {
    payload.WithString("attachmentBody", HashingUtils::Base64Encode(m_attachmentBody));
  }

  if (m_descriptionHasBeenSet) {
    payload.WithString("description", m_description);
  }

  if (m_categoryHasBeenSet) {
    payload.WithString("category", m_category);
  }

  return payload;
}

}  // namespace Model
}  // namespace EndUserMessaging
}  // namespace Aws
