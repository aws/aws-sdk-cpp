/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codebuild/model/ImportSourceCredentialsRequest.h>
#include <aws/crt/cbor/Cbor.h>

#include <utility>

using namespace Aws::CodeBuild::Model;
using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

Aws::String ImportSourceCredentialsRequest::SerializePayload() const {
  Aws::Crt::Cbor::CborEncoder encoder;

  // Calculate map size
  size_t mapSize = 0;
  if (m_usernameHasBeenSet) {
    mapSize++;
  }
  if (m_tokenHasBeenSet) {
    mapSize++;
  }
  if (m_serverTypeHasBeenSet) {
    mapSize++;
  }
  if (m_authTypeHasBeenSet) {
    mapSize++;
  }
  if (m_shouldOverwriteHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_usernameHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("username"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_username.c_str()));
  }

  if (m_tokenHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("token"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_token.c_str()));
  }

  if (m_serverTypeHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("serverType"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(ServerTypeMapper::GetNameForServerType(m_serverType).c_str()));
  }

  if (m_authTypeHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("authType"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(AuthTypeMapper::GetNameForAuthType(m_authType).c_str()));
  }

  if (m_shouldOverwriteHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("shouldOverwrite"));
    encoder.WriteBool(m_shouldOverwrite);
  }
  const auto str = Aws::String(reinterpret_cast<char*>(encoder.GetEncodedData().ptr), encoder.GetEncodedData().len);
  return str;
}

Aws::Http::HeaderValueCollection ImportSourceCredentialsRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.emplace(Aws::Http::CONTENT_TYPE_HEADER, Aws::CBOR_CONTENT_TYPE);
  headers.emplace(Aws::Http::SMITHY_PROTOCOL_HEADER, Aws::RPC_V2_CBOR);
  headers.emplace(Aws::Http::ACCEPT_HEADER, Aws::CBOR_CONTENT_TYPE);
  return headers;
}
