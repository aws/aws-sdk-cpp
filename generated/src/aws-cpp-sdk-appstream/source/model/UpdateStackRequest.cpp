/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appstream/model/UpdateStackRequest.h>
#include <aws/crt/cbor/Cbor.h>

#include <utility>

using namespace Aws::AppStream::Model;
using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

Aws::String UpdateStackRequest::SerializePayload() const {
  Aws::Crt::Cbor::CborEncoder encoder;

  // Calculate map size
  size_t mapSize = 0;
  if (m_displayNameHasBeenSet) {
    mapSize++;
  }
  if (m_descriptionHasBeenSet) {
    mapSize++;
  }
  if (m_nameHasBeenSet) {
    mapSize++;
  }
  if (m_storageConnectorsHasBeenSet) {
    mapSize++;
  }
  if (m_redirectURLHasBeenSet) {
    mapSize++;
  }
  if (m_feedbackURLHasBeenSet) {
    mapSize++;
  }
  if (m_attributesToDeleteHasBeenSet) {
    mapSize++;
  }
  if (m_userSettingsHasBeenSet) {
    mapSize++;
  }
  if (m_applicationSettingsHasBeenSet) {
    mapSize++;
  }
  if (m_accessEndpointsHasBeenSet) {
    mapSize++;
  }
  if (m_embedHostDomainsHasBeenSet) {
    mapSize++;
  }
  if (m_streamingExperienceSettingsHasBeenSet) {
    mapSize++;
  }
  if (m_contentRedirectionHasBeenSet) {
    mapSize++;
  }
  if (m_agentAccessConfigHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_displayNameHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("DisplayName"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_displayName.c_str()));
  }

  if (m_descriptionHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("Description"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_description.c_str()));
  }

  if (m_nameHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("Name"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_name.c_str()));
  }

  if (m_storageConnectorsHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("StorageConnectors"));
    encoder.WriteArrayStart(m_storageConnectors.size());
    for (const auto& item_0 : m_storageConnectors) {
      item_0.CborEncode(encoder);
    }
  }

  if (m_redirectURLHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("RedirectURL"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_redirectURL.c_str()));
  }

  if (m_feedbackURLHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("FeedbackURL"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_feedbackURL.c_str()));
  }

  if (m_attributesToDeleteHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("AttributesToDelete"));
    encoder.WriteArrayStart(m_attributesToDelete.size());
    for (const auto& item_0 : m_attributesToDelete) {
      encoder.WriteText(Aws::Crt::ByteCursorFromCString(StackAttributeMapper::GetNameForStackAttribute(item_0).c_str()));
    }
  }

  if (m_userSettingsHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("UserSettings"));
    encoder.WriteArrayStart(m_userSettings.size());
    for (const auto& item_0 : m_userSettings) {
      item_0.CborEncode(encoder);
    }
  }

  if (m_applicationSettingsHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("ApplicationSettings"));
    m_applicationSettings.CborEncode(encoder);
  }

  if (m_accessEndpointsHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("AccessEndpoints"));
    encoder.WriteArrayStart(m_accessEndpoints.size());
    for (const auto& item_0 : m_accessEndpoints) {
      item_0.CborEncode(encoder);
    }
  }

  if (m_embedHostDomainsHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("EmbedHostDomains"));
    encoder.WriteArrayStart(m_embedHostDomains.size());
    for (const auto& item_0 : m_embedHostDomains) {
      encoder.WriteText(Aws::Crt::ByteCursorFromCString(item_0.c_str()));
    }
  }

  if (m_streamingExperienceSettingsHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("StreamingExperienceSettings"));
    m_streamingExperienceSettings.CborEncode(encoder);
  }

  if (m_contentRedirectionHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("ContentRedirection"));
    m_contentRedirection.CborEncode(encoder);
  }

  if (m_agentAccessConfigHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("AgentAccessConfig"));
    m_agentAccessConfig.CborEncode(encoder);
  }
  const auto str = Aws::String(reinterpret_cast<char*>(encoder.GetEncodedData().ptr), encoder.GetEncodedData().len);
  return str;
}

Aws::Http::HeaderValueCollection UpdateStackRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.emplace(Aws::Http::CONTENT_TYPE_HEADER, Aws::CBOR_CONTENT_TYPE);
  headers.emplace(Aws::Http::SMITHY_PROTOCOL_HEADER, Aws::RPC_V2_CBOR);
  headers.emplace(Aws::Http::ACCEPT_HEADER, Aws::CBOR_CONTENT_TYPE);
  return headers;
}
