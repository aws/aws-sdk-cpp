/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/deadline/model/CreateQueueLimitAssociationRequest.h>

#include <utility>

using namespace Aws::deadline::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String CreateQueueLimitAssociationRequest::SerializePayload() const {
  JsonValue payload;

  if (m_queueIdHasBeenSet) {
    payload.WithString("queueId", m_queueId);
  }

  if (m_limitIdHasBeenSet) {
    payload.WithString("limitId", m_limitId);
  }

  return payload.View().WriteReadable();
}
