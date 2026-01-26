/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/groundstation/model/TelemetrySinkData.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace GroundStation {
namespace Model {

TelemetrySinkData::TelemetrySinkData(JsonView jsonValue) { *this = jsonValue; }

TelemetrySinkData& TelemetrySinkData::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("kinesisDataStreamData")) {
    m_kinesisDataStreamData = jsonValue.GetObject("kinesisDataStreamData");
    m_kinesisDataStreamDataHasBeenSet = true;
  }
  return *this;
}

JsonValue TelemetrySinkData::Jsonize() const {
  JsonValue payload;

  if (m_kinesisDataStreamDataHasBeenSet) {
    payload.WithObject("kinesisDataStreamData", m_kinesisDataStreamData.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace GroundStation
}  // namespace Aws
