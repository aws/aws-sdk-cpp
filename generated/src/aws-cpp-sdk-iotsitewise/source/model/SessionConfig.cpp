/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/iotsitewise/model/SessionConfig.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace IoTSiteWise {
namespace Model {

SessionConfig::SessionConfig(JsonView jsonValue) { *this = jsonValue; }

SessionConfig& SessionConfig::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("sessionStartTimestamp")) {
    m_sessionStartTimestamp = jsonValue.GetObject("sessionStartTimestamp");
    m_sessionStartTimestampHasBeenSet = true;
  }
  if (jsonValue.ValueExists("sessionEndTimestamp")) {
    m_sessionEndTimestamp = jsonValue.GetObject("sessionEndTimestamp");
    m_sessionEndTimestampHasBeenSet = true;
  }
  return *this;
}

JsonValue SessionConfig::Jsonize() const {
  JsonValue payload;

  if (m_sessionStartTimestampHasBeenSet) {
    payload.WithObject("sessionStartTimestamp", m_sessionStartTimestamp.Jsonize());
  }

  if (m_sessionEndTimestampHasBeenSet) {
    payload.WithObject("sessionEndTimestamp", m_sessionEndTimestamp.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace IoTSiteWise
}  // namespace Aws
