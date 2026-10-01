/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/health/model/ServiceLifecycleFilter.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Health {
namespace Model {

ServiceLifecycleFilter::ServiceLifecycleFilter(JsonView jsonValue) { *this = jsonValue; }

ServiceLifecycleFilter& ServiceLifecycleFilter::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("service")) {
    m_service = jsonValue.GetString("service");
    m_serviceHasBeenSet = true;
  }
  return *this;
}

JsonValue ServiceLifecycleFilter::Jsonize() const {
  JsonValue payload;

  if (m_serviceHasBeenSet) {
    payload.WithString("service", m_service);
  }

  return payload;
}

}  // namespace Model
}  // namespace Health
}  // namespace Aws
