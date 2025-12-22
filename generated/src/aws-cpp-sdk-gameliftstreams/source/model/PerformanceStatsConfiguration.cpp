/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/gameliftstreams/model/PerformanceStatsConfiguration.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace GameLiftStreams {
namespace Model {

PerformanceStatsConfiguration::PerformanceStatsConfiguration(JsonView jsonValue) { *this = jsonValue; }

PerformanceStatsConfiguration& PerformanceStatsConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("SharedWithClient")) {
    m_sharedWithClient = jsonValue.GetBool("SharedWithClient");
    m_sharedWithClientHasBeenSet = true;
  }
  return *this;
}

JsonValue PerformanceStatsConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_sharedWithClientHasBeenSet) {
    payload.WithBool("SharedWithClient", m_sharedWithClient);
  }

  return payload;
}

}  // namespace Model
}  // namespace GameLiftStreams
}  // namespace Aws
