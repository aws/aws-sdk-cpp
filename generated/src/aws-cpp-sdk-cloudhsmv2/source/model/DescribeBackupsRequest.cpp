/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudhsmv2/model/DescribeBackupsRequest.h>
#include <aws/crt/cbor/Cbor.h>

#include <utility>

using namespace Aws::CloudHSMV2::Model;
using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

Aws::String DescribeBackupsRequest::SerializePayload() const {
  Aws::Crt::Cbor::CborEncoder encoder;

  // Calculate map size
  size_t mapSize = 0;
  if (m_nextTokenHasBeenSet) {
    mapSize++;
  }
  if (m_maxResultsHasBeenSet) {
    mapSize++;
  }
  if (m_filtersHasBeenSet) {
    mapSize++;
  }
  if (m_sharedHasBeenSet) {
    mapSize++;
  }
  if (m_sortAscendingHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_nextTokenHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("NextToken"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_nextToken.c_str()));
  }

  if (m_maxResultsHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("MaxResults"));
    (m_maxResults >= 0) ? encoder.WriteUInt(m_maxResults) : encoder.WriteNegInt(m_maxResults);
  }

  if (m_filtersHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("Filters"));
    encoder.WriteMapStart(m_filters.size());
    for (const auto& item_0 : m_filters) {
      encoder.WriteText(Aws::Crt::ByteCursorFromCString(item_0.first.c_str()));
      encoder.WriteArrayStart(item_0.second.size());
      for (const auto& item_1 : item_0.second) {
        encoder.WriteText(Aws::Crt::ByteCursorFromCString(item_1.c_str()));
      }
    }
  }

  if (m_sharedHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("Shared"));
    encoder.WriteBool(m_shared);
  }

  if (m_sortAscendingHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("SortAscending"));
    encoder.WriteBool(m_sortAscending);
  }
  const auto str = Aws::String(reinterpret_cast<char*>(encoder.GetEncodedData().ptr), encoder.GetEncodedData().len);
  return str;
}

Aws::Http::HeaderValueCollection DescribeBackupsRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.emplace(Aws::Http::CONTENT_TYPE_HEADER, Aws::CBOR_CONTENT_TYPE);
  headers.emplace(Aws::Http::SMITHY_PROTOCOL_HEADER, Aws::RPC_V2_CBOR);
  headers.emplace(Aws::Http::ACCEPT_HEADER, Aws::CBOR_CONTENT_TYPE);
  return headers;
}
