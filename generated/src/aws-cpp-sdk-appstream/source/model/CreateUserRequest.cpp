/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appstream/model/CreateUserRequest.h>
#include <aws/crt/cbor/Cbor.h>

#include <utility>

using namespace Aws::AppStream::Model;
using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

Aws::String CreateUserRequest::SerializePayload() const {
  Aws::Crt::Cbor::CborEncoder encoder;

  // Calculate map size
  size_t mapSize = 0;
  if (m_userNameHasBeenSet) {
    mapSize++;
  }
  if (m_messageActionHasBeenSet) {
    mapSize++;
  }
  if (m_firstNameHasBeenSet) {
    mapSize++;
  }
  if (m_lastNameHasBeenSet) {
    mapSize++;
  }
  if (m_authenticationTypeHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_userNameHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("UserName"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_userName.c_str()));
  }

  if (m_messageActionHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("MessageAction"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(MessageActionMapper::GetNameForMessageAction(m_messageAction).c_str()));
  }

  if (m_firstNameHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("FirstName"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_firstName.c_str()));
  }

  if (m_lastNameHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("LastName"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_lastName.c_str()));
  }

  if (m_authenticationTypeHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("AuthenticationType"));
    encoder.WriteText(
        Aws::Crt::ByteCursorFromCString(AuthenticationTypeMapper::GetNameForAuthenticationType(m_authenticationType).c_str()));
  }
  const auto str = Aws::String(reinterpret_cast<char*>(encoder.GetEncodedData().ptr), encoder.GetEncodedData().len);
  return str;
}

Aws::Http::HeaderValueCollection CreateUserRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.emplace(Aws::Http::CONTENT_TYPE_HEADER, Aws::CBOR_CONTENT_TYPE);
  headers.emplace(Aws::Http::SMITHY_PROTOCOL_HEADER, Aws::RPC_V2_CBOR);
  headers.emplace(Aws::Http::ACCEPT_HEADER, Aws::CBOR_CONTENT_TYPE);
  return headers;
}
