/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/ds/model/CreateConditionalForwarderRequest.h>

#include <utility>

using namespace Aws::DirectoryService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String CreateConditionalForwarderRequest::SerializePayload() const {
  JsonValue payload;

  if (m_directoryIdHasBeenSet) {
    payload.WithString("DirectoryId", m_directoryId);
  }

  if (m_remoteDomainNameHasBeenSet) {
    payload.WithString("RemoteDomainName", m_remoteDomainName);
  }

  if (m_dnsIpAddrsHasBeenSet) {
    Aws::Utils::Array<JsonValue> dnsIpAddrsJsonList(m_dnsIpAddrs.size());
    for (unsigned dnsIpAddrsIndex = 0; dnsIpAddrsIndex < dnsIpAddrsJsonList.GetLength(); ++dnsIpAddrsIndex) {
      dnsIpAddrsJsonList[dnsIpAddrsIndex].AsString(m_dnsIpAddrs[dnsIpAddrsIndex]);
    }
    payload.WithArray("DnsIpAddrs", std::move(dnsIpAddrsJsonList));
  }

  if (m_dnsIpv6AddrsHasBeenSet) {
    Aws::Utils::Array<JsonValue> dnsIpv6AddrsJsonList(m_dnsIpv6Addrs.size());
    for (unsigned dnsIpv6AddrsIndex = 0; dnsIpv6AddrsIndex < dnsIpv6AddrsJsonList.GetLength(); ++dnsIpv6AddrsIndex) {
      dnsIpv6AddrsJsonList[dnsIpv6AddrsIndex].AsString(m_dnsIpv6Addrs[dnsIpv6AddrsIndex]);
    }
    payload.WithArray("DnsIpv6Addrs", std::move(dnsIpv6AddrsJsonList));
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CreateConditionalForwarderRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "DirectoryService_20150416.CreateConditionalForwarder"));
  return headers;
}
