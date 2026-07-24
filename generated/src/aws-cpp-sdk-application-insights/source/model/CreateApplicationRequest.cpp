/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/application-insights/model/CreateApplicationRequest.h>
#include <aws/crt/cbor/Cbor.h>

#include <utility>

using namespace Aws::ApplicationInsights::Model;
using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

Aws::String CreateApplicationRequest::SerializePayload() const {
  Aws::Crt::Cbor::CborEncoder encoder;

  // Calculate map size
  size_t mapSize = 0;
  if (m_resourceGroupNameHasBeenSet) {
    mapSize++;
  }
  if (m_opsCenterEnabledHasBeenSet) {
    mapSize++;
  }
  if (m_cWEMonitorEnabledHasBeenSet) {
    mapSize++;
  }
  if (m_opsItemSNSTopicArnHasBeenSet) {
    mapSize++;
  }
  if (m_sNSNotificationArnHasBeenSet) {
    mapSize++;
  }
  if (m_tagsHasBeenSet) {
    mapSize++;
  }
  if (m_autoConfigEnabledHasBeenSet) {
    mapSize++;
  }
  if (m_autoCreateHasBeenSet) {
    mapSize++;
  }
  if (m_groupingTypeHasBeenSet) {
    mapSize++;
  }
  if (m_attachMissingPermissionHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_resourceGroupNameHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("ResourceGroupName"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_resourceGroupName.c_str()));
  }

  if (m_opsCenterEnabledHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("OpsCenterEnabled"));
    encoder.WriteBool(m_opsCenterEnabled);
  }

  if (m_cWEMonitorEnabledHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("CWEMonitorEnabled"));
    encoder.WriteBool(m_cWEMonitorEnabled);
  }

  if (m_opsItemSNSTopicArnHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("OpsItemSNSTopicArn"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_opsItemSNSTopicArn.c_str()));
  }

  if (m_sNSNotificationArnHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("SNSNotificationArn"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_sNSNotificationArn.c_str()));
  }

  if (m_tagsHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("Tags"));
    encoder.WriteArrayStart(m_tags.size());
    for (const auto& item_0 : m_tags) {
      item_0.CborEncode(encoder);
    }
  }

  if (m_autoConfigEnabledHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("AutoConfigEnabled"));
    encoder.WriteBool(m_autoConfigEnabled);
  }

  if (m_autoCreateHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("AutoCreate"));
    encoder.WriteBool(m_autoCreate);
  }

  if (m_groupingTypeHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("GroupingType"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(GroupingTypeMapper::GetNameForGroupingType(m_groupingType).c_str()));
  }

  if (m_attachMissingPermissionHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("AttachMissingPermission"));
    encoder.WriteBool(m_attachMissingPermission);
  }
  const auto str = Aws::String(reinterpret_cast<char*>(encoder.GetEncodedData().ptr), encoder.GetEncodedData().len);
  return str;
}

Aws::Http::HeaderValueCollection CreateApplicationRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.emplace(Aws::Http::CONTENT_TYPE_HEADER, Aws::CBOR_CONTENT_TYPE);
  headers.emplace(Aws::Http::SMITHY_PROTOCOL_HEADER, Aws::RPC_V2_CBOR);
  headers.emplace(Aws::Http::ACCEPT_HEADER, Aws::CBOR_CONTENT_TYPE);
  return headers;
}
