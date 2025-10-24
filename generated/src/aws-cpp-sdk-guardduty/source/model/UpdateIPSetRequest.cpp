﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/guardduty/model/UpdateIPSetRequest.h>

#include <utility>

using namespace Aws::GuardDuty::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String UpdateIPSetRequest::SerializePayload() const {
  JsonValue payload;

  if (m_nameHasBeenSet) {
    payload.WithString("name", m_name);
  }

  if (m_locationHasBeenSet) {
    payload.WithString("location", m_location);
  }

  if (m_activateHasBeenSet) {
    payload.WithBool("activate", m_activate);
  }

  if (m_expectedBucketOwnerHasBeenSet) {
    payload.WithString("expectedBucketOwner", m_expectedBucketOwner);
  }

  return payload.View().WriteReadable();
}
