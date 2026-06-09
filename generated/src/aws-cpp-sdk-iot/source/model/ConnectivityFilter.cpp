/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/iot/model/ConnectivityFilter.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace IoT {
namespace Model {

ConnectivityFilter::ConnectivityFilter(JsonView jsonValue) { *this = jsonValue; }

ConnectivityFilter& ConnectivityFilter::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("includeSocketInformation")) {
    Aws::Utils::Array<JsonView> includeSocketInformationJsonList = jsonValue.GetArray("includeSocketInformation");
    for (unsigned includeSocketInformationIndex = 0; includeSocketInformationIndex < includeSocketInformationJsonList.GetLength();
         ++includeSocketInformationIndex) {
      m_includeSocketInformation.push_back(
          FleetIndexingApiMapper::GetFleetIndexingApiForName(includeSocketInformationJsonList[includeSocketInformationIndex].AsString()));
    }
    m_includeSocketInformationHasBeenSet = true;
  }
  return *this;
}

JsonValue ConnectivityFilter::Jsonize() const {
  JsonValue payload;

  if (m_includeSocketInformationHasBeenSet) {
    Aws::Utils::Array<JsonValue> includeSocketInformationJsonList(m_includeSocketInformation.size());
    for (unsigned includeSocketInformationIndex = 0; includeSocketInformationIndex < includeSocketInformationJsonList.GetLength();
         ++includeSocketInformationIndex) {
      includeSocketInformationJsonList[includeSocketInformationIndex].AsString(
          FleetIndexingApiMapper::GetNameForFleetIndexingApi(m_includeSocketInformation[includeSocketInformationIndex]));
    }
    payload.WithArray("includeSocketInformation", std::move(includeSocketInformationJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace IoT
}  // namespace Aws
