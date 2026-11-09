/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/ivs-realtime/model/RevokeConnectionTokenRequest.h>

#include <utility>

using namespace Aws::ivsrealtime::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String RevokeConnectionTokenRequest::SerializePayload() const {
  JsonValue payload;

  if (m_tokenIdHasBeenSet) {
    payload.WithString("tokenId", m_tokenId);
  }

  return payload.View().WriteReadable();
}
