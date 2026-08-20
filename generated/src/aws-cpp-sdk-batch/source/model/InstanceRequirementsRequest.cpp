/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/batch/model/InstanceRequirementsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Batch {
namespace Model {

InstanceRequirementsRequest::InstanceRequirementsRequest(JsonView jsonValue) { *this = jsonValue; }

InstanceRequirementsRequest& InstanceRequirementsRequest::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("allowedInstanceTypes")) {
    Aws::Utils::Array<JsonView> allowedInstanceTypesJsonList = jsonValue.GetArray("allowedInstanceTypes");
    for (unsigned allowedInstanceTypesIndex = 0; allowedInstanceTypesIndex < allowedInstanceTypesJsonList.GetLength();
         ++allowedInstanceTypesIndex) {
      m_allowedInstanceTypes.push_back(allowedInstanceTypesJsonList[allowedInstanceTypesIndex].AsString());
    }
    m_allowedInstanceTypesHasBeenSet = true;
  }
  return *this;
}

JsonValue InstanceRequirementsRequest::Jsonize() const {
  JsonValue payload;

  if (m_allowedInstanceTypesHasBeenSet) {
    Aws::Utils::Array<JsonValue> allowedInstanceTypesJsonList(m_allowedInstanceTypes.size());
    for (unsigned allowedInstanceTypesIndex = 0; allowedInstanceTypesIndex < allowedInstanceTypesJsonList.GetLength();
         ++allowedInstanceTypesIndex) {
      allowedInstanceTypesJsonList[allowedInstanceTypesIndex].AsString(m_allowedInstanceTypes[allowedInstanceTypesIndex]);
    }
    payload.WithArray("allowedInstanceTypes", std::move(allowedInstanceTypesJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace Batch
}  // namespace Aws
