/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/AssociateHoursOfOperationsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Connect::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String AssociateHoursOfOperationsRequest::SerializePayload() const {
  JsonValue payload;

  if (m_parentHoursOfOperationConfigsHasBeenSet) {
    Aws::Utils::Array<JsonValue> parentHoursOfOperationConfigsJsonList(m_parentHoursOfOperationConfigs.size());
    for (unsigned parentHoursOfOperationConfigsIndex = 0;
         parentHoursOfOperationConfigsIndex < parentHoursOfOperationConfigsJsonList.GetLength(); ++parentHoursOfOperationConfigsIndex) {
      parentHoursOfOperationConfigsJsonList[parentHoursOfOperationConfigsIndex].AsObject(
          m_parentHoursOfOperationConfigs[parentHoursOfOperationConfigsIndex].Jsonize());
    }
    payload.WithArray("ParentHoursOfOperationConfigs", std::move(parentHoursOfOperationConfigsJsonList));
  }

  return payload.View().WriteReadable();
}
