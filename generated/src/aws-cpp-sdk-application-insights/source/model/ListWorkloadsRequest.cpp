/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/application-insights/model/ListWorkloadsRequest.h>
#include <aws/crt/cbor/Cbor.h>

#include <utility>

using namespace Aws::ApplicationInsights::Model;
using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

Aws::String ListWorkloadsRequest::SerializePayload() const {
  Aws::Crt::Cbor::CborEncoder encoder;

  // Calculate map size
  size_t mapSize = 0;
  if (m_resourceGroupNameHasBeenSet) {
    mapSize++;
  }
  if (m_componentNameHasBeenSet) {
    mapSize++;
  }
  if (m_maxResultsHasBeenSet) {
    mapSize++;
  }
  if (m_nextTokenHasBeenSet) {
    mapSize++;
  }
  if (m_accountIdHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_resourceGroupNameHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("ResourceGroupName"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_resourceGroupName.c_str()));
  }

  if (m_componentNameHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("ComponentName"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_componentName.c_str()));
  }

  if (m_maxResultsHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("MaxResults"));
    (m_maxResults >= 0) ? encoder.WriteUInt(m_maxResults) : encoder.WriteNegInt(m_maxResults);
  }

  if (m_nextTokenHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("NextToken"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_nextToken.c_str()));
  }

  if (m_accountIdHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("AccountId"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_accountId.c_str()));
  }
  const auto str = Aws::String(reinterpret_cast<char*>(encoder.GetEncodedData().ptr), encoder.GetEncodedData().len);
  return str;
}

Aws::Http::HeaderValueCollection ListWorkloadsRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.emplace(Aws::Http::CONTENT_TYPE_HEADER, Aws::CBOR_CONTENT_TYPE);
  headers.emplace(Aws::Http::SMITHY_PROTOCOL_HEADER, Aws::RPC_V2_CBOR);
  headers.emplace(Aws::Http::ACCEPT_HEADER, Aws::CBOR_CONTENT_TYPE);
  return headers;
}
