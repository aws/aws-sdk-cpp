/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/crt/cbor/Cbor.h>
#include <aws/gamelift/model/RegisterComputeRequest.h>

#include <utility>

using namespace Aws::GameLift::Model;
using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

Aws::String RegisterComputeRequest::SerializePayload() const {
  Aws::Crt::Cbor::CborEncoder encoder;

  // Calculate map size
  size_t mapSize = 0;
  if (m_fleetIdHasBeenSet) {
    mapSize++;
  }
  if (m_computeNameHasBeenSet) {
    mapSize++;
  }
  if (m_certificatePathHasBeenSet) {
    mapSize++;
  }
  if (m_dnsNameHasBeenSet) {
    mapSize++;
  }
  if (m_ipAddressHasBeenSet) {
    mapSize++;
  }
  if (m_locationHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_fleetIdHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("FleetId"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_fleetId.c_str()));
  }

  if (m_computeNameHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("ComputeName"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_computeName.c_str()));
  }

  if (m_certificatePathHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("CertificatePath"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_certificatePath.c_str()));
  }

  if (m_dnsNameHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("DnsName"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_dnsName.c_str()));
  }

  if (m_ipAddressHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("IpAddress"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_ipAddress.c_str()));
  }

  if (m_locationHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("Location"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_location.c_str()));
  }
  const auto str = Aws::String(reinterpret_cast<char*>(encoder.GetEncodedData().ptr), encoder.GetEncodedData().len);
  return str;
}

Aws::Http::HeaderValueCollection RegisterComputeRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.emplace(Aws::Http::CONTENT_TYPE_HEADER, Aws::CBOR_CONTENT_TYPE);
  headers.emplace(Aws::Http::SMITHY_PROTOCOL_HEADER, Aws::RPC_V2_CBOR);
  headers.emplace(Aws::Http::ACCEPT_HEADER, Aws::CBOR_CONTENT_TYPE);
  return headers;
}
