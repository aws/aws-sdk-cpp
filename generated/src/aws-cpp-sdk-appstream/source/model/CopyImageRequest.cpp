/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appstream/model/CopyImageRequest.h>
#include <aws/crt/cbor/Cbor.h>

#include <utility>

using namespace Aws::AppStream::Model;
using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

Aws::String CopyImageRequest::SerializePayload() const {
  Aws::Crt::Cbor::CborEncoder encoder;

  // Calculate map size
  size_t mapSize = 0;
  if (m_sourceImageNameHasBeenSet) {
    mapSize++;
  }
  if (m_destinationImageNameHasBeenSet) {
    mapSize++;
  }
  if (m_destinationRegionHasBeenSet) {
    mapSize++;
  }
  if (m_destinationImageDescriptionHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_sourceImageNameHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("SourceImageName"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_sourceImageName.c_str()));
  }

  if (m_destinationImageNameHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("DestinationImageName"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_destinationImageName.c_str()));
  }

  if (m_destinationRegionHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("DestinationRegion"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_destinationRegion.c_str()));
  }

  if (m_destinationImageDescriptionHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("DestinationImageDescription"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_destinationImageDescription.c_str()));
  }
  const auto str = Aws::String(reinterpret_cast<char*>(encoder.GetEncodedData().ptr), encoder.GetEncodedData().len);
  return str;
}

Aws::Http::HeaderValueCollection CopyImageRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.emplace(Aws::Http::CONTENT_TYPE_HEADER, Aws::CBOR_CONTENT_TYPE);
  headers.emplace(Aws::Http::SMITHY_PROTOCOL_HEADER, Aws::RPC_V2_CBOR);
  headers.emplace(Aws::Http::ACCEPT_HEADER, Aws::CBOR_CONTENT_TYPE);
  return headers;
}
