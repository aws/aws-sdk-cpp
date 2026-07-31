/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/kafka/model/UpdateChannelRequest.h>

#include <utility>

using namespace Aws::Kafka::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String UpdateChannelRequest::SerializePayload() const {
  JsonValue payload;

  if (m_icebergDestinationUpdateHasBeenSet) {
    payload.WithObject("icebergDestinationUpdate", m_icebergDestinationUpdate.Jsonize());
  }

  if (m_s3DestinationUpdateHasBeenSet) {
    payload.WithObject("s3DestinationUpdate", m_s3DestinationUpdate.Jsonize());
  }

  return payload.View().WriteReadable();
}
