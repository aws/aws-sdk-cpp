﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/groundstation/model/RegisterAgentRequest.h>

#include <utility>

using namespace Aws::GroundStation::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String RegisterAgentRequest::SerializePayload() const {
  JsonValue payload;

  if (m_agentDetailsHasBeenSet) {
    payload.WithObject("agentDetails", m_agentDetails.Jsonize());
  }

  if (m_discoveryDataHasBeenSet) {
    payload.WithObject("discoveryData", m_discoveryData.Jsonize());
  }

  if (m_tagsHasBeenSet) {
    JsonValue tagsJsonMap;
    for (auto& tagsItem : m_tags) {
      tagsJsonMap.WithString(tagsItem.first, tagsItem.second);
    }
    payload.WithObject("tags", std::move(tagsJsonMap));
  }

  return payload.View().WriteReadable();
}
