/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appstream/model/CreateUpdatedImageRequest.h>
#include <aws/crt/cbor/Cbor.h>

#include <utility>

using namespace Aws::AppStream::Model;
using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

Aws::String CreateUpdatedImageRequest::SerializePayload() const {
  Aws::Crt::Cbor::CborEncoder encoder;

  // Calculate map size
  size_t mapSize = 0;
  if (m_existingImageNameHasBeenSet) {
    mapSize++;
  }
  if (m_newImageNameHasBeenSet) {
    mapSize++;
  }
  if (m_newImageDescriptionHasBeenSet) {
    mapSize++;
  }
  if (m_newImageDisplayNameHasBeenSet) {
    mapSize++;
  }
  if (m_newImageTagsHasBeenSet) {
    mapSize++;
  }
  if (m_dryRunHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_existingImageNameHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("existingImageName"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_existingImageName.c_str()));
  }

  if (m_newImageNameHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("newImageName"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_newImageName.c_str()));
  }

  if (m_newImageDescriptionHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("newImageDescription"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_newImageDescription.c_str()));
  }

  if (m_newImageDisplayNameHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("newImageDisplayName"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_newImageDisplayName.c_str()));
  }

  if (m_newImageTagsHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("newImageTags"));
    encoder.WriteMapStart(m_newImageTags.size());
    for (const auto& item_0 : m_newImageTags) {
      encoder.WriteText(Aws::Crt::ByteCursorFromCString(item_0.first.c_str()));
      encoder.WriteText(Aws::Crt::ByteCursorFromCString(item_0.second.c_str()));
    }
  }

  if (m_dryRunHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("dryRun"));
    encoder.WriteBool(m_dryRun);
  }
  const auto str = Aws::String(reinterpret_cast<char*>(encoder.GetEncodedData().ptr), encoder.GetEncodedData().len);
  return str;
}

Aws::Http::HeaderValueCollection CreateUpdatedImageRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.emplace(Aws::Http::CONTENT_TYPE_HEADER, Aws::CBOR_CONTENT_TYPE);
  headers.emplace(Aws::Http::SMITHY_PROTOCOL_HEADER, Aws::RPC_V2_CBOR);
  headers.emplace(Aws::Http::ACCEPT_HEADER, Aws::CBOR_CONTENT_TYPE);
  return headers;
}
