﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/gameliftstreams/model/UpdateStreamGroupRequest.h>

#include <utility>

using namespace Aws::GameLiftStreams::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String UpdateStreamGroupRequest::SerializePayload() const {
  JsonValue payload;

  if (m_locationConfigurationsHasBeenSet) {
    Aws::Utils::Array<JsonValue> locationConfigurationsJsonList(m_locationConfigurations.size());
    for (unsigned locationConfigurationsIndex = 0; locationConfigurationsIndex < locationConfigurationsJsonList.GetLength();
         ++locationConfigurationsIndex) {
      locationConfigurationsJsonList[locationConfigurationsIndex].AsObject(m_locationConfigurations[locationConfigurationsIndex].Jsonize());
    }
    payload.WithArray("LocationConfigurations", std::move(locationConfigurationsJsonList));
  }

  if (m_descriptionHasBeenSet) {
    payload.WithString("Description", m_description);
  }

  if (m_defaultApplicationIdentifierHasBeenSet) {
    payload.WithString("DefaultApplicationIdentifier", m_defaultApplicationIdentifier);
  }

  return payload.View().WriteReadable();
}
