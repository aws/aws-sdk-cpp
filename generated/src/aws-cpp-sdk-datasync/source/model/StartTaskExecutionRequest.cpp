/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/crt/cbor/Cbor.h>
#include <aws/datasync/model/StartTaskExecutionRequest.h>

#include <utility>

using namespace Aws::DataSync::Model;
using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

Aws::String StartTaskExecutionRequest::SerializePayload() const {
  Aws::Crt::Cbor::CborEncoder encoder;

  // Calculate map size
  size_t mapSize = 0;
  if (m_taskArnHasBeenSet) {
    mapSize++;
  }
  if (m_overrideOptionsHasBeenSet) {
    mapSize++;
  }
  if (m_includesHasBeenSet) {
    mapSize++;
  }
  if (m_excludesHasBeenSet) {
    mapSize++;
  }
  if (m_manifestConfigHasBeenSet) {
    mapSize++;
  }
  if (m_taskReportConfigHasBeenSet) {
    mapSize++;
  }
  if (m_tagsHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_taskArnHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("TaskArn"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_taskArn.c_str()));
  }

  if (m_overrideOptionsHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("OverrideOptions"));
    m_overrideOptions.CborEncode(encoder);
  }

  if (m_includesHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("Includes"));
    encoder.WriteArrayStart(m_includes.size());
    for (const auto& item_0 : m_includes) {
      item_0.CborEncode(encoder);
    }
  }

  if (m_excludesHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("Excludes"));
    encoder.WriteArrayStart(m_excludes.size());
    for (const auto& item_0 : m_excludes) {
      item_0.CborEncode(encoder);
    }
  }

  if (m_manifestConfigHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("ManifestConfig"));
    m_manifestConfig.CborEncode(encoder);
  }

  if (m_taskReportConfigHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("TaskReportConfig"));
    m_taskReportConfig.CborEncode(encoder);
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

Aws::Http::HeaderValueCollection StartTaskExecutionRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.emplace(Aws::Http::CONTENT_TYPE_HEADER, Aws::CBOR_CONTENT_TYPE);
  headers.emplace(Aws::Http::SMITHY_PROTOCOL_HEADER, Aws::RPC_V2_CBOR);
  headers.emplace(Aws::Http::ACCEPT_HEADER, Aws::CBOR_CONTENT_TYPE);
  return headers;
}
