/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/crt/cbor/Cbor.h>
#include <aws/datasync/model/CreateLocationFsxWindowsRequest.h>

#include <utility>

using namespace Aws::DataSync::Model;
using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

Aws::String CreateLocationFsxWindowsRequest::SerializePayload() const {
  Aws::Crt::Cbor::CborEncoder encoder;

  // Calculate map size
  size_t mapSize = 0;
  if (m_subdirectoryHasBeenSet) {
    mapSize++;
  }
  if (m_fsxFilesystemArnHasBeenSet) {
    mapSize++;
  }
  if (m_securityGroupArnsHasBeenSet) {
    mapSize++;
  }
  if (m_tagsHasBeenSet) {
    mapSize++;
  }
  if (m_userHasBeenSet) {
    mapSize++;
  }
  if (m_domainHasBeenSet) {
    mapSize++;
  }
  if (m_passwordHasBeenSet) {
    mapSize++;
  }
  if (m_cmkSecretConfigHasBeenSet) {
    mapSize++;
  }
  if (m_customSecretConfigHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_subdirectoryHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("Subdirectory"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_subdirectory.c_str()));
  }

  if (m_fsxFilesystemArnHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("FsxFilesystemArn"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_fsxFilesystemArn.c_str()));
  }

  if (m_securityGroupArnsHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("SecurityGroupArns"));
    encoder.WriteArrayStart(m_securityGroupArns.size());
    for (const auto& item_0 : m_securityGroupArns) {
      encoder.WriteText(Aws::Crt::ByteCursorFromCString(item_0.c_str()));
    }
  }

  if (m_tagsHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("Tags"));
    encoder.WriteArrayStart(m_tags.size());
    for (const auto& item_0 : m_tags) {
      item_0.CborEncode(encoder);
    }
  }

  if (m_userHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("User"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_user.c_str()));
  }

  if (m_domainHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("Domain"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_domain.c_str()));
  }

  if (m_passwordHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("Password"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_password.c_str()));
  }

  if (m_cmkSecretConfigHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("CmkSecretConfig"));
    m_cmkSecretConfig.CborEncode(encoder);
  }

  if (m_customSecretConfigHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("CustomSecretConfig"));
    m_customSecretConfig.CborEncode(encoder);
  }
  const auto str = Aws::String(reinterpret_cast<char*>(encoder.GetEncodedData().ptr), encoder.GetEncodedData().len);
  return str;
}

Aws::Http::HeaderValueCollection CreateLocationFsxWindowsRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.emplace(Aws::Http::CONTENT_TYPE_HEADER, Aws::CBOR_CONTENT_TYPE);
  headers.emplace(Aws::Http::SMITHY_PROTOCOL_HEADER, Aws::RPC_V2_CBOR);
  headers.emplace(Aws::Http::ACCEPT_HEADER, Aws::CBOR_CONTENT_TYPE);
  return headers;
}
