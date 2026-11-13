/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codebuild/model/UpdateWebhookRequest.h>
#include <aws/crt/cbor/Cbor.h>

#include <utility>

using namespace Aws::CodeBuild::Model;
using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

Aws::String UpdateWebhookRequest::SerializePayload() const {
  Aws::Crt::Cbor::CborEncoder encoder;

  // Calculate map size
  size_t mapSize = 0;
  if (m_projectNameHasBeenSet) {
    mapSize++;
  }
  if (m_branchFilterHasBeenSet) {
    mapSize++;
  }
  if (m_rotateSecretHasBeenSet) {
    mapSize++;
  }
  if (m_filterGroupsHasBeenSet) {
    mapSize++;
  }
  if (m_buildTypeHasBeenSet) {
    mapSize++;
  }
  if (m_pullRequestBuildPolicyHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_projectNameHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("projectName"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_projectName.c_str()));
  }

  if (m_branchFilterHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("branchFilter"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_branchFilter.c_str()));
  }

  if (m_rotateSecretHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("rotateSecret"));
    encoder.WriteBool(m_rotateSecret);
  }

  if (m_filterGroupsHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("filterGroups"));
    encoder.WriteArrayStart(m_filterGroups.size());
    for (const auto& item_0 : m_filterGroups) {
      encoder.WriteArrayStart(item_0.size());
      for (const auto& item_1 : item_0) {
        item_1.CborEncode(encoder);
      }
    }
  }

  if (m_buildTypeHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("buildType"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(WebhookBuildTypeMapper::GetNameForWebhookBuildType(m_buildType).c_str()));
  }

  if (m_pullRequestBuildPolicyHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("pullRequestBuildPolicy"));
    m_pullRequestBuildPolicy.CborEncode(encoder);
  }
  const auto str = Aws::String(reinterpret_cast<char*>(encoder.GetEncodedData().ptr), encoder.GetEncodedData().len);
  return str;
}

Aws::Http::HeaderValueCollection UpdateWebhookRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.emplace(Aws::Http::CONTENT_TYPE_HEADER, Aws::CBOR_CONTENT_TYPE);
  headers.emplace(Aws::Http::SMITHY_PROTOCOL_HEADER, Aws::RPC_V2_CBOR);
  headers.emplace(Aws::Http::ACCEPT_HEADER, Aws::CBOR_CONTENT_TYPE);
  return headers;
}
