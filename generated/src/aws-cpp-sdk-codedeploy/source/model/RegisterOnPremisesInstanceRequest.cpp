/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codedeploy/model/RegisterOnPremisesInstanceRequest.h>
#include <aws/crt/cbor/Cbor.h>

#include <utility>

using namespace Aws::CodeDeploy::Model;
using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

Aws::String RegisterOnPremisesInstanceRequest::SerializePayload() const {
  Aws::Crt::Cbor::CborEncoder encoder;

  // Calculate map size
  size_t mapSize = 0;
  if (m_instanceNameHasBeenSet) {
    mapSize++;
  }
  if (m_iamSessionArnHasBeenSet) {
    mapSize++;
  }
  if (m_iamUserArnHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_instanceNameHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("instanceName"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_instanceName.c_str()));
  }

  if (m_iamSessionArnHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("iamSessionArn"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_iamSessionArn.c_str()));
  }

  if (m_iamUserArnHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("iamUserArn"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_iamUserArn.c_str()));
  }
  const auto str = Aws::String(reinterpret_cast<char*>(encoder.GetEncodedData().ptr), encoder.GetEncodedData().len);
  return str;
}

Aws::Http::HeaderValueCollection RegisterOnPremisesInstanceRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.emplace(Aws::Http::CONTENT_TYPE_HEADER, Aws::CBOR_CONTENT_TYPE);
  headers.emplace(Aws::Http::SMITHY_PROTOCOL_HEADER, Aws::RPC_V2_CBOR);
  headers.emplace(Aws::Http::ACCEPT_HEADER, Aws::CBOR_CONTENT_TYPE);
  return headers;
}
