﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/gamelift/model/LocationModel.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace GameLift {
namespace Model {

LocationModel::LocationModel(JsonView jsonValue) { *this = jsonValue; }

LocationModel& LocationModel::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("LocationName")) {
    m_locationName = jsonValue.GetString("LocationName");
    m_locationNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("LocationArn")) {
    m_locationArn = jsonValue.GetString("LocationArn");
    m_locationArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("PingBeacon")) {
    m_pingBeacon = jsonValue.GetObject("PingBeacon");
    m_pingBeaconHasBeenSet = true;
  }
  return *this;
}

JsonValue LocationModel::Jsonize() const {
  JsonValue payload;

  if (m_locationNameHasBeenSet) {
    payload.WithString("LocationName", m_locationName);
  }

  if (m_locationArnHasBeenSet) {
    payload.WithString("LocationArn", m_locationArn);
  }

  if (m_pingBeaconHasBeenSet) {
    payload.WithObject("PingBeacon", m_pingBeacon.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace GameLift
}  // namespace Aws
