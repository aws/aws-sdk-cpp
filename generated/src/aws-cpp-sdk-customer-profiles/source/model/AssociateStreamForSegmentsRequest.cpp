/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/customer-profiles/model/AssociateStreamForSegmentsRequest.h>

#include <utility>

using namespace Aws::CustomerProfiles::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String AssociateStreamForSegmentsRequest::SerializePayload() const {
  JsonValue payload;

  if (m_destinationArnHasBeenSet) {
    payload.WithString("DestinationArn", m_destinationArn);
  }

  if (m_destinationRoleArnHasBeenSet) {
    payload.WithString("DestinationRoleArn", m_destinationRoleArn);
  }

  return payload.View().WriteReadable();
}
