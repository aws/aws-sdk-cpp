/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/groundstation/model/UpdateContactRequest.h>

#include <utility>

using namespace Aws::GroundStation::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String UpdateContactRequest::SerializePayload() const {
  JsonValue payload;

  if (m_clientTokenHasBeenSet) {
    payload.WithString("clientToken", m_clientToken);
  }

  if (m_trackingOverridesHasBeenSet) {
    payload.WithObject("trackingOverrides", m_trackingOverrides.Jsonize());
  }

  if (m_satelliteArnHasBeenSet) {
    payload.WithString("satelliteArn", m_satelliteArn);
  }

  return payload.View().WriteReadable();
}
