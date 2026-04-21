/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/compute-optimizer/model/ExportEBSVolumeRecommendationsRequest.h>
#include <aws/crt/cbor/Cbor.h>

#include <utility>

using namespace Aws::ComputeOptimizer::Model;
using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

Aws::String ExportEBSVolumeRecommendationsRequest::SerializePayload() const {
  Aws::Crt::Cbor::CborEncoder encoder;

  // Calculate map size
  size_t mapSize = 0;
  if (m_accountIdsHasBeenSet) {
    mapSize++;
  }
  if (m_filtersHasBeenSet) {
    mapSize++;
  }
  if (m_fieldsToExportHasBeenSet) {
    mapSize++;
  }
  if (m_s3DestinationConfigHasBeenSet) {
    mapSize++;
  }
  if (m_fileFormatHasBeenSet) {
    mapSize++;
  }
  if (m_includeMemberAccountsHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_accountIdsHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("accountIds"));
    encoder.WriteArrayStart(m_accountIds.size());
    for (const auto& item_0 : m_accountIds) {
      encoder.WriteText(Aws::Crt::ByteCursorFromCString(item_0.c_str()));
    }
  }

  if (m_filtersHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("filters"));
    encoder.WriteArrayStart(m_filters.size());
    for (const auto& item_0 : m_filters) {
      item_0.CborEncode(encoder);
    }
  }

  if (m_fieldsToExportHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("fieldsToExport"));
    encoder.WriteArrayStart(m_fieldsToExport.size());
    for (const auto& item_0 : m_fieldsToExport) {
      encoder.WriteText(Aws::Crt::ByteCursorFromCString(ExportableVolumeFieldMapper::GetNameForExportableVolumeField(item_0).c_str()));
    }
  }

  if (m_s3DestinationConfigHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("s3DestinationConfig"));
    m_s3DestinationConfig.CborEncode(encoder);
  }

  if (m_fileFormatHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("fileFormat"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(FileFormatMapper::GetNameForFileFormat(m_fileFormat).c_str()));
  }

  if (m_includeMemberAccountsHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("includeMemberAccounts"));
    encoder.WriteBool(m_includeMemberAccounts);
  }
  const auto str = Aws::String(reinterpret_cast<char*>(encoder.GetEncodedData().ptr), encoder.GetEncodedData().len);
  return str;
}

Aws::Http::HeaderValueCollection ExportEBSVolumeRecommendationsRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.emplace(Aws::Http::CONTENT_TYPE_HEADER, Aws::CBOR_CONTENT_TYPE);
  headers.emplace(Aws::Http::SMITHY_PROTOCOL_HEADER, Aws::RPC_V2_CBOR);
  headers.emplace(Aws::Http::ACCEPT_HEADER, Aws::CBOR_CONTENT_TYPE);
  return headers;
}
