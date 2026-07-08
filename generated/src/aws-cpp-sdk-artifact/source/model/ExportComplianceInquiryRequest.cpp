/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/artifact/model/ExportComplianceInquiryRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Artifact::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String ExportComplianceInquiryRequest::SerializePayload() const {
  JsonValue payload;

  if (m_complianceInquiryIdHasBeenSet) {
    payload.WithString("complianceInquiryId", m_complianceInquiryId);
  }

  if (m_queryIdentifiersHasBeenSet) {
    Aws::Utils::Array<JsonValue> queryIdentifiersJsonList(m_queryIdentifiers.size());
    for (unsigned queryIdentifiersIndex = 0; queryIdentifiersIndex < queryIdentifiersJsonList.GetLength(); ++queryIdentifiersIndex) {
      queryIdentifiersJsonList[queryIdentifiersIndex].AsInteger(m_queryIdentifiers[queryIdentifiersIndex]);
    }
    payload.WithArray("queryIdentifiers", std::move(queryIdentifiersJsonList));
  }

  if (m_includeCitationsHasBeenSet) {
    payload.WithBool("includeCitations", m_includeCitations);
  }

  return payload.View().WriteReadable();
}
