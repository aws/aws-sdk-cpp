/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/DisassociateHoursOfOperationsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Connect::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String DisassociateHoursOfOperationsRequest::SerializePayload() const {
  JsonValue payload;

  if (m_parentHoursOfOperationIdsHasBeenSet) {
    Aws::Utils::Array<JsonValue> parentHoursOfOperationIdsJsonList(m_parentHoursOfOperationIds.size());
    for (unsigned parentHoursOfOperationIdsIndex = 0; parentHoursOfOperationIdsIndex < parentHoursOfOperationIdsJsonList.GetLength();
         ++parentHoursOfOperationIdsIndex) {
      parentHoursOfOperationIdsJsonList[parentHoursOfOperationIdsIndex].AsString(
          m_parentHoursOfOperationIds[parentHoursOfOperationIdsIndex]);
    }
    payload.WithArray("ParentHoursOfOperationIds", std::move(parentHoursOfOperationIdsJsonList));
  }

  return payload.View().WriteReadable();
}
