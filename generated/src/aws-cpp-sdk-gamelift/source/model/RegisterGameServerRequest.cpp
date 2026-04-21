/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/crt/cbor/Cbor.h>
#include <aws/gamelift/model/RegisterGameServerRequest.h>

#include <utility>

using namespace Aws::GameLift::Model;
using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

Aws::String RegisterGameServerRequest::SerializePayload() const {
  Aws::Crt::Cbor::CborEncoder encoder;

  // Calculate map size
  size_t mapSize = 0;
  if (m_gameServerGroupNameHasBeenSet) {
    mapSize++;
  }
  if (m_gameServerIdHasBeenSet) {
    mapSize++;
  }
  if (m_instanceIdHasBeenSet) {
    mapSize++;
  }
  if (m_connectionInfoHasBeenSet) {
    mapSize++;
  }
  if (m_gameServerDataHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_gameServerGroupNameHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("GameServerGroupName"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_gameServerGroupName.c_str()));
  }

  if (m_gameServerIdHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("GameServerId"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_gameServerId.c_str()));
  }

  if (m_instanceIdHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("InstanceId"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_instanceId.c_str()));
  }

  if (m_connectionInfoHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("ConnectionInfo"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_connectionInfo.c_str()));
  }

  if (m_gameServerDataHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("GameServerData"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_gameServerData.c_str()));
  }
  const auto str = Aws::String(reinterpret_cast<char*>(encoder.GetEncodedData().ptr), encoder.GetEncodedData().len);
  return str;
}

Aws::Http::HeaderValueCollection RegisterGameServerRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.emplace(Aws::Http::CONTENT_TYPE_HEADER, Aws::CBOR_CONTENT_TYPE);
  headers.emplace(Aws::Http::SMITHY_PROTOCOL_HEADER, Aws::RPC_V2_CBOR);
  headers.emplace(Aws::Http::ACCEPT_HEADER, Aws::CBOR_CONTENT_TYPE);
  return headers;
}
