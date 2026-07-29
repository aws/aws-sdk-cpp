/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/gameliftstreams/model/RevokeStreamUrlRequest.h>

#include <utility>

using namespace Aws::GameLiftStreams::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String RevokeStreamUrlRequest::SerializePayload() const {
  JsonValue payload;

  if (m_revocationModeHasBeenSet) {
    payload.WithString("RevocationMode", RevocationModeMapper::GetNameForRevocationMode(m_revocationMode));
  }

  return payload.View().WriteReadable();
}
