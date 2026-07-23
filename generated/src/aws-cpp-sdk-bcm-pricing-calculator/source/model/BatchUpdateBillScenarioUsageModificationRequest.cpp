/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bcm-pricing-calculator/model/BatchUpdateBillScenarioUsageModificationRequest.h>
#include <aws/crt/cbor/Cbor.h>

#include <utility>

using namespace Aws::BCMPricingCalculator::Model;
using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

Aws::String BatchUpdateBillScenarioUsageModificationRequest::SerializePayload() const {
  Aws::Crt::Cbor::CborEncoder encoder;

  // Calculate map size
  size_t mapSize = 0;
  if (m_billScenarioIdHasBeenSet) {
    mapSize++;
  }
  if (m_usageModificationsHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_billScenarioIdHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("billScenarioId"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_billScenarioId.c_str()));
  }

  if (m_usageModificationsHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("usageModifications"));
    encoder.WriteArrayStart(m_usageModifications.size());
    for (const auto& item_0 : m_usageModifications) {
      item_0.CborEncode(encoder);
    }
  }
  const auto str = Aws::String(reinterpret_cast<char*>(encoder.GetEncodedData().ptr), encoder.GetEncodedData().len);
  return str;
}

Aws::Http::HeaderValueCollection BatchUpdateBillScenarioUsageModificationRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.emplace(Aws::Http::CONTENT_TYPE_HEADER, Aws::CBOR_CONTENT_TYPE);
  headers.emplace(Aws::Http::SMITHY_PROTOCOL_HEADER, Aws::RPC_V2_CBOR);
  headers.emplace(Aws::Http::ACCEPT_HEADER, Aws::CBOR_CONTENT_TYPE);
  return headers;
}
