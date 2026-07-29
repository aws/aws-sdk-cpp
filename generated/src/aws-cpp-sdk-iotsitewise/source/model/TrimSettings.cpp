/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/iotsitewise/model/TrimSettings.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace IoTSiteWise {
namespace Model {

TrimSettings::TrimSettings(JsonView jsonValue) { *this = jsonValue; }

TrimSettings& TrimSettings::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("startTime")) {
    m_startTime = jsonValue.GetObject("startTime");
    m_startTimeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("endTime")) {
    m_endTime = jsonValue.GetObject("endTime");
    m_endTimeHasBeenSet = true;
  }
  return *this;
}

JsonValue TrimSettings::Jsonize() const {
  JsonValue payload;

  if (m_startTimeHasBeenSet) {
    payload.WithObject("startTime", m_startTime.Jsonize());
  }

  if (m_endTimeHasBeenSet) {
    payload.WithObject("endTime", m_endTime.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace IoTSiteWise
}  // namespace Aws
