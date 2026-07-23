/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bcm-pricing-calculator/model/UpdatePreferencesRequest.h>
#include <aws/crt/cbor/Cbor.h>

#include <utility>

using namespace Aws::BCMPricingCalculator::Model;
using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

Aws::String UpdatePreferencesRequest::SerializePayload() const {
  Aws::Crt::Cbor::CborEncoder encoder;

  // Calculate map size
  size_t mapSize = 0;
  if (m_managementAccountRateTypeSelectionsHasBeenSet) {
    mapSize++;
  }
  if (m_memberAccountRateTypeSelectionsHasBeenSet) {
    mapSize++;
  }
  if (m_standaloneAccountRateTypeSelectionsHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_managementAccountRateTypeSelectionsHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("managementAccountRateTypeSelections"));
    encoder.WriteArrayStart(m_managementAccountRateTypeSelections.size());
    for (const auto& item_0 : m_managementAccountRateTypeSelections) {
      encoder.WriteText(Aws::Crt::ByteCursorFromCString(RateTypeMapper::GetNameForRateType(item_0).c_str()));
    }
  }

  if (m_memberAccountRateTypeSelectionsHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("memberAccountRateTypeSelections"));
    encoder.WriteArrayStart(m_memberAccountRateTypeSelections.size());
    for (const auto& item_0 : m_memberAccountRateTypeSelections) {
      encoder.WriteText(Aws::Crt::ByteCursorFromCString(RateTypeMapper::GetNameForRateType(item_0).c_str()));
    }
  }

  if (m_standaloneAccountRateTypeSelectionsHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("standaloneAccountRateTypeSelections"));
    encoder.WriteArrayStart(m_standaloneAccountRateTypeSelections.size());
    for (const auto& item_0 : m_standaloneAccountRateTypeSelections) {
      encoder.WriteText(Aws::Crt::ByteCursorFromCString(RateTypeMapper::GetNameForRateType(item_0).c_str()));
    }
  }
  const auto str = Aws::String(reinterpret_cast<char*>(encoder.GetEncodedData().ptr), encoder.GetEncodedData().len);
  return str;
}

Aws::Http::HeaderValueCollection UpdatePreferencesRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.emplace(Aws::Http::CONTENT_TYPE_HEADER, Aws::CBOR_CONTENT_TYPE);
  headers.emplace(Aws::Http::SMITHY_PROTOCOL_HEADER, Aws::RPC_V2_CBOR);
  headers.emplace(Aws::Http::ACCEPT_HEADER, Aws::CBOR_CONTENT_TYPE);
  return headers;
}
