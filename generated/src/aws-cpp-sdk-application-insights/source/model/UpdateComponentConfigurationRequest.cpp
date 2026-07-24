/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/application-insights/model/UpdateComponentConfigurationRequest.h>
#include <aws/crt/cbor/Cbor.h>

#include <utility>

using namespace Aws::ApplicationInsights::Model;
using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

Aws::String UpdateComponentConfigurationRequest::SerializePayload() const {
  Aws::Crt::Cbor::CborEncoder encoder;

  // Calculate map size
  size_t mapSize = 0;
  if (m_resourceGroupNameHasBeenSet) {
    mapSize++;
  }
  if (m_componentNameHasBeenSet) {
    mapSize++;
  }
  if (m_monitorHasBeenSet) {
    mapSize++;
  }
  if (m_tierHasBeenSet) {
    mapSize++;
  }
  if (m_componentConfigurationHasBeenSet) {
    mapSize++;
  }
  if (m_autoConfigEnabledHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_resourceGroupNameHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("ResourceGroupName"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_resourceGroupName.c_str()));
  }

  if (m_componentNameHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("ComponentName"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_componentName.c_str()));
  }

  if (m_monitorHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("Monitor"));
    encoder.WriteBool(m_monitor);
  }

  if (m_tierHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("Tier"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(TierMapper::GetNameForTier(m_tier).c_str()));
  }

  if (m_componentConfigurationHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("ComponentConfiguration"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_componentConfiguration.c_str()));
  }

  if (m_autoConfigEnabledHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("AutoConfigEnabled"));
    encoder.WriteBool(m_autoConfigEnabled);
  }
  const auto str = Aws::String(reinterpret_cast<char*>(encoder.GetEncodedData().ptr), encoder.GetEncodedData().len);
  return str;
}

Aws::Http::HeaderValueCollection UpdateComponentConfigurationRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.emplace(Aws::Http::CONTENT_TYPE_HEADER, Aws::CBOR_CONTENT_TYPE);
  headers.emplace(Aws::Http::SMITHY_PROTOCOL_HEADER, Aws::RPC_V2_CBOR);
  headers.emplace(Aws::Http::ACCEPT_HEADER, Aws::CBOR_CONTENT_TYPE);
  return headers;
}
