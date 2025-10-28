/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/groundstation/model/AzElSegmentsData.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace GroundStation {
namespace Model {

AzElSegmentsData::AzElSegmentsData(JsonView jsonValue) { *this = jsonValue; }

AzElSegmentsData& AzElSegmentsData::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("s3Object")) {
    m_s3Object = jsonValue.GetObject("s3Object");
    m_s3ObjectHasBeenSet = true;
  }
  if (jsonValue.ValueExists("azElData")) {
    m_azElData = jsonValue.GetObject("azElData");
    m_azElDataHasBeenSet = true;
  }
  return *this;
}

JsonValue AzElSegmentsData::Jsonize() const {
  JsonValue payload;

  if (m_s3ObjectHasBeenSet) {
    payload.WithObject("s3Object", m_s3Object.Jsonize());
  }

  if (m_azElDataHasBeenSet) {
    payload.WithObject("azElData", m_azElData.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace GroundStation
}  // namespace Aws
