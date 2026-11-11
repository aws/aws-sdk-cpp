/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/HashingUtils.h>
#include <aws/crt/cbor/Cbor.h>
#include <aws/datasync/model/CreateLocationSmbRequest.h>

#include <utility>

using namespace Aws::DataSync::Model;
using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

Aws::String CreateLocationSmbRequest::SerializePayload() const {
  Aws::Crt::Cbor::CborEncoder encoder;

  // Calculate map size
  size_t mapSize = 0;
  if (m_subdirectoryHasBeenSet) {
    mapSize++;
  }
  if (m_serverHostnameHasBeenSet) {
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
  if (m_agentArnsHasBeenSet) {
    mapSize++;
  }
  if (m_mountOptionsHasBeenSet) {
    mapSize++;
  }
  if (m_tagsHasBeenSet) {
    mapSize++;
  }
  if (m_authenticationTypeHasBeenSet) {
    mapSize++;
  }
  if (m_dnsIpAddressesHasBeenSet) {
    mapSize++;
  }
  if (m_kerberosPrincipalHasBeenSet) {
    mapSize++;
  }
  if (m_kerberosKeytabHasBeenSet) {
    mapSize++;
  }
  if (m_kerberosKrb5ConfHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_subdirectoryHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("Subdirectory"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_subdirectory.c_str()));
  }

  if (m_serverHostnameHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("ServerHostname"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_serverHostname.c_str()));
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

  if (m_agentArnsHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("AgentArns"));
    encoder.WriteArrayStart(m_agentArns.size());
    for (const auto& item_0 : m_agentArns) {
      encoder.WriteText(Aws::Crt::ByteCursorFromCString(item_0.c_str()));
    }
  }

  if (m_mountOptionsHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("MountOptions"));
    m_mountOptions.CborEncode(encoder);
  }

  if (m_tagsHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("Tags"));
    encoder.WriteArrayStart(m_tags.size());
    for (const auto& item_0 : m_tags) {
      item_0.CborEncode(encoder);
    }
  }

  if (m_authenticationTypeHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("AuthenticationType"));
    encoder.WriteText(
        Aws::Crt::ByteCursorFromCString(SmbAuthenticationTypeMapper::GetNameForSmbAuthenticationType(m_authenticationType).c_str()));
  }

  if (m_dnsIpAddressesHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("DnsIpAddresses"));
    encoder.WriteArrayStart(m_dnsIpAddresses.size());
    for (const auto& item_0 : m_dnsIpAddresses) {
      encoder.WriteText(Aws::Crt::ByteCursorFromCString(item_0.c_str()));
    }
  }

  if (m_kerberosPrincipalHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("KerberosPrincipal"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_kerberosPrincipal.c_str()));
  }

  if (m_kerberosKeytabHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("KerberosKeytab"));
    encoder.WriteBytes(Aws::Crt::ByteCursorFromArray(m_kerberosKeytab.GetUnderlyingData(), m_kerberosKeytab.GetLength()));
  }

  if (m_kerberosKrb5ConfHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("KerberosKrb5Conf"));
    encoder.WriteBytes(Aws::Crt::ByteCursorFromArray(m_kerberosKrb5Conf.GetUnderlyingData(), m_kerberosKrb5Conf.GetLength()));
  }
  const auto str = Aws::String(reinterpret_cast<char*>(encoder.GetEncodedData().ptr), encoder.GetEncodedData().len);
  return str;
}

Aws::Http::HeaderValueCollection CreateLocationSmbRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.emplace(Aws::Http::CONTENT_TYPE_HEADER, Aws::CBOR_CONTENT_TYPE);
  headers.emplace(Aws::Http::SMITHY_PROTOCOL_HEADER, Aws::RPC_V2_CBOR);
  headers.emplace(Aws::Http::ACCEPT_HEADER, Aws::CBOR_CONTENT_TYPE);
  return headers;
}
