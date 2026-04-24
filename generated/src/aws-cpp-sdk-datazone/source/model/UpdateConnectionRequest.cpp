/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/datazone/model/UpdateConnectionRequest.h>

#include <utility>

using namespace Aws::DataZone::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String UpdateConnectionRequest::SerializePayload() const {
  JsonValue payload;

  if (m_configurationsHasBeenSet) {
    Aws::Utils::Array<JsonValue> configurationsJsonList(m_configurations.size());
    for (unsigned configurationsIndex = 0; configurationsIndex < configurationsJsonList.GetLength(); ++configurationsIndex) {
      configurationsJsonList[configurationsIndex].AsObject(m_configurations[configurationsIndex].Jsonize());
    }
    payload.WithArray("configurations", std::move(configurationsJsonList));
  }

  if (m_descriptionHasBeenSet) {
    payload.WithString("description", m_description);
  }

  if (m_awsLocationHasBeenSet) {
    payload.WithObject("awsLocation", m_awsLocation.Jsonize());
  }

  if (m_propsHasBeenSet) {
    payload.WithObject("props", m_props.Jsonize());
  }

  return payload.View().WriteReadable();
}
