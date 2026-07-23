/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appstream/model/StartSoftwareDeploymentToImageBuilderRequest.h>
#include <aws/crt/cbor/Cbor.h>

#include <utility>

using namespace Aws::AppStream::Model;
using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

Aws::String StartSoftwareDeploymentToImageBuilderRequest::SerializePayload() const {
  Aws::Crt::Cbor::CborEncoder encoder;

  // Calculate map size
  size_t mapSize = 0;
  if (m_imageBuilderNameHasBeenSet) {
    mapSize++;
  }
  if (m_retryFailedDeploymentsHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_imageBuilderNameHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("ImageBuilderName"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_imageBuilderName.c_str()));
  }

  if (m_retryFailedDeploymentsHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("RetryFailedDeployments"));
    encoder.WriteBool(m_retryFailedDeployments);
  }
  const auto str = Aws::String(reinterpret_cast<char*>(encoder.GetEncodedData().ptr), encoder.GetEncodedData().len);
  return str;
}

Aws::Http::HeaderValueCollection StartSoftwareDeploymentToImageBuilderRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.emplace(Aws::Http::CONTENT_TYPE_HEADER, Aws::CBOR_CONTENT_TYPE);
  headers.emplace(Aws::Http::SMITHY_PROTOCOL_HEADER, Aws::RPC_V2_CBOR);
  headers.emplace(Aws::Http::ACCEPT_HEADER, Aws::CBOR_CONTENT_TYPE);
  return headers;
}
