/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/customer-profiles/model/DataStoreResponse.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace CustomerProfiles {
namespace Model {

DataStoreResponse::DataStoreResponse(JsonView jsonValue) { *this = jsonValue; }

DataStoreResponse& DataStoreResponse::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Enabled")) {
    m_enabled = jsonValue.GetBool("Enabled");
    m_enabledHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Readiness")) {
    m_readiness = jsonValue.GetObject("Readiness");
    m_readinessHasBeenSet = true;
  }
  return *this;
}

JsonValue DataStoreResponse::Jsonize() const {
  JsonValue payload;

  if (m_enabledHasBeenSet) {
    payload.WithBool("Enabled", m_enabled);
  }

  if (m_readinessHasBeenSet) {
    payload.WithObject("Readiness", m_readiness.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace CustomerProfiles
}  // namespace Aws
