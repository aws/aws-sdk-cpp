/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/application-signals/model/ReportInstrumentationConfigurationStatusRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ApplicationSignals::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String ReportInstrumentationConfigurationStatusRequest::SerializePayload() const {
  JsonValue payload;

  if (m_serviceHasBeenSet) {
    payload.WithString("Service", m_service);
  }

  if (m_environmentHasBeenSet) {
    payload.WithString("Environment", m_environment);
  }

  if (m_configurationsHasBeenSet) {
    Aws::Utils::Array<JsonValue> configurationsJsonList(m_configurations.size());
    for (unsigned configurationsIndex = 0; configurationsIndex < configurationsJsonList.GetLength(); ++configurationsIndex) {
      configurationsJsonList[configurationsIndex].AsObject(m_configurations[configurationsIndex].Jsonize());
    }
    payload.WithArray("Configurations", std::move(configurationsJsonList));
  }

  return payload.View().WriteReadable();
}
