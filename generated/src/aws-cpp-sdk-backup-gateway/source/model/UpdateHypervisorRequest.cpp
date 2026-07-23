/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/backup-gateway/model/UpdateHypervisorRequest.h>
#include <aws/crt/cbor/Cbor.h>

#include <utility>

using namespace Aws::BackupGateway::Model;
using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

Aws::String UpdateHypervisorRequest::SerializePayload() const {
  Aws::Crt::Cbor::CborEncoder encoder;

  // Calculate map size
  size_t mapSize = 0;
  if (m_hypervisorArnHasBeenSet) {
    mapSize++;
  }
  if (m_hostHasBeenSet) {
    mapSize++;
  }
  if (m_usernameHasBeenSet) {
    mapSize++;
  }
  if (m_passwordHasBeenSet) {
    mapSize++;
  }
  if (m_nameHasBeenSet) {
    mapSize++;
  }
  if (m_logGroupArnHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_hypervisorArnHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("HypervisorArn"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_hypervisorArn.c_str()));
  }

  if (m_hostHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("Host"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_host.c_str()));
  }

  if (m_usernameHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("Username"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_username.c_str()));
  }

  if (m_passwordHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("Password"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_password.c_str()));
  }

  if (m_nameHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("Name"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_name.c_str()));
  }

  if (m_logGroupArnHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("LogGroupArn"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_logGroupArn.c_str()));
  }
  const auto str = Aws::String(reinterpret_cast<char*>(encoder.GetEncodedData().ptr), encoder.GetEncodedData().len);
  return str;
}

Aws::Http::HeaderValueCollection UpdateHypervisorRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.emplace(Aws::Http::CONTENT_TYPE_HEADER, Aws::CBOR_CONTENT_TYPE);
  headers.emplace(Aws::Http::SMITHY_PROTOCOL_HEADER, Aws::RPC_V2_CBOR);
  headers.emplace(Aws::Http::ACCEPT_HEADER, Aws::CBOR_CONTENT_TYPE);
  return headers;
}
