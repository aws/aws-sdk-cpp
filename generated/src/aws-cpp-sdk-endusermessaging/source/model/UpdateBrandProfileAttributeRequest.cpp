/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/HashingUtils.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/endusermessaging/model/UpdateBrandProfileAttributeRequest.h>

#include <utility>

using namespace Aws::EndUserMessaging::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String UpdateBrandProfileAttributeRequest::SerializePayload() const {
  JsonValue payload;

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

  return payload.View().WriteReadable();
}
