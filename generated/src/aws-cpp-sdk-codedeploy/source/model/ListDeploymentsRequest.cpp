/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codedeploy/model/ListDeploymentsRequest.h>
#include <aws/crt/cbor/Cbor.h>

#include <utility>

using namespace Aws::CodeDeploy::Model;
using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

Aws::String ListDeploymentsRequest::SerializePayload() const {
  Aws::Crt::Cbor::CborEncoder encoder;

  // Calculate map size
  size_t mapSize = 0;
  if (m_applicationNameHasBeenSet) {
    mapSize++;
  }
  if (m_deploymentGroupNameHasBeenSet) {
    mapSize++;
  }
  if (m_externalIdHasBeenSet) {
    mapSize++;
  }
  if (m_includeOnlyStatusesHasBeenSet) {
    mapSize++;
  }
  if (m_createTimeRangeHasBeenSet) {
    mapSize++;
  }
  if (m_nextTokenHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_applicationNameHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("applicationName"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_applicationName.c_str()));
  }

  if (m_deploymentGroupNameHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("deploymentGroupName"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_deploymentGroupName.c_str()));
  }

  if (m_externalIdHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("externalId"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_externalId.c_str()));
  }

  if (m_includeOnlyStatusesHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("includeOnlyStatuses"));
    encoder.WriteArrayStart(m_includeOnlyStatuses.size());
    for (const auto& item_0 : m_includeOnlyStatuses) {
      encoder.WriteText(Aws::Crt::ByteCursorFromCString(DeploymentStatusMapper::GetNameForDeploymentStatus(item_0).c_str()));
    }
  }

  if (m_createTimeRangeHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("createTimeRange"));
    m_createTimeRange.CborEncode(encoder);
  }

  if (m_nextTokenHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("nextToken"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_nextToken.c_str()));
  }
  const auto str = Aws::String(reinterpret_cast<char*>(encoder.GetEncodedData().ptr), encoder.GetEncodedData().len);
  return str;
}

Aws::Http::HeaderValueCollection ListDeploymentsRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.emplace(Aws::Http::CONTENT_TYPE_HEADER, Aws::CBOR_CONTENT_TYPE);
  headers.emplace(Aws::Http::SMITHY_PROTOCOL_HEADER, Aws::RPC_V2_CBOR);
  headers.emplace(Aws::Http::ACCEPT_HEADER, Aws::CBOR_CONTENT_TYPE);
  return headers;
}
