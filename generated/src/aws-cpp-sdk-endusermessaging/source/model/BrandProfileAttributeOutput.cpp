/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/endusermessaging/model/BrandProfileAttributeOutput.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace EndUserMessaging {
namespace Model {

BrandProfileAttributeOutput::BrandProfileAttributeOutput(JsonView jsonValue) { *this = jsonValue; }

BrandProfileAttributeOutput& BrandProfileAttributeOutput::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("attributeName")) {
    m_attributeName = jsonValue.GetString("attributeName");
    m_attributeNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("attributeType")) {
    m_attributeType = BrandProfileAttributeTypeMapper::GetBrandProfileAttributeTypeForName(jsonValue.GetString("attributeType"));
    m_attributeTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("mediaDownloadUrl")) {
    m_mediaDownloadUrl = jsonValue.GetString("mediaDownloadUrl");
    m_mediaDownloadUrlHasBeenSet = true;
  }
  return *this;
}

JsonValue BrandProfileAttributeOutput::Jsonize() const {
  JsonValue payload;

  if (m_attributeNameHasBeenSet) {
    payload.WithString("attributeName", m_attributeName);
  }

  if (m_attributeTypeHasBeenSet) {
    payload.WithString("attributeType", BrandProfileAttributeTypeMapper::GetNameForBrandProfileAttributeType(m_attributeType));
  }

  if (m_mediaDownloadUrlHasBeenSet) {
    payload.WithString("mediaDownloadUrl", m_mediaDownloadUrl);
  }

  return payload;
}

}  // namespace Model
}  // namespace EndUserMessaging
}  // namespace Aws
