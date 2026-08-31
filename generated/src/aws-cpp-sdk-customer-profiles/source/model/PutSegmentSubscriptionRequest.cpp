/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/customer-profiles/model/PutSegmentSubscriptionRequest.h>

#include <utility>

using namespace Aws::CustomerProfiles::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String PutSegmentSubscriptionRequest::SerializePayload() const {
  JsonValue payload;

  if (m_scheduleConfigurationHasBeenSet) {
    payload.WithObject("ScheduleConfiguration", m_scheduleConfiguration.Jsonize());
  }

  return payload.View().WriteReadable();
}
