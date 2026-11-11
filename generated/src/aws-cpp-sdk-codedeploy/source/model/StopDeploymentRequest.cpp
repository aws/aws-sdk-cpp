/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codedeploy/model/StopDeploymentRequest.h>
#include <aws/crt/cbor/Cbor.h>

#include <utility>

using namespace Aws::CodeDeploy::Model;
using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

Aws::String StopDeploymentRequest::SerializePayload() const {
  Aws::Crt::Cbor::CborEncoder encoder;

  // Calculate map size
  size_t mapSize = 0;
  if (m_deploymentIdHasBeenSet) {
    mapSize++;
  }
  if (m_autoRollbackEnabledHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_deploymentIdHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("deploymentId"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_deploymentId.c_str()));
  }

  if (m_autoRollbackEnabledHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("autoRollbackEnabled"));
    encoder.WriteBool(m_autoRollbackEnabled);
  }
  const auto str = Aws::String(reinterpret_cast<char*>(encoder.GetEncodedData().ptr), encoder.GetEncodedData().len);
  return str;
}

Aws::Http::HeaderValueCollection StopDeploymentRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.emplace(Aws::Http::CONTENT_TYPE_HEADER, Aws::CBOR_CONTENT_TYPE);
  headers.emplace(Aws::Http::SMITHY_PROTOCOL_HEADER, Aws::RPC_V2_CBOR);
  headers.emplace(Aws::Http::ACCEPT_HEADER, Aws::CBOR_CONTENT_TYPE);
  return headers;
}
