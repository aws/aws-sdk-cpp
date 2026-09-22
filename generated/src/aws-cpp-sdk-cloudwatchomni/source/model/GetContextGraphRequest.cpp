/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudwatchomni/model/GetContextGraphRequest.h>
#include <aws/crt/cbor/Cbor.h>

#include <utility>

using namespace Aws::CloudWatchOmni::Model;
using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

Aws::String GetContextGraphRequest::SerializePayload() const {
  Aws::Crt::Cbor::CborEncoder encoder;

  // Calculate map size
  size_t mapSize = 0;
  if (m_nodeFiltersHasBeenSet) {
    mapSize++;
  }
  if (m_edgeFiltersHasBeenSet) {
    mapSize++;
  }
  if (m_startTimeHasBeenSet) {
    mapSize++;
  }
  if (m_endTimeHasBeenSet) {
    mapSize++;
  }
  if (m_depthHasBeenSet) {
    mapSize++;
  }
  if (m_maxResultsHasBeenSet) {
    mapSize++;
  }
  if (m_maxEdgesPerNodeHasBeenSet) {
    mapSize++;
  }
  if (m_includeMetadataHasBeenSet) {
    mapSize++;
  }
  if (m_nextTokenHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_nodeFiltersHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("nodeFilters"));
    m_nodeFilters.CborEncode(encoder);
  }

  if (m_edgeFiltersHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("edgeFilters"));
    m_edgeFilters.CborEncode(encoder);
  }

  if (m_startTimeHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("startTime"));
    encoder.WriteTag(1);  // 1 represents Epoch-based date/time. See https://www.rfc-editor.org/rfc/rfc8949.html#tags
    encoder.WriteUInt(m_startTime.Seconds());
  }

  if (m_endTimeHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("endTime"));
    encoder.WriteTag(1);  // 1 represents Epoch-based date/time. See https://www.rfc-editor.org/rfc/rfc8949.html#tags
    encoder.WriteUInt(m_endTime.Seconds());
  }

  if (m_depthHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("depth"));
    (m_depth >= 0) ? encoder.WriteUInt(m_depth) : encoder.WriteNegInt(m_depth);
  }

  if (m_maxResultsHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("maxResults"));
    (m_maxResults >= 0) ? encoder.WriteUInt(m_maxResults) : encoder.WriteNegInt(m_maxResults);
  }

  if (m_maxEdgesPerNodeHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("maxEdgesPerNode"));
    (m_maxEdgesPerNode >= 0) ? encoder.WriteUInt(m_maxEdgesPerNode) : encoder.WriteNegInt(m_maxEdgesPerNode);
  }

  if (m_includeMetadataHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("includeMetadata"));
    encoder.WriteBool(m_includeMetadata);
  }

  if (m_nextTokenHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("nextToken"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_nextToken.c_str()));
  }
  const auto str = Aws::String(reinterpret_cast<char*>(encoder.GetEncodedData().ptr), encoder.GetEncodedData().len);
  return str;
}

Aws::Http::HeaderValueCollection GetContextGraphRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.emplace(Aws::Http::CONTENT_TYPE_HEADER, Aws::CBOR_CONTENT_TYPE);
  headers.emplace(Aws::Http::SMITHY_PROTOCOL_HEADER, Aws::RPC_V2_CBOR);
  headers.emplace(Aws::Http::ACCEPT_HEADER, Aws::CBOR_CONTENT_TYPE);
  return headers;
}
