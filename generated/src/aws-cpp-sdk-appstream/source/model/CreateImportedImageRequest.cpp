/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appstream/model/CreateImportedImageRequest.h>
#include <aws/crt/cbor/Cbor.h>

#include <utility>

using namespace Aws::AppStream::Model;
using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

Aws::String CreateImportedImageRequest::SerializePayload() const {
  Aws::Crt::Cbor::CborEncoder encoder;

  // Calculate map size
  size_t mapSize = 0;
  if (m_nameHasBeenSet) {
    mapSize++;
  }
  if (m_sourceAmiIdHasBeenSet) {
    mapSize++;
  }
  if (m_workspaceImageIdHasBeenSet) {
    mapSize++;
  }
  if (m_iamRoleArnHasBeenSet) {
    mapSize++;
  }
  if (m_descriptionHasBeenSet) {
    mapSize++;
  }
  if (m_displayNameHasBeenSet) {
    mapSize++;
  }
  if (m_tagsHasBeenSet) {
    mapSize++;
  }
  if (m_runtimeValidationConfigHasBeenSet) {
    mapSize++;
  }
  if (m_agentSoftwareVersionHasBeenSet) {
    mapSize++;
  }
  if (m_appCatalogConfigHasBeenSet) {
    mapSize++;
  }
  if (m_dryRunHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_nameHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("Name"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_name.c_str()));
  }

  if (m_sourceAmiIdHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("SourceAmiId"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_sourceAmiId.c_str()));
  }

  if (m_workspaceImageIdHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("WorkspaceImageId"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_workspaceImageId.c_str()));
  }

  if (m_iamRoleArnHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("IamRoleArn"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_iamRoleArn.c_str()));
  }

  if (m_descriptionHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("Description"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_description.c_str()));
  }

  if (m_displayNameHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("DisplayName"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_displayName.c_str()));
  }

  if (m_tagsHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("Tags"));
    encoder.WriteMapStart(m_tags.size());
    for (const auto& item_0 : m_tags) {
      encoder.WriteText(Aws::Crt::ByteCursorFromCString(item_0.first.c_str()));
      encoder.WriteText(Aws::Crt::ByteCursorFromCString(item_0.second.c_str()));
    }
  }

  if (m_runtimeValidationConfigHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("RuntimeValidationConfig"));
    m_runtimeValidationConfig.CborEncode(encoder);
  }

  if (m_agentSoftwareVersionHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("AgentSoftwareVersion"));
    encoder.WriteText(
        Aws::Crt::ByteCursorFromCString(AgentSoftwareVersionMapper::GetNameForAgentSoftwareVersion(m_agentSoftwareVersion).c_str()));
  }

  if (m_appCatalogConfigHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("AppCatalogConfig"));
    encoder.WriteArrayStart(m_appCatalogConfig.size());
    for (const auto& item_0 : m_appCatalogConfig) {
      item_0.CborEncode(encoder);
    }
  }

  if (m_dryRunHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("DryRun"));
    encoder.WriteBool(m_dryRun);
  }
  const auto str = Aws::String(reinterpret_cast<char*>(encoder.GetEncodedData().ptr), encoder.GetEncodedData().len);
  return str;
}

Aws::Http::HeaderValueCollection CreateImportedImageRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.emplace(Aws::Http::CONTENT_TYPE_HEADER, Aws::CBOR_CONTENT_TYPE);
  headers.emplace(Aws::Http::SMITHY_PROTOCOL_HEADER, Aws::RPC_V2_CBOR);
  headers.emplace(Aws::Http::ACCEPT_HEADER, Aws::CBOR_CONTENT_TYPE);
  return headers;
}
