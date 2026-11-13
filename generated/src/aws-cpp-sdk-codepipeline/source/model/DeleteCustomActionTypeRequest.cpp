/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codepipeline/model/DeleteCustomActionTypeRequest.h>
#include <aws/crt/cbor/Cbor.h>

#include <utility>

using namespace Aws::CodePipeline::Model;
using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

Aws::String DeleteCustomActionTypeRequest::SerializePayload() const {
  Aws::Crt::Cbor::CborEncoder encoder;

  // Calculate map size
  size_t mapSize = 0;
  if (m_categoryHasBeenSet) {
    mapSize++;
  }
  if (m_providerHasBeenSet) {
    mapSize++;
  }
  if (m_versionHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_categoryHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("category"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(ActionCategoryMapper::GetNameForActionCategory(m_category).c_str()));
  }

  if (m_providerHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("provider"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_provider.c_str()));
  }

  if (m_versionHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("version"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_version.c_str()));
  }
  const auto str = Aws::String(reinterpret_cast<char*>(encoder.GetEncodedData().ptr), encoder.GetEncodedData().len);
  return str;
}

Aws::Http::HeaderValueCollection DeleteCustomActionTypeRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.emplace(Aws::Http::CONTENT_TYPE_HEADER, Aws::CBOR_CONTENT_TYPE);
  headers.emplace(Aws::Http::SMITHY_PROTOCOL_HEADER, Aws::RPC_V2_CBOR);
  headers.emplace(Aws::Http::ACCEPT_HEADER, Aws::CBOR_CONTENT_TYPE);
  return headers;
}
