﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/iotsitewise/model/ExecuteActionRequest.h>

#include <utility>

using namespace Aws::IoTSiteWise::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String ExecuteActionRequest::SerializePayload() const {
  JsonValue payload;

  if (m_targetResourceHasBeenSet) {
    payload.WithObject("targetResource", m_targetResource.Jsonize());
  }

  if (m_actionDefinitionIdHasBeenSet) {
    payload.WithString("actionDefinitionId", m_actionDefinitionId);
  }

  if (m_actionPayloadHasBeenSet) {
    payload.WithObject("actionPayload", m_actionPayload.Jsonize());
  }

  if (m_clientTokenHasBeenSet) {
    payload.WithString("clientToken", m_clientToken);
  }

  if (m_resolveToHasBeenSet) {
    payload.WithObject("resolveTo", m_resolveTo.Jsonize());
  }

  return payload.View().WriteReadable();
}
