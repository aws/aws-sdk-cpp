/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/compute-optimizer-automation/model/DeleteOrganizationEnrollmentConfigurationRequest.h>
#include <aws/crt/cbor/Cbor.h>

#include <utility>

using namespace Aws::ComputeOptimizerAutomation::Model;
using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

Aws::String DeleteOrganizationEnrollmentConfigurationRequest::SerializePayload() const {
  Aws::Crt::Cbor::CborEncoder encoder;

  // Calculate map size
  size_t mapSize = 0;
  if (m_targetHasBeenSet) {
    mapSize++;
  }
  if (m_configurationTypesHasBeenSet) {
    mapSize++;
  }
  if (m_clientTokenHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_targetHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("target"));
    m_target.CborEncode(encoder);
  }

  if (m_configurationTypesHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("configurationTypes"));
    encoder.WriteArrayStart(m_configurationTypes.size());
    for (const auto& item_0 : m_configurationTypes) {
      encoder.WriteText(Aws::Crt::ByteCursorFromCString(
          OrganizationEnrollmentConfigurationTypeMapper::GetNameForOrganizationEnrollmentConfigurationType(item_0).c_str()));
    }
  }

  if (m_clientTokenHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("clientToken"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_clientToken.c_str()));
  }
  const auto str = Aws::String(reinterpret_cast<char*>(encoder.GetEncodedData().ptr), encoder.GetEncodedData().len);
  return str;
}

Aws::Http::HeaderValueCollection DeleteOrganizationEnrollmentConfigurationRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.emplace(Aws::Http::CONTENT_TYPE_HEADER, Aws::CBOR_CONTENT_TYPE);
  headers.emplace(Aws::Http::SMITHY_PROTOCOL_HEADER, Aws::RPC_V2_CBOR);
  headers.emplace(Aws::Http::ACCEPT_HEADER, Aws::CBOR_CONTENT_TYPE);
  return headers;
}
