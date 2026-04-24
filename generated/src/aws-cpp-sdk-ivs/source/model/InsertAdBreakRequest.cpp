/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/ivs/model/InsertAdBreakRequest.h>

#include <utility>

using namespace Aws::IVS::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String InsertAdBreakRequest::SerializePayload() const {
  JsonValue payload;

  if (m_channelArnHasBeenSet) {
    payload.WithString("channelArn", m_channelArn);
  }

  if (m_durationSecondsHasBeenSet) {
    payload.WithInteger("durationSeconds", m_durationSeconds);
  }

  return payload.View().WriteReadable();
}
