/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/comprehend/model/CreateDatasetRequest.h>
#include <aws/crt/cbor/Cbor.h>

#include <utility>

using namespace Aws::Comprehend::Model;
using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

Aws::String CreateDatasetRequest::SerializePayload() const {
  Aws::Crt::Cbor::CborEncoder encoder;

  // Calculate map size
  size_t mapSize = 0;
  if (m_flywheelArnHasBeenSet) {
    mapSize++;
  }
  if (m_datasetNameHasBeenSet) {
    mapSize++;
  }
  if (m_datasetTypeHasBeenSet) {
    mapSize++;
  }
  if (m_descriptionHasBeenSet) {
    mapSize++;
  }
  if (m_inputDataConfigHasBeenSet) {
    mapSize++;
  }
  if (m_clientRequestTokenHasBeenSet) {
    mapSize++;
  }
  if (m_tagsHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_flywheelArnHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("FlywheelArn"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_flywheelArn.c_str()));
  }

  if (m_datasetNameHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("DatasetName"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_datasetName.c_str()));
  }

  if (m_datasetTypeHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("DatasetType"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(DatasetTypeMapper::GetNameForDatasetType(m_datasetType).c_str()));
  }

  if (m_descriptionHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("Description"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_description.c_str()));
  }

  if (m_inputDataConfigHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("InputDataConfig"));
    m_inputDataConfig.CborEncode(encoder);
  }

  if (m_clientRequestTokenHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("ClientRequestToken"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_clientRequestToken.c_str()));
  }

  if (m_tagsHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("Tags"));
    encoder.WriteArrayStart(m_tags.size());
    for (const auto& item_0 : m_tags) {
      item_0.CborEncode(encoder);
    }
  }
  const auto str = Aws::String(reinterpret_cast<char*>(encoder.GetEncodedData().ptr), encoder.GetEncodedData().len);
  return str;
}

Aws::Http::HeaderValueCollection CreateDatasetRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.emplace(Aws::Http::CONTENT_TYPE_HEADER, Aws::CBOR_CONTENT_TYPE);
  headers.emplace(Aws::Http::SMITHY_PROTOCOL_HEADER, Aws::RPC_V2_CBOR);
  headers.emplace(Aws::Http::ACCEPT_HEADER, Aws::CBOR_CONTENT_TYPE);
  return headers;
}
