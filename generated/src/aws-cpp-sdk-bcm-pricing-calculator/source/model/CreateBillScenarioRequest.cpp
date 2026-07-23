/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bcm-pricing-calculator/model/CreateBillScenarioRequest.h>
#include <aws/crt/cbor/Cbor.h>

#include <utility>

using namespace Aws::BCMPricingCalculator::Model;
using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

Aws::String CreateBillScenarioRequest::SerializePayload() const {
  Aws::Crt::Cbor::CborEncoder encoder;

  // Calculate map size
  size_t mapSize = 0;
  if (m_nameHasBeenSet) {
    mapSize++;
  }
  if (m_clientTokenHasBeenSet) {
    mapSize++;
  }
  if (m_tagsHasBeenSet) {
    mapSize++;
  }
  if (m_groupSharingPreferenceHasBeenSet) {
    mapSize++;
  }
  if (m_costCategoryGroupSharingPreferenceArnHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_nameHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("name"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_name.c_str()));
  }

  if (m_clientTokenHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("clientToken"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_clientToken.c_str()));
  }

  if (m_tagsHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("tags"));
    encoder.WriteMapStart(m_tags.size());
    for (const auto& item_0 : m_tags) {
      encoder.WriteText(Aws::Crt::ByteCursorFromCString(item_0.first.c_str()));
      encoder.WriteText(Aws::Crt::ByteCursorFromCString(item_0.second.c_str()));
    }
  }

  if (m_groupSharingPreferenceHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("groupSharingPreference"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(
        GroupSharingPreferenceEnumMapper::GetNameForGroupSharingPreferenceEnum(m_groupSharingPreference).c_str()));
  }

  if (m_costCategoryGroupSharingPreferenceArnHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("costCategoryGroupSharingPreferenceArn"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_costCategoryGroupSharingPreferenceArn.c_str()));
  }
  const auto str = Aws::String(reinterpret_cast<char*>(encoder.GetEncodedData().ptr), encoder.GetEncodedData().len);
  return str;
}

Aws::Http::HeaderValueCollection CreateBillScenarioRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.emplace(Aws::Http::CONTENT_TYPE_HEADER, Aws::CBOR_CONTENT_TYPE);
  headers.emplace(Aws::Http::SMITHY_PROTOCOL_HEADER, Aws::RPC_V2_CBOR);
  headers.emplace(Aws::Http::ACCEPT_HEADER, Aws::CBOR_CONTENT_TYPE);
  return headers;
}
