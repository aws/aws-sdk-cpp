/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/imagebuilder/model/DistributionFailureContext.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace imagebuilder {
namespace Model {

DistributionFailureContext::DistributionFailureContext(JsonView jsonValue) { *this = jsonValue; }

DistributionFailureContext& DistributionFailureContext::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("errorMessage")) {
    m_errorMessage = jsonValue.GetString("errorMessage");
    m_errorMessageHasBeenSet = true;
  }
  if (jsonValue.ValueExists("regionFailures")) {
    Aws::Utils::Array<JsonView> regionFailuresJsonList = jsonValue.GetArray("regionFailures");
    for (unsigned regionFailuresIndex = 0; regionFailuresIndex < regionFailuresJsonList.GetLength(); ++regionFailuresIndex) {
      m_regionFailures.push_back(regionFailuresJsonList[regionFailuresIndex].AsObject());
    }
    m_regionFailuresHasBeenSet = true;
  }
  return *this;
}

JsonValue DistributionFailureContext::Jsonize() const {
  JsonValue payload;

  if (m_errorMessageHasBeenSet) {
    payload.WithString("errorMessage", m_errorMessage);
  }

  if (m_regionFailuresHasBeenSet) {
    Aws::Utils::Array<JsonValue> regionFailuresJsonList(m_regionFailures.size());
    for (unsigned regionFailuresIndex = 0; regionFailuresIndex < regionFailuresJsonList.GetLength(); ++regionFailuresIndex) {
      regionFailuresJsonList[regionFailuresIndex].AsObject(m_regionFailures[regionFailuresIndex].Jsonize());
    }
    payload.WithArray("regionFailures", std::move(regionFailuresJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace imagebuilder
}  // namespace Aws
