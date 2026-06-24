/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/healthlake/model/AnalyticsConfiguration.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace HealthLake {
namespace Model {

AnalyticsConfiguration::AnalyticsConfiguration(JsonView jsonValue) { *this = jsonValue; }

AnalyticsConfiguration& AnalyticsConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Status")) {
    m_status = AnalyticsStatusMapper::GetAnalyticsStatusForName(jsonValue.GetString("Status"));
    m_statusHasBeenSet = true;
  }
  return *this;
}

JsonValue AnalyticsConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_statusHasBeenSet) {
    payload.WithString("Status", AnalyticsStatusMapper::GetNameForAnalyticsStatus(m_status));
  }

  return payload;
}

}  // namespace Model
}  // namespace HealthLake
}  // namespace Aws
