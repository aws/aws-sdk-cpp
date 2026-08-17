/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/UpdateExtractionDefinitionRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Connect::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String UpdateExtractionDefinitionRequest::SerializePayload() const {
  JsonValue payload;

  if (m_clientTokenHasBeenSet) {
    payload.WithString("ClientToken", m_clientToken);
  }

  if (m_nameHasBeenSet) {
    payload.WithString("Name", m_name);
  }

  if (m_extractionConfigurationHasBeenSet) {
    payload.WithObject("ExtractionConfiguration", m_extractionConfiguration.Jsonize());
  }

  if (m_displayHasBeenSet) {
    payload.WithObject("Display", m_display.Jsonize());
  }

  return payload.View().WriteReadable();
}
